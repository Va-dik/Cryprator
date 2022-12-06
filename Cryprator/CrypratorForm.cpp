#include "CrypratorForm.h"
#include "AboutProgramForm.h"
#include <Windows.h>

using namespace System::IO;
using namespace System::Collections::Generic;
using namespace Cryprator;

[STAThreadAttribute]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CrypratorForm);
	return 0;
}

System::Void Cryprator::CrypratorForm::CrypratorForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->listView1->LargeImageList = gcnew ImageList();
	pathDic = gcnew Dictionary<TreeNode^, String^>();
	cli::array<DriveInfo^, 1>^ Drives = DriveInfo::GetDrives();
	for (int i = 0; i < Drives->Length; i++)
	{
		if (Drives[i]->DriveType == System::IO::DriveType::Fixed)
		{
			TreeNode^ node = gcnew TreeNode(Drives[i]->Name);
			pathDic->Add(node, Drives[i]->RootDirectory->FullName);
			node->Nodes->Add("");
			treeView1->Nodes->Add(node);
		}
	}

	this->listView1->LargeImageList->ImageSize = System::Drawing::Size(32, 32);
	listView1->LargeImageList->Images->Add("folder", Bitmap::FromFile(Application::StartupPath + "\\" + "folder_icon.png"));
	listView1->LargeImageList->Images->Add("textFile", Bitmap::FromFile(Application::StartupPath + "\\" + "txt_icon.png"));
	listView1->LargeImageList->Images->Add("otherFile", Bitmap::FromFile(Application::StartupPath + "\\" + "otherFile_icon.png"));
}

void Cryprator::CrypratorForm::AddDirectories(TreeNode^ parentNode)
{
	DirectoryInfo^ di = gcnew DirectoryInfo(pathDic[parentNode]);
	if (!di->Exists)
		return;
	cli::array<DirectoryInfo^>^ SubDirs = di->GetDirectories();
	for (int i = 0; i < SubDirs->Length; i++)
	{
		TreeNode^ node = gcnew TreeNode(SubDirs[i]->Name);
		node->Nodes->Add("");
		node->Name = node->Text;
		String^ dirName = SubDirs[i]->FullName;
		if (dirName[dirName->Length - 1] != '\\')
			dirName += "\\";
		pathDic->Add(node, dirName);
		parentNode->Nodes->Add(node);
	}
}

System::Void Cryprator::CrypratorForm::çàøèôðîâàòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
	toolStripButton2_Click(sender, e);
}

System::Void Cryprator::CrypratorForm::äåøèôðîâàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	toolStripButton3_Click(sender, e);
}

System::Void Cryprator::CrypratorForm::îòêðûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	listView1_DoubleClick(sender, e);
}

System::Void Cryprator::CrypratorForm::treeView1_BeforeExpand(System::Object^ sender, System::Windows::Forms::TreeViewCancelEventArgs^ e)
{
	
	if (e->Node->Nodes->Count == 1 && e->Node->Nodes[0]->Text == "")
	{
		e->Node->Nodes->Clear();
		AddDirectories(e->Node);
	}
}

System::Void Cryprator::CrypratorForm::treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e)
{
	DirectoryInfo^ di = gcnew DirectoryInfo(pathDic[e->Node]);
	e->Node->Expand();
	listView1->Items->Clear();
	array<DirectoryInfo^, 1>^ dirs = di->GetDirectories();
	for (int i = 0; i < dirs->Length; i++)
	{
		listView1->Items->Add(dirs[i]->Name, "folder");
	}
	array<FileInfo^>^ files = di->GetFiles();

	for (int i = 0; i < files->Length; i++)
	{
		String^ fileNameExtension = Path::GetExtension(files[i]->Name)->ToLower();

		if (fileNameExtension == ".txt")
		{
			listView1->Items->Add(files[i]->Name, "textFile");
		}
		else
		{
			listView1->Items->Add(files[i]->Name, "otherFile");
		}
	}
}

System::Void Cryprator::CrypratorForm::toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		listView1->Items->Clear();
		treeView1_AfterSelect(sender, gcnew TreeViewEventArgs(treeView1->SelectedNode, TreeViewAction::ByMouse));
	}
	catch (...) {}
}

System::Void Cryprator::CrypratorForm::toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Security::Cryptography::RijndaelManaged^ crpt = gcnew System::Security::Cryptography::RijndaelManaged();
	try
	{
		Security::Cryptography::PasswordDeriveBytes^ pdb = gcnew System::Security::Cryptography::PasswordDeriveBytes("h43Sfke$2die92GznwRz", System::Text::Encoding::Unicode->GetBytes("zDe82Fc7YGjyg13Dfew$km"));
		array<unsigned char>^ key = pdb->GetBytes(32);
		array<unsigned char>^ IV = pdb->GetBytes(16);
		Security::Cryptography::ICryptoTransform^ enc = crpt->CreateEncryptor(key, IV);
		String^ fileName = pathDic[treeView1->SelectedNode] + listView1->SelectedItems[0]->Text;
		FileStream^ fs = gcnew FileStream(fileName, FileMode::Open, FileAccess::ReadWrite);
		key = gcnew cli::array<unsigned char>(fs->Length);
		fs->Read(key, 0, key->Length);
		fs->Close();
		fs = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
		Security::Cryptography::CryptoStream^ cs = gcnew System::Security::Cryptography::CryptoStream(fs, enc, System::Security::Cryptography::CryptoStreamMode::Write);
		cs->Write(key, 0, key->Length);
		cs->Close();
		MessageBox::Show("Ôàéë çàøèôðîâàí");
	}
	catch (Exception^ ee)
	{
	}
}

System::Void Cryprator::CrypratorForm::toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Security::Cryptography::RijndaelManaged^ crpt = gcnew System::Security::Cryptography::RijndaelManaged();
	try
	{
		System::Security::Cryptography::PasswordDeriveBytes^ pdb = gcnew System::Security::Cryptography::PasswordDeriveBytes("h43Sfke$2die92GznwRz", System::Text::Encoding::Unicode->GetBytes("zDe82Fc7YGjyg13Dfew$km"));
		cli::array<unsigned char>^ key = pdb->GetBytes(32);
		cli::array<unsigned char>^ IV = pdb->GetBytes(16);
		System::Security::Cryptography::ICryptoTransform^ enc = crpt->CreateDecryptor(key, IV);
		String^ fileName = pathDic[treeView1->SelectedNode] + listView1->SelectedItems[0]->Text;
		System::IO::FileStream^ fs = gcnew FileStream(fileName, FileMode::Open, FileAccess::ReadWrite);
		key = gcnew cli::array<unsigned char>(fs->Length);
		fs->Read(key, 0, key->Length);
		fs->Close();
		fs = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
		System::Security::Cryptography::CryptoStream^ cs = gcnew System::Security::Cryptography::CryptoStream(fs, enc, System::Security::Cryptography::CryptoStreamMode::Write);
		cs->Write(key, 0, key->Length);
		cs->Close();
		MessageBox::Show("Ôàéë ðàñøèôðîâàí");
	}
	catch (Exception^ ee)
	{
	}
}

System::Void Cryprator::CrypratorForm::UpdateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	toolStripButton1_Click(sender, e);
}

System::Void Cryprator::CrypratorForm::îÏðîãðàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	AboutProgramForm^ aboutProgram = gcnew AboutProgramForm();
	aboutProgram->Show();
}

System::Void Cryprator::CrypratorForm::âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Void Cryprator::CrypratorForm::çàøèôðîâàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	toolStripButton2_Click(sender, e);
}

System::Void Cryprator::CrypratorForm::ðàñøèôðîâàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	toolStripButton3_Click(sender, e);
}

System::Void Cryprator::CrypratorForm::listView1_DoubleClick(System::Object^ sender, System::EventArgs^ e)
{
	try
	{

		String^ fileName = pathDic[treeView1->SelectedNode] + listView1->SelectedItems[0]->Text;
		try
		{
			if ((gcnew DirectoryInfo(fileName))->Exists)
			{
				String^ selName = listView1->SelectedItems[0]->Text;
				cli::array<String^, 1>^ strs = gcnew cli::array<String^, 1>(treeView1->SelectedNode->Nodes->Count);
				for (int i = 0; i < treeView1->SelectedNode->Nodes->Count; i++)
				{
					strs[i] = treeView1->SelectedNode->Nodes[i]->Name;
				}
				treeView1->SelectedNode = treeView1->SelectedNode->Nodes[selName];
				return;
			}
		}
		catch (...)
		{
		}
		System::Diagnostics::Process::Start(fileName);
	}
	catch (...)
	{
	}
}

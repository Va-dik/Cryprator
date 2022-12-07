#include "CrypratorForm.h"

System::Void Cryprator::CrypratorForm::CrypratorForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->listView1->LargeImageList = gcnew ImageList();
	pathDic = gcnew Dictionary<TreeNode^, String^>();
	array<DriveInfo^, 1>^ Drives = DriveInfo::GetDrives();
	for (int i = 0; i < Drives->Length; i++)
	{
		if (Drives[i]->DriveType == IO::DriveType::Fixed)
		{
			TreeNode^ node = gcnew TreeNode(Drives[i]->Name);
			pathDic->Add(node, Drives[i]->RootDirectory->FullName);
			node->Nodes->Add("");
			treeView1->Nodes->Add(node);
		}
	}

	this->listView1->LargeImageList->ImageSize = Drawing::Size(32, 32);
	listView1->LargeImageList->Images->Add("folder", Bitmap::FromFile(Application::StartupPath + "\\" + "folder_icon.png"));
	listView1->LargeImageList->Images->Add("textFile", Bitmap::FromFile(Application::StartupPath + "\\" + "txt_icon.png"));
	listView1->LargeImageList->Images->Add("otherFile", Bitmap::FromFile(Application::StartupPath + "\\" + "otherFile_icon.png"));
}
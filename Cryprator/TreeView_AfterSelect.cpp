#include "CrypratorForm.h"

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
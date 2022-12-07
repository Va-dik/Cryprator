#include "CrypratorForm.h"

void Cryprator::CrypratorForm::AddDirectories(TreeNode^ parentNode)
{
	DirectoryInfo^ di = gcnew DirectoryInfo(pathDic[parentNode]);
	if (!di->Exists)
		return;
	array<DirectoryInfo^>^ SubDirs = di->GetDirectories();
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

System::Void Cryprator::CrypratorForm::treeView1_BeforeExpand(System::Object^ sender, System::Windows::Forms::TreeViewCancelEventArgs^ e)
{

	if (e->Node->Nodes->Count == 1 && e->Node->Nodes[0]->Text == "")
	{
		e->Node->Nodes->Clear();
		AddDirectories(e->Node);
	}
}
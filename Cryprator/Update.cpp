#include "CrypratorForm.h"

System::Void Cryprator::CrypratorForm::toolStripUpdateButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		listView1->Items->Clear();
		treeView1_AfterSelect(sender, gcnew TreeViewEventArgs(treeView1->SelectedNode, TreeViewAction::ByMouse));
	}
	catch (...) {}
}
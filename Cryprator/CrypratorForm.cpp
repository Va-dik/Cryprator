#include "CrypratorForm.h"
#include "AboutProgramForm.h"
#include <Windows.h>

using namespace Cryprator;

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CrypratorForm);
	return 0;
}

System::Void Cryprator::CrypratorForm::Open_DoubleClick(System::Object^ sender, System::EventArgs^ e)
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
		Diagnostics::Process::Start(fileName);
	}
	catch (...)
	{
	}
}

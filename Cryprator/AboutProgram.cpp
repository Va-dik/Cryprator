#include "CrypratorForm.h"
#include "AboutProgramForm.h"

System::Void Cryprator::CrypratorForm::AboutProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	AboutProgramForm^ aboutProgram = gcnew AboutProgramForm();
	aboutProgram->Show();
}
#include "CrypratorForm.h"

System::Void Cryprator::CrypratorForm::toolStripCryptButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	Security::Cryptography::RijndaelManaged^ crpt = gcnew Security::Cryptography::RijndaelManaged();
	try
	{
		Security::Cryptography::PasswordDeriveBytes^ pdb = gcnew Security::Cryptography::PasswordDeriveBytes("h43Sfke$2die92GznwRz", System::Text::Encoding::Unicode->GetBytes("zDe82Fc7YGjyg13Dfew$km"));
		array<unsigned char>^ key = pdb->GetBytes(32);
		array<unsigned char>^ IV = pdb->GetBytes(16);
		Security::Cryptography::ICryptoTransform^ enc = crpt->CreateEncryptor(key, IV);
		String^ fileName = pathDic[treeView1->SelectedNode] + listView1->SelectedItems[0]->Text;
		FileStream^ fs = gcnew FileStream(fileName, FileMode::Open, FileAccess::ReadWrite);
		key = gcnew cli::array<unsigned char>(fs->Length);
		fs->Read(key, 0, key->Length);
		fs->Close();
		fs = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
		Security::Cryptography::CryptoStream^ cs = gcnew Security::Cryptography::CryptoStream(fs, enc, Security::Cryptography::CryptoStreamMode::Write);
		cs->Write(key, 0, key->Length);
		cs->Close();
		MessageBox::Show("Ôאיכ חארטפנמגאם");
	}
	catch (Exception^ ee)
	{
	}
	
	

}
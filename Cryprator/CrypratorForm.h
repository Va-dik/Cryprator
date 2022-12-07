#pragma once


namespace Cryprator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class CrypratorForm : public System::Windows::Forms::Form
	{
	public:
		CrypratorForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CrypratorForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripUpdateButton;
	private: System::Windows::Forms::ToolStripButton^ toolStripCryptButton;
	private: System::Windows::Forms::ToolStripButton^ toolStripDeCryptButton;





	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ContextMenuStrip^ extraMenuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ CryptToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ DeCryptToolStripMenuItem;





	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ UpdateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AboutProgramToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ OpenToolStripMenuItem;




	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CrypratorForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripUpdateButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripCryptButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripDeCryptButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->extraMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->OpenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CryptToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DeCryptToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->UpdateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->extraMenuStrip->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::Transparent;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(22, 22);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripUpdateButton,
					this->toolStripCryptButton, this->toolStripDeCryptButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(965, 29);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripUpdateButton
			// 
			this->toolStripUpdateButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripUpdateButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripUpdateButton.Image")));
			this->toolStripUpdateButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripUpdateButton->Name = L"toolStripUpdateButton";
			this->toolStripUpdateButton->Size = System::Drawing::Size(26, 26);
			this->toolStripUpdateButton->Text = L"toolStripButton1";
			this->toolStripUpdateButton->Click += gcnew System::EventHandler(this, &CrypratorForm::toolStripUpdateButton_Click);
			// 
			// toolStripCryptButton
			// 
			this->toolStripCryptButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripCryptButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripCryptButton.Image")));
			this->toolStripCryptButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripCryptButton->Name = L"toolStripCryptButton";
			this->toolStripCryptButton->Size = System::Drawing::Size(26, 26);
			this->toolStripCryptButton->Text = L"toolStripButton2";
			this->toolStripCryptButton->Click += gcnew System::EventHandler(this, &CrypratorForm::toolStripCryptButton_Click);
			// 
			// toolStripDeCryptButton
			// 
			this->toolStripDeCryptButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripDeCryptButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDeCryptButton.Image")));
			this->toolStripDeCryptButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDeCryptButton->Name = L"toolStripDeCryptButton";
			this->toolStripDeCryptButton->Size = System::Drawing::Size(26, 26);
			this->toolStripDeCryptButton->Text = L"toolStripButton3";
			this->toolStripDeCryptButton->Click += gcnew System::EventHandler(this, &CrypratorForm::toolStripDeCryptButton_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->Controls->Add(this->treeView1);
			this->panel1->Location = System::Drawing::Point(0, 51);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(246, 463);
			this->panel1->TabIndex = 2;
			// 
			// treeView1
			// 
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView1->Location = System::Drawing::Point(0, 0);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(246, 463);
			this->treeView1->TabIndex = 0;
			this->treeView1->BeforeExpand += gcnew System::Windows::Forms::TreeViewCancelEventHandler(this, &CrypratorForm::treeView1_BeforeExpand);
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &CrypratorForm::treeView1_AfterSelect);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add(this->listView1);
			this->panel2->Location = System::Drawing::Point(252, 51);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(713, 463);
			this->panel2->TabIndex = 3;
			// 
			// listView1
			// 
			this->listView1->ContextMenuStrip = this->extraMenuStrip;
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(713, 463);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->DoubleClick += gcnew System::EventHandler(this, &CrypratorForm::Open_DoubleClick);
			// 
			// extraMenuStrip
			// 
			this->extraMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->OpenToolStripMenuItem,
					this->CryptToolStripMenuItem, this->DeCryptToolStripMenuItem
			});
			this->extraMenuStrip->Name = L"contextMenuStrip1";
			this->extraMenuStrip->Size = System::Drawing::Size(153, 70);
			// 
			// OpenToolStripMenuItem
			// 
			this->OpenToolStripMenuItem->Name = L"OpenToolStripMenuItem";
			this->OpenToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->OpenToolStripMenuItem->Text = L"Открыть";
			this->OpenToolStripMenuItem->Click += gcnew System::EventHandler(this, &CrypratorForm::OpenToolStripMenuItem_Click);
			// 
			// CryptToolStripMenuItem
			// 
			this->CryptToolStripMenuItem->Name = L"CryptToolStripMenuItem";
			this->CryptToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->CryptToolStripMenuItem->Text = L"Зашифровать";
			this->CryptToolStripMenuItem->Click += gcnew System::EventHandler(this, &CrypratorForm::CryptToolStripMenuItem_Click);
			// 
			// DeCryptToolStripMenuItem
			// 
			this->DeCryptToolStripMenuItem->Name = L"DeCryptToolStripMenuItem";
			this->DeCryptToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->DeCryptToolStripMenuItem->Text = L"Дешифровать";
			this->DeCryptToolStripMenuItem->Click += gcnew System::EventHandler(this, &CrypratorForm::DeCryptToolStripMenuItem_Click);
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->UpdateToolStripMenuItem,
					this->AboutProgramToolStripMenuItem, this->ExitToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// UpdateToolStripMenuItem
			// 
			this->UpdateToolStripMenuItem->Name = L"UpdateToolStripMenuItem";
			this->UpdateToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->UpdateToolStripMenuItem->Text = L"Обновить";
			this->UpdateToolStripMenuItem->Click += gcnew System::EventHandler(this, &CrypratorForm::UpdateToolStripMenuItem_Click);
			// 
			// AboutProgramToolStripMenuItem
			// 
			this->AboutProgramToolStripMenuItem->Name = L"AboutProgramToolStripMenuItem";
			this->AboutProgramToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->AboutProgramToolStripMenuItem->Text = L"О программе";
			this->AboutProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &CrypratorForm::AboutProgramToolStripMenuItem_Click);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->ExitToolStripMenuItem->Text = L"Выход";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &CrypratorForm::ExitToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(965, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// CrypratorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(965, 514);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CrypratorForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &CrypratorForm::CrypratorForm_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->extraMenuStrip->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/// Словарь с путями файлов, привязаных к узлам дерева каталогов
		Dictionary<TreeNode^, String^>^ pathDic;

	private: System::Void CrypratorForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void treeView1_BeforeExpand(System::Object^ sender, System::Windows::Forms::TreeViewCancelEventArgs^ e);
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e);
	private: System::Void toolStripUpdateButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStripCryptButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStripDeCryptButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void UpdateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AboutProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Open_DoubleClick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CryptToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DeCryptToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void OpenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	void AddDirectories(TreeNode^ parentNode);
};
}

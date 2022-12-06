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
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class CrypratorForm : public System::Windows::Forms::Form
	{
	public:
		CrypratorForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ContextMenuStrip^ extraMenuStrip;


	private: System::Windows::Forms::ToolStripMenuItem^ çàøèôğîâàòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ äåøèôğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ UpdateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem;



	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CrypratorForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->extraMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->çàøèôğîâàòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äåøèôğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->UpdateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(965, 29);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(26, 26);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &CrypratorForm::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(26, 26);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &CrypratorForm::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(26, 26);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &CrypratorForm::toolStripButton3_Click);
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
			this->listView1->DoubleClick += gcnew System::EventHandler(this, &CrypratorForm::listView1_DoubleClick);
			// 
			// extraMenuStrip
			// 
			this->extraMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->îòêğûòüToolStripMenuItem,
					this->çàøèôğîâàòüToolStripMenuItem1, this->äåøèôğîâàòüToolStripMenuItem
			});
			this->extraMenuStrip->Name = L"contextMenuStrip1";
			this->extraMenuStrip->Size = System::Drawing::Size(181, 92);
			// 
			// çàøèôğîâàòüToolStripMenuItem1
			// 
			this->çàøèôğîâàòüToolStripMenuItem1->Name = L"çàøèôğîâàòüToolStripMenuItem1";
			this->çàøèôğîâàòüToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->çàøèôğîâàòüToolStripMenuItem1->Text = L"Çàøèôğîâàòü";
			this->çàøèôğîâàòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CrypratorForm::çàøèôğîâàòüToolStripMenuItem1_Click);
			// 
			// äåøèôğîâàòüToolStripMenuItem
			// 
			this->äåøèôğîâàòüToolStripMenuItem->Name = L"äåøèôğîâàòüToolStripMenuItem";
			this->äåøèôğîâàòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->äåøèôğîâàòüToolStripMenuItem->Text = L"Äåøèôğîâàòü";
			this->äåøèôğîâàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &CrypratorForm::äåøèôğîâàòüToolStripMenuItem_Click);
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->UpdateToolStripMenuItem,
					this->îÏğîãğàììåToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// UpdateToolStripMenuItem
			// 
			this->UpdateToolStripMenuItem->Name = L"UpdateToolStripMenuItem";
			this->UpdateToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->UpdateToolStripMenuItem->Text = L"Îáíîâèòü";
			this->UpdateToolStripMenuItem->Click += gcnew System::EventHandler(this, &CrypratorForm::UpdateToolStripMenuItem_Click);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &CrypratorForm::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &CrypratorForm::âûõîäToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôàéëToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(965, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü";
			this->îòêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &CrypratorForm::îòêğûòüToolStripMenuItem_Click);
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
	/// Ñëîâàğü ñ ïóòÿìè ôàéëîâ, ïğèâÿçàíûõ ê óçëàì äåğåâà êàòàëîãîâ
		Dictionary<TreeNode^, String^>^ pathDic;

	private: System::Void CrypratorForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void treeView1_BeforeExpand(System::Object^ sender, System::Windows::Forms::TreeViewCancelEventArgs^ e);
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e);
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void UpdateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void çàøèôğîâàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ğàñøèôğîâàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void listView1_DoubleClick(System::Object^ sender, System::EventArgs^ e);
	void AddDirectories(TreeNode^ parentNode);
	private: System::Void çàøèôğîâàòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void äåøèôğîâàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void îòêğûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}

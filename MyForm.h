#pragma once
#include "Controller.h"
#include "penForm.h"

namespace Stationary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
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
		~MyForm()
		{
			Controller::Clear();

			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView;
	protected:





	private: System::Windows::Forms::MenuStrip^ menuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createWritingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createPenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createPencilToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ черчениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ циркульToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ доскаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ рисованиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ краскиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ кистиToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgwColumnType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgwColumnName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgwColumnPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgwColumnProperties;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TreeView^ kindTreeView;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Ручки"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Карандаши"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Письменные", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode1,
					treeNode2
			}));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Узел5"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"Узел6"));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"Узел1", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode4,
					treeNode5
			}));
			System::Windows::Forms::TreeNode^ treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"Узел7"));
			System::Windows::Forms::TreeNode^ treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"Узел8"));
			System::Windows::Forms::TreeNode^ treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"Узел2", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode7,
					treeNode8
			}));
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createWritingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createPenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createPencilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->черчениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->циркульToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->доскаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рисованиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->краскиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->кистиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->dgwColumnType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgwColumnName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgwColumnPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgwColumnProperties = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->kindTreeView = (gcnew System::Windows::Forms::TreeView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToAddRows = false;
			this->dataGridView->AllowUserToDeleteRows = false;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dgwColumnType,
					this->dgwColumnName, this->dgwColumnPrice, this->dgwColumnProperties
			});
			this->dataGridView->Location = System::Drawing::Point(12, 154);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			this->dataGridView->Size = System::Drawing::Size(708, 161);
			this->dataGridView->TabIndex = 0;
			// 
			// menuStrip
			// 
			this->menuStrip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(732, 24);
			this->menuStrip->TabIndex = 1;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->createToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->fileToolStripMenuItem->Text = L"Файл";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->openToolStripMenuItem->Text = L"Открыть";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->saveToolStripMenuItem->Text = L"Сохранить";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// createToolStripMenuItem
			// 
			this->createToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->createWritingToolStripMenuItem,
					this->черчениеToolStripMenuItem, this->рисованиеToolStripMenuItem
			});
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->createToolStripMenuItem->Text = L"Создать";
			// 
			// createWritingToolStripMenuItem
			// 
			this->createWritingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->createPenToolStripMenuItem,
					this->createPencilToolStripMenuItem
			});
			this->createWritingToolStripMenuItem->Name = L"createWritingToolStripMenuItem";
			this->createWritingToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->createWritingToolStripMenuItem->Text = L"Письменные";
			// 
			// createPenToolStripMenuItem
			// 
			this->createPenToolStripMenuItem->Name = L"createPenToolStripMenuItem";
			this->createPenToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->createPenToolStripMenuItem->Text = L"Ручка";
			this->createPenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::createPenToolStripMenuItem_Click);
			// 
			// createPencilToolStripMenuItem
			// 
			this->createPencilToolStripMenuItem->Name = L"createPencilToolStripMenuItem";
			this->createPencilToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->createPencilToolStripMenuItem->Text = L"Карандаш";
			// 
			// черчениеToolStripMenuItem
			// 
			this->черчениеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->циркульToolStripMenuItem,
					this->доскаToolStripMenuItem
			});
			this->черчениеToolStripMenuItem->Name = L"черчениеToolStripMenuItem";
			this->черчениеToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->черчениеToolStripMenuItem->Text = L"Черчение";
			// 
			// циркульToolStripMenuItem
			// 
			this->циркульToolStripMenuItem->Name = L"циркульToolStripMenuItem";
			this->циркульToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->циркульToolStripMenuItem->Text = L"Циркуль";
			// 
			// доскаToolStripMenuItem
			// 
			this->доскаToolStripMenuItem->Name = L"доскаToolStripMenuItem";
			this->доскаToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->доскаToolStripMenuItem->Text = L"Доска";
			// 
			// рисованиеToolStripMenuItem
			// 
			this->рисованиеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->краскиToolStripMenuItem,
					this->кистиToolStripMenuItem
			});
			this->рисованиеToolStripMenuItem->Name = L"рисованиеToolStripMenuItem";
			this->рисованиеToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->рисованиеToolStripMenuItem->Text = L"Рисование";
			// 
			// краскиToolStripMenuItem
			// 
			this->краскиToolStripMenuItem->Name = L"краскиToolStripMenuItem";
			this->краскиToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->краскиToolStripMenuItem->Text = L"Краски";
			// 
			// кистиToolStripMenuItem
			// 
			this->кистиToolStripMenuItem->Name = L"кистиToolStripMenuItem";
			this->кистиToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->кистиToolStripMenuItem->Text = L"Кисти";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->exitToolStripMenuItem->Text = L"Выход";
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog_FileOk);
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog_FileOk);
			// 
			// dgwColumnType
			// 
			this->dgwColumnType->HeaderText = L"Вид товара";
			this->dgwColumnType->Name = L"dgwColumnType";
			this->dgwColumnType->ReadOnly = true;
			// 
			// dgwColumnName
			// 
			this->dgwColumnName->HeaderText = L"Название";
			this->dgwColumnName->Name = L"dgwColumnName";
			this->dgwColumnName->ReadOnly = true;
			// 
			// dgwColumnPrice
			// 
			this->dgwColumnPrice->HeaderText = L"Цена";
			this->dgwColumnPrice->Name = L"dgwColumnPrice";
			this->dgwColumnPrice->ReadOnly = true;
			// 
			// dgwColumnProperties
			// 
			this->dgwColumnProperties->HeaderText = L"Свойства";
			this->dgwColumnProperties->Name = L"dgwColumnProperties";
			this->dgwColumnProperties->ReadOnly = true;
			this->dgwColumnProperties->Width = 300;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(156, 121);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(98, 20);
			this->textBox1->TabIndex = 2;
			// 
			// kindTreeView
			// 
			this->kindTreeView->Location = System::Drawing::Point(39, 321);
			this->kindTreeView->Name = L"kindTreeView";
			treeNode1->Checked = true;
			treeNode1->Name = L"penTreeNode";
			treeNode1->Text = L"Ручки";
			treeNode2->Checked = true;
			treeNode2->Name = L"pencilTreeNode";
			treeNode2->Text = L"Карандаши";
			treeNode3->Checked = true;
			treeNode3->Name = L"writingTreeNode";
			treeNode3->Text = L"Письменные";
			treeNode4->Name = L"Узел5";
			treeNode4->Text = L"Узел5";
			treeNode5->Name = L"Узел6";
			treeNode5->Text = L"Узел6";
			treeNode6->Checked = true;
			treeNode6->Name = L"Узел1";
			treeNode6->Text = L"Узел1";
			treeNode7->Name = L"Узел7";
			treeNode7->Text = L"Узел7";
			treeNode8->Name = L"Узел8";
			treeNode8->Text = L"Узел8";
			treeNode9->Checked = true;
			treeNode9->Name = L"Узел2";
			treeNode9->Text = L"Узел2";
			this->kindTreeView->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) { treeNode3, treeNode6, treeNode9 });
			this->kindTreeView->Size = System::Drawing::Size(173, 128);
			this->kindTreeView->TabIndex = 4;
			this->kindTreeView->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::kindTreeView_AfterSelect);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(732, 532);
			this->Controls->Add(this->kindTreeView);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->menuStrip);
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog->ShowDialog();
	}
	private: System::Void openFileDialog_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		String^ filename = openFileDialog->FileName;
		Controller::Load(filename);
		Controller::ShowAll(dataGridView);
	}
private: System::Void createPenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	penForm ^penForm1 = gcnew penForm(dataGridView);
	penForm1->Show();
}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog->ShowDialog();
}
private: System::Void saveFileDialog_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	String^ filename = saveFileDialog->FileName;
	Controller::Save(filename);
}

private: System::Void kindTreeView_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	for each (TreeNode ^ rootNode in kindTreeView->Nodes)
	{
		Containers::pointersContainer.clear();
		for each (TreeNode ^ node in rootNode->Nodes) {
			if (node->Checked) {
				if (node->Name == "penTreeNode") {
					for (size_t i = 0; i < Containers::penItems.getSize(); i++) {
						if (Containers::penItems[i] != nullptr) {
							Containers::pointersContainer.push_back(Containers::penItems[i]);
						}
					}
				}

				if (node->Name == "pencilTreeNode") {
					for (size_t i = 0; i < Containers::penItems.getSize(); i++) {
						if (Containers::penItems[i] != nullptr) {
							Containers::pointersContainer.push_back(Containers::penItems[i]);
						}
					}
				}
			}
		}
	}
	Controller::ShowAll(dataGridView);
}
};
}

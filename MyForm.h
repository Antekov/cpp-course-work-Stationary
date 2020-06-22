#pragma once
#include "Controller.h"
#include "penForm.h"
#include "pencilForm.h"
#include "circularForm.h"
#include <vector>

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
	private: System::Windows::Forms::TextBox^ textBoxSearchName;


	private: System::Windows::Forms::TextBox^ textBoxPriceTo;
	private: System::Windows::Forms::TextBox^ textBoxPriceFrom;
	private: System::Windows::Forms::CheckedListBox^ checkedListBoxKind;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;




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
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->dgwColumnType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgwColumnName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgwColumnPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgwColumnProperties = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->textBoxSearchName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPriceTo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPriceFrom = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBoxKind = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->menuStrip->SuspendLayout();
			this->groupBox1->SuspendLayout();
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
			this->dataGridView->Location = System::Drawing::Point(12, 168);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			this->dataGridView->Size = System::Drawing::Size(645, 228);
			this->dataGridView->TabIndex = 0;
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
			this->menuStrip->Size = System::Drawing::Size(670, 24);
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
			this->createPencilToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::createPencilToolStripMenuItem_Click);
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
			this->циркульToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::циркульToolStripMenuItem_Click);
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
			// textBoxSearchName
			// 
			this->textBoxSearchName->Location = System::Drawing::Point(142, 93);
			this->textBoxSearchName->Name = L"textBoxSearchName";
			this->textBoxSearchName->Size = System::Drawing::Size(87, 20);
			this->textBoxSearchName->TabIndex = 2;
			this->textBoxSearchName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxSearchName_TextChanged);
			// 
			// textBoxPriceTo
			// 
			this->textBoxPriceTo->Location = System::Drawing::Point(292, 93);
			this->textBoxPriceTo->Name = L"textBoxPriceTo";
			this->textBoxPriceTo->Size = System::Drawing::Size(49, 20);
			this->textBoxPriceTo->TabIndex = 5;
			this->textBoxPriceTo->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxPriceFrom_TextChanged);
			// 
			// textBoxPriceFrom
			// 
			this->textBoxPriceFrom->Location = System::Drawing::Point(241, 93);
			this->textBoxPriceFrom->Name = L"textBoxPriceFrom";
			this->textBoxPriceFrom->Size = System::Drawing::Size(45, 20);
			this->textBoxPriceFrom->TabIndex = 6;
			this->textBoxPriceFrom->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxPriceFrom_TextChanged);
			// 
			// checkedListBoxKind
			// 
			this->checkedListBoxKind->CheckOnClick = true;
			this->checkedListBoxKind->FormattingEnabled = true;
			this->checkedListBoxKind->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Ручки", L"Карандаши", L"Циркули", L"Доски",
					L"Краски", L"Кисти"
			});
			this->checkedListBoxKind->Location = System::Drawing::Point(15, 19);
			this->checkedListBoxKind->Name = L"checkedListBoxKind";
			this->checkedListBoxKind->Size = System::Drawing::Size(89, 94);
			this->checkedListBoxKind->TabIndex = 7;
			this->checkedListBoxKind->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &MyForm::checkedListBoxKind_ItemCheck);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBoxPriceFrom);
			this->groupBox1->Controls->Add(this->checkedListBoxKind);
			this->groupBox1->Controls->Add(this->textBoxPriceTo);
			this->groupBox1->Controls->Add(this->textBoxSearchName);
			this->groupBox1->Location = System::Drawing::Point(12, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(645, 125);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Фильтры";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(139, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Название";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(238, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Цена от ... до";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(670, 408);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->menuStrip);
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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


private: System::Void createPencilToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	pencilForm^ pencilForm1 = gcnew pencilForm(dataGridView);
	pencilForm1->Show();
}
private: System::Void textBoxSearchName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ name = textBoxSearchName->Text;

	if (name == "") {
		Controller::ShowAll(dataGridView);
	}
	else {
		Containers::searchResultContainer.clear();

		for (auto st : Containers::pointersContainer) {
			if (st->Name()->Contains(name)) {
				Containers::searchResultContainer.push_back(st);
			}
		}
		Controller::ShowSearchResult(dataGridView);
	}
}
private: System::Void textBoxPriceFrom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
		String^ priceFromStr = textBoxPriceFrom->Text;
		String^ priceToStr = textBoxPriceTo->Text;

		if (priceFromStr == "" && priceToStr == "") {
			Controller::ShowAll(dataGridView);
		}
		else {
			try {
				double price1 = -1;
				if (priceFromStr != "") { price1 = Convert::ToDouble(priceFromStr); }
				double price2 = 1e21;
				if (priceToStr != "") { price2 = Convert::ToDouble(priceToStr); }

				if (price1 > price2) {
					return;
				}


				Containers::searchResultContainer.clear();

				for (auto st : Containers::pointersContainer) {
					if (st->Price() >= price1 && st->Price() <= price2) {
						Containers::searchResultContainer.push_back(st);
					}
				}
				Controller::ShowSearchResult(dataGridView);
			}
			catch (...) {

			}
		}
	
}
private: System::Void checkedListBoxKind_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {
	
	if (checkedListBoxKind->CheckedIndices->Count > 0 || e->NewValue == CheckState::Checked) {

		Containers::searchResultContainer.clear();

		if (e->NewValue == CheckState::Checked) {
			if (e->Index == 0) {
				for (size_t i = 0; i < Containers::penItems.getSize(); i++) {
					if (Containers::penItems[i] != nullptr) {
						Containers::searchResultContainer.push_back(Containers::penItems[i]);
					}
				}
			}

			if (e->Index == 1) {
				for (size_t i = 0; i < Containers::pencilItems.getSize(); i++) {
					if (Containers::pencilItems[i] != nullptr) {
						Containers::searchResultContainer.push_back(Containers::pencilItems[i]);
					}
				}
			}

			if (e->Index == 2) {
				for (size_t i = 0; i < Containers::circularItems.getSize(); i++) {
					if (Containers::circularItems[i] != nullptr) {
						Containers::searchResultContainer.push_back(Containers::circularItems[i]);
					}
				}
			}

			if (e->Index == 3) {
				for (size_t i = 0; i < Containers::boardItems.getSize(); i++) {
					if (Containers::boardItems[i] != nullptr) {
						Containers::searchResultContainer.push_back(Containers::boardItems[i]);
					}
				}
			}

			if (e->Index == 4) {
				for (size_t i = 0; i < Containers::paintsItems.getSize(); i++) {
					if (Containers::paintsItems[i] != nullptr) {
						Containers::searchResultContainer.push_back(Containers::paintsItems[i]);
					}
				}
			}

			if (e->Index == 5) {
				for (size_t i = 0; i < Containers::brushItems.getSize(); i++) {
					if (Containers::brushItems[i] != nullptr) {
						Containers::searchResultContainer.push_back(Containers::brushItems[i]);
					}
				}
			}
		}

		for (int i = 0; i < checkedListBoxKind->CheckedIndices->Count; i++) {
			if (checkedListBoxKind->CheckedIndices[i] == e->Index) {
				continue;
			}
			if (checkedListBoxKind->CheckedIndices[i] == 0) {
				for (size_t i = 0; i < Containers::penItems.getSize(); i++) {
					if (Containers::penItems[i] != nullptr) {
						Containers::searchResultContainer.push_back(Containers::penItems[i]);
					}
				}
			}

			if (checkedListBoxKind->CheckedIndices[i] == 1) {
				for (size_t i = 0; i < Containers::pencilItems.getSize(); i++) {
					if (Containers::pencilItems[i] != nullptr) {
						Containers::searchResultContainer.push_back(Containers::pencilItems[i]);
					}
				}
			}

			if (checkedListBoxKind->CheckedIndices[i] == 2) {
				for (size_t i = 0; i < Containers::circularItems.getSize(); i++) {
					if (Containers::circularItems[i] != nullptr) {
						Containers::searchResultContainer.push_back(Containers::circularItems[i]);
					}
				}
			}

			if (checkedListBoxKind->CheckedIndices[i] == 3) {
				for (size_t i = 0; i < Containers::boardItems.getSize(); i++) {
					if (Containers::boardItems[i] != nullptr) {
						Containers::searchResultContainer.push_back(Containers::boardItems[i]);
					}
				}
			}

			if (checkedListBoxKind->CheckedIndices[i] == 4) {
				for (size_t i = 0; i < Containers::paintsItems.getSize(); i++) {
					if (Containers::paintsItems[i] != nullptr) {
						Containers::searchResultContainer.push_back(Containers::paintsItems[i]);
					}
				}
			}

			if (checkedListBoxKind->CheckedIndices[i] == 5) {
				for (size_t i = 0; i < Containers::brushItems.getSize(); i++) {
					if (Containers::brushItems[i] != nullptr) {
						Containers::searchResultContainer.push_back(Containers::brushItems[i]);
					}
				}
			}
		}

		Controller::ShowSearchResult(dataGridView);
	}
	else {
		Controller::ShowAll(dataGridView);
	}
}
private: System::Void циркульToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	circularForm^ circularForm1 = gcnew circularForm(dataGridView);
	circularForm1->Show();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

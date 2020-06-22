#pragma once
#include "controller.h"

namespace Stationary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для boardForm
	/// </summary>
	public ref class boardForm : public System::Windows::Forms::Form
	{
		DataGridView^ dgv;
	public:
		boardForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		boardForm(DataGridView^ dgv) : dgv(dgv)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~boardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonCreateCircular;
	private: System::Windows::Forms::TextBox^ textBoxSize;
	private: System::Windows::Forms::TextBox^ textBoxCategory;
	private: System::Windows::Forms::TextBox^ textBoxPrice;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxMaterial;
	private: System::Windows::Forms::TextBox^ textBoxWidth;
	private: System::Windows::Forms::TextBox^ textBoxHeight;


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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonCreateCircular = (gcnew System::Windows::Forms::Button());
			this->textBoxSize = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCategory = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxMaterial = (gcnew System::Windows::Forms::TextBox());
			this->textBoxWidth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHeight = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(190, 77);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 17);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Размер";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(190, 21);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 17);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Категория";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 79);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 17);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Цена";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 17);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Название";
			// 
			// buttonCreateCircular
			// 
			this->buttonCreateCircular->Location = System::Drawing::Point(169, 140);
			this->buttonCreateCircular->Margin = System::Windows::Forms::Padding(4);
			this->buttonCreateCircular->Name = L"buttonCreateCircular";
			this->buttonCreateCircular->Size = System::Drawing::Size(187, 38);
			this->buttonCreateCircular->TabIndex = 25;
			this->buttonCreateCircular->Text = L"Создать";
			this->buttonCreateCircular->UseVisualStyleBackColor = true;
			this->buttonCreateCircular->Click += gcnew System::EventHandler(this, &boardForm::buttonCreateBoard_Click);
			// 
			// textBoxSize
			// 
			this->textBoxSize->Location = System::Drawing::Point(194, 97);
			this->textBoxSize->Margin = System::Windows::Forms::Padding(4);
			this->textBoxSize->Name = L"textBoxSize";
			this->textBoxSize->Size = System::Drawing::Size(132, 22);
			this->textBoxSize->TabIndex = 24;
			// 
			// textBoxCategory
			// 
			this->textBoxCategory->Location = System::Drawing::Point(194, 40);
			this->textBoxCategory->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCategory->Name = L"textBoxCategory";
			this->textBoxCategory->Size = System::Drawing::Size(132, 22);
			this->textBoxCategory->TabIndex = 23;
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Location = System::Drawing::Point(13, 96);
			this->textBoxPrice->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(132, 22);
			this->textBoxPrice->TabIndex = 22;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(13, 40);
			this->textBoxName->Margin = System::Windows::Forms::Padding(4);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(132, 22);
			this->textBoxName->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(370, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 17);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Материал";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(370, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 17);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Ширина";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(450, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 17);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Высота";
			// 
			// textBoxMaterial
			// 
			this->textBoxMaterial->Location = System::Drawing::Point(373, 40);
			this->textBoxMaterial->Name = L"textBoxMaterial";
			this->textBoxMaterial->Size = System::Drawing::Size(156, 22);
			this->textBoxMaterial->TabIndex = 33;
			// 
			// textBoxWidth
			// 
			this->textBoxWidth->Location = System::Drawing::Point(373, 96);
			this->textBoxWidth->Name = L"textBoxWidth";
			this->textBoxWidth->Size = System::Drawing::Size(71, 22);
			this->textBoxWidth->TabIndex = 34;
			// 
			// textBoxHeight
			// 
			this->textBoxHeight->Location = System::Drawing::Point(453, 96);
			this->textBoxHeight->Name = L"textBoxHeight";
			this->textBoxHeight->Size = System::Drawing::Size(76, 22);
			this->textBoxHeight->TabIndex = 35;
			// 
			// boardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 197);
			this->Controls->Add(this->textBoxHeight);
			this->Controls->Add(this->textBoxWidth);
			this->Controls->Add(this->textBoxMaterial);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonCreateCircular);
			this->Controls->Add(this->textBoxSize);
			this->Controls->Add(this->textBoxCategory);
			this->Controls->Add(this->textBoxPrice);
			this->Controls->Add(this->textBoxName);
			this->Name = L"boardForm";
			this->Text = L"Новая доска";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void buttonCreateBoard_Click(System::Object^ sender, System::EventArgs^ e) {
	bool isError = false;
	double price, width, height;
	try {
		price = Convert::ToDouble(textBoxPrice->Text);
	}
	catch (FormatException^ e) {
		textBoxPrice->Text = "";
		isError = true;
	}
	try {
		width = Convert::ToDouble(textBoxWidth->Text);
	}
	catch (FormatException^ e) {
		textBoxWidth->Text = "";
		isError = true;
	}

	try {
		height = Convert::ToDouble(textBoxHeight->Text);
	}
	catch (FormatException^ e) {
		textBoxHeight->Text = "";
		isError = true;
	}

	if (isError) { return; }

	//try {
		String^ name = textBoxName->Text;
		String^ category = textBoxCategory->Text;
		String^ size = textBoxSize->Text;
		String^ material = textBoxMaterial->Text;

		Board* board = new Board(name, price, category, size, material, width, height);
		Containers::pointersContainer.push_back(board);
		Containers::boardItems.push_back(board);
		Controller::ShowAll(dgv);
		this->Close();
	//}
	//catch (...) {

	//}
}
};
}

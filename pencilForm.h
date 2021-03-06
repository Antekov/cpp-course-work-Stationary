#pragma once
#include "Controller.h"

namespace Stationary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для pencilForm
	/// </summary>
	public ref class pencilForm : public System::Windows::Forms::Form
	{
	public:
		DataGridView^ dgv;
	public:
		pencilForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		pencilForm(DataGridView^ dgv) : dgv(dgv)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~pencilForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxPrice;
	private: System::Windows::Forms::TextBox^ textBoxColor;
	private: System::Windows::Forms::TextBox^ textBoxThickness;
	protected:




	private: System::Windows::Forms::Button^ buttonCreatePencil;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
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
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->textBoxColor = (gcnew System::Windows::Forms::TextBox());
			this->textBoxThickness = (gcnew System::Windows::Forms::TextBox());
			this->buttonCreatePencil = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(21, 33);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(100, 20);
			this->textBoxName->TabIndex = 0;
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Location = System::Drawing::Point(21, 78);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(100, 20);
			this->textBoxPrice->TabIndex = 1;
			// 
			// textBoxColor
			// 
			this->textBoxColor->Location = System::Drawing::Point(157, 33);
			this->textBoxColor->Name = L"textBoxColor";
			this->textBoxColor->Size = System::Drawing::Size(100, 20);
			this->textBoxColor->TabIndex = 2;
			// 
			// textBoxThickness
			// 
			this->textBoxThickness->Location = System::Drawing::Point(157, 79);
			this->textBoxThickness->Name = L"textBoxThickness";
			this->textBoxThickness->Size = System::Drawing::Size(100, 20);
			this->textBoxThickness->TabIndex = 3;
			// 
			// buttonCreatePencil
			// 
			this->buttonCreatePencil->Location = System::Drawing::Point(67, 117);
			this->buttonCreatePencil->Name = L"buttonCreatePencil";
			this->buttonCreatePencil->Size = System::Drawing::Size(140, 31);
			this->buttonCreatePencil->TabIndex = 4;
			this->buttonCreatePencil->Text = L"Создать";
			this->buttonCreatePencil->UseVisualStyleBackColor = true;
			this->buttonCreatePencil->Click += gcnew System::EventHandler(this, &pencilForm::buttonCreatePencil_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Цена";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Название";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(154, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Цвет";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(154, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Толщина";
			// 
			// pencilForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(280, 166);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonCreatePencil);
			this->Controls->Add(this->textBoxThickness);
			this->Controls->Add(this->textBoxColor);
			this->Controls->Add(this->textBoxPrice);
			this->Controls->Add(this->textBoxName);
			this->Name = L"pencilForm";
			this->Text = L"Новый карандаш";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCreatePencil_Click(System::Object^ sender, System::EventArgs^ e) {
		bool isError = false;
		double price, thickness;
		try {
			price = Convert::ToDouble(textBoxPrice->Text);
		}
		catch (FormatException^) {
			textBoxPrice->Text = "";
			isError = true;
		}
		try {
			thickness = Convert::ToDouble(textBoxThickness->Text);
		}
		catch (FormatException^) {
			textBoxThickness->Text = "";
			isError = true;
		}

		if (isError) { return; }

		try {
			String^ name = textBoxName->Text;
			String^ color = textBoxColor->Text;
				
			Pencil* pencil = new Pencil(name, price, color, thickness);
			Containers::pointersContainer.push_back(pencil);
			Containers::pencilItems.push_back(pencil);
			Controller::ShowAll(dgv);
			this->Close();
		}
		catch (...) {
			
		}
		
	}
};
}

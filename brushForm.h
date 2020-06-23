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
	/// Сводка для brushForm
	/// </summary>
	public ref class brushForm : public System::Windows::Forms::Form
	{
		DataGridView^ dgv;
	public:
		brushForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		brushForm(DataGridView^ dgv) : dgv(dgv)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~brushForm()
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
	private: System::Windows::Forms::Button^ buttonCreateBrush;
	private: System::Windows::Forms::TextBox^ textBoxThickness;
	private: System::Windows::Forms::TextBox^ textBoxType;
	private: System::Windows::Forms::TextBox^ textBoxPrice;
	private: System::Windows::Forms::TextBox^ textBoxName;

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
			this->buttonCreateBrush = (gcnew System::Windows::Forms::Button());
			this->textBoxThickness = (gcnew System::Windows::Forms::TextBox());
			this->textBoxType = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(190, 72);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 17);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Толщина";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(190, 16);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 17);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Тип";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 74);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 17);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Цена";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 16);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 17);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Название";
			// 
			// buttonCreateBrush
			// 
			this->buttonCreateBrush->Location = System::Drawing::Point(74, 139);
			this->buttonCreateBrush->Margin = System::Windows::Forms::Padding(4);
			this->buttonCreateBrush->Name = L"buttonCreateBrush";
			this->buttonCreateBrush->Size = System::Drawing::Size(187, 38);
			this->buttonCreateBrush->TabIndex = 34;
			this->buttonCreateBrush->Text = L"Создать";
			this->buttonCreateBrush->UseVisualStyleBackColor = true;
			this->buttonCreateBrush->Click += gcnew System::EventHandler(this, &brushForm::buttonCreateBrush_Click);
			// 
			// textBoxThickness
			// 
			this->textBoxThickness->Location = System::Drawing::Point(194, 92);
			this->textBoxThickness->Margin = System::Windows::Forms::Padding(4);
			this->textBoxThickness->Name = L"textBoxThickness";
			this->textBoxThickness->Size = System::Drawing::Size(132, 22);
			this->textBoxThickness->TabIndex = 33;
			// 
			// textBoxType
			// 
			this->textBoxType->Location = System::Drawing::Point(194, 35);
			this->textBoxType->Margin = System::Windows::Forms::Padding(4);
			this->textBoxType->Name = L"textBoxType";
			this->textBoxType->Size = System::Drawing::Size(132, 22);
			this->textBoxType->TabIndex = 32;
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Location = System::Drawing::Point(13, 91);
			this->textBoxPrice->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(132, 22);
			this->textBoxPrice->TabIndex = 31;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(13, 35);
			this->textBoxName->Margin = System::Windows::Forms::Padding(4);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(132, 22);
			this->textBoxName->TabIndex = 30;
			// 
			// brushForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 195);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonCreateBrush);
			this->Controls->Add(this->textBoxThickness);
			this->Controls->Add(this->textBoxType);
			this->Controls->Add(this->textBoxPrice);
			this->Controls->Add(this->textBoxName);
			this->Name = L"brushForm";
			this->Text = L"Новая кисть";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCreateBrush_Click(System::Object^ sender, System::EventArgs^ e) {
		bool isError = false;
		double price;
		int thickness;
		try {
			price = Convert::ToDouble(textBoxPrice->Text);
		}
		catch (FormatException^) {
			textBoxPrice->Text = "";
			isError = true;
		}
		try {
			thickness = Convert::ToInt32(textBoxThickness->Text);
			if (thickness < 0) {
				throw gcnew FormatException();
			}
		}
		catch (FormatException^) {
			textBoxThickness->Text = "";
			isError = true;
		}

		if (isError) { return; }

		try {
			String^ name = textBoxName->Text;
			String^ type = textBoxType->Text;

			Brush* brush = new Brush(name, price, type, thickness);
			Containers::pointersContainer.push_back(brush);
			Containers::brushItems.push_back(brush);
			Controller::ShowAll(dgv);
			this->Close();
		}
		catch (...) {

		}
	}
};
}

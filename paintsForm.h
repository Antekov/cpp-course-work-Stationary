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
	/// Сводка для paintsForm
	/// </summary>
	public ref class paintsForm : public System::Windows::Forms::Form
	{
		DataGridView^ dgv;
	public:
		paintsForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		paintsForm(DataGridView^ dgv) : dgv(dgv)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~paintsForm()
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
	private: System::Windows::Forms::Button^ buttonCreatePaints;

	private: System::Windows::Forms::TextBox^ textBoxColorsCount;
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
			this->buttonCreatePaints = (gcnew System::Windows::Forms::Button());
			this->textBoxColorsCount = (gcnew System::Windows::Forms::TextBox());
			this->textBoxType = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(197, 69);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 17);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Кол-во цветов";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(197, 13);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 17);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Тип";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 71);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 17);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Цена";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 13);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 17);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Название";
			// 
			// buttonCreatePaints
			// 
			this->buttonCreatePaints->Location = System::Drawing::Point(81, 136);
			this->buttonCreatePaints->Margin = System::Windows::Forms::Padding(4);
			this->buttonCreatePaints->Name = L"buttonCreatePaints";
			this->buttonCreatePaints->Size = System::Drawing::Size(187, 38);
			this->buttonCreatePaints->TabIndex = 25;
			this->buttonCreatePaints->Text = L"Создать";
			this->buttonCreatePaints->UseVisualStyleBackColor = true;
			this->buttonCreatePaints->Click += gcnew System::EventHandler(this, &paintsForm::buttonCreatePaints_Click);
			// 
			// textBoxColorsCount
			// 
			this->textBoxColorsCount->Location = System::Drawing::Point(201, 89);
			this->textBoxColorsCount->Margin = System::Windows::Forms::Padding(4);
			this->textBoxColorsCount->Name = L"textBoxColorsCount";
			this->textBoxColorsCount->Size = System::Drawing::Size(132, 22);
			this->textBoxColorsCount->TabIndex = 24;
			// 
			// textBoxType
			// 
			this->textBoxType->Location = System::Drawing::Point(201, 32);
			this->textBoxType->Margin = System::Windows::Forms::Padding(4);
			this->textBoxType->Name = L"textBoxType";
			this->textBoxType->Size = System::Drawing::Size(132, 22);
			this->textBoxType->TabIndex = 23;
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Location = System::Drawing::Point(20, 88);
			this->textBoxPrice->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(132, 22);
			this->textBoxPrice->TabIndex = 22;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(20, 32);
			this->textBoxName->Margin = System::Windows::Forms::Padding(4);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(132, 22);
			this->textBoxName->TabIndex = 21;
			// 
			// paintsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(352, 194);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonCreatePaints);
			this->Controls->Add(this->textBoxColorsCount);
			this->Controls->Add(this->textBoxType);
			this->Controls->Add(this->textBoxPrice);
			this->Controls->Add(this->textBoxName);
			this->Name = L"paintsForm";
			this->Text = L"Новые краски";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCreatePaints_Click(System::Object^ sender, System::EventArgs^ e) {
		bool isError = false;
		double price;
		int colorsCount;
		try {
			price = Convert::ToDouble(textBoxPrice->Text);
		}
		catch (FormatException^) {
			textBoxPrice->Text = "";
			isError = true;
		}
		try {
			colorsCount = Convert::ToInt32(textBoxColorsCount->Text);
			if (colorsCount < 0) {
				throw gcnew FormatException();
			}
		}
		catch (FormatException^) {
			textBoxColorsCount->Text = "";
			isError = true;
		}

		if (isError) { return; }

		try {
			String^ name = textBoxName->Text;
			String^ type = textBoxType->Text;

			Paints* paints = new Paints(name, price, type, colorsCount);
			Containers::pointersContainer.push_back(paints);
			Containers::paintsItems.push_back(paints);
			Controller::ShowAll(dgv);
			this->Close();
		}
		catch (...) {

		}
	}
};
}

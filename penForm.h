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
	/// Сводка для penForm
	/// </summary>
	public ref class penForm : public System::Windows::Forms::Form
	{
	public:
		DataGridView^ dgv;
	public:
		penForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		penForm(DataGridView^ dgv) : dgv(dgv) 
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~penForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxPrice;
	private: System::Windows::Forms::TextBox^ textBoxType;
	private: System::Windows::Forms::TextBox^ textBoxColor;
	private: System::Windows::Forms::TextBox^ textBoxModel;
	private: System::Windows::Forms::Button^ buttonCreatePen;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	protected:

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
			this->textBoxType = (gcnew System::Windows::Forms::TextBox());
			this->textBoxColor = (gcnew System::Windows::Forms::TextBox());
			this->textBoxModel = (gcnew System::Windows::Forms::TextBox());
			this->buttonCreatePen = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(17, 33);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(136, 20);
			this->textBoxName->TabIndex = 0;
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Location = System::Drawing::Point(17, 80);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(136, 20);
			this->textBoxPrice->TabIndex = 1;
			// 
			// textBoxType
			// 
			this->textBoxType->Location = System::Drawing::Point(183, 33);
			this->textBoxType->Name = L"textBoxType";
			this->textBoxType->Size = System::Drawing::Size(136, 20);
			this->textBoxType->TabIndex = 2;
			// 
			// textBoxColor
			// 
			this->textBoxColor->Location = System::Drawing::Point(183, 80);
			this->textBoxColor->Name = L"textBoxColor";
			this->textBoxColor->Size = System::Drawing::Size(136, 20);
			this->textBoxColor->TabIndex = 3;
			// 
			// textBoxModel
			// 
			this->textBoxModel->Location = System::Drawing::Point(184, 129);
			this->textBoxModel->Name = L"textBoxModel";
			this->textBoxModel->Size = System::Drawing::Size(136, 20);
			this->textBoxModel->TabIndex = 4;
			// 
			// buttonCreatePen
			// 
			this->buttonCreatePen->Location = System::Drawing::Point(103, 173);
			this->buttonCreatePen->Name = L"buttonCreatePen";
			this->buttonCreatePen->Size = System::Drawing::Size(135, 31);
			this->buttonCreatePen->TabIndex = 5;
			this->buttonCreatePen->Text = L"Создать";
			this->buttonCreatePen->UseVisualStyleBackColor = true;
			this->buttonCreatePen->Click += gcnew System::EventHandler(this, &penForm::buttonCreatePen_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Название";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Цена";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(180, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Тип";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(181, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Цвет";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(181, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Модель";
			// 
			// penForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(340, 218);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonCreatePen);
			this->Controls->Add(this->textBoxModel);
			this->Controls->Add(this->textBoxColor);
			this->Controls->Add(this->textBoxType);
			this->Controls->Add(this->textBoxPrice);
			this->Controls->Add(this->textBoxName);
			this->Name = L"penForm";
			this->Text = L"Новая ручка";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCreatePen_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ name = textBoxName->Text;
			String^ type = textBoxType->Text;
			String^ color = textBoxColor->Text;
			double price = Convert::ToDouble(textBoxPrice->Text);
			String^ model = textBoxModel->Text;
		
			Pen* pen = new Pen(name, price, color, type, model);
			Containers::pointersContainer.push_back(pen);
			Containers::penItems.push_back(pen);
			Controller::ShowAll(dgv);
			this->Close();
		}
		catch (FormatException^) {
			textBoxPrice->Text = "";
		}
		catch (...) {
			
		}
		
	}
};
}

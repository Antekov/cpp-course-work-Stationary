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
	/// Сводка для circularyForm
	/// </summary>
	public ref class circularForm : public System::Windows::Forms::Form
	{
		DataGridView^ dgv;
	public:
		circularForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		circularForm(DataGridView^ dgv) : dgv(dgv)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~circularForm()
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
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(200, 71);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 17);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Размер";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(200, 15);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 17);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Категория";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 73);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Цена";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 15);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 17);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Название";
			// 
			// buttonCreateCircular
			// 
			this->buttonCreateCircular->Location = System::Drawing::Point(84, 138);
			this->buttonCreateCircular->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonCreateCircular->Name = L"buttonCreateCircular";
			this->buttonCreateCircular->Size = System::Drawing::Size(187, 38);
			this->buttonCreateCircular->TabIndex = 16;
			this->buttonCreateCircular->Text = L"Создать";
			this->buttonCreateCircular->UseVisualStyleBackColor = true;
			this->buttonCreateCircular->Click += gcnew System::EventHandler(this, &circularForm::buttonCreateCircular_Click);
			// 
			// textBoxSize
			// 
			this->textBoxSize->Location = System::Drawing::Point(204, 91);
			this->textBoxSize->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxSize->Name = L"textBoxSize";
			this->textBoxSize->Size = System::Drawing::Size(132, 22);
			this->textBoxSize->TabIndex = 15;
			// 
			// textBoxCategory
			// 
			this->textBoxCategory->Location = System::Drawing::Point(204, 34);
			this->textBoxCategory->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxCategory->Name = L"textBoxCategory";
			this->textBoxCategory->Size = System::Drawing::Size(132, 22);
			this->textBoxCategory->TabIndex = 14;
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Location = System::Drawing::Point(23, 90);
			this->textBoxPrice->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(132, 22);
			this->textBoxPrice->TabIndex = 13;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(23, 34);
			this->textBoxName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(132, 22);
			this->textBoxName->TabIndex = 12;
			// 
			// circularForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(361, 198);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonCreateCircular);
			this->Controls->Add(this->textBoxSize);
			this->Controls->Add(this->textBoxCategory);
			this->Controls->Add(this->textBoxPrice);
			this->Controls->Add(this->textBoxName);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"circularForm";
			this->Text = L"Новый циркуль";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void buttonCreateCircular_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ name = textBoxName->Text;
		double price = Convert::ToDouble(textBoxPrice->Text);
		String^ category = textBoxCategory->Text;
		String^ size = textBoxSize->Text;
		
		Circular* circular = new Circular(name, price, category, size);
		Containers::pointersContainer.push_back(circular);
		Containers::circularItems.push_back(circular);
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

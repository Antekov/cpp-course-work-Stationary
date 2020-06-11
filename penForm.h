#pragma once
#include "Containers.h"

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
			this->SuspendLayout();
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(71, 45);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(136, 20);
			this->textBoxName->TabIndex = 0;
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Location = System::Drawing::Point(71, 92);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(136, 20);
			this->textBoxPrice->TabIndex = 1;
			// 
			// textBoxType
			// 
			this->textBoxType->Location = System::Drawing::Point(71, 137);
			this->textBoxType->Name = L"textBoxType";
			this->textBoxType->Size = System::Drawing::Size(136, 20);
			this->textBoxType->TabIndex = 2;
			// 
			// textBoxColor
			// 
			this->textBoxColor->Location = System::Drawing::Point(71, 178);
			this->textBoxColor->Name = L"textBoxColor";
			this->textBoxColor->Size = System::Drawing::Size(136, 20);
			this->textBoxColor->TabIndex = 3;
			// 
			// textBoxModel
			// 
			this->textBoxModel->Location = System::Drawing::Point(71, 219);
			this->textBoxModel->Name = L"textBoxModel";
			this->textBoxModel->Size = System::Drawing::Size(136, 20);
			this->textBoxModel->TabIndex = 4;
			// 
			// buttonCreatePen
			// 
			this->buttonCreatePen->Location = System::Drawing::Point(78, 273);
			this->buttonCreatePen->Name = L"buttonCreatePen";
			this->buttonCreatePen->Size = System::Drawing::Size(107, 37);
			this->buttonCreatePen->TabIndex = 5;
			this->buttonCreatePen->Text = L"Создать";
			this->buttonCreatePen->UseVisualStyleBackColor = true;
			this->buttonCreatePen->Click += gcnew System::EventHandler(this, &penForm::buttonCreatePen_Click);
			// 
			// penForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(310, 349);
			this->Controls->Add(this->buttonCreatePen);
			this->Controls->Add(this->textBoxModel);
			this->Controls->Add(this->textBoxColor);
			this->Controls->Add(this->textBoxType);
			this->Controls->Add(this->textBoxPrice);
			this->Controls->Add(this->textBoxName);
			this->Name = L"penForm";
			this->Text = L"penForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCreatePen_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = textBoxName->Text;
		String^ type = textBoxType->Text;
		String^ color = textBoxColor->Text;
		double price = Convert::ToDouble(textBoxPrice->Text);
		String^ model = textBoxModel->Text;
		try {
			Pen* pen = new Pen(name, price, color, type, model);
			Containers::pointersContainer.push_back(pen);
			Containers::penItems.push_back(pen);
			Containers::ShowAll(dgv);
		}
		catch (...) {
			//System::Windows::Forms::MessageBox msg;
			//msg.Show()
		}
		this->Close();
	}
};
}

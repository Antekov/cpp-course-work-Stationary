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
			this->SuspendLayout();
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(46, 63);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(100, 20);
			this->textBoxName->TabIndex = 0;
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Location = System::Drawing::Point(46, 108);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(100, 20);
			this->textBoxPrice->TabIndex = 1;
			// 
			// textBoxColor
			// 
			this->textBoxColor->Location = System::Drawing::Point(46, 151);
			this->textBoxColor->Name = L"textBoxColor";
			this->textBoxColor->Size = System::Drawing::Size(100, 20);
			this->textBoxColor->TabIndex = 2;
			// 
			// textBoxThickness
			// 
			this->textBoxThickness->Location = System::Drawing::Point(46, 197);
			this->textBoxThickness->Name = L"textBoxThickness";
			this->textBoxThickness->Size = System::Drawing::Size(100, 20);
			this->textBoxThickness->TabIndex = 3;
			// 
			// buttonCreatePencil
			// 
			this->buttonCreatePencil->Location = System::Drawing::Point(46, 241);
			this->buttonCreatePencil->Name = L"buttonCreatePencil";
			this->buttonCreatePencil->Size = System::Drawing::Size(75, 23);
			this->buttonCreatePencil->TabIndex = 4;
			this->buttonCreatePencil->Text = L"Создать";
			this->buttonCreatePencil->UseVisualStyleBackColor = true;
			this->buttonCreatePencil->Click += gcnew System::EventHandler(this, &pencilForm::buttonCreatePencil_Click);
			// 
			// pencilForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 321);
			this->Controls->Add(this->buttonCreatePencil);
			this->Controls->Add(this->textBoxThickness);
			this->Controls->Add(this->textBoxColor);
			this->Controls->Add(this->textBoxPrice);
			this->Controls->Add(this->textBoxName);
			this->Name = L"pencilForm";
			this->Text = L"pencilForm";
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
		catch (FormatException^ e) {
			textBoxPrice->Text = "";
			isError = true;
		}
		try {
			thickness = Convert::ToDouble(textBoxThickness->Text);
		}
		catch (FormatException ^ e) {
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

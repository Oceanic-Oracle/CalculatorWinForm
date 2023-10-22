#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CalculatorForm
	/// </summary>
	public ref class CalculatorForm : public System::Windows::Forms::Form
	{
	public:
		CalculatorForm(void)
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
		~CalculatorForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ result;

	protected:

	private: System::Windows::Forms::Button^ button_AC;
	private: System::Windows::Forms::Button^ button_plus_minus;
	private: System::Windows::Forms::Button^ button_percent;

	private: System::Windows::Forms::Button^ button_divide;






	private: System::Windows::Forms::Button^ button_7;
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_9;
	private: System::Windows::Forms::Button^ button_multiply;




	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_6;
	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_1;







	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_3;
	private: System::Windows::Forms::Button^ button_plus;




	private: System::Windows::Forms::Button^ button_0;


	private: System::Windows::Forms::Button^ button_dot;
	private: System::Windows::Forms::Button^ button_answer;

	private: double first_number;
	private: char action;
	private: bool equal = false;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CalculatorForm::typeid));
			this->result = (gcnew System::Windows::Forms::Label());
			this->button_AC = (gcnew System::Windows::Forms::Button());
			this->button_plus_minus = (gcnew System::Windows::Forms::Button());
			this->button_percent = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_multiply = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->button_answer = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result->ForeColor = System::Drawing::Color::White;
			this->result->Location = System::Drawing::Point(9, 0);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(346, 68);
			this->result->TabIndex = 1;
			this->result->Text = L"0";
			this->result->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// button_AC
			// 
			this->button_AC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button_AC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_AC->Location = System::Drawing::Point(9, 71);
			this->button_AC->Name = L"button_AC";
			this->button_AC->Size = System::Drawing::Size(82, 60);
			this->button_AC->TabIndex = 2;
			this->button_AC->Text = L"AC";
			this->button_AC->UseVisualStyleBackColor = false;
			this->button_AC->Click += gcnew System::EventHandler(this, &CalculatorForm::button_AC_Click);
			// 
			// button_plus_minus
			// 
			this->button_plus_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button_plus_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_plus_minus->Location = System::Drawing::Point(97, 71);
			this->button_plus_minus->Name = L"button_plus_minus";
			this->button_plus_minus->Size = System::Drawing::Size(82, 60);
			this->button_plus_minus->TabIndex = 3;
			this->button_plus_minus->Text = L"+/-";
			this->button_plus_minus->UseVisualStyleBackColor = false;
			this->button_plus_minus->Click += gcnew System::EventHandler(this, &CalculatorForm::button_plus_minus_Click);
			// 
			// button_percent
			// 
			this->button_percent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button_percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_percent->Location = System::Drawing::Point(185, 71);
			this->button_percent->Name = L"button_percent";
			this->button_percent->Size = System::Drawing::Size(82, 60);
			this->button_percent->TabIndex = 4;
			this->button_percent->Text = L"%";
			this->button_percent->UseVisualStyleBackColor = false;
			this->button_percent->Click += gcnew System::EventHandler(this, &CalculatorForm::button_percent_Click);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_divide->Location = System::Drawing::Point(273, 71);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(82, 60);
			this->button_divide->TabIndex = 5;
			this->button_divide->Text = L"/";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &CalculatorForm::button_divide_Click);
			// 
			// button_7
			// 
			this->button_7->Location = System::Drawing::Point(9, 137);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(82, 60);
			this->button_7->TabIndex = 6;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = true;
			this->button_7->Click += gcnew System::EventHandler(this, &CalculatorForm::btn_num_Click);
			// 
			// button_8
			// 
			this->button_8->Location = System::Drawing::Point(97, 137);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(82, 60);
			this->button_8->TabIndex = 7;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = true;
			this->button_8->Click += gcnew System::EventHandler(this, &CalculatorForm::btn_num_Click);
			// 
			// button_9
			// 
			this->button_9->Location = System::Drawing::Point(185, 137);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(82, 60);
			this->button_9->TabIndex = 8;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = true;
			this->button_9->Click += gcnew System::EventHandler(this, &CalculatorForm::btn_num_Click);
			// 
			// button_multiply
			// 
			this->button_multiply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_multiply->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_multiply->Location = System::Drawing::Point(273, 137);
			this->button_multiply->Name = L"button_multiply";
			this->button_multiply->Size = System::Drawing::Size(82, 60);
			this->button_multiply->TabIndex = 9;
			this->button_multiply->Text = L"*";
			this->button_multiply->UseVisualStyleBackColor = false;
			this->button_multiply->Click += gcnew System::EventHandler(this, &CalculatorForm::button_multiply_Click);
			// 
			// button_4
			// 
			this->button_4->Location = System::Drawing::Point(9, 203);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(82, 60);
			this->button_4->TabIndex = 10;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = true;
			this->button_4->Click += gcnew System::EventHandler(this, &CalculatorForm::btn_num_Click);
			// 
			// button_5
			// 
			this->button_5->Location = System::Drawing::Point(97, 203);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(82, 60);
			this->button_5->TabIndex = 11;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = true;
			this->button_5->Click += gcnew System::EventHandler(this, &CalculatorForm::btn_num_Click);
			// 
			// button_6
			// 
			this->button_6->Location = System::Drawing::Point(185, 203);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(82, 60);
			this->button_6->TabIndex = 12;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = true;
			this->button_6->Click += gcnew System::EventHandler(this, &CalculatorForm::btn_num_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_minus->Location = System::Drawing::Point(273, 203);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(82, 60);
			this->button_minus->TabIndex = 13;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &CalculatorForm::button_minus_Click);
			// 
			// button_1
			// 
			this->button_1->Location = System::Drawing::Point(9, 269);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(82, 60);
			this->button_1->TabIndex = 14;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = true;
			this->button_1->Click += gcnew System::EventHandler(this, &CalculatorForm::btn_num_Click);
			// 
			// button_2
			// 
			this->button_2->Location = System::Drawing::Point(97, 269);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(82, 60);
			this->button_2->TabIndex = 15;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = true;
			this->button_2->Click += gcnew System::EventHandler(this, &CalculatorForm::btn_num_Click);
			// 
			// button_3
			// 
			this->button_3->Location = System::Drawing::Point(185, 269);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(82, 60);
			this->button_3->TabIndex = 16;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = true;
			this->button_3->Click += gcnew System::EventHandler(this, &CalculatorForm::btn_num_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_plus->Location = System::Drawing::Point(273, 269);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(82, 60);
			this->button_plus->TabIndex = 17;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &CalculatorForm::button_plus_Click);
			// 
			// button_0
			// 
			this->button_0->Location = System::Drawing::Point(9, 335);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(170, 60);
			this->button_0->TabIndex = 18;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = true;
			this->button_0->Click += gcnew System::EventHandler(this, &CalculatorForm::btn_num_Click);
			// 
			// button_dot
			// 
			this->button_dot->Location = System::Drawing::Point(185, 335);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(82, 60);
			this->button_dot->TabIndex = 20;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = true;
			this->button_dot->Click += gcnew System::EventHandler(this, &CalculatorForm::button_dot_Click);
			// 
			// button_answer
			// 
			this->button_answer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_answer->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->button_answer->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_answer->Location = System::Drawing::Point(273, 335);
			this->button_answer->Name = L"button_answer";
			this->button_answer->Size = System::Drawing::Size(82, 60);
			this->button_answer->TabIndex = 21;
			this->button_answer->Text = L"=";
			this->button_answer->UseVisualStyleBackColor = false;
			this->button_answer->Click += gcnew System::EventHandler(this, &CalculatorForm::button_answer_Click);
			// 
			// CalculatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->ClientSize = System::Drawing::Size(364, 405);
			this->Controls->Add(this->button_answer);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_multiply);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button_percent);
			this->Controls->Add(this->button_plus_minus);
			this->Controls->Add(this->button_AC);
			this->Controls->Add(this->result);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CalculatorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_num_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);

		if (this->result->Text == "0" || this->equal) {
			this->result->Text = button->Text;
			this->equal = false;
		}
		else {
			this->result->Text += button->Text;
		}
	}
	private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void button_multiply_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void math_action(char action) {
		this->first_number = System::Convert::ToDouble(this->result->Text);
		this->action = action;
		this->result->Text = "0";
	}
	private: System::Void button_answer_Click(System::Object^ sender, System::EventArgs^ e) {
		double sum, second_number;
		second_number = System::Convert::ToDouble(this->result->Text);
		switch (this->action) {
		case'+':
			sum = this->first_number + second_number;
			this->result->Text = System::Convert::ToString(sum);
			break;

		case'-':
			sum = this->first_number - second_number;
			this->result->Text = System::Convert::ToString(sum);
			break;

		case'*':
			sum = this->first_number * second_number;
			this->result->Text = System::Convert::ToString(sum);
			break;

		case'/':
			if (second_number == 0) {
				sum = 0;
				MessageBox::Show(this, "На нуль делить нельзя", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				sum = this->first_number / second_number;
			}
			break;
			
		case'%':
			sum = this->first_number * second_number / 100;
			this->result->Text = System::Convert::ToString(sum);
			break;

		default:
			return;
		}
		this->equal = true;
		this->result->Text = System::Convert::ToString(sum);
	}
	private: System::Void button_AC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result->Text = "0";
		this->first_number = 0;
		this->equal = false;
	}
	private: System::Void button_plus_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		double num;
		num = System::Convert::ToDouble(this->result->Text);
		num *= -1;
		this->result->Text = System::Convert::ToString(num);
	}
	private: System::Void button_percent_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}
	private: System::Void button_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->result->Text->Contains(",")) {
			this->result->Text += ",";
		}
	}
};
}

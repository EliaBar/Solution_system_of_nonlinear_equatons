#pragma once
#include "Math.h"
#include "FileNameForm.h"
#include <cctype>
#include <cmath>

namespace SolutonofSLAR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


#define Newton 0
#define Secant 1
#define system1 1
#define system2 2
#define system3 3
#define too_big 100
#define too_small_plus 0.00001
#define too_small_minus -100
#define near_to_ziro -0.00001

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ SLAR_1;

	private: System::Windows::Forms::RadioButton^ SLAR_2;
	private: System::Windows::Forms::RadioButton^ SLAR_3;

	private: System::Windows::Forms::Label^ labale4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ btn_a1;
	private: System::Windows::Forms::TextBox^ btn_a2;
	private: System::Windows::Forms::TextBox^ btn_b1;
	private: System::Windows::Forms::TextBox^ btn_b2;
	private: System::Windows::Forms::TextBox^ btn_precision;

	private: System::Windows::Forms::TextBox^ btn_First_x;
	private: System::Windows::Forms::TextBox^ btn_First_y;

	private: System::Windows::Forms::Label^ Result;
	private: System::Windows::Forms::Label^ label_2;
	private: System::Windows::Forms::Label^ label_3;


	public: double a1 = 0;
	public: double a2 = 0;
	public: double b1 = 0;
	public: double b2 = 0;
	public: double x = 0;
	public: double y = 0;
	public: double precision = 0;
	public: int system_num = 1;
	private: System::Windows::Forms::ComboBox^ btn_Method;
	public:

	public:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Resulr_y;
	private: System::Windows::Forms::Label^ Result_x;
	private: System::Windows::Forms::Label^ R_x;
	private: System::Windows::Forms::Label^ R_y;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ R_i;
	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SLAR_1 = (gcnew System::Windows::Forms::RadioButton());
			this->SLAR_2 = (gcnew System::Windows::Forms::RadioButton());
			this->SLAR_3 = (gcnew System::Windows::Forms::RadioButton());
			this->labale4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btn_a1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_a2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_b1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_b2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_precision = (gcnew System::Windows::Forms::TextBox());
			this->btn_First_x = (gcnew System::Windows::Forms::TextBox());
			this->btn_First_y = (gcnew System::Windows::Forms::TextBox());
			this->Result = (gcnew System::Windows::Forms::Label());
			this->label_2 = (gcnew System::Windows::Forms::Label());
			this->label_3 = (gcnew System::Windows::Forms::Label());
			this->btn_Method = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Resulr_y = (gcnew System::Windows::Forms::Label());
			this->Result_x = (gcnew System::Windows::Forms::Label());
			this->R_x = (gcnew System::Windows::Forms::Label());
			this->R_y = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->R_i = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Olive;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(212, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Вирішення нелінійних СЛАР";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// SLAR_1
			// 
			this->SLAR_1->AutoSize = true;
			this->SLAR_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SLAR_1->Location = System::Drawing::Point(28, 57);
			this->SLAR_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SLAR_1->Name = L"SLAR_1";
			this->SLAR_1->Size = System::Drawing::Size(261, 54);
			this->SLAR_1->TabIndex = 1;
			this->SLAR_1->TabStop = true;
			this->SLAR_1->Text = L"a1 * x^2 + a2 * y^2 = b1\r\na1 * sin(2*x - y) - 12x = b2\r\n";
			this->SLAR_1->UseVisualStyleBackColor = true;
			this->SLAR_1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SLAR_1_CheckedChanged);
			this->SLAR_1->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// SLAR_2
			// 
			this->SLAR_2->AutoSize = true;
			this->SLAR_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SLAR_2->Location = System::Drawing::Point(23, 129);
			this->SLAR_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SLAR_2->Name = L"SLAR_2";
			this->SLAR_2->Size = System::Drawing::Size(266, 54);
			this->SLAR_2->TabIndex = 2;
			this->SLAR_2->TabStop = true;
			this->SLAR_2->Text = L"a1 * sin(x + 1) - a2 * y = b1\r\na1 * x + a2 * cos(y) = b2\r\n";
			this->SLAR_2->UseVisualStyleBackColor = true;
			this->SLAR_2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// SLAR_3
			// 
			this->SLAR_3->AutoSize = true;
			this->SLAR_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SLAR_3->Location = System::Drawing::Point(23, 199);
			this->SLAR_3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SLAR_3->Name = L"SLAR_3";
			this->SLAR_3->Size = System::Drawing::Size(273, 54);
			this->SLAR_3->TabIndex = 3;
			this->SLAR_3->TabStop = true;
			this->SLAR_3->Text = L"a1 * x + a2 * lg(x) - y^2 = b1\r\na1 * x^2 - a2 * x * y - x =b2";
			this->SLAR_3->UseVisualStyleBackColor = true;
			this->SLAR_3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// labale4
			// 
			this->labale4->AutoSize = true;
			this->labale4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labale4->Location = System::Drawing::Point(23, 276);
			this->labale4->Name = L"labale4";
			this->labale4->Size = System::Drawing::Size(43, 25);
			this->labale4->TabIndex = 5;
			this->labale4->Text = L"a1:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(173, 281);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"a2:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(23, 327);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"b1:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(173, 327);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 25);
			this->label7->TabIndex = 8;
			this->label7->Text = L"b2:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(23, 366);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(246, 25);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Початкове значення х:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(23, 402);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(246, 25);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Початкове значення y:";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(23, 442);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 25);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Точність:";
			// 
			// btn_a1
			// 
			this->btn_a1->Location = System::Drawing::Point(72, 281);
			this->btn_a1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_a1->Name = L"btn_a1";
			this->btn_a1->Size = System::Drawing::Size(75, 22);
			this->btn_a1->TabIndex = 12;
			this->btn_a1->Click += gcnew System::EventHandler(this, &MyForm::Enter_a1);
			this->btn_a1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::btn_a1_KeyPress);
			// 
			// btn_a2
			// 
			this->btn_a2->Location = System::Drawing::Point(223, 279);
			this->btn_a2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_a2->Name = L"btn_a2";
			this->btn_a2->Size = System::Drawing::Size(75, 22);
			this->btn_a2->TabIndex = 13;
			this->btn_a2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->btn_a2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::btn_a2_KeyPress);
			// 
			// btn_b1
			// 
			this->btn_b1->Location = System::Drawing::Point(72, 327);
			this->btn_b1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_b1->Name = L"btn_b1";
			this->btn_b1->Size = System::Drawing::Size(75, 22);
			this->btn_b1->TabIndex = 14;
			this->btn_b1->TextChanged += gcnew System::EventHandler(this, &MyForm::btn_b1_TextChanged);
			this->btn_b1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::btn_b1_KeyPress);
			// 
			// btn_b2
			// 
			this->btn_b2->Location = System::Drawing::Point(223, 331);
			this->btn_b2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_b2->Name = L"btn_b2";
			this->btn_b2->Size = System::Drawing::Size(75, 22);
			this->btn_b2->TabIndex = 15;
			this->btn_b2->TextChanged += gcnew System::EventHandler(this, &MyForm::btn_b2_TextChanged);
			this->btn_b2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::btn_b2_KeyPress);
			// 
			// btn_precision
			// 
			this->btn_precision->Location = System::Drawing::Point(141, 448);
			this->btn_precision->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_precision->Name = L"btn_precision";
			this->btn_precision->Size = System::Drawing::Size(103, 22);
			this->btn_precision->TabIndex = 16;
			this->btn_precision->TextChanged += gcnew System::EventHandler(this, &MyForm::btn_precision_TextChanged);
			this->btn_precision->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::btn_precision_KeyPress);
			// 
			// btn_First_x
			// 
			this->btn_First_x->Location = System::Drawing::Point(311, 369);
			this->btn_First_x->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_First_x->Name = L"btn_First_x";
			this->btn_First_x->Size = System::Drawing::Size(75, 22);
			this->btn_First_x->TabIndex = 17;
			this->btn_First_x->TextChanged += gcnew System::EventHandler(this, &MyForm::btn_First_x_TextChanged);
			this->btn_First_x->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::btn_First_x_KeyPress);
			// 
			// btn_First_y
			// 
			this->btn_First_y->Location = System::Drawing::Point(311, 410);
			this->btn_First_y->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_First_y->Name = L"btn_First_y";
			this->btn_First_y->Size = System::Drawing::Size(75, 22);
			this->btn_First_y->TabIndex = 18;
			this->btn_First_y->TextChanged += gcnew System::EventHandler(this, &MyForm::btn_First_y_TextChanged);
			this->btn_First_y->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::btn_First_y_KeyPress);
			// 
			// Result
			// 
			this->Result->AutoSize = true;
			this->Result->BackColor = System::Drawing::Color::Olive;
			this->Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Result->Location = System::Drawing::Point(460, 281);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(127, 25);
			this->Result->TabIndex = 19;
			this->Result->Text = L"Результат:";
			this->Result->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// label_2
			// 
			this->label_2->AutoSize = true;
			this->label_2->BackColor = System::Drawing::Color::Goldenrod;
			this->label_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_2->Location = System::Drawing::Point(419, 334);
			this->label_2->Name = L"label_2";
			this->label_2->Size = System::Drawing::Size(28, 25);
			this->label_2->TabIndex = 20;
			this->label_2->Text = L"x:";
			this->label_2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_2);
			// 
			// label_3
			// 
			this->label_3->AutoSize = true;
			this->label_3->BackColor = System::Drawing::Color::Goldenrod;
			this->label_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_3->Location = System::Drawing::Point(419, 379);
			this->label_3->Name = L"label_3";
			this->label_3->Size = System::Drawing::Size(28, 25);
			this->label_3->TabIndex = 21;
			this->label_3->Text = L"y:";
			// 
			// btn_Method
			// 
			this->btn_Method->FormattingEnabled = true;
			this->btn_Method->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Метод Ньютона", L"Метод січних" });
			this->btn_Method->Location = System::Drawing::Point(123, 501);
			this->btn_Method->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Method->Name = L"btn_Method";
			this->btn_Method->Size = System::Drawing::Size(121, 24);
			this->btn_Method->TabIndex = 24;
			this->btn_Method->Text = L"(Не вибрано)";
			this->btn_Method->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Method_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Olive;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(23, 503);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 25);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Метод:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_3);
			// 
			// Resulr_y
			// 
			this->Resulr_y->AutoSize = true;
			this->Resulr_y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Resulr_y->Location = System::Drawing::Point(545, 442);
			this->Resulr_y->Name = L"Resulr_y";
			this->Resulr_y->Size = System::Drawing::Size(0, 25);
			this->Resulr_y->TabIndex = 23;
			// 
			// Result_x
			// 
			this->Result_x->AutoSize = true;
			this->Result_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Result_x->Location = System::Drawing::Point(545, 393);
			this->Result_x->Name = L"Result_x";
			this->Result_x->Size = System::Drawing::Size(0, 25);
			this->Result_x->TabIndex = 22;
			// 
			// R_x
			// 
			this->R_x->AutoSize = true;
			this->R_x->Location = System::Drawing::Point(462, 337);
			this->R_x->Name = L"R_x";
			this->R_x->Size = System::Drawing::Size(14, 16);
			this->R_x->TabIndex = 26;
			this->R_x->Text = L"0";
			this->R_x->Click += gcnew System::EventHandler(this, &MyForm::R_x_Click);
			// 
			// R_y
			// 
			this->R_y->AutoSize = true;
			this->R_y->Location = System::Drawing::Point(462, 386);
			this->R_y->Name = L"R_y";
			this->R_y->Size = System::Drawing::Size(14, 16);
			this->R_y->TabIndex = 27;
			this->R_y->Text = L"0";
			this->R_y->Click += gcnew System::EventHandler(this, &MyForm::R_y_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Olive;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(515, 475);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 52);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Зберегти результат";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Info;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(349, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(264, 209);
			this->label3->TabIndex = 29;
			this->label3->Text = resources->GetString(L"label3.Text");
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Goldenrod;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(419, 417);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(176, 25);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Кількість ітерацій";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// R_i
			// 
			this->R_i->AutoSize = true;
			this->R_i->Location = System::Drawing::Point(614, 424);
			this->R_i->Name = L"R_i";
			this->R_i->Size = System::Drawing::Size(14, 16);
			this->R_i->TabIndex = 31;
			this->R_i->Text = L"0";
			this->R_i->Click += gcnew System::EventHandler(this, &MyForm::R_i_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGreen;
			this->ClientSize = System::Drawing::Size(661, 546);
			this->Controls->Add(this->R_i);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->R_y);
			this->Controls->Add(this->R_x);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_Method);
			this->Controls->Add(this->Resulr_y);
			this->Controls->Add(this->Result_x);
			this->Controls->Add(this->label_3);
			this->Controls->Add(this->label_2);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->btn_First_y);
			this->Controls->Add(this->btn_First_x);
			this->Controls->Add(this->btn_precision);
			this->Controls->Add(this->btn_b2);
			this->Controls->Add(this->btn_b1);
			this->Controls->Add(this->btn_a2);
			this->Controls->Add(this->btn_a1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->labale4);
			this->Controls->Add(this->SLAR_3);
			this->Controls->Add(this->SLAR_2);
			this->Controls->Add(this->SLAR_1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (SLAR_2->Checked) {
			system_num = system2;
		}

	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (SLAR_3->Checked) {
			system_num = system3;
		}
	}

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SLAR_1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (SLAR_1->Checked) {
			system_num = system1;
		}

	}

	private: void Correct_input()
	{
		if (btn_a1->Text != ""
			&& btn_a2->Text != ""
			&& btn_b1->Text != ""
			&& btn_b2->Text != ""
			&& btn_First_x->Text != ""
			&& btn_First_y->Text != ""
			&& btn_precision->Text != "") {
			R_x->Text = "Сhoose method";
			R_y->Text = "Сhoose method";
			R_i->Text = " 0 ";
		}
		else {
			R_x->Text = "Enter all data";
			R_y->Text = "Enter all data";
			R_i->Text = " 0 ";
		}
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		Correct_input();
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void Enter_a1(System::Object^ sender, System::EventArgs^ e) {
		Correct_input();
	}
	private: System::Void label2_Click_3(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_a1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		Correct_input();
	}
	private: System::Void btn_b1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		Correct_input();
	}
	private: System::Void btn_b2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		Correct_input();
	}
	private: System::Void btn_First_x_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		Correct_input();
	}
	private: System::Void btn_First_y_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		Correct_input();
	}
	private: System::Void btn_precision_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		Correct_input();
	}
		   private: bool Has_result = false;
		   private: int iterations = 0;
	private: void Error_list() {
		if (a1 == 0 || a2 == 0
			|| b1 == 0 || b2 == 0
			|| x == 0 || y == 0
			|| precision == 0)
		{
			MessageBox::Show(this, "You can't enter 0 as parameter", "Error:enter 0", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (a1 > too_big || a2 > too_big
			|| b1 > too_big || b2 > too_big
			|| x > too_big || y > too_big
			|| precision > too_big)
		{
			MessageBox::Show(this, "You can't enter parameter more than 100 ", "Too large value", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
		else if (a1 < 0 && a1>near_to_ziro
			|| a2 < 0 && a2>near_to_ziro
			|| b1 < 0 && b1>near_to_ziro
			|| b2 < 0 && b2>near_to_ziro
			|| x < 0 && x>near_to_ziro
			|| y < 0 && y>near_to_ziro
			|| precision < 0 && precision>near_to_ziro)
		{
			MessageBox::Show(this, "You can't enter parameter closer to 0 than -0.0001 ", "Near to 0 value", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
		else if (a1 < too_small_minus
			|| a2 < too_small_minus
			|| b1 < too_small_minus
			|| b2 < too_small_minus
			|| x < too_small_minus
			|| y < too_small_minus
			|| precision < too_small_minus)
		{
			MessageBox::Show(this, "You can't enter parameter less than -100 ", "Too small value", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
		else if (a1 < too_small_plus && a1>0
			|| a2 < too_small_plus && a2>0
			|| b1 < too_small_plus && b1>0
			|| b2 < too_small_plus && b2>0
			|| x < too_small_plus && x>0
			|| y < too_small_plus && y>0
			|| precision < too_small_plus && precision>0)
		{
			MessageBox::Show(this, "You can't enter parameter closer to 0 than 0.0001 ", "Near to 0 value", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
		else if (precision<0) {
			MessageBox::Show(this, "Precision cann`t be negative ", "Negative value", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
		else
		{

			Math mathSolver;
			bool Solution = mathSolver.Has_Solution(x, y, a1, a2, system_num);
			bool true_log = true;
			bool is_countable = true;
			if (Solution == false) {
				R_x->Text = "System has no solution";
				R_y->Text = "System has no solution";
				R_i->Text = " 0 ";
			}
			else {
				double* result = nullptr;
				switch (btn_Method->SelectedIndex)
				{
				case Newton:
					result = mathSolver.Method(x, y, b1, b2, precision, a1, a2, Newton, system_num);
					true_log = mathSolver.True_Log();
					iterations= mathSolver.IterationAmount();
					is_countable = mathSolver.Iscountable();
					break;
				case Secant:
					result = mathSolver.Method(x, y, b1, b2, precision, a1, a2, Secant, system_num);
					true_log = mathSolver.True_Log();
					iterations = mathSolver.IterationAmount();
					is_countable = mathSolver.Iscountable();
					break;
				default:
					break;
				}
				if (is_countable == false) {
					R_x->Text = "Method make too many iterations";
					R_y->Text = "Method make too many iterations";
					R_i->Text = " 0 ";
				}else if (true_log) {
					if (result == nullptr || std::isinf(result[0]) || std::isinf(result[1])) {
						R_x->Text = "This method has no solution";
						R_y->Text = "This method has no solution";
						R_i->Text = " 0 ";
					}
					else {
						R_x->Text = System::Convert::ToString(result[0]);
						R_y->Text = System::Convert::ToString(result[1]);
						R_i->Text = System::Convert::ToString(iterations);
						Has_result = true;
					}
				}else {
					R_x->Text = "System has no solution";
					R_y->Text = "System has no solution";
					R_i->Text = " 0 ";
				}
				delete[] result;
			}
		}
	}
	private: System::Void Method_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (btn_a1->Text != ""
			&& btn_a2->Text != ""
			&& btn_b1->Text != ""
			&& btn_b2->Text != ""
			&& btn_First_x->Text != ""
			&& btn_First_y->Text != ""
			&& btn_precision->Text != "") {
			a1 = Convert::ToDouble(btn_a1->Text);
			a2 = Convert::ToDouble(btn_a2->Text);
			b1 = Convert::ToDouble(btn_b1->Text);
			b2 = Convert::ToDouble(btn_b2->Text);
			x = Convert::ToDouble(btn_First_x->Text);
			y = Convert::ToDouble(btn_First_y->Text);
			precision = Convert::ToDouble(btn_precision->Text);
			Error_list();
		}
		else {
			R_x->Text = "Enter all data";
			R_y->Text = "Enter all data";
		}
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void R_x_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void R_y_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   private: System::Void HandleKeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			   TextBox^ textBox = dynamic_cast<TextBox^>(sender);
			   if (textBox->Text->Length >= 7 && e->KeyChar != (char)8) {
				   e->Handled = true;
				   MessageBox::Show(this, "You can't enter more than 7 characters", "Input limit", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				   return;
			   }
			   if ((e->KeyChar >= 0x0400 && e->KeyChar <= 0x04FF)) {
				   e->Handled = true;
				   MessageBox::Show(this, "You can enter only numbers", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				   return;
			   }
			   if (!isdigit(e->KeyChar)
				   && e->KeyChar != (char)8
				   && e->KeyChar != (char)46
				   && e->KeyChar != '-'
				   && e->KeyChar != ',') {
				   e->Handled = true;
				   MessageBox::Show(this, "You can enter only numbers", "Enter symbols", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			   }

			   if (!isdigit(e->KeyChar) && e->KeyChar == '.') {
				   e->Handled = true;
				   MessageBox::Show(this, "You can't enter point", "Enter symbols", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			   }
			   if (e->KeyChar == '-' && textBox->SelectionStart != 0) {
				   e->Handled = true;
				   MessageBox::Show(this, "Minus sign can only be at the start", "Enter symbols", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			   }
			   if (e->KeyChar == ',' && textBox->Text->IndexOf(',') != -1) {
				   e->Handled = true;
				   MessageBox::Show(this, "You can enter comma only once", "Enter symbols", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			   }
			   if (e->KeyChar == ',' && textBox->SelectionStart == 0) {
				   e->Handled = true;
				   MessageBox::Show(this, "Comma must be after number", "Enter symbols", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			   }
			   if (e->KeyChar == ',' && textBox->Text->StartsWith("-") && textBox->SelectionStart == 1) {
				   e->Handled = true;
				   MessageBox::Show(this, "Comma cannot be the first character after a minus sign", "Enter symbols", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				   return;
			   }
		   }

	private: System::Void btn_a1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		HandleKeyPress(sender, e);
	}

private: System::Void btn_a2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	HandleKeyPress(sender, e);
}
private: System::Void btn_b1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	HandleKeyPress(sender, e);
}
private: System::Void btn_b2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	HandleKeyPress(sender, e);
}
private: System::Void btn_First_x_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	HandleKeyPress(sender, e);
}
private: System::Void btn_First_y_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	HandleKeyPress(sender, e);
}
private: System::Void btn_precision_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	HandleKeyPress(sender, e);
}
	private: System::Void MyForm_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void button1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (Has_result) {
			FileNameForm^ fileNameForm = gcnew FileNameForm();
			if (fileNameForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ fileName = fileNameForm->FileName;

				String^ filePath = fileName + ".txt";

				StreamWriter^ file = gcnew StreamWriter(filePath);

				String^ R_xText = R_x->Text;
				String^ R_yText = R_y->Text;

				file->WriteLine("a1 = " + a1);
				file->WriteLine("a2 = " + a2);
				file->WriteLine("b1 = " + b1);
				file->WriteLine("b2 = " + b2);
				file->WriteLine("Answer:");
				file->WriteLine("x = " + R_xText);
				file->WriteLine("y = " + R_yText);
				file->Close();
			}
		}
		else 
		{
			MessageBox::Show(this, "You have any result yet ", "Make empty file", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void R_i_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
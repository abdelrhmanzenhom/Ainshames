#pragma once
#include "User.h"
#include "Product.h"
#include "CartClass.h"
#include <fstream>
#include <vector>
#include <stack>
#include "Search.h"
#include <cassert>

int flag;

namespace Bigpicture {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace System::Threading::Tasks;
	using namespace System::Windows::Forms;
	int counter_gamed = 0;
	vector<Product>v;
	int Ide;
	CartClass real_cart;
	Search search_obj;

	bool f = 0;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();



		}



	public:















































































	private: System::Windows::Forms::Label^ label2;
		   System::String^ wp;
	private: System::Windows::Forms::Panel^ side_panel;
	private: System::Windows::Forms::FlowLayoutPanel^ a;
	private: System::Windows::Forms::Button^ catego;





	private: System::Windows::Forms::Panel^ panel_logo;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::FlowLayoutPanel^ b;





	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ cup;






		   System::String^ s;
	private: System::Windows::Forms::Panel^ recept;

	private: System::Windows::Forms::Button^ button61;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ halim;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::PictureBox^ move;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ cub2;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Button^ button28;






		   Panel^ h;

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ sign;
	protected:

	protected:



	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::Panel^ signup;


	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ user_name_signup;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ pass_signup;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Panel^ panel3;


	private: System::Windows::Forms::TextBox^ phone_num;


	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ sign_up;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ use_name_signin;
	private: System::Windows::Forms::TextBox^ pass_signin;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ Signin;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ sign_success;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ seller_page;









	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ cat1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::TextBox^ cat_quantity;














	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button20;

	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::TextBox^ priceee;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ cat_electronics;
	private: System::Windows::Forms::Button^ food;


	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Panel^ home_cat1;




	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ cart_price;




















	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::Button^ button26;
	private: System::ComponentModel::IContainer^ components;





































































	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->sign = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->use_name_signin = (gcnew System::Windows::Forms::TextBox());
			this->pass_signin = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Signin = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->signup = (gcnew System::Windows::Forms::Panel());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->user_name_signup = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pass_signup = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->phone_num = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->sign_up = (gcnew System::Windows::Forms::Button());
			this->sign_success = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->cat_electronics = (gcnew System::Windows::Forms::Button());
			this->food = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->cart_price = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->move = (gcnew System::Windows::Forms::PictureBox());
			this->halim = (gcnew System::Windows::Forms::TextBox());
			this->cub2 = (gcnew System::Windows::Forms::PictureBox());
			this->cup = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->cat1 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->priceee = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->cat_quantity = (gcnew System::Windows::Forms::TextBox());
			this->seller_page = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->home_cat1 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->recept = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->side_panel = (gcnew System::Windows::Forms::Panel());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->b = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->a = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->catego = (gcnew System::Windows::Forms::Button());
			this->panel_logo = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->sign->SuspendLayout();
			this->signup->SuspendLayout();
			this->sign_success->SuspendLayout();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->move))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cub2))->BeginInit();
			this->cat1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->seller_page->SuspendLayout();
			this->home_cat1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->recept->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->side_panel->SuspendLayout();
			this->b->SuspendLayout();
			this->a->SuspendLayout();
			this->panel_logo->SuspendLayout();
			this->SuspendLayout();
			// 
			// sign
			// 
			this->sign->AutoScroll = true;
			this->sign->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sign.BackgroundImage")));
			this->sign->Controls->Add(this->button1);
			this->sign->Controls->Add(this->button3);
			this->sign->Controls->Add(this->panel5);
			this->sign->Controls->Add(this->panel6);
			this->sign->Controls->Add(this->use_name_signin);
			this->sign->Controls->Add(this->pass_signin);
			this->sign->Controls->Add(this->label4);
			this->sign->Controls->Add(this->label5);
			this->sign->Controls->Add(this->Signin);
			this->sign->Controls->Add(this->button5);
			this->sign->Location = System::Drawing::Point(-1, 0);
			this->sign->Name = L"sign";
			this->sign->Size = System::Drawing::Size(1000, 550);
			this->sign->TabIndex = 0;
			this->sign->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::sign_Paint);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(982, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(18, 18);
			this->button1->TabIndex = 20;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(149, 386);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 35);
			this->button3->TabIndex = 18;
			this->button3->Text = L"SignUp";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(21, 352);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(272, 2);
			this->panel5->TabIndex = 16;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(22, 291);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(272, 2);
			this->panel6->TabIndex = 15;
			// 
			// use_name_signin
			// 
			this->use_name_signin->BackColor = System::Drawing::Color::Black;
			this->use_name_signin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->use_name_signin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->use_name_signin->ForeColor = System::Drawing::SystemColors::Window;
			this->use_name_signin->Location = System::Drawing::Point(23, 266);
			this->use_name_signin->Name = L"use_name_signin";
			this->use_name_signin->Size = System::Drawing::Size(271, 24);
			this->use_name_signin->TabIndex = 14;
			// 
			// pass_signin
			// 
			this->pass_signin->BackColor = System::Drawing::Color::Black;
			this->pass_signin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pass_signin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->pass_signin->ForeColor = System::Drawing::SystemColors::Window;
			this->pass_signin->Location = System::Drawing::Point(22, 327);
			this->pass_signin->Name = L"pass_signin";
			this->pass_signin->PasswordChar = '*';
			this->pass_signin->Size = System::Drawing::Size(271, 24);
			this->pass_signin->TabIndex = 19;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(20, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 20);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(20, 246);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Username";
			// 
			// Signin
			// 
			this->Signin->AutoSize = true;
			this->Signin->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->Signin->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Signin->ImageKey = L"(none)";
			this->Signin->Location = System::Drawing::Point(17, 193);
			this->Signin->Name = L"Signin";
			this->Signin->Size = System::Drawing::Size(62, 23);
			this->Signin->TabIndex = 11;
			this->Signin->Text = L"Sign in";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(21, 386);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(122, 35);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Sign In";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// signup
			// 
			this->signup->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signup.BackgroundImage")));
			this->signup->Controls->Add(this->button59);
			this->signup->Controls->Add(this->button4);
			this->signup->Controls->Add(this->panel7);
			this->signup->Controls->Add(this->user_name_signup);
			this->signup->Controls->Add(this->label8);
			this->signup->Controls->Add(this->panel2);
			this->signup->Controls->Add(this->pass_signup);
			this->signup->Controls->Add(this->label7);
			this->signup->Controls->Add(this->panel3);
			this->signup->Controls->Add(this->phone_num);
			this->signup->Controls->Add(this->label1);
			this->signup->Controls->Add(this->label3);
			this->signup->Controls->Add(this->sign_up);
			this->signup->Location = System::Drawing::Point(-1, 3);
			this->signup->Name = L"signup";
			this->signup->Size = System::Drawing::Size(1000, 550);
			this->signup->TabIndex = 1;
			// 
			// button59
			// 
			this->button59->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button59->FlatAppearance->BorderSize = 0;
			this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button59->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button59->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button59->Location = System::Drawing::Point(980, -3);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(18, 18);
			this->button59->TabIndex = 44;
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::button59_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(151, 427);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 35);
			this->button4->TabIndex = 43;
			this->button4->Text = L"Sign in";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(23, 270);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(272, 2);
			this->panel7->TabIndex = 41;
			// 
			// user_name_signup
			// 
			this->user_name_signup->BackColor = System::Drawing::Color::Black;
			this->user_name_signup->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_name_signup->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->user_name_signup->ForeColor = System::Drawing::SystemColors::Window;
			this->user_name_signup->Location = System::Drawing::Point(21, 245);
			this->user_name_signup->Name = L"user_name_signup";
			this->user_name_signup->Size = System::Drawing::Size(271, 24);
			this->user_name_signup->TabIndex = 40;
			this->user_name_signup->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(22, 222);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 20);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Username";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(23, 335);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(272, 2);
			this->panel2->TabIndex = 38;
			// 
			// pass_signup
			// 
			this->pass_signup->BackColor = System::Drawing::Color::Black;
			this->pass_signup->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pass_signup->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->pass_signup->ForeColor = System::Drawing::SystemColors::Window;
			this->pass_signup->Location = System::Drawing::Point(23, 308);
			this->pass_signup->Name = L"pass_signup";
			this->pass_signup->PasswordChar = '*';
			this->pass_signup->Size = System::Drawing::Size(271, 24);
			this->pass_signup->TabIndex = 37;
			this->pass_signup->TextChanged += gcnew System::EventHandler(this, &MyForm::pass_signup_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(20, 288);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 20);
			this->label7->TabIndex = 36;
			this->label7->Text = L"password";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(23, 395);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(272, 2);
			this->panel3->TabIndex = 32;
			// 
			// phone_num
			// 
			this->phone_num->BackColor = System::Drawing::Color::Black;
			this->phone_num->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->phone_num->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->phone_num->ForeColor = System::Drawing::SystemColors::Window;
			this->phone_num->Location = System::Drawing::Point(26, 370);
			this->phone_num->Name = L"phone_num";
			this->phone_num->Size = System::Drawing::Size(271, 24);
			this->phone_num->TabIndex = 35;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(22, 347);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 20);
			this->label1->TabIndex = 29;
			this->label1->Text = L"phone number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->ImageKey = L"(none)";
			this->label3->Location = System::Drawing::Point(17, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 23);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Sign up";
			// 
			// sign_up
			// 
			this->sign_up->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->sign_up->FlatAppearance->BorderSize = 0;
			this->sign_up->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sign_up->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
			this->sign_up->ForeColor = System::Drawing::Color::White;
			this->sign_up->Location = System::Drawing::Point(23, 427);
			this->sign_up->Name = L"sign_up";
			this->sign_up->Size = System::Drawing::Size(117, 35);
			this->sign_up->TabIndex = 42;
			this->sign_up->Text = L"SignUp";
			this->sign_up->UseVisualStyleBackColor = false;
			this->sign_up->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// sign_success
			// 
			this->sign_success->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->sign_success->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->sign_success->Controls->Add(this->button19);
			this->sign_success->Controls->Add(this->button21);
			this->sign_success->Controls->Add(this->cat_electronics);
			this->sign_success->Controls->Add(this->food);
			this->sign_success->Controls->Add(this->button17);
			this->sign_success->Controls->Add(this->button18);
			this->sign_success->Location = System::Drawing::Point(0, 45);
			this->sign_success->Name = L"sign_success";
			this->sign_success->Size = System::Drawing::Size(1000, 550);
			this->sign_success->TabIndex = 3;
			this->sign_success->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::sign_success_Paint);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F));
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button19->Location = System::Drawing::Point(365, 274);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(267, 227);
			this->button19->TabIndex = 7;
			this->button19->Text = L"Clothes";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F));
			this->button21->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button21->Location = System::Drawing::Point(645, 276);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(334, 225);
			this->button21->TabIndex = 2;
			this->button21->Text = L"SuperMarket";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// cat_electronics
			// 
			this->cat_electronics->FlatAppearance->BorderSize = 0;
			this->cat_electronics->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->cat_electronics->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cat_electronics->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cat_electronics->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cat_electronics->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->cat_electronics->Location = System::Drawing::Point(20, 8);
			this->cat_electronics->Name = L"cat_electronics";
			this->cat_electronics->Size = System::Drawing::Size(333, 258);
			this->cat_electronics->TabIndex = 3;
			this->cat_electronics->Text = L"electronics";
			this->cat_electronics->UseVisualStyleBackColor = true;
			this->cat_electronics->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// food
			// 
			this->food->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->food->FlatAppearance->BorderSize = 0;
			this->food->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->food->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->food->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F));
			this->food->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->food->Location = System::Drawing::Point(365, 11);
			this->food->Name = L"food";
			this->food->Size = System::Drawing::Size(267, 255);
			this->food->TabIndex = 4;
			this->food->Text = L"Food";
			this->food->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->food->UseVisualStyleBackColor = false;
			this->food->Click += gcnew System::EventHandler(this, &MyForm::button16_Click_1);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button17->CausesValidation = false;
			this->button17->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button17->Location = System::Drawing::Point(645, 8);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(334, 258);
			this->button17->TabIndex = 1;
			this->button17->Text = L"Kitchen";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F));
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button18->Location = System::Drawing::Point(20, 274);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(333, 227);
			this->button18->TabIndex = 6;
			this->button18->Text = L"Sports";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// panel9
			// 
			this->panel9->AutoSize = true;
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->panel9->Controls->Add(this->button28);
			this->panel9->Controls->Add(this->cart_price);
			this->panel9->Controls->Add(this->button25);
			this->panel9->Controls->Add(this->move);
			this->panel9->Controls->Add(this->halim);
			this->panel9->Controls->Add(this->cub2);
			this->panel9->Controls->Add(this->cup);
			this->panel9->Controls->Add(this->button14);
			this->panel9->Controls->Add(this->button15);
			this->panel9->Controls->Add(this->button2);
			this->panel9->Controls->Add(this->button8);
			this->panel9->Controls->Add(this->button9);
			this->panel9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1000, 47);
			this->panel9->TabIndex = 0;
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel9_Paint);
			// 
			// button28
			// 
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button28->Location = System::Drawing::Point(400, 11);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(25, 25);
			this->button28->TabIndex = 18;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click_1);
			// 
			// cart_price
			// 
			this->cart_price->AutoSize = true;
			this->cart_price->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cart_price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cart_price->Location = System::Drawing::Point(618, 14);
			this->cart_price->Name = L"cart_price";
			this->cart_price->Size = System::Drawing::Size(0, 19);
			this->cart_price->TabIndex = 12;
			this->cart_price->Click += gcnew System::EventHandler(this, &MyForm::cart_price_Click);
			// 
			// button25
			// 
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button25->Location = System::Drawing::Point(605, 5);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(48, 37);
			this->button25->TabIndex = 10;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// move
			// 
			this->move->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->move->Cursor = System::Windows::Forms::Cursors::Cross;
			this->move->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"move.Image")));
			this->move->Location = System::Drawing::Point(594, 4);
			this->move->Name = L"move";
			this->move->Size = System::Drawing::Size(69, 39);
			this->move->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->move->TabIndex = 17;
			this->move->TabStop = false;
			this->move->Visible = false;
			this->move->Click += gcnew System::EventHandler(this, &MyForm::move_Click);
			// 
			// halim
			// 
			this->halim->Location = System::Drawing::Point(69, 8);
			this->halim->Name = L"halim";
			this->halim->Size = System::Drawing::Size(325, 30);
			this->halim->TabIndex = 16;
			// 
			// cub2
			// 
			this->cub2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cub2.Image")));
			this->cub2->Location = System::Drawing::Point(498, 10);
			this->cub2->Name = L"cub2";
			this->cub2->Size = System::Drawing::Size(74, 32);
			this->cub2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->cub2->TabIndex = 7;
			this->cub2->TabStop = false;
			this->cub2->Click += gcnew System::EventHandler(this, &MyForm::cub2_Click);
			// 
			// cup
			// 
			this->cup->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cup.BackgroundImage")));
			this->cup->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->cup->FlatAppearance->BorderSize = 0;
			this->cup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cup->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cup->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cup->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cup.Image")));
			this->cup->Location = System::Drawing::Point(515, 6);
			this->cup->Name = L"cup";
			this->cup->Size = System::Drawing::Size(74, 35);
			this->cup->TabIndex = 6;
			this->cup->UseVisualStyleBackColor = true;
			this->cup->Click += gcnew System::EventHandler(this, &MyForm::cup_Click);
			// 
			// button14
			// 
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button14->Location = System::Drawing::Point(678, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(74, 35);
			this->button14->TabIndex = 5;
			this->button14->Text = L"home";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_1);
			// 
			// button15
			// 
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button15->Location = System::Drawing::Point(979, 3);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(18, 18);
			this->button15->TabIndex = 4;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click_1);
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(820, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 30);
			this->button2->TabIndex = 3;
			this->button2->Text = L"logout";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(761, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(59, 35);
			this->button8->TabIndex = 1;
			this->button8->Text = L"sell";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->Location = System::Drawing::Point(3, 6);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(37, 30);
			this->button9->TabIndex = 0;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// cat1
			// 
			this->cat1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->cat1->Controls->Add(this->panel11);
			this->cat1->Controls->Add(this->panel10);
			this->cat1->Controls->Add(this->panel8);
			this->cat1->Controls->Add(this->label2);
			this->cat1->Controls->Add(this->button26);
			this->cat1->Controls->Add(this->priceee);
			this->cat1->Controls->Add(this->button20);
			this->cat1->Controls->Add(this->pictureBox1);
			this->cat1->Controls->Add(this->label12);
			this->cat1->Controls->Add(this->label11);
			this->cat1->Controls->Add(this->label10);
			this->cat1->Controls->Add(this->name);
			this->cat1->Controls->Add(this->cat_quantity);
			this->cat1->Location = System::Drawing::Point(0, 45);
			this->cat1->Name = L"cat1";
			this->cat1->Size = System::Drawing::Size(1000, 550);
			this->cat1->TabIndex = 6;
			this->cat1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::White;
			this->panel11->Location = System::Drawing::Point(12, 350);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(272, 2);
			this->panel11->TabIndex = 19;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->Location = System::Drawing::Point(12, 157);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(272, 2);
			this->panel10->TabIndex = 18;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::White;
			this->panel8->Location = System::Drawing::Point(12, 246);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(272, 2);
			this->panel8->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(8, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 23);
			this->label2->TabIndex = 14;
			this->label2->Text = L"name";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button26->FlatAppearance->BorderSize = 2;
			this->button26->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button26->Location = System::Drawing::Point(854, 127);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(125, 37);
			this->button26->TabIndex = 13;
			this->button26->Text = L"add";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// priceee
			// 
			this->priceee->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->priceee->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->priceee->ForeColor = System::Drawing::SystemColors::Window;
			this->priceee->Location = System::Drawing::Point(12, 222);
			this->priceee->Name = L"priceee";
			this->priceee->Size = System::Drawing::Size(266, 23);
			this->priceee->TabIndex = 11;
			this->priceee->TextChanged += gcnew System::EventHandler(this, &MyForm::c_na_TextChanged);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button20->FlatAppearance->BorderSize = 2;
			this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button20->Location = System::Drawing::Point(254, 404);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(170, 72);
			this->button20->TabIndex = 10;
			this->button20->Text = L"add";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(977, 486);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(18, 15);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Black;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(879, 88);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 23);
			this->label12->TabIndex = 8;
			this->label12->Text = L"picture";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Black;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(8, 180);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 23);
			this->label11->TabIndex = 7;
			this->label11->Text = L"price";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Black;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(8, 284);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 23);
			this->label10->TabIndex = 6;
			this->label10->Text = L"quantity";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name->ForeColor = System::Drawing::SystemColors::Window;
			this->name->Location = System::Drawing::Point(12, 126);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(272, 23);
			this->name->TabIndex = 2;
			this->name->TextChanged += gcnew System::EventHandler(this, &MyForm::name_TextChanged);
			// 
			// cat_quantity
			// 
			this->cat_quantity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->cat_quantity->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->cat_quantity->ForeColor = System::Drawing::SystemColors::Window;
			this->cat_quantity->Location = System::Drawing::Point(12, 322);
			this->cat_quantity->Name = L"cat_quantity";
			this->cat_quantity->Size = System::Drawing::Size(272, 23);
			this->cat_quantity->TabIndex = 1;
			// 
			// seller_page
			// 
			this->seller_page->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->seller_page->Controls->Add(this->button13);
			this->seller_page->Controls->Add(this->button12);
			this->seller_page->Controls->Add(this->button11);
			this->seller_page->Controls->Add(this->button10);
			this->seller_page->Controls->Add(this->button7);
			this->seller_page->Controls->Add(this->button6);
			this->seller_page->Location = System::Drawing::Point(0, 45);
			this->seller_page->Name = L"seller_page";
			this->seller_page->Size = System::Drawing::Size(1000, 550);
			this->seller_page->TabIndex = 4;
			// 
			// button13
			// 
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button13->Location = System::Drawing::Point(645, 276);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(334, 225);
			this->button13->TabIndex = 5;
			this->button13->Text = L"6-SuperMarket";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->Location = System::Drawing::Point(365, 274);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(267, 227);
			this->button12->TabIndex = 4;
			this->button12->Text = L"5-Clothes";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(365, 11);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(267, 255);
			this->button11->TabIndex = 3;
			this->button11->Text = L"2-Food";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Location = System::Drawing::Point(20, 274);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(333, 227);
			this->button10->TabIndex = 2;
			this->button10->Text = L"4-Sports";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(645, 8);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(334, 258);
			this->button7->TabIndex = 1;
			this->button7->Text = L"3-Kitchen";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(20, 8);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(333, 258);
			this->button6->TabIndex = 0;
			this->button6->Text = L"1-Electronics";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// home_cat1
			// 
			this->home_cat1->AutoScroll = true;
			this->home_cat1->AutoScrollMargin = System::Drawing::Size(0, 500);
			this->home_cat1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->home_cat1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->home_cat1->Controls->Add(this->panel1);
			this->home_cat1->Location = System::Drawing::Point(0, 45);
			this->home_cat1->Margin = System::Windows::Forms::Padding(0);
			this->home_cat1->Name = L"home_cat1";
			this->home_cat1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->home_cat1->Size = System::Drawing::Size(1000, 550);
			this->home_cat1->TabIndex = 8;
			this->home_cat1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::home_cat1_Paint);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->button23);
			this->panel1->Controls->Add(this->button24);
			this->panel1->Location = System::Drawing::Point(760, 700);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(217, 289);
			this->panel1->TabIndex = 15;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(74, 149);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(64, 23);
			this->label15->TabIndex = 20;
			this->label15->Text = L"label13";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(100, 172);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 23);
			this->label13->TabIndex = 18;
			this->label13->Text = L"10";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(4, 172);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(73, 23);
			this->label16->TabIndex = 19;
			this->label16->Text = L"quantity";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(132, 214);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(64, 23);
			this->label17->TabIndex = 17;
			this->label17->Text = L"label18";
			// 
			// button22
			// 
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button22->Location = System::Drawing::Point(62, 212);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(32, 24);
			this->button22->TabIndex = 16;
			this->button22->UseVisualStyleBackColor = true;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(91, 260);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(28, 23);
			this->label18->TabIndex = 15;
			this->label18->Text = L"10";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(4, 118);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(64, 23);
			this->label19->TabIndex = 14;
			this->label19->Text = L"label16";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(4, 7);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(208, 108);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(4, 149);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(64, 23);
			this->label20->TabIndex = 9;
			this->label20->Text = L"label13";
			// 
			// button23
			// 
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button23->Location = System::Drawing::Point(132, 266);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(15, 15);
			this->button23->TabIndex = 8;
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button24->Location = System::Drawing::Point(60, 267);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(15, 15);
			this->button24->TabIndex = 7;
			this->button24->UseVisualStyleBackColor = true;
			// 
			// recept
			// 
			this->recept->AutoScroll = true;
			this->recept->AutoScrollMargin = System::Drawing::Size(0, 500);
			this->recept->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->recept->Controls->Add(this->label9);
			this->recept->Controls->Add(this->pictureBox3);
			this->recept->Controls->Add(this->button27);
			this->recept->Controls->Add(this->label6);
			this->recept->Controls->Add(this->button61);
			this->recept->Location = System::Drawing::Point(446, 60);
			this->recept->Name = L"recept";
			this->recept->Size = System::Drawing::Size(228, 291);
			this->recept->TabIndex = 16;
			this->recept->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::recept_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(6, 225);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 23);
			this->label9->TabIndex = 7;
			this->label9->Text = L"total price";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(148, 244);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(45, 35);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// button27
			// 
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button27->Location = System::Drawing::Point(189, 3);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(18, 18);
			this->button27->TabIndex = 5;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(78, 229);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 23);
			this->label6->TabIndex = 1;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click_2);
			// 
			// button61
			// 
			this->button61->FlatAppearance->BorderSize = 0;
			this->button61->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button61->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button61->Location = System::Drawing::Point(37, 244);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(115, 35);
			this->button61->TabIndex = 0;
			this->button61->Text = L"purchase";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::button61_Click_1);
			// 
			// side_panel
			// 
			this->side_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->side_panel->Controls->Add(this->button58);
			this->side_panel->Controls->Add(this->button56);
			this->side_panel->Controls->Add(this->b);
			this->side_panel->Controls->Add(this->button51);
			this->side_panel->Controls->Add(this->a);
			this->side_panel->Controls->Add(this->catego);
			this->side_panel->Controls->Add(this->panel_logo);
			this->side_panel->Dock = System::Windows::Forms::DockStyle::Left;
			this->side_panel->Location = System::Drawing::Point(0, 0);
			this->side_panel->Name = L"side_panel";
			this->side_panel->Size = System::Drawing::Size(237, 550);
			this->side_panel->TabIndex = 16;
			this->side_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::side_panel_Paint);
			// 
			// button58
			// 
			this->button58->Dock = System::Windows::Forms::DockStyle::Top;
			this->button58->FlatAppearance->BorderSize = 0;
			this->button58->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button58->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button58->ForeColor = System::Drawing::Color::White;
			this->button58->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button58->Location = System::Drawing::Point(0, 513);
			this->button58->Name = L"button58";
			this->button58->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button58->Size = System::Drawing::Size(237, 45);
			this->button58->TabIndex = 6;
			this->button58->Text = L"about";
			this->button58->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::button58_Click);
			// 
			// button56
			// 
			this->button56->Dock = System::Windows::Forms::DockStyle::Top;
			this->button56->FlatAppearance->BorderSize = 0;
			this->button56->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button56->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button56->ForeColor = System::Drawing::Color::White;
			this->button56->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button56->Location = System::Drawing::Point(0, 468);
			this->button56->Name = L"button56";
			this->button56->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button56->Size = System::Drawing::Size(237, 45);
			this->button56->TabIndex = 5;
			this->button56->Text = L"help";
			this->button56->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::button56_Click);
			// 
			// b
			// 
			this->b->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->b->Controls->Add(this->button52);
			this->b->Controls->Add(this->button53);
			this->b->Controls->Add(this->button54);
			this->b->Dock = System::Windows::Forms::DockStyle::Top;
			this->b->Location = System::Drawing::Point(0, 356);
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(237, 112);
			this->b->TabIndex = 4;
			this->b->Visible = false;
			this->b->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::b_Paint);
			// 
			// button52
			// 
			this->button52->Dock = System::Windows::Forms::DockStyle::Top;
			this->button52->FlatAppearance->BorderSize = 0;
			this->button52->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button52->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button52->ForeColor = System::Drawing::Color::White;
			this->button52->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button52->Location = System::Drawing::Point(3, 3);
			this->button52->Name = L"button52";
			this->button52->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button52->Size = System::Drawing::Size(237, 30);
			this->button52->TabIndex = 1;
			this->button52->Text = L"market";
			this->button52->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::button52_Click);
			// 
			// button53
			// 
			this->button53->Dock = System::Windows::Forms::DockStyle::Top;
			this->button53->FlatAppearance->BorderSize = 0;
			this->button53->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button53->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button53->ForeColor = System::Drawing::Color::White;
			this->button53->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button53->Location = System::Drawing::Point(3, 39);
			this->button53->Name = L"button53";
			this->button53->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button53->Size = System::Drawing::Size(237, 30);
			this->button53->TabIndex = 0;
			this->button53->Text = L"food";
			this->button53->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::button53_Click);
			// 
			// button54
			// 
			this->button54->Dock = System::Windows::Forms::DockStyle::Top;
			this->button54->FlatAppearance->BorderSize = 0;
			this->button54->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button54->Font = (gcnew System::Drawing::Font(L"Courier New", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button54->ForeColor = System::Drawing::Color::White;
			this->button54->Location = System::Drawing::Point(3, 75);
			this->button54->Name = L"button54";
			this->button54->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button54->Size = System::Drawing::Size(237, 30);
			this->button54->TabIndex = 2;
			this->button54->Text = L"electro";
			this->button54->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// button51
			// 
			this->button51->Dock = System::Windows::Forms::DockStyle::Top;
			this->button51->FlatAppearance->BorderSize = 0;
			this->button51->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button51->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button51->ForeColor = System::Drawing::Color::White;
			this->button51->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button51->Location = System::Drawing::Point(0, 311);
			this->button51->Name = L"button51";
			this->button51->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button51->Size = System::Drawing::Size(237, 45);
			this->button51->TabIndex = 3;
			this->button51->Text = L"sell";
			this->button51->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::button51_Click);
			// 
			// a
			// 
			this->a->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->a->Controls->Add(this->button48);
			this->a->Controls->Add(this->button47);
			this->a->Controls->Add(this->button49);
			this->a->Controls->Add(this->button50);
			this->a->Controls->Add(this->button57);
			this->a->Controls->Add(this->button55);
			this->a->Dock = System::Windows::Forms::DockStyle::Top;
			this->a->Location = System::Drawing::Point(0, 155);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(237, 156);
			this->a->TabIndex = 2;
			this->a->Visible = false;
			this->a->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel1_Paint);
			// 
			// button48
			// 
			this->button48->Dock = System::Windows::Forms::DockStyle::Top;
			this->button48->FlatAppearance->BorderSize = 0;
			this->button48->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button48->ForeColor = System::Drawing::Color::White;
			this->button48->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button48->Location = System::Drawing::Point(3, 3);
			this->button48->Name = L"button48";
			this->button48->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button48->Size = System::Drawing::Size(237, 33);
			this->button48->TabIndex = 1;
			this->button48->Text = L"eletronics";
			this->button48->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::button48_Click);
			// 
			// button47
			// 
			this->button47->Dock = System::Windows::Forms::DockStyle::Top;
			this->button47->FlatAppearance->BorderSize = 0;
			this->button47->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button47->ForeColor = System::Drawing::Color::White;
			this->button47->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button47->Location = System::Drawing::Point(3, 42);
			this->button47->Name = L"button47";
			this->button47->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button47->Size = System::Drawing::Size(237, 33);
			this->button47->TabIndex = 0;
			this->button47->Text = L"food";
			this->button47->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click_2);
			// 
			// button49
			// 
			this->button49->Dock = System::Windows::Forms::DockStyle::Top;
			this->button49->FlatAppearance->BorderSize = 0;
			this->button49->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button49->Font = (gcnew System::Drawing::Font(L"Courier New", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button49->ForeColor = System::Drawing::Color::White;
			this->button49->Location = System::Drawing::Point(3, 81);
			this->button49->Name = L"button49";
			this->button49->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button49->Size = System::Drawing::Size(237, 33);
			this->button49->TabIndex = 2;
			this->button49->Text = L"kitchen";
			this->button49->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::button49_Click);
			// 
			// button50
			// 
			this->button50->Dock = System::Windows::Forms::DockStyle::Top;
			this->button50->FlatAppearance->BorderSize = 0;
			this->button50->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button50->Font = (gcnew System::Drawing::Font(L"Courier New", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button50->ForeColor = System::Drawing::Color::White;
			this->button50->Location = System::Drawing::Point(3, 120);
			this->button50->Name = L"button50";
			this->button50->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button50->Size = System::Drawing::Size(237, 33);
			this->button50->TabIndex = 3;
			this->button50->Text = L"sports";
			this->button50->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::button50_Click);
			// 
			// button57
			// 
			this->button57->Dock = System::Windows::Forms::DockStyle::Top;
			this->button57->FlatAppearance->BorderSize = 0;
			this->button57->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button57->Font = (gcnew System::Drawing::Font(L"Courier New", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button57->ForeColor = System::Drawing::Color::White;
			this->button57->Location = System::Drawing::Point(3, 159);
			this->button57->Name = L"button57";
			this->button57->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button57->Size = System::Drawing::Size(237, 33);
			this->button57->TabIndex = 4;
			this->button57->Text = L"clothes";
			this->button57->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::button57_Click);
			// 
			// button55
			// 
			this->button55->Dock = System::Windows::Forms::DockStyle::Top;
			this->button55->FlatAppearance->BorderSize = 0;
			this->button55->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button55->Font = (gcnew System::Drawing::Font(L"Courier New", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button55->ForeColor = System::Drawing::Color::White;
			this->button55->Location = System::Drawing::Point(3, 198);
			this->button55->Name = L"button55";
			this->button55->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button55->Size = System::Drawing::Size(237, 10);
			this->button55->TabIndex = 5;
			this->button55->Text = L"supermarket";
			this->button55->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::button55_Click);
			// 
			// catego
			// 
			this->catego->Dock = System::Windows::Forms::DockStyle::Top;
			this->catego->FlatAppearance->BorderSize = 0;
			this->catego->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->catego->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->catego->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->catego->ForeColor = System::Drawing::Color::White;
			this->catego->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->catego->Location = System::Drawing::Point(0, 110);
			this->catego->Name = L"catego";
			this->catego->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->catego->Size = System::Drawing::Size(237, 45);
			this->catego->TabIndex = 1;
			this->catego->Text = L"categories";
			this->catego->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->catego->UseVisualStyleBackColor = true;
			this->catego->Click += gcnew System::EventHandler(this, &MyForm::button16_Click_2);
			// 
			// panel_logo
			// 
			this->panel_logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_logo->Controls->Add(this->button16);
			this->panel_logo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_logo->Location = System::Drawing::Point(0, 0);
			this->panel_logo->Name = L"panel_logo";
			this->panel_logo->Size = System::Drawing::Size(237, 110);
			this->panel_logo->TabIndex = 0;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Black;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button16->Location = System::Drawing::Point(2, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(74, 35);
			this->button16->TabIndex = 6;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click_3);
			// 
			// panel4
			// 
			this->panel4->AutoScroll = true;
			this->panel4->AutoScrollMargin = System::Drawing::Size(0, 500);
			this->panel4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel4->Location = System::Drawing::Point(0, 45);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1000, 550);
			this->panel4->TabIndex = 16;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 4000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->sign);
			this->Controls->Add(this->seller_page);
			this->Controls->Add(this->cat1);
			this->Controls->Add(this->sign_success);
			this->Controls->Add(this->signup);
			this->Controls->Add(this->home_cat1);
			this->Controls->Add(this->recept);
			this->Controls->Add(this->side_panel);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel9);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->sign->ResumeLayout(false);
			this->sign->PerformLayout();
			this->signup->ResumeLayout(false);
			this->signup->PerformLayout();
			this->sign_success->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->move))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cub2))->EndInit();
			this->cat1->ResumeLayout(false);
			this->cat1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->seller_page->ResumeLayout(false);
			this->home_cat1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->recept->ResumeLayout(false);
			this->recept->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->side_panel->ResumeLayout(false);
			this->b->ResumeLayout(false);
			this->a->ResumeLayout(false);
			this->panel_logo->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //sign up button
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		signup->BringToFront();


	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Environment::Exit(0);
	}
		   //sign up button
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		User h;

		System::String^ s;
		s = user_name_signup->Text;
		System::String^ s2;
		s2 = pass_signup->Text;

		System::String^ s4;
		s4 = phone_num->Text;

		if (s == "" || s2 == "" || s4 == "")
		{
			MessageBox::Show("you must fill all fields", "error");

		}
		else
		{
			h.sign_up(s, s2, s4);
			sign->BringToFront();

		}






	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		sign->BringToFront();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Environment::Exit(0);
	}
	private: System::Void sign_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pass_signup_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   //sign in button
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ user;
		user = use_name_signin->Text;
		System::String^ pass;
		pass = pass_signin->Text;
		User n;
		string username;
		int pas;
		
		int id, number;

		if (n.login(user, pass)) {
			ifstream input("log.text");
			while (input >> username >> pas >> id >> number)
			{
				System::String^help=pas.ToString();
				if(help==pass)
				Ide = id;
			}
			panel9->BringToFront();
			sign_success->BringToFront();

		}
		else MessageBox::Show("wrong user name or password", "error");
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		seller_page->BringToFront();
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		seller_page->BringToFront();

	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //sell electro button
	private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
		flag = 1;
		cat1->BringToFront();

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		   //add button 
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ s;
		s = name->Text;
		System::String^ s2;
		s2 = priceee->Text;
		System::String^ s3;
		s3 = cat_quantity->Text;
		
		std::string quantity = msclr::interop::marshal_as<std::string>(s3);

		int num_countity = stoi(quantity);
		if (num_countity <= 0) { MessageBox::Show("value is invalid "); }
		else {

			Product y;




			if (s == "" || s2 == "" || s3 == "" || wp == "")
			{
				MessageBox::Show("some fields are missing", "error");


			}
			else
			{
				y.adde(s, s2, num_countity, wp, flag);
				MessageBox::Show("add done", "note");

			}
		}




	}
		   //browsing supermarket
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		home_cat1->Controls->Clear();
		home_cat1->BringToFront();

		ifstream  supermarket("supermarket");
		string name2, price2, pi;
		int quantity2;
		int idddd;


		//but->Location= new Point(25, 35);
		int xp = 140, xy = 16;
		int x = 94, y = 16;
		int cnt = 0;
		Product pro;


		while (supermarket >> name2 >> price2 >> quantity2 >> pi >> idddd)
		{
			int j = 0;


			System::String^ s = idddd.ToString();
			String^ gg = gcnew String(name2.c_str());
			String^ pcount = gcnew String(price2.c_str());
			String^ pprice = quantity2.ToString();
			String^ ppp = gcnew String(pi.c_str());


			pro.namee = name2;
			pro.price = price2;
			pro.quantity = quantity2;
			pro.id = idddd;
			v.push_back(pro);
			long long sum = quantity2;


			cnt++;

			Panel^ p = gcnew Panel();
			p->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			p->Location = System::Drawing::Point(x, y);
			p->Parent = home_cat1;
			p->Size = System::Drawing::Size(217, 289);
			p->Name = gg;
			p->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;


			if (cnt == 3) { cnt = 0; y += 311; x = 94; }
			else x += 283;



			Button^ plus = gcnew Button();
			plus->Image = System::Drawing::Image::FromFile("E:/pic/plus.png");//plus
			plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			plus->FlatAppearance->BorderSize = 0;
			plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			plus->Parent = p;
			plus->Location = System::Drawing::Point(132, 266);
			plus->Name = s;
			plus->Size = System::Drawing::Size(15, 15);



			plus->Click += gcnew System::EventHandler(this, &MyForm::plus);





			Button^ minus = gcnew Button();
			minus->Image = System::Drawing::Image::FromFile("E:/pic/minus.png");// minus
			minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			minus->FlatAppearance->BorderSize = 0;
			minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			minus->Parent = p;
			minus->Location = System::Drawing::Point(60, 267);
			minus->Name = s;
			minus->Size = System::Drawing::Size(15, 15);


			minus->Click += gcnew System::EventHandler(this, &MyForm::minus);

			Button^ rate1 = gcnew Button();
			rate1->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate1->FlatAppearance->BorderSize = 0;
			rate1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate1->Parent = p;
			rate1->Location = System::Drawing::Point(10, 212);
			rate1->Name = s;
			rate1->Size = System::Drawing::Size(32, 32);
			rate1->Click += gcnew System::EventHandler(this, &MyForm::rate1);
			//--------------------------------------
			Button^ rate2 = gcnew Button();
			rate2->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate2->FlatAppearance->BorderSize = 0;
			rate2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate2->Parent = p;
			rate2->Location = System::Drawing::Point(37, 212);
			rate2->Name = s;
			rate2->Size = System::Drawing::Size(32, 32);
			rate2->Click += gcnew System::EventHandler(this, &MyForm::rate2);
			//--------------------------------------
			Button^ rate3 = gcnew Button();
			rate3->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate3->FlatAppearance->BorderSize = 0;
			rate3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate3->Parent = p;
			rate3->Location = System::Drawing::Point(60, 212);
			rate3->Name = s;
			rate3->Size = System::Drawing::Size(32, 32);
			rate3->Click += gcnew System::EventHandler(this, &MyForm::rate3);
			//--------------------------------------
			Button^ rate4 = gcnew Button();
			rate4->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate4->FlatAppearance->BorderSize = 0;
			rate4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate4->Parent = p;
			rate4->Location = System::Drawing::Point(88, 212);
			rate4->Name = s;
			rate4->Size = System::Drawing::Size(32, 32);
			rate4->Click += gcnew System::EventHandler(this, &MyForm::rate4);
			//--------------------------------------
			Button^ rate5 = gcnew Button();
			rate5->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate5->FlatAppearance->BorderSize = 0;
			rate5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate5->Parent = p;
			rate5->Location = System::Drawing::Point(116, 212);
			rate5->Name = s;
			rate5->Size = System::Drawing::Size(32, 32);
			rate5->Click += gcnew System::EventHandler(this, &MyForm::rate5);
			//--------------------------------------
			Button^ counter = gcnew Button();
			counter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			counter->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			counter->Parent = p;
			counter->AutoSize = true;
			counter->Location = System::Drawing::Point(91, 260);
			counter->Name = L"counter";
			counter->Size = System::Drawing::Size(28, 23);
			counter->TabIndex = 17;
			counter->Text = counter_gamed.ToString();


			Label^ names = gcnew Label();
			names->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			names->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			names->Parent = p;
			names->AutoSize = true;
			names->Location = System::Drawing::Point(4, 118);
			names->Name = L"names";
			names->Size = System::Drawing::Size(64, 23);
			names->TabIndex = 17;
			names->Text = gg;

			Label^ price = gcnew Label();
			price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			price->Parent = p;
			price->AutoSize = true;
			price->Location = System::Drawing::Point(100, 149);
			price->Name = L"counter";
			price->Size = System::Drawing::Size(64, 23);
			price->TabIndex = 17;
			price->Text = pcount;

			Label^ qcount = gcnew Label();
			qcount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			qcount->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			qcount->Parent = p;
			qcount->AutoSize = true;
			qcount->Location = System::Drawing::Point(100, 172);
			qcount->Name = L"counter";
			qcount->Size = System::Drawing::Size(28, 23);
			qcount->TabIndex = 17;
			qcount->Text = pprice;




			Label^ quantity = gcnew Label();
			quantity->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			quantity->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			quantity->Parent = p;
			quantity->AutoSize = true;
			quantity->Location = System::Drawing::Point(4, 172);
			quantity->Name = L"counter";
			quantity->Size = System::Drawing::Size(73, 23);
			quantity->TabIndex = 17;
			quantity->Text = "quantity";

			PictureBox^ picbox = gcnew PictureBox();
			picbox->Location = System::Drawing::Point(4, 7);
			picbox->Parent = p;

			picbox->Name = L"pictureBox3";
			picbox->ImageLocation = ppp;
			picbox->Size = System::Drawing::Size(208, 108);
			picbox->TabIndex = 13;
			picbox->TabStop = false;

			picbox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			Label^ label_price = gcnew Label();
			label_price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			label_price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label_price->Parent = p;
			label_price->AutoSize = true;
			label_price->Location = System::Drawing::Point(4, 148);
			label_price->Name = L"counter";
			label_price->Size = System::Drawing::Size(73, 23);
			label_price->TabIndex = 17;
			label_price->Text = "price";

		}



	}
	//browsing clothes
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		home_cat1->Controls->Clear();
		home_cat1->BringToFront();


		ifstream  clothes("clothes");
		string name2, price2, pi;
		int quantity2;
		int idddd;


		//but->Location= new Point(25, 35);
		int xp = 140, xy = 16;
		int x = 94, y = 16;
		int cnt = 0;
		Product pro;


		while (clothes >> name2 >> price2 >> quantity2 >> pi >> idddd)
		{
			int j = 0;


			System::String^ s = idddd.ToString();
			String^ gg = gcnew String(name2.c_str());
			String^ pcount = gcnew String(price2.c_str());
			String^ pprice = quantity2.ToString();
			String^ ppp = gcnew String(pi.c_str());


			pro.namee = name2;
			pro.price = price2;
			pro.quantity = quantity2;
			pro.id = idddd;
			v.push_back(pro);
			long long sum = quantity2;


			cnt++;

			Panel^ p = gcnew Panel();
			p->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			p->Location = System::Drawing::Point(x, y);
			p->Parent = home_cat1;
			p->Size = System::Drawing::Size(217, 289);
			p->Name = gg;
			p->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;


			if (cnt == 3) { cnt = 0; y += 311; x = 94; }
			else x += 283;



			Button^ plus = gcnew Button();
			plus->Image = System::Drawing::Image::FromFile("E:/pic/plus.png");//plus
			plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			plus->FlatAppearance->BorderSize = 0;
			plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			plus->Parent = p;
			plus->Location = System::Drawing::Point(132, 266);
			plus->Name = s;
			plus->Size = System::Drawing::Size(15, 15);



			plus->Click += gcnew System::EventHandler(this, &MyForm::plus);





			Button^ minus = gcnew Button();
			minus->Image = System::Drawing::Image::FromFile("E:/pic/minus.png");// minus
			minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			minus->FlatAppearance->BorderSize = 0;
			minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			minus->Parent = p;
			minus->Location = System::Drawing::Point(60, 267);
			minus->Name = s;
			minus->Size = System::Drawing::Size(15, 15);


			minus->Click += gcnew System::EventHandler(this, &MyForm::minus);

			Button^ rate1 = gcnew Button();
			rate1->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate1->FlatAppearance->BorderSize = 0;
			rate1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate1->Parent = p;
			rate1->Location = System::Drawing::Point(10, 212);
			rate1->Name = s;
			rate1->Size = System::Drawing::Size(32, 32);
			rate1->Click += gcnew System::EventHandler(this, &MyForm::rate1);
			//--------------------------------------
			Button^ rate2 = gcnew Button();
			rate2->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate2->FlatAppearance->BorderSize = 0;
			rate2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate2->Parent = p;
			rate2->Location = System::Drawing::Point(37, 212);
			rate2->Name = s;
			rate2->Size = System::Drawing::Size(32, 32);
			rate2->Click += gcnew System::EventHandler(this, &MyForm::rate2);
			//--------------------------------------
			Button^ rate3 = gcnew Button();
			rate3->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate3->FlatAppearance->BorderSize = 0;
			rate3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate3->Parent = p;
			rate3->Location = System::Drawing::Point(60, 212);
			rate3->Name = s;
			rate3->Size = System::Drawing::Size(32, 32);
			rate3->Click += gcnew System::EventHandler(this, &MyForm::rate3);
			//--------------------------------------
			Button^ rate4 = gcnew Button();
			rate4->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate4->FlatAppearance->BorderSize = 0;
			rate4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate4->Parent = p;
			rate4->Location = System::Drawing::Point(88, 212);
			rate4->Name = s;
			rate4->Size = System::Drawing::Size(32, 32);
			rate4->Click += gcnew System::EventHandler(this, &MyForm::rate4);
			//--------------------------------------
			Button^ rate5 = gcnew Button();
			rate5->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate5->FlatAppearance->BorderSize = 0;
			rate5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate5->Parent = p;
			rate5->Location = System::Drawing::Point(116, 212);
			rate5->Name = s;
			rate5->Size = System::Drawing::Size(32, 32);
			rate5->Click += gcnew System::EventHandler(this, &MyForm::rate5);
			//--------------------------------------
			Button^ counter = gcnew Button();
			counter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			counter->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			counter->Parent = p;
			counter->AutoSize = true;
			counter->Location = System::Drawing::Point(91, 260);
			counter->Name = L"counter";
			counter->Size = System::Drawing::Size(28, 23);
			counter->TabIndex = 17;
			counter->Text = counter_gamed.ToString();


			Label^ names = gcnew Label();
			names->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			names->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			names->Parent = p;
			names->AutoSize = true;
			names->Location = System::Drawing::Point(4, 118);
			names->Name = L"names";
			names->Size = System::Drawing::Size(64, 23);
			names->TabIndex = 17;
			names->Text = gg;

			Label^ price = gcnew Label();
			price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			price->Parent = p;
			price->AutoSize = true;
			price->Location = System::Drawing::Point(100, 149);
			price->Name = L"counter";
			price->Size = System::Drawing::Size(64, 23);
			price->TabIndex = 17;
			price->Text = pcount;

			Label^ qcount = gcnew Label();
			qcount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			qcount->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			qcount->Parent = p;
			qcount->AutoSize = true;
			qcount->Location = System::Drawing::Point(100, 172);
			qcount->Name = L"counter";
			qcount->Size = System::Drawing::Size(28, 23);
			qcount->TabIndex = 17;
			qcount->Text = pprice;




			Label^ quantity = gcnew Label();
			quantity->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			quantity->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			quantity->Parent = p;
			quantity->AutoSize = true;
			quantity->Location = System::Drawing::Point(4, 172);
			quantity->Name = L"counter";
			quantity->Size = System::Drawing::Size(73, 23);
			quantity->TabIndex = 17;
			quantity->Text = "quantity";

			PictureBox^ picbox = gcnew PictureBox();
			picbox->Location = System::Drawing::Point(4, 7);
			picbox->Parent = p;

			picbox->Name = L"pictureBox3";
			picbox->ImageLocation = ppp;
			picbox->Size = System::Drawing::Size(208, 108);
			picbox->TabIndex = 13;
			picbox->TabStop = false;

			picbox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			Label^ label_price = gcnew Label();
			label_price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			label_price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label_price->Parent = p;
			label_price->AutoSize = true;
			label_price->Location = System::Drawing::Point(4, 148);
			label_price->Name = L"counter";
			label_price->Size = System::Drawing::Size(73, 23);
			label_price->TabIndex = 17;
			label_price->Text = "price";

		}



	}

	//browsing kitchen
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		home_cat1->Controls->Clear();
		home_cat1->BringToFront();

		ifstream  kitchen("kitchen");
		string name2, price2, pi;
		int quantity2;
		int idddd;


		//but->Location= new Point(25, 35);
		int xp = 140, xy = 16;
		int x = 94, y = 16;
		int cnt = 0;
		Product pro;


		while (kitchen >> name2 >> price2 >> quantity2 >> pi >> idddd)
		{
			int j = 0;


			System::String^ s = idddd.ToString();
			String^ gg = gcnew String(name2.c_str());
			String^ pcount = gcnew String(price2.c_str());
			String^ pprice = quantity2.ToString();
			String^ ppp = gcnew String(pi.c_str());


			pro.namee = name2;
			pro.price = price2;
			pro.quantity = quantity2;
			pro.id = idddd;
			v.push_back(pro);
			long long sum = quantity2;


			cnt++;

			Panel^ p = gcnew Panel();
			p->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			p->Location = System::Drawing::Point(x, y);
			p->Parent = home_cat1;
			p->Size = System::Drawing::Size(217, 289);
			p->Name = gg;
			p->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;


			if (cnt == 3) { cnt = 0; y += 311; x = 94; }
			else x += 283;



			Button^ plus = gcnew Button();
			plus->Image = System::Drawing::Image::FromFile("E:/pic/plus.png");//plus
			plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			plus->FlatAppearance->BorderSize = 0;
			plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			plus->Parent = p;
			plus->Location = System::Drawing::Point(132, 266);
			plus->Name = s;
			plus->Size = System::Drawing::Size(15, 15);



			plus->Click += gcnew System::EventHandler(this, &MyForm::plus);





			Button^ minus = gcnew Button();
			minus->Image = System::Drawing::Image::FromFile("E:/pic/minus.png");// minus
			minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			minus->FlatAppearance->BorderSize = 0;
			minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			minus->Parent = p;
			minus->Location = System::Drawing::Point(60, 267);
			minus->Name = s;
			minus->Size = System::Drawing::Size(15, 15);


			minus->Click += gcnew System::EventHandler(this, &MyForm::minus);

			Button^ rate1 = gcnew Button();
			rate1->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate1->FlatAppearance->BorderSize = 0;
			rate1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate1->Parent = p;
			rate1->Location = System::Drawing::Point(10, 212);
			rate1->Name = s;
			rate1->Size = System::Drawing::Size(32, 32);
			rate1->Click += gcnew System::EventHandler(this, &MyForm::rate1);
			//--------------------------------------
			Button^ rate2 = gcnew Button();
			rate2->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate2->FlatAppearance->BorderSize = 0;
			rate2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate2->Parent = p;
			rate2->Location = System::Drawing::Point(37, 212);
			rate2->Name = s;
			rate2->Size = System::Drawing::Size(32, 32);
			rate2->Click += gcnew System::EventHandler(this, &MyForm::rate2);
			//--------------------------------------
			Button^ rate3 = gcnew Button();
			rate3->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate3->FlatAppearance->BorderSize = 0;
			rate3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate3->Parent = p;
			rate3->Location = System::Drawing::Point(60, 212);
			rate3->Name = s;
			rate3->Size = System::Drawing::Size(32, 32);
			rate3->Click += gcnew System::EventHandler(this, &MyForm::rate3);
			//--------------------------------------
			Button^ rate4 = gcnew Button();
			rate4->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate4->FlatAppearance->BorderSize = 0;
			rate4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate4->Parent = p;
			rate4->Location = System::Drawing::Point(88, 212);
			rate4->Name = s;
			rate4->Size = System::Drawing::Size(32, 32);
			rate4->Click += gcnew System::EventHandler(this, &MyForm::rate4);
			//--------------------------------------
			Button^ rate5 = gcnew Button();
			rate5->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate5->FlatAppearance->BorderSize = 0;
			rate5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate5->Parent = p;
			rate5->Location = System::Drawing::Point(116, 212);
			rate5->Name = s;
			rate5->Size = System::Drawing::Size(32, 32);
			rate5->Click += gcnew System::EventHandler(this, &MyForm::rate5);
			//--------------------------------------
			Button^ counter = gcnew Button();
			counter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			counter->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			counter->Parent = p;
			counter->AutoSize = true;
			counter->Location = System::Drawing::Point(91, 260);
			counter->Name = L"counter";
			counter->Size = System::Drawing::Size(28, 23);
			counter->TabIndex = 17;
			counter->Text = counter_gamed.ToString();


			Label^ names = gcnew Label();
			names->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			names->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			names->Parent = p;
			names->AutoSize = true;
			names->Location = System::Drawing::Point(4, 118);
			names->Name = L"names";
			names->Size = System::Drawing::Size(64, 23);
			names->TabIndex = 17;
			names->Text = gg;

			Label^ price = gcnew Label();
			price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			price->Parent = p;
			price->AutoSize = true;
			price->Location = System::Drawing::Point(100, 149);
			price->Name = L"counter";
			price->Size = System::Drawing::Size(64, 23);
			price->TabIndex = 17;
			price->Text = pcount;

			Label^ qcount = gcnew Label();
			qcount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			qcount->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			qcount->Parent = p;
			qcount->AutoSize = true;
			qcount->Location = System::Drawing::Point(100, 172);
			qcount->Name = L"counter";
			qcount->Size = System::Drawing::Size(28, 23);
			qcount->TabIndex = 17;
			qcount->Text = pprice;




			Label^ quantity = gcnew Label();
			quantity->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			quantity->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			quantity->Parent = p;
			quantity->AutoSize = true;
			quantity->Location = System::Drawing::Point(4, 172);
			quantity->Name = L"counter";
			quantity->Size = System::Drawing::Size(73, 23);
			quantity->TabIndex = 17;
			quantity->Text = "quantity";

			PictureBox^ picbox = gcnew PictureBox();
			picbox->Location = System::Drawing::Point(4, 7);
			picbox->Parent = p;

			picbox->Name = L"pictureBox3";
			picbox->ImageLocation = ppp;
			picbox->Size = System::Drawing::Size(208, 108);
			picbox->TabIndex = 13;
			picbox->TabStop = false;

			picbox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			Label^ label_price = gcnew Label();
			label_price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			label_price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label_price->Parent = p;
			label_price->AutoSize = true;
			label_price->Location = System::Drawing::Point(4, 148);
			label_price->Name = L"counter";
			label_price->Size = System::Drawing::Size(73, 23);
			label_price->TabIndex = 17;
			label_price->Text = "price";

		}




	}
	//electro browsing
	public: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		home_cat1->Controls->Clear();
		home_cat1->BringToFront();

		ifstream  electr("electro");
		string name2, price2, pi;
		int quantity2;
		int idddd;


		//but->Location= new Point(25, 35);
		int xp = 140, xy = 16;
		int x = 94, y = 16;
		int cnt = 0;
		Product pro;
		int star, person;

		while (electr >> name2 >> price2 >> quantity2 >> pi >> idddd)
		{
			int j = 0;


			System::String^ s = idddd.ToString();
			String^ gg = gcnew String(name2.c_str());
			String^ pcount = gcnew String(price2.c_str());
			String^ pprice = quantity2.ToString();
			String^ ppp = gcnew String(pi.c_str());


			pro.namee = name2;
			pro.price = price2;
			pro.quantity = quantity2;
			pro.rate = star;
			pro.person = person;
			pro.id = idddd;
			pro.seller_id=Ide;
			v.push_back(pro);
			long long sum = quantity2;


			cnt++;

			Panel^ p = gcnew Panel();
			p->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			p->Location = System::Drawing::Point(x, y);
			p->Parent = home_cat1;
			p->Size = System::Drawing::Size(217, 289);
			p->Name = gg;
			p->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;


			if (cnt == 3) { cnt = 0; y += 311; x = 94; }
			else x += 283;



			Button^ plus = gcnew Button();
			plus->Image = System::Drawing::Image::FromFile("E:/pic/plus.png");//plus
			plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			plus->FlatAppearance->BorderSize = 0;
			plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			plus->Parent = p;
			plus->Location = System::Drawing::Point(132, 266);
			plus->Name = s;
			plus->Size = System::Drawing::Size(15, 15);



			plus->Click += gcnew System::EventHandler(this, &MyForm::plus);





			Button^ minus = gcnew Button();
			minus->Image = System::Drawing::Image::FromFile("E:/pic/minus.png");// minus
			minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			minus->FlatAppearance->BorderSize = 0;
			minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			minus->Parent = p;
			minus->Location = System::Drawing::Point(60, 267);
			minus->Name = s;
			minus->Size = System::Drawing::Size(15, 15);


			minus->Click += gcnew System::EventHandler(this, &MyForm::minus);

			Button^ rate1 = gcnew Button();
			rate1->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate1->FlatAppearance->BorderSize = 0;
			rate1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate1->Parent = p;
			rate1->Location = System::Drawing::Point(10, 212);
			rate1->Name = s;
			rate1->Size = System::Drawing::Size(32, 32);
			rate1->Click += gcnew System::EventHandler(this, &MyForm::rate1);
			//--------------------------------------
			Button^ rate2 = gcnew Button();
			rate2->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate2->FlatAppearance->BorderSize = 0;
			rate2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate2->Parent = p;
			rate2->Location = System::Drawing::Point(37, 212);
			rate2->Name = s;
			rate2->Size = System::Drawing::Size(32, 32);
			rate2->Click += gcnew System::EventHandler(this, &MyForm::rate2);
			//--------------------------------------
			Button^ rate3 = gcnew Button();
			rate3->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate3->FlatAppearance->BorderSize = 0;
			rate3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate3->Parent = p;
			rate3->Location = System::Drawing::Point(60, 212);
			rate3->Name = s;
			rate3->Size = System::Drawing::Size(32, 32);
			rate3->Click += gcnew System::EventHandler(this, &MyForm::rate3);
			//--------------------------------------
			Button^ rate4 = gcnew Button();
			rate4->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate4->FlatAppearance->BorderSize = 0;
			rate4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate4->Parent = p;
			rate4->Location = System::Drawing::Point(88, 212);
			rate4->Name = s;
			rate4->Size = System::Drawing::Size(32, 32);
			rate4->Click += gcnew System::EventHandler(this, &MyForm::rate4);
			//--------------------------------------
			Button^ rate5 = gcnew Button();
			rate5->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate5->FlatAppearance->BorderSize = 0;
			rate5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate5->Parent = p;
			rate5->Location = System::Drawing::Point(116, 212);
			rate5->Name = s;
			rate5->Size = System::Drawing::Size(32, 32);
			rate5->Click += gcnew System::EventHandler(this, &MyForm::rate5);
			//--------------------------------------
			Button^ counter = gcnew Button();
			counter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			counter->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			counter->Parent = p;
			counter->AutoSize = true;
			counter->Location = System::Drawing::Point(91, 260);
			counter->Name = L"counter";
			counter->Size = System::Drawing::Size(28, 23);
			counter->TabIndex = 17;
			counter->Text = counter_gamed.ToString();


			Label^ names = gcnew Label();
			names->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			names->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			names->Parent = p;
			names->AutoSize = true;
			names->Location = System::Drawing::Point(4, 118);
			names->Name = L"names";
			names->Size = System::Drawing::Size(64, 23);
			names->TabIndex = 17;
			names->Text = gg;

			Label^ price = gcnew Label();
			price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			price->Parent = p;
			price->AutoSize = true;
			price->Location = System::Drawing::Point(100, 149);
			price->Name = L"counter";
			price->Size = System::Drawing::Size(64, 23);
			price->TabIndex = 17;
			price->Text = pcount;

			Label^ qcount = gcnew Label();
			qcount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			qcount->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			qcount->Parent = p;
			qcount->AutoSize = true;
			qcount->Location = System::Drawing::Point(100, 172);
			qcount->Name = L"counter";
			qcount->Size = System::Drawing::Size(28, 23);
			qcount->TabIndex = 17;
			qcount->Text = pprice;




			Label^ quantity = gcnew Label();
			quantity->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			quantity->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			quantity->Parent = p;
			quantity->AutoSize = true;
			quantity->Location = System::Drawing::Point(4, 172);
			quantity->Name = L"counter";
			quantity->Size = System::Drawing::Size(73, 23);
			quantity->TabIndex = 17;
			quantity->Text = "quantity";

			PictureBox^ picbox = gcnew PictureBox();
			picbox->Location = System::Drawing::Point(4, 7);
			picbox->Parent = p;

			picbox->Name = L"pictureBox3";
			picbox->ImageLocation = ppp;
			picbox->Size = System::Drawing::Size(208, 108);
			picbox->TabIndex = 13;
			picbox->TabStop = false;

			picbox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			Label^ label_price = gcnew Label();
			label_price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			label_price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label_price->Parent = p;
			label_price->AutoSize = true;
			label_price->Location = System::Drawing::Point(4, 148);
			label_price->Name = L"counter";
			label_price->Size = System::Drawing::Size(73, 23);
			label_price->TabIndex = 17;
			label_price->Text = "price";

		}


	}




	private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		Environment::Exit(0);
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		sign->BringToFront();
	}

	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void a_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button15_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Environment::Exit(0);

	}
		   //clearing the vector caus its a new user 
	private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) {
		v.clear();
		sign_success->BringToFront();



	}
	private: System::Void b_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void c_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void home_cat1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button22_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   //picking apic ff.filename sourc of the pic
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ff = gcnew OpenFileDialog();
		ff->Filter = "Image Files (*.jpg;*.jpeg; *.gif; *.png; *.bmp;)|*.jpg;*.jpeg;*.gif;*.png;*.bmp;";

		if (ff->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			wp = ff->FileName;

			pictureBox1->Image = gcnew Bitmap(ff->FileName);
		}
	}
	private: System::Void c_na_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   //sell food cat
	private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
		flag = 2;

		cat1->BringToFront();
	}
		   //sell kitchen cat
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = 3;
		cat1->BringToFront();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = 4;
		cat1->BringToFront();

	}
		   //browsing food
	private: System::Void button16_Click_1(System::Object^ sender, System::EventArgs^ e) {
		home_cat1->Controls->Clear();
		home_cat1->BringToFront();

		ifstream  food("food");
		string name2, price2, pi;
		int quantity2;
		int idddd;


		//but->Location= new Point(25, 35);
		int xp = 140, xy = 16;
		int x = 94, y = 16;
		int cnt = 0;
		Product pro;


		while (food >> name2 >> price2 >> quantity2 >> pi >> idddd)
		{
			int j = 0;


			System::String^ s = idddd.ToString();
			String^ gg = gcnew String(name2.c_str());
			String^ pcount = gcnew String(price2.c_str());
			String^ pprice = quantity2.ToString();
			String^ ppp = gcnew String(pi.c_str());


			pro.namee = name2;
			pro.price = price2;
			pro.quantity = quantity2;
			pro.id = idddd;
			v.push_back(pro);
			long long sum = quantity2;


			cnt++;

			Panel^ p = gcnew Panel();
			p->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			p->Location = System::Drawing::Point(x, y);
			p->Parent = home_cat1;
			p->Size = System::Drawing::Size(217, 289);
			p->Name = gg;
			p->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;


			if (cnt == 3) { cnt = 0; y += 311; x = 94; }
			else x += 283;



			Button^ plus = gcnew Button();
			plus->Image = System::Drawing::Image::FromFile("E:/pic/plus.png");//plus
			plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			plus->FlatAppearance->BorderSize = 0;
			plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			plus->Parent = p;
			plus->Location = System::Drawing::Point(132, 266);
			plus->Name = s;
			plus->Size = System::Drawing::Size(15, 15);



			plus->Click += gcnew System::EventHandler(this, &MyForm::plus);





			Button^ minus = gcnew Button();
			minus->Image = System::Drawing::Image::FromFile("E:/pic/minus.png");// minus
			minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			minus->FlatAppearance->BorderSize = 0;
			minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			minus->Parent = p;
			minus->Location = System::Drawing::Point(60, 267);
			minus->Name = s;
			minus->Size = System::Drawing::Size(15, 15);


			minus->Click += gcnew System::EventHandler(this, &MyForm::minus);

			Button^ rate1 = gcnew Button();
			rate1->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate1->FlatAppearance->BorderSize = 0;
			rate1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate1->Parent = p;
			rate1->Location = System::Drawing::Point(10, 212);
			rate1->Name = s;
			rate1->Size = System::Drawing::Size(32, 32);
			rate1->Click += gcnew System::EventHandler(this, &MyForm::rate1);
			//--------------------------------------
			Button^ rate2 = gcnew Button();
			rate2->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate2->FlatAppearance->BorderSize = 0;
			rate2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate2->Parent = p;
			rate2->Location = System::Drawing::Point(37, 212);
			rate2->Name = s;
			rate2->Size = System::Drawing::Size(32, 32);
			rate2->Click += gcnew System::EventHandler(this, &MyForm::rate2);
			//--------------------------------------
			Button^ rate3 = gcnew Button();
			rate3->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate3->FlatAppearance->BorderSize = 0;
			rate3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate3->Parent = p;
			rate3->Location = System::Drawing::Point(60, 212);
			rate3->Name = s;
			rate3->Size = System::Drawing::Size(32, 32);
			rate3->Click += gcnew System::EventHandler(this, &MyForm::rate3);
			//--------------------------------------
			Button^ rate4 = gcnew Button();
			rate4->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate4->FlatAppearance->BorderSize = 0;
			rate4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate4->Parent = p;
			rate4->Location = System::Drawing::Point(88, 212);
			rate4->Name = s;
			rate4->Size = System::Drawing::Size(32, 32);
			rate4->Click += gcnew System::EventHandler(this, &MyForm::rate4);
			//--------------------------------------
			Button^ rate5 = gcnew Button();
			rate5->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate5->FlatAppearance->BorderSize = 0;
			rate5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate5->Parent = p;
			rate5->Location = System::Drawing::Point(116, 212);
			rate5->Name = s;
			rate5->Size = System::Drawing::Size(32, 32);
			rate5->Click += gcnew System::EventHandler(this, &MyForm::rate5);
			//--------------------------------------
			Button^ counter = gcnew Button();
			counter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			counter->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			counter->Parent = p;
			counter->AutoSize = true;
			counter->Location = System::Drawing::Point(91, 260);
			counter->Name = L"counter";
			counter->Size = System::Drawing::Size(28, 23);
			counter->TabIndex = 17;
			counter->Text = counter_gamed.ToString();


			Label^ names = gcnew Label();
			names->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			names->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			names->Parent = p;
			names->AutoSize = true;
			names->Location = System::Drawing::Point(4, 118);
			names->Name = L"names";
			names->Size = System::Drawing::Size(64, 23);
			names->TabIndex = 17;
			names->Text = gg;

			Label^ price = gcnew Label();
			price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			price->Parent = p;
			price->AutoSize = true;
			price->Location = System::Drawing::Point(100, 149);
			price->Name = L"counter";
			price->Size = System::Drawing::Size(64, 23);
			price->TabIndex = 17;
			price->Text = pcount;

			Label^ qcount = gcnew Label();
			qcount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			qcount->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			qcount->Parent = p;
			qcount->AutoSize = true;
			qcount->Location = System::Drawing::Point(100, 172);
			qcount->Name = L"counter";
			qcount->Size = System::Drawing::Size(28, 23);
			qcount->TabIndex = 17;
			qcount->Text = pprice;




			Label^ quantity = gcnew Label();
			quantity->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			quantity->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			quantity->Parent = p;
			quantity->AutoSize = true;
			quantity->Location = System::Drawing::Point(4, 172);
			quantity->Name = L"counter";
			quantity->Size = System::Drawing::Size(73, 23);
			quantity->TabIndex = 17;
			quantity->Text = "quantity";

			PictureBox^ picbox = gcnew PictureBox();
			picbox->Location = System::Drawing::Point(4, 7);
			picbox->Parent = p;

			picbox->Name = L"pictureBox3";
			picbox->ImageLocation = ppp;
			picbox->Size = System::Drawing::Size(208, 108);
			picbox->TabIndex = 13;
			picbox->TabStop = false;

			picbox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			Label^ label_price = gcnew Label();
			label_price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			label_price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label_price->Parent = p;
			label_price->AutoSize = true;
			label_price->Location = System::Drawing::Point(4, 148);
			label_price->Name = L"counter";
			label_price->Size = System::Drawing::Size(73, 23);
			label_price->TabIndex = 17;
			label_price->Text = "price";

		}




	}


	//browsing sports
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		home_cat1->Controls->Clear();
		home_cat1->BringToFront();

		ifstream  sports("sports");
		string name2, price2, pi;
		int quantity2;
		int idddd;


		//but->Location= new Point(25, 35);
		int xp = 140, xy = 16;
		int x = 94, y = 16;
		int cnt = 0;
		Product pro;


		while (sports >> name2 >> price2 >> quantity2 >> pi >> idddd)
		{
			int j = 0;


			System::String^ s = idddd.ToString();
			String^ gg = gcnew String(name2.c_str());
			String^ pcount = gcnew String(price2.c_str());
			String^ pprice = quantity2.ToString();
			String^ ppp = gcnew String(pi.c_str());


			pro.namee = name2;
			pro.price = price2;
			pro.quantity = quantity2;
			pro.id = idddd;
			v.push_back(pro);
			long long sum = quantity2;


			cnt++;

			Panel^ p = gcnew Panel();
			p->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			p->Location = System::Drawing::Point(x, y);
			p->Parent = home_cat1;
			p->Size = System::Drawing::Size(217, 289);
			p->Name = gg;
			p->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;


			if (cnt == 3) { cnt = 0; y += 311; x = 94; }
			else x += 283;



			Button^ plus = gcnew Button();
			plus->Image = System::Drawing::Image::FromFile("E:/pic/plus.png");//plus
			plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			plus->FlatAppearance->BorderSize = 0;
			plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			plus->Parent = p;
			plus->Location = System::Drawing::Point(132, 266);
			plus->Name = s;
			plus->Size = System::Drawing::Size(15, 15);



			plus->Click += gcnew System::EventHandler(this, &MyForm::plus);





			Button^ minus = gcnew Button();
			minus->Image = System::Drawing::Image::FromFile("E:/pic/minus.png");// minus
			minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			minus->FlatAppearance->BorderSize = 0;
			minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			minus->Parent = p;
			minus->Location = System::Drawing::Point(60, 267);
			minus->Name = s;
			minus->Size = System::Drawing::Size(15, 15);


			minus->Click += gcnew System::EventHandler(this, &MyForm::minus);

			Button^ rate1 = gcnew Button();
			rate1->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate1->FlatAppearance->BorderSize = 0;
			rate1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate1->Parent = p;
			rate1->Location = System::Drawing::Point(10, 212);
			rate1->Name = s;
			rate1->Size = System::Drawing::Size(32, 32);
			rate1->Click += gcnew System::EventHandler(this, &MyForm::rate1);
			//--------------------------------------
			Button^ rate2 = gcnew Button();
			rate2->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate2->FlatAppearance->BorderSize = 0;
			rate2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate2->Parent = p;
			rate2->Location = System::Drawing::Point(37, 212);
			rate2->Name = s;
			rate2->Size = System::Drawing::Size(32, 32);
			rate2->Click += gcnew System::EventHandler(this, &MyForm::rate2);
			//--------------------------------------
			Button^ rate3 = gcnew Button();
			rate3->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate3->FlatAppearance->BorderSize = 0;
			rate3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate3->Parent = p;
			rate3->Location = System::Drawing::Point(60, 212);
			rate3->Name = s;
			rate3->Size = System::Drawing::Size(32, 32);
			rate3->Click += gcnew System::EventHandler(this, &MyForm::rate3);
			//--------------------------------------
			Button^ rate4 = gcnew Button();
			rate4->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate4->FlatAppearance->BorderSize = 0;
			rate4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate4->Parent = p;
			rate4->Location = System::Drawing::Point(88, 212);
			rate4->Name = s;
			rate4->Size = System::Drawing::Size(32, 32);
			rate4->Click += gcnew System::EventHandler(this, &MyForm::rate4);
			//--------------------------------------
			Button^ rate5 = gcnew Button();
			rate5->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate5->FlatAppearance->BorderSize = 0;
			rate5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate5->Parent = p;
			rate5->Location = System::Drawing::Point(116, 212);
			rate5->Name = s;
			rate5->Size = System::Drawing::Size(32, 32);
			rate5->Click += gcnew System::EventHandler(this, &MyForm::rate5);
			//--------------------------------------
			Button^ counter = gcnew Button();
			counter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			counter->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			counter->Parent = p;
			counter->AutoSize = true;
			counter->Location = System::Drawing::Point(91, 260);
			counter->Name = L"counter";
			counter->Size = System::Drawing::Size(28, 23);
			counter->TabIndex = 17;
			counter->Text = counter_gamed.ToString();


			Label^ names = gcnew Label();
			names->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			names->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			names->Parent = p;
			names->AutoSize = true;
			names->Location = System::Drawing::Point(4, 118);
			names->Name = L"names";
			names->Size = System::Drawing::Size(64, 23);
			names->TabIndex = 17;
			names->Text = gg;

			Label^ price = gcnew Label();
			price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			price->Parent = p;
			price->AutoSize = true;
			price->Location = System::Drawing::Point(100, 149);
			price->Name = L"counter";
			price->Size = System::Drawing::Size(64, 23);
			price->TabIndex = 17;
			price->Text = pcount;

			Label^ qcount = gcnew Label();
			qcount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			qcount->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			qcount->Parent = p;
			qcount->AutoSize = true;
			qcount->Location = System::Drawing::Point(100, 172);
			qcount->Name = L"counter";
			qcount->Size = System::Drawing::Size(28, 23);
			qcount->TabIndex = 17;
			qcount->Text = pprice;




			Label^ quantity = gcnew Label();
			quantity->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			quantity->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			quantity->Parent = p;
			quantity->AutoSize = true;
			quantity->Location = System::Drawing::Point(4, 172);
			quantity->Name = L"counter";
			quantity->Size = System::Drawing::Size(73, 23);
			quantity->TabIndex = 17;
			quantity->Text = "quantity";

			PictureBox^ picbox = gcnew PictureBox();
			picbox->Location = System::Drawing::Point(4, 7);
			picbox->Parent = p;

			picbox->Name = L"pictureBox3";
			picbox->ImageLocation = ppp;
			picbox->Size = System::Drawing::Size(208, 108);
			picbox->TabIndex = 13;
			picbox->TabStop = false;

			picbox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			Label^ label_price = gcnew Label();
			label_price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			label_price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label_price->Parent = p;
			label_price->AutoSize = true;
			label_price->Location = System::Drawing::Point(4, 148);
			label_price->Name = L"counter";
			label_price->Size = System::Drawing::Size(73, 23);
			label_price->TabIndex = 17;
			label_price->Text = "price";

		}




	}

	//clothes sell
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = 5;

		cat1->BringToFront();
	}//super market sell
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		flag = 6;

		button13->Text;
		cat1->BringToFront();
	}
	private: System::Void name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void side_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		side_panel->BringToFront();
		side_panel->Visible = true;
	}
	private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button47_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button16_Click_2(System::Object^ sender, System::EventArgs^ e) {
		b->Visible = false;
		a->Visible = true;
	}
		   //elect browsing
	private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
		a->Visible = false;
		home_cat1->Controls->Clear();
		home_cat1->BringToFront();

		ifstream  electr("electro");
		string name2, price2, pi;
		int quantity2;
		int idddd;


		//but->Location= new Point(25, 35);
		int xp = 140, xy = 16;
		int x = 94, y = 16;
		int cnt = 0;
		Product pro;
		int star, person;

		while (electr >> name2 >> price2 >> quantity2 >> pi >> idddd)
		{
			int j = 0;


			System::String^ s = idddd.ToString();
			String^ gg = gcnew String(name2.c_str());
			String^ pcount = gcnew String(price2.c_str());
			String^ pprice = quantity2.ToString();
			String^ ppp = gcnew String(pi.c_str());


			pro.namee = name2;
			pro.price = price2;
			pro.quantity = quantity2;
			pro.rate = star;
			pro.person = person;
			pro.id = idddd;
			pro.seller_id = Ide;
			v.push_back(pro);
			long long sum = quantity2;


			cnt++;

			Panel^ p = gcnew Panel();
			p->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			p->Location = System::Drawing::Point(x, y);
			p->Parent = home_cat1;
			p->Size = System::Drawing::Size(217, 289);
			p->Name = gg;
			p->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;


			if (cnt == 3) { cnt = 0; y += 311; x = 94; }
			else x += 283;



			Button^ plus = gcnew Button();
			plus->Image = System::Drawing::Image::FromFile("E:/pic/plus.png");//plus
			plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			plus->FlatAppearance->BorderSize = 0;
			plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			plus->Parent = p;
			plus->Location = System::Drawing::Point(132, 266);
			plus->Name = s;
			plus->Size = System::Drawing::Size(15, 15);



			plus->Click += gcnew System::EventHandler(this, &MyForm::plus);





			Button^ minus = gcnew Button();
			minus->Image = System::Drawing::Image::FromFile("E:/pic/minus.png");// minus
			minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			minus->FlatAppearance->BorderSize = 0;
			minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			minus->Parent = p;
			minus->Location = System::Drawing::Point(60, 267);
			minus->Name = s;
			minus->Size = System::Drawing::Size(15, 15);


			minus->Click += gcnew System::EventHandler(this, &MyForm::minus);

			Button^ rate1 = gcnew Button();
			rate1->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate1->FlatAppearance->BorderSize = 0;
			rate1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate1->Parent = p;
			rate1->Location = System::Drawing::Point(10, 212);
			rate1->Name = s;
			rate1->Size = System::Drawing::Size(32, 32);
			rate1->Click += gcnew System::EventHandler(this, &MyForm::rate1);
			//--------------------------------------
			Button^ rate2 = gcnew Button();
			rate2->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate2->FlatAppearance->BorderSize = 0;
			rate2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate2->Parent = p;
			rate2->Location = System::Drawing::Point(37, 212);
			rate2->Name = s;
			rate2->Size = System::Drawing::Size(32, 32);
			rate2->Click += gcnew System::EventHandler(this, &MyForm::rate2);
			//--------------------------------------
			Button^ rate3 = gcnew Button();
			rate3->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate3->FlatAppearance->BorderSize = 0;
			rate3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate3->Parent = p;
			rate3->Location = System::Drawing::Point(60, 212);
			rate3->Name = s;
			rate3->Size = System::Drawing::Size(32, 32);
			rate3->Click += gcnew System::EventHandler(this, &MyForm::rate3);
			//--------------------------------------
			Button^ rate4 = gcnew Button();
			rate4->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate4->FlatAppearance->BorderSize = 0;
			rate4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate4->Parent = p;
			rate4->Location = System::Drawing::Point(88, 212);
			rate4->Name = s;
			rate4->Size = System::Drawing::Size(32, 32);
			rate4->Click += gcnew System::EventHandler(this, &MyForm::rate4);
			//--------------------------------------
			Button^ rate5 = gcnew Button();
			rate5->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
			rate5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			rate5->FlatAppearance->BorderSize = 0;
			rate5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			rate5->Parent = p;
			rate5->Location = System::Drawing::Point(116, 212);
			rate5->Name = s;
			rate5->Size = System::Drawing::Size(32, 32);
			rate5->Click += gcnew System::EventHandler(this, &MyForm::rate5);
			//--------------------------------------
			Button^ counter = gcnew Button();
			counter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			counter->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			counter->Parent = p;
			counter->AutoSize = true;
			counter->Location = System::Drawing::Point(91, 260);
			counter->Name = L"counter";
			counter->Size = System::Drawing::Size(28, 23);
			counter->TabIndex = 17;
			counter->Text = counter_gamed.ToString();


			Label^ names = gcnew Label();
			names->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			names->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			names->Parent = p;
			names->AutoSize = true;
			names->Location = System::Drawing::Point(4, 118);
			names->Name = L"names";
			names->Size = System::Drawing::Size(64, 23);
			names->TabIndex = 17;
			names->Text = gg;

			Label^ price = gcnew Label();
			price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			price->Parent = p;
			price->AutoSize = true;
			price->Location = System::Drawing::Point(100, 149);
			price->Name = L"counter";
			price->Size = System::Drawing::Size(64, 23);
			price->TabIndex = 17;
			price->Text = pcount;

			Label^ qcount = gcnew Label();
			qcount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			qcount->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			qcount->Parent = p;
			qcount->AutoSize = true;
			qcount->Location = System::Drawing::Point(100, 172);
			qcount->Name = L"counter";
			qcount->Size = System::Drawing::Size(28, 23);
			qcount->TabIndex = 17;
			qcount->Text = pprice;




			Label^ quantity = gcnew Label();
			quantity->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			quantity->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			quantity->Parent = p;
			quantity->AutoSize = true;
			quantity->Location = System::Drawing::Point(4, 172);
			quantity->Name = L"counter";
			quantity->Size = System::Drawing::Size(73, 23);
			quantity->TabIndex = 17;
			quantity->Text = "quantity";

			PictureBox^ picbox = gcnew PictureBox();
			picbox->Location = System::Drawing::Point(4, 7);
			picbox->Parent = p;

			picbox->Name = L"pictureBox3";
			picbox->ImageLocation = ppp;
			picbox->Size = System::Drawing::Size(208, 108);
			picbox->TabIndex = 13;
			picbox->TabStop = false;

			picbox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			Label^ label_price = gcnew Label();
			label_price->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			label_price->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label_price->Parent = p;
			label_price->AutoSize = true;
			label_price->Location = System::Drawing::Point(4, 148);
			label_price->Name = L"counter";
			label_price->Size = System::Drawing::Size(73, 23);
			label_price->TabIndex = 17;
			label_price->Text = "price";

		}
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void button47_Click_2(System::Object^ sender, System::EventArgs^ e) {
		a->Visible = false;
	}
	private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
		a->Visible = false;
	}
	private: System::Void b_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
		b->Visible = true;
		a->Visible = false;
	}
	private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
		a->Visible = false;
	}
	private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
		a->Visible = false;
	}
	private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {
		a->Visible = false;
	}
		   //help sidepanel
	private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
		a->Visible = false;
		b->Visible = false;
		Process::Start("https://www.codeproject.com/Articles/12976/How-to-Clone-Serialize-Copy-Paste-a-Windows-Forms");

	}
	private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
		a->Visible = false;
		b->Visible = false;
		Process::Start("file:///E:/New%20Text%20Document.html");

	}
	private: System::Void button16_Click_3(System::Object^ sender, System::EventArgs^ e) {
		side_panel->Visible = false;
	}
	private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {

		b->Visible = false;
	}
	private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {

		b->Visible = false;
	}
	private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
		b->Visible = false;
		flag = 1;
		cat1->BringToFront();
	}
	private: System::Void button59_Click(System::Object^ sender, System::EventArgs^ e) {
		Environment::Exit(0);
	}
	private: System::Void cup_Click(System::Object^ sender, System::EventArgs^ e) {

		cup->Visible = false;
		
		cub2->Visible = true;
	}
	private: System::Void cub2_Click(System::Object^ sender, System::EventArgs^ e) {
		cup->Visible = true;
		cub2->Visible = false;


		
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		Environment::Exit(0);
	}
		   //add product t ur cart
	private: System::Void plus(System::Object^ sender, System::EventArgs^ e) {
		Button^ bt = (Button^)sender;
		move->BringToFront();
		move->Visible = true;
		std::string ide = msclr::interop::marshal_as<std::string>(bt->Name);
		string u = ide;


		long long id_int = 0;
		String^ ppp;


		for (int i = 0; i < u.size(); i++)
		{
			u[i] = u[i] - '0';
			id_int = (id_int * 10) + u[i];


		}
		for (int i = 0; i < v.size(); i++) {

			if (v[i].id == id_int) {

				real_cart.add_to_cart(v[i]);
				//out of stock code
				for (int j = 0; j < real_cart.cart.size(); j++) {
					if (v[i].id == real_cart.cart[j].id)
					{
						int l = j;
						String^ gg2 = v[i].quantity.ToString();

					
						String^ gg = real_cart.cart[j].quantity.ToString();
						

						if (real_cart.cart[l].quantity >= v[i].quantity)
						{
							

							MessageBox::Show("out of stock");
							break;
						}
						break;

					}
				}



				long long ans = real_cart.final_price(real_cart.cart);
				System::String^ uh = ans.ToString();
				cart_price->Text = uh;


			}

		}






	}



		   //remove product from ur cart
	private: System::Void minus(System::Object^ sender, System::EventArgs^ e) {
		Button^ bt = (Button^)sender;


		std::string ide = msclr::interop::marshal_as<std::string>(bt->Name);
		string u = ide;

		long long id_int = 0;
		String^ ppp;


		for (int i = 0; i < u.size(); i++)
		{
			u[i] = u[i] - '0';
			id_int = (id_int * 10) + u[i];


		}
		for (int i = 0; i < v.size(); i++) {

			if (v[i].id == id_int) {

				real_cart.remove_from_cart(v[i]);

				for (int j = 0; j < real_cart.cart.size(); j++) {
					if (v[i].id == real_cart.cart[j].id)
					{
						if (real_cart.cart[j].quantity == 0) {
							String^ gg2 = v[i].quantity.ToString();

							MessageBox::Show(gg2);
							String^ gg = real_cart.cart[j].quantity.ToString();
							MessageBox::Show(gg); break;
						}
						else {


							String^ gg2 = v[i].quantity.ToString();

							MessageBox::Show(gg2);
							String^ gg = real_cart.cart[j].quantity.ToString();
							MessageBox::Show(gg);
							break;
						}
					}

				}


				long long ans = real_cart.final_price(real_cart.cart);
				System::String^ uh = ans.ToString();
				cart_price->Text = uh;

			}
		}
	}






	private: System::Void rate1(System::Object^ sender, System::EventArgs^ e) {
		// MessageBox::Show("shaghal yasta wallahy");

		Button^ yt = (Button^)sender;
		std::string ide = msclr::interop::marshal_as<std::string>(yt->Name);
		string u = ide;

		long long id_int = 0;
		String^ ppp;


		for (int i = 0; i < u.size(); i++)
		{
			u[i] = u[i] - '0';
			id_int = (id_int * 10) + u[i]; // id of products


		}
		for (int i = 0; i < v.size(); i++) {

			if (v[i].id == id_int) {
				v[i].rate += 1;
				v[i].person += 1;
				v[i].final_rate = v[i].rate / v[i].person;
				String^ s = v[i].final_rate.ToString();
				MessageBox::Show(s, "the product rate");
			}
		}

	}

	private: System::Void rate2(System::Object^ sender, System::EventArgs^ e) {

		Button^ yt = (Button^)sender;
		std::string ide = msclr::interop::marshal_as<std::string>(yt->Name);
		string u = ide;

		long long id_int = 0;
		String^ ppp;


		for (int i = 0; i < u.size(); i++)
		{
			u[i] = u[i] - '0';
			id_int = (id_int * 10) + u[i]; // id of products


		}
		for (int i = 0; i < v.size(); i++) {

			if (v[i].id == id_int) {
				v[i].rate += 2;
				v[i].person += 1;
				v[i].final_rate = (float)v[i].rate / (float)v[i].person;
				MessageBox::Show(v[i].person.ToString(), "number of person rated");


				String^ s = v[i].final_rate.ToString();
				MessageBox::Show(s, "the product rate");
			}
		}

	}
	private: System::Void rate3(System::Object^ sender, System::EventArgs^ e) {
		Button^ yt = (Button^)sender;
		std::string ide = msclr::interop::marshal_as<std::string>(yt->Name);
		string u = ide;

		long long id_int = 0;
		String^ ppp;


		for (int i = 0; i < u.size(); i++)
		{
			u[i] = u[i] - '0';
			id_int = (id_int * 10) + u[i]; // id of products


		}
		for (int i = 0; i < v.size(); i++) {

			if (v[i].id == id_int) {
				v[i].rate += 3;
				v[i].person += 1;
				v[i].final_rate = (float)v[i].rate / (float)v[i].person;
				MessageBox::Show(v[i].person.ToString(), "number of person rated");


				String^ s = v[i].final_rate.ToString();
				MessageBox::Show(s, "the product rate");
			}
		}

	}
	private: System::Void rate4(System::Object^ sender, System::EventArgs^ e) {
		Button^ yt = (Button^)sender;
		std::string ide = msclr::interop::marshal_as<std::string>(yt->Name);
		string u = ide;

		long long id_int = 0;
		String^ ppp;


		for (int i = 0; i < u.size(); i++)
		{
			u[i] = u[i] - '0';
			id_int = (id_int * 10) + u[i]; // id of products


		}
		for (int i = 0; i < v.size(); i++) {

			if (v[i].id == id_int) {
				v[i].rate += 4;
				v[i].person += 1;
				v[i].final_rate = (float)v[i].rate / (float)v[i].person;
				MessageBox::Show(v[i].person.ToString(), "number of person rated");


				String^ s = v[i].final_rate.ToString();
				MessageBox::Show(s, "the product rate");
			}
		}

	}
	private: System::Void rate5(System::Object^ sender, System::EventArgs^ e) {
		Button^ yt = (Button^)sender;
		std::string ide = msclr::interop::marshal_as<std::string>(yt->Name);
		string u = ide;

		long long id_int = 0;
		String^ ppp;


		for (int i = 0; i < u.size(); i++)
		{
			u[i] = u[i] - '0';
			id_int = (id_int * 10) + u[i]; // id of products


		}
		for (int i = 0; i < v.size(); i++) {

			if (v[i].id == id_int) {
				v[i].rate += 5;
				v[i].person += 1;
				v[i].final_rate = (float)v[i].rate / (float)v[i].person;
				MessageBox::Show(v[i].person.ToString(), "number of person rated");


				String^ s = v[i].final_rate.ToString();
			
				MessageBox::Show(s, "the product rate");
			}
		}

	}

		   // CreateMyPanel();

			//s = textBox1->Text;*/


	private: System::Void cart_price_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void recept_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button60_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button61_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		   //recept open
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ rec9 = gcnew Button();
		rec9->Parent = recept;
		rec9->Dock = System::Windows::Forms::DockStyle::Top;
		rec9->AutoSize = true;
		rec9->FlatAppearance->BorderSize = 0;
		rec9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		rec9->Name = L"5o5";
		rec9->Size = System::Drawing::Size(10, 3000);
		rec9->TabIndex = 17;
		recept->SendToBack();
		recept->BringToFront();
		stack<Product>cart_stack;
		
		for (int i = 0; i < real_cart.cart.size(); i++)
		{
			Product x = real_cart.cart[i];
			cart_stack.push(x);

		}

		for (int i = 0; i <= cart_stack.size(); i++)
		{
			if (cart_stack.empty())
			{
				MessageBox::Show("you havenot buy any products yet :)");
				break;
			}
			Product ans=cart_stack.top();

			
			cart_stack.pop();
			String^ gg = gcnew String(ans.namee.c_str());
			String^ wp2 = gcnew String(ans.price.c_str());
			String^ ggwp = ans.quantity.ToString();

			label6->Text = cart_price->Text;

			Label^ rec2 = gcnew Label();
			rec2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			rec2->Parent = recept;
			rec2->Dock = System::Windows::Forms::DockStyle::Top;
			rec2->AutoSize = true;
			rec2->Name = L"5o5";
			rec2->Size = System::Drawing::Size(50, 30);
			rec2->TabIndex = 17;
			rec2->Text = wp2;

			Label^ rec3 = gcnew Label();
			rec3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			rec3->Parent = recept;
			rec3->Dock = System::Windows::Forms::DockStyle::Top;
			rec3->AutoSize = true;
			rec3->Name = L"5o5";
			rec3->Size = System::Drawing::Size(50, 30);
			rec3->TabIndex = 17;
			rec3->Text = ggwp;

			Label^ rec = gcnew Label();
			rec->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			rec->Parent = recept;
			rec->Dock = System::Windows::Forms::DockStyle::Top;
			rec->AutoSize = true;
			rec->Name = L"5o5";
			rec->Size = System::Drawing::Size(50, 30);
			rec->TabIndex = 17;
			rec->Text = gg;



		}

	}
		   //void CreateMyPanel()
		   //{
			  // Panel^ panel1 = gcnew Panel;
			  // TextBox^ textBox1 = gcnew TextBox;
			  // Label^ label1 = gcnew Label;

			  // // Initialize the Panel control.
			  // panel1->Location = System::Drawing::Point(56, 72);
			  // panel1->Size = System::Drawing::Size(264, 152);
			  // // Set the Borderstyle for the Panel to three-dimensional.
			  // panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			  // panel1->BackColor.White;
			  // // Initialize the Label and TextBox controls.
			  // label1->Location = System::Drawing::Point(16, 16);
			  // label1->Text = "label1";
			  // label1->Size = System::Drawing::Size(104, 16);

			  // textBox1->Location = System::Drawing::Point(16, 32);
			  // textBox1->Text = " heeer";
			  // textBox1->Size = System::Drawing::Size(152, 20);

			  // // Add the Panel control to the form.
			  // this->Controls->Add(panel1);
			  // // Add the Label and TextBox controls to the Panel.
			  // panel1->Controls->Add(label1);
			  // panel1->Controls->Add(textBox1);
			  // panel1->BringToFront();
		   //}

	private: System::Void button61_Click_1(System::Object^ sender, System::EventArgs^ e) {
		real_cart.confirm();
		MessageBox::Show("mission passed");
		long long ans = real_cart.final_price(real_cart.cart);
		System::String^ uh = ans.ToString();
		cart_price->Text = uh;
		label6->Text = uh;

		Button^ rec = gcnew Button();
		rec->Parent = recept;
		rec->Dock = System::Windows::Forms::DockStyle::Top;
		rec->AutoSize = true;
		rec->Name = L"5o5";
		rec->Size = System::Drawing::Size(10, 3000);
		rec->TabIndex = 17;
		recept->SendToBack();


	}
	private: System::Void label6_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button62_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void sign_success_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		move->Visible = false;
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		recept->SendToBack();
	}
	private: System::Void move_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
}
	   //search button
private: System::Void button28_Click_1(System::Object^ sender, System::EventArgs^ e) {

	std::string the_search = msclr::interop::marshal_as<std::string>(halim->Text);
	panel4->Controls->Clear();

	if (0 < the_search.size() && the_search.size() <= 3) {
		search_obj.search(the_search);
	}
	else if (the_search.size() > 3) {
		string s;
		s = the_search.substr(0, 3);
		search_obj.search(s);
	}
	else if (the_search.size() == 0)
	{
		MessageBox::Show("no entery found");
	}


	int xp = 140, xy = 16;
	int x = 94, y = 16;
	int cnt = 0;
	Product pro;
	int star, person;
	for (int i = 0; i < search_obj.S.size(); i++)
	{


		String^ search_name = gcnew String(search_obj.S[i].namee.c_str());
		String^ search_price = gcnew String(search_obj.S[i].price.c_str());
		String^ search_pic = gcnew String(search_obj.S[i].pic.c_str());
		System::String^ search_qunatity = search_obj.S[i].quantity.ToString();

		System::String^ search_id = search_obj.S[i].id.ToString();







		cnt++;

		Panel^ p = gcnew Panel();
		p->Location = System::Drawing::Point(x, y);
		p->Parent = panel4;
		p->Size = System::Drawing::Size(217, 289);
		p->Name = "father";
		p->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;


		if (cnt == 3) { cnt = 0; y += 311; x = 94; }
		else x += 283;



		Button^ plus = gcnew Button();
		plus->Image = System::Drawing::Image::FromFile("E:/pic/plus.png");//plus
		plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		plus->FlatAppearance->BorderSize = 0;
		plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		plus->Parent = p;
		plus->Location = System::Drawing::Point(132, 266);
		plus->Name = search_id;
		plus->Size = System::Drawing::Size(15, 15);



		plus->Click += gcnew System::EventHandler(this, &MyForm::plus);





		Button^ minus = gcnew Button();
		minus->Image = System::Drawing::Image::FromFile("E:/pic/minus.png");// minus
		minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		minus->FlatAppearance->BorderSize = 0;
		minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		minus->Parent = p;
		minus->Location = System::Drawing::Point(60, 267);
		minus->Name = search_id;
		minus->Size = System::Drawing::Size(15, 15);


		minus->Click += gcnew System::EventHandler(this, &MyForm::minus);


		PictureBox^ picbox = gcnew PictureBox();
		picbox->Location = System::Drawing::Point(4, 7);
		picbox->Parent = p;

		picbox->Name = L"pictureBox3";
		picbox->ImageLocation = search_pic;
		picbox->Size = System::Drawing::Size(208, 108);
		picbox->TabIndex = 13;
		picbox->TabStop = false;

		picbox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;


		Button^ rate1 = gcnew Button();
		rate1->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
		rate1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		rate1->FlatAppearance->BorderSize = 0;
		rate1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		rate1->Parent = p;
		rate1->Location = System::Drawing::Point(10, 212);
		rate1->Name = search_id;
		rate1->Size = System::Drawing::Size(32, 32);
		rate1->Click += gcnew System::EventHandler(this, &MyForm::rate1);
		//--------------------------------------
		Button^ rate2 = gcnew Button();
		rate2->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
		rate2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		rate2->FlatAppearance->BorderSize = 0;
		rate2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		rate2->Parent = p;
		rate2->Location = System::Drawing::Point(37, 212);
		rate2->Name = search_id;
		rate2->Size = System::Drawing::Size(32, 32);
		rate2->Click += gcnew System::EventHandler(this, &MyForm::rate2);
		//--------------------------------------
		Button^ rate3 = gcnew Button();
		rate3->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
		rate3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		rate3->FlatAppearance->BorderSize = 0;
		rate3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		rate3->Parent = p;
		rate3->Location = System::Drawing::Point(60, 212);
		rate3->Name = search_id;
		rate3->Size = System::Drawing::Size(32, 32);
		rate3->Click += gcnew System::EventHandler(this, &MyForm::rate3);
		//--------------------------------------
		Button^ rate4 = gcnew Button();
		rate4->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
		rate4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		rate4->FlatAppearance->BorderSize = 0;
		rate4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		rate4->Parent = p;
		rate4->Location = System::Drawing::Point(88, 212);
		rate4->Name = search_id;
		rate4->Size = System::Drawing::Size(32, 32);
		rate4->Click += gcnew System::EventHandler(this, &MyForm::rate4);
		//--------------------------------------
		Button^ rate5 = gcnew Button();
		rate5->Image = System::Drawing::Image::FromFile("E:/pic/star.png"); // star 
		rate5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		rate5->FlatAppearance->BorderSize = 0;
		rate5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		rate5->Parent = p;
		rate5->Location = System::Drawing::Point(105, 212);
		rate5->Name = search_id;
		rate5->Size = System::Drawing::Size(32, 32);
		rate5->Click += gcnew System::EventHandler(this, &MyForm::rate5);
		//--------------------------------------
		Button^ counter = gcnew Button();
		counter->Parent = p;
		counter->AutoSize = true;
		counter->Location = System::Drawing::Point(91, 260);
		counter->Name = L"counter";
		counter->Size = System::Drawing::Size(28, 23);
		counter->TabIndex = 17;
		counter->Text = counter_gamed.ToString();


		Label^ names = gcnew Label();
		names->Parent = p;
		names->AutoSize = true;
		names->Location = System::Drawing::Point(4, 118);
		names->Name = L"names";
		names->Size = System::Drawing::Size(64, 23);
		names->TabIndex = 17;
		names->Text = search_name;

		Label^ price = gcnew Label();
		price->Parent = p;
		price->AutoSize = true;
		price->Location = System::Drawing::Point(100, 149);
		price->Name = L"counter";
		price->Size = System::Drawing::Size(64, 23);
		price->TabIndex = 17;
		price->Text = search_price;

		Label^ qcount = gcnew Label();
		qcount->Parent = p;
		qcount->AutoSize = true;
		qcount->Location = System::Drawing::Point(100, 172);
		qcount->Name = L"counter";
		qcount->Size = System::Drawing::Size(28, 23);
		qcount->TabIndex = 17;
		qcount->Text = search_qunatity;


		

		Label^ quantity = gcnew Label();
		quantity->Parent = p;
		quantity->AutoSize = true;
		quantity->Location = System::Drawing::Point(4, 172);
		quantity->Name = L"counter";
		quantity->Size = System::Drawing::Size(73, 23);
		quantity->TabIndex = 17;
		quantity->Text = "quantity";




		Label^ label_price = gcnew Label();
		label_price->Parent = p;
		label_price->AutoSize = true;
		label_price->Location = System::Drawing::Point(4, 148);
		label_price->Name = L"counter";
		label_price->Size = System::Drawing::Size(73, 23);
		label_price->TabIndex = 17;
		label_price->Text = "price";











	}
	panel4->BringToFront();
	search_obj.S.clear();
}
};
}









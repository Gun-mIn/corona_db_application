#pragma once
// @@@ author Kwon Min Ji
// @@@ Kyung Hee University

#include "Form0.h"
#include "Form2.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// 다음 스크린 폼 추가
	// Form0 - 회원 가입
	using namespace DB_Project;

	// My SQL
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Zusammenfassung f? Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			textBox_PW->PasswordChar = '*';		// password security -> *
			//
			//TODO: Konstruktorcode hier hinzuf?en.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label_mgr;




	private: System::Windows::Forms::Button^ button_login;
	private: System::Windows::Forms::Label^ label_signup;


	private: System::Windows::Forms::TextBox^ textBox_PW;
	private: System::Windows::Forms::TextBox^ textBox_ID;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label_ID;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f? die Designerunterst?zung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge?dert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_PW = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ID = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label_ID = (gcnew System::Windows::Forms::Label());
			this->button_login = (gcnew System::Windows::Forms::Button());
			this->label_mgr = (gcnew System::Windows::Forms::Label());
			this->label_signup = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(333, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"사용자 로그인 화면";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_PW);
			this->groupBox1->Controls->Add(this->textBox_ID);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label_ID);
			this->groupBox1->Controls->Add(this->button_login);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Location = System::Drawing::Point(96, 83);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(530, 320);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sign-in";
			// 
			// textBox_PW
			// 
			this->textBox_PW->Location = System::Drawing::Point(190, 162);
			this->textBox_PW->Name = L"textBox_PW";
			this->textBox_PW->Size = System::Drawing::Size(263, 33);
			this->textBox_PW->TabIndex = 9;
			// 
			// textBox_ID
			// 
			this->textBox_ID->Location = System::Drawing::Point(190, 80);
			this->textBox_ID->Name = L"textBox_ID";
			this->textBox_ID->Size = System::Drawing::Size(263, 33);
			this->textBox_ID->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label5->Location = System::Drawing::Point(55, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 36);
			this->label5->TabIndex = 8;
			this->label5->Text = L"PW";
			// 
			// label_ID
			// 
			this->label_ID->AutoSize = true;
			this->label_ID->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label_ID->Location = System::Drawing::Point(55, 76);
			this->label_ID->Name = L"label_ID";
			this->label_ID->Size = System::Drawing::Size(42, 36);
			this->label_ID->TabIndex = 7;
			this->label_ID->Text = L"ID";
			// 
			// button_login
			// 
			this->button_login->BackColor = System::Drawing::Color::White;
			this->button_login->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button_login->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button_login->ForeColor = System::Drawing::Color::DimGray;
			this->button_login->Location = System::Drawing::Point(393, 265);
			this->button_login->Name = L"button_login";
			this->button_login->Size = System::Drawing::Size(120, 40);
			this->button_login->TabIndex = 6;
			this->button_login->Text = L"로그인";
			this->button_login->UseVisualStyleBackColor = false;
			this->button_login->UseWaitCursor = true;
			this->button_login->Click += gcnew System::EventHandler(this, &Form1::button_login_Click);
			// 
			// label_mgr
			// 
			this->label_mgr->AutoSize = true;
			this->label_mgr->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 10.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label_mgr->ForeColor = System::Drawing::Color::White;
			this->label_mgr->Location = System::Drawing::Point(560, 15);
			this->label_mgr->Name = L"label_mgr";
			this->label_mgr->Size = System::Drawing::Size(134, 25);
			this->label_mgr->TabIndex = 5;
			this->label_mgr->Text = L"관리자 로그인 >";
			this->label_mgr->Click += gcnew System::EventHandler(this, &Form1::label_mgr_Click);
			// 
			// label_signup
			// 
			this->label_signup->AutoSize = true;
			this->label_signup->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 10.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label_signup->ForeColor = System::Drawing::Color::White;
			this->label_signup->Location = System::Drawing::Point(554, 438);
			this->label_signup->Name = L"label_signup";
			this->label_signup->Size = System::Drawing::Size(140, 25);
			this->label_signup->TabIndex = 6;
			this->label_signup->Text = L"회원 가입/탈퇴 >";
			this->label_signup->Click += gcnew System::EventHandler(this, &Form1::label_signup_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCoral;
			this->ClientSize = System::Drawing::Size(712, 483);
			this->Controls->Add(this->label_signup);
			this->Controls->Add(this->label_mgr);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"사용자 로그인창";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		// To prevent error when app loads next form
		if (this->DesignMode)
			return;
	}


private: System::Void label_mgr_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	DB_Project::Form2^ f2 = gcnew DB_Project::Form2();
	f2->ShowDialog();
}

////////// Log in
private: System::Void button_login_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ connection 
		= gcnew MySqlConnection("datasource = localhost; port = 3306; username = root; password=1234 ");
	MySqlCommand^ command = gcnew MySqlCommand("Select * from corona_2020.user where userID = '" + 
			textBox_ID->Text + "' and userPW = '" + textBox_PW->Text + "';", connection);
	MySqlDataReader^ reader;

	try {
		connection->Open();
		reader = command->ExecuteReader();
		int count = 0;

		while (reader->Read())
		{
			count++;
		}

		if (count == 1)					// user account exists
		{
			String^ userName;
			userName = reader->GetString("userName");

			MessageBox::Show("Welcome, " + userName + " !!!");
			this->Hide();

			////////// 일반 유저 사용 화면 추가할 것 ////////////
			

		}
		else					// user account exists
		{
			MessageBox::Show("This account is wrong .");
		}
	}

	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}

}
////////////


///////////
private: System::Void label_signup_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Form0^ f = gcnew DB_Project::Form0();
	f->ShowDialog();
}

};
}

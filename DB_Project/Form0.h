#pragma once




namespace DB_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// My SQL
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Form0에 대한 요약입니다.
	/// </summary>
	public ref class Form0 : public System::Windows::Forms::Form
	{
	public:
		Form0(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Form0()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_userLogin;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_Name;
	private: System::Windows::Forms::TextBox^ textBox_ID;
	private: System::Windows::Forms::TextBox^ textBox_PW;
	private: System::Windows::Forms::TextBox^ textBox_LocationID;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;


	protected:

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_userLogin = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ID = (gcnew System::Windows::Forms::TextBox());
			this->textBox_PW = (gcnew System::Windows::Forms::TextBox());
			this->textBox_LocationID = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_userLogin
			// 
			this->label_userLogin->AutoSize = true;
			this->label_userLogin->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label_userLogin->ForeColor = System::Drawing::Color::White;
			this->label_userLogin->Location = System::Drawing::Point(598, 15);
			this->label_userLogin->Name = L"label_userLogin";
			this->label_userLogin->Size = System::Drawing::Size(100, 25);
			this->label_userLogin->TabIndex = 0;
			this->label_userLogin->Text = L"회원 탈퇴 >";
			this->label_userLogin->Click += gcnew System::EventHandler(this, &Form0::label_userLogin_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(68, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"이름";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(68, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 36);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(68, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 36);
			this->label3->TabIndex = 3;
			this->label3->Text = L"PW";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(68, 270);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 36);
			this->label4->TabIndex = 4;
			this->label4->Text = L"관심 지역";
			// 
			// textBox_Name
			// 
			this->textBox_Name->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->textBox_Name->Location = System::Drawing::Point(241, 71);
			this->textBox_Name->Name = L"textBox_Name";
			this->textBox_Name->Size = System::Drawing::Size(270, 43);
			this->textBox_Name->TabIndex = 5;
			// 
			// textBox_ID
			// 
			this->textBox_ID->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->textBox_ID->Location = System::Drawing::Point(241, 138);
			this->textBox_ID->Name = L"textBox_ID";
			this->textBox_ID->Size = System::Drawing::Size(270, 43);
			this->textBox_ID->TabIndex = 6;
			// 
			// textBox_PW
			// 
			this->textBox_PW->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->textBox_PW->Location = System::Drawing::Point(241, 205);
			this->textBox_PW->Name = L"textBox_PW";
			this->textBox_PW->Size = System::Drawing::Size(270, 43);
			this->textBox_PW->TabIndex = 7;
			// 
			// textBox_LocationID
			// 
			this->textBox_LocationID->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->textBox_LocationID->Location = System::Drawing::Point(241, 270);
			this->textBox_LocationID->Name = L"textBox_LocationID";
			this->textBox_LocationID->Size = System::Drawing::Size(270, 43);
			this->textBox_LocationID->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(99, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 31);
			this->label5->TabIndex = 9;
			this->label5->Text = L"*";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(113, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 31);
			this->label6->TabIndex = 10;
			this->label6->Text = L"*";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(178, 285);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 31);
			this->label7->TabIndex = 11;
			this->label7->Text = L"*";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(12, 449);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 22);
			this->label8->TabIndex = 12;
			this->label8->Text = L"*는 필수 입력 항목입니다.";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"이롭게 바탕체 Medium", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->ForeColor = System::Drawing::Color::DimGray;
			this->button1->Location = System::Drawing::Point(569, 397);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 63);
			this->button1->TabIndex = 13;
			this->button1->Text = L"가입";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form0::button1_Click);
			// 
			// Form0
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCoral;
			this->ClientSize = System::Drawing::Size(712, 483);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_LocationID);
			this->Controls->Add(this->textBox_PW);
			this->Controls->Add(this->textBox_ID);
			this->Controls->Add(this->textBox_Name);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_userLogin);
			this->Name = L"Form0";
			this->Text = L"Form0";
			this->Load += gcnew System::EventHandler(this, &Form0::Form0_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form0_Load(System::Object^ sender, System::EventArgs^ e) {
		if (this->DesignMode)
			return;
	}

	private: System::Void label_userLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   // Sign Up into DB
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// 객체 생성
	String^ conString = L"datasource = localhost; port = 3306; username = root; password=1234";
	MySqlConnection^ connection = gcnew MySqlConnection(conString);
	MySqlCommand^ command =
		gcnew MySqlCommand("insert into corona_2020.user (userID, userPW, userName, user_LocationID) values( '" + this->textBox_ID->Text 
			+ "' , '" + this->textBox_PW->Text + "' , '" + this->textBox_Name->Text + "', '" 
			+ this->textBox_LocationID->Text +  "' ) ;", connection);
	MySqlDataReader^ reader;

	try
	{
		connection->Open();
		reader = command->ExecuteReader();
		MessageBox::Show("회원 가입 완료 !");

		while (reader->Read())
		{
		}
	}

	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

};
}

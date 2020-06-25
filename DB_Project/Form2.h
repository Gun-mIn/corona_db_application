#pragma once
// @@@ author Kwon Min Ji
// @@@ Kyung Hee University

namespace DB_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// ���� ��ũ�� �� �߰�

	// My SQL
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Form2�� ���� ����Դϴ�.
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			textBox_PW->PasswordChar = '*';		// password security -> *
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button_login;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_PW;

	private: System::Windows::Forms::TextBox^ textBox_ID;

	protected:

	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_PW = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ID = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_login = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�̷Ӱ� ����ü Medium", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(333, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"������ �α��� ȭ��";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_PW);
			this->groupBox1->Controls->Add(this->textBox_ID);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button_login);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"�̷Ӱ� ����ü Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(94, 96);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(530, 320);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sign-in";
			// 
			// textBox_PW
			// 
			this->textBox_PW->Location = System::Drawing::Point(137, 154);
			this->textBox_PW->Name = L"textBox_PW";
			this->textBox_PW->Size = System::Drawing::Size(283, 33);
			this->textBox_PW->TabIndex = 5;
			// 
			// textBox_ID
			// 
			this->textBox_ID->Location = System::Drawing::Point(137, 90);
			this->textBox_ID->Name = L"textBox_ID";
			this->textBox_ID->Size = System::Drawing::Size(283, 33);
			this->textBox_ID->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"�̷Ӱ� ����ü Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->Location = System::Drawing::Point(55, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 36);
			this->label3->TabIndex = 3;
			this->label3->Text = L"PW";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"�̷Ӱ� ����ü Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(55, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 36);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ID";
			// 
			// button_login
			// 
			this->button_login->BackColor = System::Drawing::Color::White;
			this->button_login->Font = (gcnew System::Drawing::Font(L"�̷Ӱ� ����ü Medium", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button_login->ForeColor = System::Drawing::Color::DimGray;
			this->button_login->Location = System::Drawing::Point(391, 263);
			this->button_login->Name = L"button_login";
			this->button_login->Size = System::Drawing::Size(120, 40);
			this->button_login->TabIndex = 2;
			this->button_login->Text = L"�α���";
			this->button_login->UseVisualStyleBackColor = false;
			this->button_login->Click += gcnew System::EventHandler(this, &Form2::button_login_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCoral;
			this->ClientSize = System::Drawing::Size(712, 483);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form2";
			this->Text = L"������ �α���â";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
		// To prevent loading error
		if (this->DesignMode)
			return;
	}
	private: System::Void button_login_Click(System::Object^ sender, System::EventArgs^ e) {
		MySqlConnection^ connection
			= gcnew MySqlConnection("datasource = localhost; port = 3306; username = root; password=1234 ");
		MySqlCommand^ command = gcnew MySqlCommand("Select * from corona_2020.manager where MgrID = '" +
			textBox_ID->Text + "' and MgrPW = '" + textBox_PW->Text + "';", connection);
		MySqlDataReader^ reader;

		try {
			connection->Open();
			reader = command->ExecuteReader();
			int count = 0;

			while (reader->Read())
			{
				count++;
			}

			if (count == 1)					// Manager account exists
			{

				MessageBox::Show("Welcome, administrator !!!");
				this->Hide();

				////////// �Ϲ� ���� ��� ȭ�� �߰��� �� ////////////
				//Form2^ f2 = gcnew Form2();
				//f2->ShowDialog();

			}
			else					// Manager account exists
			{
				MessageBox::Show("This account is wrong .");
			}
		}

		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
};
}

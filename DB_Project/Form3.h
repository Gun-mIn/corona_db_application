#pragma once

#include "Form1.h"

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
	/// Form3�� ���� ����Դϴ�.
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:

		Form3(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_mgr;
	private: System::Windows::Forms::TextBox^ textBox_PW;
	private: System::Windows::Forms::TextBox^ textBox_ID;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label_ID;

	private: System::Windows::Forms::Button^ button1;

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
			this->label_mgr = (gcnew System::Windows::Forms::Label());
			this->textBox_PW = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ID = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label_ID = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->label1->Size = System::Drawing::Size(178, 52);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ȸ�� Ż��";
			// 
			// label_mgr
			// 
			this->label_mgr->AutoSize = true;
			this->label_mgr->Font = (gcnew System::Drawing::Font(L"�̷Ӱ� ����ü Medium", 10.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label_mgr->ForeColor = System::Drawing::Color::White;
			this->label_mgr->Location = System::Drawing::Point(560, 15);
			this->label_mgr->Name = L"label_mgr";
			this->label_mgr->Size = System::Drawing::Size(134, 25);
			this->label_mgr->TabIndex = 6;
			this->label_mgr->Text = L"����� �α��� >";
			this->label_mgr->Click += gcnew System::EventHandler(this, &Form3::label_mgr_Click);
			// 
			// textBox_PW
			// 
			this->textBox_PW->Font = (gcnew System::Drawing::Font(L"�̷Ӱ� ����ü Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->textBox_PW->Location = System::Drawing::Point(262, 233);
			this->textBox_PW->Name = L"textBox_PW";
			this->textBox_PW->Size = System::Drawing::Size(263, 43);
			this->textBox_PW->TabIndex = 14;
			// 
			// textBox_ID
			// 
			this->textBox_ID->Font = (gcnew System::Drawing::Font(L"�̷Ӱ� ����ü Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->textBox_ID->Location = System::Drawing::Point(262, 151);
			this->textBox_ID->Name = L"textBox_ID";
			this->textBox_ID->Size = System::Drawing::Size(263, 43);
			this->textBox_ID->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"�̷Ӱ� ����ü Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(127, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 36);
			this->label5->TabIndex = 13;
			this->label5->Text = L"PW";
			// 
			// label_ID
			// 
			this->label_ID->AutoSize = true;
			this->label_ID->Font = (gcnew System::Drawing::Font(L"�̷Ӱ� ����ü Medium", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label_ID->ForeColor = System::Drawing::Color::White;
			this->label_ID->Location = System::Drawing::Point(127, 147);
			this->label_ID->Name = L"label_ID";
			this->label_ID->Size = System::Drawing::Size(42, 36);
			this->label_ID->TabIndex = 12;
			this->label_ID->Text = L"ID";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"�̷Ӱ� ����ü Medium", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->ForeColor = System::Drawing::Color::DimGray;
			this->button1->Location = System::Drawing::Point(569, 397);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 63);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Ż��";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCoral;
			this->ClientSize = System::Drawing::Size(712, 483);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_PW);
			this->Controls->Add(this->textBox_ID);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label_ID);
			this->Controls->Add(this->label_mgr);
			this->Controls->Add(this->label1);
			this->Name = L"Form3";
			this->Text = L"Form3";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void label_mgr_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Form3_Load(System::Object^ sender, System::EventArgs^ e) {
	if (this->DesignMode)
		return;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// ��ü ����
	String^ conString = L"datasource = localhost; port = 3306; username = root; password=1234";
	MySqlConnection^ connection = gcnew MySqlConnection(conString);
	MySqlCommand^ command =
		gcnew MySqlCommand("delete from corona_2020.user where userID = '" + this->textBox_ID->Text 
			+ "' and userPW = '" + this->textBox_PW->Text + "';", connection);
	MySqlDataReader^ reader;

	try
	{
		connection->Open();
		reader = command->ExecuteReader();
		MessageBox::Show("Ż�� �Ϸ� !");

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

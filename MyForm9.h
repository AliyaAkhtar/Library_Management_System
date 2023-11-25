#pragma once
#include "MyForm10.h"
#include "MyForm7.h"
#include <fstream>
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		MyForm9(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lb_email;
	private: System::Windows::Forms::Label^ lb_password;
	private: System::Windows::Forms::TextBox^ tb_email;
	private: System::Windows::Forms::TextBox^ tb_password;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_signup;
	private: System::Windows::Forms::Button^ btn_login;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm9::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb_email = (gcnew System::Windows::Forms::Label());
			this->lb_password = (gcnew System::Windows::Forms::Label());
			this->tb_email = (gcnew System::Windows::Forms::TextBox());
			this->tb_password = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_signup = (gcnew System::Windows::Forms::Button());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Yellow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Purple;
			this->label1->Location = System::Drawing::Point(355, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 40);
			this->label1->TabIndex = 12;
			this->label1->Text = L"LOGIN";
			// 
			// lb_email
			// 
			this->lb_email->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lb_email->AutoSize = true;
			this->lb_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_email->Location = System::Drawing::Point(152, 142);
			this->lb_email->Name = L"lb_email";
			this->lb_email->Size = System::Drawing::Size(110, 32);
			this->lb_email->TabIndex = 13;
			this->lb_email->Text = L"EMAIL";
			// 
			// lb_password
			// 
			this->lb_password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lb_password->AutoSize = true;
			this->lb_password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_password->Location = System::Drawing::Point(152, 211);
			this->lb_password->Name = L"lb_password";
			this->lb_password->Size = System::Drawing::Size(174, 32);
			this->lb_password->TabIndex = 14;
			this->lb_password->Text = L"PASSWORD";
			// 
			// tb_email
			// 
			this->tb_email->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_email->Location = System::Drawing::Point(458, 142);
			this->tb_email->Name = L"tb_email";
			this->tb_email->Size = System::Drawing::Size(217, 32);
			this->tb_email->TabIndex = 15;
			// 
			// tb_password
			// 
			this->tb_password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_password->Location = System::Drawing::Point(458, 211);
			this->tb_password->Name = L"tb_password";
			this->tb_password->Size = System::Drawing::Size(217, 32);
			this->tb_password->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(238, 293);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(222, 24);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Don\'t have an account\?";
			// 
			// btn_signup
			// 
			this->btn_signup->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_signup->Location = System::Drawing::Point(458, 287);
			this->btn_signup->Name = L"btn_signup";
			this->btn_signup->Size = System::Drawing::Size(108, 36);
			this->btn_signup->TabIndex = 18;
			this->btn_signup->Text = L"Sign Up";
			this->btn_signup->UseVisualStyleBackColor = true;
			this->btn_signup->Click += gcnew System::EventHandler(this, &MyForm9::btn_signup_Click);
			// 
			// btn_login
			// 
			this->btn_login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_login->Font = (gcnew System::Drawing::Font(L"Algerian", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_login->ForeColor = System::Drawing::Color::OrangeRed;
			this->btn_login->Location = System::Drawing::Point(335, 359);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(168, 42);
			this->btn_login->TabIndex = 19;
			this->btn_login->Text = L"Login";
			this->btn_login->UseVisualStyleBackColor = true;
			this->btn_login->Click += gcnew System::EventHandler(this, &MyForm9::btn_login_Click);
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(914, 454);
			this->Controls->Add(this->btn_login);
			this->Controls->Add(this->btn_signup);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tb_password);
			this->Controls->Add(this->tb_email);
			this->Controls->Add(this->lb_password);
			this->Controls->Add(this->lb_email);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm9";
			this->Text = L"LIBRARY MANAGEMENT SYSTEM";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ userEmail = tb_email->Text; // Get the entered email
		String^ userPassword = tb_password->Text; // Get the entered password

		if (VerifyLogin(userEmail, userPassword)) {
			MessageBox::Show("Login Successful", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();

			MyForm7^ studentPortal = gcnew MyForm7();
			studentPortal->Show();
		}
		else {
			MessageBox::Show("Invalid Username or Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   bool VerifyLogin(String^ email, String^ password) {
			   String^ fileName = "C:/Users/LAPTOP WORLD/Desktop/studentSignup_records.txt";

			   try {
				   StreamReader^ fileReader = gcnew StreamReader(fileName);

				   String^ line;
				   while ((line = fileReader->ReadLine()) != nullptr) {
					   array<String^>^ parts = line->Split(',');

					   // Check if the line has three parts (name, email, password)
					   if (parts->Length == 3) {
						   String^ storedName = parts[0]->Trim();
						   String^ storedEmail = parts[1]->Trim()->ToLower(); // Convert to lowercase
						   String^ storedPassword = parts[2]->Trim()->ToLower(); // Convert to lowercase

						   // Convert user input to lowercase for comparison
						   email = email->ToLower();
						   password = password->ToLower();

						   // Check if the email and password match (case-insensitive)
						   if (email->Equals(storedEmail) && password->Equals(storedPassword)) {
							   fileReader->Close(); // Close the file
							   return true; // Credentials match
						   }
					   }
				   }

				   fileReader->Close(); // Close the file
			   }
			   catch (Exception^ e) {
				   // Handle file IO exceptions if necessary
				   Console::WriteLine("Error: " + e->Message);
			   }

			   return false; // Credentials don't match or file not opened
		   }


	private: System::Void btn_signup_Click(System::Object^ sender, System::EventArgs^ e) {
		// Hide the login form
		this->Hide();
		// Code to open the admin signup form
		MyForm10^ studentSignupForm = gcnew MyForm10();
		studentSignupForm->Show();
	}
};
}

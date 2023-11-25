#pragma once
#include <iostream>
#include <fstream>
#include <msclr/marshal_cppstd.h>

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lb_name;

	private: System::Windows::Forms::Label^ lb_email;
	private: System::Windows::Forms::Label^ lb_password;
	private: System::Windows::Forms::TextBox^ tb_name;
	private: System::Windows::Forms::TextBox^ tb_password;
	private: System::Windows::Forms::TextBox^ tb_email;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_signup;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_signup = (gcnew System::Windows::Forms::Button());
			this->tb_password = (gcnew System::Windows::Forms::TextBox());
			this->tb_email = (gcnew System::Windows::Forms::TextBox());
			this->tb_name = (gcnew System::Windows::Forms::TextBox());
			this->lb_password = (gcnew System::Windows::Forms::Label());
			this->lb_email = (gcnew System::Windows::Forms::Label());
			this->lb_name = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(551, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(366, 464);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btn_signup);
			this->panel1->Controls->Add(this->tb_password);
			this->panel1->Controls->Add(this->tb_email);
			this->panel1->Controls->Add(this->tb_name);
			this->panel1->Controls->Add(this->lb_password);
			this->panel1->Controls->Add(this->lb_email);
			this->panel1->Controls->Add(this->lb_name);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(552, 464);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Purple;
			this->label1->Location = System::Drawing::Point(133, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(297, 40);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Create an Account";
			// 
			// btn_signup
			// 
			this->btn_signup->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_signup->Font = (gcnew System::Drawing::Font(L"Algerian", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_signup->ForeColor = System::Drawing::Color::OrangeRed;
			this->btn_signup->Location = System::Drawing::Point(191, 367);
			this->btn_signup->Name = L"btn_signup";
			this->btn_signup->Size = System::Drawing::Size(168, 42);
			this->btn_signup->TabIndex = 9;
			this->btn_signup->Text = L"Sign Up";
			this->btn_signup->UseVisualStyleBackColor = true;
			this->btn_signup->Click += gcnew System::EventHandler(this, &MyForm2::btn_signup_Click);
			// 
			// tb_password
			// 
			this->tb_password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_password->Location = System::Drawing::Point(319, 272);
			this->tb_password->Name = L"tb_password";
			this->tb_password->Size = System::Drawing::Size(187, 32);
			this->tb_password->TabIndex = 8;
			// 
			// tb_email
			// 
			this->tb_email->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_email->Location = System::Drawing::Point(319, 211);
			this->tb_email->Name = L"tb_email";
			this->tb_email->Size = System::Drawing::Size(187, 32);
			this->tb_email->TabIndex = 7;
			// 
			// tb_name
			// 
			this->tb_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_name->Location = System::Drawing::Point(319, 143);
			this->tb_name->Name = L"tb_name";
			this->tb_name->Size = System::Drawing::Size(187, 32);
			this->tb_name->TabIndex = 6;
			// 
			// lb_password
			// 
			this->lb_password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lb_password->AutoSize = true;
			this->lb_password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_password->Location = System::Drawing::Point(96, 268);
			this->lb_password->Name = L"lb_password";
			this->lb_password->Size = System::Drawing::Size(174, 32);
			this->lb_password->TabIndex = 5;
			this->lb_password->Text = L"PASSWORD";
			// 
			// lb_email
			// 
			this->lb_email->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lb_email->AutoSize = true;
			this->lb_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_email->Location = System::Drawing::Point(96, 207);
			this->lb_email->Name = L"lb_email";
			this->lb_email->Size = System::Drawing::Size(110, 32);
			this->lb_email->TabIndex = 3;
			this->lb_email->Text = L"EMAIL";
			// 
			// lb_name
			// 
			this->lb_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lb_name->AutoSize = true;
			this->lb_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_name->Location = System::Drawing::Point(96, 143);
			this->lb_name->Name = L"lb_name";
			this->lb_name->Size = System::Drawing::Size(102, 32);
			this->lb_name->TabIndex = 1;
			this->lb_name->Text = L"NAME";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 464);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm2";
			this->Text = L"LIBRARY MANAGEMENT SYSTEM";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
	private: System::Void btn_signup_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the input data from the text boxes
		String^ name = tb_name->Text;
		String^ email = tb_email->Text;
		String^ password = tb_password->Text;

		// Convert System::String to std::string (for file handling)
		std::string stdName = msclr::interop::marshal_as<std::string>(name);
		std::string stdEmail = msclr::interop::marshal_as<std::string>(email);
		std::string stdPassword = msclr::interop::marshal_as<std::string>(password);

		// Open a file in append mode to store the data
		// You can change the file name and path as needed
		std::ofstream outFile("C:/Users/LAPTOP WORLD/Desktop/signup_records.txt", std::ios_base::app);

		// Check if the file is successfully opened
		if (outFile.is_open()) {
			// Write the data to the file
			outFile << stdName << ", " << stdEmail << ", " << stdPassword << std::endl;

			// Close the file stream
			outFile.close();

			// Optionally, display a message or perform other actions after storing the data
			MessageBox::Show("Record saved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Close the signup form
			this->Close();
		}
		else {
			// Handle the case if the file fails to open
			MessageBox::Show("Error: Unable to open the file for writing!");
		}
	}
	
};
}

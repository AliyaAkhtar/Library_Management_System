#pragma once

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Summary for MyForm12
	/// </summary>
	public ref class MyForm12 : public System::Windows::Forms::Form
	{
	public:
		MyForm12(void)
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
		~MyForm12()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lb_bk_title;
	private: System::Windows::Forms::TextBox^ tb_student_email;

	private: System::Windows::Forms::Button^ btn_search;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm12::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb_bk_title = (gcnew System::Windows::Forms::Label());
			this->tb_student_email = (gcnew System::Windows::Forms::TextBox());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DeepPink;
			this->label1->Location = System::Drawing::Point(336, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 55);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Issue Details";
			// 
			// lb_bk_title
			// 
			this->lb_bk_title->AutoSize = true;
			this->lb_bk_title->BackColor = System::Drawing::Color::Transparent;
			this->lb_bk_title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_bk_title->ForeColor = System::Drawing::Color::Blue;
			this->lb_bk_title->Location = System::Drawing::Point(185, 117);
			this->lb_bk_title->Name = L"lb_bk_title";
			this->lb_bk_title->Size = System::Drawing::Size(181, 31);
			this->lb_bk_title->TabIndex = 4;
			this->lb_bk_title->Text = L"Student Email";
			// 
			// tb_student_email
			// 
			this->tb_student_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_student_email->Location = System::Drawing::Point(499, 117);
			this->tb_student_email->Name = L"tb_student_email";
			this->tb_student_email->Size = System::Drawing::Size(236, 29);
			this->tb_student_email->TabIndex = 5;
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_search->Location = System::Drawing::Point(231, 185);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(470, 57);
			this->btn_search->TabIndex = 14;
			this->btn_search->Text = L"SEARCH";
			this->btn_search->UseVisualStyleBackColor = false;
			// 
			// MyForm12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(933, 426);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->tb_student_email);
			this->Controls->Add(this->lb_bk_title);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm12";
			this->Text = L"LIBRARY MANAGEMENT SYSTEM";
			this->Load += gcnew System::EventHandler(this, &MyForm12::MyForm12_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm12_Load(System::Object^ sender, System::EventArgs^ e) {
		// Get the logged-in student's email from wherever you store it after successful login
		String^ loggedInStudentEmail = "aminah@gmail.com"; 

		// Get the logged-in student's name using the email
		String^ loggedInStudentName = GetStudentNameByEmail(loggedInStudentEmail);

		// Display the logged-in student's email in the text box when the form loads
		tb_student_email->Text = loggedInStudentEmail;
	}

		   // Function to get the student's name by their email from the file
		   String^ GetStudentNameByEmail(String^ loggedInStudentEmail) {
			   String^ filePath = "C:/Users/LAPTOP WORLD/Desktop/studentSignup_records.txt"; // Replace this with the path to your file
			   String^ loggedInStudentName; // Variable to hold the logged-in student's name

			   try {
				   // Read the file and find the logged-in student's name by email
				   StreamReader^ sr = gcnew StreamReader(filePath);

				   String^ line;
				   while ((line = sr->ReadLine()) != nullptr) {
					   array<String^>^ parts = line->Split(',');

					   // Check if the line has three parts (Name, Email, Password)
					   if (parts->Length == 3) {
						   String^ storedName = parts[0]->Trim();
						   String^ storedEmail = parts[1]->Trim();
						   //String^ storedPassword = parts[2]->Trim(); // If you don't need password retrieval, you can remove this line

						   // Compare the stored email with the logged-in student's email
						   if (storedEmail->Equals(loggedInStudentEmail)) {
							   loggedInStudentName = storedName;
							   break;
						   }
					   }
				   }

				   sr->Close(); // Close the file
			   }
			   catch (Exception^ e) {
				   // Handle file IO exceptions if necessary
				   Console::WriteLine("Error: " + e->Message);
			   }

			   return loggedInStudentName;
		   }

};
}

#pragma once
#include "MyForm1.h"
#include "MyForm9.h"

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btn_admin;
	private: System::Windows::Forms::Button^ btn_student;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_admin = (gcnew System::Windows::Forms::Button());
			this->btn_student = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightSalmon;
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(83, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(770, 54);
			this->label1->TabIndex = 1;
			this->label1->Text = L"LIBRARY MANAGEMENT SYSTEM";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(141, 172);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(278, 213);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(485, 172);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(295, 213);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// btn_admin
			// 
			this->btn_admin->Font = (gcnew System::Drawing::Font(L"Algerian", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_admin->ForeColor = System::Drawing::Color::OrangeRed;
			this->btn_admin->Location = System::Drawing::Point(199, 372);
			this->btn_admin->Name = L"btn_admin";
			this->btn_admin->Size = System::Drawing::Size(155, 49);
			this->btn_admin->TabIndex = 6;
			this->btn_admin->Text = L"ADMIN";
			this->btn_admin->UseVisualStyleBackColor = true;
			this->btn_admin->Click += gcnew System::EventHandler(this, &MyForm::btn_admin_Click);
			// 
			// btn_student
			// 
			this->btn_student->Font = (gcnew System::Drawing::Font(L"Algerian", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_student->ForeColor = System::Drawing::Color::OrangeRed;
			this->btn_student->Location = System::Drawing::Point(547, 372);
			this->btn_student->Name = L"btn_student";
			this->btn_student->Size = System::Drawing::Size(183, 49);
			this->btn_student->TabIndex = 7;
			this->btn_student->Text = L"STUDENT";
			this->btn_student->UseVisualStyleBackColor = true;
			this->btn_student->Click += gcnew System::EventHandler(this, &MyForm::btn_student_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(941, 457);
			this->Controls->Add(this->btn_student);
			this->Controls->Add(this->btn_admin);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"LIBRARY MANAGMENT SYSTEM";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_admin_Click(System::Object^ sender, System::EventArgs^ e) {
		// Code to open the admin login form
		MyForm1^ adminLoginForm = gcnew MyForm1();
		adminLoginForm->Show();
	}
	private: System::Void btn_student_Click(System::Object^ sender, System::EventArgs^ e) {
		// Code to open the student login form
		MyForm9^ studentLoginForm = gcnew MyForm9();
		studentLoginForm->Show();
	}
};
}

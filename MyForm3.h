#pragma once
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm8.h"
#include <iostream>

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_add_book;
	private: System::Windows::Forms::Button^ btn_book_search;
	private: System::Windows::Forms::Button^ btn_book_update;
	private: System::Windows::Forms::Button^ btn_view_order;
	private: System::Windows::Forms::Button^ btn_logout;
	protected:





	protected:






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->btn_add_book = (gcnew System::Windows::Forms::Button());
			this->btn_book_search = (gcnew System::Windows::Forms::Button());
			this->btn_book_update = (gcnew System::Windows::Forms::Button());
			this->btn_view_order = (gcnew System::Windows::Forms::Button());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_add_book
			// 
			this->btn_add_book->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_add_book->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add_book->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_add_book->Location = System::Drawing::Point(60, 106);
			this->btn_add_book->Name = L"btn_add_book";
			this->btn_add_book->Size = System::Drawing::Size(238, 57);
			this->btn_add_book->TabIndex = 0;
			this->btn_add_book->Text = L"ADD BOOK";
			this->btn_add_book->UseVisualStyleBackColor = false;
			this->btn_add_book->Click += gcnew System::EventHandler(this, &MyForm3::btn_add_book_Click);
			// 
			// btn_book_search
			// 
			this->btn_book_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_book_search->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_book_search->Location = System::Drawing::Point(350, 106);
			this->btn_book_search->Name = L"btn_book_search";
			this->btn_book_search->Size = System::Drawing::Size(236, 57);
			this->btn_book_search->TabIndex = 1;
			this->btn_book_search->Text = L"BOOK SEARCH";
			this->btn_book_search->UseVisualStyleBackColor = false;
			this->btn_book_search->Click += gcnew System::EventHandler(this, &MyForm3::btn_book_search_Click);
			// 
			// btn_book_update
			// 
			this->btn_book_update->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_book_update->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_book_update->Location = System::Drawing::Point(60, 239);
			this->btn_book_update->Name = L"btn_book_update";
			this->btn_book_update->Size = System::Drawing::Size(238, 53);
			this->btn_book_update->TabIndex = 2;
			this->btn_book_update->Text = L"BOOK UPDATE";
			this->btn_book_update->UseVisualStyleBackColor = false;
			this->btn_book_update->Click += gcnew System::EventHandler(this, &MyForm3::btn_book_update_Click);
			// 
			// btn_view_order
			// 
			this->btn_view_order->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_view_order->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_view_order->Location = System::Drawing::Point(350, 239);
			this->btn_view_order->Name = L"btn_view_order";
			this->btn_view_order->Size = System::Drawing::Size(236, 53);
			this->btn_view_order->TabIndex = 3;
			this->btn_view_order->Text = L"VIEW ORDER";
			this->btn_view_order->UseVisualStyleBackColor = false;
			this->btn_view_order->Click += gcnew System::EventHandler(this, &MyForm3::btn_view_order_Click);
			// 
			// btn_logout
			// 
			this->btn_logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->btn_logout->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_logout->Location = System::Drawing::Point(227, 352);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(199, 49);
			this->btn_logout->TabIndex = 4;
			this->btn_logout->Text = L"LOGOUT";
			this->btn_logout->UseVisualStyleBackColor = false;
			this->btn_logout->Click += gcnew System::EventHandler(this, &MyForm3::btn_logout_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(944, 470);
			this->Controls->Add(this->btn_logout);
			this->Controls->Add(this->btn_view_order);
			this->Controls->Add(this->btn_book_update);
			this->Controls->Add(this->btn_book_search);
			this->Controls->Add(this->btn_add_book);
			this->Name = L"MyForm3";
			this->Text = L"LIBRARY MANAGEMENT SYSTEM";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_add_book_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm4^ form4 = gcnew MyForm4();
		form4->Show();
		//this->Hide();
	}
	private: System::Void btn_book_search_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm5^ form5 = gcnew MyForm5();
		form5->Show();
		//this->Hide();
	}
	private: System::Void btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_book_update_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm6^ form6 = gcnew MyForm6();
		form6->Show();
		//this->Hide();
	}
	private: System::Void btn_view_order_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm8^ form8 = gcnew MyForm8();
		form8->Show();
		//this->Hide();
	}
};
}

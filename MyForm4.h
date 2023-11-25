#pragma once

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lb_book_id;

	private: System::Windows::Forms::TextBox^ tb_book_id;
	private: System::Windows::Forms::Label^ lb_quantity;


	private: System::Windows::Forms::Label^ lb_cost;

	private: System::Windows::Forms::Label^ lb_author_name;

	private: System::Windows::Forms::Label^ lb_title;

	private: System::Windows::Forms::TextBox^ tb_title;
	private: System::Windows::Forms::TextBox^ tb_author_name;
	private: System::Windows::Forms::TextBox^ tb_cost;
	private: System::Windows::Forms::TextBox^ tb_quantity;
	private: System::Windows::Forms::Button^ btn_add_bk;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb_book_id = (gcnew System::Windows::Forms::Label());
			this->tb_book_id = (gcnew System::Windows::Forms::TextBox());
			this->lb_quantity = (gcnew System::Windows::Forms::Label());
			this->lb_cost = (gcnew System::Windows::Forms::Label());
			this->lb_author_name = (gcnew System::Windows::Forms::Label());
			this->lb_title = (gcnew System::Windows::Forms::Label());
			this->tb_title = (gcnew System::Windows::Forms::TextBox());
			this->tb_author_name = (gcnew System::Windows::Forms::TextBox());
			this->tb_cost = (gcnew System::Windows::Forms::TextBox());
			this->tb_quantity = (gcnew System::Windows::Forms::TextBox());
			this->btn_add_bk = (gcnew System::Windows::Forms::Button());
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
			this->label1->Location = System::Drawing::Point(200, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Books";
			// 
			// lb_book_id
			// 
			this->lb_book_id->AutoSize = true;
			this->lb_book_id->BackColor = System::Drawing::Color::Transparent;
			this->lb_book_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_book_id->ForeColor = System::Drawing::Color::Blue;
			this->lb_book_id->Location = System::Drawing::Point(87, 120);
			this->lb_book_id->Name = L"lb_book_id";
			this->lb_book_id->Size = System::Drawing::Size(112, 31);
			this->lb_book_id->TabIndex = 1;
			this->lb_book_id->Text = L"Book ID";
			// 
			// tb_book_id
			// 
			this->tb_book_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_book_id->Location = System::Drawing::Point(325, 120);
			this->tb_book_id->Name = L"tb_book_id";
			this->tb_book_id->Size = System::Drawing::Size(236, 29);
			this->tb_book_id->TabIndex = 2;
			// 
			// lb_quantity
			// 
			this->lb_quantity->AutoSize = true;
			this->lb_quantity->BackColor = System::Drawing::Color::Transparent;
			this->lb_quantity->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_quantity->ForeColor = System::Drawing::Color::Blue;
			this->lb_quantity->Location = System::Drawing::Point(87, 386);
			this->lb_quantity->Name = L"lb_quantity";
			this->lb_quantity->Size = System::Drawing::Size(118, 31);
			this->lb_quantity->TabIndex = 3;
			this->lb_quantity->Text = L"Quantity";
			// 
			// lb_cost
			// 
			this->lb_cost->AutoSize = true;
			this->lb_cost->BackColor = System::Drawing::Color::Transparent;
			this->lb_cost->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_cost->ForeColor = System::Drawing::Color::Blue;
			this->lb_cost->Location = System::Drawing::Point(87, 319);
			this->lb_cost->Name = L"lb_cost";
			this->lb_cost->Size = System::Drawing::Size(68, 31);
			this->lb_cost->TabIndex = 4;
			this->lb_cost->Text = L"Cost";
			// 
			// lb_author_name
			// 
			this->lb_author_name->AutoSize = true;
			this->lb_author_name->BackColor = System::Drawing::Color::Transparent;
			this->lb_author_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_author_name->ForeColor = System::Drawing::Color::Blue;
			this->lb_author_name->Location = System::Drawing::Point(87, 254);
			this->lb_author_name->Name = L"lb_author_name";
			this->lb_author_name->Size = System::Drawing::Size(173, 31);
			this->lb_author_name->TabIndex = 5;
			this->lb_author_name->Text = L"Author Name";
			// 
			// lb_title
			// 
			this->lb_title->AutoSize = true;
			this->lb_title->BackColor = System::Drawing::Color::Transparent;
			this->lb_title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_title->ForeColor = System::Drawing::Color::Blue;
			this->lb_title->Location = System::Drawing::Point(87, 187);
			this->lb_title->Name = L"lb_title";
			this->lb_title->Size = System::Drawing::Size(69, 31);
			this->lb_title->TabIndex = 6;
			this->lb_title->Text = L"Title";
			// 
			// tb_title
			// 
			this->tb_title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_title->Location = System::Drawing::Point(325, 187);
			this->tb_title->Name = L"tb_title";
			this->tb_title->Size = System::Drawing::Size(236, 29);
			this->tb_title->TabIndex = 7;
			// 
			// tb_author_name
			// 
			this->tb_author_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_author_name->Location = System::Drawing::Point(325, 254);
			this->tb_author_name->Name = L"tb_author_name";
			this->tb_author_name->Size = System::Drawing::Size(236, 29);
			this->tb_author_name->TabIndex = 8;
			// 
			// tb_cost
			// 
			this->tb_cost->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_cost->Location = System::Drawing::Point(325, 319);
			this->tb_cost->Name = L"tb_cost";
			this->tb_cost->Size = System::Drawing::Size(236, 29);
			this->tb_cost->TabIndex = 9;
			// 
			// tb_quantity
			// 
			this->tb_quantity->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_quantity->Location = System::Drawing::Point(325, 386);
			this->tb_quantity->Name = L"tb_quantity";
			this->tb_quantity->Size = System::Drawing::Size(236, 29);
			this->tb_quantity->TabIndex = 10;
			// 
			// btn_add_bk
			// 
			this->btn_add_bk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_add_bk->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add_bk->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_add_bk->Location = System::Drawing::Point(238, 441);
			this->btn_add_bk->Name = L"btn_add_bk";
			this->btn_add_bk->Size = System::Drawing::Size(470, 57);
			this->btn_add_bk->TabIndex = 11;
			this->btn_add_bk->Text = L"ADD";
			this->btn_add_bk->UseVisualStyleBackColor = false;
			this->btn_add_bk->Click += gcnew System::EventHandler(this, &MyForm4::btn_add_bk_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(946, 510);
			this->Controls->Add(this->btn_add_bk);
			this->Controls->Add(this->tb_quantity);
			this->Controls->Add(this->tb_cost);
			this->Controls->Add(this->tb_author_name);
			this->Controls->Add(this->tb_title);
			this->Controls->Add(this->lb_title);
			this->Controls->Add(this->lb_author_name);
			this->Controls->Add(this->lb_cost);
			this->Controls->Add(this->lb_quantity);
			this->Controls->Add(this->tb_book_id);
			this->Controls->Add(this->lb_book_id);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm4";
			this->Text = L"LIBRARY MANAGEMENT SYSTEM";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_add_bk_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the book details from the textboxes
		String^ bookId = tb_book_id->Text;
		String^ title = tb_title->Text;
		String^ author = tb_author_name->Text;
		String^ cost = tb_cost->Text;
		String^ quantity = tb_quantity->Text;

		// Combine the book details into a string
		String^ bookDetails = bookId + "," + title + "," + author + "," + cost + "," + quantity + "\n";

		try {
			// Define the file path where you want to save the book details
			String^ filePath = "C:/Users/LAPTOP WORLD/Desktop/book_details.txt";

			// Open the file in append mode and write the book details
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(filePath, true);
			sw->Write(bookDetails);
			sw->Close();

			// Optionally, display a message to indicate successful addition
			MessageBox::Show("Book details added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			// Handle any exceptions that might occur during file I/O
			MessageBox::Show("Error: " + ex->Message);
		}
	}
};
}

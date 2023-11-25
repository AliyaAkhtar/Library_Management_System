#pragma once

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm11
	/// </summary>
	public ref class MyForm11 : public System::Windows::Forms::Form
	{
	public:
		MyForm11(void)
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
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lb_bk_title;
	private: System::Windows::Forms::TextBox^ tb_bk_title;


	private: System::Windows::Forms::Button^ btn_search;
	private: System::Windows::Forms::TableLayoutPanel^ tab_show_bk;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm11::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb_bk_title = (gcnew System::Windows::Forms::Label());
			this->tb_bk_title = (gcnew System::Windows::Forms::TextBox());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->tab_show_bk = (gcnew System::Windows::Forms::TableLayoutPanel());
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
			this->label1->Location = System::Drawing::Point(309, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 55);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Book Search";
			// 
			// lb_bk_title
			// 
			this->lb_bk_title->AutoSize = true;
			this->lb_bk_title->BackColor = System::Drawing::Color::Transparent;
			this->lb_bk_title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_bk_title->ForeColor = System::Drawing::Color::Blue;
			this->lb_bk_title->Location = System::Drawing::Point(225, 113);
			this->lb_bk_title->Name = L"lb_bk_title";
			this->lb_bk_title->Size = System::Drawing::Size(69, 31);
			this->lb_bk_title->TabIndex = 3;
			this->lb_bk_title->Text = L"Title";
			// 
			// tb_bk_title
			// 
			this->tb_bk_title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_bk_title->Location = System::Drawing::Point(440, 115);
			this->tb_bk_title->Name = L"tb_bk_title";
			this->tb_bk_title->Size = System::Drawing::Size(236, 29);
			this->tb_bk_title->TabIndex = 4;
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_search->Location = System::Drawing::Point(222, 182);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(470, 57);
			this->btn_search->TabIndex = 13;
			this->btn_search->Text = L"SEARCH";
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &MyForm11::btn_search_Click);
			// 
			// tab_show_bk
			// 
			this->tab_show_bk->BackColor = System::Drawing::Color::Pink;
			this->tab_show_bk->ColumnCount = 5;
			this->tab_show_bk->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tab_show_bk->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tab_show_bk->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tab_show_bk->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tab_show_bk->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tab_show_bk->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab_show_bk->Location = System::Drawing::Point(177, 275);
			this->tab_show_bk->Name = L"tab_show_bk";
			this->tab_show_bk->RowCount = 2;
			this->tab_show_bk->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tab_show_bk->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tab_show_bk->Size = System::Drawing::Size(539, 88);
			this->tab_show_bk->TabIndex = 14;
			// 
			// MyForm11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(914, 421);
			this->Controls->Add(this->tab_show_bk);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->tb_bk_title);
			this->Controls->Add(this->lb_bk_title);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm11";
			this->Text = L"LIBRARY MANAGEMENT SYSTEM";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the book title entered by the user
		String^ booktitleToSearch = tb_bk_title->Text;

		try {
			String^ filePath = "C:/Users/LAPTOP WORLD/Desktop/book_details.txt";
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(filePath);

			String^ line;
			bool bookFound = false;

			// Clear existing controls in the table layout panel
			tab_show_bk->Controls->Clear();

			// Define the labels for each detail in the first row
			array<String^>^ headers = { "Book ID", "Title", "Author", "Cost", "Quantity" };

			for (int i = 0; i < headers->Length; i++) {
				Label^ headerLabel = gcnew Label();
				headerLabel->Text = headers[i];
				tab_show_bk->Controls->Add(headerLabel, i, 0); // Add header labels in the first row
			}

			// Read the file line by line to find the book with the matching ID
			while ((line = sr->ReadLine()) != nullptr) {
				array<String^>^ bookDetails = line->Split(',');

				// Check if the book ID matches the searched ID
				if (bookDetails[1]->Trim() == booktitleToSearch) {
					// Display the book details in the table layout panel
					for (int i = 0; i < bookDetails->Length; i++) {
						Label^ detailLabel = gcnew Label();
						detailLabel->Text = bookDetails[i];
						tab_show_bk->Controls->Add(detailLabel, i, 1); // Add detail labels in the second row
					}

					// Set the flag to indicate that the book was found
					bookFound = true;
					break;
				}
			}

			sr->Close();

			// If the book was not found, display a message
			if (!bookFound) {
				MessageBox::Show("Book not found!");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
};
}

#pragma once

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			tb_bkid->TextChanged += gcnew System::EventHandler(this, &MyForm6::tb_bkid_TextChanged);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lb_bkid;
	private: System::Windows::Forms::TextBox^ tb_bkid;
	private: System::Windows::Forms::Button^ btn_update;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb_bkid = (gcnew System::Windows::Forms::Label());
			this->tb_bkid = (gcnew System::Windows::Forms::TextBox());
			this->btn_update = (gcnew System::Windows::Forms::Button());
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
			this->label1->Location = System::Drawing::Point(187, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 55);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Book Update";
			// 
			// lb_bkid
			// 
			this->lb_bkid->AutoSize = true;
			this->lb_bkid->BackColor = System::Drawing::Color::Transparent;
			this->lb_bkid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_bkid->ForeColor = System::Drawing::Color::Blue;
			this->lb_bkid->Location = System::Drawing::Point(116, 167);
			this->lb_bkid->Name = L"lb_bkid";
			this->lb_bkid->Size = System::Drawing::Size(112, 31);
			this->lb_bkid->TabIndex = 3;
			this->lb_bkid->Text = L"Book ID";
			// 
			// tb_bkid
			// 
			this->tb_bkid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_bkid->Location = System::Drawing::Point(322, 167);
			this->tb_bkid->Name = L"tb_bkid";
			this->tb_bkid->Size = System::Drawing::Size(236, 29);
			this->tb_bkid->TabIndex = 4;
			// 
			// btn_update
			// 
			this->btn_update->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_update->Location = System::Drawing::Point(108, 369);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(470, 57);
			this->btn_update->TabIndex = 13;
			this->btn_update->Text = L"UPDATE";
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &MyForm6::btn_update_Click);
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
			this->tab_show_bk->Location = System::Drawing::Point(71, 245);
			this->tab_show_bk->Name = L"tab_show_bk";
			this->tab_show_bk->RowCount = 2;
			this->tab_show_bk->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tab_show_bk->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tab_show_bk->Size = System::Drawing::Size(539, 88);
			this->tab_show_bk->TabIndex = 14;
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(937, 468);
			this->Controls->Add(this->tab_show_bk);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->tb_bkid);
			this->Controls->Add(this->lb_bkid);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm6";
			this->Text = L"LIBRARY MANAGEMENT SYSTEM";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void tb_bkid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ bookIdToSearch = tb_bkid->Text;

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

					if (bookDetails[0]->Trim() == bookIdToSearch) {
						for (int i = 0; i < bookDetails->Length; i++) {
							TextBox^ detailTextBox = gcnew TextBox();
							detailTextBox->Text = bookDetails[i];
							tab_show_bk->Controls->Add(detailTextBox, i, 1); // Add detail text boxes in the second row
						}

						bookFound = true;
						break;
					}
				}

				sr->Close();

				if (!bookFound) {
					MessageBox::Show("Book not found!");
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
		}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		// Assuming the table layout panel contains text boxes with updated details

		String^ bookIdToUpdate = tb_bkid->Text;

		try {
			String^ filePath = "C:/Users/LAPTOP WORLD/Desktop/book_details.txt";
			array<String^>^ lines = System::IO::File::ReadAllLines(filePath);
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(filePath);

			for each (String ^ line in lines) {
				array<String^>^ bookDetails = line->Split(',');

				if (bookDetails[0]->Trim() == bookIdToUpdate) {
					// Assuming the order of details in the table layout panel matches the file structure
					String^ updatedDetails = "";

					for each (Control ^ control in tab_show_bk->Controls) {
						if (TextBox^ textBox = dynamic_cast<TextBox^>(control)) {
							updatedDetails += textBox->Text + ",";
						}
					}

					sw->WriteLine(updatedDetails->TrimEnd(','));
				}
				else {
					sw->WriteLine(line);
				}
			}

			sw->Close();
			MessageBox::Show("Details updated and saved successfully!");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
};
}

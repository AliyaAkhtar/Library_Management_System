#pragma once

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm8
	/// </summary>
	public ref class MyForm8 : public System::Windows::Forms::Form
	{
	public:
		MyForm8(void)
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
		~MyForm8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lb_bkid;
	private: System::Windows::Forms::TextBox^ tb_bkid;
	private: System::Windows::Forms::TableLayoutPanel^ tab_show_bk;
	private: System::Windows::Forms::Button^ btn_view_order;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm8::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb_bkid = (gcnew System::Windows::Forms::Label());
			this->tb_bkid = (gcnew System::Windows::Forms::TextBox());
			this->tab_show_bk = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btn_view_order = (gcnew System::Windows::Forms::Button());
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
			this->label1->Location = System::Drawing::Point(213, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(295, 55);
			this->label1->TabIndex = 3;
			this->label1->Text = L"View Orders ";
			// 
			// lb_bkid
			// 
			this->lb_bkid->AutoSize = true;
			this->lb_bkid->BackColor = System::Drawing::Color::Transparent;
			this->lb_bkid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_bkid->ForeColor = System::Drawing::Color::Blue;
			this->lb_bkid->Location = System::Drawing::Point(119, 160);
			this->lb_bkid->Name = L"lb_bkid";
			this->lb_bkid->Size = System::Drawing::Size(112, 31);
			this->lb_bkid->TabIndex = 4;
			this->lb_bkid->Text = L"Book ID";
			// 
			// tb_bkid
			// 
			this->tb_bkid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_bkid->Location = System::Drawing::Point(338, 160);
			this->tb_bkid->Name = L"tb_bkid";
			this->tb_bkid->Size = System::Drawing::Size(236, 29);
			this->tb_bkid->TabIndex = 5;
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
			this->tab_show_bk->Location = System::Drawing::Point(78, 235);
			this->tab_show_bk->Name = L"tab_show_bk";
			this->tab_show_bk->RowCount = 2;
			this->tab_show_bk->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tab_show_bk->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tab_show_bk->Size = System::Drawing::Size(539, 88);
			this->tab_show_bk->TabIndex = 15;
			// 
			// btn_view_order
			// 
			this->btn_view_order->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_view_order->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_view_order->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_view_order->Location = System::Drawing::Point(104, 358);
			this->btn_view_order->Name = L"btn_view_order";
			this->btn_view_order->Size = System::Drawing::Size(470, 57);
			this->btn_view_order->TabIndex = 16;
			this->btn_view_order->Text = L"VIEW ORDER";
			this->btn_view_order->UseVisualStyleBackColor = false;
			this->btn_view_order->Click += gcnew System::EventHandler(this, &MyForm8::btn_view_order_Click);
			// 
			// MyForm8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(912, 462);
			this->Controls->Add(this->btn_view_order);
			this->Controls->Add(this->tab_show_bk);
			this->Controls->Add(this->tb_bkid);
			this->Controls->Add(this->lb_bkid);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm8";
			this->Text = L"MyForm8";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_view_order_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ bookId = tb_bkid->Text;
		array<String^>^ orderLines = System::IO::File::ReadAllLines("C:/Users/LAPTOP WORLD/Desktop/book_orders.txt");

		bool found = false;
		int totalOrders = 0;

		for each (String ^ line in orderLines) {
			array<String^>^ orderDetails = line->Split(',');

			if (orderDetails[0]->Trim() == bookId) {
				found = true;
				// Assuming the order details are BookID, OrderNumber, etc.
				// Add logic here to display the details in the table layout panel
				// For example, add them to text boxes in the table layout panel

				// Increment the total number of orders
				totalOrders++;
			}
		}

		if (found) {
			// Show the total number of orders in a message box
			MessageBox::Show("Total orders for Book ID " + bookId + ": " + totalOrders);
		}
		else {
			// Display a message indicating no orders found
			MessageBox::Show("No orders found for Book ID " + bookId);
			// You might want to clear the table layout panel or keep it empty for no orders
		}
	}
};
}

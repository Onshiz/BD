#include <iostream>
#include <msclr/marshal_cppstd.h>
#using <mscorlib.dll>
#using <System.dll>

#pragma once

namespace BD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ заявникToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ заявкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ співробітникПаспортногоСтолуToolStripMenuItem;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;

	protected:

	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->заявникToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->заявкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->співробітникПаспортногоСтолуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 47);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(720, 279);
			this->dataGridView1->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->заявникToolStripMenuItem,
					this->заявкаToolStripMenuItem, this->співробітникПаспортногоСтолуToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(999, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// заявникToolStripMenuItem
			// 
			this->заявникToolStripMenuItem->Name = L"заявникToolStripMenuItem";
			this->заявникToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->заявникToolStripMenuItem->Text = L"Клієнт";
			this->заявникToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::клієнтToolStripMenuItem_Click);
			// 
			// заявкаToolStripMenuItem
			// 
			this->заявкаToolStripMenuItem->Name = L"заявкаToolStripMenuItem";
			this->заявкаToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->заявкаToolStripMenuItem->Text = L"Зачіска";
			this->заявкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зачіскаToolStripMenuItem_Click);
			// 
			// співробітникПаспортногоСтолуToolStripMenuItem
			// 
			this->співробітникПаспортногоСтолуToolStripMenuItem->Checked = true;
			this->співробітникПаспортногоСтолуToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Indeterminate;
			this->співробітникПаспортногоСтолуToolStripMenuItem->Name = L"співробітникПаспортногоСтолуToolStripMenuItem";
			this->співробітникПаспортногоСтолуToolStripMenuItem->Size = System::Drawing::Size(150, 20);
			this->співробітникПаспортногоСтолуToolStripMenuItem->Text = L"Співробітник перукарні";
			this->співробітникПаспортногоСтолуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::співробітникПерукарніToolStripMenuItem_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(756, 74);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(231, 32);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(752, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 24);
			this->label1->TabIndex = 12;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(756, 178);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(230, 32);
			this->comboBox2->TabIndex = 13;
			this->comboBox2->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(752, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 24);
			this->label2->TabIndex = 14;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 56);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Фільтрація";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 480);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 56);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Додати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(197, 480);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(157, 56);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Видалити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(197, 369);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 56);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Оновити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(752, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 24);
			this->label3->TabIndex = 23;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(756, 297);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(230, 29);
			this->textBox1->TabIndex = 24;
			this->textBox1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(999, 578);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->dataGridView1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String^ connectionString = "Server=localhost;Port=3306;Database=perykar;Uid=root;Pwd=Sonari8190qwert;";
		int WhoIndexe = 0;
#pragma endregion
	private: System::Void клієнтToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		WhoIndexe = 1;
		if (WhoIndexe == 1)
		{
			textBox1->Visible = false;
			button2->Visible = true;
			button3->Visible = true;
			button4->Visible = true;
			//
			label3->Visible = false;
			//

			comboBox2->Items->Clear();
			comboBox2->Visible = true;
			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Задоволений", L"Не задоволений",
					L"Не обирати"
			});
			comboBox2->SelectedIndex = 2;
			label2->Text = L"Враження";
			label2->Visible = true;
			//
			label1->Text = L"Стать";
			label1->Visible = true;
			comboBox1->Items->Clear();
			comboBox1->Visible = true;
			comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Чоловік", L"Жінка", L"Не обирати" });
			comboBox1->SelectedIndex = 2;
			//
			String^ query = "SELECT id_person, name_person, surname_person, gender_person, status_person FROM person";
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
				DataSet^ dataSet = gcnew DataSet();
				adapter->Fill(dataSet, "person");
				connection->Close();
				dataGridView1->DataSource = dataSet->Tables["person"];
				dataGridView1->Columns["id_person"]->HeaderText = "ID персони";
				dataGridView1->Columns["name_person"]->HeaderText = "Ім'я персони";
				dataGridView1->Columns["surname_person"]->HeaderText = "Прізвище персони";
				dataGridView1->Columns["gender_person"]->HeaderText = "Стать персони";
				dataGridView1->Columns["status_person"]->HeaderText = "Враження";
			}
			catch (Exception^ ex) {
				MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
			}
		}

	}
	private: System::Void зачіскаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		WhoIndexe = 2;
		if (WhoIndexe == 2)
		{
			textBox1->Visible = true;
			button2->Visible = true;
			button3->Visible = true;
			button4->Visible = true;
			//
			label3->Visible = true;
			label3->Text = L"Мінімальна ціна";
			//
			label1->Text = L"Довжина зачіски";
			label1->Visible = true;
			comboBox1->Items->Clear();
			comboBox1->Visible = true;
			comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Коротка", L"Довга", L"Середня", L"Не обирати" });
			comboBox1->SelectedIndex = 3;
			//
			comboBox2->Items->Clear();
			comboBox2->Visible = true;
			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Чорний", L"Білий", L"Сірий", L"Червоний", L"Каштановий",
					L"Не обирати"
			});
			comboBox2->SelectedIndex = 5;
			label2->Text = L"Колір";
			label2->Visible = true;
			String^ query = "SELECT id_haircut, name_haircut, price_haircut, style_haircut, color_haircut FROM haircut";
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
				DataSet^ dataSet = gcnew DataSet();
				adapter->Fill(dataSet, "haircut");
				connection->Close();
				dataGridView1->DataSource = dataSet->Tables["haircut"];
				dataGridView1->Columns["id_haircut"]->HeaderText = "ID зачіски";
				dataGridView1->Columns["name_haircut"]->HeaderText = "Назва зачіски";
				dataGridView1->Columns["price_haircut"]->HeaderText = "Ціна зачиски";
				dataGridView1->Columns["style_haircut"]->HeaderText = "Довжина зачіски";
				dataGridView1->Columns["color_haircut"]->HeaderText = "Колір зачиски";
			}
			catch (Exception^ ex) {
				MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
			}
		}
	}
	private: System::Void співробітникПерукарніToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		WhoIndexe = 3;
		if (WhoIndexe == 3)
		{
			textBox1->Visible = true;
			label3->Visible = true;
			label3->Text = L"Досвід роботи";
			//
			button2->Visible = true;
			button3->Visible = true;
			button4->Visible = true;

			//
			label1->Visible = false;
			comboBox1->Visible = false;
			//

			comboBox2->Visible = false;
			label2->Visible = false;
			String^ query = "SELECT id_robotnik, name_robotnik, surname_robotnik, experience_robotnik FROM robotnik";
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
				DataSet^ dataSet = gcnew DataSet();
				adapter->Fill(dataSet, "robotnik");
				connection->Close();
				dataGridView1->DataSource = dataSet->Tables["robotnik"];
				dataGridView1->Columns["id_robotnik"]->HeaderText = "ID робітника";
				dataGridView1->Columns["name_robotnik"]->HeaderText = "Ім'я робітника";
				dataGridView1->Columns["surname_robotnik"]->HeaderText = "Прізвище робітника";
				dataGridView1->Columns["experience_robotnik"]->HeaderText = "Досвід роботи";
			}
			catch (Exception^ ex) {
				MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
			}
		}

	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ query;
		if (WhoIndexe == 1)
		{
			String^ selectedFunction = comboBox1->SelectedItem->ToString();
			String^ selectedService = comboBox2->SelectedItem->ToString();
			query = "SELECT id_person, name_person, surname_person, gender_person, status_person FROM person";

			if (selectedFunction != "Не обирати") {
				query += " WHERE gender_person = '" + selectedFunction + "'";
			}
			if (selectedService != "Не обирати" && selectedFunction != "Не обирати") {
				query += " AND status_person = '" + selectedService + "'";
			}
			else if (selectedService != "Не обирати" && selectedFunction == "Не обирати") {
				query += " WHERE status_person = '" + selectedService + "'";
			}
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);

			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
				DataSet^ dataSet = gcnew DataSet();
				adapter->Fill(dataSet, "person");
				connection->Close();
				dataGridView1->DataSource = dataSet->Tables["person"];
			}
			catch (Exception^ ex) {
				MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
			}
		}
		else if (WhoIndexe == 2) {
			String^ selectedFunction = comboBox1->SelectedItem->ToString();
			String^ selectedService = comboBox2->SelectedItem->ToString();
			String^ minPrice = textBox1->Text;

			String^ query = "SELECT id_haircut, name_haircut, price_haircut, style_haircut, color_haircut FROM haircut WHERE 1=1";

			if (selectedFunction != "Не обирати") {
				query += " AND style_haircut = '" + selectedFunction + "'";
			}
			if (selectedService != "Не обирати") {
				query += " AND color_haircut = '" + selectedService + "'";
			}
			if (minPrice != "") {
				query += " AND price_haircut >= " + minPrice;
			}

			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
				DataSet^ dataSet = gcnew DataSet();
				adapter->Fill(dataSet, "haircut");
				connection->Close();
				dataGridView1->DataSource = dataSet->Tables["haircut"];
			}
			catch (Exception^ ex) {
				MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
			}
		}
		else if (WhoIndexe == 3) {
			String^ minExperience = textBox1->Text;
			String^ query = "SELECT id_robotnik, name_robotnik, surname_robotnik, experience_robotnik FROM robotnik WHERE experience_robotnik >= @minExperience";
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				cmd->Parameters->AddWithValue("@minExperience", minExperience);
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
				DataTable^ dataTable = gcnew DataTable();
				adapter->Fill(dataTable);
				dataGridView1->DataSource = dataTable;
				connection->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
			}
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhoIndexe == 2)
		{
			if (dataGridView1->SelectedRows->Count > 0) {
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
				int ide = Convert::ToInt32(selectedRow->Cells["id_haircut"]->Value);
				String^ name = selectedRow->Cells["name_haircut"]->Value->ToString();
				int price = Convert::ToInt32(selectedRow->Cells["price_haircut"]->Value);
				String^ style = selectedRow->Cells["style_haircut"]->Value->ToString();
				String^ color = selectedRow->Cells["color_haircut"]->Value->ToString();
				String^ query = "INSERT INTO haircut (id_haircut, name_haircut, price_haircut, style_haircut, color_haircut) VALUES (@ide, @name, @price, @style, @color)";
				MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
				try {
					connection->Open();
					MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
					cmd->Parameters->AddWithValue("@ide", ide);
					cmd->Parameters->AddWithValue("@name", name);
					cmd->Parameters->AddWithValue("@price", price);
					cmd->Parameters->AddWithValue("@style", style);
					cmd->Parameters->AddWithValue("@color", color);
					cmd->ExecuteNonQuery();
					connection->Close();
					MessageBox::Show("Данные успешно добавлены в таблицу");
				}
				catch (Exception^ ex) {
					MessageBox::Show("Ошибка при добавлении данных: " + ex->Message);
				}
			}

			else {
				MessageBox::Show("Выберите строку для добавления данных!");
			}
		}
		if (WhoIndexe == 1)
		{
			if (dataGridView1->SelectedRows->Count > 0) {
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
				int ide = Convert::ToInt32(selectedRow->Cells["id_person"]->Value);
				String^ name = selectedRow->Cells["name_person"]->Value->ToString();
				String^ surname = selectedRow->Cells["surname_person"]->Value->ToString();
				String^ gender = selectedRow->Cells["gender_person"]->Value->ToString();
				String^ status = selectedRow->Cells["status_person"]->Value->ToString();
				String^ query = "INSERT INTO person (id_person, name_person, surname_person, gender_person, status_person) VALUES (@ide, @name, @surname, @gender, @status)";
				MySqlConnection^ connection = gcnew MySqlConnection(connectionString);

				try {
					connection->Open();
					MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
					cmd->Parameters->AddWithValue("@ide", ide);
					cmd->Parameters->AddWithValue("@name", name);
					cmd->Parameters->AddWithValue("@surname", surname);
					cmd->Parameters->AddWithValue("@gender", gender);
					cmd->Parameters->AddWithValue("@status", status);
					cmd->ExecuteNonQuery();
					connection->Close();
					MessageBox::Show("Данные успешно добавлены в таблицу!");
				}
				catch (Exception^ ex) {
					MessageBox::Show("Ошибка при добавлении данных: " + ex->Message);
				}
			}
			else {
				MessageBox::Show("Выберите строку для добавления данных!");
			}
		}
		if (WhoIndexe == 3)
		{
			if (dataGridView1->SelectedRows->Count > 0) {
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
				int ide = Convert::ToInt32(selectedRow->Cells["id_robotnik"]->Value);
				String^ name = selectedRow->Cells["name_robotnik"]->Value->ToString();
				String^ surname = selectedRow->Cells["surname_robotnik"]->Value->ToString();
				int experience = Convert::ToInt32(selectedRow->Cells["experience_robotnik"]->Value);
				String^ query = "INSERT INTO robotnik (id_robotnik, name_robotnik, surname_robotnik, experience_robotnik) VALUES (@ide, @name, @surname, @experience)";
				MySqlConnection^ connection = gcnew MySqlConnection(connectionString);

				try {
					connection->Open();
					MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
					cmd->Parameters->AddWithValue("@ide", ide);
					cmd->Parameters->AddWithValue("@name", name);
					cmd->Parameters->AddWithValue("@surname", surname);
					cmd->Parameters->AddWithValue("@experience", experience);
					cmd->ExecuteNonQuery();
					connection->Close();
					MessageBox::Show("Данные успешно добавлены в таблицу!");
				}
				catch (Exception^ ex) {
					MessageBox::Show("Ошибка при добавлении данных: " + ex->Message);
				}
			}
			else {
				MessageBox::Show("Выберите строку для добавления данных!");
			}
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhoIndexe == 1)
		{
			if (dataGridView1->SelectedRows->Count > 0) {
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
				int idPers = Convert::ToInt32(selectedRow->Cells["id_person"]->Value);
				String^ query = "DELETE FROM person WHERE id_person = " + idPers;
				MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
				try {
					connection->Open();
					MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
					cmd->ExecuteNonQuery();
					connection->Close();
					dataGridView1->Rows->Remove(dataGridView1->SelectedRows[0]);
					MessageBox::Show("Запись успешно удалена из таблицы!");
				}
				catch (Exception^ ex) {
					MessageBox::Show("Ошибка при удалении данных: " + ex->Message);
				}
			}
			else {
				MessageBox::Show("Выберите строку для удаления данных!");
			}
		}
		if (WhoIndexe == 2)
		{
			if (dataGridView1->SelectedRows->Count > 0) {
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
				int idHair = Convert::ToInt32(selectedRow->Cells["id_haircut"]->Value);
				String^ query = "DELETE FROM haircut WHERE id_haircut = " + idHair;
				MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
				try {
					connection->Open();
					MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
					cmd->ExecuteNonQuery();
					connection->Close();
					dataGridView1->Rows->Remove(dataGridView1->SelectedRows[0]);
					MessageBox::Show("Запись успешно удалена из таблицы!");
				}
				catch (Exception^ ex) {
					MessageBox::Show("Ошибка при удалении данных: " + ex->Message);
				}
			}
			else {
				MessageBox::Show("Выберите строку для удаления данных!");
			}
		}
		if (WhoIndexe == 3)
		{
			if (dataGridView1->SelectedRows->Count > 0) {
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
				int idWorkPerson = Convert::ToInt32(selectedRow->Cells["id_robotnik"]->Value);
				String^ query = "DELETE FROM robotnik WHERE id_robotnik = " + idWorkPerson;
				MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
				try {
					connection->Open();
					MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
					cmd->ExecuteNonQuery();
					connection->Close();
					dataGridView1->Rows->Remove(dataGridView1->SelectedRows[0]);
					MessageBox::Show("Запись успешно удалена из таблицы!");
				}
				catch (Exception^ ex) {
					MessageBox::Show("Ошибка при удалении данных: " + ex->Message);
				}
			}
			else {
				MessageBox::Show("Выберите строку для удаления данных!");
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhoIndexe == 1) {
			if (dataGridView1->SelectedRows->Count > 0) {
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
				int ide = Convert::ToInt32(selectedRow->Cells["id_person"]->Value);
				String^ name = selectedRow->Cells["name_person"]->Value->ToString();
				String^ surname = selectedRow->Cells["surname_person"]->Value->ToString();
				String^ gender = selectedRow->Cells["gender_person"]->Value->ToString();
				String^ status = selectedRow->Cells["status_person"]->Value->ToString();
				String^ query = "UPDATE person SET name_person = @name, surname_person = @surname, gender_person = @gender, status_person = @status WHERE id_person = @ide";
				MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
				try {
					connection->Open();
					MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
					cmd->Parameters->AddWithValue("@ide", ide);
					cmd->Parameters->AddWithValue("@name", name);
					cmd->Parameters->AddWithValue("@surname", surname);
					cmd->Parameters->AddWithValue("@gender", gender);
					cmd->Parameters->AddWithValue("@status", status);
					cmd->ExecuteNonQuery();
					connection->Close();
					MessageBox::Show("Данные успешно обновлены в таблице!");
				}
				catch (Exception^ ex) {
					MessageBox::Show("Ошибка при обновлении данных: " + ex->Message);
				}
			}
			else {
				MessageBox::Show("Выберите строку для обновления данных!");
			}
		}
		if (WhoIndexe == 2) {
			if (dataGridView1->SelectedRows->Count > 0) {
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
				int ide = Convert::ToInt32(selectedRow->Cells["id_haircut"]->Value);
				String^ name = selectedRow->Cells["name_haircut"]->Value->ToString();
				int price = Convert::ToInt32(selectedRow->Cells["price_haircut"]->Value);
				String^ style = selectedRow->Cells["style_haircut"]->Value->ToString();
				String^ color = selectedRow->Cells["color_haircut"]->Value->ToString();
				String^ query = "UPDATE haircut SET name_haircut = @name, price_haircut = @price, style_haircut = @style, color_haircut = @color WHERE id_haircut = @ide";
				MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
				try {
					connection->Open();
					MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
					cmd->Parameters->AddWithValue("@ide", ide);
					cmd->Parameters->AddWithValue("@name", name);
					cmd->Parameters->AddWithValue("@price", price);
					cmd->Parameters->AddWithValue("@style", style);
					cmd->Parameters->AddWithValue("@color", color);
					cmd->ExecuteNonQuery();
					connection->Close();
					MessageBox::Show("Данные успешно обновлены в таблице!");
				}
				catch (Exception^ ex) {
					MessageBox::Show("Ошибка при обновлении данных: " + ex->Message);
				}
			}
			else {
				MessageBox::Show("Выберите строку для обновления данных!");
			}
		}
		if (WhoIndexe == 3) {
			if (dataGridView1->SelectedRows->Count > 0) {
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
				int ide = Convert::ToInt32(selectedRow->Cells["id_robotnik"]->Value);
				String^ name = selectedRow->Cells["name_robotnik"]->Value->ToString();
				String^ surname = selectedRow->Cells["surname_robotnik"]->Value->ToString();
				int experience = Convert::ToInt32(selectedRow->Cells["experience_robotnik"]->Value);
				String^ query = "UPDATE robotnik SET name_robotnik = @name, surname_robotnik = @surname, experience_robotnik = @experience WHERE id_robotnik = @ide";
				MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
				try {
					connection->Open();
					MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
					cmd->Parameters->AddWithValue("@ide", ide);
					cmd->Parameters->AddWithValue("@name", name);
					cmd->Parameters->AddWithValue("@surname", surname);
					cmd->Parameters->AddWithValue("@experience", experience);
					cmd->ExecuteNonQuery();
					connection->Close();
					MessageBox::Show("Данные успешно обновлены в таблице!");
				}
				catch (Exception^ ex) {
					MessageBox::Show("Ошибка при обновлении данных: " + ex->Message);
				}
			}
			else {
				MessageBox::Show("Выберите строку для обновления данных!");
			}
		}
	}
	};
}

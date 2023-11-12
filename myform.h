#pragma once
using namespace System::Data::OleDb;

namespace Planetarium {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  䳿ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  actionsGroupBox;

	private: System::Windows::Forms::Button^  delButton;
	private: System::Windows::Forms::Button^  readButton;


	private: System::Windows::Forms::Button^  updateButton;

	private: System::Windows::Forms::Button^  addButton;


	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ���;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  �����;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ����;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  �����;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ���������;





	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->䳿ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actionsGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->delButton = (gcnew System::Windows::Forms::Button());
			this->readButton = (gcnew System::Windows::Forms::Button());
			this->updateButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->��� = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->����� = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->���� = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->����� = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->��������� = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->actionsGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->䳿ToolStripMenuItem,
					this->�����������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(891, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 䳿ToolStripMenuItem
			// 
			this->䳿ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->�����������ToolStripMenuItem, this->��������ToolStripMenuItem
			});
			this->䳿ToolStripMenuItem->Name = L"䳿ToolStripMenuItem";
			this->䳿ToolStripMenuItem->Size = System::Drawing::Size(33, 20);
			this->䳿ToolStripMenuItem->Text = L"ĳ�";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::updateButton_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readButton_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::delButton_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->�����������ToolStripMenuItem->Text = L"��� ��������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// actionsGroupBox
			// 
			this->actionsGroupBox->Controls->Add(this->delButton);
			this->actionsGroupBox->Controls->Add(this->readButton);
			this->actionsGroupBox->Controls->Add(this->updateButton);
			this->actionsGroupBox->Controls->Add(this->addButton);
			this->actionsGroupBox->Location = System::Drawing::Point(684, 41);
			this->actionsGroupBox->Name = L"actionsGroupBox";
			this->actionsGroupBox->Size = System::Drawing::Size(181, 354);
			this->actionsGroupBox->TabIndex = 1;
			this->actionsGroupBox->TabStop = false;
			this->actionsGroupBox->Text = L"ĳ�";
			// 
			// delButton
			// 
			this->delButton->Location = System::Drawing::Point(27, 170);
			this->delButton->Name = L"delButton";
			this->delButton->Size = System::Drawing::Size(130, 23);
			this->delButton->TabIndex = 3;
			this->delButton->Text = L"��������";
			this->delButton->UseVisualStyleBackColor = true;
			this->delButton->Click += gcnew System::EventHandler(this, &MyForm::delButton_Click);
			// 
			// readButton
			// 
			this->readButton->Location = System::Drawing::Point(27, 123);
			this->readButton->Name = L"readButton";
			this->readButton->Size = System::Drawing::Size(130, 23);
			this->readButton->TabIndex = 2;
			this->readButton->Text = L"�����������";
			this->readButton->UseVisualStyleBackColor = true;
			this->readButton->Click += gcnew System::EventHandler(this, &MyForm::readButton_Click);
			// 
			// updateButton
			// 
			this->updateButton->Location = System::Drawing::Point(27, 76);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(130, 23);
			this->updateButton->TabIndex = 1;
			this->updateButton->Text = L"�������";
			this->updateButton->UseVisualStyleBackColor = true;
			this->updateButton->Click += gcnew System::EventHandler(this, &MyForm::updateButton_Click);
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(27, 28);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(130, 23);
			this->addButton->TabIndex = 0;
			this->addButton->Text = L"������";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->���, this->�����,
					this->����, this->�����, this->���������
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(651, 354);
			this->dataGridView1->TabIndex = 2;
			// 
			// ���
			// 
			this->���->HeaderText = L"���";
			this->���->Name = L"���";
			// 
			// �����
			// 
			this->�����->HeaderText = L"�����";
			this->�����->Name = L"�����";
			// 
			// ����
			// 
			this->����->HeaderText = L"����";
			this->����->Name = L"����";
			// 
			// �����
			// 
			this->�����->HeaderText = L"�����";
			this->�����->Name = L"�����";
			// 
			// ���������
			// 
			this->���������->HeaderText = L"���������";
			this->���������->Name = L"���������";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(891, 416);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->actionsGroupBox);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"���������";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->actionsGroupBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void readButton_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=planets-db.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

		dbConnection->Open();
		String^ query = "SELECT * FROM [planets]";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

		if (dbReader->HasRows == false) {
			MessageBox::Show("���� �������", "�������");
		}
		else {
			while (dbReader->Read())
				dataGridView1->Rows->Add(dbReader["���"], dbReader["�����"], dbReader["����"], dbReader["�����"], 
					dbReader["���������"]);

		}
		dbReader->Close();
		dbConnection->Close();
	}

	private: System::Void addButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (dataGridView1->SelectedRows->Count != 1)
		{
			MessageBox::Show("������� ������ ���� �����", "�������� �����");
			return;
		}
		int index = dataGridView1->SelectedRows[0]->Index;
		if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
			MessageBox::Show("�� �� ���� �", "�������� �����");
			return;
		}
		String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
		String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
		String^ mass = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
		String^ radius = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
		String^ satellites = dataGridView1->Rows[index]->Cells[4]->Value->ToString();

		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=planets-db.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "INSERT INTO [planets] VALUES (" + id + ",'" + name + "','" + mass + "','" + radius + "'," + satellites + ")";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

		if (dbCommand->ExecuteNonQuery() != 1)
			MessageBox::Show("������� � ���������", "�������");
		else
			MessageBox::Show("���� ������", "��");
		dbConnection->Close();
	}

	private: System::Void updateButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (dataGridView1->SelectedRows->Count != 1)
		{
			MessageBox::Show("������� ������ ���� �����", "�������� �����");
			return;
		}
		int index = dataGridView1->SelectedRows[0]->Index;
		if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
			MessageBox::Show("�� �� ���� �", "�������� �����");
			return;
		}
		String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
		String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
		String^ mass = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
		String^ radius = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
		String^ satellites = dataGridView1->Rows[index]->Cells[4]->Value->ToString();

		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=planets-db.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "UPDATE [planets] SET �����='" + name + "', ����='" + mass + "', �����='" + radius + 
			"', ���������=" + satellites +
			" WHERE ���=" + id;
		//MessageBox::Show(query);
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

		if (dbCommand->ExecuteNonQuery() != 1)
			MessageBox::Show("������� � ���������", "�������");
		else
			MessageBox::Show("���� ������", "��");
		dbConnection->Close();
	}

	private: System::Void delButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (dataGridView1->SelectedRows->Count != 1)
		{
			MessageBox::Show("������� ������ ���� �����", "�������� �����");
			return;
		}
		int index = dataGridView1->SelectedRows[0]->Index;
		if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
			MessageBox::Show("�� �� ���� �", "�������� �����");
			return;
		}
		String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();

		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=planets-db.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "DELETE FROM [planets] WHERE ���=" + id;
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

		if (dbCommand->ExecuteNonQuery() != 1)
			MessageBox::Show("������� � ���������", "�������");
		else {
			MessageBox::Show("���� ��������", "��");
			dataGridView1->Rows->RemoveAt(index);
		}
		dbConnection->Close();
	}

private: System::Void �����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("\n�������� '��������� 2023'\n\n\n\t����� 1.01\n\n", "��� ��������");
}

private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}

};

};

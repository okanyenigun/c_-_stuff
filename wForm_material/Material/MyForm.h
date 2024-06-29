#pragma once

namespace Material {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
		   MySqlDataReader^ sqlRd;

	public:
		MyForm(void)
		{
			InitializeComponent();
			MaterialDB();
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ buttonGraph;
	private: System::Windows::Forms::TextBox^ txtMatName;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textMaterial;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textDensity;

	private: System::Windows::Forms::TextBox^ textYoung;

	private: System::Windows::Forms::TextBox^ textTensile;

	private: System::Windows::Forms::TextBox^ textSupplier;

	private: System::Windows::Forms::TextBox^ textMatType;
	private: System::Windows::Forms::Button^ saveButton;








	private: System::Windows::Forms::Label^ label10;








	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ f5;

	private: System::Windows::Forms::TextBox^ f4;

	private: System::Windows::Forms::TextBox^ t5;

	private: System::Windows::Forms::TextBox^ t4;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ f3;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ t3;

	private: System::Windows::Forms::TextBox^ t1;
	private: System::Windows::Forms::TextBox^ f2;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ f1;

	private: System::Windows::Forms::TextBox^ t2;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->f5 = (gcnew System::Windows::Forms::TextBox());
			this->f4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->t5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->t4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->f3 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->t3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->t1 = (gcnew System::Windows::Forms::TextBox());
			this->textDensity = (gcnew System::Windows::Forms::TextBox());
			this->f2 = (gcnew System::Windows::Forms::TextBox());
			this->textYoung = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textTensile = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textSupplier = (gcnew System::Windows::Forms::TextBox());
			this->f1 = (gcnew System::Windows::Forms::TextBox());
			this->textMatType = (gcnew System::Windows::Forms::TextBox());
			this->t2 = (gcnew System::Windows::Forms::TextBox());
			this->textMaterial = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->buttonGraph = (gcnew System::Windows::Forms::Button());
			this->txtMatName = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->saveButton);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->f5);
			this->panel1->Controls->Add(this->f4);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->t5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->t4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->f3);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->t3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->t1);
			this->panel1->Controls->Add(this->textDensity);
			this->panel1->Controls->Add(this->f2);
			this->panel1->Controls->Add(this->textYoung);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->textTensile);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->textSupplier);
			this->panel1->Controls->Add(this->f1);
			this->panel1->Controls->Add(this->textMatType);
			this->panel1->Controls->Add(this->t2);
			this->panel1->Controls->Add(this->textMaterial);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Location = System::Drawing::Point(12, 21);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(550, 385);
			this->panel1->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(449, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 17);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Force";
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(10, 320);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(123, 39);
			this->saveButton->TabIndex = 3;
			this->saveButton->Text = L"Save Record";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &MyForm::saveButton_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 292);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 17);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Density:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(328, 45);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 17);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Time";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 242);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 17);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Young Modulus:";
			// 
			// f5
			// 
			this->f5->Location = System::Drawing::Point(421, 251);
			this->f5->Name = L"f5";
			this->f5->Size = System::Drawing::Size(95, 22);
			this->f5->TabIndex = 0;
			// 
			// f4
			// 
			this->f4->Location = System::Drawing::Point(421, 207);
			this->f4->Name = L"f4";
			this->f4->Size = System::Drawing::Size(95, 22);
			this->f4->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tensile Strength:";
			// 
			// t5
			// 
			this->t5->Location = System::Drawing::Point(301, 251);
			this->t5->Name = L"t5";
			this->t5->Size = System::Drawing::Size(95, 22);
			this->t5->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Supplier:";
			// 
			// t4
			// 
			this->t4->Location = System::Drawing::Point(301, 207);
			this->t4->Name = L"t4";
			this->t4->Size = System::Drawing::Size(95, 22);
			this->t4->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Material Type:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label12->Location = System::Drawing::Point(268, 8);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(142, 25);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Measurements";
			// 
			// f3
			// 
			this->f3->Location = System::Drawing::Point(421, 167);
			this->f3->Name = L"f3";
			this->f3->Size = System::Drawing::Size(95, 22);
			this->f3->TabIndex = 0;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label11->Location = System::Drawing::Point(2, 158);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 25);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Properties";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(270, 87);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 17);
			this->label8->TabIndex = 3;
			this->label8->Text = L"1.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label10->Location = System::Drawing::Point(2, 8);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(182, 25);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Material Information";
			// 
			// t3
			// 
			this->t3->Location = System::Drawing::Point(301, 167);
			this->t3->Name = L"t3";
			this->t3->Size = System::Drawing::Size(95, 22);
			this->t3->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Material Name:";
			// 
			// t1
			// 
			this->t1->Location = System::Drawing::Point(301, 84);
			this->t1->Name = L"t1";
			this->t1->Size = System::Drawing::Size(95, 22);
			this->t1->TabIndex = 0;
			// 
			// textDensity
			// 
			this->textDensity->Location = System::Drawing::Point(120, 289);
			this->textDensity->Name = L"textDensity";
			this->textDensity->Size = System::Drawing::Size(137, 22);
			this->textDensity->TabIndex = 0;
			// 
			// f2
			// 
			this->f2->Location = System::Drawing::Point(421, 127);
			this->f2->Name = L"f2";
			this->f2->Size = System::Drawing::Size(95, 22);
			this->f2->TabIndex = 0;
			// 
			// textYoung
			// 
			this->textYoung->Location = System::Drawing::Point(120, 239);
			this->textYoung->Name = L"textYoung";
			this->textYoung->Size = System::Drawing::Size(137, 22);
			this->textYoung->TabIndex = 0;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(270, 130);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(20, 17);
			this->label13->TabIndex = 3;
			this->label13->Text = L"2.";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(270, 254);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(20, 17);
			this->label16->TabIndex = 3;
			this->label16->Text = L"5.";
			// 
			// textTensile
			// 
			this->textTensile->Location = System::Drawing::Point(120, 193);
			this->textTensile->Name = L"textTensile";
			this->textTensile->Size = System::Drawing::Size(137, 22);
			this->textTensile->TabIndex = 0;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(270, 210);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 17);
			this->label15->TabIndex = 3;
			this->label15->Text = L"4.";
			// 
			// textSupplier
			// 
			this->textSupplier->Location = System::Drawing::Point(120, 127);
			this->textSupplier->Name = L"textSupplier";
			this->textSupplier->Size = System::Drawing::Size(137, 22);
			this->textSupplier->TabIndex = 0;
			// 
			// f1
			// 
			this->f1->Location = System::Drawing::Point(421, 84);
			this->f1->Name = L"f1";
			this->f1->Size = System::Drawing::Size(95, 22);
			this->f1->TabIndex = 0;
			// 
			// textMatType
			// 
			this->textMatType->Location = System::Drawing::Point(120, 84);
			this->textMatType->Name = L"textMatType";
			this->textMatType->Size = System::Drawing::Size(137, 22);
			this->textMatType->TabIndex = 0;
			// 
			// t2
			// 
			this->t2->Location = System::Drawing::Point(301, 127);
			this->t2->Name = L"t2";
			this->t2->Size = System::Drawing::Size(95, 22);
			this->t2->TabIndex = 0;
			// 
			// textMaterial
			// 
			this->textMaterial->Location = System::Drawing::Point(120, 42);
			this->textMaterial->Name = L"textMaterial";
			this->textMaterial->Size = System::Drawing::Size(137, 22);
			this->textMaterial->TabIndex = 0;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(270, 170);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 17);
			this->label14->TabIndex = 3;
			this->label14->Text = L"3.";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->buttonGraph);
			this->panel3->Controls->Add(this->txtMatName);
			this->panel3->Location = System::Drawing::Point(585, 21);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(327, 56);
			this->panel3->TabIndex = 2;
			// 
			// buttonGraph
			// 
			this->buttonGraph->Location = System::Drawing::Point(173, 8);
			this->buttonGraph->Name = L"buttonGraph";
			this->buttonGraph->Size = System::Drawing::Size(123, 39);
			this->buttonGraph->TabIndex = 3;
			this->buttonGraph->Text = L"Graph";
			this->buttonGraph->UseVisualStyleBackColor = true;
			this->buttonGraph->Click += gcnew System::EventHandler(this, &MyForm::buttonGraph_Click);
			// 
			// txtMatName
			// 
			this->txtMatName->Location = System::Drawing::Point(7, 15);
			this->txtMatName->Name = L"txtMatName";
			this->txtMatName->Size = System::Drawing::Size(137, 22);
			this->txtMatName->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->chart1);
			this->panel2->Location = System::Drawing::Point(586, 103);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(325, 302);
			this->panel2->TabIndex = 3;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(-1, -1);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(327, 300);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->dataGridView1);
			this->panel4->Location = System::Drawing::Point(12, 459);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(899, 232);
			this->panel4->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(893, 226);
			this->dataGridView1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(928, 703);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void MaterialDB()
		{
			sqlConn->ConnectionString= "datasource = localhost; port=3306; username = root; password=0102; database=materials";
			sqlConn->Open();
			sqlCmd->Connection = sqlConn;
			sqlCmd->CommandText = "select * from records";
			sqlRd = sqlCmd->ExecuteReader();
			sqlDt->Load(sqlRd);
			sqlRd->Close();
			sqlConn->Close();
			dataGridView1->DataSource = sqlDt;
		}

			   private: System::Void RefreshDB()
			   {
				   try 
				   {
					   sqlConn->ConnectionString = "datasource = localhost; port=3306; username = root; password=0102; database=materials";
					   sqlCmd->Connection = sqlConn;

					   MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("select * from records", sqlConn);
					   DataTable^ sqlDt = gcnew DataTable();
					   sqlDtA->Fill(sqlDt);
					   dataGridView1->DataSource = sqlDt;

				   }
				   catch (Exception^ ex)
				   {
					   MessageBox::Show(ex->Message, "Data Entry Form",MessageBoxButtons::YesNo, MessageBoxIcon::Information);
				   }

			   }


private: System::Void buttonGraph_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		sqlConn->ConnectionString = "datasource = localhost; port=3306; username = root; password=0102; database=materials";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "select * from records where material_name = '" + txtMatName->Text + "'";
		sqlRd = sqlCmd->ExecuteReader();
		this->chart1->Series[0]->Points->Clear();
		while (sqlRd->Read())
		{
			this->chart1->Series["Series1"]->Points->AddXY(sqlRd->GetFloat("t1"), sqlRd->GetFloat("f1"));
			this->chart1->Series["Series1"]->Points->AddXY(sqlRd->GetFloat("t2"), sqlRd->GetFloat("f2"));
			this->chart1->Series["Series1"]->Points->AddXY(sqlRd->GetFloat("t3"), sqlRd->GetFloat("f3"));
			this->chart1->Series["Series1"]->Points->AddXY(sqlRd->GetFloat("t4"), sqlRd->GetFloat("f4"));
			this->chart1->Series["Series1"]->Points->AddXY(sqlRd->GetFloat("t5"), sqlRd->GetFloat("f5"));
		}
		sqlConn->Close();
		

	
			//DataView^ dv = sqlDt->DefaultView;
			//dv->RowFilter = String::Format("MATERIAL_NAME LIKE '%{0}%", txtMatName->Text);
			//dataGridView1->DataSource = dv->ToTable();
		//this->chart1->Series["Series1"]->Points->AddXY(3, 25);
		//this->chart1->Series["Series1"]->Points->AddXY(4, 30);

	
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	try
	{
		if (e->KeyChar == (Char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("MATERIAL_NAME LIKE '%{0}%", txtMatName->Text);
			dataGridView1->DataSource = dv->ToTable();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "datasource = localhost; port=3306; username = root; password=0102; database=materials";
	sqlConn->Open();
	sqlCmd->Connection = sqlConn;
	try
	{
		sqlCmd->CommandText = "INSERT INTO RECORDS (MATERIAL_NAME, MATERIAL_TYPE, SUPPLIER, TENSILE, YOUNG, DENSITY, T1, T2, T3, " + 
			"T4, T5, F1, F2, F3, F4, F5)"
			" values ('" + textMaterial->Text + "','" + textMatType->Text + "','" + textSupplier->Text + "','" + textTensile->Text + "','" + textYoung->Text + "','" + 
			textDensity->Text + "','" + t1->Text + "','" + t2->Text + "','" + t3->Text + "','" + t4->Text + "','" + t5->Text + "','" + f1->Text + "','" + 
			f2->Text + "','" + f3->Text + "','" + f4->Text + "','" + f5->Text + "')";
		
		sqlCmd->ExecuteNonQuery();

		sqlConn->Close();
		MaterialDB();
		RefreshDB();


	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}

};
}

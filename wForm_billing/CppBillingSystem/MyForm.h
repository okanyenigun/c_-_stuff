#pragma once

namespace CppBillingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		double bread = 0.89;
		double rice = 1.10;
		double beans = 2.33;
		double wine = 9.99;
		double milk = 0.23;


	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
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
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ rtReceipt;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::NumericUpDown^ numMilk;

	private: System::Windows::Forms::NumericUpDown^ numWine;

	private: System::Windows::Forms::NumericUpDown^ numBeans;

	private: System::Windows::Forms::NumericUpDown^ numRice;

	private: System::Windows::Forms::NumericUpDown^ numBread;
	private: System::Windows::Forms::Label^ lblMilk;


	private: System::Windows::Forms::Label^ lblWine;

	private: System::Windows::Forms::Label^ lblBeans;

	private: System::Windows::Forms::Label^ lblRice;

	private: System::Windows::Forms::Label^ lblBread;
	private: System::Windows::Forms::Label^ lblCostItem;
	private: System::Windows::Forms::Label^ lblNumItems;





	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btnTotal;
	private: System::Windows::Forms::Button^ btnReceipt;
	private: System::Windows::Forms::Button^ btnPrint;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rtReceipt = (gcnew System::Windows::Forms::RichTextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->numMilk = (gcnew System::Windows::Forms::NumericUpDown());
			this->numWine = (gcnew System::Windows::Forms::NumericUpDown());
			this->numBeans = (gcnew System::Windows::Forms::NumericUpDown());
			this->numRice = (gcnew System::Windows::Forms::NumericUpDown());
			this->numBread = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblMilk = (gcnew System::Windows::Forms::Label());
			this->lblWine = (gcnew System::Windows::Forms::Label());
			this->lblBeans = (gcnew System::Windows::Forms::Label());
			this->lblRice = (gcnew System::Windows::Forms::Label());
			this->lblBread = (gcnew System::Windows::Forms::Label());
			this->lblCostItem = (gcnew System::Windows::Forms::Label());
			this->lblNumItems = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnTotal = (gcnew System::Windows::Forms::Button());
			this->btnReceipt = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMilk))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numWine))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBeans))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBread))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::CadetBlue;
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(16, 15);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1781, 788);
			this->panel1->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->rtReceipt);
			this->panel4->Location = System::Drawing::Point(1132, 126);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(615, 521);
			this->panel4->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(63, 0);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(171, 52);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Receipt";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// rtReceipt
			// 
			this->rtReceipt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->rtReceipt->Location = System::Drawing::Point(19, 80);
			this->rtReceipt->Margin = System::Windows::Forms::Padding(4);
			this->rtReceipt->Name = L"rtReceipt";
			this->rtReceipt->Size = System::Drawing::Size(577, 436);
			this->rtReceipt->TabIndex = 0;
			this->rtReceipt->Text = L"";
			this->rtReceipt->TextChanged += gcnew System::EventHandler(this, &MyForm::rtReceipt_TextChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->numMilk);
			this->panel3->Controls->Add(this->numWine);
			this->panel3->Controls->Add(this->numBeans);
			this->panel3->Controls->Add(this->numRice);
			this->panel3->Controls->Add(this->numBread);
			this->panel3->Controls->Add(this->lblMilk);
			this->panel3->Controls->Add(this->lblWine);
			this->panel3->Controls->Add(this->lblBeans);
			this->panel3->Controls->Add(this->lblRice);
			this->panel3->Controls->Add(this->lblBread);
			this->panel3->Controls->Add(this->lblCostItem);
			this->panel3->Controls->Add(this->lblNumItems);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(16, 126);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1108, 521);
			this->panel3->TabIndex = 0;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label18->Location = System::Drawing::Point(748, 0);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(280, 52);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Cost of Items";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label17->Location = System::Drawing::Point(307, 0);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(346, 52);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Number of Items";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label16->Location = System::Drawing::Point(48, 0);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(130, 52);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Items";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// numMilk
			// 
			this->numMilk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->numMilk->Location = System::Drawing::Point(295, 379);
			this->numMilk->Margin = System::Windows::Forms::Padding(4);
			this->numMilk->Name = L"numMilk";
			this->numMilk->Size = System::Drawing::Size(376, 45);
			this->numMilk->TabIndex = 1;
			this->numMilk->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numMilk->ValueChanged += gcnew System::EventHandler(this, &MyForm::numMilk_ValueChanged);
			// 
			// numWine
			// 
			this->numWine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->numWine->Location = System::Drawing::Point(295, 289);
			this->numWine->Margin = System::Windows::Forms::Padding(4);
			this->numWine->Name = L"numWine";
			this->numWine->Size = System::Drawing::Size(376, 45);
			this->numWine->TabIndex = 1;
			this->numWine->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numWine->ValueChanged += gcnew System::EventHandler(this, &MyForm::numWine_ValueChanged);
			// 
			// numBeans
			// 
			this->numBeans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->numBeans->Location = System::Drawing::Point(295, 204);
			this->numBeans->Margin = System::Windows::Forms::Padding(4);
			this->numBeans->Name = L"numBeans";
			this->numBeans->Size = System::Drawing::Size(376, 45);
			this->numBeans->TabIndex = 1;
			this->numBeans->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numBeans->ValueChanged += gcnew System::EventHandler(this, &MyForm::numBeans_ValueChanged);
			// 
			// numRice
			// 
			this->numRice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->numRice->Location = System::Drawing::Point(295, 127);
			this->numRice->Margin = System::Windows::Forms::Padding(4);
			this->numRice->Name = L"numRice";
			this->numRice->Size = System::Drawing::Size(376, 45);
			this->numRice->TabIndex = 1;
			this->numRice->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numRice->ValueChanged += gcnew System::EventHandler(this, &MyForm::numRice_ValueChanged);
			// 
			// numBread
			// 
			this->numBread->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->numBread->Location = System::Drawing::Point(295, 57);
			this->numBread->Margin = System::Windows::Forms::Padding(4);
			this->numBread->Name = L"numBread";
			this->numBread->Size = System::Drawing::Size(376, 45);
			this->numBread->TabIndex = 1;
			this->numBread->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numBread->ValueChanged += gcnew System::EventHandler(this, &MyForm::numBread_ValueChanged);
			// 
			// lblMilk
			// 
			this->lblMilk->BackColor = System::Drawing::Color::White;
			this->lblMilk->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblMilk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblMilk->Location = System::Drawing::Point(703, 379);
			this->lblMilk->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblMilk->Name = L"lblMilk";
			this->lblMilk->Size = System::Drawing::Size(372, 47);
			this->lblMilk->TabIndex = 0;
			this->lblMilk->Text = L"$0.00";
			this->lblMilk->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblWine
			// 
			this->lblWine->BackColor = System::Drawing::Color::White;
			this->lblWine->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblWine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblWine->Location = System::Drawing::Point(703, 289);
			this->lblWine->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblWine->Name = L"lblWine";
			this->lblWine->Size = System::Drawing::Size(372, 47);
			this->lblWine->TabIndex = 0;
			this->lblWine->Text = L"$0.00";
			this->lblWine->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblBeans
			// 
			this->lblBeans->BackColor = System::Drawing::Color::White;
			this->lblBeans->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblBeans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblBeans->Location = System::Drawing::Point(703, 204);
			this->lblBeans->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblBeans->Name = L"lblBeans";
			this->lblBeans->Size = System::Drawing::Size(372, 47);
			this->lblBeans->TabIndex = 0;
			this->lblBeans->Text = L"$0.00";
			this->lblBeans->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblRice
			// 
			this->lblRice->BackColor = System::Drawing::Color::White;
			this->lblRice->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblRice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblRice->Location = System::Drawing::Point(703, 127);
			this->lblRice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRice->Name = L"lblRice";
			this->lblRice->Size = System::Drawing::Size(372, 47);
			this->lblRice->TabIndex = 0;
			this->lblRice->Text = L"$0.00";
			this->lblRice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblBread
			// 
			this->lblBread->BackColor = System::Drawing::Color::White;
			this->lblBread->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblBread->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblBread->Location = System::Drawing::Point(703, 54);
			this->lblBread->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblBread->Name = L"lblBread";
			this->lblBread->Size = System::Drawing::Size(372, 47);
			this->lblBread->TabIndex = 0;
			this->lblBread->Text = L"$0.00";
			this->lblBread->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblCostItem
			// 
			this->lblCostItem->BackColor = System::Drawing::Color::White;
			this->lblCostItem->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblCostItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblCostItem->Location = System::Drawing::Point(703, 463);
			this->lblCostItem->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCostItem->Name = L"lblCostItem";
			this->lblCostItem->Size = System::Drawing::Size(372, 38);
			this->lblCostItem->TabIndex = 0;
			this->lblCostItem->Text = L"$0.00";
			this->lblCostItem->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblNumItems
			// 
			this->lblNumItems->BackColor = System::Drawing::Color::White;
			this->lblNumItems->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblNumItems->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblNumItems->Location = System::Drawing::Point(295, 463);
			this->lblNumItems->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNumItems->Name = L"lblNumItems";
			this->lblNumItems->Size = System::Drawing::Size(376, 38);
			this->lblNumItems->TabIndex = 0;
			this->lblNumItems->Text = L"0";
			this->lblNumItems->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label15->Location = System::Drawing::Point(49, 463);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(172, 39);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Total Cost";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label11->Location = System::Drawing::Point(49, 388);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 39);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Milk";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label9->Location = System::Drawing::Point(49, 298);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(95, 39);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Wine";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label7->Location = System::Drawing::Point(49, 213);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 39);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Beans";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label5->Location = System::Drawing::Point(57, 135);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 39);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Rice";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->Location = System::Drawing::Point(49, 65);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 39);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Bread";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Control;
			this->panel5->Controls->Add(this->btnTotal);
			this->panel5->Controls->Add(this->btnReceipt);
			this->panel5->Controls->Add(this->btnPrint);
			this->panel5->Controls->Add(this->btnReset);
			this->panel5->Controls->Add(this->btnExit);
			this->panel5->Location = System::Drawing::Point(16, 666);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1731, 103);
			this->panel5->TabIndex = 0;
			// 
			// btnTotal
			// 
			this->btnTotal->BackColor = System::Drawing::Color::CadetBlue;
			this->btnTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->btnTotal->Location = System::Drawing::Point(28, 4);
			this->btnTotal->Margin = System::Windows::Forms::Padding(4);
			this->btnTotal->Name = L"btnTotal";
			this->btnTotal->Size = System::Drawing::Size(333, 86);
			this->btnTotal->TabIndex = 0;
			this->btnTotal->Text = L"Total";
			this->btnTotal->UseVisualStyleBackColor = false;
			this->btnTotal->Click += gcnew System::EventHandler(this, &MyForm::btnTotal_Click);
			// 
			// btnReceipt
			// 
			this->btnReceipt->BackColor = System::Drawing::Color::CadetBlue;
			this->btnReceipt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->btnReceipt->Location = System::Drawing::Point(369, 4);
			this->btnReceipt->Margin = System::Windows::Forms::Padding(4);
			this->btnReceipt->Name = L"btnReceipt";
			this->btnReceipt->Size = System::Drawing::Size(333, 86);
			this->btnReceipt->TabIndex = 0;
			this->btnReceipt->Text = L"Receipt";
			this->btnReceipt->UseVisualStyleBackColor = false;
			this->btnReceipt->Click += gcnew System::EventHandler(this, &MyForm::btnReceipt_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->BackColor = System::Drawing::Color::CadetBlue;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->btnPrint->Location = System::Drawing::Point(711, 4);
			this->btnPrint->Margin = System::Windows::Forms::Padding(4);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(333, 86);
			this->btnPrint->TabIndex = 0;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = false;
			this->btnPrint->Click += gcnew System::EventHandler(this, &MyForm::btnPrint_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::CadetBlue;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->btnReset->Location = System::Drawing::Point(1052, 4);
			this->btnReset->Margin = System::Windows::Forms::Padding(4);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(333, 86);
			this->btnReset->TabIndex = 0;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::CadetBlue;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->btnExit->Location = System::Drawing::Point(1393, 4);
			this->btnExit->Margin = System::Windows::Forms::Padding(4);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(333, 86);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(16, 15);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1731, 103);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48));
			this->label1->ForeColor = System::Drawing::Color::CadetBlue;
			this->label1->Location = System::Drawing::Point(315, 0);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1060, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Billing Management Systems";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Text = L"Baský önizleme";
			this->printPreviewDialog1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1827, 922);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMilk))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numWine))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBeans))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBread))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		System::Windows::Forms::DialogResult iExit;
		iExit = MessageBox::Show("Confirm if you want to exit", "Billing Manage System", MessageBoxButtons::YesNo,MessageBoxIcon::Question);
		if (iExit == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		numBread->Value = 0;
		numBeans->Value = 0;
		numRice->Value = 0;
		numWine->Value = 0;
		numMilk->Value = 0;
		rtReceipt->Clear();
		lblBeans->Text = "$0.00";
		lblBread->Text = "$0.00";
		lblRice->Text = "$0.00";
		lblWine->Text = "$0.00";
		lblMilk->Text = "$0.00";
		lblCostItem->Text = "$0.00";
		lblNumItems->Text = "0";

	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
}

private: System::Void numBread_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	double i = Convert::ToDouble(numBread->Value);
	lblBread->Text = String::Format("{0:c2}", i * bread);

}

private: System::Void numRice_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(numRice->Value);
	lblRice->Text = String::Format("{0:c2}", i * rice);
}
private: System::Void numBeans_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(numBeans->Value);
	lblBeans->Text = String::Format("{0:c2}", i * beans);
}
private: System::Void numWine_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(numWine->Value);
	lblWine->Text = String::Format("{0:c2}", i * wine);
}
private: System::Void numMilk_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(numMilk->Value);
	lblMilk->Text = String::Format("{0:c2}", i * milk);
}

private: System::Void btnTotal_Click(System::Object^ sender, System::EventArgs^ e) {
	double q[7], p[7];
	q[0] = Convert::ToDouble(numBread->Value);
	q[1] = Convert::ToDouble(numRice->Value);
	q[2] = Convert::ToDouble(numBeans->Value);
	q[3] = Convert::ToDouble(numWine->Value);
	q[4] = Convert::ToDouble(numMilk->Value);
	q[5] = q[4] + q[3] + q[2] + q[1] + q[0];

	lblNumItems->Text = Convert::ToString(q[5]);
	p[0] = q[0] * bread;
	p[1] = q[1] * rice;
	p[2] = q[2] * beans;
	p[3] = q[3] * wine;
	p[4] = q[4] * milk;
	p[5] = p[4] + p[3] + p[2] + p[1] + p[0];

	lblCostItem->Text = String::Format("{0:c2}", p[5]);

}
private: System::Void btnReceipt_Click(System::Object^ sender, System::EventArgs^ e) {
	rtReceipt->Clear();

	rtReceipt->AppendText(label16->Text + "\t" + "\t" + label17->Text + "\t" + "\t" + label18->Text + "\n" + "\n");
	rtReceipt->AppendText(label3->Text + "\t" + "\t" + numBread->Value + "\t" + "\t" + "\t" + lblBread->Text + "\n" + "\n");
	rtReceipt->AppendText(label5->Text + "\t" + "\t" + "\t"+numRice->Value + "\t" + "\t" + "\t" + lblRice->Text + "\n" + "\n");
	rtReceipt->AppendText(label7->Text + "\t" + "\t" + numBeans->Value + "\t" + "\t" + "\t" + lblBeans->Text + "\n" + "\n");
	rtReceipt->AppendText(label9->Text + "\t" + "\t" + "\t"+numWine->Text + "\t" + "\t" + "\t" + lblWine->Text + "\n" + "\n");
	rtReceipt->AppendText(label11->Text + "\t" + "\t" + "\t"+numMilk->Text + "\t" + "\t" + "\t" + lblMilk->Text + "\n" + "\n");
	rtReceipt->AppendText(label15->Text + "\t" + "\t" + lblNumItems->Text + "\t" + "\t" + "\t" + lblCostItem->Text + "\n" + "\n");

}
private: System::Void rtReceipt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
	printPreviewDialog1->ShowDialog();
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {

	System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Time New Roman", 14, FontStyle::Regular);

	e->Graphics->DrawString(rtReceipt->Text, fntString, Brushes::Black, 100, 100);
}
};
}

#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//

			
			// destination
			cmbDestination->Text = "Where to go ?";
			cmbDestination->Items->Add("Chengdu");
			cmbDestination->Items->Add("Chongqing");
			cmbDestination->Items->Add("Beijing");
			cmbDestination->Items->Add("Xi'an");
			cmbDestination->Items->Add("Shanghai");
			

			// curreny change
			cmbCC->Text = "Choose one ...";
			cmbCC->Items->Add("Euro");
			cmbCC->Items->Add("England");
			cmbCC->Items->Add("USA");
			cmbCC->Items->Add("Japan");
			cmbCC->Items->Add("Canada");
			cmbCC->Items->Add("India");
			cmbCC->Items->Add("Philippine");
			cmbCC->Items->Add("Brazil");

			timer1->Start();

		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ rbChild;

	private: System::Windows::Forms::RadioButton^ rbAdult;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ rbReturn;

	private: System::Windows::Forms::RadioButton^ rbSingle;

	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::RadioButton^ rbPro;
	private: System::Windows::Forms::RadioButton^ rbEco;


	private: System::Windows::Forms::RadioButton^ rbStd;



	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ btnPrint;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtRoute;









	private: System::Windows::Forms::TextBox^ txtDate;

	private: System::Windows::Forms::TextBox^ txtTime;

	private: System::Windows::Forms::TextBox^ txtRef;

	private: System::Windows::Forms::TextBox^ txtPrice;

	private: System::Windows::Forms::TextBox^ txtTo;

	private: System::Windows::Forms::TextBox^ txtFrom;

	private: System::Windows::Forms::TextBox^ txtChild;








private: System::Windows::Forms::TextBox^ txtAdult;

private: System::Windows::Forms::TextBox^ txtTicket;

private: System::Windows::Forms::TextBox^ txtClass;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::TextBox^ txtCC;

	private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ btnClear;

private: System::Windows::Forms::ComboBox^ cmbDestination;

	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnReset;


	private: System::Windows::Forms::Button^ btnCC;
	private: System::Windows::Forms::ComboBox^ cmbCC;
	private: System::Windows::Forms::Label^ lblCC;
private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Label^ lblDate;
private: System::Windows::Forms::Label^ lblTime;
private: System::Windows::Forms::Button^ btnConvert;
private: System::Windows::Forms::Label^ lblTotal;
private: System::Windows::Forms::Label^ lblTax;
private: System::Windows::Forms::Label^ lblSubTotal;
private: System::Windows::Forms::Label^ lblClass;
private: System::Windows::Forms::Label^ lblTicket;
private: System::Windows::Forms::Label^ lblAdult;
private: System::Windows::Forms::Label^ lblChild;
private: System::Windows::Forms::Label^ lblFrom;
private: System::Windows::Forms::Label^ lblTo;
private: System::Windows::Forms::Label^ lblPrice;







private: System::Windows::Forms::Label^ lblRoute;
private: System::Windows::Forms::Label^ lblRef;
private: System::Windows::Forms::RichTextBox^ rtbReceipt;
private: System::Drawing::Printing::PrintDocument^ printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
private: System::ComponentModel::IContainer^ components;






	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rbPro = (gcnew System::Windows::Forms::RadioButton());
			this->rbEco = (gcnew System::Windows::Forms::RadioButton());
			this->rbStd = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->lblClass = (gcnew System::Windows::Forms::Label());
			this->lblTicket = (gcnew System::Windows::Forms::Label());
			this->lblAdult = (gcnew System::Windows::Forms::Label());
			this->lblChild = (gcnew System::Windows::Forms::Label());
			this->lblFrom = (gcnew System::Windows::Forms::Label());
			this->lblTo = (gcnew System::Windows::Forms::Label());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->lblRoute = (gcnew System::Windows::Forms::Label());
			this->lblRef = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtRoute = (gcnew System::Windows::Forms::TextBox());
			this->txtDate = (gcnew System::Windows::Forms::TextBox());
			this->txtTime = (gcnew System::Windows::Forms::TextBox());
			this->txtRef = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtTo = (gcnew System::Windows::Forms::TextBox());
			this->txtFrom = (gcnew System::Windows::Forms::TextBox());
			this->txtChild = (gcnew System::Windows::Forms::TextBox());
			this->txtAdult = (gcnew System::Windows::Forms::TextBox());
			this->txtTicket = (gcnew System::Windows::Forms::TextBox());
			this->txtClass = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->rtbReceipt = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbDestination = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->rbChild = (gcnew System::Windows::Forms::RadioButton());
			this->rbAdult = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnCC = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->rbReturn = (gcnew System::Windows::Forms::RadioButton());
			this->rbSingle = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->lblTax = (gcnew System::Windows::Forms::Label());
			this->lblSubTotal = (gcnew System::Windows::Forms::Label());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->lblCC = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->cmbCC = (gcnew System::Windows::Forms::ComboBox());
			this->txtCC = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1326, 100);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Webdings", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->label2->Location = System::Drawing::Point(1176, -5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 101);
			this->label2->TabIndex = 1;
			this->label2->Text = L"R";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(127, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(759, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Train Ticket System";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox2->Controls->Add(this->rbPro);
			this->groupBox2->Controls->Add(this->rbEco);
			this->groupBox2->Controls->Add(this->rbStd);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(12, 118);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 253);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			// 
			// rbPro
			// 
			this->rbPro->AutoSize = true;
			this->rbPro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbPro->Location = System::Drawing::Point(33, 163);
			this->rbPro->Name = L"rbPro";
			this->rbPro->Size = System::Drawing::Size(122, 24);
			this->rbPro->TabIndex = 8;
			this->rbPro->TabStop = true;
			this->rbPro->Text = L"First Klass";
			this->rbPro->UseVisualStyleBackColor = true;
			// 
			// rbEco
			// 
			this->rbEco->AutoSize = true;
			this->rbEco->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbEco->Location = System::Drawing::Point(33, 119);
			this->rbEco->Name = L"rbEco";
			this->rbEco->Size = System::Drawing::Size(106, 24);
			this->rbEco->TabIndex = 7;
			this->rbEco->TabStop = true;
			this->rbEco->Text = L"Economy";
			this->rbEco->UseVisualStyleBackColor = true;
			// 
			// rbStd
			// 
			this->rbStd->AutoSize = true;
			this->rbStd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbStd->Location = System::Drawing::Point(33, 77);
			this->rbStd->Name = L"rbStd";
			this->rbStd->Size = System::Drawing::Size(105, 24);
			this->rbStd->TabIndex = 6;
			this->rbStd->TabStop = true;
			this->rbStd->Text = L"Standard";
			this->rbStd->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(48, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 32);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Class";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox3->Controls->Add(this->tabControl1);
			this->groupBox3->Location = System::Drawing::Point(729, 118);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(609, 553);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(19, 18);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(584, 520);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->lblClass);
			this->tabPage1->Controls->Add(this->lblTicket);
			this->tabPage1->Controls->Add(this->lblAdult);
			this->tabPage1->Controls->Add(this->lblChild);
			this->tabPage1->Controls->Add(this->lblFrom);
			this->tabPage1->Controls->Add(this->lblTo);
			this->tabPage1->Controls->Add(this->lblPrice);
			this->tabPage1->Controls->Add(this->lblRoute);
			this->tabPage1->Controls->Add(this->lblRef);
			this->tabPage1->Controls->Add(this->lblDate);
			this->tabPage1->Controls->Add(this->lblTime);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->btnClear);
			this->tabPage1->Controls->Add(this->btnPrint);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->txtRoute);
			this->tabPage1->Controls->Add(this->txtDate);
			this->tabPage1->Controls->Add(this->txtTime);
			this->tabPage1->Controls->Add(this->txtRef);
			this->tabPage1->Controls->Add(this->txtPrice);
			this->tabPage1->Controls->Add(this->txtTo);
			this->tabPage1->Controls->Add(this->txtFrom);
			this->tabPage1->Controls->Add(this->txtChild);
			this->tabPage1->Controls->Add(this->txtAdult);
			this->tabPage1->Controls->Add(this->txtTicket);
			this->tabPage1->Controls->Add(this->txtClass);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(576, 491);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Booking";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// lblClass
			// 
			this->lblClass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblClass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblClass->Location = System::Drawing::Point(6, 94);
			this->lblClass->Name = L"lblClass";
			this->lblClass->Size = System::Drawing::Size(137, 40);
			this->lblClass->TabIndex = 43;
			// 
			// lblTicket
			// 
			this->lblTicket->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblTicket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTicket->Location = System::Drawing::Point(147, 95);
			this->lblTicket->Name = L"lblTicket";
			this->lblTicket->Size = System::Drawing::Size(137, 40);
			this->lblTicket->TabIndex = 42;
			// 
			// lblAdult
			// 
			this->lblAdult->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblAdult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAdult->Location = System::Drawing::Point(290, 94);
			this->lblAdult->Name = L"lblAdult";
			this->lblAdult->Size = System::Drawing::Size(137, 40);
			this->lblAdult->TabIndex = 41;
			// 
			// lblChild
			// 
			this->lblChild->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblChild->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblChild->Location = System::Drawing::Point(433, 94);
			this->lblChild->Name = L"lblChild";
			this->lblChild->Size = System::Drawing::Size(137, 40);
			this->lblChild->TabIndex = 40;
			// 
			// lblFrom
			// 
			this->lblFrom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblFrom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFrom->Location = System::Drawing::Point(290, 147);
			this->lblFrom->Name = L"lblFrom";
			this->lblFrom->Size = System::Drawing::Size(137, 40);
			this->lblFrom->TabIndex = 39;
			// 
			// lblTo
			// 
			this->lblTo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblTo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTo->Location = System::Drawing::Point(290, 193);
			this->lblTo->Name = L"lblTo";
			this->lblTo->Size = System::Drawing::Size(137, 40);
			this->lblTo->TabIndex = 38;
			// 
			// lblPrice
			// 
			this->lblPrice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrice->Location = System::Drawing::Point(290, 237);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(137, 40);
			this->lblPrice->TabIndex = 37;
			// 
			// lblRoute
			// 
			this->lblRoute->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblRoute->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRoute->Location = System::Drawing::Point(433, 352);
			this->lblRoute->Name = L"lblRoute";
			this->lblRoute->Size = System::Drawing::Size(137, 40);
			this->lblRoute->TabIndex = 36;
			// 
			// lblRef
			// 
			this->lblRef->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblRef->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRef->Location = System::Drawing::Point(6, 352);
			this->lblRef->Name = L"lblRef";
			this->lblRef->Size = System::Drawing::Size(137, 40);
			this->lblRef->TabIndex = 35;
			// 
			// lblDate
			// 
			this->lblDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDate->Location = System::Drawing::Point(290, 354);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(137, 40);
			this->lblDate->TabIndex = 34;
			// 
			// lblTime
			// 
			this->lblTime->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTime->Location = System::Drawing::Point(149, 352);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(137, 40);
			this->lblTime->TabIndex = 33;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(433, 429);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 40);
			this->button4->TabIndex = 32;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::Black;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::White;
			this->btnClear->Location = System::Drawing::Point(290, 429);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(137, 40);
			this->btnClear->TabIndex = 31;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->BackColor = System::Drawing::Color::Black;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->ForeColor = System::Drawing::Color::White;
			this->btnPrint->Location = System::Drawing::Point(147, 429);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(137, 40);
			this->btnPrint->TabIndex = 30;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = false;
			this->btnPrint->Click += gcnew System::EventHandler(this, &Form1::btnPrint_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(6, 429);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 40);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Total";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txtRoute
			// 
			this->txtRoute->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRoute->Location = System::Drawing::Point(433, 306);
			this->txtRoute->Multiline = true;
			this->txtRoute->Name = L"txtRoute";
			this->txtRoute->Size = System::Drawing::Size(137, 40);
			this->txtRoute->TabIndex = 20;
			this->txtRoute->Text = L"Route";
			this->txtRoute->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtDate
			// 
			this->txtDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDate->Location = System::Drawing::Point(290, 306);
			this->txtDate->Multiline = true;
			this->txtDate->Name = L"txtDate";
			this->txtDate->Size = System::Drawing::Size(137, 40);
			this->txtDate->TabIndex = 19;
			this->txtDate->Text = L"Date";
			this->txtDate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtTime
			// 
			this->txtTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTime->Location = System::Drawing::Point(147, 306);
			this->txtTime->Multiline = true;
			this->txtTime->Name = L"txtTime";
			this->txtTime->Size = System::Drawing::Size(137, 40);
			this->txtTime->TabIndex = 18;
			this->txtTime->Text = L"Time";
			this->txtTime->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtRef
			// 
			this->txtRef->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRef->Location = System::Drawing::Point(6, 306);
			this->txtRef->Multiline = true;
			this->txtRef->Name = L"txtRef";
			this->txtRef->Size = System::Drawing::Size(137, 40);
			this->txtRef->TabIndex = 17;
			this->txtRef->Text = L"Ref No.";
			this->txtRef->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtPrice
			// 
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPrice->Location = System::Drawing::Point(147, 239);
			this->txtPrice->Multiline = true;
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(137, 40);
			this->txtPrice->TabIndex = 16;
			this->txtPrice->Text = L"Price";
			// 
			// txtTo
			// 
			this->txtTo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTo->Location = System::Drawing::Point(147, 193);
			this->txtTo->Multiline = true;
			this->txtTo->Name = L"txtTo";
			this->txtTo->Size = System::Drawing::Size(137, 40);
			this->txtTo->TabIndex = 15;
			this->txtTo->Text = L"To";
			// 
			// txtFrom
			// 
			this->txtFrom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFrom->Location = System::Drawing::Point(147, 147);
			this->txtFrom->Multiline = true;
			this->txtFrom->Name = L"txtFrom";
			this->txtFrom->Size = System::Drawing::Size(137, 40);
			this->txtFrom->TabIndex = 14;
			this->txtFrom->Text = L"From";
			// 
			// txtChild
			// 
			this->txtChild->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtChild->Location = System::Drawing::Point(433, 52);
			this->txtChild->Multiline = true;
			this->txtChild->Name = L"txtChild";
			this->txtChild->Size = System::Drawing::Size(137, 40);
			this->txtChild->TabIndex = 6;
			this->txtChild->Text = L"Child";
			this->txtChild->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtAdult
			// 
			this->txtAdult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAdult->Location = System::Drawing::Point(290, 52);
			this->txtAdult->Multiline = true;
			this->txtAdult->Name = L"txtAdult";
			this->txtAdult->Size = System::Drawing::Size(137, 40);
			this->txtAdult->TabIndex = 5;
			this->txtAdult->Text = L"Adult";
			this->txtAdult->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtTicket
			// 
			this->txtTicket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTicket->Location = System::Drawing::Point(147, 52);
			this->txtTicket->Multiline = true;
			this->txtTicket->Name = L"txtTicket";
			this->txtTicket->Size = System::Drawing::Size(137, 40);
			this->txtTicket->TabIndex = 4;
			this->txtTicket->Text = L"Ticket";
			this->txtTicket->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtClass
			// 
			this->txtClass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtClass->Location = System::Drawing::Point(6, 52);
			this->txtClass->Multiline = true;
			this->txtClass->Name = L"txtClass";
			this->txtClass->Size = System::Drawing::Size(137, 40);
			this->txtClass->TabIndex = 3;
			this->txtClass->Text = L"Class";
			this->txtClass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Black;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(6, 6);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(564, 40);
			this->textBox7->TabIndex = 2;
			this->textBox7->Text = L"Travelling Ticket";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->rtbReceipt);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(576, 491);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Receipt";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// rtbReceipt
			// 
			this->rtbReceipt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtbReceipt->Location = System::Drawing::Point(6, 6);
			this->rtbReceipt->Name = L"rtbReceipt";
			this->rtbReceipt->Size = System::Drawing::Size(564, 479);
			this->rtbReceipt->TabIndex = 0;
			this->rtbReceipt->Text = L"";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox4->Controls->Add(this->cmbDestination);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->rbChild);
			this->groupBox4->Controls->Add(this->rbAdult);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Location = System::Drawing::Point(218, 118);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(299, 253);
			this->groupBox4->TabIndex = 1;
			this->groupBox4->TabStop = false;
			// 
			// cmbDestination
			// 
			this->cmbDestination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbDestination->FormattingEnabled = true;
			this->cmbDestination->Location = System::Drawing::Point(54, 77);
			this->cmbDestination->Name = L"cmbDestination";
			this->cmbDestination->Size = System::Drawing::Size(152, 24);
			this->cmbDestination->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(37, 192);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 20);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Child";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(37, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Adult";
			// 
			// rbChild
			// 
			this->rbChild->AutoSize = true;
			this->rbChild->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbChild->Location = System::Drawing::Point(164, 190);
			this->rbChild->Name = L"rbChild";
			this->rbChild->Size = System::Drawing::Size(61, 24);
			this->rbChild->TabIndex = 6;
			this->rbChild->TabStop = true;
			this->rbChild->Text = L"Yes";
			this->rbChild->UseVisualStyleBackColor = true;
			// 
			// rbAdult
			// 
			this->rbAdult->AutoSize = true;
			this->rbAdult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbAdult->Location = System::Drawing::Point(164, 137);
			this->rbAdult->Name = L"rbAdult";
			this->rbAdult->Size = System::Drawing::Size(61, 24);
			this->rbAdult->TabIndex = 5;
			this->rbAdult->TabStop = true;
			this->rbAdult->Text = L"Yes";
			this->rbAdult->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(170, 32);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Destination";
			// 
			// btnCC
			// 
			this->btnCC->BackColor = System::Drawing::Color::Black;
			this->btnCC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCC->ForeColor = System::Drawing::Color::White;
			this->btnCC->Location = System::Drawing::Point(416, 20);
			this->btnCC->Name = L"btnCC";
			this->btnCC->Size = System::Drawing::Size(288, 266);
			this->btnCC->TabIndex = 33;
			this->btnCC->Text = L"Currency Converter";
			this->btnCC->UseVisualStyleBackColor = false;
			this->btnCC->Click += gcnew System::EventHandler(this, &Form1::btnCC_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox5->Controls->Add(this->rbReturn);
			this->groupBox5->Controls->Add(this->rbSingle);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Location = System::Drawing::Point(523, 118);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(200, 253);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			// 
			// rbReturn
			// 
			this->rbReturn->AutoSize = true;
			this->rbReturn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbReturn->Location = System::Drawing::Point(54, 149);
			this->rbReturn->Name = L"rbReturn";
			this->rbReturn->Size = System::Drawing::Size(86, 24);
			this->rbReturn->TabIndex = 4;
			this->rbReturn->TabStop = true;
			this->rbReturn->Text = L"Return";
			this->rbReturn->UseVisualStyleBackColor = true;
			// 
			// rbSingle
			// 
			this->rbSingle->AutoSize = true;
			this->rbSingle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbSingle->Location = System::Drawing::Point(54, 89);
			this->rbSingle->Name = L"rbSingle";
			this->rbSingle->Size = System::Drawing::Size(82, 24);
			this->rbSingle->TabIndex = 3;
			this->rbSingle->TabStop = true;
			this->rbSingle->Text = L"Single";
			this->rbSingle->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(22, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(172, 32);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Ticket Type";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox6->Controls->Add(this->lblTotal);
			this->groupBox6->Controls->Add(this->lblTax);
			this->groupBox6->Controls->Add(this->lblSubTotal);
			this->groupBox6->Controls->Add(this->btnCC);
			this->groupBox6->Controls->Add(this->btnConvert);
			this->groupBox6->Controls->Add(this->lblCC);
			this->groupBox6->Controls->Add(this->btnClose);
			this->groupBox6->Controls->Add(this->btnReset);
			this->groupBox6->Controls->Add(this->cmbCC);
			this->groupBox6->Controls->Add(this->txtCC);
			this->groupBox6->Controls->Add(this->textBox3);
			this->groupBox6->Controls->Add(this->textBox2);
			this->groupBox6->Controls->Add(this->textBox1);
			this->groupBox6->Controls->Add(this->checkBox1);
			this->groupBox6->Location = System::Drawing::Point(13, 377);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(711, 294);
			this->groupBox6->TabIndex = 1;
			this->groupBox6->TabStop = false;
			// 
			// lblTotal
			// 
			this->lblTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotal->Location = System::Drawing::Point(176, 192);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(224, 40);
			this->lblTotal->TabIndex = 40;
			// 
			// lblTax
			// 
			this->lblTax->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblTax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTax->Location = System::Drawing::Point(176, 146);
			this->lblTax->Name = L"lblTax";
			this->lblTax->Size = System::Drawing::Size(224, 40);
			this->lblTax->TabIndex = 39;
			// 
			// lblSubTotal
			// 
			this->lblSubTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblSubTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSubTotal->Location = System::Drawing::Point(176, 99);
			this->lblSubTotal->Name = L"lblSubTotal";
			this->lblSubTotal->Size = System::Drawing::Size(224, 40);
			this->lblSubTotal->TabIndex = 38;
			// 
			// btnConvert
			// 
			this->btnConvert->BackColor = System::Drawing::Color::Black;
			this->btnConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConvert->ForeColor = System::Drawing::Color::White;
			this->btnConvert->Location = System::Drawing::Point(417, 213);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(88, 40);
			this->btnConvert->TabIndex = 37;
			this->btnConvert->Text = L"Convert";
			this->btnConvert->UseVisualStyleBackColor = false;
			this->btnConvert->Click += gcnew System::EventHandler(this, &Form1::btnConvert_Click);
			// 
			// lblCC
			// 
			this->lblCC->BackColor = System::Drawing::SystemColors::Window;
			this->lblCC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblCC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCC->Location = System::Drawing::Point(449, 156);
			this->lblCC->Name = L"lblCC";
			this->lblCC->Size = System::Drawing::Size(224, 40);
			this->lblCC->TabIndex = 36;
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::Black;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::Color::White;
			this->btnClose->Location = System::Drawing::Point(609, 213);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(82, 40);
			this->btnClose->TabIndex = 35;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::Black;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->ForeColor = System::Drawing::Color::White;
			this->btnReset->Location = System::Drawing::Point(511, 213);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(88, 40);
			this->btnReset->TabIndex = 34;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// cmbCC
			// 
			this->cmbCC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbCC->FormattingEnabled = true;
			this->cmbCC->Location = System::Drawing::Point(449, 63);
			this->cmbCC->Name = L"cmbCC";
			this->cmbCC->Size = System::Drawing::Size(152, 24);
			this->cmbCC->TabIndex = 10;
			// 
			// txtCC
			// 
			this->txtCC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCC->Location = System::Drawing::Point(449, 107);
			this->txtCC->Multiline = true;
			this->txtCC->Name = L"txtCC";
			this->txtCC->Size = System::Drawing::Size(224, 40);
			this->txtCC->TabIndex = 7;
			this->txtCC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(28, 192);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(142, 40);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"Total";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(28, 146);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(142, 40);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Tax";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(28, 100);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 40);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Sub Total";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(28, 21);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(169, 29);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Other Options";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Form1::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			//this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1350, 683);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		double Euro;
		double British_Pound;
		double US_Dollar;
		double Canadian_Dollar;
		double Indian_Ruppe;
		double Philippine_Peso;
		double Japan_JPY;
		double Brazilian_Real;
	
		// currency converter
		private: System::Void btnCC_Click(System::Object^ sender, System::EventArgs^ e) {
			btnCC->Visible = false;
		}

		// button close
		private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
			btnCC->Visible = true;
			cmbCC->Text = "Choose ONE...";
			txtCC->Text = " ";
			lblCC->Text = " ";
		}

		// Form1 initialization
		private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		
			// get the date
			DateTime iDate = DateTime::Now;
			lblDate->Text = iDate.ToShortDateString();
		}

		// timer1
		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		
			// get the time
			DateTime iTime = DateTime::Now;
			lblTime->Text = iTime.ToLongTimeString();
		}
	
		// button reset
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			cmbCC->Text = "Choose One...";
			txtCC->Text = " ";
			lblCC->Text = " ";
		}
		
		// button convert
		private: System::Void btnConvert_Click(System::Object^ sender, System::EventArgs^ e) {
			Euro = 0.13;
			British_Pound = 0.11;
			US_Dollar = 0.16;
			Canadian_Dollar = 0.19;
			Indian_Ruppe = 11.34;
			Philippine_Peso = 7.43;
			Japan_JPY = 17;
			Brazilian_Real = 0.78;

			double China_Yuan = Convert::ToInt32(txtCC->Text);

			if (cmbCC->Text == "Japan") {
				lblCC->Text = "N " + System::Convert::ToString(China_Yuan * Japan_JPY);
			}
			if (cmbCC->Text == "USA") {
				lblCC->Text = "$ " + System::Convert::ToString(China_Yuan * US_Dollar);
			}
			if (cmbCC->Text == "Canada") {
				lblCC->Text = "C$ " + System::Convert::ToString(China_Yuan * Canadian_Dollar);
			}
			if (cmbCC->Text == "England") {
				lblCC->Text = "Pound " + System::Convert::ToString(China_Yuan * British_Pound);
			}
			if (cmbCC->Text == "Philippine") {
				lblCC->Text = "Peso " + System::Convert::ToString(China_Yuan * Philippine_Peso);
			}
			if (cmbCC->Text == "Euro") {
				lblCC->Text = "€ " + System::Convert::ToString(China_Yuan * Euro);
			}
			if (cmbCC->Text == "Indian") {
				lblCC->Text = "Ruppe " + System::Convert::ToString(China_Yuan * Indian_Ruppe);
			}
			if (cmbCC->Text == "Brazil") {
				lblCC->Text = "Real " + System::Convert::ToString(China_Yuan * Brazilian_Real);
			}
		}

		// button total
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			// cost with destination
			const double Chengdu_std = 123.9;
			const double Chengdu_eco = 133.9;
			const double Chengdu_pro = 143.9;
			const double Chongqing_std = 128.9;
			const double Chongqing_eco = 138.9;
			const double Chongqing_pro = 148.9;
			const double Xian_std = 172.33;
			const double Xian_eco = 182.33;
			const double Xian_pro = 192.33;
			const double Beijing_std = 358.9;
			const double Beijing_eco = 378.9;
			const double Beijing_pro = 398.9;
			const double Shanghai_std = 162;
			const double Shanghai_eco = 172;
			const double Shanghai_pro = 182;

			const double Tax = 19.75;

			double travelCost;
			double taxCost;

			Boolean singleTrip = true;
			
			// Class
			if (rbStd->Checked) {
				lblClass->Text = "Standard";
			}
			else if (rbEco->Checked) {
				lblClass->Text = "Echonomy";
			}
			else if (rbPro->Checked) {
				lblClass->Text = "First Class";
			}
			else {
				lblClass->Text = "Error!";
			}

			// Ticket
			if (rbSingle->Checked) {
				lblTicket->Text = "Single";
			}
			else if (rbReturn->Checked) {
				lblTicket->Text = "Return";
				singleTrip = false;
			}
			else {
				lblTicket->Text = "Error";
			}

			// Adult & Child
			if (rbChild->Checked) {
				lblChild->Text = "YES";
				lblAdult->Text = " ";
			}
			else {
				lblAdult->Text = "YES";
				lblChild->Text = " ";
			}

			// Chengdu
			if (cmbDestination->Text == "Chengdu") {
				if (singleTrip) {
					if (rbStd->Checked) {
						travelCost = Chengdu_std;
						lblSubTotal->Text = String::Format("{0:C2}", (Chengdu_std));
						taxCost = (Chengdu_std * Tax) / 100;
					}
					else if (rbEco->Checked) {
						travelCost = Chengdu_eco;
						lblSubTotal->Text = String::Format("{0:C2}", (Chengdu_eco));
						taxCost = (Chengdu_eco * Tax) / 100;
					}
					else if (rbPro->Checked) {
						travelCost = Chengdu_pro;
						lblSubTotal->Text = String::Format("{0:C2}", (Chengdu_pro));
						taxCost = (Chengdu_pro * Tax) / 100;
					}
				}

				else if (singleTrip == false) {
					
					if (rbStd->Checked) {
						travelCost = 2 * Chengdu_std;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Chengdu_std * Tax) / 100;
					}
					else if (rbEco->Checked) {
						travelCost = 2 * Chengdu_eco;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Chengdu_pro * Tax) / 100;
					}
					else if (rbPro->Checked) {
						travelCost = 2 * Chengdu_pro;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Chengdu_std * Tax) / 100;
					}
				}	
				else {
						lblSubTotal->Text = "Information Error!";
						lblTax->Text = " ";
						lblTotal->Text = " ";
					}
			
				
				lblTax->Text = String::Format("{0:C2}", (taxCost));
				lblTotal->Text = String::Format("{0:C2}", (travelCost + taxCost));
				lblRoute->Text = "YA-CD";
			}


			// Chongqing
			if (cmbDestination->Text == "Chongqing") {
				if (singleTrip) {
					if (rbStd->Checked) {
						travelCost = Chongqing_std;
						lblSubTotal->Text = String::Format("{0:C2}", (Chongqing_std));
						taxCost = (Chongqing_std * Tax) / 100;
					}
					else if (rbEco->Checked) {
						travelCost = Chongqing_eco;
						lblSubTotal->Text = String::Format("{0:C2}", (Chongqing_eco));
						taxCost = (Chongqing_eco * Tax) / 100;
					}
					else if (rbPro->Checked) {
						travelCost = Chongqing_pro;
						lblSubTotal->Text = String::Format("{0:C2}", (Chongqing_pro));
						taxCost = (Chongqing_pro * Tax) / 100;
					}
				}

				else if (singleTrip == false) {

					if (rbStd->Checked) {
						travelCost = 2 * Chongqing_std;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Chongqing_std * Tax) / 100;
					}
					else if (rbEco->Checked) {
						travelCost = 2 * Chongqing_eco;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Chongqing_eco * Tax) / 100;
					}
					else if (rbPro->Checked) {
						travelCost = 2 * Chongqing_pro;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Chongqing_pro * Tax) / 100;
					}
				}
				else {
					lblSubTotal->Text = "Information Error!";
					lblTax->Text = " ";
					lblTotal->Text = " ";
				}


				lblTax->Text = String::Format("{0:C2}", (taxCost));
				lblTotal->Text = String::Format("{0:C2}", (travelCost + taxCost));
				lblRoute->Text = "YA-CQ";
			}


			// Beijing
			if (cmbDestination->Text == "Beijing") {
				if (singleTrip) {
					if (rbStd->Checked) {
						travelCost = Beijing_std;
						lblSubTotal->Text = String::Format("{0:C2}", (Beijing_std));
						taxCost = (Beijing_std * Tax) / 100;
					}
					else if (rbEco->Checked) {
						travelCost = Beijing_eco;
						lblSubTotal->Text = String::Format("{0:C2}", (Beijing_eco));
						taxCost = (Beijing_eco * Tax) / 100;
					}
					else if (rbPro->Checked) {
						travelCost = Beijing_pro;
						lblSubTotal->Text = String::Format("{0:C2}", (Beijing_pro));
						taxCost = (Beijing_pro * Tax) / 100;
					}
				}

				else if (singleTrip == false) {
					if (rbStd->Checked) {
						travelCost = 2 * Beijing_std;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Beijing_std * Tax) / 100;
					}
					else if (rbEco->Checked) {
						travelCost = 2 * Beijing_eco;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Beijing_pro * Tax) / 100;
					}
					else if (rbPro->Checked) {
						travelCost = 2 * Beijing_pro;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Beijing_std * Tax) / 100;
					}
				}
				else {
					lblSubTotal->Text = "Information Error!";
					lblTax->Text = " ";
					lblTotal->Text = " ";
				}


				lblTax->Text = String::Format("{0:C2}", (taxCost));
				lblTotal->Text = String::Format("{0:C2}", (travelCost + taxCost));
				lblRoute->Text = "YA-BJ";
			}

			
			// Shanghai
			if (cmbDestination->Text == "Shanghai") {
				if (singleTrip) {
					if (rbStd->Checked) {
						travelCost = Shanghai_std;
						lblSubTotal->Text = String::Format("{0:C2}", (Shanghai_std));
						taxCost = (Shanghai_std * Tax) / 100;
					}
					else if (rbEco->Checked) {
						travelCost = Shanghai_eco;
						lblSubTotal->Text = String::Format("{0:C2}", (Shanghai_eco));
						taxCost = (Shanghai_eco * Tax) / 100;
					}
					else if (rbPro->Checked) {
						travelCost = Shanghai_pro;
						lblSubTotal->Text = String::Format("{0:C2}", (Shanghai_pro));
						taxCost = (Shanghai_std * Tax) / 100;
					}
				}

				else if (singleTrip == false) {

					if (rbStd->Checked) {
						travelCost = 2 * Shanghai_std;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Shanghai_std * Tax) / 100;
					}
					else if (rbEco->Checked) {
						travelCost = 2 * Shanghai_eco;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Shanghai_eco * Tax) / 100;
					}
					else if (rbPro->Checked) {
						travelCost = 2 * Shanghai_pro;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Shanghai_std * Tax) / 100;
					}
				}
				else {
					lblSubTotal->Text = "Information Error!";
					lblTax->Text = " ";
					lblTotal->Text = " ";
				}


				lblTax->Text = String::Format("{0:C2}", (taxCost));
				lblTotal->Text = String::Format("{0:C2}", (travelCost + taxCost));
				lblRoute->Text = "YA-SH";
			}


			// Xian
			if (cmbDestination->Text == "Xi'an") {
				if (singleTrip) {
					if (rbStd->Checked) {
						travelCost = Xian_std;
						lblSubTotal->Text = String::Format("{0:C2}", (Xian_std));
						taxCost = (Xian_std * Tax) / 100;
					}
					else if (rbEco->Checked) {
						travelCost = Xian_eco;
						lblSubTotal->Text = String::Format("{0:C2}", (Xian_eco));
						taxCost = (Xian_eco * Tax) / 100;
					}
					else if (rbPro->Checked) {
						travelCost = Xian_pro;
						lblSubTotal->Text = String::Format("{0:C2}", (Xian_pro));
						taxCost = (Xian_std * Tax) / 100;
					}
				}

				else if (singleTrip == false) {

					if (rbStd->Checked) {
						travelCost = 2 * Xian_std;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Xian_std * Tax) / 100;
					}
					else if (rbEco->Checked) {
						travelCost = 2 * Xian_eco;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Xian_eco * Tax) / 100;
					}
					else if (rbPro->Checked) {
						travelCost = 2 * Xian_pro;
						lblSubTotal->Text = String::Format("{0:C2}", (travelCost));
						taxCost = (2 * Xian_std * Tax) / 100;
					}
				}
				else {
					lblSubTotal->Text = "Information Error!";
					lblTax->Text = " ";
					lblTotal->Text = " ";
				}


				lblTax->Text = String::Format("{0:C2}", (taxCost));
				lblTotal->Text = String::Format("{0:C2}", (travelCost + taxCost));
				lblRoute->Text = "YA-XA";
			}


			// From
			lblFrom->Text = "Ya'an";

			// To
			lblTo->Text = cmbDestination->Text;

			// Price
			lblPrice->Text = lblTotal->Text;

			// Ref. No
			Random^ random_1 = gcnew Random;
			int iRand = random_1->Next(20317, 45990);
			lblRef->Text = Convert::ToString(iRand);


			// Receipt
			rtbReceipt->AppendText("\t\t\t" + "Travelling Ticket\n");
			rtbReceipt->AppendText("==============================================\n");

			rtbReceipt->AppendText(txtClass->Text + "\t\t" + txtTicket->Text + "\t\t" + txtAdult->Text + "\t\t" + txtChild->Text + "\n");
			rtbReceipt->AppendText(lblClass->Text + "\t" + lblTicket->Text + "\t\t" + lblAdult->Text + "\t" + lblChild->Text + "\n");

			rtbReceipt->AppendText("==============================================\n");
			rtbReceipt->AppendText("\t\t" + txtFrom->Text + "\t\t\t" + lblFrom->Text + "\n");
			rtbReceipt->AppendText("\t\t" + txtTo->Text + "\t\t\t" + lblTo->Text + "\n");
			rtbReceipt->AppendText("\t\t" + txtPrice->Text + "\t\t\t" + lblPrice->Text + "\n");

			rtbReceipt->AppendText("==============================================\n");
			rtbReceipt->AppendText(txtRef->Text + "\t\t" + txtTime->Text + "\t\t" + txtDate->Text + "\t\t" + txtRoute->Text + "\n");
			rtbReceipt->AppendText(lblRef->Text + "\t\t\t" + lblTime->Text + "\t" + lblDate->Text + "\t" + lblRoute->Text + "\n");
		}

			   

		// Exit
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}

		// Print
		private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
			String^ drawString = rtbReceipt->Text;
			System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arila", 20);
			SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
			PointF drawPoint = PointF(150.0F, 150.0F);
			e->Graphics->DrawString(drawString, drawFont, drawBrush, drawPoint);
		}

		
		private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
			printPreviewDialog1->Document = printDocument1;
			printPreviewDialog1->ShowDialog();
		}
		
		private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
			lblRef->Text = " ";
			lblPrice->Text = " ";
			lblCC->Text = " ";
			lblAdult->Text = " ";
			lblChild->Text = " ";
			lblClass->Text = " ";
			lblFrom->Text = " ";
			lblTo->Text = " ";
			lblTotal->Text = " ";
			lblRoute->Text = " ";
			lblSubTotal->Text = " ";
			lblTax->Text = " ";
			lblTicket->Text = " ";
		}
};
}

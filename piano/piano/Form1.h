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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(22, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 487);
			this->button1->TabIndex = 0;
			this->button1->Text = L"C";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(252, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 487);
			this->button2->TabIndex = 1;
			this->button2->Text = L"E";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(137, 29);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 487);
			this->button3->TabIndex = 2;
			this->button3->Text = L"D";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(367, 29);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 487);
			this->button4->TabIndex = 3;
			this->button4->Text = L"F";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(482, 29);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(109, 487);
			this->button5->TabIndex = 4;
			this->button5->Text = L"G";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(597, 29);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(109, 487);
			this->button6->TabIndex = 5;
			this->button6->Text = L"A";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(712, 29);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(109, 487);
			this->button7->TabIndex = 6;
			this->button7->Text = L"B";
			this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(827, 29);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(109, 487);
			this->button8->TabIndex = 7;
			this->button8->Text = L"C1";
			this->button8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(942, 29);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(109, 487);
			this->button9->TabIndex = 8;
			this->button9->Text = L"D1";
			this->button9->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(1057, 29);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(109, 487);
			this->button10->TabIndex = 9;
			this->button10->Text = L"E1";
			this->button10->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(1172, 29);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(109, 487);
			this->button11->TabIndex = 10;
			this->button11->Text = L"F1";
			this->button11->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Black;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(89, 29);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(91, 299);
			this->button12->TabIndex = 11;
			this->button12->Text = L"C#";
			this->button12->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Black;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(209, 29);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(91, 299);
			this->button13->TabIndex = 12;
			this->button13->Text = L"D#";
			this->button13->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Black;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(437, 29);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(91, 299);
			this->button14->TabIndex = 13;
			this->button14->Text = L"F#";
			this->button14->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Black;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(553, 29);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(91, 299);
			this->button15->TabIndex = 14;
			this->button15->Text = L"G#";
			this->button15->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Black;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(668, 29);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(91, 299);
			this->button16->TabIndex = 15;
			this->button16->Text = L"Bb";
			this->button16->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Black;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(897, 29);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(91, 299);
			this->button17->TabIndex = 16;
			this->button17->Text = L"C#1";
			this->button17->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Black;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(1014, 29);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(91, 299);
			this->button18->TabIndex = 17;
			this->button18->Text = L"D#1";
			this->button18->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1300, 528);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C.wav");
		player->Load();
		player->PlaySync();
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C#.wav");
		player->Load();
		player->PlaySync();
	}
		
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("D.wav");
		player->Load();
		player->PlaySync();
	}
	
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("D#.wav");
		player->Load();
		player->PlaySync();
	}
	
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("E.wav");
		player->Load();
		player->PlaySync();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("F.wav");
		player->Load();
		player->PlaySync();
	}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("F#.wav");
		player->Load();
		player->PlaySync();
	}
	
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("G.wav");
		player->Load();
		player->PlaySync();
	}

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("G#.wav");
		player->Load();
		player->PlaySync();
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("A.wav");
		player->Load();
		player->PlaySync();
	}

	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("Bb.wav");
		player->Load();
		player->PlaySync();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("B.wav");
		player->Load();
		player->PlaySync();
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C1.wav");
		player->Load();
		player->PlaySync();
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C#1.wav");
		player->Load();
		player->PlaySync();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("D1.wav");
		player->Load();
		player->PlaySync();
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("D#1.wav");
		player->Load();
		player->PlaySync();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("E1.wav");
		player->Load();
		player->PlaySync();
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("F1.wav");
		player->Load();
		player->PlaySync();
	}
};
}

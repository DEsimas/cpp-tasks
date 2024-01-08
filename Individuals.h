#pragma once
namespace L8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace std;

	/// <summary>
	/// Summary for Individuals
	/// </summary>
	public ref class Individuals : public System::Windows::Forms::Form
	{
	public:
		Individuals(void)
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
		~Individuals()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl;
	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;


	private: System::Windows::Forms::TextBox^ inputFirstTB1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ startBtn1;
	private: System::Windows::Forms::TextBox^ matrixTB2;




	private: System::Windows::Forms::Button^ startBtn4;

	private: System::Windows::Forms::TextBox^ TB4;

	private: System::Windows::Forms::Button^ startBtn3;

	private: System::Windows::Forms::TextBox^ NTB3;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TB3;


	private: System::Windows::Forms::TextBox^ maxTB1;
	private: System::Windows::Forms::TextBox^ lenTB1;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ minTB1;
	private: System::Windows::Forms::Button^ generateFirstBtn1;
	private: System::Windows::Forms::Button^ genSecondBtn1;
	private: System::Windows::Forms::Button^ fileFirstBtn1;
	private: System::Windows::Forms::Button^ fileSecondBtn1;

	private: System::Windows::Forms::TextBox^ inputSecondTB1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ fileBtn4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ minTB2;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ yTB2;

	private: System::Windows::Forms::TextBox^ xTB2;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ maxTB2;
	private: System::Windows::Forms::Button^ startBtn2;
	private: System::Windows::Forms::Button^ loadBtn2;
	private: System::Windows::Forms::Button^ generateBTN2;










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->fileSecondBtn1 = (gcnew System::Windows::Forms::Button());
			this->inputSecondTB1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->fileFirstBtn1 = (gcnew System::Windows::Forms::Button());
			this->genSecondBtn1 = (gcnew System::Windows::Forms::Button());
			this->generateFirstBtn1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->minTB1 = (gcnew System::Windows::Forms::TextBox());
			this->maxTB1 = (gcnew System::Windows::Forms::TextBox());
			this->lenTB1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->startBtn1 = (gcnew System::Windows::Forms::Button());
			this->inputFirstTB1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->startBtn2 = (gcnew System::Windows::Forms::Button());
			this->loadBtn2 = (gcnew System::Windows::Forms::Button());
			this->generateBTN2 = (gcnew System::Windows::Forms::Button());
			this->maxTB2 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->minTB2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->yTB2 = (gcnew System::Windows::Forms::TextBox());
			this->xTB2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->matrixTB2 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TB3 = (gcnew System::Windows::Forms::TextBox());
			this->startBtn3 = (gcnew System::Windows::Forms::Button());
			this->NTB3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->fileBtn4 = (gcnew System::Windows::Forms::Button());
			this->startBtn4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TB4 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl
			// 
			this->tabControl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl->Controls->Add(this->tabPage1);
			this->tabControl->Controls->Add(this->tabPage2);
			this->tabControl->Controls->Add(this->tabPage3);
			this->tabControl->Controls->Add(this->tabPage4);
			this->tabControl->Location = System::Drawing::Point(19, 17);
			this->tabControl->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(1017, 694);
			this->tabControl->TabIndex = 0;
			this->tabControl->SelectedIndexChanged += gcnew System::EventHandler(this, &Individuals::tabControl_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->fileSecondBtn1);
			this->tabPage1->Controls->Add(this->inputSecondTB1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->fileFirstBtn1);
			this->tabPage1->Controls->Add(this->genSecondBtn1);
			this->tabPage1->Controls->Add(this->generateFirstBtn1);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->minTB1);
			this->tabPage1->Controls->Add(this->maxTB1);
			this->tabPage1->Controls->Add(this->lenTB1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->startBtn1);
			this->tabPage1->Controls->Add(this->inputFirstTB1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 38);
			this->tabPage1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabPage1->Size = System::Drawing::Size(1009, 652);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Одномерные массивы";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// fileSecondBtn1
			// 
			this->fileSecondBtn1->Location = System::Drawing::Point(777, 439);
			this->fileSecondBtn1->Name = L"fileSecondBtn1";
			this->fileSecondBtn1->Size = System::Drawing::Size(223, 73);
			this->fileSecondBtn1->TabIndex = 17;
			this->fileSecondBtn1->Text = L"Ввод из файла";
			this->fileSecondBtn1->UseVisualStyleBackColor = true;
			this->fileSecondBtn1->Click += gcnew System::EventHandler(this, &Individuals::fileBtn1_Click);
			// 
			// inputSecondTB1
			// 
			this->inputSecondTB1->Location = System::Drawing::Point(9, 458);
			this->inputSecondTB1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->inputSecondTB1->Name = L"inputSecondTB1";
			this->inputSecondTB1->Size = System::Drawing::Size(760, 35);
			this->inputSecondTB1->TabIndex = 16;
			this->inputSecondTB1->Validated += gcnew System::EventHandler(this, &Individuals::originalArrayTBAutocorrect);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 425);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 29);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Второй массив:";
			// 
			// fileFirstBtn1
			// 
			this->fileFirstBtn1->Location = System::Drawing::Point(778, 340);
			this->fileFirstBtn1->Name = L"fileFirstBtn1";
			this->fileFirstBtn1->Size = System::Drawing::Size(223, 73);
			this->fileFirstBtn1->TabIndex = 14;
			this->fileFirstBtn1->Text = L"Ввод из файла";
			this->fileFirstBtn1->UseVisualStyleBackColor = true;
			this->fileFirstBtn1->Click += gcnew System::EventHandler(this, &Individuals::fileBtn1_Click);
			// 
			// genSecondBtn1
			// 
			this->genSecondBtn1->Location = System::Drawing::Point(778, 214);
			this->genSecondBtn1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->genSecondBtn1->Name = L"genSecondBtn1";
			this->genSecondBtn1->Size = System::Drawing::Size(221, 91);
			this->genSecondBtn1->TabIndex = 13;
			this->genSecondBtn1->Text = L"Генерация второго массива";
			this->genSecondBtn1->UseVisualStyleBackColor = true;
			this->genSecondBtn1->Click += gcnew System::EventHandler(this, &Individuals::generateSecondBtn1_Click);
			// 
			// generateFirstBtn1
			// 
			this->generateFirstBtn1->Location = System::Drawing::Point(778, 115);
			this->generateFirstBtn1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->generateFirstBtn1->Name = L"generateFirstBtn1";
			this->generateFirstBtn1->Size = System::Drawing::Size(221, 91);
			this->generateFirstBtn1->TabIndex = 12;
			this->generateFirstBtn1->Text = L"Генерация первого массива";
			this->generateFirstBtn1->UseVisualStyleBackColor = true;
			this->generateFirstBtn1->Click += gcnew System::EventHandler(this, &Individuals::generateFirstBtn1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 273);
			this->label7->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(443, 29);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Максимальное значение диапазона:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 195);
			this->label6->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(436, 29);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Минимальное значение диапазона:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 118);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(394, 29);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Количество элементов массива:";
			// 
			// minTB1
			// 
			this->minTB1->Location = System::Drawing::Point(506, 192);
			this->minTB1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->minTB1->Name = L"minTB1";
			this->minTB1->Size = System::Drawing::Size(153, 35);
			this->minTB1->TabIndex = 8;
			this->minTB1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->minTB1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Individuals::intTB);
			this->minTB1->Validated += gcnew System::EventHandler(this, &Individuals::intTBAutocorrect);
			// 
			// maxTB1
			// 
			this->maxTB1->Location = System::Drawing::Point(506, 270);
			this->maxTB1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->maxTB1->Name = L"maxTB1";
			this->maxTB1->Size = System::Drawing::Size(153, 35);
			this->maxTB1->TabIndex = 7;
			this->maxTB1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->maxTB1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Individuals::intTB);
			this->maxTB1->Validated += gcnew System::EventHandler(this, &Individuals::intTBAutocorrect);
			// 
			// lenTB1
			// 
			this->lenTB1->Location = System::Drawing::Point(506, 115);
			this->lenTB1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->lenTB1->Name = L"lenTB1";
			this->lenTB1->Size = System::Drawing::Size(153, 35);
			this->lenTB1->TabIndex = 6;
			this->lenTB1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->lenTB1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Individuals::unsignedIntTB);
			this->lenTB1->Validated += gcnew System::EventHandler(this, &Individuals::unsignedIntTBAutocorrect);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->Location = System::Drawing::Point(9, 4);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(994, 90);
			this->label4->TabIndex = 5;
			this->label4->Text = L"48. Даны две последовательности а1, а2, an и b1, b2, bm (m < n). В каждой из них "
				L"члены различны. Верно, ли что все члены второй последовательности входят в перву"
				L"ю последовательность\?";
			// 
			// startBtn1
			// 
			this->startBtn1->Location = System::Drawing::Point(242, 519);
			this->startBtn1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->startBtn1->Name = L"startBtn1";
			this->startBtn1->Size = System::Drawing::Size(540, 115);
			this->startBtn1->TabIndex = 4;
			this->startBtn1->Text = L"Проверить вхождение всех членов второй последовательности в первую";
			this->startBtn1->UseVisualStyleBackColor = true;
			this->startBtn1->Click += gcnew System::EventHandler(this, &Individuals::startBtn1_Click);
			// 
			// inputFirstTB1
			// 
			this->inputFirstTB1->Location = System::Drawing::Point(10, 359);
			this->inputFirstTB1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->inputFirstTB1->Name = L"inputFirstTB1";
			this->inputFirstTB1->Size = System::Drawing::Size(760, 35);
			this->inputFirstTB1->TabIndex = 1;
			this->inputFirstTB1->Validated += gcnew System::EventHandler(this, &Individuals::originalArrayTBAutocorrect);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 326);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Первый массив:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->panel2);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->matrixTB2);
			this->tabPage2->Location = System::Drawing::Point(4, 38);
			this->tabPage2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabPage2->Size = System::Drawing::Size(1009, 652);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Двумерные массивы";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel2->Controls->Add(this->startBtn2);
			this->panel2->Controls->Add(this->loadBtn2);
			this->panel2->Controls->Add(this->generateBTN2);
			this->panel2->Controls->Add(this->maxTB2);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->minTB2);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->yTB2);
			this->panel2->Controls->Add(this->xTB2);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Location = System::Drawing::Point(8, 111);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(341, 533);
			this->panel2->TabIndex = 8;
			// 
			// startBtn2
			// 
			this->startBtn2->Location = System::Drawing::Point(8, 456);
			this->startBtn2->Name = L"startBtn2";
			this->startBtn2->Size = System::Drawing::Size(330, 47);
			this->startBtn2->TabIndex = 10;
			this->startBtn2->Text = L"Модифицировать матрицу";
			this->startBtn2->UseVisualStyleBackColor = true;
			this->startBtn2->Click += gcnew System::EventHandler(this, &Individuals::startBtn2_Click);
			// 
			// loadBtn2
			// 
			this->loadBtn2->Location = System::Drawing::Point(8, 403);
			this->loadBtn2->Name = L"loadBtn2";
			this->loadBtn2->Size = System::Drawing::Size(330, 47);
			this->loadBtn2->TabIndex = 9;
			this->loadBtn2->Text = L"Ввести матрицу из файла";
			this->loadBtn2->UseVisualStyleBackColor = true;
			this->loadBtn2->Click += gcnew System::EventHandler(this, &Individuals::loadBtn2_Click);
			// 
			// generateBTN2
			// 
			this->generateBTN2->Location = System::Drawing::Point(8, 350);
			this->generateBTN2->Name = L"generateBTN2";
			this->generateBTN2->Size = System::Drawing::Size(330, 47);
			this->generateBTN2->TabIndex = 8;
			this->generateBTN2->Text = L"Сгенерировать матрицу";
			this->generateBTN2->UseVisualStyleBackColor = true;
			this->generateBTN2->Click += gcnew System::EventHandler(this, &Individuals::generateBTN2_Click);
			// 
			// maxTB2
			// 
			this->maxTB2->Location = System::Drawing::Point(8, 289);
			this->maxTB2->Name = L"maxTB2";
			this->maxTB2->Size = System::Drawing::Size(330, 35);
			this->maxTB2->TabIndex = 7;
			this->maxTB2->TextChanged += gcnew System::EventHandler(this, &Individuals::matrixSettings_TextChanged);
			this->maxTB2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Individuals::intTB);
			this->maxTB2->Validated += gcnew System::EventHandler(this, &Individuals::intTBAutocorrect);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 257);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(312, 29);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Максимальное значение:";
			// 
			// minTB2
			// 
			this->minTB2->Location = System::Drawing::Point(8, 207);
			this->minTB2->Name = L"minTB2";
			this->minTB2->Size = System::Drawing::Size(330, 35);
			this->minTB2->TabIndex = 5;
			this->minTB2->TextChanged += gcnew System::EventHandler(this, &Individuals::matrixSettings_TextChanged);
			this->minTB2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Individuals::intTB);
			this->minTB2->Validated += gcnew System::EventHandler(this, &Individuals::intTBAutocorrect);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(3, 175);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(305, 29);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Минимальное значение:";
			// 
			// yTB2
			// 
			this->yTB2->Location = System::Drawing::Point(8, 123);
			this->yTB2->Name = L"yTB2";
			this->yTB2->Size = System::Drawing::Size(330, 35);
			this->yTB2->TabIndex = 3;
			this->yTB2->TextChanged += gcnew System::EventHandler(this, &Individuals::matrixSettings_TextChanged);
			this->yTB2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Individuals::unsignedIntTB);
			this->yTB2->Validated += gcnew System::EventHandler(this, &Individuals::unsignedIntTBAutocorrect);
			// 
			// xTB2
			// 
			this->xTB2->Location = System::Drawing::Point(8, 35);
			this->xTB2->Name = L"xTB2";
			this->xTB2->Size = System::Drawing::Size(330, 35);
			this->xTB2->TabIndex = 2;
			this->xTB2->TextChanged += gcnew System::EventHandler(this, &Individuals::matrixSettings_TextChanged);
			this->xTB2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Individuals::unsignedIntTB);
			this->xTB2->Validated += gcnew System::EventHandler(this, &Individuals::unsignedIntTBAutocorrect);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 91);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(228, 29);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Количество строк:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 3);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(273, 29);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Количество столбцов:";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->Location = System::Drawing::Point(5, 4);
			this->label10->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(994, 103);
			this->label10->TabIndex = 7;
			this->label10->Text = L"108. Дана матрица B[N, М]. Найти B каждой строке матрицы максимальный и минимальн"
				L"ый элементы и поменять их с первым и последним элементом строки соответственно.\r"
				L"\n";
			// 
			// matrixTB2
			// 
			this->matrixTB2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->matrixTB2->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->matrixTB2->Location = System::Drawing::Point(357, 111);
			this->matrixTB2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->matrixTB2->Multiline = true;
			this->matrixTB2->Name = L"matrixTB2";
			this->matrixTB2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->matrixTB2->Size = System::Drawing::Size(647, 533);
			this->matrixTB2->TabIndex = 0;
			this->matrixTB2->WordWrap = false;
			this->matrixTB2->Validated += gcnew System::EventHandler(this, &Individuals::matrixTBAutocorrect);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->TB3);
			this->tabPage3->Controls->Add(this->startBtn3);
			this->tabPage3->Controls->Add(this->NTB3);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Location = System::Drawing::Point(4, 38);
			this->tabPage3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1009, 652);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Подпрограммы";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->Location = System::Drawing::Point(5, 12);
			this->label8->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(994, 69);
			this->label8->TabIndex = 6;
			this->label8->Text = L"154. Сформировать массив Х(n), п-й член которого определяется формулой Х(n) = 1/n"
				L"!";
			// 
			// TB3
			// 
			this->TB3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TB3->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB3->Location = System::Drawing::Point(5, 148);
			this->TB3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->TB3->Multiline = true;
			this->TB3->Name = L"TB3";
			this->TB3->ReadOnly = true;
			this->TB3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TB3->Size = System::Drawing::Size(999, 709);
			this->TB3->TabIndex = 3;
			this->TB3->WordWrap = false;
			// 
			// startBtn3
			// 
			this->startBtn3->Location = System::Drawing::Point(423, 83);
			this->startBtn3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->startBtn3->Name = L"startBtn3";
			this->startBtn3->Size = System::Drawing::Size(178, 57);
			this->startBtn3->TabIndex = 2;
			this->startBtn3->Text = L"Выполнить";
			this->startBtn3->UseVisualStyleBackColor = true;
			this->startBtn3->Click += gcnew System::EventHandler(this, &Individuals::start3Btn_Click);
			// 
			// NTB3
			// 
			this->NTB3->Location = System::Drawing::Point(260, 94);
			this->NTB3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->NTB3->Name = L"NTB3";
			this->NTB3->Size = System::Drawing::Size(153, 35);
			this->NTB3->TabIndex = 1;
			this->NTB3->TextChanged += gcnew System::EventHandler(this, &Individuals::NTB3_TextChanged);
			this->NTB3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Individuals::unsignedIntTB);
			this->NTB3->Validated += gcnew System::EventHandler(this, &Individuals::unsignedIntTBAutocorrect);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 97);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 29);
			this->label3->TabIndex = 0;
			this->label3->Text = L"N (1 ≤ N ≤ 27):";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->panel1);
			this->tabPage4->Controls->Add(this->TB4);
			this->tabPage4->Location = System::Drawing::Point(4, 38);
			this->tabPage4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1009, 652);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Обработка строк";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->fileBtn4);
			this->panel1->Controls->Add(this->startBtn4);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Location = System::Drawing::Point(5, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(994, 129);
			this->panel1->TabIndex = 8;
			// 
			// fileBtn4
			// 
			this->fileBtn4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->fileBtn4->Location = System::Drawing::Point(160, 67);
			this->fileBtn4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->fileBtn4->Name = L"fileBtn4";
			this->fileBtn4->Size = System::Drawing::Size(328, 58);
			this->fileBtn4->TabIndex = 8;
			this->fileBtn4->Text = L"Загрузить текст из файла";
			this->fileBtn4->UseVisualStyleBackColor = true;
			this->fileBtn4->Click += gcnew System::EventHandler(this, &Individuals::fileBtn4_Click);
			// 
			// startBtn4
			// 
			this->startBtn4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->startBtn4->Location = System::Drawing::Point(498, 67);
			this->startBtn4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->startBtn4->Name = L"startBtn4";
			this->startBtn4->Size = System::Drawing::Size(328, 58);
			this->startBtn4->TabIndex = 1;
			this->startBtn4->Text = L"Заменить \":\" на \";\"";
			this->startBtn4->UseVisualStyleBackColor = true;
			this->startBtn4->Click += gcnew System::EventHandler(this, &Individuals::startBtn4_Click);
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->Location = System::Drawing::Point(5, 0);
			this->label9->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(984, 69);
			this->label9->TabIndex = 7;
			this->label9->Text = L"215. В строке заменить все двоеточия (:) точкой с запятой (;). Подсчитать количес"
				L"тво таких замен.";
			// 
			// TB4
			// 
			this->TB4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TB4->Location = System::Drawing::Point(5, 139);
			this->TB4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->TB4->Multiline = true;
			this->TB4->Name = L"TB4";
			this->TB4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TB4->Size = System::Drawing::Size(994, 726);
			this->TB4->TabIndex = 0;
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog";
			this->openFileDialog->Filter = L"txt files (*.txt)|*.txt";
			// 
			// Individuals
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1041, 729);
			this->Controls->Add(this->tabControl);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(8, 6, 8, 6);
			this->MaximizeBox = false;
			this->Name = L"Individuals";
			this->ShowIcon = false;
			this->Text = L"Индивидуальные задания";
			this->tabControl->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		int toInt(String^ string)
		{
			try
			{
				return Convert::ToInt32(string);
			}
			catch (FormatException^)
			{
				return 0;
			}
		}

		double toDouble(String^ string)
		{
			try
			{
				return Convert::ToDouble(string->Replace(",", "."));
			}
			catch (FormatException^)
			{
				return 0;
			}
		}

		Decimal toDecimal(String^ string)
		{
			try
			{
				return Convert::ToDecimal(string->Replace(",", "."));
			}
			catch (FormatException^)
			{
				return 0;
			}
		}

		int getOriginalArrayLen(String^ string)
		{
			const int* array = toArray(string);
			const int len = getConvertedArrayLen(string);
			int originalArrayLen = 0;
			for (int i = 0; i < len; i++)
			{
				const int element = array[i];
				bool isDuplicate = false;
				for (int j = 0; j < i; j++)
				{
					if (array[i] == array[j])
					{
						isDuplicate = true;
						break;
					}
				}
				if (!isDuplicate)
					originalArrayLen++;
			}
			return originalArrayLen;
		}

		int* toOriginalArray(String^ string)
		{
			const int* array = toArray(string);
			const int len = getConvertedArrayLen(string);
			int originalArrayLen = getOriginalArrayLen(string);
			int* result = new int[originalArrayLen];
			int index = 0;
			for (int i = 0; i < len; i++)
			{
				const int element = array[i];
				bool isDuplicate = false;
				for (int j = 0; j < i; j++)
				{
					if (array[i] == array[j])
					{
						isDuplicate = true;
						break;
					}
				}
				if (!isDuplicate)
					result[index++] = element;
			}
			return result;
		}

		int* toArray(String^ string)
		{
			int* array = new int[getConvertedArrayLen(string)];
			int index = 0;
			Regex^ regex = gcnew Regex(L"[^0-9]");
			auto chunks = string->Split('-');
			for (int i = 0; i < chunks->Length; i++)
			{
				auto chunk = chunks[i];
				auto seq = regex->Split(chunk);
				for (int j = 0; j < seq->Length; j++)
				{
					if (seq[j] != "")
					{
						int number = toInt(seq[j]);
						array[index++] = j == 0 && i != 0 ? number * -1 : number;
					}
				}
			}
			return array;
		}

		int* toArray(String^ string, int len)
		{
			int* array = new int[len];
			int index = 0;
			Regex^ regex = gcnew Regex(L"[^0-9]");
			auto chunks = string->Split('-');
			for (int i = 0; i < chunks->Length; i++)
			{
				auto chunk = chunks[i];
				auto seq = regex->Split(chunk);
				for (int j = 0; j < seq->Length; j++)
				{
					if (seq[j] == "")
						continue;
					int number = toInt(seq[j]);
					array[index++] = j == 0 && (i != 0) ? number * -1 : number;
				}
			}
			for (; index < len; index++)
				array[index] = 0;
			return array;
		}

		int** toMatrix(String^ string)
		{
			const auto x = getConvertedMatrixX(string);
			const auto y = getConvertedMatrixY(string);
			int** matrix = new int* [y];

			const auto chunks = string->Split('\n');
			int shift = 0;
			for (int i = 0; i < chunks->Length; i++)
			{
				if (getConvertedArrayLen(chunks[i]) == 0)
				{
					shift++;
				}
				else
				{
					matrix[i-shift] = toArray(chunks[i], x);
				}
			}
			return matrix;
		}

		int getConvertedArrayLen(String^ string)
		{
			int len = 0;
			Regex^ regex = gcnew Regex(L"[^0-9]");
			auto chunks = string->Split('-');
			for (int i = 0; i < chunks->Length; i++)
			{
				auto chunk = chunks[i];
				auto seq = regex->Split(chunk);
				for (int j = 0; j < seq->Length; j++)
				{
					if (seq[j] != "")
						len++;
				}
			}
			return len;
		}

		int getConvertedMatrixY(String^ string)
		{
			const auto chunks = string->Split('\n');
			int ctr = 0;
			for (int i = 0; i < chunks->Length; i++)
			{
				if (getConvertedArrayLen(chunks[i]) > 0)
					ctr++;
			}
			return ctr;
		}

		int getConvertedMatrixX(String^ string)
		{
			const auto chunks = string->Split('\n');
			int ctr = 0;
			for (int i = 0; i < chunks->Length; i++)
			{
				int len = getConvertedArrayLen(chunks[i]);
				if (len > ctr)
					ctr = len;
			}
			return ctr;
		}

		String^ toString(int number)
		{
			return number.ToString();
		}

		String^ toString(double number)
		{
			return number.ToString()->Replace(".", ",");
		}

		String^ toString(Decimal number)
		{
			return number.ToString("f28")->Replace(".", ",");
		}

		String^ toString(int* array, int len)
		{
			String^ string = "";
			for (int i = 0; i < len; i++)
				string += toString(array[i]) + " ";
			return string->Trim();
		}

		String^ toString(int** matrix, int x, int y)
		{
			StringBuilder^ string = gcnew StringBuilder("");
			for (int i = 0; i < y; i++)
			{
				for (int j = 0; j < x; j++)
				{
					string->Append(String::Format("{0, 5}", toString(matrix[i][j])));
				}
				string->Append(Environment::NewLine);
			}
			return string->ToString();
		}

		int* generateArray(int len, int min, int max)
		{
			int* array = new int[len];
			Random^ rand = gcnew Random();
			for (int i = 0; i < len; i++)
			{
				array[i] = rand->Next(min, max);
			}
			return array;
		}

		int* generateOriginalArray(int len, int min, int max)
		{
			int* array = new int[len];
			Random^ rand = gcnew Random();
			for (int i = 0; i < len; i++)
			{
				array[i] = rand->Next(min, max);
			}
			return array;
		}

		int* generateArray(int len, int min, int max, int shift)
		{
			int* array = new int[len];
			Random^ rand = gcnew Random((int)DateTime::Now.Ticks + shift);
			for (int i = 0; i < len; i++)
			{
				array[i] = rand->Next(min, max);
			}
			return array;
		}

		int** generateMatrix(int x, int y, int min, int max)
		{
			int** matrix = new int* [y];
			for (int i = 0; i < y; i++)
				matrix[i] = generateArray(x, min, max, i);
			return matrix;
		}

		bool warnAboutRewriting()
		{
			return MessageBox::Show(
				L"Введённый массив будет стёрт. Продолжить?",
				L"Предупреждение",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Warning,
				MessageBoxDefaultButton::Button2
			) == System::Windows::Forms::DialogResult::Yes;
		}

		bool validateGenerationInputs()
		{
			if (lenTB1->Text == L"")
			{
				MessageBox::Show(
					L"Длина массива не введена",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				lenTB1->Focus();
				return false;
			}
			if (lenTB1->Text == L"0")
			{
				MessageBox::Show(
					L"Длина массива не может быть нулём",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				lenTB1->Focus();
				return false;
			}
			if (minTB1->Text == L"")
			{
				MessageBox::Show(
					L"Минимальное значение не введено",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				minTB1->Focus();
				return false;
			}
			if (maxTB1->Text == L"")
			{
				MessageBox::Show(
					L"Максимальное значение не введено",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				maxTB1->Focus();
				return false;
			}
			const auto min = toInt(minTB1->Text);
			const auto max = toInt(maxTB1->Text);
			if (min > max)
			{
				const auto tmp = minTB1->Text;
				minTB1->Text = maxTB1->Text;
				maxTB1->Text = tmp;
				MessageBox::Show(
					L"Минимальное значение и максимальное были поменяны местами",
					L"Ввод был модифицирован",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning
				);
			}
			return true;
		}

		void tabControl_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
		{
			if (tabControl->SelectedIndex == 0)
			{
				WindowState = FormWindowState::Normal;
				MaximizeBox = false;
				inputFirstTB1->Focus();
			}
			else
			{
				MaximizeBox = true;
			}

		}

		void unsignedIntTB(Object^ sender, KeyPressEventArgs^ e)
		{
			if (
				!Char::IsControl(e->KeyChar) &&
				!Char::IsDigit(e->KeyChar)
				) e->Handled = true;
		}

		void unsignedIntTBAutocorrect(Object^ sender, EventArgs^ e)
		{
			const auto textBox = safe_cast<TextBox^>(sender);
			if (textBox->Text != "")
				textBox->Text = toString(toInt(textBox->Text));
		}

		void intTB(Object^ sender, KeyPressEventArgs^ e)
		{
			const auto textBox = safe_cast<TextBox^>(sender);
			const auto selectionStart = textBox->SelectionStart;
			const auto text = textBox->Text;
			const auto length = text->Length;
			if (e->KeyChar == '.')
				e->KeyChar = ',';
			if (!Char::IsControl(e->KeyChar) &&
				(
					(
						!Char::IsDigit(e->KeyChar) &&
						e->KeyChar != '-'
						) ||
					(
						(
							selectionStart != 0 ||
							text->IndexOf(L"-") != -1
							) &&
						e->KeyChar == '-'
						)
					)
				) e->Handled = true;
		}

		void intTBAutocorrect(Object^ sender, EventArgs^ e)
		{
			const auto textBox = safe_cast<TextBox^>(sender);
			if (textBox->Text != "")
				textBox->Text = toString(toInt(textBox->Text));
		}

		void matrixTBAutocorrect(Object^ sender, EventArgs^ e)
		{
			const auto textBox = safe_cast<TextBox^>(sender);
			if (textBox->Text != "")
				textBox->Text = toString(
					toMatrix(textBox->Text),
					getConvertedMatrixX(textBox->Text),
					getConvertedMatrixY(textBox->Text)
				);
		}

		void arrayTBAutocorrect(Object^ sender, EventArgs^ e)
		{
			const auto textBox = safe_cast<TextBox^>(sender);
			if (textBox->Text != "")
				textBox->Text = toString(
					toArray(textBox->Text),
					getConvertedArrayLen(textBox->Text)
				);
		}

		void originalArrayTBAutocorrect(Object^ sender, EventArgs^ e)
		{
			const auto textBox = safe_cast<TextBox^>(sender);
			if (textBox->Text != "")
				textBox->Text = toString(
					toOriginalArray(textBox->Text),
					getOriginalArrayLen(textBox->Text)
				);
		}

		void generateFirstBtn1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (!validateGenerationInputs())
				return;
			if (inputFirstTB1->Text != "" && !warnAboutRewriting())
				return;
			const auto len = toInt(lenTB1->Text);
			const auto min = toInt(minTB1->Text);
			const auto max = toInt(maxTB1->Text);
			inputFirstTB1->Text = toString(
				generateArray(
					len, min, max
				),
				len
			);
		}

		void generateSecondBtn1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (!validateGenerationInputs())
				return;
			if (inputSecondTB1->Text != "" && !warnAboutRewriting())
				return;
			const auto len = toInt(lenTB1->Text);
			const auto min = toInt(minTB1->Text);
			const auto max = toInt(maxTB1->Text);
			inputSecondTB1->Text = toString(
				generateArray(
					len, min, max
				),
				len
			);
		}

		void fileBtn1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			const auto button = safe_cast<Button^>(sender);

			TextBox^ textBox = inputFirstTB1;
			if (button->Name == "fileSecondBtn1")
				textBox = inputSecondTB1;

			if (textBox->Text != "" && !warnAboutRewriting())
				return;

			if (openFileDialog->ShowDialog() != System::Windows::Forms::DialogResult::OK)
				return;

			const auto path = openFileDialog->FileName;

			String^ input = L"";

			StreamReader^ reader = File::OpenText(openFileDialog->FileName);
			do
			{
				input += " " + reader->ReadLine();
			} while (reader->Peek() != -1);
			reader->Close();

			textBox->Text = toString(toOriginalArray(input), getOriginalArrayLen(input));
		}

		void startBtn1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (inputFirstTB1->Text == "")
			{
				MessageBox::Show(
					L"Первый массив не введен",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				inputFirstTB1->Focus();
				return;
			}

			if (inputSecondTB1->Text == "")
			{
				MessageBox::Show(
					L"Второй массив не введен",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				inputSecondTB1->Focus();
				return;
			}

			const auto n = getConvertedArrayLen(inputFirstTB1->Text);
			const auto m = getConvertedArrayLen(inputSecondTB1->Text);

			if (m > n)
			{
				const auto t = inputFirstTB1->Text;
				inputFirstTB1->Text = inputSecondTB1->Text;
				inputSecondTB1->Text = t;
				MessageBox::Show(
					L"Длина второго массива больше длины первого, массивы поменяны местами",
					L"Ввод был модифицирован",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning
				);
			}

			const int* array1 = toOriginalArray(inputFirstTB1->Text);
			const int* array2 = toOriginalArray(inputSecondTB1->Text);
			const int len1 = m > n ? m : n;
			const int len2 = m > n ? n : m;

			for (int i = 0; i < len2; i++)
			{
				bool includes = false;
				for (int j = 0; j < len1; j++)
				{
					if (array1[j] == array2[i])
					{
						includes = true;
						break;
					}
				}
				if (!includes)
				{
					MessageBox::Show(
						L"Второй массив не входит в первый",
						L"Результат",
						MessageBoxButtons::OK,
						MessageBoxIcon::Information
					);
					return;
				}
			}
			MessageBox::Show(
				L"Второй массив входит в первый",
				L"Результат",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information
			);
		}

		void NTB3_TextChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			TB3->Text = "";
		}

		void start3Btn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			const auto n = toInt(NTB3->Text);
			if (n < 1)
			{
				MessageBox::Show(
					L"Введённое значение меньше нижней границы диапозона",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				NTB3->Focus();
				return;
			}
			if (n > 27)
			{
				MessageBox::Show(
					L"Введённое значение больше верхней границы диапозона",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				NTB3->Focus();
				return;
			}

			// Создание массива
			cli::array<Decimal^>^ array = gcnew cli::array<Decimal^>(n);
			for (int i = 1; i <= n; i++)
			{
				Decimal^ element = Decimal::Divide(1, factorial(i));
				array[i - 1] = element;
			}

			// Создание строки для вывода
			StringBuilder^ string = gcnew StringBuilder();
			for (int i = 0; i < n; i++)
			{
				string->Append(
					String::Format("{0, -3}", (i + 1).ToString() + ".") +
					array[i]->ToString("f28")->Replace(".", ",") +
					Environment::NewLine
				);
			}
			TB3->Text = string->ToString();
		}

		Decimal factorial(int n)
		{
			Decimal res = 1;
			for (int i = 2; i <= n; i++)
				res *= i;
			return res;
		}

		void startBtn4_Click(System::Object^ sender, System::EventArgs^ e)
		{
			StringBuilder^ string = gcnew StringBuilder("");
			int ctr = 0;
			for (int i = 0; i < TB4->Text->Length; i++)
			{
				if (TB4->Text[i] == ':')
				{
					string->Append(";");
					ctr++;
				}
				else
				{
					string->Append(TB4->Text[i]);
				}
			}
			TB4->Text = string->ToString();
			MessageBox::Show(
				L"Произведено " + ctr.ToString() + L" замен",
				L"Выполнено",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information
			);
		}

		void fileBtn4_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (TB4->Text != "" && MessageBox::Show(
				L"Введённый текст будет стёрт. Продолжить?",
				L"Предупреждение",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Warning,
				MessageBoxDefaultButton::Button2
			) == System::Windows::Forms::DialogResult::No)
				return;

			if (openFileDialog->ShowDialog() != System::Windows::Forms::DialogResult::OK)
				return;

			const auto path = openFileDialog->FileName;

			StringBuilder^ input = gcnew StringBuilder("");

			StreamReader^ reader = File::OpenText(openFileDialog->FileName);
			do
			{
				input->Append(reader->ReadLine() + Environment::NewLine);
			} while (reader->Peek() != -1);
			reader->Close();

			TB4->Text = input->ToString();
		}

		void matrixSettings_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			matrixTB2->Text = "";
		}

		void generateBTN2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (xTB2->Text == L"")
			{
				MessageBox::Show(
					L"Ширина матрицы не введена",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				xTB2->Focus();
				return;
			}
			if (xTB2->Text == L"0")
			{
				MessageBox::Show(
					L"Ширина матрицы не может быть нулём",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				xTB2->Focus();
				return;
			}
			if (yTB2->Text == L"")
			{
				MessageBox::Show(
					L"Высота матрицы не введена",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				yTB2->Focus();
				return;
			}
			if (yTB2->Text == L"0")
			{
				MessageBox::Show(
					L"Высота матрицы не может быть нулём",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				yTB2->Focus();
				return;
			}
			if (minTB2->Text == L"")
			{
				MessageBox::Show(
					L"Минимальное значение не введено",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				minTB2->Focus();
				return;
			}
			if (maxTB2->Text == L"")
			{
				MessageBox::Show(
					L"Максимальное значение не введено",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				maxTB2->Focus();
				return;
			}

			if (matrixTB2->Text != "" && MessageBox::Show(
				L"Введённый массив будет стёрт. Продолжить?",
				L"Предупреждение",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Warning,
				MessageBoxDefaultButton::Button2
			) == System::Windows::Forms::DialogResult::No)
				return;

			auto min = toInt(minTB2->Text);
			auto max = toInt(maxTB2->Text);
			if (min > max)
			{
				const auto tmp = minTB2->Text;
				minTB2->Text = maxTB2->Text;
				maxTB2->Text = tmp;
				MessageBox::Show(
					L"Минимальное значение и максимальное были поменяны местами",
					L"Ввод был модифицирован",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning
				);
			}

			const auto x = toInt(xTB2->Text);
			const auto y = toInt(yTB2->Text);
			min = toInt(minTB2->Text);
			max = toInt(maxTB2->Text);

			matrixTB2->Text = toString(
				generateMatrix(x, y, min, max),
				x, y
			);
		}

		void loadBtn2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (matrixTB2->Text != "" && MessageBox::Show(
				L"Введённая матрица будет стёрта. Продолжить?",
				L"Предупреждение",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Warning,
				MessageBoxDefaultButton::Button2
			) == System::Windows::Forms::DialogResult::No)
				return;

			if (openFileDialog->ShowDialog() != System::Windows::Forms::DialogResult::OK)
				return;

			const auto path = openFileDialog->FileName;

			String^ input = L"";

			StreamReader^ reader = File::OpenText(openFileDialog->FileName);
			do
			{
				input += reader->ReadLine() + "\n";
			} while (reader->Peek() != -1);
			reader->Close();

			matrixTB2->Text = toString(
				toMatrix(input),
				getConvertedMatrixX(input),
				getConvertedMatrixY(input)
			);
		}

		void startBtn2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (matrixTB2->Text == L"")
			{
				MessageBox::Show(
					L"Матрица не введена",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				matrixTB2->Focus();
				return;
			}

			int** matrix = toMatrix(matrixTB2->Text);
			const int x = getConvertedMatrixX(matrixTB2->Text);
			const int y = getConvertedMatrixY(matrixTB2->Text);

			for (int i = 0; i < y; i++)
			{
				int min = 0;
				int max = 0;
				for (int j = 0; j < x; j++)
				{
					if (matrix[i][j] > matrix[i][max])
						max = j;
					if (matrix[i][j] < matrix[i][min])
						min = j;
				}
				auto t = matrix[i][0];
				matrix[i][0] = matrix[i][max];
				matrix[i][max] = t;
				if (min == 0)
					min = max;
				t = matrix[i][x - 1];
				matrix[i][x - 1] = matrix[i][min];
				matrix[i][min] = t;
			}
			matrixTB2->Text = toString(matrix, x, y);
		}
	};
}

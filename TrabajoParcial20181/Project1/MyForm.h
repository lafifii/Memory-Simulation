#pragma once
#include "Memoria.h"
namespace Project1 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Memoria* memoria;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::TextBox^  textBox6;
			 int numerodeespacios = 1;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->memoria = new Memoria();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  BtnAgregarVariable;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  CbxTipoVariable;

	private: System::Windows::Forms::TextBox^  TxtNombreVariable;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox3;


	private: System::Windows::Forms::Button^  BtnImprimir;
	private: System::Windows::Forms::TabControl^  TbcMemoria;

	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::DataGridView^  DgvMemoria;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column16;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataGridView^  DgvASCII;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::TextBox^  TxtFinal;
	private: System::Windows::Forms::TextBox^  TxtInicio;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  CbxMamoria;
	private: System::Windows::Forms::CheckBox^  CkbPuntero;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  tv5;

	private: System::Windows::Forms::TextBox^  tv4;

	private: System::Windows::Forms::TextBox^  tv3;

	private: System::Windows::Forms::TextBox^  tv2;
private: System::Windows::Forms::TextBox^  tv8;
private: System::Windows::Forms::TextBox^  tv9;
private: System::Windows::Forms::TextBox^  tv10;



private: System::Windows::Forms::TextBox^  tv7;

private: System::Windows::Forms::TextBox^  tv6;














































































































	protected:


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tv8 = (gcnew System::Windows::Forms::TextBox());
			this->tv9 = (gcnew System::Windows::Forms::TextBox());
			this->tv10 = (gcnew System::Windows::Forms::TextBox());
			this->tv7 = (gcnew System::Windows::Forms::TextBox());
			this->tv6 = (gcnew System::Windows::Forms::TextBox());
			this->tv5 = (gcnew System::Windows::Forms::TextBox());
			this->tv4 = (gcnew System::Windows::Forms::TextBox());
			this->tv3 = (gcnew System::Windows::Forms::TextBox());
			this->tv2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->CkbPuntero = (gcnew System::Windows::Forms::CheckBox());
			this->BtnAgregarVariable = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CbxTipoVariable = (gcnew System::Windows::Forms::ComboBox());
			this->TxtNombreVariable = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->TxtFinal = (gcnew System::Windows::Forms::TextBox());
			this->TxtInicio = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->CbxMamoria = (gcnew System::Windows::Forms::ComboBox());
			this->BtnImprimir = (gcnew System::Windows::Forms::Button());
			this->TbcMemoria = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->DgvMemoria = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->DgvASCII = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->TbcMemoria->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvMemoria))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvASCII))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->tv8);
			this->groupBox1->Controls->Add(this->tv9);
			this->groupBox1->Controls->Add(this->tv10);
			this->groupBox1->Controls->Add(this->tv7);
			this->groupBox1->Controls->Add(this->tv6);
			this->groupBox1->Controls->Add(this->tv5);
			this->groupBox1->Controls->Add(this->tv4);
			this->groupBox1->Controls->Add(this->tv3);
			this->groupBox1->Controls->Add(this->tv2);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->CkbPuntero);
			this->groupBox1->Controls->Add(this->BtnAgregarVariable);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->CbxTipoVariable);
			this->groupBox1->Controls->Add(this->TxtNombreVariable);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(228, 293);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Agregar Variables";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(146, 30);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(76, 20);
			this->textBox6->TabIndex = 20;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// tv8
			// 
			this->tv8->Location = System::Drawing::Point(145, 199);
			this->tv8->Name = L"tv8";
			this->tv8->Size = System::Drawing::Size(76, 20);
			this->tv8->TabIndex = 19;
			this->tv8->Visible = false;
			// 
			// tv9
			// 
			this->tv9->Location = System::Drawing::Point(146, 223);
			this->tv9->Name = L"tv9";
			this->tv9->Size = System::Drawing::Size(76, 20);
			this->tv9->TabIndex = 18;
			this->tv9->Visible = false;
			// 
			// tv10
			// 
			this->tv10->Location = System::Drawing::Point(146, 249);
			this->tv10->Name = L"tv10";
			this->tv10->Size = System::Drawing::Size(76, 20);
			this->tv10->TabIndex = 17;
			this->tv10->Visible = false;
			// 
			// tv7
			// 
			this->tv7->Location = System::Drawing::Point(146, 175);
			this->tv7->Name = L"tv7";
			this->tv7->Size = System::Drawing::Size(76, 20);
			this->tv7->TabIndex = 16;
			this->tv7->Visible = false;
			// 
			// tv6
			// 
			this->tv6->Location = System::Drawing::Point(145, 152);
			this->tv6->Name = L"tv6";
			this->tv6->Size = System::Drawing::Size(76, 20);
			this->tv6->TabIndex = 15;
			this->tv6->Visible = false;
			// 
			// tv5
			// 
			this->tv5->Location = System::Drawing::Point(145, 128);
			this->tv5->Name = L"tv5";
			this->tv5->Size = System::Drawing::Size(76, 20);
			this->tv5->TabIndex = 14;
			this->tv5->Visible = false;
			this->tv5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// tv4
			// 
			this->tv4->Location = System::Drawing::Point(145, 104);
			this->tv4->Name = L"tv4";
			this->tv4->Size = System::Drawing::Size(76, 20);
			this->tv4->TabIndex = 13;
			this->tv4->Visible = false;
			// 
			// tv3
			// 
			this->tv3->Location = System::Drawing::Point(145, 80);
			this->tv3->Name = L"tv3";
			this->tv3->Size = System::Drawing::Size(76, 20);
			this->tv3->TabIndex = 12;
			this->tv3->Visible = false;
			// 
			// tv2
			// 
			this->tv2->Location = System::Drawing::Point(145, 56);
			this->tv2->Name = L"tv2";
			this->tv2->Size = System::Drawing::Size(76, 20);
			this->tv2->TabIndex = 11;
			this->tv2->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 133);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Tamaño";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(5, 158);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(25, 207);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(59, 17);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Arreglo";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// CkbPuntero
			// 
			this->CkbPuntero->AutoSize = true;
			this->CkbPuntero->Location = System::Drawing::Point(25, 230);
			this->CkbPuntero->Name = L"CkbPuntero";
			this->CkbPuntero->Size = System::Drawing::Size(63, 17);
			this->CkbPuntero->TabIndex = 7;
			this->CkbPuntero->Text = L"Puntero";
			this->CkbPuntero->UseVisualStyleBackColor = true;
			this->CkbPuntero->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CkbPuntero_CheckedChanged);
			// 
			// BtnAgregarVariable
			// 
			this->BtnAgregarVariable->Location = System::Drawing::Point(50, 264);
			this->BtnAgregarVariable->Name = L"BtnAgregarVariable";
			this->BtnAgregarVariable->Size = System::Drawing::Size(75, 23);
			this->BtnAgregarVariable->TabIndex = 6;
			this->BtnAgregarVariable->Text = L"Agregar";
			this->BtnAgregarVariable->UseVisualStyleBackColor = true;
			this->BtnAgregarVariable->Click += gcnew System::EventHandler(this, &MyForm::BtnAgregarVariable_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tipo de variable";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(137, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Valor";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// CbxTipoVariable
			// 
			this->CbxTipoVariable->FormattingEnabled = true;
			this->CbxTipoVariable->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"int", L"float", L"double", L"char", L"long long",
					L"unsigned char", L"signed char", L"unsigned int", L"signed int", L"short int", L"long int", L"unsigned long int", L"signed long int",
					L"long double"
			});
			this->CbxTipoVariable->Location = System::Drawing::Point(6, 41);
			this->CbxTipoVariable->Name = L"CbxTipoVariable";
			this->CbxTipoVariable->Size = System::Drawing::Size(105, 21);
			this->CbxTipoVariable->TabIndex = 0;
			this->CbxTipoVariable->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::CbxTipoVariable_SelectedIndexChanged);
			this->CbxTipoVariable->SelectedIndex = 0;
			// 
			// TxtNombreVariable
			// 
			this->TxtNombreVariable->Location = System::Drawing::Point(6, 93);
			this->TxtNombreVariable->Name = L"TxtNombreVariable";
			this->TxtNombreVariable->Size = System::Drawing::Size(100, 20);
			this->TxtNombreVariable->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->TxtFinal);
			this->groupBox3->Controls->Add(this->TxtInicio);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->CbxMamoria);
			this->groupBox3->Controls->Add(this->BtnImprimir);
			this->groupBox3->Location = System::Drawing::Point(239, 425);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(845, 76);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			// 
			// TxtFinal
			// 
			this->TxtFinal->Location = System::Drawing::Point(419, 36);
			this->TxtFinal->Name = L"TxtFinal";
			this->TxtFinal->Size = System::Drawing::Size(100, 20);
			this->TxtFinal->TabIndex = 6;
			this->TxtFinal->Text = L"64";
			this->TxtFinal->TextChanged += gcnew System::EventHandler(this, &MyForm::TxtFinal_TextChanged);
			// 
			// TxtInicio
			// 
			this->TxtInicio->Location = System::Drawing::Point(256, 35);
			this->TxtInicio->Name = L"TxtInicio";
			this->TxtInicio->Size = System::Drawing::Size(100, 20);
			this->TxtInicio->TabIndex = 5;
			this->TxtInicio->Text = L"0";
			this->TxtInicio->TextChanged += gcnew System::EventHandler(this, &MyForm::TxtInicio_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(416, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Nro de filas a imprimir";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(253, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Desde ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(69, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Memoria";
			// 
			// CbxMamoria
			// 
			this->CbxMamoria->FormattingEnabled = true;
			this->CbxMamoria->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Estatica", L"Dinamica" });
			this->CbxMamoria->Location = System::Drawing::Point(69, 35);
			this->CbxMamoria->Name = L"CbxMamoria";
			this->CbxMamoria->Size = System::Drawing::Size(121, 21);
			this->CbxMamoria->TabIndex = 1;
			this->CbxMamoria->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::CbxMamoria_SelectedIndexChanged);
			this->CbxMamoria->SelectedIndex = 0;
			// 
			// BtnImprimir
			// 
			this->BtnImprimir->Location = System::Drawing::Point(660, 32);
			this->BtnImprimir->Name = L"BtnImprimir";
			this->BtnImprimir->Size = System::Drawing::Size(125, 23);
			this->BtnImprimir->TabIndex = 0;
			this->BtnImprimir->Text = L"Imprimir Memoria";
			this->BtnImprimir->UseVisualStyleBackColor = true;
			this->BtnImprimir->Click += gcnew System::EventHandler(this, &MyForm::BtnImprimir_Click);
			// 
			// TbcMemoria
			// 
			this->TbcMemoria->Controls->Add(this->tabPage1);
			this->TbcMemoria->Controls->Add(this->tabPage2);
			this->TbcMemoria->Location = System::Drawing::Point(239, 12);
			this->TbcMemoria->Name = L"TbcMemoria";
			this->TbcMemoria->SelectedIndex = 0;
			this->TbcMemoria->Size = System::Drawing::Size(851, 407);
			this->TbcMemoria->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->DgvMemoria);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(843, 381);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Memoria";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// DgvMemoria
			// 
			this->DgvMemoria->AllowUserToAddRows = false;
			this->DgvMemoria->AllowUserToDeleteRows = false;
			this->DgvMemoria->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgvMemoria->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(17) {
				this->Column1, this->Column17,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16
			});
			this->DgvMemoria->Dock = System::Windows::Forms::DockStyle::Fill;
			this->DgvMemoria->Location = System::Drawing::Point(3, 3);
			this->DgvMemoria->Name = L"DgvMemoria";
			this->DgvMemoria->ReadOnly = true;
			this->DgvMemoria->RowHeadersWidth = 30;
			this->DgvMemoria->Size = System::Drawing::Size(837, 375);
			this->DgvMemoria->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Dirección";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 70;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"+0";
			this->Column17->Name = L"Column17";
			this->Column17->ReadOnly = true;
			this->Column17->Width = 70;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"+1";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 70;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"+2";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 70;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"+3";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 70;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"+4";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 70;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"+5";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 70;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"+6";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 70;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"+7";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 70;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"+8";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 70;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"+9";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 70;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"+A";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Width = 70;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"+B";
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->Width = 70;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"+C";
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			this->Column13->Width = 70;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"+D";
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			this->Column14->Width = 70;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"+E";
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			this->Column15->Width = 70;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"+F";
			this->Column16->Name = L"Column16";
			this->Column16->ReadOnly = true;
			this->Column16->Width = 70;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->DgvASCII);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(843, 381);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"ASCII";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// DgvASCII
			// 
			this->DgvASCII->AllowUserToAddRows = false;
			this->DgvASCII->AllowUserToDeleteRows = false;
			this->DgvASCII->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgvASCII->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(17) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13,
					this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn17
			});
			this->DgvASCII->Dock = System::Windows::Forms::DockStyle::Fill;
			this->DgvASCII->Location = System::Drawing::Point(3, 3);
			this->DgvASCII->Name = L"DgvASCII";
			this->DgvASCII->ReadOnly = true;
			this->DgvASCII->RowHeadersWidth = 30;
			this->DgvASCII->Size = System::Drawing::Size(837, 375);
			this->DgvASCII->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Dirección";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 70;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"+0";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 70;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"+1";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 70;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"+2";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 70;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"+3";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 70;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"+4";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 70;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"+5";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 70;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"+6";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 70;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"+7";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Width = 70;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"+8";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 70;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"+9";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Width = 70;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"+A";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			this->dataGridViewTextBoxColumn12->Width = 70;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"+B";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			this->dataGridViewTextBoxColumn13->Width = 70;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"+C";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->ReadOnly = true;
			this->dataGridViewTextBoxColumn14->Width = 70;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"+D";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->ReadOnly = true;
			this->dataGridViewTextBoxColumn15->Width = 70;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"+E";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->ReadOnly = true;
			this->dataGridViewTextBoxColumn16->Width = 70;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"+F";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->ReadOnly = true;
			this->dataGridViewTextBoxColumn17->Width = 70;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Location = System::Drawing::Point(13, 311);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(135, 203);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Editar Variable";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 132);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Posicion";
			this->label9->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(24, 148);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 11;
			this->textBox3->Visible = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(24, 99);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(59, 17);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"Arreglo";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(29, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Editar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Valor";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(24, 34);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Nombre";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->checkBox3);
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Location = System::Drawing::Point(152, 319);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(81, 160);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Eliminar Variable";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MyForm::groupBox4_Enter);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(2, 59);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(63, 17);
			this->checkBox3->TabIndex = 20;
			this->checkBox3->Text = L"Puntero";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(2, 91);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Aceptar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(2, 33);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(73, 20);
			this->textBox5->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1102, 513);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->TbcMemoria);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->TbcMemoria->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvMemoria))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvASCII))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	void MarshalString(String ^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	private: System::Void BtnAgregarVariable_Click(System::Object^  sender, System::EventArgs^  e) {
		int tipo = CbxTipoVariable->SelectedIndex;
		String ^nombre = TxtNombreVariable->Text;
		String ^valor = textBox6->Text;
		string nombagregar;
		if(nombre!=""){
				
			MarshalString(nombre, nombagregar);
			int puntero = CkbPuntero->Checked;
			int esarr = checkBox1->Checked;
			int vari;
			float varf;
			double vard;
			char varc;
			long long varll;
			unsigned char ucaracter;
			signed char scaracter;
			unsigned int uentero;
			signed int sentero;
			short int centero;
			long int lentero;
			unsigned long int ulentero;
			signed long int slentero;
			long double ldoble;
			string auxnombre = "*" + nombagregar;
			if (puntero == 1)
				nombagregar = auxnombre;

			if (!memoria->Existe(nombagregar)) {
				if (esarr == 1)
					memoria->AgregarAlSetNombreArreglo(nombagregar); //Agregar nombre del arreglo 
				for (int i = 0; i < numerodeespacios; i++) {
					if (esarr == 1)
					{
						nombagregar = nombagregar + "[" + to_string(i) + "]"; // agregar cada pos del arreglo "arr[i]"
						if (i == 1)
							valor = tv2->Text;
						if (i == 2)
							valor = tv3->Text;
						if (i == 3)
							valor = tv4->Text;
						if (i == 4)
							valor = tv5->Text;
						if (i == 5)
							valor = tv6->Text;
						if (i == 6)
							valor = tv7->Text;
						if (i == 7)
							valor = tv8->Text;
						if (i == 8)
							valor = tv9->Text;
						if (i == 9)
							valor = tv10->Text;
					}
					switch (tipo)
					{
					case 0:
						if(valor=="")
							vari = 0;
						else
							vari = Convert::ToInt32(valor);
						memoria->AgregarVariable(puntero, (unsigned char*)vari, sizeof(int), nombagregar, "int");
						break;
					case 1:
						if (valor == "")
							varf = 0;
						else
							varf = Convert::ToDouble(valor);
						memoria->AgregarVariableFlotante(puntero, varf, sizeof(float), nombagregar, "float");
						break;
					case 2:
						if (valor == "")
							vard = 0;
						else
							vard = Convert::ToDouble(valor);
						memoria->AgregarVariableDoble(puntero, vard, sizeof(double), nombagregar, "double");
						break;
					case 3:
						if (valor == "")
							varc = 0;
						else
							varc = Convert::ToChar(valor);
						memoria->AgregarVariable(puntero, (unsigned char*)&varc, sizeof(char), nombagregar, "char");
						break;
					case 4:
						if (valor == "")
							varll = 0;
						else
							varll = Convert::ToInt32(valor);
						memoria->AgregarVariable(puntero, (unsigned char*)&varll, sizeof(long long), nombagregar, "longlong");
						break;
					case 5:
						if (valor == "")
							ucaracter = 0;
						else
							ucaracter = (unsigned char)Convert::ToChar(valor);
						memoria->AgregarVariable(puntero, (unsigned char*)&ucaracter, sizeof(unsigned char), nombagregar, "unsignedchar");
						break;

					case 6:
						if (valor == "")
							scaracter = 0;
						else
							scaracter = (signed char)Convert::ToChar(valor);
						memoria->AgregarVariable(puntero, (unsigned char*)&scaracter, sizeof(signed char), nombagregar, "signedchar");
						break;
					case 7:
						if (valor == "")
							uentero = 0;
						else
							uentero = Convert::ToUInt32(valor);
						memoria->AgregarVariable(puntero, (unsigned char*)&uentero, sizeof(unsigned int), nombagregar, "unsignedint");
						break;
					case 8:
						if (valor == "")
							sentero = 0;
						else
							sentero = (signed int)Convert::ToInt32(valor);
						memoria->AgregarVariable(puntero, (unsigned char*)&sentero, sizeof(signed int), nombagregar, "signedint");
						break;
					case 9:
						if (valor == "")
							centero = 0;
						else
							centero = Convert::ToInt16(valor);
						memoria->AgregarVariable(puntero, (unsigned char*)&centero, sizeof(short int), nombagregar, "short");
						break;
					case 10:
						if (valor == "")
							lentero = 0;
						else
							lentero = Convert::ToInt64(valor);
						memoria->AgregarVariable(puntero, (unsigned char*)&lentero, sizeof(long int), nombagregar, "long int");
						break;
					case 11:
						if (valor == "")
							ulentero = 0;
						else
							ulentero = Convert::ToUInt64(valor);
						memoria->AgregarVariable(puntero, (unsigned char*)&ulentero, sizeof(unsigned long int), nombagregar, "unsignedlongint");
						break;
					case 12:
						if (valor == "")
							slentero = 0;
						else
							slentero = (signed long int)Convert::ToInt64(valor);
						memoria->AgregarVariable(puntero, (unsigned char*)&slentero, sizeof(signed long int), nombagregar, "signedlongint");
						break;
					case 13:
						if (valor == "")
							ldoble = 0;
						else
							ldoble = (long double)Convert::ToDouble(valor);
						memoria->AgregarLDoble(puntero, ldoble, sizeof(long double), nombagregar, "longdouble");
						break;
					default:
						break;
					}
				}
				if (esarr == 1)
					MessageBox::Show("Se agregon las variables al arreglo");
				else {
					if(valor!="")
						MessageBox::Show("Se agrego la variable " + nombre + " con valor " + valor);
					else
						MessageBox::Show("Se agrego la variable " + nombre + " con valor 0");

				}
			}
			else
				MessageBox::Show("Esta variable ya existe, usar otro nombre");
		}
		else
			MessageBox::Show("Parametro invalido");

	}
	private: System::Void BtnImprimir_Click(System::Object^  sender, System::EventArgs^  e) {
		
		String ^aux1 = "1";
		String ^aux2 = "4";
		if (TxtInicio->Text == "")
			TxtInicio->Text = aux1;
		if (TxtFinal->Text == "")
			TxtFinal->Text = aux2;
		int memoria = CbxMamoria->SelectedIndex;
		int inicio = Convert::ToInt32(TxtInicio->Text);
		int final = Convert::ToInt32(TxtFinal->Text);
		final += (16 * final) + inicio;
		//this->DgvMemoria->Rows->Clear;
		this->memoria->Imprimir(memoria, inicio, final, DgvMemoria);
		this->memoria->ImprimirASCII(memoria, inicio, final, DgvASCII);
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int esarreglo = checkBox2->Checked;
	String ^s = textBox2->Text;
	if(textBox2->Text=="")
		MessageBox::Show("Parametro invalido");
	else{

		string nombre;
		MarshalString(s, nombre);
		String ^s2 = textBox1->Text;
		string nuevovalor;
		MarshalString(s2, nuevovalor);
		String ^s3 = textBox3->Text;
		string corchetes;
		bool bandera;
		if (esarreglo == 1)
		{
			MarshalString(s3, corchetes);
			bandera = memoria->Modificar(nombre + "[" + corchetes + "]", nuevovalor);
		}
		else
			bandera = memoria->Modificar(nombre, nuevovalor);
		if (!bandera)
			MessageBox::Show("Esta variable no existe");
		else
			MessageBox::Show("Se cambio el valor de la variable ");
	}
}
private: System::Void CbxTipoVariable_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void CkbPuntero_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (label9->Visible == true)
		label9->Visible = false;
	else
		label9->Visible = true;
	if (textBox3->Visible == true)
		textBox3->Visible = false;
	else
		textBox3->Visible = true;
}

private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox4->Text != "") {

		checkBox1->Checked = true;
		if (Convert::ToInt32(textBox4->Text) >= 2)
			tv2->Visible = true;
		if (Convert::ToInt32(textBox4->Text) >= 3)
			tv3->Visible = true;
		if (Convert::ToInt32(textBox4->Text) >= 4)
			tv4->Visible = true;
		if (Convert::ToInt32(textBox4->Text) >= 5)
			tv5->Visible = true;
		if (Convert::ToInt32(textBox4->Text) >= 6)
			tv6->Visible = true;
		if (Convert::ToInt32(textBox4->Text) >= 7)
			tv7->Visible = true;
		if (Convert::ToInt32(textBox4->Text) >= 8)
			tv8->Visible = true;
		if (Convert::ToInt32(textBox4->Text) >= 9)
			tv9->Visible = true;
		if (Convert::ToInt32(textBox4->Text) == 10)
			tv10->Visible = true;
		if(textBox4->Text!="")
			numerodeespacios = Convert::ToInt32(textBox4->Text);
	}
}
private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^s = textBox5->Text;
	string nombre;
	MarshalString(s, nombre);
	string aux = "*" + nombre;
	if (checkBox3->Checked)
		nombre = aux;
	bool bandera = memoria->EliminarVariablePuntero(nombre);
	if(bandera)
		MessageBox::Show("Se elimino la variable");
	else
		MessageBox::Show("Esta variable no se puede eliminar porque no es puntero o no existe");
}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void TxtInicio_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^aux = "1";
	if (TxtInicio->Text == "")
		TxtInicio->Text = aux;
}
private: System::Void TxtFinal_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^aux = "4";
	if (TxtFinal->Text == "")
		TxtFinal->Text = aux;
}
private: System::Void CbxMamoria_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (CbxMamoria->TabIndex != 0 && CbxMamoria->TabIndex != 1)
		CbxMamoria->TabIndex = 0;
}
};
}

#pragma once


namespace Aplikacja {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			myStream = nullptr;
			dane = nullptr;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	//strumien z plikiem
	private: System::IO::Stream^ myStream;
	private: vector<int> *dane;


	protected: 

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox5;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(101, 163);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Sortowanie w C";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(98, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Liczba elementów";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"txt";
			this->openFileDialog1->FileName = L"Otworz plik";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(309, 19);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Otwórz";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(101, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(196, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(134, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 7;
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 211);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Wstawianie:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Wybieranie:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(56, 234);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"B¹belki:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(134, 211);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 11;
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(134, 234);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 12;
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(240, 163);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Sortowanie w asm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(103, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(202, 20);
			this->textBox2->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(311, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Zapisz";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(103, 19);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(71, 20);
			this->textBox3->TabIndex = 16;
			this->textBox3->Text = L"10000";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Location = System::Drawing::Point(14, 8);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(405, 105);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Generowanie danych";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(161, 76);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(92, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Generuj";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(11, 22);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Liczba elementów";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox5);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(14, 119);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(402, 274);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Sortowanie danych";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Form1::groupBox2_Enter);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkBox4);
			this->groupBox3->Controls->Add(this->checkBox3);
			this->groupBox3->Controls->Add(this->checkBox2);
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Location = System::Drawing::Point(34, 68);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(322, 66);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Oblicz";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Location = System::Drawing::Point(165, 43);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(73, 17);
			this->checkBox4->TabIndex = 24;
			this->checkBox4->Text = L"QuickSort";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(60, 43);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(79, 17);
			this->checkBox3->TabIndex = 23;
			this->checkBox3->Text = L"B¹belkowe";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(165, 19);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(81, 17);
			this->checkBox2->TabIndex = 22;
			this->checkBox2->Text = L"Wstawianie";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(60, 19);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(79, 17);
			this->checkBox1->TabIndex = 21;
			this->checkBox1->Text = L"Wybieranie";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(274, 256);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 13);
			this->label15->TabIndex = 20;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(275, 234);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 19;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(275, 211);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 13);
			this->label13->TabIndex = 18;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(275, 189);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 13);
			this->label12->TabIndex = 17;
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(134, 257);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 15;
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(42, 257);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"QuickSort:";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::saveFileDialog1_FileOk);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 396);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(424, 22);
			this->statusStrip1->TabIndex = 19;
			this->statusStrip1->Text = L"xxx";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(161, 140);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(135, 17);
			this->checkBox5->TabIndex = 23;
			this->checkBox5->Text = L"Generuj wyniki do pliku";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 418);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Sortowanie";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

							bool test=false;
							StringBuilder ^blad = gcnew System::Text::StringBuilder();
							string *buff = new string();
							double tstart, tstop;
							int size=0;
							vector<int> *tmp = new vector<int>();
							IO::StreamWriter ^_stream = nullptr;

							int* tab, *_tab;


							if(dane!=nullptr)
							{
								size = (int)dane->size();
								tab = new int[size+1];		//rezerwacja miejsca
								_tab = new int[size+1];
								for(int i=0; i<size; i++)	//kopiowanie tablicy
								{
									*(tab+i) = (int)dane->at(i);
									*(_tab+i) = (int)dane->at(i);
								}
								*(tab+size) = 0;					//zakonczenie tablicy
								*(_tab+size) = 0;
								if(checkBox1->Checked)
								{
									tstart = (double)clock()/CLOCKS_PER_SEC;
									sortSelect(_tab, size);
									tstop = (double)clock()/CLOCKS_PER_SEC;
									
									if(checkBox5->Checked)
									{
										_stream = gcnew IO::StreamWriter("WynikSelectC.txt");
										tmp->clear();
										for(int i=0; i<size; i++)
										{
											tmp->push_back(*(_tab+i));
											_stream->Write(*(_tab+i)+" ");
										}
										_stream->Close();
										delete _stream;
									}

									label3->Text = (new Double(tstop-tstart))->ToString("0.00000")+"s";

									for(int i=0; i<size; i++)	//kopiowanie tablicy
										*(_tab+i) = *(tab+i);
								}else
									label3->Text = "";

								if(checkBox2->Checked)
								{
									tstart = (double)clock()/CLOCKS_PER_SEC;
									sortInsert(_tab, size-1);
									tstop = (double)clock()/CLOCKS_PER_SEC;

									if(checkBox5->Checked)
									{
										_stream = gcnew IO::StreamWriter("WynikInsertC.txt");
										tmp->clear();
										for(int i=0; i<size; i++)
										{
											tmp->push_back(*(_tab+i));
											_stream->Write(*(_tab+i)+" ");
										}
										_stream->Close();
										delete _stream;
									}

									label7->Text = (new Double(tstop-tstart))->ToString("0.00000")+"s";

									for(int i=0; i<size; i++)	//kopiowanie tablicy
										*(_tab+i) = *(tab+i);
								}else
									label7->Text = "";

								if(checkBox3->Checked)
								{
									tstart = (double)clock()/CLOCKS_PER_SEC;
									sortBubble(_tab, size);
									tstop = (double)clock()/CLOCKS_PER_SEC;

									label8->Text = (new Double(tstop-tstart))->ToString("0.00000")+"s";

									if(checkBox5->Checked)
									{
										_stream = gcnew IO::StreamWriter("WynikBubbleC.txt");
										tmp->clear();
										for(int i=0; i<size; i++)
										{
											tmp->push_back(*(_tab+i));
											_stream->Write(*(_tab+i)+" ");
										}
										_stream->Close();
										delete _stream;
									}


									for(int i=0; i<size; i++)	//kopiowanie tablicy
										*(_tab+i) = *(tab+i);
								}else
									label8->Text = "";

								if(checkBox4->Checked)
								{
									tstart = (double)clock()/CLOCKS_PER_SEC;
									sortQuick(_tab, 0, size-1);
									tstop = (double)clock()/CLOCKS_PER_SEC;

									label11->Text = (new Double(tstop-tstart))->ToString("0.00000")+"s";

									if(checkBox5->Checked)
									{
										_stream = gcnew IO::StreamWriter("WynikQuickC.txt");
										tmp->clear();
										for(int i=0; i<size; i++)
										{
											tmp->push_back(*(_tab+i));
											_stream->Write(*(_tab+i)+" ");
										}
										_stream->Close();
										delete _stream;
									}
								}else
									label11->Text = "";


								delete [] tab;
								
								toolStripStatusLabel1->Text="Sortowanie zakoñczone";
							}else
								MessageBox::Show("Wpierw wybierz plik","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 
			 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
				 
						 bool test=false;
						 StringBuilder ^blad = gcnew System::Text::StringBuilder();
						 string *buff = new string();
						 int tmp=0;
						 int tmpLast=0;
						 bool ujemna=false;

						 if(myStream!=nullptr)
							 myStream->Close();
						 myStream=nullptr;

							if((myStream = openFileDialog1->OpenFile()) != nullptr)
							{
								textBox1->Text=openFileDialog1->FileName; 
								if(dane==nullptr)
									delete dane;
								dane = new vector<int>();
								do{
									tmp = myStream->ReadByte();


									if(tmp==32||tmp==-1)
									{
										if(atoi(buff->c_str())<INT_MAX && atoi(buff->c_str())>INT_MIN)
										{
											if(ujemna==true)
											{
												dane->push_back(-atoi(buff->c_str()));
												ujemna=false;
											}
											else
												dane->push_back(atoi(buff->c_str()));
											buff->clear();
										}
										else
											blad->Append("\nPrzekroczenie inta, s³owo: ")->Append(gcnew String(buff->c_str()))->Append(" pozycja: ")->Append(myStream->Position);
									}else if(tmp>47 && tmp<58)
										buff->append(1, (char)tmp);
									else if(tmp==45&& (tmpLast==32||tmpLast==0))
										ujemna=true;
									else
										blad->Append("\nWyst¹pi³ inny znak ni¿ liczba, znak(ASCII): ")->Append(tmp)->Append(" pozycja: ")->Append(myStream->Position);
									
									tmpLast=tmp;
								}while(tmp!=-1);
			
								myStream->Close();
								myStream=nullptr;

								if(blad->Length==0)
								{
									char tmp2[10];
									label1->Text="Liczba elementów:";
									label1->ResetForeColor();
									sprintf_s(tmp2, "%d", (int)dane->size());
									label2->Text=gcnew String(tmp2);
								}else{
									label1->Text=blad->ToString();
									label1->ForeColor = Drawing::Color::Red;
									delete dane;
									dane = nullptr;
								}
							}else
							{
								MessageBox::Show("Brak wskazanego pliku","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							}
				 
				 }

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
					 
           openFileDialog1->ShowDialog();
				 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

							bool test=false;
							StringBuilder ^blad = gcnew System::Text::StringBuilder();
							string *buff = new string();
							double tstart, tstop;
							int size=0;
							vector<int> *tmp = new vector<int>();
							IO::StreamWriter ^_stream = nullptr;

							int* tab, *_tab;


							if(dane!=nullptr)
							{
								size = (int)dane->size();
								tab = new int[size+1];		//rezerwacja miejsca
								_tab = new int[size+1];
								for(int i=0; i<size; i++)	//kopiowanie tablicy
								{
									*(tab+i) = (int)dane->at(i);
									*(_tab+i) = (int)dane->at(i);
								}
								*(tab+size) = 0;					//zakonczenie tablicy
								*(_tab+size) = 0;
								
								tmp->clear();
								for(int i=0; i<size; i++)
								{
									tmp->push_back(*(_tab+i));
								}
								if(checkBox1->Checked)
								{
									tstart = (double)clock()/CLOCKS_PER_SEC;
									sortSelectAsm(_tab, size);
									tstop = (double)clock()/CLOCKS_PER_SEC;
									label12->Text = (new Double(tstop-tstart))->ToString("0.00000")+"s";
							
									if(checkBox5->Checked)
									{
										_stream = gcnew IO::StreamWriter("WynikSelectAsm.txt");
										for(int i=0; i<size; i++)
										{
											_stream->Write(*(_tab+i)+" ");
										}
										_stream->Close();
										delete _stream;
									}

									for(int i=0; i<size; i++)	//kopiowanie tablicy
										*(_tab+i) = *(tab+i);
								}else
									label12->Text = "";
								
								if(checkBox2->Checked)
								{

									tstart = (double)clock()/CLOCKS_PER_SEC;
									sortInsertAsm(_tab, size);
									tstop = (double)clock()/CLOCKS_PER_SEC;
									label13->Text = (new Double(tstop-tstart))->ToString("0.00000")+"s";

									if(checkBox5->Checked)
									{
										_stream = gcnew IO::StreamWriter("WynikInsertAsm.txt");
										for(int i=0; i<size; i++)
										{
											_stream->Write(*(_tab+i)+" ");
										}
										_stream->Close();
										delete _stream;
									}

									for(int i=0; i<size; i++)	//kopiowanie tablicy
										*(_tab+i) = *(tab+i);
								}else
									label13->Text = "";

								if(checkBox3->Checked)
								{
									tstart = (double)clock()/CLOCKS_PER_SEC;
									sortBubbleAsm(_tab, size);
									tstop = (double)clock()/CLOCKS_PER_SEC;
									label14->Text = (new Double(tstop-tstart))->ToString("0.00000")+"s";

									if(checkBox5->Checked)
									{
										_stream = gcnew IO::StreamWriter("WynikBubbleAsm.txt");
										for(int i=0; i<size; i++)
										{
											_stream->Write(*(_tab+i)+" ");
										}
										_stream->Close();
										delete _stream;
									}

									for(int i=0; i<size; i++)	//kopiowanie tablicy
										*(_tab+i) = *(tab+i);
								}else
									label14->Text = "";

								if(checkBox4->Checked)
								{
									tstart = (double)clock()/CLOCKS_PER_SEC;
									sortQuickAsm(_tab, size);
									tstop = (double)clock()/CLOCKS_PER_SEC;
									label15->Text = (new Double(tstop-tstart))->ToString("0.00000")+"s";

									if(checkBox5->Checked)
									{
										_stream = gcnew IO::StreamWriter("WynikQuickAsm.txt");
										for(int i=0; i<size; i++)
										{
											_stream->Write(*(_tab+i)+" ");
										}
										_stream->Close();
										delete _stream;
									}
								}else
									label15->Text = "";

								delete [] tab;
								
								toolStripStatusLabel1->Text="Sortowanie zakoñczone";
							}else
								MessageBox::Show("Wpierw wybierz plik","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							

				 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
						saveFileDialog1->ShowDialog();
				 }
private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
							
					 textBox2->Text=saveFileDialog1->FileName; 
				 }
private: bool is_number(String^ s)
{
	array<wchar_t> ^x = s->ToCharArray();
	for (int i = 0; i < x->Length; i++) {
		if (!isdigit(x[i]))
			 return false;
	}
	return true;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
							vector<int> *lista;
							IO::Stream^ _Stream;
							char buf[32];
							double tstart,tstop;

							if(!is_number(textBox3->Text)||textBox3->Text=="")
								MessageBox::Show("Wpisz poprawn¹ liczbê","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							else{
								if((_Stream = saveFileDialog1->OpenFile()) != nullptr)
								{
									lista = new vector<int>();
									srand( (unsigned)time( NULL ) );

									/*for(int i=0; i<Convert::ToInt32(textBox3->Text); i++)
									{
										lista->push_back((int)((double)rand() / (RAND_MAX + 1) * (32765+32765) - 32765));
									}*/
									
									tstart = (double)clock()/CLOCKS_PER_SEC;
									for(int i=0; i<Convert::ToInt32(textBox3->Text)-1; i++)
									{
										_itoa_s((int)((double)rand() / (RAND_MAX + 1) * (32765+32765) - 32765), buf, 32, 10 );
										for(int j=0; buf[j]!=0; j++)
										{
											_Stream->WriteByte(buf[j]);
										}
										_Stream->WriteByte(32);	//spacja
									}
									_Stream->Close();
									tstop = (double)clock()/CLOCKS_PER_SEC;
										toolStripStatusLabel1->Text = "Plik zosta³ pomyœlnie stworzony. Czas: "+(tstop-tstart).ToString()+"s";
								}else
								{
									MessageBox::Show("Brak wskazanego pliku","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
								}
							}



				 }
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
				 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
				 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
				 }
};
}


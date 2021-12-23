#pragma once
#include <fstream>
#include <cstdlib> 
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h> 
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <cstdio>
#include <ctime>
#include <thread>
#include <mutex>
#include <iterator>
#include <chrono>
#include <iomanip>
#include <fileapi.h>

#include "DllEP.h"

namespace EdPract {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для Prog
	/// </summary>
	public ref class Prog : public System::Windows::Forms::Form
	{
	public:
		Prog(void)
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
		~Prog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button3;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->Location = System::Drawing::Point(402, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Программа";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(336, 402);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(308, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Показать результат";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Prog::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(39, 82);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(430, 239);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Prog::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(497, 82);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(445, 239);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(345, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(140, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(228, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Исходные данные ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(671, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Результат";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 367);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(321, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Шрейдер Кристина Ивановна, 501 группа";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(706, 377);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Время";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(706, 341);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Дата";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button3->Location = System::Drawing::Point(336, 341);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(308, 46);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Показать исходные данные";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Prog::button3_Click);
			// 
			// Prog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 467);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Prog";
			this->Text = L"Prog";
			this->Load += gcnew System::EventHandler(this, &Prog::Prog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: Thread^ t1;
private: Thread^ t2;
public: Mutex Join;

public: void T1() { 
	char ltr[100];
	ifstream file1;
	file1.open("100.txt");
	int k = 0;
	for (int i = 0; i < 5; i++)
	{
		std::vector<char> v; 
		for (int j = k; j < k + 10; j++)
		{
			file1 >> ltr[j];
			v.push_back(ltr[j]);
		}
		k += 10;
		sort(v.begin(), v.end()); 
		writeTo(v); 
	}
	file1.close();
}
	public: void T2() { 
		char ltr[100];
		ifstream file1;
		file1.open("100.txt");
		int n = 50;
		for (int i = 5; i < 10; i++)
		{
			std::vector<char> v;
			for (int j = n; j < n + 10; j++)
			{
				file1 >> ltr[j];
				v.push_back(ltr[j]);
			}
			n += 10;
			sort(v.begin(), v.end()); 
			writeTo(v); 
		}
		file1.close();
	}
public: bool b;

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Filename = "100.txt";
	StreamReader^ file = File::OpenText(Filename);
	textBox1->Text = file->ReadToEnd();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	remove("new.txt");
	t1 = gcnew Thread(gcnew ThreadStart(this, &Prog::T1)); 
	t2 = gcnew Thread(gcnew ThreadStart(this, &Prog::T2));
	t1->Start();
	t1->Join(); 
	t2->Start();
	t2->Join();
	
	String^ NameOfFile = "new.txt";
	try
	{
		StreamReader^ file = File::OpenText(NameOfFile);
		textBox2->Text = file->ReadToEnd();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "Ой!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
private: System::Void Prog_Load(System::Object^ sender, System::EventArgs^ e) {
	
	SYSTEMTIME lt;
	GetLocalTime(&lt);
	this->label7->Text = Convert::ToString("Дата: " + lt.wDay + "." + lt.wMonth + "." + lt.wYear);
	this->label6->Text = Convert::ToString("Время: " + lt.wHour + ":" + lt.wMinute + ":" + lt.wSecond);
}

};
}

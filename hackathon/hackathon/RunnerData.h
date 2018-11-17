#pragma once
#include "ResultWindow.h"
#include "Runner.h"
#include "SaveToFile.h"
#include "defines.hpp"
#include <msclr\marshal_cppstd.h>

namespace hackathon {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o RunnerData
	/// </summary>
	public ref class RunnerData : public System::Windows::Forms::Form
	{
	public:
		RunnerData(void)
		{
			InitializeComponent();
			this->SelectAge->SelectedIndex = 0;
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		RunnerData(System::Windows::Forms::Form ^previousForm) {
			this->previousForm = previousForm;
			InitializeComponent();
			this->CenterToScreen();
			this->SelectAge->SelectedIndex = 0;
			this->SelectDistance->SelectedIndex = 0;
			this->SelectTargetDistance->SelectedIndex = 0;
			this->MessageLabel->Hide();
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~RunnerData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  QuitButton;
	private: System::Windows::Forms::Label^  ProjectLabel;
	private: System::Windows::Forms::CheckedListBox^  sexChoice;
	private: System::Windows::Forms::Label^  Sex;

	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		int numChoice = 0;
		bool isChecked = false;
		int previousChoice = -1;
		System::Windows::Forms::Form ^previousForm;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  Age;
	private: System::Windows::Forms::Label^  Record;
	private: System::Windows::Forms::ComboBox^  SelectAge;
	private: System::Windows::Forms::ComboBox^  SelectDistance;
	private: System::Windows::Forms::Label^  Time;
	private: System::Windows::Forms::Label^  Distance;
	private: System::Windows::Forms::ComboBox^  SelectTime;
	private: System::Windows::Forms::Label^  inLabel;
	private: System::Windows::Forms::ComboBox^  SelectTargetDistance;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  WriteName;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  MessageLabel;









			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RunnerData::typeid));
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->ProjectLabel = (gcnew System::Windows::Forms::Label());
			this->sexChoice = (gcnew System::Windows::Forms::CheckedListBox());
			this->Sex = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->WriteName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SelectTargetDistance = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inLabel = (gcnew System::Windows::Forms::Label());
			this->SelectTime = (gcnew System::Windows::Forms::ComboBox());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->Distance = (gcnew System::Windows::Forms::Label());
			this->SelectDistance = (gcnew System::Windows::Forms::ComboBox());
			this->SelectAge = (gcnew System::Windows::Forms::ComboBox());
			this->Record = (gcnew System::Windows::Forms::Label());
			this->Age = (gcnew System::Windows::Forms::Label());
			this->MessageLabel = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// QuitButton
			// 
			this->QuitButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QuitButton.Image")));
			this->QuitButton->Location = System::Drawing::Point(813, 0);
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->Size = System::Drawing::Size(47, 46);
			this->QuitButton->TabIndex = 2;
			this->QuitButton->UseVisualStyleBackColor = true;
			this->QuitButton->Click += gcnew System::EventHandler(this, &RunnerData::QuitButton_Click);
			// 
			// ProjectLabel
			// 
			this->ProjectLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ProjectLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ProjectLabel->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->ProjectLabel->Location = System::Drawing::Point(0, 0);
			this->ProjectLabel->Name = L"ProjectLabel";
			this->ProjectLabel->Size = System::Drawing::Size(860, 76);
			this->ProjectLabel->TabIndex = 3;
			this->ProjectLabel->Text = L"Put in your data";
			this->ProjectLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// sexChoice
			// 
			this->sexChoice->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sexChoice->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->sexChoice->CheckOnClick = true;
			this->sexChoice->Cursor = System::Windows::Forms::Cursors::Default;
			this->sexChoice->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sexChoice->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->sexChoice->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->sexChoice->Location = System::Drawing::Point(86, 86);
			this->sexChoice->Name = L"sexChoice";
			this->sexChoice->Size = System::Drawing::Size(119, 44);
			this->sexChoice->TabIndex = 4;
			this->sexChoice->SelectedIndexChanged += gcnew System::EventHandler(this, &RunnerData::sexChoice_SelectedIndexChanged);
			// 
			// Sex
			// 
			this->Sex->AutoSize = true;
			this->Sex->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sex->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Sex->Location = System::Drawing::Point(3, 86);
			this->Sex->Name = L"Sex";
			this->Sex->Size = System::Drawing::Size(42, 23);
			this->Sex->TabIndex = 5;
			this->Sex->Text = L"Sex";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->WriteName);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->SelectTargetDistance);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->inLabel);
			this->panel1->Controls->Add(this->SelectTime);
			this->panel1->Controls->Add(this->Time);
			this->panel1->Controls->Add(this->Distance);
			this->panel1->Controls->Add(this->SelectDistance);
			this->panel1->Controls->Add(this->SelectAge);
			this->panel1->Controls->Add(this->Record);
			this->panel1->Controls->Add(this->Age);
			this->panel1->Controls->Add(this->Sex);
			this->panel1->Controls->Add(this->sexChoice);
			this->panel1->Location = System::Drawing::Point(233, 79);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(400, 377);
			this->panel1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->button1->Location = System::Drawing::Point(95, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 48);
			this->button1->TabIndex = 20;
			this->button1->Text = L"CREATE TRAINING PLAN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RunnerData::button1_Click);
			// 
			// WriteName
			// 
			this->WriteName->BackColor = System::Drawing::SystemColors::Window;
			this->WriteName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->WriteName->ForeColor = System::Drawing::SystemColors::ControlText;
			this->WriteName->Location = System::Drawing::Point(83, 24);
			this->WriteName->Name = L"WriteName";
			this->WriteName->Size = System::Drawing::Size(121, 27);
			this->WriteName->TabIndex = 19;
			this->WriteName->TextChanged += gcnew System::EventHandler(this, &RunnerData::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(3, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 23);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Name";
			// 
			// SelectTargetDistance
			// 
			this->SelectTargetDistance->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SelectTargetDistance->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->SelectTargetDistance->ForeColor = System::Drawing::SystemColors::Desktop;
			this->SelectTargetDistance->FormattingEnabled = true;
			this->SelectTargetDistance->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"5 km", L"10 km ", L"Half marathon",
					L"Marathon"
			});
			this->SelectTargetDistance->Location = System::Drawing::Point(164, 274);
			this->SelectTargetDistance->Name = L"SelectTargetDistance";
			this->SelectTargetDistance->Size = System::Drawing::Size(192, 28);
			this->SelectTargetDistance->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(3, 274);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 23);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Target distance";
			// 
			// inLabel
			// 
			this->inLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inLabel->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->inLabel->Location = System::Drawing::Point(210, 203);
			this->inLabel->Name = L"inLabel";
			this->inLabel->Size = System::Drawing::Size(25, 23);
			this->inLabel->TabIndex = 15;
			this->inLabel->Text = L"in";
			this->inLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SelectTime
			// 
			this->SelectTime->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SelectTime->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->SelectTime->ForeColor = System::Drawing::SystemColors::Desktop;
			this->SelectTime->FormattingEnabled = true;
			this->SelectTime->Location = System::Drawing::Point(235, 200);
			this->SelectTime->Name = L"SelectTime";
			this->SelectTime->Size = System::Drawing::Size(121, 28);
			this->SelectTime->TabIndex = 14;
			this->SelectTime->SelectedIndexChanged += gcnew System::EventHandler(this, &RunnerData::SelectTime_SelectedIndexChanged);
			// 
			// Time
			// 
			this->Time->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Time->Location = System::Drawing::Point(235, 231);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(121, 23);
			this->Time->TabIndex = 13;
			this->Time->Text = L"Time";
			this->Time->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Distance
			// 
			this->Distance->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Distance->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Distance->Location = System::Drawing::Point(83, 231);
			this->Distance->Name = L"Distance";
			this->Distance->Size = System::Drawing::Size(121, 23);
			this->Distance->TabIndex = 12;
			this->Distance->Text = L"Distance";
			this->Distance->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SelectDistance
			// 
			this->SelectDistance->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SelectDistance->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->SelectDistance->ForeColor = System::Drawing::SystemColors::Desktop;
			this->SelectDistance->FormattingEnabled = true;
			this->SelectDistance->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2 km", L"5 km", L"10 km" });
			this->SelectDistance->Location = System::Drawing::Point(83, 200);
			this->SelectDistance->Name = L"SelectDistance";
			this->SelectDistance->Size = System::Drawing::Size(121, 28);
			this->SelectDistance->TabIndex = 10;
			this->SelectDistance->SelectedIndexChanged += gcnew System::EventHandler(this, &RunnerData::SelectRecord_SelectedIndexChanged);
			// 
			// SelectAge
			// 
			this->SelectAge->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SelectAge->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->SelectAge->ForeColor = System::Drawing::SystemColors::Desktop;
			this->SelectAge->FormattingEnabled = true;
			this->SelectAge->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"14 - 16", L"17 - 19", L"19 - 30", L"31 - 40",
					L"41 - 50", L"50+"
			});
			this->SelectAge->Location = System::Drawing::Point(83, 154);
			this->SelectAge->Name = L"SelectAge";
			this->SelectAge->Size = System::Drawing::Size(121, 28);
			this->SelectAge->TabIndex = 9;
			this->SelectAge->SelectedIndexChanged += gcnew System::EventHandler(this, &RunnerData::SelectAge_SelectedIndexChanged);
			// 
			// Record
			// 
			this->Record->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Record->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Record->Location = System::Drawing::Point(3, 200);
			this->Record->Name = L"Record";
			this->Record->Size = System::Drawing::Size(74, 23);
			this->Record->TabIndex = 8;
			this->Record->Text = L"Record";
			this->Record->Click += gcnew System::EventHandler(this, &RunnerData::label1_Click_1);
			// 
			// Age
			// 
			this->Age->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Age->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Age->Location = System::Drawing::Point(3, 154);
			this->Age->Name = L"Age";
			this->Age->Size = System::Drawing::Size(61, 23);
			this->Age->TabIndex = 7;
			this->Age->Text = L"Age";
			this->Age->Click += gcnew System::EventHandler(this, &RunnerData::label1_Click);
			// 
			// MessageLabel
			// 
			this->MessageLabel->AutoSize = true;
			this->MessageLabel->BackColor = System::Drawing::SystemColors::GrayText;
			this->MessageLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13, System::Drawing::FontStyle::Bold));
			this->MessageLabel->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->MessageLabel->Location = System::Drawing::Point(201, 459);
			this->MessageLabel->Name = L"MessageLabel";
			this->MessageLabel->Size = System::Drawing::Size(467, 25);
			this->MessageLabel->TabIndex = 7;
			this->MessageLabel->Text = L"You have to write your name and choose your sex!";
			// 
			// RunnerData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(860, 486);
			this->ControlBox = false;
			this->Controls->Add(this->MessageLabel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->QuitButton);
			this->Controls->Add(this->ProjectLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RunnerData";
			this->Text = L"S";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void QuitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		this->previousForm->Close();
	}

	private: System::Void sexChoice_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	

		if (this->sexChoice->SelectedIndex == 0)
		{

			if (this->previousChoice == 1 && numChoice % 2)
			{
				this->numChoice = 0;
			}
			if (numChoice % 2)
			{
				this->isChecked = false;
			}
			else
			{
				this->isChecked = true;
			}
			this->sexChoice->SetItemChecked(1, 0);
			this->numChoice++;
			this->previousChoice = 0;
		}
		else
		{
			if (this->previousChoice == 0 && numChoice % 2)
			{
				this->numChoice = 0;
			}
			if (numChoice % 2)
			{
				this->isChecked = false;
			}
			else
			{
				this->isChecked = true;
			}
			this->sexChoice->SetItemChecked(0, 0);
			this->numChoice++;
			this->previousChoice = 1;

		}
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void SelectAge_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void SelectRecord_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->SelectDistance->SelectedIndex == 0)
	{
		this->SelectTime->Items->Clear();
		this->SelectTime->Items->Clear();
		this->SelectTime->Items->Insert(0, L"6:01 - 7:00");
		this->SelectTime->Items->Insert(1, L"7:01 - 8:00");
		this->SelectTime->Items->Insert(2, L"8:01 - 9:00");
		this->SelectTime->Items->Insert(3, L"9:01 - 10:00");
		this->SelectTime->Items->Insert(4, L"10:01 - 11:00");
		this->SelectTime->Items->Insert(5, L"11:01 - 12:00");
		this->SelectTime->Items->Insert(6, L"12:01 - 13:00");
		this->SelectTime->Items->Insert(7, L"13:01 - 14:00");
		this->SelectTime->Items->Insert(8, L"14:01 - 15:00");
		this->SelectTime->Items->Insert(9, L"No Idea");
		this->SelectTime->SelectedIndex = 0;
	}
	else if (this->SelectDistance->SelectedIndex == 1)
	{
		this->SelectTime->Items->Clear();
		this->SelectTime->Items->Insert(0, L"15:01 - 17:30");
		this->SelectTime->Items->Insert(1, L"17:31 - 20:00");
		this->SelectTime->Items->Insert(2, L"20:01 - 22:30");
		this->SelectTime->Items->Insert(3, L"22:31 - 25:00");
		this->SelectTime->Items->Insert(4, L"25:01 - 27:30");
		this->SelectTime->Items->Insert(5, L"27:31 - 30:00");
		this->SelectTime->Items->Insert(6, L"30:01 - 32:50");
		this->SelectTime->Items->Insert(7, L"32:51 - 35:00");
		this->SelectTime->Items->Insert(8, L"35:01 - 37:30");
		this->SelectTime->Items->Insert(9, L"No Idea");
		this->SelectTime->SelectedIndex = 0;
	}
	else if (this->SelectDistance->SelectedIndex == 2)
	{
		this->SelectTime->Items->Clear();
		this->SelectTime->Items->Clear();
		this->SelectTime->Items->Insert(0, L"30:01 - 35:00");
		this->SelectTime->Items->Insert(1, L"35:01 - 40:00");
		this->SelectTime->Items->Insert(2, L"40:01 - 45:00");
		this->SelectTime->Items->Insert(3, L"45:01 - 50:00");
		this->SelectTime->Items->Insert(4, L"50:01 - 55:00");
		this->SelectTime->Items->Insert(5, L"55:01 - 60:00");
		this->SelectTime->Items->Insert(6, L"60:01 - 65:00");
		this->SelectTime->Items->Insert(7, L"65:01 - 70:00");
		this->SelectTime->Items->Insert(8, L"70:01 - 75:00");
		this->SelectTime->Items->Insert(9, L"No Idea");
		this->SelectTime->SelectedIndex = 0;
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	// create plan 
	if (!isChecked || this->WriteName->Text == "")
	{
		this->MessageLabel->Show();
	}
	else
	{
		// creating plan
		Runner test;

		// save file 

		string filename;
		System::String^ userName = this->WriteName->Text;
		filename = "../" + msclr::interop::marshal_as<std::string>(userName); // convert text to string 
		filename += ".csv";

		CsvFile saveFile(filename);
		std::vector <Week> weeks;
		Week week1("rest", "rest", "rest", "rest", "super mega heavy run 2000km in 24h", "rest", "rest");
		Week week2("rest", "rest", "rest", "rest", "rest", "rest", "rest");
		Week week3("rest", "rest", "rest", "rest", "rest", "rest", "rest");
		Week week4("rest", "rest", "rest", "rest", "rest", "rest", "rest");
		Week week5("rest", "rest", "rest", "rest", "rest", "rest", "rest");

		weeks.push_back(week1);
		weeks.push_back(week2);
		weeks.push_back(week3);
		weeks.push_back(week4);
		weeks.push_back(week5);

		saveFile.write(weeks);

		// go to next window
		this->Hide();
		ResultWindow^ resultWindow = gcnew ResultWindow();
		resultWindow->ShowDialog();
	}
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void SelectTime_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
};

}


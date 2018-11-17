#pragma once

namespace hackathon {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ResultWindow
	/// </summary>
	public ref class ResultWindow : public System::Windows::Forms::Form
	{
	public:
		ResultWindow(void)
		{
			InitializeComponent();
			this->CenterToScreen();
			this->WeekLabel->Text = "Week " + this->weekNumber;
			this->BackButton->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

		ResultWindow(System::String^ a, System::String^b, System::String^ c, System::String^ d, System::String^ e, System::String^ f, System::String^ g)
		{
			InitializeComponent();
			this->CenterToScreen();
			this->WeekLabel->Text = "Week " + this->weekNumber;
			this->BackButton->Hide();
			this->Monday->Text = a;
			this->Tuesday->Text = b;
			this->Wednesday->Text = c;
			this->Thursday->Text = d;
			this->Friday->Text = e;
			this->Saturday->Text = f;
			this->Sunday->Text = g;

			if (a != "" && a != "Rest Day")
			{
				// SET COLOR 
				this->Monday->BackColor = System::Drawing::Color::Orange;
			}
			if (b != "" && b != "Rest Day")
			{
				// SET COLOR 
				this->Tuesday->BackColor = System::Drawing::Color::Orange;
			}
			if (c != "" && c != "Rest Day")
			{
				// SET COLOR 
				this->Wednesday->BackColor = System::Drawing::Color::Orange;
			}
			if (d != "" && d != "Rest Day")
			{
				// SET COLOR 
				this->Thursday->BackColor = System::Drawing::Color::Orange;
			}
			if (e != "" && e != "Rest Day")
			{
				// SET COLOR 
				this->Friday->BackColor = System::Drawing::Color::Orange;
			}
			if (f != "" && f != "Rest Day")
			{
				// SET COLOR 
				this->Saturday->BackColor = System::Drawing::Color::Orange;
			}
			if (g != "" && g != "Rest Day")
			{
				// SET COLOR 
				this->Sunday->BackColor = System::Drawing::Color::Orange;
			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ResultWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  ProjectLabel;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  WeekLabel;

	protected:

	private:
		/// <summary>
		int weekNumber = 1;
	private: System::Windows::Forms::Button^  NextButton;
	private: System::Windows::Forms::Button^  BackButton;
	private: System::Windows::Forms::Button^  Sunday;



	private: System::Windows::Forms::Button^  Saturday;

	private: System::Windows::Forms::Button^  Friday;

	private: System::Windows::Forms::Button^  Thursday;

	private: System::Windows::Forms::Button^  Wednesday;

	private: System::Windows::Forms::Button^  Tuesday;


	private: System::Windows::Forms::Button^  Monday;
	private: System::Windows::Forms::Button^  QuitButton;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  MondayLabel;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ResultWindow::typeid));
			this->ProjectLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MondayLabel = (gcnew System::Windows::Forms::Label());
			this->Sunday = (gcnew System::Windows::Forms::Button());
			this->Saturday = (gcnew System::Windows::Forms::Button());
			this->Friday = (gcnew System::Windows::Forms::Button());
			this->Thursday = (gcnew System::Windows::Forms::Button());
			this->Wednesday = (gcnew System::Windows::Forms::Button());
			this->Tuesday = (gcnew System::Windows::Forms::Button());
			this->Monday = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->WeekLabel = (gcnew System::Windows::Forms::Label());
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
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
			this->ProjectLabel->TabIndex = 1;
			this->ProjectLabel->Text = L"Your training plan";
			this->ProjectLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->MondayLabel);
			this->panel1->Controls->Add(this->Sunday);
			this->panel1->Controls->Add(this->Saturday);
			this->panel1->Controls->Add(this->Friday);
			this->panel1->Controls->Add(this->Thursday);
			this->panel1->Controls->Add(this->Wednesday);
			this->panel1->Controls->Add(this->Tuesday);
			this->panel1->Controls->Add(this->Monday);
			this->panel1->Controls->Add(this->BackButton);
			this->panel1->Controls->Add(this->NextButton);
			this->panel1->Controls->Add(this->WeekLabel);
			this->panel1->Location = System::Drawing::Point(30, 80);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(800, 381);
			this->panel1->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(687, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 20);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Sunday";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(581, 87);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Saturday";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(476, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Friday";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(368, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Thursday";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(257, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Wednesday";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(157, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Tuesday";
			this->label1->Click += gcnew System::EventHandler(this, &ResultWindow::label1_Click);
			// 
			// MondayLabel
			// 
			this->MondayLabel->AutoSize = true;
			this->MondayLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->MondayLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->MondayLabel->Location = System::Drawing::Point(50, 87);
			this->MondayLabel->Name = L"MondayLabel";
			this->MondayLabel->Size = System::Drawing::Size(64, 20);
			this->MondayLabel->TabIndex = 10;
			this->MondayLabel->Text = L"Monday";
			// 
			// Sunday
			// 
			this->Sunday->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Sunday->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F));
			this->Sunday->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Sunday->Location = System::Drawing::Point(669, 110);
			this->Sunday->Name = L"Sunday";
			this->Sunday->Size = System::Drawing::Size(100, 210);
			this->Sunday->TabIndex = 9;
			this->Sunday->Text = L"Sunday";
			this->Sunday->UseVisualStyleBackColor = false;
			this->Sunday->Click += gcnew System::EventHandler(this, &ResultWindow::Sunday_Click);
			// 
			// Saturday
			// 
			this->Saturday->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Saturday->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F));
			this->Saturday->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Saturday->Location = System::Drawing::Point(563, 110);
			this->Saturday->Name = L"Saturday";
			this->Saturday->Size = System::Drawing::Size(100, 210);
			this->Saturday->TabIndex = 8;
			this->Saturday->Text = L"Saturday";
			this->Saturday->UseVisualStyleBackColor = false;
			this->Saturday->Click += gcnew System::EventHandler(this, &ResultWindow::Saturday_Click);
			// 
			// Friday
			// 
			this->Friday->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Friday->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F));
			this->Friday->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Friday->Location = System::Drawing::Point(457, 110);
			this->Friday->Name = L"Friday";
			this->Friday->Size = System::Drawing::Size(100, 210);
			this->Friday->TabIndex = 7;
			this->Friday->Text = L"Friday";
			this->Friday->UseVisualStyleBackColor = false;
			this->Friday->Click += gcnew System::EventHandler(this, &ResultWindow::Friday_Click);
			// 
			// Thursday
			// 
			this->Thursday->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Thursday->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F));
			this->Thursday->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Thursday->Location = System::Drawing::Point(351, 110);
			this->Thursday->Name = L"Thursday";
			this->Thursday->Size = System::Drawing::Size(100, 210);
			this->Thursday->TabIndex = 6;
			this->Thursday->Text = L"Thursday";
			this->Thursday->UseVisualStyleBackColor = false;
			this->Thursday->Click += gcnew System::EventHandler(this, &ResultWindow::Thursday_Click);
			// 
			// Wednesday
			// 
			this->Wednesday->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Wednesday->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F));
			this->Wednesday->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Wednesday->Location = System::Drawing::Point(245, 110);
			this->Wednesday->Name = L"Wednesday";
			this->Wednesday->Size = System::Drawing::Size(100, 210);
			this->Wednesday->TabIndex = 5;
			this->Wednesday->Text = L"Wednesday";
			this->Wednesday->UseVisualStyleBackColor = false;
			this->Wednesday->Click += gcnew System::EventHandler(this, &ResultWindow::Wednesday_Click);
			// 
			// Tuesday
			// 
			this->Tuesday->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Tuesday->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F));
			this->Tuesday->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Tuesday->Location = System::Drawing::Point(139, 110);
			this->Tuesday->Name = L"Tuesday";
			this->Tuesday->Size = System::Drawing::Size(100, 210);
			this->Tuesday->TabIndex = 4;
			this->Tuesday->Text = L"Tuesday";
			this->Tuesday->UseVisualStyleBackColor = false;
			this->Tuesday->Click += gcnew System::EventHandler(this, &ResultWindow::Tuesday_Click);
			// 
			// Monday
			// 
			this->Monday->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Monday->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 11.25F));
			this->Monday->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Monday->Location = System::Drawing::Point(33, 110);
			this->Monday->Name = L"Monday";
			this->Monday->Size = System::Drawing::Size(100, 210);
			this->Monday->TabIndex = 3;
			this->Monday->Text = L"Monday";
			this->Monday->UseVisualStyleBackColor = false;
			this->Monday->Click += gcnew System::EventHandler(this, &ResultWindow::Monday_Click);
			// 
			// BackButton
			// 
			this->BackButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->BackButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BackButton.Image")));
			this->BackButton->Location = System::Drawing::Point(0, 0);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(53, 52);
			this->BackButton->TabIndex = 2;
			this->BackButton->UseVisualStyleBackColor = false;
			this->BackButton->Click += gcnew System::EventHandler(this, &ResultWindow::BackButton_Click);
			// 
			// NextButton
			// 
			this->NextButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->NextButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NextButton.Image")));
			this->NextButton->Location = System::Drawing::Point(747, 0);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(53, 52);
			this->NextButton->TabIndex = 1;
			this->NextButton->UseVisualStyleBackColor = false;
			this->NextButton->Click += gcnew System::EventHandler(this, &ResultWindow::NextButton_Click);
			// 
			// WeekLabel
			// 
			this->WeekLabel->AutoSize = true;
			this->WeekLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->WeekLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->WeekLabel->Location = System::Drawing::Point(346, 9);
			this->WeekLabel->Name = L"WeekLabel";
			this->WeekLabel->Size = System::Drawing::Size(93, 31);
			this->WeekLabel->TabIndex = 0;
			this->WeekLabel->Text = L"Week x";
			this->WeekLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// QuitButton
			// 
			this->QuitButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QuitButton.Image")));
			this->QuitButton->Location = System::Drawing::Point(813, 0);
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->Size = System::Drawing::Size(47, 46);
			this->QuitButton->TabIndex = 10;
			this->QuitButton->UseVisualStyleBackColor = true;
			this->QuitButton->Click += gcnew System::EventHandler(this, &ResultWindow::QuitButton_Click);
			// 
			// ResultWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(860, 486);
			this->Controls->Add(this->QuitButton);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ProjectLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ResultWindow";
			this->Text = L"ResultWindow";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void NextButton_Click(System::Object^  sender, System::EventArgs^  e) {
	int const maxWeekNumber = 200;
	if (this->weekNumber != maxWeekNumber)
	{
		this->weekNumber++;
		this->WeekLabel->Text = "Week " + this->weekNumber;
		this->BackButton->Show();
	}
	else
	{
		this->weekNumber = 200;
		this->WeekLabel->Text = "Week 200";
		this->BackButton->Show();
	}
}
private: System::Void BackButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->weekNumber--;
	this->WeekLabel->Text = "Week " + this->weekNumber;
	if (this->weekNumber == 1)
	{
		this->BackButton->Hide();
	}
}
private: System::Void Monday_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Tuesday_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Wednesday_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Thursday_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Friday_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Saturday_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Sunday_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void QuitButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

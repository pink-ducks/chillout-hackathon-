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
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->WeekLabel = (gcnew System::Windows::Forms::Label());
			this->Monday = (gcnew System::Windows::Forms::Button());
			this->Tuesday = (gcnew System::Windows::Forms::Button());
			this->Wednesday = (gcnew System::Windows::Forms::Button());
			this->Thursday = (gcnew System::Windows::Forms::Button());
			this->Friday = (gcnew System::Windows::Forms::Button());
			this->Saturday = (gcnew System::Windows::Forms::Button());
			this->Sunday = (gcnew System::Windows::Forms::Button());
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
			this->Monday->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Monday->UseVisualStyleBackColor = false;
			this->Monday->Click += gcnew System::EventHandler(this, &ResultWindow::Monday_Click);
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
			this->Tuesday->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Tuesday->UseVisualStyleBackColor = false;
			this->Tuesday->Click += gcnew System::EventHandler(this, &ResultWindow::Tuesday_Click);
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
			this->Wednesday->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Wednesday->UseVisualStyleBackColor = false;
			this->Wednesday->Click += gcnew System::EventHandler(this, &ResultWindow::Wednesday_Click);
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
			this->Thursday->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Thursday->UseVisualStyleBackColor = false;
			this->Thursday->Click += gcnew System::EventHandler(this, &ResultWindow::Thursday_Click);
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
			this->Friday->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Friday->UseVisualStyleBackColor = false;
			this->Friday->Click += gcnew System::EventHandler(this, &ResultWindow::Friday_Click);
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
			this->Saturday->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Saturday->UseVisualStyleBackColor = false;
			this->Saturday->Click += gcnew System::EventHandler(this, &ResultWindow::Saturday_Click);
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
			this->Sunday->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Sunday->UseVisualStyleBackColor = false;
			this->Sunday->Click += gcnew System::EventHandler(this, &ResultWindow::Sunday_Click);
			// 
			// ResultWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(860, 486);
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
	this->weekNumber++;
	this->WeekLabel->Text = "Week " + this->weekNumber;
	this->BackButton->Show();
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
};
}

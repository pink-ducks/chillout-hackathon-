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
			this->WeekLabel = (gcnew System::Windows::Forms::Label());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
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
			this->panel1->Controls->Add(this->BackButton);
			this->panel1->Controls->Add(this->NextButton);
			this->panel1->Controls->Add(this->WeekLabel);
			this->panel1->Location = System::Drawing::Point(30, 80);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(800, 381);
			this->panel1->TabIndex = 2;
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
};
}

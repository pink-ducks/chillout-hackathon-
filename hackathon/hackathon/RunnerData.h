#pragma once

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
			this->SelectAge->SelectedIndex = 0;
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
		System::Windows::Forms::Form ^previousForm;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  Age;
	private: System::Windows::Forms::Label^  Record;
	private: System::Windows::Forms::ComboBox^  SelectAge;



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
			this->SelectAge = (gcnew System::Windows::Forms::ComboBox());
			this->Record = (gcnew System::Windows::Forms::Label());
			this->Age = (gcnew System::Windows::Forms::Label());
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
			this->ProjectLabel->Text = L"Put in your date";
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
			this->sexChoice->Location = System::Drawing::Point(157, 30);
			this->sexChoice->Name = L"sexChoice";
			this->sexChoice->Size = System::Drawing::Size(119, 44);
			this->sexChoice->TabIndex = 4;
			this->sexChoice->SelectedIndexChanged += gcnew System::EventHandler(this, &RunnerData::sexChoice_SelectedIndexChanged);
			// 
			// Sex
			// 
			this->Sex->AutoSize = true;
			this->Sex->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Sex->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sex->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Sex->Location = System::Drawing::Point(0, 0);
			this->Sex->Name = L"Sex";
			this->Sex->Size = System::Drawing::Size(39, 23);
			this->Sex->TabIndex = 5;
			this->Sex->Text = L"Sex";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel1->Controls->Add(this->SelectAge);
			this->panel1->Controls->Add(this->Record);
			this->panel1->Controls->Add(this->Age);
			this->panel1->Controls->Add(this->Sex);
			this->panel1->Controls->Add(this->sexChoice);
			this->panel1->Location = System::Drawing::Point(240, 91);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(400, 365);
			this->panel1->TabIndex = 6;
			// 
			// SelectAge
			// 
			this->SelectAge->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SelectAge->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->SelectAge->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->SelectAge->FormattingEnabled = true;
			this->SelectAge->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"14 - 16", L"17 - 19", L"19 - 30", L"31 - 40",
					L"41 - 50", L"50+"
			});
			this->SelectAge->Location = System::Drawing::Point(144, 149);
			this->SelectAge->Name = L"SelectAge";
			this->SelectAge->Size = System::Drawing::Size(121, 28);
			this->SelectAge->TabIndex = 9;
			this->SelectAge->SelectedIndexChanged += gcnew System::EventHandler(this, &RunnerData::SelectAge_SelectedIndexChanged);
			// 
			// Record
			// 
			this->Record->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Record->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Record->Location = System::Drawing::Point(0, 245);
			this->Record->Name = L"Record";
			this->Record->Size = System::Drawing::Size(74, 23);
			this->Record->TabIndex = 8;
			this->Record->Text = L"Record";
			this->Record->Click += gcnew System::EventHandler(this, &RunnerData::label1_Click_1);
			// 
			// Age
			// 
			this->Age->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Age->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Age->Location = System::Drawing::Point(0, 114);
			this->Age->Name = L"Age";
			this->Age->Size = System::Drawing::Size(61, 23);
			this->Age->TabIndex = 7;
			this->Age->Text = L"Age";
			this->Age->Click += gcnew System::EventHandler(this, &RunnerData::label1_Click);
			// 
			// RunnerData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(860, 486);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->QuitButton);
			this->Controls->Add(this->ProjectLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RunnerData";
			this->Text = L"RunnerData";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void QuitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		this->previousForm->Close();
	}

	private: System::Void sexChoice_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
		if (this->sexChoice->SelectedIndex == 0)
		{
			this->sexChoice->SetItemChecked(1, 0);
		}
		else
		{
			this->sexChoice->SetItemChecked(0, 0);
		}
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void SelectAge_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {


}
};

}

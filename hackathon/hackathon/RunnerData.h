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
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		RunnerData(System::Windows::Forms::Form ^previousForm) {
			this->previousForm = previousForm;
			InitializeComponent();
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
			this->SuspendLayout();
			// 
			// QuitButton
			// 
			this->QuitButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QuitButton.Image")));
			this->QuitButton->Location = System::Drawing::Point(796, 0);
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
			this->sexChoice->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->sexChoice->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->sexChoice->Cursor = System::Windows::Forms::Cursors::Default;
			this->sexChoice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sexChoice->ForeColor = System::Drawing::SystemColors::InfoText;
			this->sexChoice->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Fale" });
			this->sexChoice->Location = System::Drawing::Point(345, 125);
			this->sexChoice->Name = L"sexChoice";
			this->sexChoice->Size = System::Drawing::Size(119, 34);
			this->sexChoice->TabIndex = 4;
			this->sexChoice->SelectedIndexChanged += gcnew System::EventHandler(this, &RunnerData::sexChoice_SelectedIndexChanged);
			// 
			// Sex
			// 
			this->Sex->AutoSize = true;
			this->Sex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Sex->Location = System::Drawing::Point(342, 106);
			this->Sex->Name = L"Sex";
			this->Sex->Size = System::Drawing::Size(34, 16);
			this->Sex->TabIndex = 5;
			this->Sex->Text = L"Sex:";
			// 
			// RunnerData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(860, 486);
			this->Controls->Add(this->Sex);
			this->Controls->Add(this->sexChoice);
			this->Controls->Add(this->QuitButton);
			this->Controls->Add(this->ProjectLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RunnerData";
			this->Text = L"RunnerData";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void QuitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		this->previousForm->Close();
	}

	private: System::Void sexChoice_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	};

}

#pragma once

namespace hackathon {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Authors
	/// </summary>
	public ref class Authors : public System::Windows::Forms::Form
	{
	public:
		Authors(void)
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
		~Authors()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  QuitButton;
	private: System::Windows::Forms::Label^  ProjectLabel;
	private: System::Windows::Forms::PictureBox^  authorsImage;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Authors::typeid));
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->ProjectLabel = (gcnew System::Windows::Forms::Label());
			this->authorsImage = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->authorsImage))->BeginInit();
			this->SuspendLayout();
			// 
			// QuitButton
			// 
			this->QuitButton->BackColor = System::Drawing::Color::Transparent;
			this->QuitButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QuitButton.Image")));
			this->QuitButton->Location = System::Drawing::Point(1084, 0);
			this->QuitButton->Margin = System::Windows::Forms::Padding(4);
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->Size = System::Drawing::Size(63, 57);
			this->QuitButton->TabIndex = 4;
			this->QuitButton->UseVisualStyleBackColor = false;
			// 
			// ProjectLabel
			// 
			this->ProjectLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ProjectLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ProjectLabel->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->ProjectLabel->Location = System::Drawing::Point(0, 0);
			this->ProjectLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ProjectLabel->Name = L"ProjectLabel";
			this->ProjectLabel->Size = System::Drawing::Size(1147, 94);
			this->ProjectLabel->TabIndex = 3;
			this->ProjectLabel->Text = L"Your training plan";
			this->ProjectLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// authorsImage
			// 
			this->authorsImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"authorsImage.Image")));
			this->authorsImage->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"authorsImage.InitialImage")));
			this->authorsImage->Location = System::Drawing::Point(250, 107);
			this->authorsImage->Name = L"authorsImage";
			this->authorsImage->Size = System::Drawing::Size(632, 418);
			this->authorsImage->TabIndex = 5;
			this->authorsImage->TabStop = false;
			// 
			// Authors
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(1147, 598);
			this->Controls->Add(this->authorsImage);
			this->Controls->Add(this->QuitButton);
			this->Controls->Add(this->ProjectLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Authors";
			this->Text = L"Authors";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->authorsImage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

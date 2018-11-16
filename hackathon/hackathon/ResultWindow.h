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
	protected:

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
			this->ProjectLabel = (gcnew System::Windows::Forms::Label());
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
			// ResultWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(860, 486);
			this->Controls->Add(this->ProjectLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ResultWindow";
			this->Text = L"ResultWindow";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

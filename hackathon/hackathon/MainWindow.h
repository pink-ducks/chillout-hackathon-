#pragma once
#include "RunnerData.h"
#include "Authors.h"
namespace hackathon {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  ProjectLabel;
	private: System::Windows::Forms::Button^  QuitButton;
	private: System::Windows::Forms::Button^  startButton;
	private: System::Windows::Forms::Button^  credits;



	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->ProjectLabel = (gcnew System::Windows::Forms::Label());
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->credits = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
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
			this->ProjectLabel->TabIndex = 0;
			this->ProjectLabel->Text = L"Your training plan";
			this->ProjectLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ProjectLabel->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click);
			// 
			// QuitButton
			// 
			this->QuitButton->BackColor = System::Drawing::Color::Transparent;
			this->QuitButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QuitButton.Image")));
			this->QuitButton->Location = System::Drawing::Point(1084, 0);
			this->QuitButton->Margin = System::Windows::Forms::Padding(4);
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->Size = System::Drawing::Size(63, 57);
			this->QuitButton->TabIndex = 1;
			this->QuitButton->UseVisualStyleBackColor = false;
			this->QuitButton->Click += gcnew System::EventHandler(this, &MainWindow::QuitButton_Click);
			// 
			// startButton
			// 
			this->startButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startButton->ForeColor = System::Drawing::Color::White;
			this->startButton->Location = System::Drawing::Point(436, 252);
			this->startButton->Margin = System::Windows::Forms::Padding(4);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(269, 84);
			this->startButton->TabIndex = 0;
			this->startButton->Text = L"Make your own training plan!";
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &MainWindow::startButton_Click);
			// 
			// credits
			// 
			this->credits->BackColor = System::Drawing::SystemColors::HotTrack;
			this->credits->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->credits->ForeColor = System::Drawing::Color::White;
			this->credits->Location = System::Drawing::Point(995, 546);
			this->credits->Margin = System::Windows::Forms::Padding(4);
			this->credits->Name = L"credits";
			this->credits->Size = System::Drawing::Size(139, 39);
			this->credits->TabIndex = 2;
			this->credits->Text = L"Credits";
			this->credits->UseVisualStyleBackColor = false;
			this->credits->Click += gcnew System::EventHandler(this, &MainWindow::credits_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(1147, 598);
			this->Controls->Add(this->credits);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->QuitButton);
			this->Controls->Add(this->ProjectLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void QuitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void startButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		RunnerData^ runnerData = gcnew RunnerData(this);
		runnerData->ShowDialog();
	}
private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void credits_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Authors^ authors = gcnew Authors();
	authors->ShowDialog();
}
};
}

#pragma once

namespace SolutonofSLAR {

    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Text::RegularExpressions;

    public ref class FileNameForm : public System::Windows::Forms::Form
    {
    public:
        FileNameForm()
        {
            InitializeComponent();
        }

    protected:
        ~FileNameForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::TextBox^ fileNameTextBox;
    private: System::Windows::Forms::Button^ okButton;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->fileNameTextBox = (gcnew System::Windows::Forms::TextBox());
            this->okButton = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // fileNameTextBox
            // 
            this->fileNameTextBox->Location = System::Drawing::Point(43, 31);
            this->fileNameTextBox->Margin = System::Windows::Forms::Padding(4);
            this->fileNameTextBox->Name = L"fileNameTextBox";
            this->fileNameTextBox->Size = System::Drawing::Size(235, 22);
            this->fileNameTextBox->TabIndex = 0;
            this->fileNameTextBox->TextChanged += gcnew System::EventHandler(this, &FileNameForm::fileNameTextBox_TextChanged);
            // 
            // okButton
            // 
            this->okButton->Location = System::Drawing::Point(109, 79);
            this->okButton->Margin = System::Windows::Forms::Padding(4);
            this->okButton->Name = L"okButton";
            this->okButton->Size = System::Drawing::Size(100, 28);
            this->okButton->TabIndex = 1;
            this->okButton->Text = L"OK";
            this->okButton->UseVisualStyleBackColor = true;
            this->okButton->Click += gcnew System::EventHandler(this, &FileNameForm::okButton_Click);
            // 
            // FileNameForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Olive;
            this->ClientSize = System::Drawing::Size(321, 138);
            this->Controls->Add(this->okButton);
            this->Controls->Add(this->fileNameTextBox);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"FileNameForm";
            this->Text = L"Enter File Name";
            this->Load += gcnew System::EventHandler(this, &FileNameForm::FileNameForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void okButton_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ fileName = fileNameTextBox->Text->Trim();
            if (!String::IsNullOrEmpty(fileName)) {
                if (fileName->Length > 30) {
                    MessageBox::Show("Too long name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    return;
                }
                if (!Regex::IsMatch(fileName, "^[a-zA-Z0-9]+$")) {
                    MessageBox::Show("You can enter only letters and numbers", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    return;
                }
                this->DialogResult = System::Windows::Forms::DialogResult::OK;
            }
            else {
                MessageBox::Show("Please enter a valid file name.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

    public:
        property String^ FileName {
            String^ get() {
                return fileNameTextBox->Text->Trim();
            }
        }
    private: System::Void FileNameForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void fileNameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        String^ fileName = fileNameTextBox->Text;
        if (fileName->Length > 30) {
            MessageBox::Show("Too long name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            fileNameTextBox->Text = fileName->Substring(0, 30);
            fileNameTextBox->SelectionStart = fileNameTextBox->Text->Length; 
        }
        if (!Regex::IsMatch(fileName, "^[a-zA-Z0-9]*$")) {
            MessageBox::Show("You can enter only letters and numbers", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            fileNameTextBox->Text = Regex::Replace(fileName, "[^a-zA-Z0-9]", "");
            fileNameTextBox->SelectionStart = fileNameTextBox->Text->Length; 
        }
    }
    };
}

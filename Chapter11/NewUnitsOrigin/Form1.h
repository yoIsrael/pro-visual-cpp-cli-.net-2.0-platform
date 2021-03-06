#pragma once


namespace NewUnitsOrigin {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->SuspendLayout();
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(341, 273);
            this->Name = L"Form1";
            this->Text = L"Millimeter Unit of measure Origin (20,20)";
            this->Paint += 
                gcnew System::Windows::Forms::PaintEventHandler(this, 
                                                          &Form1::Form1_Paint);
            this->ResumeLayout(false);
        }
#pragma endregion

    private: 
        System::Void Form1_Paint(System::Object^ sender, 
                                 System::Windows::Forms::PaintEventArgs^ e)
        {
            Graphics ^g = e->Graphics;

            // Draw a rectangle before unit of measure and origin change
            g->DrawRectangle(Pens::Black, 5, 5, 50, 20);

            // Draw same rectangle after change
            g->PageUnit = GraphicsUnit::Millimeter;
            g->TranslateTransform(20,20);
            g->DrawRectangle(Pens::Black, 5, 5, 50, 20);
        }
    };
}


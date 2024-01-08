#include "Individuals.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	L8::Individuals form;
	Application::Run(% form);
}

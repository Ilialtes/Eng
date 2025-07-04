#include "GE.h"


class Sandbox : public GE::Application
{
public:
	Sandbox() {
		// Constructor code here
	}
	virtual ~Sandbox() {
		// Destructor code here
	}
};

GE::Application* GE::CreateApplication() {
	return new Sandbox();
}
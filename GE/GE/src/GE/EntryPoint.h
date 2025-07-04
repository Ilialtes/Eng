#pragma once

extern GE::Application* GE::CreateApplication();

#ifdef GE_PLATFORM_WINDOWS

int main(int argc, char** argv) {
	auto app = GE::CreateApplication();
	app->Run();
	delete app;
}

#endif


#pragma once
#include "Log.h"
#ifdef  HZ_PLATFORM_WINDOWS 

extern Hazel::Application* Hazel::CreateApplication();


int main(int argc, char** argv) {
	Hazel::Log::Init();
	HZ_CORE_WARN("success Initialized");
	HZ_INFO("hello");
	auto app =  Hazel::CreateApplication();
	app->run();
	delete app;
}



#endif //  HZ_PLATFORM_WINDOWS

#pragma once
#include "stdio.h"

#ifdef  HZ_PLATFORM_WINDOWS 

extern Hazel::Application* Hazel::CreateApplication();


int main(int argc, char** argv) {
	printf("welcome to the hazel engine \n");
	auto app =  Hazel::CreateApplication();
	app->run();
	delete app;
}



#endif //  HZ_PLATFORM_WINDOWS

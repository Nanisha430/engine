#pragma once
#include "core.h"
#include "Event/Event.h"
namespace Hazel {
	class HAZEL_API Application {
	public:
		Application();
		virtual ~Application();
		void run();
	};
	Application* CreateApplication();
}
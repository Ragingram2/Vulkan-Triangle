#define GLFW_INCLUDE_VULKAN
#include <glfw/glfw3.h>

#include <iostream>

#include <vulkan/vulkan.h>
#include <windows.h>


int main()
{
    #if defined _WIN32
	HMODULE vulkan_library = LoadLibraryA("vulkan-1.dll");
        #elif defined __linux
	HMODULE vulkan_library = dlopen("libvulkan.so.1", RTLD_NOW);
    #endif

    if (vulkan_library == nullptr)
	{
		std::cout << "Could not connect with a vulkan Runtime library." << std::endl;
		return -1;
	}

	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	GLFWwindow* window = glfwCreateWindow(800, 600, "Vulkan window", nullptr, nullptr);

    
    while (!glfwWindowShouldClose(window)) { glfwPollEvents(); }

	glfwDestroyWindow(window);

	glfwTerminate();

	return 0;
}

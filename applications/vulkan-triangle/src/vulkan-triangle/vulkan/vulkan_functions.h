#pragma once

#include <vulkan/vulkan.h>

#define EXPORTED_VULKAN_FUNCTION(name) extern PFN_##name name;

#define GLOBAL_LEVEL_VULKAN_FUNCTION(name) extern PFN_##name name;

#define INSTANCE_LEVEL_VULKAN_FUNCTION(name) extern PFN_##name name;

#define INSTANCE_LEVEL_VULKAN_FUNCTION_FROM_EXTENSION(name, extension) extern PFN_##name name;

#define DEVICE_LEVEL_VULKAN_FUNCTION(name) extern PFN_##name name;

#define DEVICE_LEVEL_VULKAN_FUNCTION_FROM_EXTENSION(name, extension) extern PFN_##name name;

#include "list_of_vulkan_functions.inl"
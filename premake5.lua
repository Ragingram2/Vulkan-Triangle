-- root workspace, all sub-project should be included
workspace "vulkan-triangle"
    location("build/" .. _ACTION)
    configurations { "Debug", "Release" }

os.chdir(_MAIN_SCRIPT_DIR)

local r = require("premake/rythe")

r.configure()
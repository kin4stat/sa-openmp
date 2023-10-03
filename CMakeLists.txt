cmake_minimum_required(VERSION 3.20)
project(sa-omp)

option(SAOMP_CLIENT "SA Open Multiplayer client" ON)

# Libraries
# add_subdirectory(raknet)
add_subdirectory(reversiblehooks)

if (SAOMP_CLIENT)
  list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/")
  find_package(PluginSDK REQUIRED gtasa)

  add_subdirectory(client)
endif()
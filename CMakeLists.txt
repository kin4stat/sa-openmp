cmake_minimum_required(VERSION 3.20)
project(sa-omp)

option(SAOMP_CLIENT "SA Open Multiplayer client" ON)

# Libraries
# add_subdirectory(raknet)
add_subdirectory(reversiblehooks)

if (SAOMP_CLIENT)
  find_package(plugin-sdk REQUIRED)

  add_subdirectory(client)
endif()
add_executable(
  pentaserver
  src/main.cpp
)

target_link_libraries(pentaserver PRIVATE pentacore spdlog::spdlog )
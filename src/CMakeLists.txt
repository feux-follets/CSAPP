project(main)

add_executable(${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_sources(${PROJECT_NAME}
		PRIVATE
		FILE_SET CXX_MODULES FILES
		PRIVATE
		main.cpp
)
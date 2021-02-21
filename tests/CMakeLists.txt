cmake_minimum_required(VERSION 3.13.4)	#	Yes

set(This tests)

set(
	Sources
	test_one.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(
	${This} PUBLIC
	gtest_main
	function
)

add_test(
	NAME ${This}
	COMMAND ${This}
)

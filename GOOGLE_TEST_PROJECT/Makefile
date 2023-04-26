DEBUG_DIR=./debug/
TEST_DIR=./test/

build:
	g++ -o ${DEBUG_DIR}main main.cpp

testbuild:
	g++ -o ${TEST_DIR}testRunner testRunner.cpp LibraryCode.cpp -lgtest -lpthread

clean:
	rm ${TEST_DIR}testRunner ${DEBUG_DIR}main

run:
	${DEBUG_DIR}main

runtest:
	${TEST_DIR}testRunner

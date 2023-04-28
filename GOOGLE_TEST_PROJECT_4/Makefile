DEBUG_DIR=./debug/
TEST_DIR=./test/
SOURCE_FILES=LibraryCode.cpp

build:
	g++ -o ${DEBUG_DIR}main main.cpp ${SOURCE_FILES}

buildtest:
	g++ -o ${TEST_DIR}testRunner testRunner.cpp ${SOURCE_FILES} -lgtest -lpthread

clean:
	rm ${TEST_DIR}testRunner ${DEBUG_DIR}main

run:
	${DEBUG_DIR}main

runtest:
	${TEST_DIR}testRunner

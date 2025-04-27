all: a.out

a.out:
	g++ -std=c++11  test.cpp SimpleString.cpp -o a.out

test: a.out
	./a.out -s -d -t
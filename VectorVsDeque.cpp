// VectorVsDeque.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <deque>
#include <gtest\gtest.h>
#include <string>
class A {
public:
	A() :name("asrgdrhgdthfthgjdngidrbguidrbfudhvbuhdfvbhudbzvhubhvxkvuhbdhvjbdxjvhdhvdfjkvbdfjkvbdfjvbdjfkvndkxvbdxjkvbd"),
		surname("dfnsdkjgfnfskjgnkjfsngjkfngjnsdkjfnsdkjcnjksdnckjsdnfjksnfjksdnfjkhsdkfjrbfjsbnfckjsbcjnsjkefbsjkrbfsjkb"),
		google("fnvsjkdfvnjksvbhjsbijsdabivbasdvchjadsbvchjdsbckjsdbcndjksedcnkjsecbnkjsecbxsjkdbcnsjecbasjcbsjecbsjchbsechb")
	{}
	std::string name;
	std::string surname;
	std::string google;
/*	A() :age(10) {}
	std::vector<int> age;*/
};
void functionVectorPush_back()
{
	std::vector<int> vec;
	for (int i = 0; i < 10000; ++i)
		vec.push_back(i);
	//	std::cout << vec.size() << '\n';
	//	std::cout << vec.capacity() << '\n';
}
void functionDequePush_back()
{
	std::deque<int> deq;
	for (int i = 0; i < 10000; ++i)
		deq.push_back(i);
	//	std::cout << deq.size() << '\n';
}
void functionVectorDisplay()
{
	std::vector<int> vec;
	for (int i = 0; i < 100; ++i)
		vec.push_back(i);
	for (const auto& itr : vec)
		std::cout << itr << std::endl;
}
void functionDequeDisplay()
{
	std::deque<int> deq;
	for (int i = 0; i < 100; ++i)
		deq.push_back(i);
	for (const auto& itr : deq)
		std::cout << itr << std::endl;
}

void functionVectorPush_backTypeA()
{
	std::vector<A> vec;
	for (int i = 0; i < 10000; ++i)
		vec.push_back(A{});
	//	std::cout << vec.size() << '\n';
	//	std::cout << vec.capacity() << '\n';
}
void functionDequePush_backTypeA()
{
	std::deque<A> deq;
	for (int i = 0; i < 10000; ++i)
		deq.push_back(A{});
	//	std::cout << deq.size() << '\n';
}



int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


TEST(vectorTest1, first)
{
	functionVectorPush_back();
}

TEST(dequeTest1, first)
{
	functionDequePush_back();
}

TEST(dequeTest2, second)
{
	functionDequeDisplay();
}

TEST(vectorTest2, second)
{
	functionVectorDisplay();
}

TEST(vectorTest3, third)
{
	functionVectorPush_backTypeA();
}

TEST(dequeTest3, third)
{
	functionDequePush_backTypeA();
}
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
void functionVectorPush_backTypeA2()
{
	std::vector<A> vec;
	vec.reserve(10000);
	for (int i = 0; i < 10000; ++i)
		vec.push_back(A{});
}

void functionVectorPush_backTypeA3()
{
	std::vector<A> vec;
	vec.reserve(9998);
	for (int i = 0; i < 10000; ++i)
		vec.push_back(A{});

}

void functionVectorPush_backTypeA4()
{
	std::vector<int> vec;
	vec.reserve(9998);
	for (int i = 0; i < 10000; ++i)
		vec.push_back(0);
}


int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(dequeTest1, shouldAdd100IntigersToDequeAndDisplay)
{
	functionDequeDisplay();
}

TEST(vectorTest1, shouldAdd100IntigersToVectorAndDisplay)
{
	functionVectorDisplay();
}

TEST(vectorTest2, shouldAdd10000IntigersToVectorWithOneRelalocation)
{
	functionVectorPush_backTypeA4();
}

TEST(vectorTest3, shouldAdd10000IntigersToVector)
{
	functionVectorPush_back();
}

TEST(dequeTest2, shouldAdd10000IntigersToDeque)
{
	functionDequePush_back();
}

TEST(vectorTest4, shouldAdd10000ObjectTypeAToVectorWithAdequateCapacityBeforeAddObject)
{
	functionVectorPush_backTypeA2();
}

TEST(dequeTest3, shouldAdd10000ObjectTypeAToDeque)
{
	functionDequePush_backTypeA();
}

TEST(vectorTest5, shouldAdd10000ObjectTypeAToVectorWithOneRelalocation)
{
	functionVectorPush_backTypeA3();
}

TEST(vectorTest6, shouldAdd10000ObjectTypeAToVector)
{
	functionVectorPush_backTypeA();
}



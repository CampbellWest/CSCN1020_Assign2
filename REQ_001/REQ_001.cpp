#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);

extern "C" void setLength(int, int*);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int Result;
			int length = 3;
			int width = 3;
			Result = getPerimeter(&length, &width);
			Assert::AreEqual(12, Result);
		}

		TEST_METHOD(TestMethod2)
		{
			int Result;
			int length = 5;
			int width = 5;
			Result = getArea(&length, &width);
			Assert::AreEqual(25, Result);
		}
		
		TEST_METHOD(TestMethod3)
		{
			int Result; 
			int length = 3;
			setLength(3, &length);
			Result = *(&length);
			Assert::AreEqual(3, Result);
		}

		TEST_METHOD(TestMethod4)
		{
			int Result;
			int length = 6;
			setLength(60, &length);
			Result = *(&length);
			Assert::AreEqual(60, length);
		}

		TEST_METHOD(TestMethod5)
		{
			int Result;
			int length = 45;
			setLength(35, &length);
			Result = *(&length);
			Assert::AreEqual(35, length);
		}

		TEST_METHOD(TestMethod6)
		{
			int Result;
			int width = 5;
			setWidth(5, &width);
			Result = *(&width);
			Assert::AreEqual(5, width);
		}

		TEST_METHOD(TestMethod7)
		{
			int Result;
			int width = 99;
			setWidth(1, &width);
			Result = *(&width);
			Assert::AreEqual(1, width);
		}

		TEST_METHOD(TestMethod8)
		{
			int Result;
			int width = 50;
			setWidth(50, &width);
			Result = *(&width);
			Assert::AreEqual(50, width);
		}
	};
}

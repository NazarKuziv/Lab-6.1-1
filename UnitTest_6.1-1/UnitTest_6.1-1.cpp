#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 6.1-1/Project 6.1-1.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			int t[22] = {-37, 22, 7, -2, 30, 44, 25, 50, 36, 38, 40, 6, 0, 28, -1, 48, 32, 49, -23, 24, 20, 13 };

			int s = 0;
			int k = 0;
			Sum(t, 22, s, k);

			Assert::AreEqual(s, 284 );
			Assert::AreEqual(k, 17);
		}
	};
}

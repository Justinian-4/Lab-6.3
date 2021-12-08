#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n] = { -100, -25, -3, 33, 58, -20, 99, -89, 66,100 };

			int count = 0;

			int expectedCount = 5;

			Calculate(a, n, count);

			Assert::AreEqual(expectedCount, count);
		}
	};
}

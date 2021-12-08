#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.3/Lab-6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab63Test
{
	TEST_CLASS(Lab63Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n] = { -100, 75, -50, 25, 0, -25, 50, -75, 100, -99 };

			int count = 0;

			int expectedCount = 5;

			Calculate(a, n, count);

			Assert::AreEqual(expectedCount, count);
		}
	};
}

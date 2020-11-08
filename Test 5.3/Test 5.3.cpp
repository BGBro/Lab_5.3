#include "pch.h"
#include "CppUnitTest.h"
#include "../5.3/5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test53
{
	TEST_CLASS(Test53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = h(5);
			Assert::AreEqual(t, 1);
		}
	};
}

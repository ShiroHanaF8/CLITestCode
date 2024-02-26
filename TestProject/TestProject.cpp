#include "pch.h"
#include "CppUnitTest.h"

#include "CppCalc.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProject
{
	TEST_CLASS(TestProject)
	{
	public:
		
		TEST_METHOD(TestMethodCpp)
		{
			const auto result = CppCalc::Calc();
			Assert::IsTrue(result > 0);
		}

		TEST_METHOD(TestMethodCs)
		{
			const auto result = CppCalc::CalcWrap();
			Assert::IsTrue(result > 0);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Kateryna Artemovska\source\repos\lab1.2_oop\Rectangle.h"
#include "C:\Users\Kateryna Artemovska\source\repos\lab1.2_oop\Rectangle.cpp"
#include "C:\Users\Kateryna Artemovska\source\repos\lab1.2_oop\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest12oop
{
	TEST_CLASS(UnitTest12oop)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangle b{};

			b.setHeight(2);
			b.setWidth(4);

			Assert::AreEqual(b.getPrimeter(), 12);
		}
	};
}

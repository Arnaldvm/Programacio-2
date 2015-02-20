#include "stdafx.h"
#include "CppUnitTest.h"
#include "E:\uni\1r\Programació 2\Github\Programacio-2\Project1\Project1\Point2D.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestPoint2D)
		{
			Point2D punt;
			punt.setZero();
			Assert::IsTrue(punt.areZero());
		
		}

	};
}
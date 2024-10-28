#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1_string/Lab8.1_string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
    TEST_CLASS(UnitTest81string)
    {
    public:

        TEST_METHOD(TestFindThirdCommaIndex_ValidInput)
        {
            // ���������� � ������, ���� ������ ��� ����
            string testString = "one,two,three,four,five";
            int index = FindThirdCommaIndex(testString);
            Assert::AreEqual(13, index); // ������ ������ ����
        }
    };
}
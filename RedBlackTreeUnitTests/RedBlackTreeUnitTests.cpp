#include "pch.h"
#include "CppUnitTest.h"
#include"RBTree.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RedBlackTreeUnitTests
{
	TEST_CLASS(RedBlackTreeUnitTests)
	{
	public:
		
		TEST_METHOD(Test_clear)
		{
			int nums[10] = { 10,40,30,60,90,70,20,50,80,100 };
			int variables[10] = { 1,4,3,6,9,7,2,5,8,10 };
			RedBlackTree<int> tree;


			for (int i = 0; i < 10; i++) {
				tree.insert(nums[i], variables[i]);
			}

		}
	};
}

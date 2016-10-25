#include <vector>
#include <gtest/gtest.h>


TEST(ExampleTests, SimpleTest)
{
	int x = 5;
	ASSERT_EQ(x, 1);
	std::vector<int> vec;
	ASSERT_TRUE(vec.empty());
	vec.push_back(x);
	ASSERT_FALSE(vec.empty());
}

int main(int argc, char *argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
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

class ExampleFixture : public ::testing::Test
{
public:
	virtual void SetUp() override
	{
		puts("ExampleFixture::SetUp()");
	}

	virtual void TearDown() override
	{
		puts("ExampleFixture::TearDown()");
	}
};

TEST_F(ExampleFixture, Test1)
{
	puts("Test1");
}

TEST_F(ExampleFixture, Test2)
{
	puts("Test2");
}

int main(int argc, char *argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
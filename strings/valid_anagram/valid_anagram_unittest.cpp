#include "valid_anagram.h"
#include <string>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(ValidAnagramSolution1TestSuite, GeneralCase) {
    bool output = isAnagramSolution1("anagram", "nagaram");
    EXPECT_TRUE(output);
}

TEST(ValidAnagramSolution1TestSuite, FalseCase) {
    bool output = isAnagramSolution1("anagram", "agaram");
    EXPECT_FALSE(output);
    bool output1 = isAnagramSolution1("anagram", "bagaram");
    EXPECT_FALSE(output1);
}

TEST(ValidAnagramSolution1TestSuite, EmptyCase) {
    bool output = isAnagramSolution1("", "");
    EXPECT_TRUE(output);
}

// Solution 2 Tests
TEST(ValidAnagramSolution2TestSuite, GeneralCase) {
    bool output = isAnagramSolution2("anagram", "nagaram");
    EXPECT_TRUE(output);
}

TEST(ValidAnagramSolution2TestSuite, FalseCase) {
    bool output = isAnagramSolution2("anagram", "agaram");
    EXPECT_FALSE(output);
    bool output1 = isAnagramSolution2("anagram", "bagaram");
    EXPECT_FALSE(output1);
}

TEST(ValidAnagramSolution2TestSuite, EmptyCase) {
    bool output = isAnagramSolution2("", "");
    EXPECT_TRUE(output);
}


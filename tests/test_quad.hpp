#ifndef CTEST__TESTS__TEST_QUAD_HPP
#define CTEST__TESTS__TEST_QUAD_HPP

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <cmath>

#include "quad.hpp"

TEST(test_quad, base)
{
    ASSERT_THAT(find_roots_of_quad(1, 0, -1), testing::Pair(1.0, -1.0));
    ASSERT_THAT(find_roots_of_quad(1, 4, 3), testing::Pair(-1.0, -3.0));
    ASSERT_THAT(find_roots_of_quad(1, -2, 1), testing::Pair(1.0, 1.0));
    ASSERT_THAT(find_roots_of_quad(1, 0, -2), testing::Pair(std::sqrt(2), -std::sqrt(2)));
}

TEST(test_quad, non_quad)
{
    EXPECT_THROW(find_roots_of_quad(0, 4, 3), std::invalid_argument);
}

TEST(test_quad, non_trivial)
{
    EXPECT_THROW(find_roots_of_quad(1, 1, 10), std::logic_error);
}

#endif //CTEST__TESTS__TEST_QUAD_HPP
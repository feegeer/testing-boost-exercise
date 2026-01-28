#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "matrixIO.hpp"

BOOST_AUTO_TEST_SUITE(MatrixIoTests)

BOOST_AUTO_TEST_CASE(OpenData)
{
  auto expected_matrix = Eigen::MatrixXd(3, 3);
  expected_matrix << 1, 2, 3,
      4, 5, 6,
      7, 8, 9;

  auto matrix = matrixIO::openData("testmatrix.csv", 3);
  BOOST_TEST(matrix.isApprox(expected_matrix));
}

BOOST_AUTO_TEST_SUITE_END()

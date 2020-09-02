#define BOOST_TEST_MODULE CICppProject_tests

#include "lib.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(CICppProject_test)

BOOST_AUTO_TEST_CASE(CICppProject_test_version)
{
    BOOST_CHECK(version() > 0 );
}

BOOST_AUTO_TEST_SUITE_END()
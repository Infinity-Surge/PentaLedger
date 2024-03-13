/**
 * \file PayPeriods_tst.cpp
 *
 * This file is part of the Payroll C++ Library
 *
 * Copyright (c) 2020 Joe Turner.  All rights reserved.
 * Unauthorized copying prohibited.
 */
#include <boost/test/unit_test.hpp>
#include "accounting/payroll/PayPeriods.hpp"

using namespace infinity::accounting::payroll;

BOOST_AUTO_TEST_CASE( PayPeriod_tests_getter_setter ) {
    PayPeriod p;

    p.setPayPeriod(PayPeriod::ePayPeriodMonthly);
    BOOST_CHECK_EQUAL(PayPeriod::ePayPeriodMonthly, p.getPayPeriod());
}


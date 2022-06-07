//
// Created by rudri on 9/12/2020.
//
#include <iostream>
#include <vector>
#include <iterator>
#include "catch.hpp"
#include "redirect_io.h"
#include "P1.h"
using namespace std;

static void question_1() {
    vector<int> vec;
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(vec));
    remove_duplicates(vec);
    for(const auto& item: vec)
        cout << item << " ";
}

TEST_CASE("Question #1.1") {
    execute_test("test_1.in", question_1);
}


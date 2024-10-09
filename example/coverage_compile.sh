#!/bin/bash

rm -rf target_coverage
mkdir target_coverage

cp test.c target_coverage/
cd target_coverage

gcc -g -fprofile-arcs -ftest-coverage -DFUZZING_BUILD_MODE_UNSAFE_FOR_PRODUCTION test.c -o test

AFL_COV="/path/to/afl-cov"
# $AFL_COV/afl-cov --clang -d ../target/obj-afl/temp/fuzz/afl-out --coverage-cmd "./test @@" --code-dir . --overwrite --live
$AFL_COV/afl-cov.sh -c ../target/obj-afl/temp/fuzz/afl-out "./test @@"
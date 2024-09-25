#!/bin/bash

rm -rf target_coverage
mkdir target_coverage

cp test.c target_coverage/
cd target_coverage
gcc -O0 -g -fprofile-arcs -ftest-coverage test.c -o test

AFL_COV="/path/to/afl-cov"
$AFL_COV/afl-cov -d ../target/obj-afl/temp/fuzz/afl-out --coverage-cmd "./test  AFL_FILE" --code-dir . --overwrite --live --lcov-web-all
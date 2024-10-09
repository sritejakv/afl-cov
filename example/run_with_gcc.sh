#!/bin/bash

rm -rf target_coverage
mkdir target_coverage

cp test.c target_coverage/
cd target_coverage

gcc -g -fprofile-arcs -ftest-coverage -DFUZZING_BUILD_MODE_UNSAFE_FOR_PRODUCTION test.c -o test2

AFL_PATH="/path/to/afl-out"
../../afl-cov.sh $AFL_PATH "./test2 @@"
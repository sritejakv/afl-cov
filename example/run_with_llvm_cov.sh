#!/bin/bash

rm -rf target_coverage
mkdir target_coverage

cp test.c target_coverage/
cd target_coverage

$CC -fprofile-instr-generate -fcoverage-mapping test.c -o test

AFL_PATH="/path/to/afl-out"
../../afl-llvm-cov.sh -v $AFL_PATH "./test @@" test
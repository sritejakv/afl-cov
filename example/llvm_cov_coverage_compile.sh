#!/bin/bash

rm -rf target_coverage
mkdir target_coverage

cp test.c target_coverage/
cd target_coverage

$CC -fprofile-instr-generate -fcoverage-mapping test.c -o test
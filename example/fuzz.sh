#!/bin/bash

export SUBJECT="${PWD}/target"

rm -rf target
mkdir target
cp test.c "${SUBJECT}"

# SET PATH TO AFL HERE !!!
export AFL="/path/to/afl"
export AFL_I_DONT_CARE_ABOUT_MISSING_CRASHES=1
export LLVM_COMPILER_PATH=/usr/local/llvm-14/bin/
export LLVM_CONFIG=/usr/local/llvm-14/bin/llvm-config
export CC=$AFL/afl-clang-fast; export CXX=$AFL/afl-clang-fast++
export AFL_CC=gclang AFL_CXX=gclang++
export AFL_LLVM_INSTRUMENT=CLASSIC
cd "${SUBJECT}"
$CC -O0 -g -fno-discard-value-names test.c -o test

rm -rf obj-afl; mkdir obj-afl; mkdir obj-afl/temp
export TMP_DIR="$SUBJECT/obj-afl/temp"
export DRIVER_DIR="$TMP_DIR/fuzz"
mkdir ${DRIVER_DIR}

cd "$DRIVER_DIR" || exit
mkdir in; echo "1 + 2 + 3" >> in/in

ulimit -s 16777216
mkdir logs
cd logs
echo $AFL/afl-fuzz -D -i "$DRIVER_DIR/in" -o "$DRIVER_DIR/afl-out" "${SUBJECT}/test"
$AFL/afl-fuzz -D -i "$DRIVER_DIR/in" -o "$DRIVER_DIR/afl-out" "${SUBJECT}/test"
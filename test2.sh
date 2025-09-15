#!/bin/bash

if [ $# -eq 0 ]; then
    args="1 2 3 4"
else
    args="$@"
fi

for i in $args; do
    g++ main.cpp homework2-1.cpp homework2-2.cpp -o main 2> /dev/null
    ./main "$i" > "Test/output$i.txt"

    if ! diff "Test/output$i.txt" "Test/expected$i.txt" > /dev/null; then
        echo "Test $i: FAIL"
    else
        echo "Test $i: PASS"
    fi
done

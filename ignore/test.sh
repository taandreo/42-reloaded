#!/bin/bash
rm -rf ./test*

mkdir            test0 && chmod 715 test0 && touch -t 2106012047 test0
echo -n '1234' > test1 && chmod 714 test1 && touch -t 2106012146 test1
mkdir            test2 && chmod 504 test2 && touch -t 2106012245 test2
echo -n '1'    > test3 && chmod 404 test3 && touch -t 2106012344 test3
echo -n '12'   > test4 && chmod 641 test4 && touch -t 2106012344 test4
ln test3 test5
ln -s test0 test6 && touch -ht 2106012220 test6
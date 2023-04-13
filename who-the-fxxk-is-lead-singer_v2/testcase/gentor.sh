# cycle_maxlen cycle_n n m maxw
# testcase 1-2
python testgen.py 2 1 5 5 3 > 1.test
python testgen.py 2 1 5 5 3 > 2.test

# testcase 3-4
python testgen.py 5 1 10 10 10 > 3.test
python testgen.py 5 1 10 10 10 > 4.test

# testcase 5-8
python testgen.py 10 5 90 150 10 > 5.test
python testgen.py 10 5 90 150 10 > 6.test
python testgen.py 10 5 90 150 10 > 7.test
python testgen.py 10 5 90 150 10 > 8.test

# testcase 9-10
python testgen.py 10 6 90 150 20 > 9.test
python testgen.py 10 6 90 150 20 > 10.test

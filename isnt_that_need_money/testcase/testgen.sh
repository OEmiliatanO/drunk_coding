python testgen.py 1 -5 -1 1 5 > 1.test
python testgen.py 1 -15 -1 1 90 > 2.test
python testgen.py 1 -20 -1 1 100 > 3.test

python testgen.py 5 1 100 1 100 > 4.test

python testgen.py 10000 -100 100 -100 100 > 5.test
python testgen.py 10000 -100 100 -100 100 > 6.test
python testgen.py 10000 -100 100 -100 100 > 7.test
python testgen.py 10000 -1000 1000 -1000 1000 > 8.test
python testgen.py 10000 -1000 1000 -1000 1000 > 9.test
python testgen.py 10000 -1000 1000 -1000 1000 > 10.test

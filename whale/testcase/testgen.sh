python testgen.py 5 > 1.test
python testgen.py 5 > 2.test
python testgen.py 10 > 3.test
python testgen.py 10 > 4.test
python testgen.py 10 > 5.test
python testgen.py 100 > 6.test
python testgen.py 100 > 7.test
echo "8.test"
python testgen.py 1000000 > 8.test
echo "9.test"
python testgen.py 1000000 > 9.test
echo "10.test"
python testgen.py 1000000 > 10.test

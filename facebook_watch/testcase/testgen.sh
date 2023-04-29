echo "1.test"
python testgen.py 100 51 > 1.test
python testgen.py 100 61 > 2.test
python testgen.py 100 90 > 3.test
echo "4.test"
python testgen.py 1000 101 > 4.test
python testgen.py 1000 223 > 5.test
python testgen.py 1000 900 > 6.test
echo "7.test"
python testgen.py 30000 20000 > 7.test
python testgen.py 30000 20000 > 8.test
python testgen.py 30000 20000 > 9.test
python testgen.py 30000 20000 > 10.test

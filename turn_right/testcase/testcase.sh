# n,s,t,m,l,wmin,wmax,connect
echo 1.test
./testgen.elf 5 1 5 5 2 1 5 1 > 1.test
echo 2.test
./testgen.elf 20 1 20 50 5 1 10 1 > 2.test
echo 3.test
./testgen.elf 100 1 20 50 5 1 10 1 > 3.test
echo 4.test
./testgen.elf 1000 1 1000 50 5 1 100 1 > 4.test
echo 5.test
./testgen.elf 1000 1 1000 60 5 1 100 1 > 5.test
echo 6.test
./testgen.elf 1000 1 569 70 5 1 100 0 > 6.test
echo 7.test
./testgen.elf 100000 1 100000 1000 50 1 100 1 > 7.test
echo 8.test
./testgen.elf 100000 1 100000 1000 50 1 100 1 > 8.test
echo 9.test
./testgen.elf 100000 1 100000 1000 50 1 100 0 > 9.test
echo 10.test
./testgen.elf 100000 1 100000 1000 50 1 100 1 > 10.test

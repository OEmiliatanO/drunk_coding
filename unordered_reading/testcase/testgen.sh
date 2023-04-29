#./testgen.elf 100 -99 99 > 1.in
#./testgen.elf 100 -99 99 > 2.in
#./testgen.elf 100 -99 99 > 3.in

#./testgen.elf 1000000 -99 99 > 4.in
#./testgen.elf 1000000 -99 99 > 5.in
#./testgen.elf 1000000 -99 99 > 6.in
#echo "7.test"
#./testgen.elf 2200000 -99 99 > 7.in
#echo "8.test"
#./testgen.elf 2200000 -99 99 > 8.in
echo "9.test"
./testgen.elf  8300000 0 9 > 9.in
echo "10.test"
./testgen.elf  8300000 0 9 > 10.in

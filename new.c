echo "Enter two hexadecimal numbers:"
read h1 h2
echo "Choose operation: + - * /"
read op

# Convert hex to decimal
a=$((16#$h1))
b=$((16#$h2))

case $op in
  +) res=$(($a + $b)) ;;
  -) res=$(($a - $b)) ;;
  \*) res=$(($a * $b)) ;;
  /) res=$(($a / $b)) ;;
  *) echo "Invalid operation"; exit 1 ;;
esac



sdasndljasbdlajbd

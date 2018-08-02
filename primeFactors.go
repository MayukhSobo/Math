package main

import (
	"fmt"
)

func primeFactors(n int64) int {
	primes := [26]int64{2, 3, 5, 7, 11,
		13, 17, 19, 23, 29, 31,
		37, 41, 43, 47, 53, 59,
		61, 67, 71, 73, 79, 83,
		89, 97, 101}

	var mult int64 = 1
	for i := 0; i <= 26; i++ {
		if mult > n {
			return i - 1
		}
		mult *= primes[i]
	}
	return 26
}
func main() {
	fmt.Println(primeFactors(1))
}

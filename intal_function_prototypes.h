// Returns the sum of two intals.
char* intal_addition(const char* intal1, const char* intal2);

// Returns the absolute difference of two intals.
char* intal_subtraction(const char* intal1, const char* intal2);

// Returns the product of two intals.
char* intal_multiplication(const char* intal1, const char* intal2);

// Returns intal1 mod intal2
char* intal_modulo(const char* intal1, const char* intal2);

// Returns the comparison value of two intals.
// Returns 0 when both are equal.
// Returns +1 when intal1 is greater and -1 when intal2 is greater.
int intal_compare(const char* intal1, const char* intal2);

// Returns intal1 ^ intal2.
char* intal_power(const char* intal1, unsigned int n);

// Returns Greatest Common Devisor of intal1 and intal2.
char* intal_GCD(const char* intal1, const char* intal2);

// Returns the factorial of n.
char* intal_factorial(unsigned int n);

// Returns nth fibonacci number.
char* intal_fibonacci(unsigned int n);

// Returns the Binomial Coefficient C(n,k).
char* intal_binomial_coefficient(unsigned int n, unsigned int k);

// Returns the offset of the largest intal in the array.
// Return the smallest offset if there are multiple occurrences.
// 1 <= n <= 1000
int intal_max(char **arr, int n);

// Returns the offset of the smallest intal in the array.
// Return the smallest offset if there are multiple occurrences.
// 1 <= n <= 1000
int intal_min(char **arr, int n);

//Linear Search
// Returns the offset of the first occurrence of the key intal in the array.
// Returns -1 if the key is not found.
// 1 <= n <= 1000
int intal_linsearch(char **arr, int n, const char* key);

//Binary Search
// Returns the offset of the first occurrence of the key intal in the SORTED array.
// Returns -1 if the key is not found.
// 1 <= n <= 1000
int intal_binsearch(char **arr, int n, const char* key);

// Sorts the array of n intals.
// 1 <= n <= 1000
void intal_sort(char **arr, int n);
def SieveOfEratosthenes(n):
    """ Print all the prime no. till n"""
    prime = [True for i in range(n+1)]
    p = 2
    while (p * p <= n):
 
        # If prime[p] is not
        # changed, then it is a prime
        if (prime[p] == True):
 
            # Update all multiples of p
            for i in range(p * p, n+1, p):
                prime[i] = False
        p += 1
 
    # Print all prime numbers
    for p in range(2, n+1):
        if prime[p]:
            print(p)
 
 SieveOfEratosthenes(100)

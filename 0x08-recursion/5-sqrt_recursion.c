#include "main.h"

/**
*_sqrt_recursion - This function like the sqrt() function
* @n: The number whose square root is to be found
* Return: 0 0n success, -1 on error
*/


int calculate_sqrt(int n, int start, int end);
int _sqrt_recursion(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    if (n % 2 != 0)
      {
	return (-1);
      }
    else {
        return calculate_sqrt(n, 0, n);
    }
}

int calculate_sqrt(int n, int start, int end)
{
  int mid;
  int square;
    if (start > end) {
        return end;
    }

   mid = (start + end) / 2;
   square = mid * mid;

    if (square == n) {
        return mid;
    } else if (square > n) {
        return calculate_sqrt(n, start, mid - 1);
    } else {
        return calculate_sqrt(n, mid + 1, end);
    }
}

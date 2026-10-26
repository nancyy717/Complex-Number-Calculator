# Test Cases - Complex Number Calculator

| Test | First Number | Second Number | Expected Addition | Expected Subtraction |
|---|---|---|---|---|
| 1 | 3 + 4i | 2 + 5i | 5 + 9i | 1 - 1i |
| 2 | 5 + 0i | 2 + 0i | 7 + 0i | 3 + 0i |
| 3 | 0 + 0i | 0 + 0i | 0 + 0i | 0 + 0i |
| 4 | -3 + 2i | 1 - 4i | -2 - 2i | -4 + 6i |
| 5 | 2.5 + 1.5i | 1.5 + 0.5i | 4 + 2i | 1 + 1i |

## Invalid Input Test
Input a letter such as `a` instead of a number.

Expected result: The program displays an invalid input message and exits.
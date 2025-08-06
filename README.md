# Simple Console Calculator

Enter two numbers, select the operation, see the result. It's that simple! Supported operations: `+`, `-`, `*`, `/`

Code: [`main.cpp`](main.cpp)

## How to Use?
1) Enter the first number  
2) Enter the second number  
3) Select the operation: `+`, `-`, `*`, `/`

Example
```
Enter first number: 12
Enter second number: 3
Enter an operation (+, -, *, /): /
Result: 4
```

## Notes
- Variables are of type `long long int`; suitable for large integers.  
- Division is integer division: `7 / 2` → `3`.  
- In case of division by zero: `Error: Division by zero is not allowed.`  
- If an invalid operation is entered: `Error: Invalid operation.`

## Tips
- If you want a decimal result, you can set the `number1`, `number2`, and `sum` variables to `double`.  
- You can add a `cin.fail()` check for input validation.

# Pointer-Operations-
# Pointers and Operations  
**Experiment 10**  

## Contents  
- Aim  
- Software Used  
- Theory  
  - Call by Reference  
  - Call by Value  
- Algorithms  
- Conclusion  

---

## Aim  
To study pointer operations in C++.

---

## Software Used  
- **VS Code**  
- **Dev C++**

---

## Theory  

In C++, functions can receive parameters in different ways, influencing how they handle and manipulate the provided values. Two common methods of passing parameters are **Call by Reference** and **Call by Value**.

### Call by Reference  
- **Definition:**  
  Call by Reference involves passing the address (reference) of the actual parameters to the function, allowing it to directly modify the original variables.
  
- **Working:**  
  The function receives pointers to the variables, and any operations performed inside the function affect the original values.

### Call by Value  
- **Definition:**  
  Call by Value involves passing a copy of the actual parameters to the function. Changes made to the parameters inside the function do not affect the original variables.

- **Working:**  
  The function works on copies of the values, leaving the original data unchanged.

| **Features**            | **Call by Reference**                                      | **Call by Value**                                  |
|-------------------------|------------------------------------------------------------|----------------------------------------------------|
| **Definition**           | Passes the address (reference) of the actual parameter.    | Passes a copy of the actual parameter.             |
| **Function Parameters**  | Function receives pointers or references to the variables. | Function receives copies of the values.            |
| **Effect on Original Data** | Modifies the original data.                               | Does not modify the original data.                 |
| **Example**              | `void swap(int *x, int *y)`                                | `void swap(int x, int y)`                          |
| **Modification of Values** | Changes affect the original variables.                    | Changes do not affect the original variables.      |
| **Memory Usage**         | Uses memory for pointers/references.                       | Uses memory for copies of values.                  |
| **Performance**          | More efficient for large data structures (no copying).     | Less efficient for large data structures (copying).|
| **Use**                  | When the function needs to modify the input variables.     | When the function should not alter the inputs.     |

---

## Algorithms

### **Call by Value**

**Steps:**
1. **Start**  
2. Define function `swap(int x, int y)`
3. **Input:** Two integers `x` and `y`
4. **Output:** Swapped values of `x` and `y`
5. Inside the `swap` function:
   - Create a temporary variable `temp`
   - Assign the value of `x` to `temp`
   - Assign the value of `y` to `x`
   - Assign the value of `temp` to `y`
6. Inside `main` function:
   - Define two integers `a = 5` and `b = 2`
   - Call `swap(a, b)`
   - Print the values of `a` and `b`
7. **End**

### **Call by Reference**

**Steps:**
1. **Start**  
2. Define function `swap(int *x, int *y)`
3. **Input:** Pointers to two integers `x` and `y`
4. **Output:** Swapped values of the integers pointed to by `x` and `y`
5. Inside the `swap` function:
   - Create a temporary variable `temp`
   - Assign the value pointed to by `x` to `temp` (`temp = *x`)
   - Assign the value pointed to by `y` to the location pointed to by `x` (`*x = *y`)
   - Assign the value of `temp` to the location pointed to by `y` (`*y = temp`)
6. Inside `main` function:
   - Define two integers `a = 5` and `b = 2`
   - Call `swap(&a, &b)`
   - Print the values of `a` and `b`
7. **End**

---

## Conclusion  
In this experiment, we have learned how to work with pointer operations in C++, specifically the difference between **Call by Reference** and **Call by Value**.

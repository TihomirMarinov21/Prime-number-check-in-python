# 🔢 Prime Number Checker (Python & C++)

![Python](https://img.shields.io/badge/Python-3.x-blue)
![C++](https://img.shields.io/badge/C++-17-blue)
![Status](https://img.shields.io/badge/Project-Completed-success)

A small educational project that checks whether a given number is a **prime number**.

The project is implemented in two programming languages:

- 🐍 **Python**
- ⚙️ **C++**

The goal of this project was to better understand:

- Prime number logic
- User input validation
- Basic algorithms
- Differences between Python and C++ implementations

I like to **repeat simple projects in multiple languages** to strengthen my understanding of programming concepts and syntax.

---

# 📚 What is a Prime Number?

A **prime number** is a natural number greater than 1 that **cannot be divided evenly by any number other than 1 and itself**.

Examples:

| Number | Prime? |
|------|------|
| 2 | ✅ Prime |
| 3 | ✅ Prime |
| 4 | ❌ Not Prime |
| 7 | ✅ Prime |
| 9 | ❌ Not Prime |

---

# 🐍 Python Implementation

The Python program:

- Requests user input
- Validates that the input is a number
- Checks whether the number is prime
- Displays a result message in the terminal

### Features

✔ Input validation using `try/except`  
✔ Modular functions  
✔ Clear terminal output  

### Example Output

```
Please enter your number: 7
Yes! Your number: 7 is a prime number
```

---

# ⚙️ C++ Implementation

The C++ version implements the same logic but uses **C++ input validation techniques**.

### Features

✔ Input validation using `cin` error handling  
✔ Function-based prime checking  
✔ Uses `numeric_limits` to handle invalid input  

### Example Output

```
Choose a number which you would like to check if it is a prime number: 9
The number 9 is not a prime number
```

---

# 🧠 Algorithm Explanation

Both implementations use the same basic algorithm:

1. If the number is **less than 2 → not prime**
2. Loop through numbers from **2 to n-1**
3. If any number divides `n` evenly (`n % i == 0`)
4. The number is **not prime**
5. If no divisor is found → **prime**

---

# 📂 Project Structure

```
prime-number-checker
│
├── prime_checker.cpp
├── prime_checker.py
│
└── README.md
```

---

# ▶️ Running the Programs

## Run Python Version

```
python prime_checker.py
```

---

## Compile and Run C++ Version

Compile:

```
g++ prime_checker.cpp -o prime_checker
```

Run:

```
./prime_checker
```

---

# 🎯 Learning Goals

This project helped practice:

- Writing **basic algorithms**
- Handling **user input validation**
- Understanding **loops and conditionals**
- Implementing the **same logic in multiple languages**

---

# 🔮 Possible Improvements

Future improvements could include:

- Optimizing the prime algorithm using **√n instead of n**
- Checking **multiple numbers**
- Creating a **GUI version**
- Adding **performance comparison between Python and C++**

---

# 👨‍💻 Author

Student programming project focused on learning **Python and C++ fundamentals**.

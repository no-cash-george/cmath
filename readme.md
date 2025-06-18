# 🧮 Basic Math Library – by no_cash_george

This is a basic math library written in pure C, created mostly out of boredom 😄.  
It currently provides a set of essential mathematical functions, mostly returning `float` values  
(`double` support is planned in the future). The `factorial` function returns an `unsigned long long`.

Error handling is done by returning specific values (e.g. `1` or `2`) that should be checked by the main program.

Thanks for checking it out — have fun using it!

---

## 📄 Function Documentation

### `float int_pow(float base, int exponent)`
- **Description:** Computes `base^exponent` using an integer exponent.
- **Returns:** `float`

---

### `float pow(float base, float exponent)`
- **Description:** Computes `base^exponent`.
- **Returns:** `float`
- **Error Handling:** Returns `1` if `base` is negative.

---

### `float E(float x)`
- **Description:** Calculates `e^x`.
- **Returns:** `float`

---

### `float sqrt(float x)`
- **Description:** Calculates the square root of `x`.
- **Returns:** `float`
- **Error Handling:** Returns `1` if `x` is negative.

---

### `float root(int a, float x)`
- **Description:** Calculates the `a`-th root of `x`.
- **Returns:** `float`
- **Error Handling:** Returns `1` if `x` is negative.

---

### `float ln(float x)`
- **Description:** Computes the natural logarithm of `x`.
- **Returns:** `float`
- **Error Handling:** Returns `1` if `x` is negative.

---

### `unsigned long long fact(int a)`
- **Description:** Computes the factorial of `a` (`a!`).
- **Returns:** `unsigned long long`
- **Error Handling:** Returns `1` if `a` is negative.

---

### `float absolute(float x)`
- **Description:** Returns the absolute value of `x`.

---

### `int int_part(float x)`
- **Description:** Returns the integer part of `x`.

---

### `float sin(float x)`
- **Description:** Calculates the sine of `x` (**input in radians**).
- **Returns:** `float`
- **Error Handling:** Returns `2` if `x` is negative.  
  _(Degree-based version coming in the future.)_

---

### `float cos(float x)`
- **Description:** Calculates the cosine of `x` (**input in radians**).
- **Returns:** `float`
- **Error Handling:** Returns `2` if `x` is negative.  
  _(Degree-based version coming in the future.)_

---

### `float tan(float x)`
- **Description:** Calculates the tangent of `x` (**input in radians**).
- **Returns:** `float`
- **Error Handling:** Returns `2` if `x` is negative.

---

### `float ctg(float x)`
- **Description:** Calculates the cotangent of `x` (**input in radians**).
- **Returns:** `float`
- **Error Handling:** Returns `2` if `x` is negative.

---

## ✅ TODO / Future Improvements

- Convert all floating-point operations to use `double` instead of `float` for greater precision.
- Add support for trigonometric functions using degrees.
- Implement proper error codes and structured error handling.
- Add more advanced functions (e.g., log base n, hyperbolic functions, etc.)

---

**Made with 💻 and boredom by [no_cash_george](https://github.com/no-cash-george)**

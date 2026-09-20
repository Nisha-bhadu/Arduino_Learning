# ⚡ 05 | Arithmetic Operators & Serial Output

> Arduino me basic arithmetic operations (addition, subtraction, multiplication, division, modulo) perform karke unka result Serial Monitor par display karna[span_0](start_span)[span_0](end_span).

---

### 📌 Module Breakdown

* 🛠️ **UART Setup:** `Serial.begin(9600)` se hardware UART interface ko initialize kiya gaya hai[span_1](start_span)[span_1](end_span).
* 🧮 **Arithmetic Operations:** Global variable `int x = 20;` aur variable `y` ke upar basic math calculations run kiye gaye hain[span_2](start_span)[span_2](end_span):
  * Addition (`x + y`)[span_3](start_span)[span_3](end_span)
  * Subtraction (`x - y`)[span_4](start_span)[span_4](end_span)
  * Multiplication (`x * y`)[span_5](start_span)[span_5](end_span)
  * Division (`x / y`)[span_6](start_span)[span_6](end_span)
  * Modulo (`x % y`)[span_7](start_span)[span_7](end_span)
* 🔄 **Single-Run Execution:** Sabhi calculations `setup()` block me execute hoti hain taaki calculations sirf ek baar boot ke time run ho[span_8](start_span)[span_8](end_span).

---

### ⚙️ Technical Takeaways

* ➗ **Integer Division:** Integer division (`x / y`) me sirf quotient ka whole number part return hota hai, decimal part truncate ho jata hai.
* 🔢 **Modulo Operation (`%`):** Modulo operator division ke baad bacha hua remainder deta hai[span_9](start_span)[span_9](end_span).
* ⏱️ **Idle Loop:** `loop()` empty chhodne se MCU setup code execute karne ke baad continuously idle rehta hai bina unnecessary serial flooding ke[span_10](start_span)[span_10](end_span).

---

### 📊 Serial Output Overview

| Operation | Statement | Output Purpose | Scope |
| :--- | :--- | :--- | :--- |
| **Sum** | `Serial.println(x+y);` | `x` aur `y` ka addition[span_11](start_span)[span_11](end_span) | `setup()` — Once[span_12](start_span)[span_12](end_span) |
| **Difference** | `Serial.println(x-y);` | `x` aur `y` ka subtraction[span_13](start_span)[span_13](end_span) | `setup()` — Once[span_14](start_span)[span_14](end_span) |
| **Product** | `Serial.println(x*y);` | `x` aur `y` ka multiplication[span_15](start_span)[span_15](end_span) | `setup()` — Once[span_16](start_span)[span_16](end_span) |
| **Quotient** | `Serial.println(x/y);` | Integer division quotient[span_17](start_span)[span_17](end_span) | `setup()` — Once[span_18](start_span)[span_18](end_span) |
| **Remainder** | `Serial.println(x%y);` | Modulo remainder[span_19](start_span)[span_19](end_span) | `setup()` — Once[span_20](start_span)[span_20](end_span) |

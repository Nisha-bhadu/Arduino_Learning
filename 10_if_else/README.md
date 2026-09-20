# ⚡ 10 | Conditional Statements (if-else)

> Arduino me `if-else` decision-making statements ka use karke condition check karna aur matching block ke according Serial Monitor par message print karna[span_0](start_span)[span_0](end_span).

---

### 📌 Module Breakdown

* 🛠️ **UART Initialization:** `Serial.begin(9600);` ke through hardware serial communication ko 9600 baud rate par initialize kiya gaya hai[span_1](start_span)[span_1](end_span).
* 🔢 **Variable Initialization:** Local variable `int x=10;` declare karke test value set ki gayi hai[span_2](start_span)[span_2](end_span).
* 🔀 **Conditional Branching:**
  * **`if` Condition:** Condition `(x < 2)` ko check karta hai; agar condition true hoti hai toh `"hi"` print hota hai[span_3](start_span)[span_3](end_span).
  * **`else` Block:** Jab `if` condition false hoti hai toh execution automatically `else` block me shift ho jata hai aur `"hey"` print karta hai[span_4](start_span)[span_4](end_span).
* 🔄 **One-Time Execution:** Saara control flow `setup()` block me run ho raha hai, isliye evaluation aur output boot time par sirf ek baar trigger hota hai[span_5](start_span)[span_5](end_span).

---

### ⚙️ Technical Takeaways

* 🧭 **Decision Flow:** `x = 10` hone par condition `10 < 2` evaluate hokar `false` return karti hai, jisse `if` block bypass ho kar seedha `else` block execute hota hai[span_6](start_span)[span_6](end_span).
* 🛑 **Empty Loop Safety:** `loop()` ko empty chhodne se MCU setup execute hone ke baad idle rehta hai aur unwanted repetitive printing avoid hoti hai[span_7](start_span)[span_7](end_span).

---

### 📊 Serial Output Overview

| Variable Value | Checked Condition | Evaluation Result | Executed Block | Output (Serial Monitor) |
| :--- | :--- | :--- | :--- | :--- |
| `x = 10`[span_8](start_span)[span_8](end_span) | `if (x < 2)`[span_9](start_span)[span_9](end_span) | `10 < 2` → **False**[span_10](start_span)[span_10](end_span) | `else` block[span_11](start_span)[span_11](end_span) | `hey`[span_12](start_span)[span_12](end_span) |

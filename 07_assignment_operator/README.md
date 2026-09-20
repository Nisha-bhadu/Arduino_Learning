.# ⚡ 07 | Compound Assignment Operators

> Arduino me compound assignment operators (`+=`, `-=`, `*=`, `/=`, `%=`) ka use karke variable ki value ko update aur serial monitor par print karna[span_0](start_span)[span_0](end_span).

---

### 📌 Module Breakdown

* 🛠️ **UART Initialization:** `Serial.begin(9600);` se 9600 baud rate par serial communication start kiya gaya hai[span_1](start_span)[span_1](end_span).
* 🔢 **Variable Declaration:** Local variable `int x = 10;` declare karke initial state set ki gayi[span_2](start_span)[span_2](end_span).
* ➕ **Addition Assignment (`+=`):** `x+=2;` run karke `x` ki value 12 ki gayi aur print kiya gaya[span_3](start_span)[span_3](end_span).
* ➖ **Subtraction Assignment (`-=`):** `x-=2;` run karke value wapas 10 karke print kiya gaya[span_4](start_span)[span_4](end_span).
* ✖️ **Multiplication Assignment (`*=`):** `x*=2;` run karke value 20 karke print kiya gaya[span_5](start_span)[span_5](end_span).
* ➗ **Division Assignment (`/=`):** `x/=2;` run karke value wapas 10 karke print kiya gaya[span_6](start_span)[span_6](end_span).
* 🔣 **Modulo Assignment (`%=`):** `x%=2;` run karke remainder 0 calculate kiya gaya aur print kiya gaya[span_7](start_span)[span_7](end_span).

---

### ⚙️ Technical Takeaways

* ⚡ **Shorthand Syntax:** Compound operators arithmetic calculation aur value assignment ko ek hi step me efficiently execute karte hain (`x += 2` ka matlab `x = x + 2`)[span_8](start_span)[span_8](end_span).
* 🔄 **In-Place Modification:** Har operation variable `x` ki value ko memory me directly update karta hai[span_9](start_span)[span_9](end_span).
* 🛑 **Single-Run Flow:** Saari calculations `setup()` block me hain, isliye pura sequence board boot hone par sirf ek baar run hota hai[span_10](start_span)[span_10](end_span).

---

### 📊 Serial Output Overview

| Step | Statement | Calculation | Output (Serial Monitor) |
| :--- | :--- | :--- | :--- |
| **Initial** | `int x = 10;` | Starting value[span_11](start_span)[span_11](end_span) | — |
| **Step 1** | `x += 2;` | `10 + 2`[span_12](start_span)[span_12](end_span) | `12`[span_13](start_span)[span_13](end_span) |
| **Step 2** | `x -= 2;` | `12 - 2`[span_14](start_span)[span_14](end_span) | `10`[span_15](start_span)[span_15](end_span) |
| **Step 3** | `x *= 2;` | `10 * 2`[span_16](start_span)[span_16](end_span) | `20`[span_17](start_span)[span_17](end_span) |
| **Step 4** | `x /= 2;` | `20 / 2`[span_18](start_span)[span_18](end_span) | `10`[span_19](start_span)[span_19](end_span) |
| **Step 5** | `x %= 2;` | `10 % 2`[span_20](start_span)[span_20](end_span) | `0`[span_21](start_span)[span_21](end_span) |

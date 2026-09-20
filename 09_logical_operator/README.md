# ⚡ 09 | Logical Operators

> Arduino me logical operators (`&&`, `||`, `!`) ka use karke multiple conditions ko evaluate karna aur unka boolean output Serial Monitor par print karna[span_0](start_span)[span_0](end_span).

---

### 📌 Module Breakdown

* 🛠️ **UART Initialization:** `Serial.begin(9600);` se 9600 baud rate par serial communication start kiya gaya hai[span_1](start_span)[span_1](end_span).
* 🔢 **Variable Declaration:** Global variables `int x = 10, y = 20;` define karke initial values set ki gayi hain[span_2](start_span)[span_2](end_span).
* 🧠 **Logical Operations:**
  * **Logical AND (`&&`):** Check karta hai ki dono conditions true hain ya nahi (`(x>=y && x<y)` aur `(x<y && x<=y)`)[span_3](start_span)[span_3](end_span).
  * **Logical OR (`||`):** Check karta hai ki dono me se koi bhi ek condition true hai ya nahi (`(x>=y || x<y)` aur `(x<y || x<=y)`)[span_4](start_span)[span_4](end_span).
  * **Logical NOT (`!`):** Condition ke final result ko invert (reverse) karta hai (`!(x<y)`)[span_5](start_span)[span_5](end_span).
* 🔄 **One-Time Execution:** Saara logic `setup()` me run hota hai, isliye boot time par result sirf ek baar display hota hai[span_6](start_span)[span_6](end_span).

---

### ⚙️ Technical Takeaways

* 🔗 **Short-Circuit Evaluation:** `&&` me agar pehli condition `false` hoti hai toh dusri condition check nahi hoti[span_7](start_span)[span_7](end_span); `||` me agar pehli condition `true` hoti hai toh dusri bypass ho jati hai[span_8](start_span)[span_8](end_span).
* 🔄 **NOT Operator Behavior:** `!` operator truth values ko reverse kar deta hai (`true` ko `false` / `0`, aur `false` ko `true` / `1`)[span_9](start_span)[span_9](end_span)[span_10](start_span)[span_10](end_span).
* 📡 **Serial Output Format:** Arduino Serial Monitor par boolean results ko numeric binary (`1` for `true`, `0` for `false`) ke form me represent karta hai[span_11](start_span)[span_11](end_span)[span_12](start_span)[span_12](end_span).

---

### 📊 Serial Output Overview

| Expression | Condition Check (`x = 10`, `y = 20`) | Logic Result | Output (Serial Monitor) |
| :--- | :--- | :--- | :--- |
| `(x>=y && x<y)` | `(10>=20 && 10<20)` → `False && True`[span_13](start_span)[span_13](end_span) | False | `0`[span_14](start_span)[span_14](end_span)[span_15](start_span)[span_15](end_span) |
| `(x<y && x<=y)` | `(10<20 && 10<=20)` → `True && True`[span_16](start_span)[span_16](end_span) | True | `1`[span_17](start_span)[span_17](end_span)[span_18](start_span)[span_18](end_span) |
| `(x>=y \|\| x<y)` | `(10>=20 \|\| 10<20)` → `False \|\| True`[span_19](start_span)[span_19](end_span) | True | `1`[span_20](start_span)[span_20](end_span)[span_21](start_span)[span_21](end_span) |
| `(x<y \|\| x<=y)` | `(10<20 \|\| 10<=20)` → `True \|\| True`[span_22](start_span)[span_22](end_span) | True | `1`[span_23](start_span)[span_23](end_span)[span_24](start_span)[span_24](end_span) |
| `!( x<y);` | `!(10<20)` → `!(True)`[span_25](start_span)[span_25](end_span) | False | `0`[span_26](start_span)[span_26](end_span)[span_27](start_span)[span_27](end_span) |
| `!( x<y);` | *(Same line repeated)* → `!(True)`[span_28](start_span)[span_28](end_span) | False | `0`[span_29](start_span)[span_29](end_span)[span_30](start_span)[span_30](end_span) |

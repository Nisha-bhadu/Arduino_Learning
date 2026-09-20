# ⚡ 06 | Increment & Decrement Operators

> Arduino me unary increment (`++`) aur decrement (`--`) operators ka variable ke state aur continuous serial stream par impact demonstrate karna[span_0](start_span)[span_0](end_span).

---

### 📌 Module Breakdown

* 🛠️ **UART Initialization:** `Serial.begin(9600);` se 9600 baud rate par serial communication start kiya gaya hai[span_1](start_span)[span_1](end_span).
* ➕ **Post-Increment Operation:** Global variable `int x = 10;` ko `x++;` execute karke 1 se badhaya gaya (10 -> 11)[span_2](start_span)[span_2](end_span).
* ➖ **Post-Decrement Operation:** Turant `x--;` execute karke value ko wapas 1 se ghataya gaya (11 -> 10)[span_3](start_span)[span_3](end_span).
* 🔁 **Continuous Telemetry:** Final state `x` ko `loop()` ke andar `Serial.println(x);` se lagatar stream kiya gaya hai[span_4](start_span)[span_4](end_span).

---

### ⚙️ Technical Takeaways

* 🔄 **Net State Neutralization:** `setup()` me `x++` aur `x--` dono sequentially execute hone ki wajah se variable `x` ki value wapas apni initial state `10` par aa jati hai[span_5](start_span)[span_5](end_span).
* 🚀 **Unthrottled Loop Execution:** `loop()` ke andar bina kisi `delay()` ke `Serial.println(x);` call hone ke karan UART buffer par data bohot high frequency me continuously print hota hai[span_6](start_span)[span_6](end_span).

---

### 📊 Serial Output Overview

| Variable / Statement | Action in Code | Final Value | Scope & Frequency |
| :--- | :--- | :--- | :--- |
| `int x = 10;` | Initial declaration[span_7](start_span)[span_7](end_span) | `10`[span_8](start_span)[span_8](end_span) | Global Scope[span_9](start_span)[span_9](end_span) |
| `x++;` | Increment (+1)[span_10](start_span)[span_10](end_span) | `11` | `setup()` — Once[span_11](start_span)[span_11](end_span) |
| `x--;` | Decrement (-1)[span_12](start_span)[span_12](end_span) | `10` | `setup()` — Once[span_13](start_span)[span_13](end_span) |
| `Serial.println(x);` | Print to Serial Monitor[span_14](start_span)[span_14](end_span) | `10`[span_15](start_span)[span_15](end_span) | `loop()` — Continuous[span_16](start_span)[span_16](end_span) |

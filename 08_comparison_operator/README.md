# ⚡ 08 | Comparison (Relational) Operators

> Arduino me relational operators (`>`, `<`, `>=`, `<=`, `==`, `!=`) ka use karke do values ko compare karna aur unka boolean output Serial Monitor par display karna[span_0](start_span)[span_0](end_span).

---

### 📌 Module Breakdown

* 🛠️ **UART Initialization:** `Serial.begin(9600);` se 9600 baud rate par hardware serial interface initialize kiya gaya hai[span_1](start_span)[span_1](end_span).
* 🔢 **Variable Declaration:** Global scope me do integer variables `int x = 20, y = 30;` define kiye gaye hain[span_2](start_span)[span_2](end_span).
* ⚖️ **Relational Operations:** `x` aur `y` ke beech comparison evaluate kiya gaya hai:
  * Greater than (`x > y`)[span_3](start_span)[span_3](end_span)
  * Less than (`x < y`)[span_4](start_span)[span_4](end_span)
  * Greater than or equal to (`x >= y`)[span_5](start_span)[span_5](end_span)
  * Less than or equal to (`x <= y`)[span_6](start_span)[span_6](end_span)
  * Equal to (`x == y`)[span_7](start_span)[span_7](end_span)
  * Not equal to (`x != y`)[span_8](start_span)[span_8](end_span)
* 🔄 **One-Time Execution:** Saari comparisons `setup()` block me hain, isliye results boot time par sirf ek baar print hote hain[span_9](start_span)[span_9](end_span).

---

### ⚙️ Technical Takeaways

* 📡 **Boolean Output Representation:** Relational expressions evaluate hone ke baad boolean return karti hain; Arduino serial monitor par `true` ko `1` aur `false` ko `0` ke roop me print karta hai[span_10](start_span)[span_10](end_span)[span_11](start_span)[span_11](end_span).
* 🔍 **Equality vs Assignment:** Comparison ke liye double equals (`==`) use hota hai, single equal (`=`) assignment ke liye hota hai[span_12](start_span)[span_12](end_span)[span_13](start_span)[span_13](end_span).
* 🛑 **Idle Loop Execution:** `loop()` empty chhodne se code repetitive UART flooding se bachta hai[span_14](start_span)[span_14](end_span).

---

### 📊 Serial Output Overview

| Expression | Condition (`x = 20`, `y = 30`) | Boolean Result | Output (Serial Monitor) |
| :--- | :--- | :--- | :--- |
| `x > y` | 20 > 30[span_15](start_span)[span_15](end_span) | False | `0`[span_16](start_span)[span_16](end_span)[span_17](start_span)[span_17](end_span) |
| `x < y` | 20 < 30[span_18](start_span)[span_18](end_span) | True | `1`[span_19](start_span)[span_19](end_span)[span_20](start_span)[span_20](end_span) |
| `x >= y` | 20 >= 30[span_21](start_span)[span_21](end_span) | False | `0`[span_22](start_span)[span_22](end_span)[span_23](start_span)[span_23](end_span) |
| `x <= y` | 20 <= 30[span_24](start_span)[span_24](end_span) | True | `1`[span_25](start_span)[span_25](end_span)[span_26](start_span)[span_26](end_span) |
| `x == y` | 20 == 30[span_27](start_span)[span_27](end_span) | False | `0`[span_28](start_span)[span_28](end_span)[span_29](start_span)[span_29](end_span) |
| `x != y` | 20 != 30[span_30](start_span)[span_30](end_span) | True | `1`[span_31](start_span)[span_31](end_span)[span_32](start_span)[span_32](end_span) |

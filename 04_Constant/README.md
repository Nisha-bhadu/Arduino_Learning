# ⚡ 04 | Constants, Booleans & Serial Output

> Arduino me constants, boolean logic aur `setup()` vs `loop()` ke serial execution flow ka practical implementation[span_0](start_span)[span_0](end_span)[span_1](start_span)[span_1](end_span).

---

### 📌 Module Breakdown

* 🔢 **Identifier Output:** Startup par identifier `x` ki value ko UART bus par print karna[span_2](start_span)[span_2](end_span).
* 🟢 **Boolean Flag:** `bool isStudent = true;` declare karke state track karna[span_3](start_span)[span_3](end_span).
* 🔄 **Lifecycle Segregation:** One-time values ko `setup()` me run karna aur `FirstName` ko `loop()` me har 500ms par continuously stream karna[span_4](start_span)[span_4](end_span).

---

### ⚙️ Technical Takeaways

* 📡 **Boolean Serialization:** `Serial.println(isStudent)` boolean `true` ko string ke bajay numeric digit `1` me convert karke send karta hai[span_5](start_span)[span_5](end_span)[span_6](start_span)[span_6](end_span).
* ⏱️ **Paced Telemetry:** `delay(1000)` aur `delay(500)` serial buffer ko overflow hone se bachaate hain[span_7](start_span)[span_7](end_span).

---

### 📊 Expected Serial Output

| Variable / Statement | Output (Serial Monitor) | Scope & Timing |
| :--- | :--- | :--- |
| `Serial.println(x);` | `[x ki value]`[span_8](start_span)[span_8](end_span) | `setup()` — Once[span_9](start_span)[span_9](end_span) |
| `Serial.println(isStudent);` | `1`[span_10](start_span)[span_10](end_span) | `setup()` — Once[span_11](start_span)[span_11](end_span) |
| `Serial.println(FirstName);` | `Sita`[span_12](start_span)[span_12](end_span) | `loop()` — Har 500ms me repeat[span_13](start_span)[span_13](end_span) |

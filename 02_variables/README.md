# ⚡ Arduino Variable Output & Serial Stream Visualizer

A practical demonstration of variable handling and serial streaming in C++ for Arduino microcontrollers, focusing on numerical vs. text-based data types.

---

## 📸 Output Screenshots

| 01. Integer Data Type Printing | 02. String & Text Data Type Printing |
| :--- | :--- |
| ![Integer Data Type Output](./screenshots/output_integer.png) | ![String Data Type Output](./screenshots/output_string.png) |
| *Demonstrates integer variable assignment and numeric value streaming to the Serial Monitor.* | *Demonstrates C-style string buffers and String object rendering over the Serial interface.* |

---

## 🧠 Key Takeaways

* **Numerical Output:** Direct printing of integer types (`int`, `long`, `unsigned`) handles raw binary-to-ASCII conversion behind the scenes.
* **Text Streams:** Differentiates between heap-allocated `String` objects and null-terminated character arrays (`char[]`) for memory-conscious firmware development.

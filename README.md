# BSQ — Biggest Square

Find and mark the **largest square without obstacles** in a rectangular map. This is a classic **algorithmic project (in C)** from the **Epitech** curriculum.

---

## 🎯 Goal

Write a program `bsq` that reads a map (from a **file** or **standard input**), locates the largest possible square of empty cells, **fills** it with a dedicated character, and then **prints** the modified map to standard output.

---

## 🧾 Input format

There are two common variants of the subject. Your evaluator will specify which one is required. The project must **support the chosen variant** and properly **handle errors**.

### 42 variant (legend on the first line)

* Line 1: `N<empty><obstacle><full>` where:

  * `N` = number of lines in the map (positive integer)
  * `<empty>` = character for empty cells
  * `<obstacle>` = character for obstacles
  * `<full>` = character used to fill the biggest square
* Lines 2..N+1: `N` lines of equal length composed only of `<empty>` and `<obstacle>`.

**Example**

```
9.ox
...........................
....o......................
......................o....
...............o...........
...........................
.................o.........
.......o...................
...........................
....o......................
```

### Epitech variant (implicit legend)

* Line 1: `N` (number of lines)
* Lines 2..N+1: `.` for empty, `o` for obstacle, and the program must display the square filled with `x`.

**Example**

```
9
...........................
....o......................
......................o....
...............o...........
...........................
.................o.........
.......o...................
...........................
....o......................
```

> **Common rules**
>
> * All lines of the map must have the **same length** (M).
> * `N ≥ 1`, `M ≥ 1`.
> * Strict error handling: invalid format, invalid characters, lines of different lengths, inconsistent N, empty file, etc.

---

## ✅ Expected output

The same map, with the **largest square** filled with `<full>` (or `x` depending on the variant), printed to **standard output**, followed by a final `\n`.

**Example (Epitech variant, square filled with `x`)**

```
...........................
....o......................
......................o....
...............o...........
........xxxxxxx............
........xxxxxxx.o..........
.......oxxxxxxx............
........xxxxxxx............
....o......................
```

On error: print `map error\n` to **standard error** and return a non‑zero exit code.

---

## 🚀 Compilation & execution

### Makefile

Standard targets:

* `make` / `make all`: build `bsq`
* `make clean`: remove objects
* `make fclean`: remove binaries & objects
* `make re`: fclean + recompile

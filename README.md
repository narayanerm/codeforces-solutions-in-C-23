# Codeforces Solutions

[Codeforces](https://codeforces.com) problem solutions in C++, developed as part of the **ITAndroids** team training.

## Structure

```
codeforces/
├── 800/              # Rating 800 problems
│   ├── *.cpp         # Source code for each problem
│   └── input/        # Local test input files
├── template.cpp      # Base template for new problems
```

## Template

The [template.cpp](template.cpp) file includes the most commonly used headers, typedefs, and macros:

| Alias / Macro | Meaning |
|---|---|
| `ll`, `ld` | `long long`, `long double` |
| `pii`, `pll` | `pair<int,int>`, `pair<ll,ll>` |
| `vi`, `vl` | `vector<int>`, `vector<ll>` |
| `all(x)` | `x.begin(), x.end()` |
| `rall(x)` | `x.rbegin(), x.rend()` |
| `pb` | `push_back` |
| `rep(i,a,b)` | `for (int i = a; i < b; i++)` |
| `FASTIO` | disables stdio sync for faster I/O |
| `dbg(x)` | prints variable to stderr (only with `-DLOCAL`) |

## Build

The project uses **MinGW (gcc)** via VSCode. To compile the active file: `Ctrl+Shift+B`.

To run with a file as input:
```
.\output\<problem>.exe < 800\input\<problem>.txt
```

## Solved Problems

| Problem | Rating |
|---|---|
| [1A](https://codeforces.com/problemset/problem/1/A) | 800 |
| [4A](https://codeforces.com/problemset/problem/4/A) | 800 |
| [41A](https://codeforces.com/problemset/problem/41/A) | 800 |
| [50A](https://codeforces.com/problemset/problem/50/A) | 800 |
| [59A](https://codeforces.com/problemset/problem/59/A) | 800 |
| [71A](https://codeforces.com/problemset/problem/71/A) | 800 |
| [110A](https://codeforces.com/problemset/problem/110/A) | 800 |
| [112A](https://codeforces.com/problemset/problem/112/A) | 800 |
| [158A](https://codeforces.com/problemset/problem/158/A) | 800 |
| [226A](https://codeforces.com/problemset/problem/226/A) | 800 |
| [231A](https://codeforces.com/problemset/problem/231/A) | 800 |
| [236A](https://codeforces.com/problemset/problem/236/A) | 800 |
| [263A](https://codeforces.com/problemset/problem/263/A) | 800 |
| [281A](https://codeforces.com/problemset/problem/281/A) | 800 |
| [282A](https://codeforces.com/problemset/problem/282/A) | 800 |
| [339A](https://codeforces.com/problemset/problem/339/A) | 800 |
| [546A](https://codeforces.com/problemset/problem/546/A) | 800 |
| [617A](https://codeforces.com/problemset/problem/617/A) | 800 |
| [734A](https://codeforces.com/problemset/problem/734/A) | 800 |
| [791A](https://codeforces.com/problemset/problem/791/A) | 800 |
| [977A](https://codeforces.com/problemset/problem/977/A) | 800 |
| [2218B](https://codeforces.com/problemset/problem/2218/B) | 800 |

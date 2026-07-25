# 🏆 AtCoder C++ Solutions

A dedicated repository for storing my C++ solutions and tracking my problem-solving progress on **AtCoder**.

### 📊 Practice Stats

<p align="center">
  <a href="https://atcoder.jp/users/krss"><img src="https://img.shields.io/badge/AtCoder-krss-black?style=for-the-badge&logo=atcoder&logoColor=white" alt="AtCoder Profile" /></a>
  <a href="https://kenkoooo.com/atcoder/#/user/krss"><img src="https://img.shields.io/badge/Accepted-1_Problem-2b90d9?style=for-the-badge&logo=atcoder&logoColor=white" alt="AtCoder Accepted Count" /></a>
</p>

---

### 📁 Repository Structure

```text
AtCoder-Solutions/
├── README.md
├── Bootcamp/
│   ├── Easy/
│   │   ├── <Problem_Name>.cpp
│   │   ├── ...
│   │   └── ...
│   ├── Medium/
│   └── Hard/
└── ABC/
    ├── ABC139/
    │   ├── <Problem_Name>.cpp
    │   └── ...
    └── ABC300/

```

* 🎯 **`Bootcamp/`**: Solutions from *Boot camp for Beginners* (300 selected problems).
* `Easy/`: 100 Easy problems.
* `Medium/`: 100 Medium problems.
* `Hard/`: 100 Hard problems.


* 🏆 **`ABC/`**: Solutions from *AtCoder Beginner Contests* (organized by contest number).

---

### 💡 Code Template Format

Each C++ file includes problem details, problem link, and brief algorithmic logic at the top:

```cpp
/*
 * Problem Name: B - Power Socket
 * Contest: Boot Camp Easy 1 / ABC139
 * URL: [https://atcoder.jp/contests/abc139/tasks/abc139_b](https://atcoder.jp/contests/abc139/tasks/abc139_b)
 * Notes: Greedy / Math approach
 */

```

---

### 📌 B - Power Socket (ABC139_B)

* **Problem Link:** [AtCoder ABC139_B](https://atcoder.jp/contests/abc139/tasks/abc139_b)
* **Category:** Math / Greedy Simulation

#### 📝 Problem Summary

Takahashi has $1$ power socket on the wall and an unlimited number of power strips. Each power strip extends $1$ socket into $A$ sockets. Find the minimum number of power strips required to get at least $B$ sockets in total.

#### 💡 Approach

* **Initial State:** We start with $1$ wall socket.
* **Key Observation:** Plugging 1 new power strip with $A$ sockets consumes $1$ existing socket for the plug itself. Thus, each additional power strip net-increases the available sockets by $A - 1$.
* **Algorithm:**
* If initial sockets ($1$) is already $\ge B$, the answer is `0`.
* Otherwise, loop and incrementally add $(A - 1)$ sockets while counting until the total reaches $\ge B$.



---

### 🛠️ Tech Stack & Environment

* **Language:** C++ (C++23)
* **OS / Environment:** WSL2 (Ubuntu Linux) & VS Code
* **Judge System:** AtCoder
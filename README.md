# Financial Performance Utilities

![C++17](https://img.shields.io/badge/C++-17-blue.svg)
![Build](https://img.shields.io/badge/Build-CMake-success.svg)
![Tests](https://img.shields.io/badge/Tests-GoogleTest-green.svg)
![Status](https://img.shields.io/badge/Status-Active-brightgreen.svg)

C++ utilities for parsing financial data and optimizing backend performance. Inspired by real-world systems at DXC Technology and CVS Health.

---

## 📖 Overview

This repository contains performance-critical C++ modules designed to handle large-scale financial and healthcare datasets.  
The utilities demonstrate efficient transaction parsing, optimized metric computations, and benchmarking techniques that highlight measurable improvements in throughput and computation speed.

---

## ⚙️ Features

- **High-Performance Transaction Parser**  
  Efficiently parses and validates large volumes of financial records.

- **Metrics Optimizer**  
  Optimized algorithms for real-time health and financial metrics.

- **Benchmarks**  
  Compare baseline vs optimized performance to demonstrate measurable gains.

- **Testing Suite**  
  Unit tests using GoogleTest to ensure reliability and maintainability.

---

## 🧪 Tech Stack

- **Language:** C++17  
- **Libraries:** STL (Standard Template Library)  
- **Build System:** CMake  
- **Testing Framework:** GoogleTest  

---




---

## ⚡ Quickstart

# 1. Clone the repository
git clone https://github.com/aronbariagabr/financial-performance-utils.git
cd financial-performance-utils

# 2. Configure and build
mkdir build && cd build
cmake ..
make -j$(nproc)  # Faster builds using multiple cores

# 3. Run the automated tests
ctest --output-on-failure

# 4. Execute the performance demo
./examples/demo_run

## 📁 Repository Structure
financial-performance-utils/
├── src/                    # Implementation files
│   ├── main.cpp
│   ├── transaction_parser.cpp
│   └── metrics_optimizer.cpp
├── include/                # Headers
│   ├── parser.h
│   └── optimizer.h
├── tests/                  # Unit tests
│   ├── parser_tests.cpp
│   └── metrics_tests.cpp
├── benchmarks/             # Performance testing
│   ├── benchmark_parser.cpp
│   └── benchmark_metrics.cpp
├── examples/               # Usage demos
│   ├── demo_run.cpp
│   └── sample_data.csv
├── docs/                   # Documentation
│   └── architecture.md
└── CMakeLists.txt          # Build configuration

### 🏗️ Box‑Style Architecture Diagram

```markdown
## 🏗️ Architecture Diagram  
┌───────────────────────────────┐
│          Data Sources          │
│   CSV files, financial data    │
└───────────────┬───────────────┘
                │
┌───────────────┴───────────────┐
│     Transaction Parser         │
│   Efficient parsing & validation│
└───────────────┬───────────────┘
                │
┌───────────────┴───────────────┐
│     Metrics Optimizer          │
│     Real-time computation      │
└───────────────┬───────────────┘
                │
┌───────────────┴───────────────┐
│          Benchmarks            │
│   Baseline vs optimized runs   │
└───────────────┬───────────────┘
                │
┌───────────────┴───────────────┐
│         Testing Suite          │
│   Reliability with GoogleTest  │
└───────────────┬───────────────┘
                │
┌───────────────┴───────────────┐
│       Examples & Docs          │
│   Demo workflows, architecture │
└───────────────┬───────────────┘
                │
┌───────────────┴───────────────┐
│          End Impact            │
│   Recruiter-ready portfolio    │
└───────────────────────────────┘

## 📁 Project Architecture Diagram (Mermaid)

```mermaid
flowchart TD
    A[Data Sources<br/>CSV files, financial data] --> B[Transaction Parser<br/>Efficient parsing & validation]
    B --> C[Metrics Optimizer<br/>Real-time computation]
    C --> D[Benchmarks<br/>Baseline vs optimized runs]
    D --> E[Testing Suite<br/>Reliability with GoogleTest]
    E --> F[Examples & Docs<br/>Demo workflows, architecture]
    F --> G[End Impact<br/>Recruiter-ready portfolio]

🔄 Workflow
- Load Transactions → Read financial records from CSV.
- Parse & Validate → Ensure correctness and filter invalid data.
- Optimize Metrics → Apply algorithms for performance improvements.
- Benchmark → Compare baseline vs optimized execution times.
- Report Results → Output metrics and performance logs.

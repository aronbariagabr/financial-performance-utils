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

## 📁 Repository Structure

financial-performance-utils/
│── README.md
│── src/
│   ├── main.cpp
│   ├── transaction_parser.cpp
│   ├── metrics_optimizer.cpp
│── include/
│   ├── parser.h
│   ├── optimizer.h
│── tests/
│   ├── parser_tests.cpp
│   ├── metrics_tests.cpp
│── benchmarks/
│   ├── benchmark_parser.cpp
│   ├── benchmark_metrics.cpp
│── examples/
│   ├── demo_run.cpp
│   ├── sample_data.csv
│── docs/
│   ├── architecture.md
│── CMakeLists.txt


---

## ⚡ Quickstart

### Build
```bash
mkdir build && cd build
cmake ..
make
ctest
./examples/demo_run

## 🗂 Project Architecture Diagram

```text
┌───────────────────────────────────────────────┐
│                 Data Sources                  │
│   CSV files, financial datasets, sample_data  │
└───────────────┬───────────────────────────────┘
                │
┌───────────────┴───────────────────────────────┐
│              Transaction Parser               │
│   src/transaction_parser.cpp                  │
│   include/parser.h                            │
│   Efficient parsing & validation of records   │
└───────────────┬───────────────────────────────┘
                │
┌───────────────┴───────────────────────────────┐
│              Metrics Optimizer                │
│   src/metrics_optimizer.cpp                   │
│   include/optimizer.h                         │
│   Real-time metric computation & optimization │
└───────────────┬───────────────────────────────┘
                │
┌───────────────┴───────────────────────────────┐
│                 Benchmarks                    │
│   benchmarks/benchmark_parser.cpp             │
│   benchmarks/benchmark_metrics.cpp            │
│   Compare baseline vs optimized performance   │
└───────────────┬───────────────────────────────┘
                │
┌───────────────┴───────────────────────────────┐
│                 Testing Suite                 │
│   tests/parser_tests.cpp                      │
│   tests/metrics_tests.cpp                     │
│   GoogleTest for reliability & maintainability│
└───────────────┬───────────────────────────────┘
                │
┌───────────────┴───────────────────────────────┐
│                 Examples                      │
│   examples/demo_run.cpp                       │
│   examples/sample_data.csv                    │
│   Demonstrates workflow integration & usage   │
└───────────────┬───────────────────────────────┘
                │
┌───────────────┴───────────────────────────────┐
│                 Documentation                 │
│   docs/architecture.md                        │
│   Diagrams, workflow notes, design decisions  │
└───────────────┬───────────────────────────────┘
                │
┌───────────────┴───────────────────────────────┐
│                 End Impact                    │
│   Recruiter-ready portfolio project           │
│   Showcases system design, performance focus  │
│   Demonstrates enterprise-grade repo layout   │
└───────────────────────────────────────────────┘

🔄 Workflow
Load Transactions → Read financial records from CSV.

Parse & Validate → Ensure correctness and filter invalid data.

Optimize Metrics → Apply algorithms for performance improvements.

Benchmark → Compare baseline vs optimized execution times.

Report Results → Output metrics and performance logs.

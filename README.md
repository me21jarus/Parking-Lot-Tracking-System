# 🅿️ Parking Lot Tracking System (C++)

A **console-based Parking Lot Management System** built using **C++**, showcasing **Object-Oriented Programming (OOP)**, **SOLID design principles**, **design patterns**, **file-based persistence**, and a **CI/CD pipeline using GitHub Actions**.

This project is built **from scratch using plain C++ (no CMake, no frameworks)** and is intended as a **resume-ready, interview-friendly system design project**.

---

## 🚀 Key Features

- Park and remove vehicles (Car, Bike)
- Automatic slot allocation
- Slot availability display
- File-based data persistence
- Data restoration on application restart
- Configurable pricing using Strategy Pattern
- Clean architecture following SOLID principles
- Modern C++ memory management (`unique_ptr`, RAII)
- CI/CD pipeline using GitHub Actions

---

## 🧠 Concepts & Skills Demonstrated

- Object-Oriented Programming (OOP)
- SOLID Design Principles
- Factory Pattern
- Strategy Pattern
- Dependency Injection
- File Handling in C++
- Polymorphism and Abstraction
- Smart Pointers (`std::unique_ptr`)
- CI/CD with GitHub Actions

---

## 🧱 System Architecture Overview

### Core Components

- **Vehicle (Abstract Class)**
  - Base class for all vehicle types
  - Implemented by `Car` and `Bike`

- **ParkingSlot**
  - Represents a single parking slot
  - Holds vehicle, slot number, and entry time

- **ParkingLot**
  - Manages all parking operations
  - Coordinates storage and pricing logic

- **Pricing Strategy**
  - Implements pricing rules using Strategy Pattern

- **Storage Layer**
  - File-based persistence using abstraction

- **Vehicle Factory**
  - Centralized vehicle creation logic

---

## 📐 SOLID Principles Applied

### ✅ Single Responsibility Principle (SRP)
Each class has a single responsibility:
- `ParkingLot` → parking logic
- `ParkingStorage` → persistence
- `PricingStrategy` → pricing rules

### ✅ Open/Closed Principle (OCP)
- New vehicle types or pricing strategies can be added without modifying existing code

### ✅ Liskov Substitution Principle (LSP)
- `Car` and `Bike` objects can be used wherever `Vehicle` is expected

### ✅ Interface Segregation Principle (ISP)
- Small, focused interfaces (`PricingStrategy`, `ParkingStorage`)

### ✅ Dependency Inversion Principle (DIP)
- High-level modules depend on abstractions, not concrete implementations

---

## 🧩 Design Patterns Used

| Pattern | Purpose |
|-------|--------|
| Factory Pattern | Vehicle creation |
| Strategy Pattern | Pricing logic |
| Dependency Injection | Storage & pricing |
| RAII | Memory safety |

---

## 📁 Project Structure

Parking-Lot-Tracking-System/
│
├── main.cpp
│
├── Vehicle.h
├── Car.h
├── Bike.h
├── VehicleFactory.h
│
├── ParkingSlot.h
├── ParkingSlot.cpp
│
├── ParkingLot.h
├── ParkingLot.cpp
│
├── ParkingStorage.h
├── ParkingStorage.cpp
│
├── PricingStrategy.h
├── HourlyPricingStrategy.h
│
├── parking_data.txt
├── README.md
│
└── .github/
└── workflows/
└── cpp-ci.yml


---

## 🛠️ Build & Run Instructions

### 🔹 Prerequisites
- g++ (C++17 or later)
- Linux / macOS / WSL
- Git (optional, for CI/CD)

### 🔹 Compile the Project
```bash
g++ -std=c++17 \
main.cpp \
ParkingSlot.cpp \
ParkingLot.cpp \
ParkingStorage.cpp \
-o parking
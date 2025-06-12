# Learn C++ for IoT Development

Welcome to the Learn C++ repository! This resource is crafted for computer science graduates with expertise in Java, TypeScript, and ReactJS, aiming to master C++ for IoT development in Japan's hardware-driven market (e.g., smart cities, manufacturing, healthcare). It focuses on STL Containers and C++ Data Types, providing clear explanations, examples, and IoT applications to prepare you for a Master's program and align with Japan's "Society 5.0" vision.

## 📚 Overview

This repository covers two core C++ concepts essential for IoT programming on devices like Arduino and ESP32:

- **C++ Data Types**: Understand primitive, derived, user-defined, typedef, and function types for efficient data handling in IoT systems.
- **STL Containers**: Learn sequence, associative, unordered, and adapter containers to manage IoT data (e.g., sensor readings, device states).

## 🎯 Goals

- Build a strong C++ foundation for IoT's Device Layer.
- Create IoT projects integrating C++ with Java (Spring Boot APIs) and TypeScript (React dashboards).
- Stand out in a Master's program with practical skills for Japan's IoT industry.

## 🗂️ Topics

### 1. C++ Data Types

Understanding data types is critical for IoT, where memory efficiency on microcontrollers is paramount.

#### 1.1. Types Overview

- **Primitive**: Basic, built-in types for simple data (e.g., sensor values).
- **Derived**: Built from primitives for complex data management (e.g., arrays, functions).
- **User-Defined**: Custom types for modeling IoT systems (e.g., device configurations).
- **Typedef**: Aliases for simplifying type names.
- **Function**: Callable units treated as derived types (e.g., sensor reading logic).

#### 1.2. Comparison Table

| Aspect | Primitive | Derived | User-Defined | Typedef | Function |
|--------|-----------|---------|--------------|---------|----------|
| **Definition** | Built-in types provided by C++. | Built from primitive/other types. | Programmer-defined types. | Alias for existing types. | Callable code, derived type (via pointers). |
| **Examples** | int, float, char, bool, double | Array, pointer, reference, function | struct, class, enum, union | typedef int SensorID; | int readSensor(); |
| **Declaration** | No special syntax. | Uses operators ([], *). | Uses struct, class, enum. | Uses typedef. | Return type + parameters. |
| **Memory Size** | Fixed (e.g., int: 4 bytes). | Varies (e.g., array size). | Varies by design. | Same as aliased type. | Code size varies; pointer: 4-8 bytes. |
| **Use in IoT** | Store sensor data. | Manage collections, callbacks. | Model IoT devices. | Simplify type names. | Handle IoT logic (e.g., sensor reads). |
| **Complexity** | Simple. | Moderate. | Complex, customizable. | Simplifies usage. | Moderate, executable. |

#### 1.3. Code Examples

**Example 1: Primitive Type**
Scenario: Store a temperature reading.
```cpp
#include <iostream>
using namespace std;

int main() {
    int temperature = 26; // Primitive: int for sensor data
    cout << "Temperature: " << temperature << "°C" << endl;
    return 0;
}
```

**Example 2: Derived Type (Array)**
Scenario: Store multiple sensor readings.
```cpp
#include <iostream>
using namespace std;

int main() {
    int readings[5] = {22, 24, 25, 23, 26}; // Array: Derived type
    for (int i = 0; i < 5; ++i) {
        cout << "Reading " << i + 1 << ": " << readings[i] << "°C" << endl;
    }
    return 0;
}
```

**Example 3: User-Defined Type (Struct)**
Scenario: Model an IoT device.
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

struct IoTDevice {
    int id;
    float temperature;
    bool isActive;
};

int main() {
    IoTDevice sensor = {1, 25.5, true}; // Struct: User-defined type
    cout << "Device ID: " << sensor.id << endl;
    cout << fixed << setprecision(1);
    cout << "Temperature: " << sensor.temperature << "°C" << endl;
    cout << "Active: " << (sensor.isActive ? "Yes" : "No") << endl;
    return 0;
}
```

**Example 4: Typedef**
Scenario: Simplify a struct name for IoT code.
```cpp
#include <iostream>
using namespace std;

struct Sensor {
    int id;
    float value;
};
typedef struct Sensor Sensor_t; // Typedef: Alias for struct

int main() {
    Sensor_t tempSensor = {1, 25.5}; // Use alias
    cout << "Sensor ID: " << tempSensor.id << endl;
    cout << "Value: " << tempSensor.value << "°C" << endl;
    return 0;
}
```

**Example 5: Function**
Scenario: Read sensor data.
```cpp
#include <iostream>
using namespace std;

int readTemperature() { // Function: Derived type
    return 25; // Simulated sensor reading
}

int main() {
    int temp = readTemperature();
    cout << "Temperature: " << temp << "°C" << endl;
    return 0;
}
```

### 2. STL Containers

STL Containers are essential for managing IoT data efficiently, such as sensor logs or device states.

#### 2.1. Container Types

**Sequence Containers:**
- `vector`: Dynamic array, fast random access (e.g., sensor data logs).
- `list`: Doubly-linked list, fast insertions/deletions.
- `deque`: Double-ended queue, fast at both ends.
- `array`: Fixed-size array, memory-efficient.
- `forward_list`: Singly-linked list, minimal overhead.

**Associative Containers:**
- `set`: Unique, sorted elements (e.g., sensor IDs).
- `multiset`: Allows duplicates.
- `map`: Sorted key-value pairs (e.g., sensor ID to value).
- `multimap`: Allows duplicate keys.

**Unordered Containers:**
- `unordered_set`: Unique, unsorted elements.
- `unordered_map`: Unsorted key-value pairs (e.g., fast lookups).
- `unordered_multiset`: Duplicate elements.
- `unordered_multimap`: Duplicate keys.

**Container Adapters:**
- `stack`: LIFO (e.g., task scheduling).
- `queue`: FIFO (e.g., sensor data queue).
- `priority_queue`: Priority-based (e.g., critical alerts).

#### 2.2. Example: Using vector for Sensor Data

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> sensorReadings = {22.5, 24.0, 25.3}; // Sequence container
    sensorReadings.push_back(23.8); // Add reading
    
    for (float reading : sensorReadings) {
        cout << "Reading: " << reading << "°C" << endl;
    }
    return 0;
}
```

## 🚀 IoT Applications

- **Device Layer**: Use int, struct, and vector in C++ for sensor programming on Arduino/ESP32.
- **Connectivity Layer**: Combine C++ (MQTT clients) with Java (Spring Boot APIs) for device communication.
- **Application Layer**: Integrate with TypeScript (React dashboards) to visualize IoT data.
- **Japan Context**: Align projects with smart manufacturing and healthcare, key areas in Japan's IoT market.

## 📖 Learning Resources

### YouTube Tutorials
- **GreatScott!**: C++ for embedded IoT systems.
- **Phil's Lab**: Microcontroller programming with C++.
- **The Cherno**: In-depth C++ concepts, including STL.

### Books
- **C++ Primer** by Stanley B. Lippman (~$40).
- **The C++ Standard Library** by Nicolai M. Josuttis (~$50).

### Online Courses
- **Coursera**: C++ For C Programmers (~$49/month or audit free).
- **Udemy**: C++ for IoT (~$15 during sales).

### Documentation
- **Arduino Tutorials** (free).
- **C++ STL Reference** (free).

## 🛠️ Getting Started

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/<your-username>/learn-cpp.git
   ```

2. **Set Up C++ Environment:**
   - Install GCC or use Arduino IDE.
   - Use VS Code with C++ extensions.

3. **Practice Data Types:**
   - Write code using int, arrays, struct, typedef, and functions for IoT tasks.

4. **Explore STL Containers:**
   - Use vector for sensor data and map for device configurations.

5. **Build IoT Projects:**
   - Example: Program an ESP32 (C++) to read sensors, send data to a Java API, and display on a TypeScript/React dashboard.

## 🤝 Contributing

Contributions are welcome! Add IoT examples, C++ tips, or Japan-specific use cases:

1. Fork the repository.
2. Create a branch (`git checkout -b feature/new-example`).
3. Commit changes (`git commit -m "Add IoT sensor example"`).
4. Push to the branch (`git push origin feature/new-example`).
5. Open a pull request.

## 📜 License

This project is licensed under the MIT License.

## 🌟 Acknowledgments

- Inspired by Japan's IoT industry and "Society 5.0".
- Thanks to YouTube creators like GreatScott! and Phil's Lab for educational content.
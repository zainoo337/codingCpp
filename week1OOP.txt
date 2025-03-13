#include <iostream>
#include <vector>

template <typename T>
T aveTemp(const std::vector<T>& data, T threshold) {
    T sum = 0;
    int count = 0;
    for (auto value : data) {
        if (value > threshold) {
            sum += value;
            count++;
        }
    }
    if (count == 0) return 0;
    return sum / count;
}

template <typename T>
T aveTemp(const std::vector<T>& data, T lowerBound, T upperBound) {
    T sum = 0;
    int count = 0;
    for (auto value : data) {
        if (value > lowerBound && value < upperBound) {
            sum += value;
            count++;
        }
    }
    if (count == 0) return 0;
    return sum / count;
}

int main() {
    std::vector<double> readings = {36.2, 37.1, 34.7, 39.0, 41.5, -10.5, -20.8, -49.9, 24.3};
    double highAverage = aveTemp(readings, 35.0);
    double lowAverage  = aveTemp(readings, -50.0, 0.0);
    std::cout << "Average High-Temperature Anomalies (> 35°C): " << highAverage << "\n";
    std::cout << "Average Low-Temperature Anomalies (-50°C < temp < 0°C): " << lowAverage << "\n";
    return 0;
}

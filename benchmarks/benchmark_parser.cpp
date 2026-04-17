auto start = std::chrono::high_resolution_clock::now();
runParser("sample_data.csv");
auto end = std::chrono::high_resolution_clock::now();
std::cout << "Execution time: "
          << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
          << " ms" << std::endl;

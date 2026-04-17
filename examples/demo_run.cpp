int main() {
    auto transactions = loadTransactions("data.csv");
    auto metrics = optimizeMetrics(transactions);
    benchmark(metrics);
    return 0;
}

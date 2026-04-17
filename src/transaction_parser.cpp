// Efficient transaction parsing with validation
bool parseTransaction(const std::string& record) {
    std::istringstream ss(record);
    Transaction txn;
    ss >> txn.id >> txn.amount >> txn.timestamp;
    return txn.amount >= 0 && !txn.id.empty();
}

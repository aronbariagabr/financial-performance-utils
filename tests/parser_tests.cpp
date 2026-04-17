TEST(TransactionParserTest, ValidRecord) {
    EXPECT_TRUE(parseTransaction("TXN123 250.75 2026-04-15"));
}

TEST(TransactionParserTest, InvalidAmount) {
    EXPECT_FALSE(parseTransaction("TXN124 -50.00 2026-04-15"));
}

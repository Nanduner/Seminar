#include "pch.h"

#include "Insertion.h"
#include "Bubble.h"
#include "Exchange.h"
#include "OptimizedBubble.h"
#include "Selection.h"


TEST(Insertion_Sort_Test, one_element) {
    int arr[] = { 4 };
    insertion(arr, 1);
    EXPECT_EQ(arr[0], 4);
}

TEST(Insertion_Sort_Test, sorted_element) {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    insertion(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Insertion_Sort_Test, Reversed_element) {
    int arr[] = { 7, 6, 5, 4, 3, 2, 1 };
    insertion(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Insertion_Sort_Test, Double_element) {
    double arr[] = { 6.1, -1.8, 2.0, -7.5, 0.0 };
    insertion(arr, 5);
    double expected[] = { -7.5, -1.8, 0.0, 2.0, 6.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

//òåñòû ñîðòèðîâêè âûáîðîì

TEST(Selection_Sort_Test, one_element) {
    int arr[] = { 4 };
    selection(arr, 1);
    EXPECT_EQ(arr[0], 4);
}

TEST(Selection_Sort_Test, sorted_element) {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    selection(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Selection_Sort_Test, Reversed_element) {
    int arr[] = { 7, 6, 5, 4, 3, 2, 1 };
    selection(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Selection_Sort_Test, Double_element) {
    double arr[] = { 6.1, -1.8, 2.0, -7.5, 0.0 };
    selection(arr, 5);
    double expected[] = { -7.5, -1.8, 0.0, 2.0, 6.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

//òåñòû ñîðòèðîâêè îáìåíîì

TEST(Exchange_Sort_Test, one_element) {
    int arr[] = { 4 };
    exchange(arr, 1);
    EXPECT_EQ(arr[0], 4);
}

TEST(Exchange_Sort_Test, sorted_element) {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    exchange(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Exchange_Sort_Test, Reversed_element) {
    int arr[] = { 7, 6, 5, 4, 3, 2, 1 };
    exchange(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Exchange_Sort_Test, Double_element) {
    double arr[] = { 6.1, -1.8, 2.0, -7.5, 0.0 };
    exchange(arr, 5);
    double expected[] = { -7.5, -1.8, 0.0, 2.0, 6.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


//òåñòû ñîðòèðîâêè ïóçûðüêîì

TEST(bubble_Sort_Test, one_element) {
    int arr[] = { 4 };
    bubble(arr, 1);
    EXPECT_EQ(arr[0], 4);
}

TEST(bubble_Sort_Test, sorted_element) {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    bubble(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(bubble_Sort_Test, Reversed_element) {
    int arr[] = { 7, 6, 5, 4, 3, 2, 1 };
    bubble(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(bubble_Sort_Test, Double_element) {
    double arr[] = { 6.1, -1.8, 2.0, -7.5, 0.0 };
    bubble(arr, 5);
    double expected[] = { -7.5, -1.8, 0.0, 2.0, 6.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

//òåñòû ñîðòèðîâêè ïóçûðüêîì ñ óëó÷øåíèÿìè

TEST(Optimized_Bubble_Sort_Test, one_element) {
    int arr[] = { 4 };
    opt_bubble(arr, 1);
    EXPECT_EQ(arr[0], 4);
}

TEST(Optimized_Bubble_Sort_Test, sorted_element) {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    opt_bubble(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Optimized_Bubble_Sort_Test, Reversed_element) {
    int arr[] = { 7, 6, 5, 4, 3, 2, 1 };
    opt_bubble(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Optimized_Bubble_Sort_Test, Double_element) {
    double arr[] = { 6.1, -1.8, 2.0, -7.5, 0.0 };
    opt_bubble(arr, 5);
    double expected[] = { -7.5, -1.8, 0.0, 2.0, 6.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
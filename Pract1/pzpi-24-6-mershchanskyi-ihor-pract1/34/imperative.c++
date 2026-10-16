#include <iostream>
#include <vector>

constexpr int BONUS_LIMIT = 50;

int calculateTotalScore(const std::vector<int>& scores) {
    int totalScore = 0;

    for (int score : scores) {
        if (score > BONUS_LIMIT) {
            totalScore += score * 2;
        } else {
            totalScore += score;
        }
    }
    return totalScore;
}

int main() {
    const std::vector<int> userScores = {30, 60, 45, 80};
    
    std::cout << "Total score: " << calculateTotalScore(userScores) << "\n";
    return 0;
}
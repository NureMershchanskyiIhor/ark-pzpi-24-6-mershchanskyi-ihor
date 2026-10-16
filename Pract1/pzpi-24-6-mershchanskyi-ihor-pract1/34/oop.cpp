#include <iostream>
#include <vector>

class ScoreCalculator {
public:
    ScoreCalculator(int bonusLimit) : bonusLimit_(bonusLimit) {}

    int CalculateTotal(const std::vector<int>& scores) const {
        int totalScore = 0;

        for (int score : scores) {
            if (score > bonusLimit_) {
                totalScore += score * 2;
            } else {
                totalScore += score;
            }
        }
        return totalScore;
    }

private:
    int bonusLimit_;
};

int main() {
    const std::vector<int> userScores = {30, 60, 45, 80};
    
    const ScoreCalculator calc(50);

    std::cout << "Total score: " << calc.CalculateTotal(userScores) << "\n";
    return 0;
}
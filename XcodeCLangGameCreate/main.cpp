//
//  main.cpp
//  XcodeCLangGameCreate
//
//  Created by DeveloperUchida on 2024/07/14.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    //乱数のシードを設定
    std::srand(static_cast<unsigned int>(std:: time(nullptr)));
    
    //1から100までのランダムな数字を生成
    int targetNumber = std::rand() % 100 +1;
    int guess;
    int attempts = 0;
    
    
    std::cout << "数当てゲームへようこそ!" << std::endl;
    std::cout << "1から100までの数を当ててください" << std::endl;
    
    //ユーザーが正しい数当てるまで、繰り返す
    
    do{
        std::cout << "予想を入力してください :";
        std::cin >> guess;
        attempts++;
        if (guess > targetNumber) {
            std::cout << "それは大きすぎます。もう一度試してください。" << std::endl;
        } else if (guess < targetNumber) {
            std::cout << "それは小さすぎます。もう一度試してください。" << std::endl;
        } else {
            std::cout << "おめでとうございます！正解です！" << std::endl;
            std::cout << "あなたは " << attempts << " 回で当てました。" << std::endl;
        }
    } while (guess != targetNumber);
    
    return 0;
}

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
    
}

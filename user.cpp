#include <unordered_map>
#include <string>

// 전역 해시맵 선언
std::unordered_map<std::string, int> data_map;

// init 함수 정의
void init() {
    data_map.clear();
}

// add 함수 정의
void add(char key[], int data) {
    std::string str_key(key);
    data_map[str_key] = data;
}

// find 함수 정의
int find(char key[]) {
    std::string str_key(key);
    return data_map[str_key];
}

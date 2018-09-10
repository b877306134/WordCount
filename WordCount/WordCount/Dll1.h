#pragma once
__declspec(dllexport) pair<int, unordered_map<string, int>> countWord(string filename);
__declspec(dllexport) int number_of_word(string filename);
__declspec(dllexport) int cmp(const pair<string, int>& a, const pair<string, int>& b);
__declspec(dllexport) void wordSort(unordered_map<string, int>& words);
__declspec(dllexport) void top_10_words(string filename);
__declspec(dllexport) pair<int, int> countLine(string filename);
__declspec(dllexport) int line(string filename);
__declspec(dllexport) int character(string filename);
#pragma once
#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct RelativeIndex
{
    size_t doc_id;
    float rank;
    bool operator==(const RelativeIndex &other) const;
};
class ConverterJSON
{
private:
    int LimitResponses;
    vector<string> Documents;
    vector<string> Requests;

public:
    ConverterJSON() = default;
    void checkFileExists(const string &filename, const string &field_name);
    vector<string> GetTextDocuments(const string &file);
    int GetResponsesLimit(const string &file, const auto &field_name);
    vector<string> GetRequests(const string &file_request);
    void putAnswers(vector<vector<RelativeIndex>> Answers);
};
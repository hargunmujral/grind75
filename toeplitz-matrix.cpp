class Solution
{
public:
    bool diagonalSearch(vector<vector<int>> &matrix, pair<int, int> pos, int val)
    {
        while (pos.first < matrix.size() && pos.second < matrix[0].size())
            if (matrix[pos.first++][pos.second++] != val)
                return false;
        return true;
    }
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        for (int i = 0; i < matrix.size(); i++)
            if (!diagonalSearch(matrix, {i, 0}, matrix[i][0]))
                return false;
        for (int i = 0; i < matrix[0].size(); i++)
            if (!diagonalSearch(matrix, {0, i}, matrix[0][i]))
                return false;
        return true;
    }
};
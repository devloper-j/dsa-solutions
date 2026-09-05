            right--;

            // move right to left, row = 
            down fixed
            for (int c = right; c >= left && 
            currElement <= n * n; c--)
                matrix[down][c] = currElement
                ++;
            down--;

            // move down to top, col = left 
            fixed
            for (int r = down; r >= top && 
            currElement <= n * n; r--)
                matrix[r][left] = currElement
                ++;
            left++;
        }

        return matrix;
    }
};

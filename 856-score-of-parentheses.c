int findScore(char *s, int *i) {
    int score = 0;
    
    while (s[*i]) {
        if (s[*i] == '(') {
            (*i)++;
            int inner = findScore(s, i);
            score += inner > 0 ? 2 * inner : 1;
        } else {
            (*i)++;
            return score;
        }
    }
    
    return score;
}

int scoreOfParentheses(char* s) {
    int i = 0;
    return findScore(s, &i);
}

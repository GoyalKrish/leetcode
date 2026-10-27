class Solution {
    public String[] createGrid(int m, int n) {
        String[] ans = new String[m];

        String first = ".".repeat(n);
        String second = "#".repeat(n - 1);

        second += '.';

        System.out.println(first);
        System.out.println(second);
        
        ans[0] = first;
        for(int i = 1 ; i < m ; ++i) ans[i] = second; 
        
        return ans;
    }
}
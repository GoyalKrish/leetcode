class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> month = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int aam = (int)(arriveAlice[0] - '0') * 10 + (int)(arriveAlice[1] - '0'); // alice arrive month
        int aad = (int)(arriveAlice[3] - '0') * 10 + (int)(arriveAlice[4] - '0'); // alice arrive day        

        int alm = (int)(leaveAlice[0] - '0') * 10 + (int)(leaveAlice[1] - '0'); // alice leave month
        int ald = (int)(leaveAlice[3] - '0') * 10 + (int)(leaveAlice[4] - '0'); // alice leave day

        int bam = (int)(arriveBob[0] - '0') * 10 + (int)(arriveBob[1] - '0'); // bob arrive month
        int bad = (int)(arriveBob[3] - '0') * 10 + (int)(arriveBob[4] - '0'); // bob arrive day    

        int blm = (int)(leaveBob[0] - '0') * 10 + (int)(leaveBob[1] - '0'); // bob leave month
        int bld = (int)(leaveBob[3] - '0') * 10 + (int)(leaveBob[4] - '0'); // bob leave day


        cout << "Alice : " << aam << "-" << aad << " TO " << alm << "-" << ald << endl;
        cout << "Bob : " << bam << "-" << bad << " TO " << blm << "-" << bld << endl;

        
        int ans = 0;


        for(int m = 1 ; m <= 12 ; ++m){
            if(m <= alm && m <= blm && aam <= m && bam <= m){
                //both alice and bob stayed this month
                for(int d = 1 ; d <= month[m] ; ++d){
                    int tald = ald;
                    int tbld = bld;
                    int taad = aad;
                    int tbad = bad;
                    if(alm != m) tald = month[m];
                    if(blm != m) tbld = month[m];
                    if(aam != m) taad = 1;
                    if(bam != m) tbad = 1;

                    if(d <= tald && d <= tbld && taad <= d && tbad <= d) ++ans;
                }
            }
        }

        return ans;
    }
};
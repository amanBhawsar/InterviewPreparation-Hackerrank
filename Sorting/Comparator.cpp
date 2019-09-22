class Checker{
public:
    static int comparator(Player a, Player b)  {
        if(a.score > b.score){
            return 1;
        }
        else if(a.score < b.score){
            return -1;
        }
        else{
            if(a.name.compare(b.name)<0){
                return 1;
            }
            else{
                return -1;
            }
        }
    }
};

/*
first: decide turn the page from first page or last page
second: count the time of flip to the target page
last: return the count
*/

/*
odd pages : Ex. 5 pages, half of pages = 3 -> (4,0) (3,1) (2,1) (1,0)
even pages : Ex. 6 pages, half of pages = 3 -> (5,1) (4,1) (3,1) (2,1) (1,0)

4,5 same answer half = 2
6,7 same answer half = 3
*/

int pageCount(int n, int p) {
    int result = 0;
    int pageFrom = 0;
    if(n%2 == 0){
        n+=1;
    }
    if(n/2 >= p){
        //from first page
        while(pageFrom+1<p){
            result ++;
            pageFrom+=2;
        }
    }
    else{
        //from last page
        pageFrom = n;
        while(p+1<pageFrom){
            result++;
            p+=2;
        }
    }
    return result;
}

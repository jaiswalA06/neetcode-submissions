/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start=1;

        while(true){
            int num= (start+n)/2, result;
            result=guess(num);

            if (result==0)
                return num;

            if (result=-1)
                n=num-1;;

            if (result=1)
                start=num+1; 
        }
    
    }
};
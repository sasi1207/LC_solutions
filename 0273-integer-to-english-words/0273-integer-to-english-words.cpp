class Solution {
public:
    string units(int num){
        if(num==1){
            return " One";
        }
        if(num==2){
            return " Two";
        }
        if(num==3){
            return " Three";
        }
        if(num==4){
            return " Four";
        }
        if(num==5){
            return " Five";
        }
        if(num==6){
            return " Six";
        }
        if(num==7){
            return " Seven";
        }
        if(num==8){
            return " Eight";
        }
        if(num==9){
            return " Nine";
        }
        return "";
    }
    string tens(int num){
        int ones=num%10;
        int tens=num/10;
        if(tens==0){
            return units(ones);
        }
        if(tens==1){
            if(ones==0){
                return " Ten";
            }
            if(ones==1){
                return " Eleven";
            }
            if(ones==2){
                return " Twelve";
            }
            if(ones==3){
                return " Thirteen";
            }
            if(ones==4){
                return " Fourteen";
            }
            if(ones==5){
                return " Fifteen";
            }
            if(ones==6){
                return " Sixteen";
            }
            if(ones==7){
                return " Seventeen";
            }
            if(ones==8){
                return " Eighteen";
            }
            if(ones==9){
                return " Nineteen";
            }
        }
        if(tens==2){
            return " Twenty"+units(ones);
        }
        if(tens==3){
            return " Thirty"+units(ones);
        }
        if(tens==4){
            return " Forty"+units(ones);
        }
        if(tens==5){
            return " Fifty"+units(ones);
        }
        if(tens==6){
            return " Sixty"+units(ones);
        }
        if(tens==7){
            return " Seventy"+units(ones);
        }
        if(tens==8){
            return " Eighty"+units(ones);
        }
        if(tens==9){
            return " Ninety"+units(ones);
        }
        return "";
    }
    string hundreds(int num){
        int hun=num/100;
        num=num%100;
        int ten=num;
        if(hun==0){
            return tens(ten);
        }
        if(hun==1){
            return " One Hundred"+tens(ten);
        }
        if(hun==2){
            return " Two Hundred"+tens(ten);
        }
        if(hun==3){
            return " Three Hundred"+tens(ten);
        }
        if(hun==4){
            return " Four Hundred"+tens(ten);
        }
        if(hun==5){
            return " Five Hundred"+tens(ten);
        }
        if(hun==6){
            return " Six Hundred"+tens(ten);
        }
        if(hun==7){
            return " Seven Hundred"+tens(ten);
        }
        if(hun==7){
            return " Seven Hundred"+tens(ten);
        }
        if(hun==8){
            return " Eight Hundred"+tens(ten);
        }
        if(hun==9){
            return " Nine Hundred"+tens(ten);
        }
        return "";
    }
    string thousands(int num){
        int tho=num/1000;
        num=num%1000;
        if(tho==0){
            return hundreds(num);
        }
        return hundreds(tho)+" Thousand"+hundreds(num);
    }
    string millions(int num){
        int mil=num/1000000;
        num=num%1000000;
        if(mil==0){
            return thousands(num);
        }
        return thousands(mil)+" Million"+thousands(num);
    }
    string numberToWords(int num) {
        if(num==0){
            return "Zero";
        }
        int bil=num/1000000000;
        num=num%1000000000;
        if(bil==0){
            string res=millions(num);
            res.erase(res.begin());
            return res;
        }
        string res=millions(bil)+" Billion"+millions(num);
        res.erase(res.begin());
        return res;
    }
};
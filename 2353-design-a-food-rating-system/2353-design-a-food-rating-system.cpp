class FoodRatings {
public:

    map<string, int>foodRating;
    map<string, string>foodCuisine;
    map<string, set<pair<int, string>>>cuisineRatingFood;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n=foods.size();
        for(int i=0; i<n; i++){
            foodRating[foods[i]]=ratings[i];
            foodCuisine[foods[i]]=cuisines[i];
            cuisineRatingFood[cuisines[i]].insert({(-1)*ratings[i], foods[i]});
        }
        
    }
    
    void changeRating(string food, int newRating) {
        string cuisine=foodCuisine[food];
        int oldRating=foodRating[food];
        foodRating[food]=newRating;
        cuisineRatingFood[cuisine].erase({(-1)*oldRating, food});
        cuisineRatingFood[cuisine].insert({(-1)*newRating, food});
    }
    
    string highestRated(string cuisine) {
        return cuisineRatingFood[cuisine].begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */
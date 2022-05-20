#include "Recipe.h"
#include<string.h>
#include<iostream>

#define SIZE1 2
#define SIZE2 2

Recipe::Recipe(){   // default constructor
	recipe_id = 0;
	strcpy(recipe_name,"");
	strcpy(recipe_discription,"");
	recipe_calories = 0;
	
	
}

Recipe :: Recipe(int rcip_id,char rcip_name[50],char rcip_discription[],int rcip_calories){  // overloaded constructor
	recipe_id = rcip_id;
	strcpy(recipe_name,rcip_name);
	strcpy(recipe_discription,rcip_discription);
	recipe_calories = rcip_calories;
	
}

void Recipe::Addrecipe(int rcip_id,char rcip_name[50],char rcip_discription[],int rcip_calories){
	
	
}

void Recipe::Addrates(Ratings * rates1,Ratings * rates2){
	
	rates[1]= rates1;
	rates[2]= rates2;
	
}

void Recipe::RecipeManageModerator(Moderator*moderator1,Moderator*moderator2){
    moderator[1] = moderator1;
    moderator[2] = moderator1;

};

void Recipe::DisplayRecipeDetails(){
	cout << "Recipe id is :" << recipe_id  << endl ;
	cout << "Recipe name is :" << recipe_name << endl ;
	cout << "Recipe discription is :" << recipe_discription << endl;
	cout << "Recipe calories are :" << recipe_calories << endl;
	
	
}

~Recipe(){
	
	for(int i=0;i<SIZE1;i++){
		delete moderator[i];
				
	}
	
	for(int i=0;i<SIZE1;i++){
		
		delete rates[i];
				
	}
}

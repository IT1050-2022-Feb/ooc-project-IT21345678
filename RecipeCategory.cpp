#include "RecipeCategory.h"
#include<string.h>
#difine Size 5

RecipeCategory::RecipeCategory(){
	strcpy(recipe_category,"");
	strcpy(recipe_category_discription,"");
			
}

RecipeCategory::RecipeCategory(char rcpy_category[50], char rcpy_category_discription[]){
	strcpy(recipe_category,rcpy_category);
	strcpy(recipe_category_discription,rcpy_category_discription);
	
}

void RecipeCategory::AddItemRecipe(int rcipe_id,char rcipe_name[50],char rcipe_discription[],int rcipe_calories){
	
	if(count<Size){
		recipes[count] = new Recipe(rcipe_id,rcipe_name,rcipe_discription,rcipe_calories);
		count ++;
	}
	
	else {
		
		cout << "The recipe count is over";
	}
	
	
} 

void RecipeCategory::DisplayRecipeCategoryDetails(){
	
	for(int i=0;i<Size;i++){
		
	cout <<	recipes[i]->DisplayRecipeDetails()  << endl ;
		
	}
	
}

void RecipeCategory::DeleteRecipeCategory(){
	
	
}


 ~RecipeCategory(){
 	
 	for(int i=0;i<Size;i++){
 		
 		delete recipes[i];
 		
	 }

 	
 }

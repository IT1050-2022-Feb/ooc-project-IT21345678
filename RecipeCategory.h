#include "Recipe.h"
#difine Size 5

class RecipeCategory
{
	private:
		char recipe_category[50];
		char recipe_category_discription[100];
		int count =0;
		Recipe*recipes[Size];
		
	public:
		
		RecipeCategory();
		RecipeCategory(char rcpy_category[50], char rcpy_category_discription[]);
		void AddItemRecipe(int rcipe_id,char rcipe_name[50],char rcipe_discription[],int rcipe_calories);
		void DisplayRecipeCategoryDetails();
		void DeleteRecipeCategory(); 	
	   ~RecipeCategory();
};



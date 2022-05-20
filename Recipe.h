#include "Moderator.h"
#include "Rating.h"
#define SIZE1 2
#define SIZE2 2

class Recipe
{
	private:
		int recipe_id ;
		char recipe_name[50];
		char recipe_discription[500];
		int recipe_calories;
		
		Moderator*moderator[2];
		Ratings * rates[2];
	public:
	 	Recipe();
	 	Recipe(int rcip_id,char rcip_name[50], char rcip_discription[500],int rcip_calories);
		void Addrecipe(int rcip_id,char rcip_name[50], char rcip_discription[500],int rcip_calories);
		void DisplayRecipeDetails();
		void Addrates(Ratings * rates1,Ratings * rates2);
		void RecipeManageModerator(Moderator*moderator1,Moderator*moderator2);
		~Recipe();
	
};


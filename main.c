#include "libft_printf.h"
#include <stdio.h>

int main()
{
	char *shinee_members[] = {"Onew", "Key", "Minho", "Jonghyun", "Taemin"};
	char *shinee_positions[] = {"vocalist", "dancer", "rapper", "Maknae", "leader", "stylist", "TV host", "actor", "football player"};
	int ages[] = {35, 33, 31};
	char *favorite_color = "blue";
	char *pet_names[] = {"comme de", "garcons", "Kkoong", "Jjakkoong", "Ddaeng (or Ddaengddaengie)"};
	char note = 'o';
	unsigned int album_sales = 5000000;
	void *album_ptr = &album_sales;
	char *null = NULL;


	printf("ft_printf: %d, printf: %d\n", ft_printf(("%s, known as the best %s in kpop, loves to express his art. He is the %s: %d years old 💃\n"), shinee_members[4], shinee_positions[1], shinee_positions[3], ages[2]), printf(("%s, known as the best %s in kpop, loves to express his art. He is the %s: %d years old 💃\n"), shinee_members[4], shinee_positions[1], shinee_positions[3], ages[2]));

	printf("ft_printf: %d, printf: %d\n", ft_printf(("%s's favorite color is %s! Aside from being an idol, he is also a %s and a %s! He is %d years old, can you believe it? 🌈\n"), shinee_members[1], favorite_color, shinee_positions[5], shinee_positions[6], ages[1]), printf(("%s's favorite color is %s! Aside from being an idol, he is also a %s and a %s! He is %d years old, can you believe it? 🌈\n"), shinee_members[1], favorite_color, shinee_positions[5], shinee_positions[6], ages[1]));

	printf("ft_printf: %d, printf: %d\n", ft_printf(("%s is the charismatic member, they say he could even sell ice to an ice bear, 100%% ❄️\n"), shinee_members[2]), printf(("%s is the charismatic member, they say he could even sell ice to an ice bear, 100%% ❄️\n"), shinee_members[2]));
	
	printf("ft_printf:%d, printf: %d\n", ft_printf(("Before he got recruted by %s, %s wanted to be a %s. Instead, he became a %s and an %s!\n"), "SM Entertainment", shinee_members[2], shinee_positions[8], shinee_positions[2], shinee_positions[7]), printf(("Before he got recruted by %s, %s wanted to be a %s. Instead, he became a %s and an %s!\n"), "SM Entertainment", shinee_members[2], shinee_positions[8], shinee_positions[2], shinee_positions[7]));
    
	printf("ft_printf: %d, printf: %d \n", ft_printf(("%s is the main %s. His voice will always be remembered. His impact on SHINee is eternal. 🌟\n"), shinee_members[3], shinee_positions[0]), printf(("%s is the main %s. His voice will always be remembered. His impact on SHINee is eternal. 🌟\n"), shinee_members[3], shinee_positions[0]));
	
	printf("ft_printf: %d, printf: %d\n", ft_printf(("%s's new song sounds like this: %c %c %c %c %c %c %c, Mansae! He's a well respected %s of the industry and our Groups %s - He's %d years old\n"), shinee_members[0], note, ft_toupper(note), note, ft_toupper(note), note, note, ft_toupper(note), shinee_positions[0], shinee_positions[4], ages[0]), printf(("%s's new song sounds like this: %c %c %c %c %c %c %c, Mansae! He's a well respected %s of the industry and our Groups %s - He's %d years old\n"), shinee_members[0], note, ft_toupper(note), note, ft_toupper(note), note, note, ft_toupper(note), shinee_positions[0], shinee_positions[4], ages[0]));

	printf("ft_printf: %d, printf: %d\n", ft_printf(("SHINee's 'Don't Call Me' album sales: %p (just a cool pointer to the sales data!)\n"), album_ptr), printf(("SHINee's 'Don't Call Me' album sales: %p (just a cool pointer to the sales data!)\n"), album_ptr));
    
	printf("ft_printf: %d, printf:%d\n", ft_printf("In %x, SHINee had their %X years anniversary (Just a little sparkling hex value) ✨\n", 2024, 15), printf("In %x, SHINee had their %X years anniversary (Just a little sparkling hex value) ✨\n", 2024, 15));

	printf("ft_printf: %d, printf: %d\n", ft_printf(("%s has 2 cats: %s - short for %s and %s. %s has 2 dogs: %s and %s (yes, like the brand) 💫\n"), shinee_members[4], pet_names[2], pet_names[3], pet_names[4], shinee_members[1], pet_names[0], pet_names[1]), printf(("%s has 2 cats: %s - short for %s and %s. %s has 2 dogs: %s and %s (yes, like the brand) 💫\n"), shinee_members[4], pet_names[2], pet_names[3], pet_names[4], shinee_members[1], pet_names[0], pet_names[1]));

	printf("ft_printf : %d, printf: %d\n", ft_printf(("%s\n"), null), printf(("%s\n"), null));
	printf("ft_printf : %d, printf: %d\n", ft_printf(""), printf(""));
	printf("ft_printf : %d, printf: %d\n", ft_printf("Will this be -1?\n%"), printf("Will this be -1?\n%"));
	return 0;
}


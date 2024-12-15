#include "libft_printf.h"
#include <stdio.h>

int main() {
    // SHINee members (Just for fun!)
    char *shinee_members[] = {"Onew", "Key", "Minho", "Jonghyun", "Taemin"};
    char *shinee_positions[] = {"vocalist", "dancer", "rapper", "Maknae", "leader", "stylist", "TV host"};
    // Fun SHINee-themed test variables
    int age = 32;  // Taemin's age in 2024
    char *favorite_color = "blue";  // Key's favorite color (Key is known for his colorful style)
    char note = 'o';
    unsigned int album_sales = 5000000;  // Hypothetical number for SHINee's album sales
    void *album_ptr = &album_sales; // Let's pretend it's a pointer to their album's sales data

    // Start printing with SHINee style!
    printf("ft_printf: %d, printf: %d\n", ft_printf(("%s, known as the best %s in kpop, loves to express his art. He is the %s: %d years old 💃\n"), shinee_members[4], shinee_positions[1], shinee_positions[3], age), printf(("%s, known as the best %s in kpop, loves to express his art. He is the %s: %d years old 💃\n"), shinee_members[4], shinee_positions[1], shinee_positions[3], age));
    printf("ft_printf: %d, printf: %d\n", ft_printf(("%s's favorite color is %s! Always rocking those stylish outfits! Aside from being an idol, he is also a %s and a %s! Can you believe it? 🌈\n"), shinee_members[1], favorite_color, shinee_positions[5], shinee_positions[6]), printf(("%s's favorite color is %s! Always rocking those stylish outfits! Aside from being an idol, he is also a %s and a %s! Can you believe it? 🌈\n"), shinee_members[1], favorite_color, shinee_positions[5], shinee_positions[6]));
    printf("ft_printf: %d, printf: %d\n", ft_printf(("%s is the charismatic member, they say he could even sell ice to an ice bear, 100%% ❄️\n"), shinee_members[2]), printf(("%s is the charismatic member, they say he could even sell ice to an ice bear, 100%% ❄️\n"), shinee_members[2]));
    printf("ft_printf: %d, printf: %d \n", ft_printf(("%s is the main %s. His voice will always be remembered. His impact on SHINee is eternal. 🌟\n"), shinee_members[3], shinee_positions[0]), printf(("%s is the main %s. His voice will always be remembered. His impact on SHINee is eternal. 🌟\n"), shinee_members[3], shinee_positions[0]));
    printf("ft_printf: %d, printf: %d\n", ft_printf(("%s's new song sounds like this: %c %c %c %c %c %c %c, Mansae! It's not even released yet, but im already loving it!\n"), shinee_members[0], note, ft_toupper(note), note, ft_toupper(note), note, note, ft_toupper(note)), printf(("%s's new song sounds like this: %c %c %c %c %c %c %c, Mansae! It's not even released yet, but im already loving it!\n"), shinee_members[0], note, ft_toupper(note), note, ft_toupper(note), note, note, ft_toupper(note)));
    
    // Fun pointer print for SHINee's album sales
    printf("ft_printf: %d, printf: %d\n", ft_printf(("SHINee's 'Don't Call Me' album sales: %p (just a cool pointer to the sales data!)\n"), album_ptr), printf(("SHINee's 'Don't Call Me' album sales: %p (just a cool pointer to the sales data!)\n"), album_ptr));
    
    // Hexadecimal for 'SHINee' as a little nod to their 'SHINee World' era
    printf("ft_printf: %d, printf:%d\n", ft_printf("SHINee's light shines in the hexadecimal world: %x (Just a little sparkling hex value) ✨\n", 2024), printf("SHINee's light shines in the hexadecimal world: %x (Just a little sparkling hex value) ✨\n", 2024));;
    // More playfulness with formatting
    printf("ft_printf: %d, printf: %d\n", ft_printf(("SHINee is more than just music – they bring the sparkle to the world! %s 💫\n"), "SHINee World"), printf(("SHINee is more than just music – they bring the sparkle to the world! %s 💫\n"), "SHINee World"));

    printf("ft_printf : %d, printf: %d\n", ft_printf(("SHINee Test Print: %s is the %s of SHINee! 🎤\n"), shinee_members[0], shinee_positions[4]), printf(("SHINee Test Print: %s is the %s of SHINee! 🎤\n"), shinee_members[0], shinee_positions[4]));
    return 0;
}


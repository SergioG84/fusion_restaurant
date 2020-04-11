#include <stdio.h>
#include <stdlib.h>
int main ()
{ /* main */
   /*
    ***************************
    *** Declaration Section ***
    ***************************
    *
    *****************************
    * Named Constants Subsection *
    *****************************
    *
    */
    const int no_item_code               = 0;
    const int beef_pho                   = 1;
    const int red_curry_chicken          = 2;
    const int Kung_Pao_tofu              = 3;
    const int pot_stickers_code          = 3;
    const int beef_satay_code            = 2;
    const int spring_roll_code           = 1;
    const int noodles_code               = 3;
    const int fried_rice_code            = 2;
    const int steamed_rice_code          = 1;
    const int coffee_code                = 1;
    const int soda_code                  = 2;
    const int tea_code                   = 3;
    const float spring_roll              = 3.75;
    const float beef_satay               = 4.25;
    const float pot_stickers             = 3.50;
    const float beef_pho_lunch           = 8.50;
    const float beef_pho_dinner          = 10.25;
    const float red_curry_chicken_lunch  = 7.75;
    const float red_curry_chicken_dinner = 9.50;
    const float Kung_Pao_tofu_lunch	     = 6.25;
    const float Kung_Pao_tofu_dinner	   = 8.0;
    const float steamed_rice             = 0.0;
    const float fried_rice               = 0.0;
    const float noodles                  = 0.0;
    const float Coffee                   = 2.50;
    const float Soda                     = 2.25;
    const float Tea                      = 1.75;
    const float program_failure_code	   = -1;
    const float no_item_price            = 0.0;
    const float sales_tax                = 0.085;
    const float tip                      = 0.18;
    int entree_item_code                 = 0;
    int appetizer_item_code              = 0;
    int lunch_portion_code               = 1;
    int dinner_portion_code              = 2;
    /*
    *****************************
    * Local Variable Subsection *
    *****************************
    * appetizer:what appetizer they want if they want one
    * entree:what entree they want if they want one
    * starch:what starch they want if they want one
    * portion:what portion size they want for thier entree
    */
    int appetizer;
    int entree;
    int starch;
    int portion;
    int entree_size_code;
    int starch_item_code;
    int drink;
    int starch_price;
    int dinner_price;
    int drink_item_code;
    float entree_price;
    float appetizer_price;
    float drink_price;
    float subtotal;
    float total_tax;
    float grand_total;
    float total_tip;
    /*
    *************************
    *** Execution Section ***
    *************************
    *
    ***********************
    * Greeting Subsection *
    ***********************
    *
    * greet the user to your restaurant
    */
    printf("Welcome to Seth's Fusion Restaurant!\n");
    /*
    ********************
    * Input Subsection *
    ********************
    * Ask what appetizer they want, then show them the options
    */
    printf("What appetizer would you like?\n");
    printf("Please enter:\n");
    printf("%d for no appetizer\n", no_item_code);
    printf("%d for spring roll\n",spring_roll_code);
    printf("%d for beef satay\n",beef_satay_code);
    printf("%d for pot stickers\n",pot_stickers_code);
    scanf("%d", &appetizer_item_code);
    /*
    * put in the idiotproof code
    */
if ((appetizer_item_code != no_item_code) &&
(appetizer_item_code != spring_roll_code) &&
(appetizer_item_code != beef_satay_code) &&
(appetizer_item_code != pot_stickers_code)) {
printf("ERROR: unknown appetizer item code %d.\n",
appetizer_item_code);
exit(program_failure_code);
} /* if ((appetizer_item_code != no_item_code) && ...) */

    /*
    * Ask them what entree they want
    */
    printf("What entree item would you like?\n");
    printf("Please enter:\n");
    printf("0 for no entree\n", no_item_code);
    printf("1 for beef pho\n",beef_pho);
    printf("2 for red curry chicken\n",red_curry_chicken);
    printf("3 for kung pao tofu\n", Kung_Pao_tofu);
    scanf("%d", &entree_item_code);
    /*
    * put in the idiotproof code
    */

if ((entree_item_code != no_item_code) &&
(entree_item_code != beef_pho) &&
(entree_item_code != red_curry_chicken) &&
(entree_item_code != Kung_Pao_tofu)) {
printf("ERROR: unknown entree item code %d.\n",
entree_item_code);
exit(program_failure_code);
} /* if ((entree_item_code != no_item_code) && ...) */

    /*
    * Ask them what entree size they want
    */
    printf("What entree size would you like?\n");
    printf("Please enter:\n");
    printf("1 for lunch portion\n");
    printf("2 for dinner portion\n");
    scanf("%d", &portion);
if ((portion != no_item_code) &&
(portion != lunch_portion_code) &&
(portion != dinner_portion_code)) {
printf("ERROR: unknown entree portion code %d.\n",
portion);
exit(program_failure_code);
} /* if (portion != no_item_code) */

    /*
    * Ask them what starch item they want
    */
if (entree_item_code != no_item_code) {
printf("What starch would you like? Enter:\n");
printf("%d for no starch\n", no_item_code);
printf("%d for steamed rice\n", steamed_rice_code);
printf("%d for fried rice\n", fried_rice_code);
printf("%d for noodles\n", noodles_code);
scanf("%d", &starch_item_code);
    /*
    * put in the idiotproof code
    */
if ((starch_item_code != no_item_code) &&
(starch_item_code != steamed_rice_code) &&
(starch_item_code != fried_rice_code) &&
(starch_item_code != noodles_code)) {
printf("ERROR: unknown starch item code %d.\n",
starch_item_code);
exit(program_failure_code);
} /* if ((starch_item_code != no_item_code) && ...) */
} /* if (entree_item_code != no_item_code) */

    /*
    * Ask them what drink item they want
    */
    printf("What drink would you like?\n");
    printf("Please enter:\n");
    printf("0 for no drink\n");
    printf("1 for coffee\n");
    printf("2 for soda\n");
    printf("3 for tea\n");
    scanf("%d", &drink_item_code);
if ((drink_item_code != no_item_code) &&
(drink_item_code != coffee_code) &&
(drink_item_code != soda_code) &&
(drink_item_code != tea_code)) {
printf("ERROR: unknown appetizer item code %d.\n",
drink_item_code);
exit(program_failure_code);
} /* if ((drink_item_code != no_item_code) && ...) */


    /*
    **************************
    * Calculation Subsection *
    **************************
    */
if (entree_item_code == no_item_code) {
entree_price = no_item_price;
} /* if (entree_item_code == no_item_code) */
else if (entree_item_code == beef_pho) {
if (portion == lunch_portion_code) {
entree_price = beef_pho_lunch;
} /* if (entree_size_code == lunch_portion_code) */
else if (portion == dinner_portion_code) {
entree_price = beef_pho_dinner;
} /* if (entree_size_code == dinner_portion_code) */
} /* if (entree_item_code == beef_pho) */
else if (entree_item_code == red_curry_chicken) {
if (portion == lunch_portion_code) {
entree_price = red_curry_chicken_lunch;
} /* if (entree_size_code == lunch_portion_code) */
else if (portion == dinner_portion_code) {
entree_price = red_curry_chicken_dinner;
} /* if (entree_size_code == dinner_portion_code) */
} /* if (entree_item_code == red_curry_chicken) */
else if (entree_item_code == Kung_Pao_tofu) {
if (portion == lunch_portion_code) {
entree_price = Kung_Pao_tofu_lunch;
} /* if (entree_size_code == lunch_portion_code) */
else if (portion == dinner_portion_code) {
entree_price = Kung_Pao_tofu_dinner;
} /* if (entree_size_code == dinner_portion_code) */
} /* if (entree_item_code == Kung_Pao_tofu) */
if (appetizer_item_code == no_item_code) {
appetizer_price = no_item_price;
} /* if (appetizer_item_code == no_item_code) */
else if (appetizer_item_code == spring_roll_code) {
appetizer_price = spring_roll;
} /* if (appetizer_item_code == spring_roll_code) */
else if (appetizer_item_code == beef_satay_code) {
appetizer_price = beef_satay;
} /* if (appetizer_item_code == beef_satay_code) */
else if (appetizer_item_code == pot_stickers_code) {
appetizer_price = pot_stickers;
} /* if (appetizer_item_code == pot_stickers_code) */

if (drink_item_code == no_item_code) {
drink_price = no_item_price;
} /* if (drink_item_code == no_item_code) */
else if (drink_item_code == coffee_code) {
drink_price = Coffee;
} /* if (drink_item_code == coffee_code) */
else if (drink_item_code == soda_code) {
drink_price = Soda;
} /* if (drink_item_code == soda_code) */
else if (drink_item_code == tea_code) {
drink_price = Tea;
} /* if (drink_item_code == tea_code) */

if (starch_item_code == no_item_code) {
starch_price = no_item_price;
} /* if (starch_item_code == no_item_code) */
else if (starch_item_code == steamed_rice_code) {
starch_price = steamed_rice;
} /* if (starch_item_code == steamed_rice_code) */
else if (starch_item_code == fried_rice_code) {
starch_price = fried_rice;
} /* if (starch_item_code == fried_rice_code) */
else if (starch_item_code == noodles_code) {
starch_price = noodles;
} /* if (starch_item_code == noodles_code) */


subtotal = appetizer_price + entree_price + starch_price + drink_price;

total_tip = subtotal * tip;

total_tax = subtotal * sales_tax;

grand_total = subtotal + total_tip + total_tax;

    /*
    *********************
    * Output Subsection *
    *********************
    */
if (appetizer_item_code == spring_roll_code) {
printf("Spring Roll: $%5.2f\n",
spring_roll);
}
else if (appetizer_item_code == beef_satay_code) {
printf("Beef Satay: $%5.2f\n",
beef_satay);
}
else if (appetizer_item_code == pot_stickers_code) {
printf("Pot Stickers: $%5.2f\n",
pot_stickers);
}

if (drink_item_code == coffee_code) {
printf("Coffee: $%5.2f\n",
Coffee);
}
else if (drink_item_code == soda_code) {
printf("Soda: $%5.2f\n",
Soda);
}
else if (drink_item_code == tea_code) {
printf("Tea: $%5.2f\n",
Tea);
}
if (entree_item_code == no_item_code) {
printf("\n");
}
else if (entree_item_code == beef_pho) {
if (portion == lunch_portion_code) {
printf("Beef Pho Lunch: $%5.2f\n",
beef_pho_lunch);
}
}
else if (portion == dinner_portion_code)  {
printf("Beef Pho Dinner: $%5.2f\n",
beef_pho_dinner);
}
else if (entree_item_code == red_curry_chicken) {
if (portion == lunch_portion_code) {
printf("Red Curry Chicken Lunch: $%5.2f\n",
red_curry_chicken_lunch);
}
else if (portion == dinner_portion_code) {
printf("Red Curry Chicken Dinner: $%5.2f\n",
red_curry_chicken_dinner);
}
}
else if (entree_item_code == Kung_Pao_tofu) {
if (portion == lunch_portion_code) {
printf("Kung Pao tofu Lunch: $%5.2f\n",
Kung_Pao_tofu_lunch);
}
else if (portion == dinner_portion_code) {
printf("Kung Pao tofu dinner: $%5.2f\n",
Kung_Pao_tofu_dinner);
}
}
if (starch_item_code == steamed_rice_code) {
printf("Steamed Rice: $%5.2f\n",
steamed_rice);
}
else if (starch_item_code == fried_rice_code) {
printf("Fried Rice: $%5.2f\n",
fried_rice);
}
else if (starch_item_code == noodles_code) {
printf("Noodles: $%5.2f\n",
noodles);
}

printf("----------------------------------\n");
printf("Subtotal: $%5.2f\n",subtotal);
printf("Tip: $%5.2f\n", total_tip);
printf("Tax: $%5.2f\n", total_tax);
printf("----------------------------------\n");
printf("Grand Total: $%5.2f\n", grand_total);
printf("Thanks for visiting Seth's Fusion!\n");
printf("----------------------------------\n");

}   /* main */

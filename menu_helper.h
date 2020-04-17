#ifndef MENU_HELPER_H
#define MENU_HELPER_H

void clearKeyboard(void);

// getInt: to make sure if users input demical number
int getInt(void);

// getIntInRange: to make sure if users input the number within the range of the menu
int getIntInRange(int min, int max);

// yes : to make sure yes or no
int yes(void);

// displayWelcome: to diplay welcome message
void displayWelcome(void);

// displayHeader for 'all rider' menu
void displayHeaderall(void);

// displayHeader for 'top and last' menu
void displayHeadertoplast(void);

// displayHeader for 'winner' menu
void displayHeaderwinner(void);

// menu: to display default menu list and return the number users choose
int menu(void);

void raceManagerSystem(void);

// fileLoad
int fileLoad(struct RiderInfo* info, int size);

// getCategory: to prompt users to choose one of the categories
char getCategory(void);

// checkCategory: to check if the input-word is between s/S, m/M, l/L 
char checkCategory(void);

// getAgeGroup
char* getAgeGroup(int age);

// convertTime: to convert time readability
void convertTime(double time, int* hour, int* minute);

// getRaceTime: to store calculated race time
void setRaceTime(struct RiderInfo* info, int size);

// checkWithdraw: to check out whether or not athletes withdrew
char* checkWithdraw(int withdraw);

// displayAllriders: to display all riders in the category
void displayAllriders(struct RiderInfo* info, int size);

// displayTopRiders: to display top riders in the category
void displayTopRiders(struct RiderInfo* info, int size);

// displayLastRiders: to display last riders in the category
void displayLastRiders(struct RiderInfo* info, int size);

// displayRider: to display a rider
void displayRider(const struct RiderInfo* info, int category);

// sortRiders 
void sortRiders(struct RiderInfo* info, int size);

// displayWinners: to display winners in all category
void displayWinners(const struct RiderInfo* info, int size);

// displayWinner: to display a winner
void displayWinner(const struct RiderInfo* info, int size, char category);


#endif

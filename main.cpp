#include <iostream>
#include "User.h"
#include "Movie.h"
#include "Cinema.h"

int main() {
    User user1("Abgar", "abo01@gmail.com");
    Movie movie1("Dream", 120, "high", "20:00, 22:00", "007");

    Cinema cinema;

    cinema.registerUser(&user1);
    cinema.registerMovie(&movie1);

    cinema.searchMovie("Dream", 120, "high", "20:00, 22:00", "007");
    cinema.reportSaveToTheFile(&movie1);
}

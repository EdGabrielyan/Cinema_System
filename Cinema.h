#ifndef TASK14_CINEMA_H
#define TASK14_CINEMA_H

#include <iostream>
#include "User.h"
#include "Movie.h"
#include <fstream>
#include <vector>


class Cinema {
private:
    std::vector<User* > m_users;
    std::vector<Movie* > m_movies;
public:
    void registerUser(User* user) {
        m_users.push_back(user);
        std::cout << "User registered successfully" << '\n';
        std::cout << "----------------------------" << '\n';
    }

    void registerMovie(Movie* movie) {
        m_movies.push_back(movie);
        std::cout << "Movie registered successfully" << '\n';
        std::cout << "----------------------------" << '\n';
    }

    void searchMovie(const std::string& title, int duration, const std::string& rating, const std::string& showtimes, const std::string& seatNumber) {
        for (auto movie : m_movies) {
            if (movie->getTitle() == title && movie->getDuration() == duration && movie->getRating() == rating && movie->getShowtimes() == showtimes && movie->getSeatNumber() == seatNumber) {
                std::cout << "searching movie" << '\n';
                std::cout << "-----------------" << '\n';
                std::cout << "title: " << movie->getTitle() << '\n';
                std::cout << "duration: " << movie->getDuration() << '\n';
                std::cout << "rating: " << movie->getRating() << '\n';
                std::cout << "showtimes: " << movie->getShowtimes() << '\n';
                std::cout << "seatNumber: " << movie->getSeatNumber() << '\n';
                std::cout << "-----------------------" << '\n';
            }
            else {
                std::cout << "there is no any search result" << '\n';
                std::cout << "-----------------------------" << '\n';
            }
        }
    } 

    void reportSaveToTheFile(Movie* movie) {
        std::ofstream file("movieData.txt");
        if (file.is_open()) {
            file << "searching movie" << '\n';
            file << "-----------------" << '\n';
            file << "title: " << movie->getTitle() << '\n';
            file << "duration: " << movie->getDuration() << '\n';
            file << "rating: " << movie->getRating() << '\n';
            file << "showtimes: " << movie->getShowtimes() << '\n';
            file << "seatNumber: " << movie->getSeatNumber() << '\n';
            file << "-----------------------" << '\n';
           
            file.close();
            
            std::cout << "file is created" << '\n';
            std::cout << "-----------------" << '\n';
        }
        else {
            std::cout << "file is not created" << '\n';
            std::cout << "------------------" << '\n';
        }
    }
};

#endif // TASK14_CINEMA_H

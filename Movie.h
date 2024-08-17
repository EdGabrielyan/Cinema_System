#ifndef TASK14_MOVIE_H
#define TASK14_MOVIE_H

#include <iostream>

class Movie {
private:
    std::string m_title;
    int m_duration;
    std::string m_rating;
    std::string m_showtimes;
    std::string m_seatNumber;
public:
    Movie(const std::string& title, int duration, const std::string& rating, const std::string& showtimes, const std::string& seatNumber) 
    : m_title(title),
    m_duration(duration),
    m_rating(rating),
    m_showtimes(showtimes),
    m_seatNumber(seatNumber) {}
public:
    const std::string&  getTitle() const {
        return m_title;
    }

    int getDuration() const {
        return m_duration;
    }
    
    const std::string& getRating() const {
        return m_rating;
    }

    const std::string& getShowtimes() const {
        return m_showtimes;
    }

    const std::string& getSeatNumber() const {
        return m_seatNumber;
    }
};

#endif // TASK14_MOVIE_H

#ifndef GAMEDAYATMOSPHERE_H
#define GAMEDAYATMOSPHERE_H

#include <string>

// Forward declaration of Player class (assumes Player class is implemented elsewhere)
class Player;

// Stadium class definition
class Stadium {
public:
    // Constructor
    Stadium();

    // Destructor
    ~Stadium();

    // Public method to update the atmosphere
    void updateAtmosphere();

private:
    class Crowd* crowd;       // Pointer to Crowd class
    class Weather* weather;   // Pointer to Weather class
    class Lighting* lighting; // Pointer to Lighting class
    class Team* teams[2];     // Array of pointers to Team class (for 2 teams)
    class GameEvent* gameEvent; // Pointer to GameEvent class
};

// Crowd class definition
class Crowd {
public:
    // Constructor
    Crowd();

    // Destructor
    ~Crowd();

    // Public methods to update crowd's mood
    void updateMood();
    void increaseCheer();
    void decreaseCheer();

private:
    float cheerIntensity;  // Current cheer intensity
    std::string mood;      // Current mood of the crowd
    float volume;          // Volume of the crowd's noise
};

// Weather class definition
class Weather {
public:
    // Constructor
    Weather();

    // Destructor
    ~Weather();

    // Public methods to update weather
    void updateWeather();
    void applyWeatherEffect();

private:
    std::string currentWeather; // Current weather state
    std::string weatherEffect;  // Current effect of the weather
};

// Lighting class definition
class Lighting {
public:
    // Constructor
    Lighting();

    // Destructor
    ~Lighting();

    // Public methods to adjust lighting
    void adjustLighting();
    void flashLighting();

private:
    std::string lightingType; // Type of lighting (e.g., standard, bright)
    float intensity;          // Lighting intensity level
};

// Team class definition
class Team {
public:
    // Constructor
    Team();

    // Destructor
    ~Team();

    // Public methods to modify team morale and performance
    void increaseMorale();
    void decreaseMorale();
    void updatePlayerPerformance();

private:
    float morale;         // Current team morale
    Player* players[11];  // Array of pointers to Player objects (11 players per team)
};

// Sideline class definition
class Sideline {
public:
    // Constructor
    Sideline();

    // Destructor
    ~Sideline();

    // Public methods to update sideline reactions
    void updateReactions();
    void showFrustration();

private:
    std::string coach;              // Name of the coach
    std::string playerReactions[11]; // Array to store reactions of players on the sideline
};

// GameEvent class definition
class GameEvent {
public:
    // Constructor
    GameEvent();

    // Destructor
    ~GameEvent();

    // Public methods to trigger and update game events
    void triggerEvent();
    void updateAtmosphere();

private:
    std::string eventType;  // Type of event (e.g., touchdown, turnover)
    std::string gameImpact; // Impact of the event (e.g., major, minor)
};

#endif // GAMEDAYATMOSPHERE_H

#include <iostream>
#include "tracker.h"

// Adopt Me Trade Tracker: Core Engine v1.0.0
int main() {
    std::cout << "Loading Inventory Database..." << std::endl;
    
    TradeTracker tracker;
    tracker.Initialize();
    
    std::cout << "Tracker is ready to manage your pets!" << std::endl;
    return 0;
}
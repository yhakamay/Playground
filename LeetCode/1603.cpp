class ParkingSystem {
public:
    int slot[3];
    ParkingSystem(int big, int medium, int small) {
        slot[0] = big;
        slot[1] = medium;
        slot[2] = small;
    }
    
    bool addCar(int carType) {
        if (slot[carType - 1] > 0) {
            slot[carType - 1]--;
            return true;
        } else {
            return false;
        }
    }
};
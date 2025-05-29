// encapsulation is building attributes and methods that operate on that data within a class
// making attributes private and providing controlled access through methods(getters and setters)

//Getters (accessor methods) return the value of an attribute.
//Setters (mutator methods) allow modifying the value of an attribute.

class Myclass {
    private: 
        int value;

    public:
        int getValue() const {
            return value; //getter returns the private attribute
        }

        void setValue(int newValue) { //setter changes the private attributes
            if (newValue >= 0) {
                value = newValue;
            }
        }
};
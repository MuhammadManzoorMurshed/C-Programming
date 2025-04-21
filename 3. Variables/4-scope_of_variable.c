// num cannot be accessed here

int main() {

    // num cannot be accessed here
    {
        // Variable declaration
        int num;
        // num can be accessed anywhere in this block
    }

    // Cannot be accessed here either
    return 0;
}

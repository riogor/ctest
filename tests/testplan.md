# Module test_quad

## Method `std::pair<double, double> find_roots_of_quad(double, double, double)`

- ### Test **№1**
    - Target: check for correct calculations
    - Type: positive
    - Input: three float values ($a, b, c$), which satisfy expression $b^2 - 4ac \geq 0$
    - Expected output: two float values - roots of corresponding quadratic equation ($a^2x + bx + c = 0$)

- ### Test **№2**
    - Target: check for detection of non-quadratic equations
    - Type: negative
    - Input: three float values ($a, b, c$), where $a = 0$
    - Expected output: `std::invalid_argument` type exception

- ### Test **№3**
    - Target: check for detection of non-trivial quadratic equations (where there is a non-real root)
    - Type: negative
    - Input: three float values ($a, b, c$), which satisfy expression $b^2 - 4ac < 0$
    - Expected output: `std::logical_error` type exception
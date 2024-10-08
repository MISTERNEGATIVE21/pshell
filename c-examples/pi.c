/* Test floats and recursion */

float F(float f) { return (f > 20.0) ? 1.0 : 1.0 + f / (2.0 * f + 1.0) * F(f + 1.0); }

int main() {
    float pi = 2.0 * F(1.0);
    return printf("The value of Pi is %f\n", pi);
}

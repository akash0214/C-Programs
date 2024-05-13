#include <stdio.h>
#include <math.h>

#define RADIUS_OF_EARTH 3963 // Radius of the Earth in nautical miles

double to_radians(double degree) {
    return degree * M_PI / 180.0;
}

double distance(double l1, double g1, double l2, double g2) {
    double dlon, distance;
    
    // Converting latitude and longitude from degrees to radians
    l1 = to_radians(l1);
    g1 = to_radians(g1);
    l2 = to_radians(l2);
    g2 = to_radians(g2);
    
    //differences in longitude
    dlon = g2 - g1;

    distance = RADIUS_OF_EARTH * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(dlon));
    
    return distance;
}

int main() {
    double l1, g1, l2, g2;
    
    printf("Enter latitude of point 1: ");
    scanf("%lf", &l1);
    
    printf("Enter longitude of point 1: ");
    scanf("%lf", &g1);
    
    printf("Enter latitude of point 2: ");
    scanf("%lf", &l2);
    
    printf("Enter longitude of point 2: ");
    scanf("%lf", &g2);
    
    double dist = distance(l1, g1, l2, g2);
    
    printf("Distance between the two points: %.2f nautical miles\n", dist);
    
    return 0;
}

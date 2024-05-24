#include <stdio.h>

enum Gender
{
    MALE,
    FEMALE
};

enum AgeStatus
{
    MINOR,
    MAJOR
};

struct PolicyHolder
{
    unsigned int gender;
    unsigned int age_status;
    unsigned int policy_name;
    unsigned int duration;
};

int main()
{
    struct PolicyHolder policy_holder;

    printf("Enter information about insurance policy holder:\n");
    printf("Gender (0 for male, 1 for female): ");
    scanf("%u", &policy_holder.gender);
    printf("Age status (0 for minor, 1 for major): ");
    scanf("%u", &policy_holder.age_status);
    printf("Policy name (0-15): ");
    scanf("%u", &policy_holder.policy_name);
    printf("Policy duration (0-63): ");
    scanf("%u", &policy_holder.duration);

    printf("\nInformation about insurance policy holder:\n");
    printf("Gender: %s\n", policy_holder.gender == MALE ? "Male" : "Female");
    printf("Age status: %s\n", policy_holder.age_status == MINOR ? "Minor" : "Major");
    printf("Policy name: %u\n", policy_holder.policy_name);
    printf("Policy duration: %u\n", policy_holder.duration);

    return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>

// Define color codes for console output
#define red "\033[1;31m"
#define green "\033[1;32m"
#define yellow "\033[1;33m"
#define blue "\033[1;34m1"
#define megenta "\033[1;35m"
#define cyan "\033[1;36m"
#define white "\033[1;37m"
#define reset "\033[0m\n"
#define bold "\033[1m"
#define italic "\033[3m"

// taking name and college data as struct
struct College
{
    char name[100];
    int rank;
};

// main function starts from here
int main()
{

    printf("\n");
    printf(green "                                    HELLO CANDIDATE !!" reset);
    printf("                          WELCOME TO OUR COLLEGE PREDICTOR PROJECT\n");
    printf("                       PLEASE ENTER YOUR DETAILS TO PROCEED FURTHER '_' ");
    printf("\n");
    printf("\n");

    for (int i = 0; i < 7; i++)
    {
        Beep(100 * i, 300);
    }

    // taking rank as input
    int rank;
    Beep(800, 900);
    printf(cyan "               PLEASE ENTER YOUR JEE ADVANCED RANK: ");
    scanf("%d", &rank);
    printf("\n");

    int round = 1;
    char choice[3];
    char cat[5];

    Beep(800, 300); // BEEP Sound

    // taking category as input
    printf(cyan "               PLEASE ENTER YOUR CATEGORY: ");
    scanf("%s", cat);
    printf("\n");

    // taking gender as input
    char sex[7];
    Beep(800, 300);
    printf(cyan "               PLEASE ENTER YOUR SEX: ");
    scanf("%s", sex);
    printf("\n");
    printf("\n");

    // taking data of cutoffs of different colleges
    struct College v[] = {
        {"IIT Bombay Computer and Software Engineering              ", 61},
        {"IIT Bombay Electrical Engineering                         ", 369},
        {"IIT Bombay Engineering Physics                            ", 1397},
        {"IIT Bombay Mechanical Engineering                         ", 1452},
        {"IIT Bombay Chemical and Biochemical Engineering           ", 2081},
        {"IIT Bombay Civil and Environmental Engineering            ", 3471},
        {"IIT Bombay Aerospace Engineering                          ", 2119},
        {"IIT Bombay Metallurgical and Materials Engineering        ", 3783},
        {"IIT Bombay Chemistry                                      ", 5323},
        {"IIT Bombay Economics                                      ", 2107},
        {"IIT Delhi Computer and Software Engineering               ", 102},
        {"IIT Delhi Electrical Engineering                          ", 574},
        {"IIT Delhi Mechanical Engineering                          ", 1882},
        {"IIT Delhi Chemical and Biochemical Engineering            ", 2342},
        {"IIT Delhi Engineering Physics                             ", 2925},
        {"IIT Delhi Metallurgical and Materials Engineering         ", 4259},
        {"IIT Delhi Biotech and Biochemical                         ", 4684},
        {"IIT Delhi Power and Automaation                           ", 797},
        {"IIT Delhi Energy Engineering                              ", 2839},
        {"IIT Delhi Civil and Environmental Engineering             ", 4316},
        {"IIT Delhi Engineering and Computational Mechanics         ", 1314},
        {"IIT Delhi Materials Engineering                           ", 4083},
        {"IIT Delhi Mathematics and computing                       ", 23},
        {"IIT Delhi Production and Industrial Engineering           ", 3372},
        {"IIT Delhi Textile Technology                              ", 5649},
        {"IIT Madras Computer and Software Engineering              ", 175},
        {"IIT Madras Electrical Engineering                         ", 1028},
        {"IIT Madras Engineering Physics                            ", 2090},
        {"IIT Madras Mechanical Engineering                         ", 2786},
        {"IIT Madras Naval Architecture and Ocean Engineering       ", 7551},
        {"IIT Madras Aerospace Engineering                          ", 3881},
        {"IIT Madras Metallurgical and Materials Engineering        ", 6305},
        {"IIT Madras Chemical and Biochemical Engineering           ", 4677},
        {"IIT Madras Civil and Environmental Engineering            ", 6106},
        {"IIT Kanpur Computer and Software Engineering              ", 237},
        {"IIT Kanpur Electrical Engineering                         ", 1368},
        {"IIT Kanpur Biological Sciences and Bioengineering Engineering", 6568},
        {"IIT Kanpur Mechanical Engineering                         ", 3155},
        {"IIT Kanpur Chemistry                                      ", 8614},
        {"IIT Kanpur Economics                                      ", 3300},
        {"IIT Kanpur Earth Sciences                                 ", 9286},
        {"IIT Kanpur Mathematics and Scientific Computing           ", 1143},
        {"IIT Kanpur Physics                                        ", 5173},
        {"IIT Kanpur Statistics and Data Science                    ", 1082},
        {"IIT Kanpur Aerospace Engineering                          ", 4683},
        {"IIT Kanpur Chemical and Biochemical Engineering           ", 4649},
        {"IIT Kanpur Metallurgical and Materials Engineering        ", 6535},
        {"IIT Kanpur Civil and Environmental Engineering            ", 6297},
        {"IIT KGP Computer and Software Engineering                 ", 303},
        {"IIT KGP Electrical Engineering                            ", 1805},
        {"IIT KGP Mechanical Engineering                            ", 3350},
        {"IIT KGP Agricultural and Food Engineering                 ", 8351},
        {"IIT KGP Applied Geology                                   ", 11127},
        {"IIT KGP Biotechnology and Biochemical Engineering         ", 6900},
        {"IIT KGP Electronic and Electrical Communication Engineering ", 1138},
        {"IIT KGP Chemistry                                         ", 11036},
        {"IIT KGP Economics                                         ", 5308},
        {"IIT KGP Physics                                           ", 6962},
        {"IIT KGP Mathematics and Computing                         ", 1323},
        {"IIT KGP Exploration Geophysics                            ", 10304},
        {"IIT KGP Aerospace Engineering                             ", 5297},
        {"IIT KGP Chemical and Biochemical Engineering              ", 4846},
        {"IIT KGP Metallurgical and Materials Engineering           ", 6920},
        {"IIT KGP Civil and Environmental Engineering               ", 6536},
        {"IIT Roorkee Computer and Software Engineering             ", 413},
        {"IIT Roorkee Electronics and Communication Engineering     ", 1443},
        {"IIT Roorkee Electrical Engineering                        ", 2135},
        {"IIT Roorkee Mechanical Engineering                        ", 4189},
        {"IIT Roorkee Engineering Physics                           ", 4901},
        {"IIT Roorkee Chemical and Biochemical Engineering          ", 5075},
        {"IIT Roorkee Metallurgical and Materials Engineering       ", 7246},
        {"IIT Roorkee Civil and Environmental Engineering           ", 6853},
        {"IIT Guwahati Computer and Software Engineering            ", 589},
        {"IIT Guwahati Electronics and Communication Engineering    ", 1711},
        {"IIT Guwahati Electrical Engineering                       ", 2387},
        {"IIT Guwahati Mechanical Engineering                       ", 5088},
        {"IIT Guwahati Engineering Physics                          ", 6192},
        {"IIT Guwahati Chemical and Biochemical Engineering         ", 6144},
        {"IIT Guwahati Civil and Environmental Engineering          ", 7859},
        {"IIT BHU Computer and Software Engineering                 ", 897},
        {"IIT BHU Electrical Engineering                            ", 3706},
        {"IIT BHU Mechanical Engineering                            ", 7083},
        {"IIT BHU Chemical and Biochemical Engineering              ", 8343},
        {"IIT BHU Metallurgical and Materials Engineering           ", 11057},
        {"IIT BHU Civil and Environmental Engineering               ", 9867},
        {"IIT Hyderabad Computer and Software Engineering           ", 608},
        {"IIT Hyderabad Electrical Engineering                      ", 2466},
        {"IIT Hyderabad Mechanical Engineering                      ", 5273},
        {"IIT Hyderabad Engineering Physics                         ", 6196},
        {"IIT Hyderabad Chemical and Biochemical Engineering        ", 6822},
        {"IIT Hyderabad Civil and Environmental Engineering         ", 8716},
        {"IIT Hyderabad Metallurgical and Materials Engineering     ", 8722},
        {"IIT Indore Computer and Software Engineering              ", 1204},
        {"IIT Indore Electrical Engineering                         ", 3828},
        {"IIT Indore Mechanical Engineering                         ", 7509},
        {"IIT Indore Civil and Environmental Engineering            ", 10568},
        {"IIT Indore Metallurgical and Materials Engineering        ", 11310},
        {"IIT Patna Computer and Software Engineering               ", 2685},
        {"IIT Patna Electrical Engineering                          ", 7028},
        {"IIT Patna Mechanical Engineering                          ", 10861},
        {"IIT Patna Engineering Physics                             ", 12318},
        {"IIT Patna Mathematics and Computing                       ", 5461},
        {"IIT Patna Data Science and Artificial Intelligence        ", 3488},
        {"IIT Patna Chemical and Biochemical Engineering            ", 12874},
        {"IIT Patna Civil and Environmental Engineering             ", 13741},
        {"IIT Patna Metallurgical and Materials Engineering         ", 14895},
        {"IIT Bhilai Computer and Software Engineering              ", 5172},
        {"IIT Bhilai Electrical Engineering                         ", 11011},
        {"IIT Bhilai Mechanical Engineering                         ", 14425},
        {"IIT Bhilai Mechatronics Engineering                       ", 9835},
        {"IIT Bhilai Data Science and Artificial Intelligence       ", 5535},
        {"IIT Bhilai Chemical and Biochemical Engineering           ", 16783},
        {"IIT Bhilai Civil and Environmental Engineering            ", 18564},
        {"IIT Pallakad Computer and Software Engineering            ", 4718},
        {"IIT Pallakad  Electrical Engineering                      ", 9835},
        {"IIT Pallakad Mechanical Engineering                       ", 13278},
        {"IIT Pallakad Data Science and Engineering                 ", 5744},
        {"IIT Pallakad Chemical and Biochemical Engineering         ", 14859},
        {"IIT Pallakad Civil and Environmental Engineering          ", 15714},
        {"IIT Jammu Computer and Software Engineering               ", 4602},
        {"IIT Jammu Electrical Engineering                          ", 9858},
        {"IIT Jammu Mechanical Engineering                          ", 13048},
        {"IIT Jammu Chemical and Biochemical Engineering            ", 15208},
        {"IIT Jammu Civil and Environmental Engineering             ", 15805},
        {"IIT Jammu Metallurgical and Materials Engineering         ", 16258},
        {"IIT Ropar Computer and Software Engineering               ", 1883},
        {"IIT Ropar Electrical Engineering                          ", 5529},
        {"IIT Ropar Mechanical Engineering                          ", 8199},
        {"IIT Ropar Chemical and Biochemical Engineering            ", 10413},
        {"IIT Ropar Engineering Physics                             ", 11278},
        {"IIT Ropar Mathematics and Computing                       ", 2843},
        {"IIT Ropar Civil and Environmental Engineering             ", 11890},
        {"IIT Ropar Metallurgical and Materials Engineering         ", 13034},
        {"IIT Bhubaneswar Computer and Software Engineering         ", 2769},
        {"IIT Bhubaneswar Electronics and Communication Engineering ", 4571},
        {"IIT Bhubaneswar Electrical Engineering                    ", 6631},
        {"IIT Bhubaneswar Mechanical Engineering                    ", 9074},
        {"IIT Bhubaneswar Civil and Environmental Engineering       ", 13624},
        {"IIT Bhubaneswar Metallurgical and Materials Engineering   ", 14122},
        {"IIT Gandhinagar Computer and Software Engineering         ", 1366},
        {"IIT Gandhinagar Electrical Engineering                    ", 4127},
        {"IIT Gandhinagar Mechanical Engineering                    ", 7223},
        {"IIT Gandhinagar Chemical and Biochemical Engineering      ", 9270},
        {"IIT Gandhinagar Civil and Environmental Engineering       ", 11217},
        {"IIT Gandhinagar Metallurgical and Materials Engineering   ", 11707},
        {"IIT Jodhpur Computer and Software Engineering             ", 2430},
        {"IIT Jodhpur Electrical Engineering                        ", 6648},
        {"IIT Jodhpur Mechanical Engineering                        ", 9711},
        {"IIT Jodhpur Artificial Intelligence and Data Science      ", 3027},
        {"IIT Jodhpur Chemical and Biochemical Engineering          ", 11496},
        {"IIT Jodhpur Bio Engineering                               ", 13065},
        {"IIT Jodhpur Physics with Specialization                   ", 12212},
        {"IIT Jodhpur Materials Engineering                         ", 12291},
        {"IIT Jodhpur Civil and Environmental Engineering           ", 13138},
        {"IIT Jodhpur Metallurgical and Materials Engineering       ", 14435},
        {"IIT Mandi Computer and Software Engineering               ", 3017},
        {"IIT Mandi Electrical Engineering                          ", 6946},
        {"IIT Mandi Mechanical Engineering                          ", 10038},
        {"IIT Mandi Engineering Physics                             ", 11691},
        {"IIT Mandi Chemical and Biochemical Engineering            ", 12801},
        {"IIT Mandi Civil and Environmental Engineering             ", 11224},
        {"IIT Mandi Data Science and Engineering                    ", 3677},
        {"IIT Tirupati Computer and Software Engineering            ", 4011},
        {"IIT Tirupati Electrical Engineering                       ", 8600},
        {"IIT Tirupati Mechanical Engineering                       ", 12187},
        {"IIT Tirupati Chemical and Biochemical Engineering         ", 14290},
        {"IIT Tirupati Civil and Environmental Engineering          ", 13138},
        {"IIT Dhanbad Computer and Software Engineering             ", 2814},
        {"IIT Dhanbad Electronics and Communication Engineering     ", 5111},
        {"IIT Dhanbad Electrical Engineering                        ", 6815},
        {"IIT Dhanbad Mechanical Engineering                        ", 8680},
        {"IIT Dhanbad Engineering Physics                           ", 10038},
        {"IIT Dhanbad Environmental Engineering                     ", 13397},
        {"IIT Dhanbad Civil and Environmental Engineering           ", 10834},
        {"IIT Dhanbad Chemical and Biochemical Engineering          ", 10102},
        {"IIT Dhanbad Mathematics and Computing                     ", 4472},
        {"IIT Dhanbad Mineral and Metallurgical Engineering         ", 12075},
        {"IIT Dhanbad Minning Engineering                           ", 12824},
        {"IIT Dhanbad Petroleum Engineering                         ", 11626},
        {"IIT Dhanbad Metallurgical and Materials Engineering       ", 12824},
        {"IIT Goa Computer and Software Engineering                 ", 3839},
        {"IIT Goa Electrical Engineering                            ", 8630},
        {"IIT Goa Mechanical Engineering                            ", 13031},
        {"IIT Goa Mathematics and Computing                         ", 5214},
        {"IIT Dharwad Computer and Software Engineering             ", 4777},
        {"IIT Dharwad Electrical Engineering                        ", 10950},
        {"IIT Dharwad Chemical and Biochemical Engineering          ", 15903},
        {"IIT Dharwad Engineering Physics                           ", 13582},
        {"IIT Dharwad Mechanical Engineering                        ", 13892},
        {"IIT Dharwad Civil and Environmental Engineering           ", 15654},
        {"IIT Dharwad Mathematics and Computing                     ", 6313},
    };
    int size = sizeof(v) / sizeof(v[0]);

    // Bubble sort based on rank
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (v[j].rank > v[j + 1].rank)
            {
                // Swap the colleges
                struct College temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    // taking factor by which rank is going to change according to category
    double fact = 1;
    if (strcmp(sex, "FEMALE") == 0)
    {
        fact = 0.588;
    }
    if (strcmp(cat, "SC") == 0)
    {
        fact *= 0.4;
    }
    if (strcmp(cat, "ST") == 0)
    {
        fact *= 0.51;
    }
    if (strcmp(cat, "OBC") == 0)
    {
        fact *= 0.7;
    }
    if (strcmp(cat, "EWS") == 0)
    {
        fact *= 0.81;
    }

    // computing final rank
    rank *= fact;
    if (rank == 0)
    {
        rank = 1;
    }
    Beep(500, 300);

    // printing final category rank
    printf(yellow "               YOUR PREDICTED CATEGORY RANK : %d\n", rank);
    printf("\n");

    // taking factor by which different round cutoffs are going to change
    double ro[6] = {0.78, 0.82, 0.83, 0.84, 0.85, 1};
    Beep(500, 300);
    printf(white "               PREDICTED COLLEGE OPTIONS OF 2024 BASED ON PREVIOUS YEARS ANALYSIS \n");
    printf("\n");

    // loop for iterating to 6 different rounds
    while (round <= 6)
    {

        for (int i = 0; i < size; i++)
        {
            if (rank <= v[i].rank * ro[round - 1] * fact) // comparing rank with different round cutoffs
            {
                Beep(500, 300);
                printf(white "               %s %d\n", v[i].name, (int)(v[i].rank * fact * ro[round - 1]));
            }
        }

        if (round != 6)
        {
            Beep(500, 300);
            printf(blue "\n               DO YOU WANT TO PARTICIPATE IN THE ROUND %d? (YES/NO): ", round + 1);
            scanf("%s", choice);
            printf("\n");
            printf("\n");
            if (strcmp(choice, "NO") == 0)
                break; // breaking the loop after 6th round
        }
        round += 1;
    }

    printf(yellow "\n                       HOPE OUR PROJECT HAS HELPED YOU '_'  !! ");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(white "                              |     ^-__ -^");
    printf(" \n");
    printf(white "                              |    /       \\");
    printf(" \n");
    printf(white "                              |  /  _ _  \\     THANK U ");
    printf(" \n");
    printf(white "                              |<<    o   o    >>");
    printf(" \n");
    printf(white "                              | |      U      | ");
    printf(" \n");
    printf(white "                              |  \\    [_]    // ");
    printf(" \n");
    printf(white "                              |    \\ __//");
    printf(" \n");

    // end of project with sad song

    for (int i = 7; i >= 0; i--)
    {
        Beep(100 * i, 300);
    }

    return 0;
}
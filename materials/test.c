/*----------------------------------------------------*/
// задания 2 уровня:
/*----------------------------------------------------*/


//пример задачи: 321 - 123, -123 - -321

//#include <stdio.h>
//
//int main() {
//    int x, c, d, e;
//    scanf("%d", &x);
//    e = x % 10;
//    d = (x % 100 - e)/10;
//    c = x/100;
//    printf("%d", e*100 + d*10 + c);
//    return 0;
//}

/*--второй вариант--*/

//#include <stdio.h>
//
//int main() {
//    int x, x1, x2, x3;
//    scanf("%d", &x);
//    if (x < 0) {
//        x = x * - 1;
//        x1 = x/100;
//        x2 = (x - x/100 * 100)/10;
//        x3 = x - x/10 * 10;
//        printf("%d%d%d", -x3, x2, x1);
//    } else {
//        x1 = x/100;
//        x2 = (x - x/100 * 100)/10;
//        x3 = x - x/10 * 10;
//        printf("%d%d%d", x3, x2, x1);
//    }
//}

/*----------------------------------------------------*/

// поступают 3 числа, они могут быть или 1, или 0. 111/110/101 = 1, иные случаи 0. если ввод не валдиный, то na
//
//#include <stdio.h>
//
//int main() {
//   int x, y, z;
//    scanf("%d%d%d", &z, &y, &x);
//    if (z == 1 && y == 1 && x == 0) {
//        printf("1");
//    } else if (z == 0 && y < 2 && x < 2) {
//        printf("0");
//    } else if (z == 1 && y == 0 && x == 0) {
//        printf("0");
//    } else if (z == 1 && y == 1 && x == 1) {
//        printf("1");
//    } else if (z == 1 && y < 2 && x == 1) {
//        printf("1");
//    } else {
//        printf ("n/a");
//    }
//}
/*----------------------------------------------------*/

//найти максимальное число из введённых, в конце -1, но оно не часть элемента

//#include <stdio.h>
//
//int main () {
//    int tmp[300];
//    int z= 0, n, max=0, fl = 1;
//    char c;
//    for(int i = 0; z != -1; i++) {
//        scanf("%d%c", &z, &c);
//        if (i == 0 && z == -1) {
//            fl = 0;
//            printf("n/a");
//        } else {
//            tmp[i] = z;
//        }
//        n = i;
//    }
//    for (int i = 1; i < n; i++) {
//        if (tmp[max] < tmp[i]) {
//            max = i;
//        }
//    }
//    if (fl) {
//        printf("%d", tmp[max]);
//    }
//    return 0;
//}


/*--не очень рабочий, нет проверки на то, что бы было число:--*/
//
//#include <stdio.h>
//
//int main () {
//    int a[1000], i = 0, n = 0, max = 0, k;
//    while(n != 1) {
//        scanf("%d", &a[i]);
//        if (a[i] == -1){
//            n = 1;
//        }
//        i++;
//        k = i;
//    }
//    for (int j = 0; j < k; j++) {
//        if(max < a[j]) {
//            max = a[j];
//        }
//    }
//    printf("%d", max);
//}

/*----------------------------------------------------*/

/* из радианной в градусную меру */

//#include <stdio.h>
//
//int main() {
//    float x;
//    if (scanf("%f", &x) == 1 && x != 0 ) {
//    x = x * 57.29;
//    printf("%.f", x);
//} else {
//    printf("n/a");
//}
//    return 0;
//}

/*--второй вариант--*/

//#include <stdio.h>
//
//int main() {
//    float x;
//    char p;
//    float y = 57.29;
//    if (scanf("%f%c", &x, &p) == 2 && p == '\n') {
//        printf("%.0f", x * y);
//    } else {
//        printf ("n/a");
//    }
//    return x*y;
//}

/*----------------------------------------------------*/

// задача с шаром
//v = (4/3) * M_PI * pow(R, 3)
//m = p*v
// пример: 1 = 90058

//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int P = 21500;
//    double result;
//    double R;
//    if (scanf ("%lf", &R) != 1 || R <= 0) {
//        printf("n/a");
//    } else {
//    double tmp = (4.0/3.0) * M_PI * pow(R, 3);
//        result = tmp * P;
//        printf ("%.lf", result);
//    }
//    return 0;
//}

/*----------------------------------------------------*/
// Задания 3 уровня:
/*----------------------------------------------------*/

/*
 2 матрицы
 
 1 2
 3 4
  *
 5 6
 7 8
  =
 19 22
 43 50
 */

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//
//int** create_matrix(int** matrix, int N);
//void input(int** matrix, int N);
//void output(int** matrix, int N);
//void mem_free(int** matrix, int N);
//
//int** create_matrix(int **matrix, int N) {
//    matrix = (int**)malloc(N * sizeof(int*));
//    for (int i = 0; i <N; i++) {
//        matrix[i] = (int*)malloc(N * sizeof(int));
//    }
//    return matrix;
//}
//
//int main() {
//    int N = 2;
//    int ** matrix1 = NULL;
//    int **matrix2 = NULL;
//    matrix1 = create_matrix(matrix1, N);
//    input(matrix1, N);
//    matrix2 = create_matrix(matrix2, N);
//    input(matrix2, N);
//    int sum = 0;
//    int** result = NULL;
//    result = create_matrix(result, N);
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            for (int k = 0; k < N; k++) {
//                sum += matrix1[i][k] * matrix2[k][j];
//            }
//            result[i][j] = sum;
//            sum = 0;
//        }
//    }
//    output(result, N);
//    mem_free(matrix1, N);
//    mem_free(matrix2, N);
//    mem_free(result, N);
//    return 0;
//}
//
//void input(int** matrix, int N) {
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            scanf("%d", &matrix[i][j]);
//        }
//    }
//}
//
//void output(int** matrix, int N) {
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//void mem_free(int** matrix, int N) {
//    for (int i = 0; i < N; i++)
//        free(matrix[i]);
//    free(matrix);
//}

/*----------------------------------------------------*/

//массив , где на конце -1, динамическая память.
//1 2 1 3 1 4 -1 = 1 2 3 4

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main() {
//int n = 0;
//int c = 0;
//int *a = malloc(sizeof(int));
//while (n != (-1)) {
//    scanf("%d", &n);
//    a = realloc(a, sizeof(int));
//    if (n != (-1)){
//        a[c] = n;
//        c++;
//    }
//}
//    int b[c];
//    for (int i = 0; i < c; i++) {
//        b[i] = a[i];
//    }
//    for (int i = 0; i < c; i++) {
//        for (int j = 0; j < c; j++) {
//            if (i != j && a[i] == b[j] && b[i] != 0) {
//                b[j] = 0;
//            }
//        }
//    }
//    int x[c];
//    int y = 0;
//    for (int i = 0; i < c; i++) {
//        if (b[i] != 0) {
//            x[y] = a[i];
//            y++;
//        } else if (a[i] == 0) {
//            x[y] = a[i];
//            y++;
//        }
//    }
//    for (int i = 0; i < y; i++) {
//        printf("%d ", x[i]);
//    }
//    free(a);
//    return 0;
//}

/*----------------------------------------------------*/

 // поменять местами максимальный и минимальный элемент в массиве

//#include <stdio.h>
//#define BUFFER_SIZE 1000
//
//int main()
//{
//    int arr[BUFFER_SIZE];
//    int i = 0;
//    int max;
//    int min;
//    int max_id = 0;
//    int min_id = 0;
//
//
//    while (1)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] == -1)
//            break;
//        i++;
//    }
//    max = arr[0];
//    min = arr[0];
//    for (int j = 0 ; j < i; j++)
//    {
//        if (arr[j] > max)
//        {
//            max = arr[j];
//            max_id = j;
//        }
//
//        if (arr[j] < min)
//        {
//            min = arr[j];
//            min_id = j;
//        }
//
//    }
//    arr[min_id] = max;
//    arr[max_id] = min;
//
//    for (int j = 0 ; j < i ;j++)
//    {
//        if (j == i - 1)
//            printf("%d", arr[j]);
//        else
//            printf("%d ", arr[j]);
//    }
//}


/*----------------------------------------------------*/

// Скалярное произведение

//1
//7
//4
//=
//28
//
//3
//1 2 3
//1 2 3
//=
//14

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int n;
//    char c;
//    int i;
//    int sum = 0;
//    if(scanf("%d%c", &n, &c) == 2 && (c == ' ' || c == '\n') && n > 0) {
//        int *a = (int*)malloc(n * sizeof(int));
//        int *b =  (int*)malloc(n * sizeof(int));
//
//        for (i = 0; i < n; i++) {
//            if(scanf("%d%c", &a[i], &c) == 2 && (c == ' ' || c == '\n')) {
//            }
//        }
//
//        for (i = 0; i < n; i++) {
//            if(scanf("%d%c", &b[i], &c) == 2 && (c == ' ' || c == '\n')) {
//            }
//        }
//
//        for (i = 0; i < n; i++) {
//            sum += a[i] * b[i];
//        }
//        free(a);
//        free(b);
//        printf("%d", sum);
//    }
//
//    return 0;
//}

/*--второй вариант--*/

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int flag = 0;
//    int N = 0;
//    int *mass1 = NULL;
//    int *mass2 = NULL;
//    char c1;
//    int summa = 0;
//    int n = 0;
//
//    if (scanf("%d%c", &n, &c1) == 2 && n > 0 && c1 == '\n') {
//        N = n;
//        flag = 0;
//        mass1 = malloc(N * sizeof(int));
//        mass2 = malloc(N * sizeof(int));
//    } else {
//        flag = 1;
//    }
//
//    for (int i = 0; i < N && flag != 1; i++) {
//        if (scanf("%d%c", &n, &c1) == 2 && (c1 == '\n' || c1 == ' ')) {
//            mass1[i] = n;
//        } else {
//            flag = 1;
//        }
//    }
//
//
//    for (int i = 0; i < N && flag != 1; i++) {
//         if (scanf("%d%c", &n, &c1) == 2 && (c1 == '\n' || c1 == ' ')) {
//            mass2[i] = n;
//         } else {
//             flag = 1;
//         }
//    }
//
//    for (int i = 0; i < N && flag != 1; i++) {
//        summa += mass1[i]*mass2[i];
//    }
//
//    if (flag == 0) {
//        printf("%d", summa);
//        free(mass1);
//        free(mass2);
//    } else {
//        if (mass1 != NULL || mass2 != NULL) {
//            free(mass1);
//            free(mass2);
//        }
//        printf("n/a");
//    }
//    return 0;
//}

/*----------------------------------------------------*/

// Вводится количество человек, являясь числом n, вводится у каждого имя фамилия рост, если рост больше 200, то выводится на печать имя и фамилия

////#include <stdio.h>
////#include <stdlib.h>
////
////struct people () {
////    char im;
////    char fam;
////    char rost;
////}
////
////int main() {
////    int n;
////    if (input_n == (&n) != 0) {
////        (input_n()) == 1 {
////            people();
////        }
////        double nn;
////        if (scanf("%lf", nn) == 1) {
////            *n = nn;
////            if (*n == nn);
////            return 0;
////            else return 0;
////        }
////        struct people *ludi[n];
////        for (int i = 0; i < n; i++) {
////            scanf("%s", ludi[i].im);
////            scanf("%s", ludi[i].fam);
////        }
/// /
////    }
////}

// (не доделано)

/*----------------------------------------------------*/

// На вход идет число, проверить его на валидность. Найти произведение все нечетных цифр в числе, если цифр нет, то 0.

// нет проверки на валидность данных

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int xx,res = 1, sch = 0;
//    scanf("%d", &xx);
//    while (xx > 0) {
//        if ((xx % 10) % 2 == 1) {
//            res = res * (xx % 10);
//            sch++;
//        }
//        xx = xx/10;
//    }
//    if (sch == 0)
//        printf("0");
//    else
//        printf("%d", res);
//}

/*----------------------------------------------------*/

// На вход поступают заглавная или маленькая буква и _, вывести Yes, иначе No

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    char *arr = malloc(101 * sizeof(int));
//    scanf ("%[^\n]s", arr);
//    int flag = 0;
//    for (int i = 0; i < 100 && flag != 1 && (arr[i] != '\0'); i++) {
//        if ((arr[i] >= '0' && arr[i] <= '9') || (arr[i] >='A' && arr[i] <= 'Z') || (arr[i] >='a' && arr[i] <= 'z') || arr[i] == '_') {
//            flag = 0;
//        } else {
//            flag = 1;
//        }
//        if (arr[i] == ' '){
//            flag = 1;
//        }
//    }
//        if (arr[100] >= 32 && arr[100] <= 126) {
//            flag = 1;
//    }
//    if (flag == 0) {
//        printf("YES");
//    } else {
//        printf("NO");
//    }
//    free(arr);
//    return 0;
//}

/*----------------------------------------------------*/

// Биномиальный коэффициент

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int fact (int n);
//
//int main() {
//    int k, c;
//    int n;
//    scanf("%d", &n);
//    printf("%d\n\n", fact(n));
//    for ( k = 0; k <= n; k++) {
//        c = fact(n) / (fact(k) * fact(n-k));
//        printf("%d\n", c);
//    }
//}
//
//int fact (int n) {
//    int fact = 1;
//    for (int i = 1; i <= n; i++) {
//        fact = fact * i;
//    }
//    return fact;
//}

/*----------------------------------------------------*/
// Универсальные проверки, которые вы можете попробовать внедрить их в свой код:
/*----------------------------------------------------*/

//int N;
//char check;
//if (!scanf("%d%c", &N, &check) || (check != '\n') && (check != ' ')) {

//int N;
//if (scanf("%d", &N) <= 0 ....) {
//...
//} else {
//    printf ("n/a");

//int N;
//if (scanf("%d. ", &N)) { - выведет без пробела на конце

/*--------------------------------------------------------*/

/*--------------------------------------------------------*/

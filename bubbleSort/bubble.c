void bubbleSort(int a[], int size) {
    int i, j, t, temp;

    for (i = size - 1; i > 0; i--) {
        printf("\n[%d 단계 : ]\n", size - i);
        for (j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            for (t = 0; t < size; t++) printf("%3d ", a[t]);
            printf("\n");
        }
    }
}
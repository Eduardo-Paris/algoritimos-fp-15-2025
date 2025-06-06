int z = 1;
    int w = 2;
    incrementaX(&z);
    
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    printf("*z = %p\n", &z);
    printf("*w = %p\n", &w);

    return 0;
}
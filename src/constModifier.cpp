int main()
{
    int a = 42;
    int* p = &a;

    const int *       cop  = p;  /* Pointer to constant object */
                      cop  = &a;
//                   *cop  = a;   // Error: assignment of read-only location ‘* cop’

    int const *       ocp  = p;   /* Pointer to constant object */
                      ocp  = &a;
//                    ocp  = a;   // Error: assignment of read-only location ‘* ocp’

    int* const        opc  = p;   // Constant pointer to object */
//                    opc  = &a;  // Error: assignment of read-only variable ‘opc’
                     *opc  = a;

    const int* const  copc = p;  /* Constant pointer to constant object */
//                    copc = &a; // Error: assignment of read-only variable ‘copc’
//                   *copc = a;  // Error: assignment of read-only location ‘*(const int*)copc’

    int const * const ocpc = p;  /* Constant pointer to constant object */
//                    ocpc = &a; // Error: assignment of read-only variable ‘ocpc’
//                   *ocpc = a;  // Error: assignment of read-only location ‘*(const int*)ocpc’

//  const int const * cocp = p;  // Error: duplicate second ‘const’

    return 0;
}

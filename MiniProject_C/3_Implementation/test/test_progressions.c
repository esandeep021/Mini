#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <progressions.h>
#define PROJECT_NAME    "Progressions"

/* Prototypes for all the test functions */
void test_ar_prog(void);
void test_geo_prog(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "ar_prog", test_ar_prog);
  CU_add_test(suite, "geo_prog", test_geo_prog);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_ar_prog(void) {
  CU_ASSERT(5 == ar_prog(1, 1, 5));
  
  /* Dummy fail*/
  CU_ASSERT(10 == ar_prog(1, 1, 5));
}

void test_geo_prog(void) {
  CU_ASSERT(16 == geo_prog(1, 2, 5));
  
  /* Dummy fail*/
  CU_ASSERT(20 == geo_prog(2, 3, 3));
}



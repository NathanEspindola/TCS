#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

TEST_SETUP(Sort){}

TEST_TEAR_DOWN(Sort){}

TEST(Sort, Test1) //TESTA UM VETOR SEM DADOS
{
  int vec[] = {};
  int tam = 0;

  TEST_ASSERT_EQUAL(1, sort(vec, tam, "On", COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "On", RADIX));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "On2", BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "On2", INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "On2", SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "Onlogn", HEAP));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "Onlogn", MERGE));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "Onlogn", QUICK));
}

TEST(Sort, Test2) //TESTA UM VETOR COM APENAS UM DADO
{
  int vec[1] = {7};
  int tam = 1;

  TEST_ASSERT_EQUAL(1, sort(vec, tam, "On", COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "On", RADIX));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "On2", BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "On2", INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "On2", SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "Onlogn", HEAP));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "Onlogn", MERGE));
  TEST_ASSERT_EQUAL(1, sort(vec, tam, "Onlogn", QUICK));
}

TEST(Sort, Test3) //TESTA UM VETOR COM 2 DADOS
{
  int vec1[2] = {7, 3};
  int vec2[2] = {7, 3};
  int vec3[2] = {7, 3};
  int vec4[2] = {7, 3};
  int vec5[2] = {7, 3};
  int vec6[2] = {7, 3};
  int vec7[2] = {7, 3};
  int vec8[2] = {7, 3};

  int expected[2] = {3, 7};
  int tam = 2;

  sort(vec1, tam, "On", COUNTING);
  sort(vec2, tam, "On", RADIX);
  sort(vec3, tam, "On2", BUBBLE);
  sort(vec4, tam, "On2", INSERTION);
  sort(vec5, tam, "On2", SELECTION);
  sort(vec6, tam, "Onlogn", HEAP);
  sort(vec7, tam, "Onlogn", MERGE);
  sort(vec8, tam, "Onlogn", QUICK);

  TEST_ASSERT_EQUAL_INT32_ARRAY(vec1, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec2, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec3, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec4, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec5, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec6, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec7, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec8, expected, tam);
}

TEST(Sort, Test4) //TESTA UM VETOR COM 20 DADOS
{
  int vec1[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vec2[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vec3[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vec4[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vec5[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vec6[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vec7[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vec8[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

  int expected[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
  int tam = 20;

  sort(vec1, tam, "On", COUNTING);
  sort(vec2, tam, "On", RADIX);
  sort(vec3, tam, "On2", BUBBLE);
  sort(vec4, tam, "On2", INSERTION);
  sort(vec5, tam, "On2", SELECTION);
  sort(vec6, tam, "Onlogn", HEAP);
  sort(vec7, tam, "Onlogn", MERGE);
  sort(vec8, tam, "Onlogn", QUICK);

  TEST_ASSERT_EQUAL_INT32_ARRAY(vec1, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec2, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec3, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec4, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec5, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec6, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec7, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec8, expected, tam);
}

TEST(Sort, Test5) //TESTA A ORDENAÇÃO DE UM VETOR EM ORDEM CRESCENTE COM 10 DADOS
{
  int vec1[10] = {7, 3, 2, 6, 0, 9, 1, 8, 5, 4};
  int vec2[10] = {7, 3, 2, 6, 0, 9, 1, 8, 5, 4};
  int vec3[10] = {7, 3, 2, 6, 0, 9, 1, 8, 5, 4};
  int vec4[10] = {7, 3, 2, 6, 0, 9, 1, 8, 5, 4};
  int vec5[10] = {7, 3, 2, 6, 0, 9, 1, 8, 5, 4};
  int vec6[10] = {7, 3, 2, 6, 0, 9, 1, 8, 5, 4};
  int vec7[10] = {7, 3, 2, 6, 0, 9, 1, 8, 5, 4};
  int vec8[10] = {7, 3, 2, 6, 0, 9, 1, 8, 5, 4};

  int expected[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int tam = 10;

  sort(vec1, tam, "On", COUNTING);
  sort(vec2, tam, "On", RADIX);
  sort(vec3, tam, "On2", BUBBLE);
  sort(vec4, tam, "On2", INSERTION);
  sort(vec5, tam, "On2", SELECTION);
  sort(vec6, tam, "Onlogn", HEAP);
  sort(vec7, tam, "Onlogn", MERGE);
  sort(vec8, tam, "Onlogn", QUICK);

  TEST_ASSERT_EQUAL_INT32_ARRAY(vec1, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec2, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec3, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec4, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec5, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec6, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec7, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec8, expected, tam);
}

TEST(Sort, Test6) //TESTA A ORDENAÇÃO DE UM VETOR JÁ ORGANIZADO EM ORDEM CRESCENTE COM 10 DADOS
{
  int vec1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int vec2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int vec3[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int vec4[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int vec5[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int vec6[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int vec7[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int vec8[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  int expected[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int tam = 10;

  sort(vec1, tam, "On", COUNTING);
  sort(vec2, tam, "On", RADIX);
  sort(vec3, tam, "On2", BUBBLE);
  sort(vec4, tam, "On2", INSERTION);
  sort(vec5, tam, "On2", SELECTION);
  sort(vec6, tam, "Onlogn", HEAP);
  sort(vec7, tam, "Onlogn", MERGE);
  sort(vec8, tam, "Onlogn", QUICK);

  TEST_ASSERT_EQUAL_INT32_ARRAY(vec1, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec2, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec3, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec4, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec5, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec6, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec7, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec8, expected, tam);
}

TEST(Sort, Test7) //TESTA A ORDENAÇÃO DE NÚMEROS IGUAIS
{
  int vec1[6] = {7, 7, 7, 7, 7, 7};
  int vec2[6] = {7, 7, 7, 7, 7, 7};
  int vec3[6] = {7, 7, 7, 7, 7, 7};
  int vec4[6] = {7, 7, 7, 7, 7, 7};
  int vec5[6] = {7, 7, 7, 7, 7, 7};
  int vec6[6] = {7, 7, 7, 7, 7, 7};
  int vec7[6] = {7, 7, 7, 7, 7, 7};
  int vec8[6] = {7, 7, 7, 7, 7, 7};

  int expected[6] = {7, 7, 7, 7, 7, 7};
  int tam = 6;

  sort(vec1, tam, "On", COUNTING);
  sort(vec2, tam, "On", RADIX);
  sort(vec3, tam, "On2", BUBBLE);
  sort(vec4, tam, "On2", INSERTION);
  sort(vec5, tam, "On2", SELECTION);
  sort(vec6, tam, "Onlogn", HEAP);
  sort(vec7, tam, "Onlogn", MERGE);
  sort(vec8, tam, "Onlogn", QUICK);

  TEST_ASSERT_EQUAL_INT32_ARRAY(vec1, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec2, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec3, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec4, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec5, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec6, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec7, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec8, expected, tam);
}

TEST(Sort, Test8) //TESTA A ORDENAÇÃO DE UM VETOR COM MAIS DE UM NÚMERO REPETIDO
{
  int vec1[7] = {7, 7, 7, 7, 3, 3, 3};
  int vec2[7] = {7, 7, 7, 7, 3, 3, 3};
  int vec3[7] = {7, 7, 7, 7, 3, 3, 3};
  int vec4[7] = {7, 7, 7, 7, 3, 3, 3};
  int vec5[7] = {7, 7, 7, 7, 3, 3, 3};
  int vec6[7] = {7, 7, 7, 7, 3, 3, 3};
  int vec7[7] = {7, 7, 7, 7, 3, 3, 3};
  int vec8[7] = {7, 7, 7, 7, 3, 3, 3};
  
  int expected[7] = {3, 3, 3, 7, 7, 7, 7};
  int tam = 7;

  sort(vec1, tam, "On", COUNTING);
  sort(vec2, tam, "On", RADIX);
  sort(vec3, tam, "On2", BUBBLE);
  sort(vec4, tam, "On2", INSERTION);
  sort(vec5, tam, "On2", SELECTION);
  sort(vec6, tam, "Onlogn", HEAP);
  sort(vec7, tam, "Onlogn", MERGE);
  sort(vec8, tam, "Onlogn", QUICK);

  TEST_ASSERT_EQUAL_INT32_ARRAY(vec1, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec2, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec3, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec4, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec5, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec6, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec7, expected, tam);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vec8, expected, tam);
}
#ifndef OPENANN_TEST_COMPRESSION_MATRIX_FACTORY_TEST_CASE_H_
#define OPENANN_TEST_COMPRESSION_MATRIX_FACTORY_TEST_CASE_H_

#include "Test/TestCase.h"

class CompressionMatrixFactoryTestCase : public TestCase
{
  virtual void run();
  virtual void setUp();
  void compress();
  void compressor();
};

#endif // OPENANN_TEST_COMPRESSION_MATRIX_FACTORY_TEST_CASE_H_

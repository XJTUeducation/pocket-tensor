/* Autogenerated file, DO NOT EDIT */
#include "test_util.h"

TEST_CASE("conv_2x2")
{
    pt::Tensor in{2, 2, 1};
    in.setData({0.63654029369354248046875, 0.92094719409942626953125, 0.674171924591064453125, 0.2284177392721176147460938});

    pt::Tensor expected{1};
    expected.setData({1.6406457424163818359375});

    testModel(in, expected, "conv_2x2", 1e-6f);
}
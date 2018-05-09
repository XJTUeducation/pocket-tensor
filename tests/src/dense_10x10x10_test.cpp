/* Autogenerated file, DO NOT EDIT */
#include "test_util.h"

TEST_CASE("dense_10x10x10")
{
    pt::Tensor in{10};
    in.setData({0.0164627600461244583129883, 0.2988002300262451171875, 0.540719568729400634765625, 0.8598835468292236328125, 0.1851143091917037963867188, 0.0835463479161262512207031, 0.0442722998559474945068359, 0.4438079893589019775390625, 0.0193187482655048370361328, 0.0670320466160774230957031});

    pt::Tensor expected{10};
    expected.setData({0.344859421253204345703125, 0.2116758525371551513671875, -0.0225683692842721939086914, -0.1440104693174362182617188, -0.508952081203460693359375, 0.6240634918212890625, -0.0159221328794956207275391, -0.0768641978502273559570312, -0.0123147666454315185546875, 0.2532834708690643310546875});

    testModel(in, expected, "dense_10x10x10", 1e-6f);
}
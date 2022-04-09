#include "PolyLineTest.h"
#include "math.h"

TEST(SectionDistanceTest, Negative) {
    Point p1(0, 0);
    Point p2(8, 0);
    Point p3(8, 8);
    Point p4(10, 8);
    Section s(p1,p2);
    Section s2(p3,p4);


    EXPECT_FLOAT_EQ(0, s.distance(p1));
    EXPECT_FLOAT_EQ(0, s.distance(p2));
    EXPECT_FLOAT_EQ(8, s.distance(p3));

    EXPECT_FLOAT_EQ(sqrt(68), s.distance(p4));
    EXPECT_FLOAT_EQ(0, s2.distance(s2));
    EXPECT_FLOAT_EQ(8, s2.distance(s));

}

<?php
/**
 * 百钱买百鸡
 * 今有鸡翁一，值钱伍；鸡母一，值钱三；鸡鶵三，值钱一。凡百钱买鸡百只，问鸡翁、母、鶵各几何？
 *
 * 答曰：鸡翁四，值钱二十；鸡母十八，值钱五十四；鸡鶵七十八，值钱二十六。
 * 又答：鸡翁八，值钱四十；鸡 母十一，值钱三十三，鸡鶵八十一，值钱二十七。
 * 又答：鸡翁十二，值钱六十；鸡母四、值钱十二；鸡鶵八十 四，值钱二十八。”
 *
 * 可能解的集合： 0=<x, y, z <= 100
 *
 * 验证条件： x + y + z = 100; 5x + 3y + z/3 = 100
 *
 * 复杂度O(100 * 100)
 */
for ($x = 0; $x <= 100; $x++) { // 公由 0 到 100
    for ($y = 0; $y <= 100 - $x; $y++) { // 母 由 0 到 100
        $z = 100 - $x -$y;  // 小鸡
        if ($z % 3 == 0) {
            if (5 * $x + 3 * $y + $z / 3 == 100)    //  满足验证条件
                echo "x = $x; y = $y; z = $z;\n";
        }
    }
}
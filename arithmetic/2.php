<?php
/**
 * ��Ǯ��ټ�
 * ���м���һ��ֵǮ�飻��ĸһ��ֵǮ�������R����ֵǮһ������Ǯ�򼦰�ֻ���ʼ��̡�ĸ���R�����Σ�
 *
 * ��Ի�������ģ�ֵǮ��ʮ����ĸʮ�ˣ�ֵǮ��ʮ�ģ����R��ʮ�ˣ�ֵǮ��ʮ����
 * �ִ𣺼��̰ˣ�ֵǮ��ʮ���� ĸʮһ��ֵǮ��ʮ�������R��ʮһ��ֵǮ��ʮ�ߡ�
 * �ִ𣺼���ʮ����ֵǮ��ʮ����ĸ�ġ�ֵǮʮ�������R��ʮ �ģ�ֵǮ��ʮ�ˡ���
 *
 * ���ܽ�ļ��ϣ� 0=<x, y, z <= 100
 *
 * ��֤������ x + y + z = 100; 5x + 3y + z/3 = 100
 *
 * ���Ӷ�O(100 * 100)
 */
for ($x = 0; $x <= 100; $x++) { // ���� 0 �� 100
    for ($y = 0; $y <= 100 - $x; $y++) { // ĸ �� 0 �� 100
        $z = 100 - $x -$y;  // С��
        if ($z % 3 == 0) {
            if (5 * $x + 3 * $y + $z / 3 == 100)    //  ������֤����
                echo "x = $x; y = $y; z = $z;\n";
        }
    }
}
#include <ultra64.h>

char *lang[] = {
	/*  0*/ "|�܀₄��������\n\n�����߁��рτ��Ҁ����׀߂����րˀ������ͅ����ⅅ��������䂅�րˀ��π�ς����τㅜ�恺�ခ�����������߁��рτ������������Ł̅��Ł����́҃����恺���ɀ����ہӄ�Ӂ������Ȁ׀�Ҁ�����������υ��������쀁�����υÁŁɁȁ����Ɓ�̈́����ӂہ��ă��ŀ��Áҁ������Ȁ׀へ���ȃсς��������߁��π��ہ���рρ��ـπ�������Ł߁��́Ł́�����Ł��ҁ���\n\n|�րˀ��π�π�\n\n���׀߂����րˀ����҄������恺��݀׀߂��ցҁ��Ё��υ��Ɓ�ρӀ������߀��πՁ����������恺������Ӏ��Ё����Ӄ����ɅŃʁ���ā�́��ခ�ȁ�ӂ䂅�҃σ���������́Ł؁��󁺁䁼�ȁÁ҅�����Ɂʁςہ��҅����������āǁ�ҁ����������ہ��Ӄ�������������ׁ��Ɂ�Ɓ�Á́ҁ΁��߁��ƃ������ˁ́�������߀��πՁ�����΁߀������̓����ˁӁ����\n\n|���������ǅ��߃��ځ҄����������ǁ�\n\n���׀߂����րˀ����ρ߁���������߁��рρ҂��́�ǅ��߃��ځ������ɄفŁ��ۂ����������҄�����΁ā�́���ȁ����ǅ�����������ށ��ҁ󀁀Հ��܁��с������̄����ŀ������҂����́΁�܁ҁ҃����������ǁ߀΁����ÁҀۂ������҅�ۄ��Ӄ��҄������ρ���߁�����\n\n|���������׀�����π������ʀへ�Â�\n\n�ڂ����܀Ӏ��ЁҀ׀�����π������ʀ�ҁ������������ɅʁŁ̀��݀ր̀���ƀ��ۀ܀���������˂��āǁ�ҁ��Á�ρˁ��́��������������󅐁�ā�Ʉ������́҅������ց͂��ځÁ́�����󁺁䁼��\n\n|��������������Ɂʁ҅����������ǁ�\n\n�݀׀߂�����ځ��́��⅄���恉���߀��πՁ҃����߁Ł������Ł́���䂅�Ҁ�ʀՂ��悉�����ʀׁҀق�������������΁��󁻁�ȁÁρ��ⅅ����Ɂʁυ����������Ł́܁����ҁ����惗�������������Ɓ�Á́܂������态�Ѐ������ۀ܀����ۂāƁ����恺�‎������܅�����ׁɁ΁��߁��π�\n\n|���������������ҀЀр�������݁ǁ�\n\n���׀߂����րˀ����҄��ρ߁�������ˁ҅����������Ȁ׀��󃱂����́΁��́���ȁ����ȁҀ��ˁҁ�����߀с������݁Ł̀��րˀ��π�ς����؁�Ձʅ́��́܁����Ɂ���\n\n|�����������׀߂����րˀ������ˁ�\n\n���́Ӏ��ˁҀ݀ր̀���Ɓ����ρσ�����́��ခ���׀߂����րˀ����ӁÁ���Ҁ��ƅ��Ҁ݀׀߂����ρ���݀׀߂����ρӀ����ҁ߁��υ��������т��Ɓ�����Ɓ�ɁہҀۀ܀���悔���ā�́���˂݁ρ���Ł̂����Ҁ݀׀߂��ρ���ہ��ˁ��Ɓҁ���\n\nEND\n",
	/*  1*/ "���̄�����\n",
	/*  2*/ "|�܀₄��������\n\n�����߁��рτ��Ҁ����׀߂����րˀ������ͅ����ⅅ��������䂅�րˀ��π�ς����τㅜ�恺�ခ�����������߁��рτ������������Ł̅��Ł����́҃����恺���ɀ����ہӄ�Ӂ������Ȁ׀�Ҁ�����������υ��������쀁�����υÁŁɁȁ����Ɓ�̈́����ӂہ��ă��ŀ��Áҁ������Ȁ׀へ���ȃсς��������߁��π��ہ���рρ��ـπ�������Ł߁��́Ł́�����Ł��ҁ���\n\n|�րˀ��π�π�\n\n���׀߂����րˀ����҄������恺��݀׀߂��ցҁ��Ё��υ��Ɓ�ρӀ������߀��πՁ����������恺������Ӏ��Ё����Ӄ����ɅŃʁ���ā�́��ခ�ȁ�ӂ䂅�҃σ���������́Ł؁��󁺁䁼�ȁÁ҅�����Ɂʁςہ��҅����������āǁ�ҁ����������ہ��Ӄ�������������ׁ��Ɂ�Ɓ�Á́ҁ΁��߁��ƃ������ˁ́�������߀��πՁ�����΁߀������̓����ˁӁ����\n\n|���������ǅ��߃��ځ҄����������ǁ�\n\n���׀߂����րˀ����ρ߁���������߁��рρ҂��́�ǅ��߃��ځ������ɄفŁ��ۂ����������҄�����΁ā�́���ȁ����ǅ�����������ށ��ҁ󀁀Հ��܁��с������̄����ŀ������҂����́΁�܁ҁ҃����������ǁ߀΁����ÁҀۂ������҅�ۄ��Ӄ��҄������ρ���߁�����\n\n|���������׀�����π������ʀへ�Â�\n\n�ڂ����܀Ӏ��ЁҀ׀�����π������ʀ�ҁ������������ɅʁŁ̀��݀ր̀���ƀ��ۀ܀���������˂��āǁ�ҁ��Á�ρˁ��́��������������󅐁�ā�Ʉ������́҅������ց͂��ځÁ́�����󁺁䁼��\n\n|��������������Ɂʁ҅����������ǁ�\n\n�݀׀߂�����ځ��́��⅄���恉���߀��πՁ҃����߁Ł������Ł́���䂅�Ҁ�ʀՂ��悉�����ʀׁҀق�������������΁��󁻁�ȁÁρ��ⅅ����Ɂʁυ����������Ł́܁����ҁ����惗�������������Ɓ�Á́܂������态�Ѐ������ۀ܀����ۂāƁ����恺�‎������܅�����ׁɁ΁��߁��π�\n\n|�����������׀߂����րˀ������ˁ�\n\n���́Ӏ��ˁҀ݀ր̀���Ɓ����ρσ�����́��ခ���׀߂����րˀ����ӁÁ���Ҁ��ƅ��Ҁ݀׀߂����ρ���݀׀߂����ρӀ����ҁ߁��υ��������т��Ɓ�����Ɓ�ɁہҀۀ܀���悔���ā�́���˂݁ρ���Ł̂����Ҁ݀׀߂��ρ���ہ��ˁ��Ɓҁ���\n\nEND\n",
	/*  3*/ "|�܀₄��������\n\n�����߁��рτ��Ҁ����׀߂����րˀ������ͅ����ⅅ��������䂅�րˀ��π�ς����τㅜ�恺�ခ�����������߁��рτ������������Ł̅��Ł����́҃����恺���ɀ����ہӄ�Ӂ������Ȁ׀�Ҁ�����������υ��������쀁�����υÁŁɁȁ����Ɓ�̈́����ӂہ��ă��ŀ��Áҁ������Ȁ׀へ���ȃсς��������߁��π��ہ���рρ��ـπ�������Ł߁��́Ł́�����Ł��ҁ���\n\n|�րˀ��π�π�\n\n���׀߂����րˀ����҄������恺��݀׀߂��ցҁ��Ё��υ��Ɓ�ρӀ������߀��πՁ����������恺��ł��҄����Ӏ��Ё�Ӆ�����Ɂʁ悪���������Ł́���߁����态�ہ��Ӄ�������������ׁ��Ɂ�Ɓ�Á́ҁ΁��߁��ƃ������ˁ́�������߀��πՁ�����΁߀������̓����ˁӁ����\n\n|���������ǅ��߃��ځ҄����������ǁ�\n\n���׀߂����րˀ����ρ߁���������߁��рρ҂��́�ǅ��߃��ځ������ɄفŁ��ۂ����������҄�����΁ā�́���ȁ����ǅ�����������ށ��ҁ󀁀Հ��܁��с������̄����ŀ������҂����́΁�܁ҁ҃����������ǁ߀΁����ÁҀۂ������҅�ۄ��Ӄ��҄������ρ���߁�����\n\n|�����������׀߂����րˀ������ˁ�\n\n���́Ӏ��ˁҀ݀ր̀���Ɓ����ρσ�����́��ခ���׀߂����րˀ����ӁÁ���Ҁ��ƅ��Ҁ݀׀߂����ρ���݀׀߂����ρӀ����ҁ߁��υ��������т��Ɓ�����Ɓ�ɁہҀۀ܀���悔���ā�́���˂݁ρ���Ł̂����Ҁ݀׀߂��ρ���ہ��ˁ��Ɓҁ���\n\nEND\n",
	/*  4*/ NULL,
	/*  5*/ NULL,
	/*  6*/ NULL,
	/*  7*/ NULL,
	/*  8*/ NULL,
	/*  9*/ "���׀߂����րˀ������ˁ�\n",
	/* 10*/ "������Ɂʁ҅����������ǁ�\n",
	/* 11*/ "�׀�����π������ʀへ�Â�\n",
	/* 12*/ "�������ҀЀр�������݁ǁ�\n",
	/* 13*/ "�ǅ��߃��ځ҄����������ǁ�\n",
	/* 14*/ "Machinery scream sound Fx.\n",
	/* 15*/ "�׀�����π������ʀへ�ÂāŁ�\n",
	/* 16*/ "�׀�����π������ʀ�ҁ����������Ʌʂ��\n",
	/* 17*/ "�݀ր̀���ƀ����ЁҀ��ʀׁ悆���ā��\n",
	/* 18*/ "��π��π܀��ڀр׀����ÂāŁ�\n",
	/* 19*/ "�׀�����π����ڀр׀����ÂāŁ�\n",
	/* 20*/ "�ăۂ����������ʀ�҃؃ف恌�������\n",
	/* 21*/ "�׀�����π������ʀ������Ł�\n",
	/* 22*/ "�������ځς������΃�����΂ρā��\n",
	/* 23*/ "�׀�����π������ʀ������Ł�\n",
	/* 24*/ "�������\n��������������؁ǁ�\n",
	/* 25*/ "�����Ӏ�������\n",
	/* 26*/ "���̂́҅�����τ����悟��\n",
	/* 27*/ "�Ѓ�����Ł́��؁ǁ�\n",
	/* 28*/ "�ۀ܀�����ۀˀʀう�ҀρŁ�\n",
	/* 29*/ "�����悍���ā��\n",
	/* 30*/ "�Ѐ������Â�\n",
	/* 31*/ "�Ѐ���������\n",
	/* 32*/ "�ׁɁ΁��󀏂����Á́Ӄ���������\n",
	/* 33*/ "�����Ӏ����҄������󂃂������݁��́��⁹����\n",
	/* 34*/ "�߁��䁼�����݄䁻�Ł߁���\n",
	/* 35*/ "�Ɓ�πр߀ф��ρ����\n",
	/* 36*/ "�Ѐ׀݀܄ڄۀ��݀ր̀���ƀ��ق����惇��\n",
	/* 37*/ "���܀��������ڂ�������\n",
	/* 38*/ "",
	/* 39*/ "���܀��������ǀ����ʀׁ������Ł؁�\n",
	/* 40*/ "�ـ�׀ۀ̀πӀ����������πׁ惇��\n",
	/* 41*/ "�݀ր̀���ƀ����ЁҀ��ʀׁ�\n��ς����ā�́��؁�\n",
	/* 42*/ "�����ӁƁ�ς����ā�́��؁�\n",
	/* 43*/ "�����Ł��΀��������悍���ā�́���\n",
	/* 44*/ "�����恏�ׁҀ������ρŁɁفɁ���\n",
	/* 45*/ "Obtain Night Vision.\n",
	/* 46*/ "Cassandra De Vries'\n",
	/* 47*/ "��р�Ѐ�\n",
	/* 48*/ "De Vries' briefcase\n",
	/* 49*/ "��р�Ѐс��݁ς����\n",
	/* 50*/ "Obtain shield tech item.\n",
	/* 51*/ "Cassandra De Vries'\n",
	/* 52*/ "��ۀۂ�����\n",
	/* 53*/ "De Vries' briefcase\n",
	/* 54*/ "��ۀۂ��������݁ς����\n",
	/* 55*/ "Obtain Data Uplink.\n",
	/* 56*/ "\n",
	/* 57*/ "�����߀��π�\n",
	/* 58*/ "�����߀��π�\n",
	/* 59*/ "�����߀��πՁ��݁ς����\n",
	/* 60*/ "�т��ׄ؀�\n",
	/* 61*/ "��π��π܀�ʀ���ׁ���\n",
	/* 62*/ "��π��π܀�ʀ��ӂ�τׁ��́��؁�\n",
	/* 63*/ "���������������҅ǅ�������ā�́��؁�\n",
	/* 64*/ "�����������݁��́⁹����\n",
	/* 65*/ "�ր��ր�ӂɁɁÁ́΁��\n",
	/* 66*/ "���������ӂ������\n",
	/* 67*/ "�����������Ł́܁������\n",
	/* 68*/ "�ā��āͅ����ҁ��������ҁ��΁ā���\n",
	/* 69*/ "�����Ҁ܀рʀ�������ҁ߀�\n",
	/* 70*/ "�偿���ɀ������Ɓ�߀�\n",
	/* 71*/ "�񂂁Ӂ݁ہ́��『\n",
	/* 72*/ "�����Ł���ρ�ρ��ɁŁ؁Ł�����\n",
	/* 73*/ "���҅����怴\n",
	/* 74*/ "�ׁ��������ӂ����ā�Ɂ�\n",
	/* 75*/ "�ÁÁ����Ɓ�ς��́����́��〴\n",
	/* 76*/ "��������π�\n",
	/* 77*/ "���������Ձ���݁�\n",
	/* 78*/ "�р߀ф��ρ����\n",
	/* 79*/ "���、�Á��΁Ӂ�Ӏ�\n",
	/* 80*/ "�܁������ā�́���߁���\n",
	/* 81*/ "�Á、�������ہŁɀ�\n",
	/* 82*/ "�����恏�ׁҀ������ρŁɁفɁ���\n",
	/* 83*/ "���、�Ѓ����\n",
	/* 84*/ "�Á҂����ρŁ݁恴�̀�\n",
	/* 85*/ "�т�������������؁��Ѐ׀�Ɓ���ƀ�\n",
	/* 86*/ "�����Ѐр���������݁Ł�\n",
	/* 87*/ "�����Ѐр���������݁Ł�\n",
	/* 88*/ "�����Ѐр���������݁Ł�\n",
	/* 89*/ "Obtain CamSpy.\n",
	/* 90*/ "Dr. Caroll's\n",
	/* 91*/ "�Հ��܁���\n",
	/* 92*/ "�Հ��܁���\n",
	/* 93*/ "�Հ��܁��с��݁ς����\n",
	/* 94*/ "�ÁÁӂ��܂����恿�Ɂ��Ӏ��Ё���\n���׀߂����րˀ����ӂ����ρ���ς����΁���\n",
	/* 95*/ "�Á҂����҂�����\n�Ɓꁻ�Ӏ�������������́����\n",
	/* 96*/ "�׀�����π������ʀ�ҁ������������Ʌʁǁ߀�\n�ȁ�󅮁ց͂ځ�Ӂ����\n",
	/* 97*/ "�ǅ�����������ޅ������ς��䀴\n���̀Ѐπ䀁�Հ��܁��с�������\n",
	/* 98*/ "�����Ҁȁ��ρҀـρ������π��ׁ���\n",
	/* 99*/ "���Ȃɀ��̄��ӄʁ���ʀׁā��\n",
	/*100*/ "���׀߂����րˀ�����\n",
	/*101*/ "���׀߂����րˀ������ÁÁ�Ɓ���\n",
	/*102*/ "�܁������ς��́܃Ƅӄԁ��΀�\n",
	/*103*/ "�������Á҃�҂��Ӄ��̅����Ɂ��\n",
	/*104*/ "�ʁ����̀��������΁ɁӀ�\n",
	/*105*/ "�āƁ恒���҅Ԅ��ӂɄ����΀�\n�Ɓ�ρÁÁ�������΁��́Ӏ�\n",
	/*106*/ "���ӅՃԁ΄�큸�Ձ��́����\n�ځÁ����Ł����Ⴌ���́���߀�\n",
	/*107*/ NULL,
};

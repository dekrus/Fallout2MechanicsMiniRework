#ifndef NEVADA_BLACKROCK_H
#define NEVADA_BLACKROCK_H

//------------------------------- Карта поселка

#define MVAR_Made_Car                    (0)
#define MVAR_BROCK_TREASURE_01           (1)
#define MVAR_BROCK_TREASURE_02           (2)
#define MVAR_BROCK_TREASURE_03           (3)
#define MVAR_BROCK_TREASURE_04           (4)
#define MVAR_BROCK_TREASURE_05           (5)
#define MVAR_BROCK_BOB_DEAD              (6)
#define MVAR_BROCK_RADIO_RAIDER_FLAG     (7)
#define MVAR_BROCK_UDZHIN_INVIS          (8)
#define MVAR_BROCK_QURIER_INFOFLAG       (9)
#define MVAR_BROCK_BRAHMIN_BODY          (10)
#define MVAR_GrvDescription_BlackRock    (11)
#define MVAR_BROCK_LIFE_CITIZEN          (12)
#define MVAR_BROCK_BOXX_FLAG             (13) // 0 - боя не было, 1 - бой начался, 2 - бой закончился победой ГГ, 3 - бой закончился поражением ГГ, 4 - бой закончился смертью Майка
#define MVAR_BROCK_MOGILA_INFO           (14)
#define MVAR_BROCK_LIFE_SMITH_DEAD       (15)
#define MVAR_BROCK_LIFE_PROSTITUTKA      (16)
#define MVAR_BROCK_SVIDANIE              (17)
#define MVAR_BROCK_LIFE_SLAVES           (18)
#define MVAR_BROCK_SLAVES_Osheinik       (19)
#define MVAR_BROCK_BRAHMIN_VERDICT       (20)
#define MVAR_BROCK_BOBNECRO_INFO         (21)

//------------------------------- Карта пещеры

#define MVAR_BRCAVE_Enemy_Raiders        (1)
#define MVAR_BRCAVE_Live_Raiders         (2)
#define MVAR_BRCAVE_Enemy_Caravan        (3)
#define MVAR_BRCAVE_Live_Caravan         (4)
#define MVAR_BRCAVE_Live_HeadCaravan     (5)
#define MVAR_BRCAVE_Final_Flag           (6)
#define MVAR_BRCAVE_PoisonRaider         (7)
#define MVAR_BRCAVE_CombatFlag           (8) // 0 - стычка караванщиков и рейдеров не активирована, 1 - активирована на карте выхода, 2 - активировано на карте пещеры
#define MVAR_BRCAVE_Password_Caravan     (9)

//------------------------------- Квестовые параметры

#define qROCK_PROSTIQST_non              (0) // квест еще не получен
#define qROCK_PROSTIQST_start            (1) // квест получен
#define qROCK_PROSTIQST_kill             (2) // убийство проститутки
#define qROCK_PROSTIQST_exile            (3) // изгнание проститутки из общины
#define qROCK_PROSTIQST_medic            (4) // квест окончен наилучшим образом - лечением проститутки

#define qROCK_SVIDANIE_BobDead           (-111) // Гробовщик Боб мертв
#define qROCK_SVIDANIE_non               (0) // миниквест не получен
#define qROCK_SVIDANIE_start             (1) // квест получен, но не решен
#define qROCK_SVIDANIE_next              (2) // известно отношение Боба к "невесте"
#define qROCK_SVIDANIE_next_next         (3) // Шлюха просит передать преглашение на свидание
#define qROCK_SVIDANIE_evil              (4) // квест решен оскорблением проституки в глазах гробовщика
#define qROCK_SVIDANIE_good              (5) // квест решен сводничеством гробовщика и проститутки
#define qROCK_SVIDANIE_goodEnd           (6) // окончание хорошего варианта - перемещение Жасмин к гробовщику

#endif // NEVADA_BLACKROCK_H
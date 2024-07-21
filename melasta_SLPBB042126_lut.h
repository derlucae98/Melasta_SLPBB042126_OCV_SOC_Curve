//SOC in % * 10, OCV in V with 100 µV resolution
static const uint16_t prvSocLookup[SOC_LOOKUP_SIZE][2] = {
{5,   32384}, {11,  33406}, {17,  34121},
{23,  34674}, {29,  35125}, {35,  35504},
{41,  35829}, {47,  36113}, {53,  36362},
{60,  36578}, {66,  36744}, {72,  36830},
{78,  36868}, {84,  36890}, {90,  36905},
{96,  36916}, {102, 36925}, {108, 36933},
{115, 36941}, {121, 36950}, {127, 36961},
{133, 36981}, {139, 37021}, {145, 37070},
{151, 37113}, {157, 37149}, {163, 37179},
{169, 37205}, {176, 37231}, {182, 37258},
{188, 37288}, {194, 37320}, {200, 37350},
{206, 37378}, {212, 37403}, {218, 37425},
{224, 37445}, {231, 37464}, {237, 37481},
{243, 37498}, {249, 37515}, {255, 37534},
{261, 37554}, {267, 37576}, {273, 37598},
{279, 37619}, {285, 37639}, {292, 37657},
{298, 37673}, {304, 37687}, {310, 37700},
{316, 37712}, {322, 37723}, {328, 37734},
{334, 37744}, {340, 37754}, {347, 37765},
{353, 37777}, {359, 37789}, {365, 37802},
{371, 37815}, {377, 37828}, {383, 37842},
{389, 37855}, {395, 37869}, {402, 37883},
{408, 37898}, {414, 37912}, {420, 37927},
{426, 37942}, {432, 37958}, {438, 37973},
{444, 37989}, {450, 38006}, {456, 38023},
{463, 38040}, {469, 38057}, {475, 38075},
{481, 38094}, {487, 38112}, {493, 38132},
{499, 38151}, {505, 38172}, {511, 38193},
{518, 38214}, {524, 38236}, {530, 38258},
{536, 38281}, {542, 38305}, {548, 38329},
{554, 38355}, {560, 38381}, {566, 38407},
{573, 38435}, {579, 38464}, {585, 38494},
{591, 38525}, {597, 38557}, {603, 38590},
{609, 38625}, {615, 38661}, {621, 38698},
{627, 38738}, {634, 38779}, {640, 38822},
{646, 38866}, {652, 38912}, {658, 38959},
{664, 39007}, {670, 39055}, {676, 39102},
{682, 39148}, {689, 39193}, {695, 39236},
{701, 39279}, {707, 39320}, {713, 39360},
{719, 39400}, {725, 39439}, {731, 39476},
{737, 39510}, {744, 39541}, {750, 39570},
{756, 39595}, {762, 39619}, {768, 39643},
{774, 39668}, {780, 39697}, {786, 39728},
{792, 39762}, {798, 39799}, {805, 39839},
{811, 39883}, {817, 39933}, {823, 39988},
{829, 40051}, {835, 40123}, {841, 40207},
{847, 40303}, {853, 40404}, {860, 40506},
{866, 40600}, {872, 40678}, {878, 40737},
{884, 40782}, {890, 40814}, {896, 40839},
{902, 40862}, {908, 40892}, {915, 40934},
{921, 40981}, {927, 41031}, {933, 41083},
{939, 41136}, {945, 41191}, {951, 41246},
{957, 41301}, {963, 41357}, {969, 41413},
{976, 41469}, {982, 41527}, {988, 41585},
{994, 41646}, {1000,41711}};

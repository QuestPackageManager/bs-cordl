#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Enums/TimezoneIDEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimezoneIDEnum)
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Enums {
struct TimezoneIDEnum;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum);
DEFINE_IL2CPP_CLASS(::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum, "BeatSaber.Main.GraphQL.Enums", "TimezoneIDEnum");
// Dependencies
namespace BeatSaber::Main::GraphQL::Enums {
// Is value type: true
// CS Name: BeatSaber.Main.GraphQL.Enums.TimezoneIDEnum
struct CORDL_TYPE TimezoneIDEnum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimezoneIDEnum_Unwrapped
  enum struct __TimezoneIDEnum_Unwrapped : int32_t {
    __E___UnknownValue = static_cast<int32_t>(0x0),
    __E_AFRICA_ABIDJAN = static_cast<int32_t>(0x1),
    __E_AFRICA_ACCRA = static_cast<int32_t>(0x2),
    __E_AFRICA_ADDIS_ABABA = static_cast<int32_t>(0x3),
    __E_AFRICA_ALGIERS = static_cast<int32_t>(0x4),
    __E_AFRICA_ASMARA = static_cast<int32_t>(0x5),
    __E_AFRICA_ASMERA = static_cast<int32_t>(0x6),
    __E_AFRICA_BAMAKO = static_cast<int32_t>(0x7),
    __E_AFRICA_BANGUI = static_cast<int32_t>(0x8),
    __E_AFRICA_BANJUL = static_cast<int32_t>(0x9),
    __E_AFRICA_BISSAU = static_cast<int32_t>(0xa),
    __E_AFRICA_BLANTYRE = static_cast<int32_t>(0xb),
    __E_AFRICA_BRAZZAVILLE = static_cast<int32_t>(0xc),
    __E_AFRICA_BUJUMBURA = static_cast<int32_t>(0xd),
    __E_AFRICA_CAIRO = static_cast<int32_t>(0xe),
    __E_AFRICA_CASABLANCA = static_cast<int32_t>(0xf),
    __E_AFRICA_CEUTA = static_cast<int32_t>(0x10),
    __E_AFRICA_CONAKRY = static_cast<int32_t>(0x11),
    __E_AFRICA_DAKAR = static_cast<int32_t>(0x12),
    __E_AFRICA_DAR_ES_SALAAM = static_cast<int32_t>(0x13),
    __E_AFRICA_DJIBOUTI = static_cast<int32_t>(0x14),
    __E_AFRICA_DOUALA = static_cast<int32_t>(0x15),
    __E_AFRICA_EL_AAIUN = static_cast<int32_t>(0x16),
    __E_AFRICA_FREETOWN = static_cast<int32_t>(0x17),
    __E_AFRICA_GABORONE = static_cast<int32_t>(0x18),
    __E_AFRICA_HARARE = static_cast<int32_t>(0x19),
    __E_AFRICA_JOHANNESBURG = static_cast<int32_t>(0x1a),
    __E_AFRICA_JUBA = static_cast<int32_t>(0x1b),
    __E_AFRICA_KAMPALA = static_cast<int32_t>(0x1c),
    __E_AFRICA_KHARTOUM = static_cast<int32_t>(0x1d),
    __E_AFRICA_KIGALI = static_cast<int32_t>(0x1e),
    __E_AFRICA_KINSHASA = static_cast<int32_t>(0x1f),
    __E_AFRICA_LAGOS = static_cast<int32_t>(0x20),
    __E_AFRICA_LIBREVILLE = static_cast<int32_t>(0x21),
    __E_AFRICA_LOME = static_cast<int32_t>(0x22),
    __E_AFRICA_LUANDA = static_cast<int32_t>(0x23),
    __E_AFRICA_LUBUMBASHI = static_cast<int32_t>(0x24),
    __E_AFRICA_LUSAKA = static_cast<int32_t>(0x25),
    __E_AFRICA_MALABO = static_cast<int32_t>(0x26),
    __E_AFRICA_MAPUTO = static_cast<int32_t>(0x27),
    __E_AFRICA_MASERU = static_cast<int32_t>(0x28),
    __E_AFRICA_MBABANE = static_cast<int32_t>(0x29),
    __E_AFRICA_MOGADISHU = static_cast<int32_t>(0x2a),
    __E_AFRICA_MONROVIA = static_cast<int32_t>(0x2b),
    __E_AFRICA_NAIROBI = static_cast<int32_t>(0x2c),
    __E_AFRICA_NDJAMENA = static_cast<int32_t>(0x2d),
    __E_AFRICA_NIAMEY = static_cast<int32_t>(0x2e),
    __E_AFRICA_NOUAKCHOTT = static_cast<int32_t>(0x2f),
    __E_AFRICA_OUAGADOUGOU = static_cast<int32_t>(0x30),
    __E_AFRICA_PORTO_NOVO = static_cast<int32_t>(0x31),
    __E_AFRICA_SAO_TOME = static_cast<int32_t>(0x32),
    __E_AFRICA_TIMBUKTU = static_cast<int32_t>(0x33),
    __E_AFRICA_TRIPOLI = static_cast<int32_t>(0x34),
    __E_AFRICA_TUNIS = static_cast<int32_t>(0x35),
    __E_AFRICA_WINDHOEK = static_cast<int32_t>(0x36),
    __E_AMERICA_ADAK = static_cast<int32_t>(0x37),
    __E_AMERICA_ANCHORAGE = static_cast<int32_t>(0x38),
    __E_AMERICA_ANGUILLA = static_cast<int32_t>(0x39),
    __E_AMERICA_ANTIGUA = static_cast<int32_t>(0x3a),
    __E_AMERICA_ARAGUAINA = static_cast<int32_t>(0x3b),
    __E_AMERICA_ARGENTINA_BUENOS_AIRES = static_cast<int32_t>(0x3c),
    __E_AMERICA_ARGENTINA_CATAMARCA = static_cast<int32_t>(0x3d),
    __E_AMERICA_ARGENTINA_COMODRIVADAVIA = static_cast<int32_t>(0x3e),
    __E_AMERICA_ARGENTINA_CORDOBA = static_cast<int32_t>(0x3f),
    __E_AMERICA_ARGENTINA_JUJUY = static_cast<int32_t>(0x40),
    __E_AMERICA_ARGENTINA_LA_RIOJA = static_cast<int32_t>(0x41),
    __E_AMERICA_ARGENTINA_MENDOZA = static_cast<int32_t>(0x42),
    __E_AMERICA_ARGENTINA_RIO_GALLEGOS = static_cast<int32_t>(0x43),
    __E_AMERICA_ARGENTINA_SALTA = static_cast<int32_t>(0x44),
    __E_AMERICA_ARGENTINA_SAN_JUAN = static_cast<int32_t>(0x45),
    __E_AMERICA_ARGENTINA_SAN_LUIS = static_cast<int32_t>(0x46),
    __E_AMERICA_ARGENTINA_TUCUMAN = static_cast<int32_t>(0x47),
    __E_AMERICA_ARGENTINA_USHUAIA = static_cast<int32_t>(0x48),
    __E_AMERICA_ARUBA = static_cast<int32_t>(0x49),
    __E_AMERICA_ASUNCION = static_cast<int32_t>(0x4a),
    __E_AMERICA_ATIKOKAN = static_cast<int32_t>(0x4b),
    __E_AMERICA_ATKA = static_cast<int32_t>(0x4c),
    __E_AMERICA_BAHIA = static_cast<int32_t>(0x4d),
    __E_AMERICA_BAHIA_BANDERAS = static_cast<int32_t>(0x4e),
    __E_AMERICA_BARBADOS = static_cast<int32_t>(0x4f),
    __E_AMERICA_BELEM = static_cast<int32_t>(0x50),
    __E_AMERICA_BELIZE = static_cast<int32_t>(0x51),
    __E_AMERICA_BLANC_SABLON = static_cast<int32_t>(0x52),
    __E_AMERICA_BOA_VISTA = static_cast<int32_t>(0x53),
    __E_AMERICA_BOGOTA = static_cast<int32_t>(0x54),
    __E_AMERICA_BOISE = static_cast<int32_t>(0x55),
    __E_AMERICA_BUENOS_AIRES = static_cast<int32_t>(0x56),
    __E_AMERICA_CAMBRIDGE_BAY = static_cast<int32_t>(0x57),
    __E_AMERICA_CAMPO_GRANDE = static_cast<int32_t>(0x58),
    __E_AMERICA_CANCUN = static_cast<int32_t>(0x59),
    __E_AMERICA_CARACAS = static_cast<int32_t>(0x5a),
    __E_AMERICA_CATAMARCA = static_cast<int32_t>(0x5b),
    __E_AMERICA_CAYENNE = static_cast<int32_t>(0x5c),
    __E_AMERICA_CAYMAN = static_cast<int32_t>(0x5d),
    __E_AMERICA_CHICAGO = static_cast<int32_t>(0x5e),
    __E_AMERICA_CHIHUAHUA = static_cast<int32_t>(0x5f),
    __E_AMERICA_CIUDAD_JUAREZ = static_cast<int32_t>(0x60),
    __E_AMERICA_CORAL_HARBOUR = static_cast<int32_t>(0x61),
    __E_AMERICA_CORDOBA = static_cast<int32_t>(0x62),
    __E_AMERICA_COSTA_RICA = static_cast<int32_t>(0x63),
    __E_AMERICA_CRESTON = static_cast<int32_t>(0x64),
    __E_AMERICA_CUIABA = static_cast<int32_t>(0x65),
    __E_AMERICA_CURACAO = static_cast<int32_t>(0x66),
    __E_AMERICA_DANMARKSHAVN = static_cast<int32_t>(0x67),
    __E_AMERICA_DAWSON = static_cast<int32_t>(0x68),
    __E_AMERICA_DAWSON_CREEK = static_cast<int32_t>(0x69),
    __E_AMERICA_DENVER = static_cast<int32_t>(0x6a),
    __E_AMERICA_DETROIT = static_cast<int32_t>(0x6b),
    __E_AMERICA_DOMINICA = static_cast<int32_t>(0x6c),
    __E_AMERICA_EDMONTON = static_cast<int32_t>(0x6d),
    __E_AMERICA_EIRUNEPE = static_cast<int32_t>(0x6e),
    __E_AMERICA_EL_SALVADOR = static_cast<int32_t>(0x6f),
    __E_AMERICA_ENSENADA = static_cast<int32_t>(0x70),
    __E_AMERICA_FORT_NELSON = static_cast<int32_t>(0x71),
    __E_AMERICA_FORT_WAYNE = static_cast<int32_t>(0x72),
    __E_AMERICA_FORTALEZA = static_cast<int32_t>(0x73),
    __E_AMERICA_GLACE_BAY = static_cast<int32_t>(0x74),
    __E_AMERICA_GODTHAB = static_cast<int32_t>(0x75),
    __E_AMERICA_GOOSE_BAY = static_cast<int32_t>(0x76),
    __E_AMERICA_GRAND_TURK = static_cast<int32_t>(0x77),
    __E_AMERICA_GRENADA = static_cast<int32_t>(0x78),
    __E_AMERICA_GUADELOUPE = static_cast<int32_t>(0x79),
    __E_AMERICA_GUATEMALA = static_cast<int32_t>(0x7a),
    __E_AMERICA_GUAYAQUIL = static_cast<int32_t>(0x7b),
    __E_AMERICA_GUYANA = static_cast<int32_t>(0x7c),
    __E_AMERICA_HALIFAX = static_cast<int32_t>(0x7d),
    __E_AMERICA_HAVANA = static_cast<int32_t>(0x7e),
    __E_AMERICA_HERMOSILLO = static_cast<int32_t>(0x7f),
    __E_AMERICA_INDIANA_INDIANAPOLIS = static_cast<int32_t>(0x80),
    __E_AMERICA_INDIANA_KNOX = static_cast<int32_t>(0x81),
    __E_AMERICA_INDIANA_MARENGO = static_cast<int32_t>(0x82),
    __E_AMERICA_INDIANA_PETERSBURG = static_cast<int32_t>(0x83),
    __E_AMERICA_INDIANA_TELL_CITY = static_cast<int32_t>(0x84),
    __E_AMERICA_INDIANA_VEVAY = static_cast<int32_t>(0x85),
    __E_AMERICA_INDIANA_VINCENNES = static_cast<int32_t>(0x86),
    __E_AMERICA_INDIANA_WINAMAC = static_cast<int32_t>(0x87),
    __E_AMERICA_INDIANAPOLIS = static_cast<int32_t>(0x88),
    __E_AMERICA_INUVIK = static_cast<int32_t>(0x89),
    __E_AMERICA_IQALUIT = static_cast<int32_t>(0x8a),
    __E_AMERICA_JAMAICA = static_cast<int32_t>(0x8b),
    __E_AMERICA_JUJUY = static_cast<int32_t>(0x8c),
    __E_AMERICA_JUNEAU = static_cast<int32_t>(0x8d),
    __E_AMERICA_KENTUCKY_LOUISVILLE = static_cast<int32_t>(0x8e),
    __E_AMERICA_KENTUCKY_MONTICELLO = static_cast<int32_t>(0x8f),
    __E_AMERICA_KNOX_IN = static_cast<int32_t>(0x90),
    __E_AMERICA_KRALENDIJK = static_cast<int32_t>(0x91),
    __E_AMERICA_LA_PAZ = static_cast<int32_t>(0x92),
    __E_AMERICA_LIMA = static_cast<int32_t>(0x93),
    __E_AMERICA_LOS_ANGELES = static_cast<int32_t>(0x94),
    __E_AMERICA_LOUISVILLE = static_cast<int32_t>(0x95),
    __E_AMERICA_LOWER_PRINCES = static_cast<int32_t>(0x96),
    __E_AMERICA_MACEIO = static_cast<int32_t>(0x97),
    __E_AMERICA_MANAGUA = static_cast<int32_t>(0x98),
    __E_AMERICA_MANAUS = static_cast<int32_t>(0x99),
    __E_AMERICA_MARIGOT = static_cast<int32_t>(0x9a),
    __E_AMERICA_MARTINIQUE = static_cast<int32_t>(0x9b),
    __E_AMERICA_MATAMOROS = static_cast<int32_t>(0x9c),
    __E_AMERICA_MAZATLAN = static_cast<int32_t>(0x9d),
    __E_AMERICA_MENDOZA = static_cast<int32_t>(0x9e),
    __E_AMERICA_MENOMINEE = static_cast<int32_t>(0x9f),
    __E_AMERICA_MERIDA = static_cast<int32_t>(0xa0),
    __E_AMERICA_METLAKATLA = static_cast<int32_t>(0xa1),
    __E_AMERICA_MEXICO_CITY = static_cast<int32_t>(0xa2),
    __E_AMERICA_MIQUELON = static_cast<int32_t>(0xa3),
    __E_AMERICA_MONCTON = static_cast<int32_t>(0xa4),
    __E_AMERICA_MONTERREY = static_cast<int32_t>(0xa5),
    __E_AMERICA_MONTEVIDEO = static_cast<int32_t>(0xa6),
    __E_AMERICA_MONTREAL = static_cast<int32_t>(0xa7),
    __E_AMERICA_MONTSERRAT = static_cast<int32_t>(0xa8),
    __E_AMERICA_NASSAU = static_cast<int32_t>(0xa9),
    __E_AMERICA_NEW_YORK = static_cast<int32_t>(0xaa),
    __E_AMERICA_NIPIGON = static_cast<int32_t>(0xab),
    __E_AMERICA_NOME = static_cast<int32_t>(0xac),
    __E_AMERICA_NORONHA = static_cast<int32_t>(0xad),
    __E_AMERICA_NORTH_DAKOTA_BEULAH = static_cast<int32_t>(0xae),
    __E_AMERICA_NORTH_DAKOTA_CENTER = static_cast<int32_t>(0xaf),
    __E_AMERICA_NORTH_DAKOTA_NEW_SALEM = static_cast<int32_t>(0xb0),
    __E_AMERICA_NUUK = static_cast<int32_t>(0xb1),
    __E_AMERICA_OJINAGA = static_cast<int32_t>(0xb2),
    __E_AMERICA_PANAMA = static_cast<int32_t>(0xb3),
    __E_AMERICA_PANGNIRTUNG = static_cast<int32_t>(0xb4),
    __E_AMERICA_PARAMARIBO = static_cast<int32_t>(0xb5),
    __E_AMERICA_PHOENIX = static_cast<int32_t>(0xb6),
    __E_AMERICA_PORT_AU_PRINCE = static_cast<int32_t>(0xb7),
    __E_AMERICA_PORT_OF_SPAIN = static_cast<int32_t>(0xb8),
    __E_AMERICA_PORTO_ACRE = static_cast<int32_t>(0xb9),
    __E_AMERICA_PORTO_VELHO = static_cast<int32_t>(0xba),
    __E_AMERICA_PUERTO_RICO = static_cast<int32_t>(0xbb),
    __E_AMERICA_PUNTA_ARENAS = static_cast<int32_t>(0xbc),
    __E_AMERICA_RAINY_RIVER = static_cast<int32_t>(0xbd),
    __E_AMERICA_RANKIN_INLET = static_cast<int32_t>(0xbe),
    __E_AMERICA_RECIFE = static_cast<int32_t>(0xbf),
    __E_AMERICA_REGINA = static_cast<int32_t>(0xc0),
    __E_AMERICA_RESOLUTE = static_cast<int32_t>(0xc1),
    __E_AMERICA_RIO_BRANCO = static_cast<int32_t>(0xc2),
    __E_AMERICA_ROSARIO = static_cast<int32_t>(0xc3),
    __E_AMERICA_SANTA_ISABEL = static_cast<int32_t>(0xc4),
    __E_AMERICA_SANTAREM = static_cast<int32_t>(0xc5),
    __E_AMERICA_SANTIAGO = static_cast<int32_t>(0xc6),
    __E_AMERICA_SANTO_DOMINGO = static_cast<int32_t>(0xc7),
    __E_AMERICA_SAO_PAULO = static_cast<int32_t>(0xc8),
    __E_AMERICA_SCORESBYSUND = static_cast<int32_t>(0xc9),
    __E_AMERICA_SHIPROCK = static_cast<int32_t>(0xca),
    __E_AMERICA_SITKA = static_cast<int32_t>(0xcb),
    __E_AMERICA_ST_BARTHELEMY = static_cast<int32_t>(0xcc),
    __E_AMERICA_ST_JOHNS = static_cast<int32_t>(0xcd),
    __E_AMERICA_ST_KITTS = static_cast<int32_t>(0xce),
    __E_AMERICA_ST_LUCIA = static_cast<int32_t>(0xcf),
    __E_AMERICA_ST_THOMAS = static_cast<int32_t>(0xd0),
    __E_AMERICA_ST_VINCENT = static_cast<int32_t>(0xd1),
    __E_AMERICA_SWIFT_CURRENT = static_cast<int32_t>(0xd2),
    __E_AMERICA_TEGUCIGALPA = static_cast<int32_t>(0xd3),
    __E_AMERICA_THULE = static_cast<int32_t>(0xd4),
    __E_AMERICA_THUNDER_BAY = static_cast<int32_t>(0xd5),
    __E_AMERICA_TIJUANA = static_cast<int32_t>(0xd6),
    __E_AMERICA_TORONTO = static_cast<int32_t>(0xd7),
    __E_AMERICA_TORTOLA = static_cast<int32_t>(0xd8),
    __E_AMERICA_VANCOUVER = static_cast<int32_t>(0xd9),
    __E_AMERICA_VIRGIN = static_cast<int32_t>(0xda),
    __E_AMERICA_WHITEHORSE = static_cast<int32_t>(0xdb),
    __E_AMERICA_WINNIPEG = static_cast<int32_t>(0xdc),
    __E_AMERICA_YAKUTAT = static_cast<int32_t>(0xdd),
    __E_AMERICA_YELLOWKNIFE = static_cast<int32_t>(0xde),
    __E_ANTARCTICA_CASEY = static_cast<int32_t>(0xdf),
    __E_ANTARCTICA_DAVIS = static_cast<int32_t>(0xe0),
    __E_ANTARCTICA_DUMONTDURVILLE = static_cast<int32_t>(0xe1),
    __E_ANTARCTICA_MACQUARIE = static_cast<int32_t>(0xe2),
    __E_ANTARCTICA_MAWSON = static_cast<int32_t>(0xe3),
    __E_ANTARCTICA_MCMURDO = static_cast<int32_t>(0xe4),
    __E_ANTARCTICA_PALMER = static_cast<int32_t>(0xe5),
    __E_ANTARCTICA_ROTHERA = static_cast<int32_t>(0xe6),
    __E_ANTARCTICA_SOUTH_POLE = static_cast<int32_t>(0xe7),
    __E_ANTARCTICA_SYOWA = static_cast<int32_t>(0xe8),
    __E_ANTARCTICA_TROLL = static_cast<int32_t>(0xe9),
    __E_ANTARCTICA_VOSTOK = static_cast<int32_t>(0xea),
    __E_ARCTIC_LONGYEARBYEN = static_cast<int32_t>(0xeb),
    __E_ASIA_ADEN = static_cast<int32_t>(0xec),
    __E_ASIA_ALMATY = static_cast<int32_t>(0xed),
    __E_ASIA_AMMAN = static_cast<int32_t>(0xee),
    __E_ASIA_ANADYR = static_cast<int32_t>(0xef),
    __E_ASIA_AQTAU = static_cast<int32_t>(0xf0),
    __E_ASIA_AQTOBE = static_cast<int32_t>(0xf1),
    __E_ASIA_ASHGABAT = static_cast<int32_t>(0xf2),
    __E_ASIA_ASHKHABAD = static_cast<int32_t>(0xf3),
    __E_ASIA_ATYRAU = static_cast<int32_t>(0xf4),
    __E_ASIA_BAGHDAD = static_cast<int32_t>(0xf5),
    __E_ASIA_BAHRAIN = static_cast<int32_t>(0xf6),
    __E_ASIA_BAKU = static_cast<int32_t>(0xf7),
    __E_ASIA_BANGKOK = static_cast<int32_t>(0xf8),
    __E_ASIA_BARNAUL = static_cast<int32_t>(0xf9),
    __E_ASIA_BEIRUT = static_cast<int32_t>(0xfa),
    __E_ASIA_BISHKEK = static_cast<int32_t>(0xfb),
    __E_ASIA_BRUNEI = static_cast<int32_t>(0xfc),
    __E_ASIA_CALCUTTA = static_cast<int32_t>(0xfd),
    __E_ASIA_CHITA = static_cast<int32_t>(0xfe),
    __E_ASIA_CHOIBALSAN = static_cast<int32_t>(0xff),
    __E_ASIA_CHONGQING = static_cast<int32_t>(0x100),
    __E_ASIA_CHUNGKING = static_cast<int32_t>(0x101),
    __E_ASIA_COLOMBO = static_cast<int32_t>(0x102),
    __E_ASIA_DACCA = static_cast<int32_t>(0x103),
    __E_ASIA_DAMASCUS = static_cast<int32_t>(0x104),
    __E_ASIA_DHAKA = static_cast<int32_t>(0x105),
    __E_ASIA_DILI = static_cast<int32_t>(0x106),
    __E_ASIA_DUBAI = static_cast<int32_t>(0x107),
    __E_ASIA_DUSHANBE = static_cast<int32_t>(0x108),
    __E_ASIA_FAMAGUSTA = static_cast<int32_t>(0x109),
    __E_ASIA_GAZA = static_cast<int32_t>(0x10a),
    __E_ASIA_HARBIN = static_cast<int32_t>(0x10b),
    __E_ASIA_HEBRON = static_cast<int32_t>(0x10c),
    __E_ASIA_HO_CHI_MINH = static_cast<int32_t>(0x10d),
    __E_ASIA_HONG_KONG = static_cast<int32_t>(0x10e),
    __E_ASIA_HOVD = static_cast<int32_t>(0x10f),
    __E_ASIA_IRKUTSK = static_cast<int32_t>(0x110),
    __E_ASIA_ISTANBUL = static_cast<int32_t>(0x111),
    __E_ASIA_JAKARTA = static_cast<int32_t>(0x112),
    __E_ASIA_JAYAPURA = static_cast<int32_t>(0x113),
    __E_ASIA_JERUSALEM = static_cast<int32_t>(0x114),
    __E_ASIA_KABUL = static_cast<int32_t>(0x115),
    __E_ASIA_KAMCHATKA = static_cast<int32_t>(0x116),
    __E_ASIA_KARACHI = static_cast<int32_t>(0x117),
    __E_ASIA_KASHGAR = static_cast<int32_t>(0x118),
    __E_ASIA_KATHMANDU = static_cast<int32_t>(0x119),
    __E_ASIA_KATMANDU = static_cast<int32_t>(0x11a),
    __E_ASIA_KHANDYGA = static_cast<int32_t>(0x11b),
    __E_ASIA_KOLKATA = static_cast<int32_t>(0x11c),
    __E_ASIA_KRASNOYARSK = static_cast<int32_t>(0x11d),
    __E_ASIA_KUALA_LUMPUR = static_cast<int32_t>(0x11e),
    __E_ASIA_KUCHING = static_cast<int32_t>(0x11f),
    __E_ASIA_KUWAIT = static_cast<int32_t>(0x120),
    __E_ASIA_MACAO = static_cast<int32_t>(0x121),
    __E_ASIA_MACAU = static_cast<int32_t>(0x122),
    __E_ASIA_MAGADAN = static_cast<int32_t>(0x123),
    __E_ASIA_MAKASSAR = static_cast<int32_t>(0x124),
    __E_ASIA_MANILA = static_cast<int32_t>(0x125),
    __E_ASIA_MUSCAT = static_cast<int32_t>(0x126),
    __E_ASIA_NICOSIA = static_cast<int32_t>(0x127),
    __E_ASIA_NOVOKUZNETSK = static_cast<int32_t>(0x128),
    __E_ASIA_NOVOSIBIRSK = static_cast<int32_t>(0x129),
    __E_ASIA_OMSK = static_cast<int32_t>(0x12a),
    __E_ASIA_ORAL = static_cast<int32_t>(0x12b),
    __E_ASIA_PHNOM_PENH = static_cast<int32_t>(0x12c),
    __E_ASIA_PONTIANAK = static_cast<int32_t>(0x12d),
    __E_ASIA_PYONGYANG = static_cast<int32_t>(0x12e),
    __E_ASIA_QATAR = static_cast<int32_t>(0x12f),
    __E_ASIA_QOSTANAY = static_cast<int32_t>(0x130),
    __E_ASIA_QYZYLORDA = static_cast<int32_t>(0x131),
    __E_ASIA_RANGOON = static_cast<int32_t>(0x132),
    __E_ASIA_RIYADH = static_cast<int32_t>(0x133),
    __E_ASIA_SAIGON = static_cast<int32_t>(0x134),
    __E_ASIA_SAKHALIN = static_cast<int32_t>(0x135),
    __E_ASIA_SAMARKAND = static_cast<int32_t>(0x136),
    __E_ASIA_SEOUL = static_cast<int32_t>(0x137),
    __E_ASIA_SHANGHAI = static_cast<int32_t>(0x138),
    __E_ASIA_SINGAPORE = static_cast<int32_t>(0x139),
    __E_ASIA_SREDNEKOLYMSK = static_cast<int32_t>(0x13a),
    __E_ASIA_TAIPEI = static_cast<int32_t>(0x13b),
    __E_ASIA_TASHKENT = static_cast<int32_t>(0x13c),
    __E_ASIA_TBILISI = static_cast<int32_t>(0x13d),
    __E_ASIA_TEHRAN = static_cast<int32_t>(0x13e),
    __E_ASIA_TEL_AVIV = static_cast<int32_t>(0x13f),
    __E_ASIA_THIMBU = static_cast<int32_t>(0x140),
    __E_ASIA_THIMPHU = static_cast<int32_t>(0x141),
    __E_ASIA_TOKYO = static_cast<int32_t>(0x142),
    __E_ASIA_TOMSK = static_cast<int32_t>(0x143),
    __E_ASIA_UJUNG_PANDANG = static_cast<int32_t>(0x144),
    __E_ASIA_ULAANBAATAR = static_cast<int32_t>(0x145),
    __E_ASIA_ULAN_BATOR = static_cast<int32_t>(0x146),
    __E_ASIA_URUMQI = static_cast<int32_t>(0x147),
    __E_ASIA_UST_NERA = static_cast<int32_t>(0x148),
    __E_ASIA_VIENTIANE = static_cast<int32_t>(0x149),
    __E_ASIA_VLADIVOSTOK = static_cast<int32_t>(0x14a),
    __E_ASIA_YAKUTSK = static_cast<int32_t>(0x14b),
    __E_ASIA_YANGON = static_cast<int32_t>(0x14c),
    __E_ASIA_YEKATERINBURG = static_cast<int32_t>(0x14d),
    __E_ASIA_YEREVAN = static_cast<int32_t>(0x14e),
    __E_ATLANTIC_AZORES = static_cast<int32_t>(0x14f),
    __E_ATLANTIC_BERMUDA = static_cast<int32_t>(0x150),
    __E_ATLANTIC_CANARY = static_cast<int32_t>(0x151),
    __E_ATLANTIC_CAPE_VERDE = static_cast<int32_t>(0x152),
    __E_ATLANTIC_FAEROE = static_cast<int32_t>(0x153),
    __E_ATLANTIC_FAROE = static_cast<int32_t>(0x154),
    __E_ATLANTIC_JAN_MAYEN = static_cast<int32_t>(0x155),
    __E_ATLANTIC_MADEIRA = static_cast<int32_t>(0x156),
    __E_ATLANTIC_REYKJAVIK = static_cast<int32_t>(0x157),
    __E_ATLANTIC_SOUTH_GEORGIA = static_cast<int32_t>(0x158),
    __E_ATLANTIC_ST_HELENA = static_cast<int32_t>(0x159),
    __E_ATLANTIC_STANLEY = static_cast<int32_t>(0x15a),
    __E_AUSTRALIA_ACT = static_cast<int32_t>(0x15b),
    __E_AUSTRALIA_ADELAIDE = static_cast<int32_t>(0x15c),
    __E_AUSTRALIA_BRISBANE = static_cast<int32_t>(0x15d),
    __E_AUSTRALIA_BROKEN_HILL = static_cast<int32_t>(0x15e),
    __E_AUSTRALIA_CANBERRA = static_cast<int32_t>(0x15f),
    __E_AUSTRALIA_CURRIE = static_cast<int32_t>(0x160),
    __E_AUSTRALIA_DARWIN = static_cast<int32_t>(0x161),
    __E_AUSTRALIA_EUCLA = static_cast<int32_t>(0x162),
    __E_AUSTRALIA_HOBART = static_cast<int32_t>(0x163),
    __E_AUSTRALIA_LHI = static_cast<int32_t>(0x164),
    __E_AUSTRALIA_LINDEMAN = static_cast<int32_t>(0x165),
    __E_AUSTRALIA_LORD_HOWE = static_cast<int32_t>(0x166),
    __E_AUSTRALIA_MELBOURNE = static_cast<int32_t>(0x167),
    __E_AUSTRALIA_NORTH = static_cast<int32_t>(0x168),
    __E_AUSTRALIA_NSW = static_cast<int32_t>(0x169),
    __E_AUSTRALIA_PERTH = static_cast<int32_t>(0x16a),
    __E_AUSTRALIA_QUEENSLAND = static_cast<int32_t>(0x16b),
    __E_AUSTRALIA_SOUTH = static_cast<int32_t>(0x16c),
    __E_AUSTRALIA_SYDNEY = static_cast<int32_t>(0x16d),
    __E_AUSTRALIA_TASMANIA = static_cast<int32_t>(0x16e),
    __E_AUSTRALIA_VICTORIA = static_cast<int32_t>(0x16f),
    __E_AUSTRALIA_WEST = static_cast<int32_t>(0x170),
    __E_AUSTRALIA_YANCOWINNA = static_cast<int32_t>(0x171),
    __E_BRAZIL_ACRE = static_cast<int32_t>(0x172),
    __E_BRAZIL_DENORONHA = static_cast<int32_t>(0x173),
    __E_BRAZIL_EAST = static_cast<int32_t>(0x174),
    __E_BRAZIL_WEST = static_cast<int32_t>(0x175),
    __E_CANADA_ATLANTIC = static_cast<int32_t>(0x176),
    __E_CANADA_CENTRAL = static_cast<int32_t>(0x177),
    __E_CANADA_EASTERN = static_cast<int32_t>(0x178),
    __E_CANADA_MOUNTAIN = static_cast<int32_t>(0x179),
    __E_CANADA_NEWFOUNDLAND = static_cast<int32_t>(0x17a),
    __E_CANADA_PACIFIC = static_cast<int32_t>(0x17b),
    __E_CANADA_SASKATCHEWAN = static_cast<int32_t>(0x17c),
    __E_CANADA_YUKON = static_cast<int32_t>(0x17d),
    __E_CET = static_cast<int32_t>(0x17e),
    __E_CHILE_CONTINENTAL = static_cast<int32_t>(0x17f),
    __E_CHILE_EASTERISLAND = static_cast<int32_t>(0x180),
    __E_CST6CDT = static_cast<int32_t>(0x181),
    __E_CUBA = static_cast<int32_t>(0x182),
    __E_EET = static_cast<int32_t>(0x183),
    __E_EGYPT = static_cast<int32_t>(0x184),
    __E_EIRE = static_cast<int32_t>(0x185),
    __E_EST = static_cast<int32_t>(0x186),
    __E_EST5EDT = static_cast<int32_t>(0x187),
    __E_ETC_GMT = static_cast<int32_t>(0x188),
    __E_ETC_GMT_M0 = static_cast<int32_t>(0x189),
    __E_ETC_GMT_M1 = static_cast<int32_t>(0x18a),
    __E_ETC_GMT_M10 = static_cast<int32_t>(0x18b),
    __E_ETC_GMT_M11 = static_cast<int32_t>(0x18c),
    __E_ETC_GMT_M12 = static_cast<int32_t>(0x18d),
    __E_ETC_GMT_M13 = static_cast<int32_t>(0x18e),
    __E_ETC_GMT_M14 = static_cast<int32_t>(0x18f),
    __E_ETC_GMT_M2 = static_cast<int32_t>(0x190),
    __E_ETC_GMT_M3 = static_cast<int32_t>(0x191),
    __E_ETC_GMT_M4 = static_cast<int32_t>(0x192),
    __E_ETC_GMT_M5 = static_cast<int32_t>(0x193),
    __E_ETC_GMT_M6 = static_cast<int32_t>(0x194),
    __E_ETC_GMT_M7 = static_cast<int32_t>(0x195),
    __E_ETC_GMT_M8 = static_cast<int32_t>(0x196),
    __E_ETC_GMT_M9 = static_cast<int32_t>(0x197),
    __E_ETC_GMT_P0 = static_cast<int32_t>(0x198),
    __E_ETC_GMT_P1 = static_cast<int32_t>(0x199),
    __E_ETC_GMT_P10 = static_cast<int32_t>(0x19a),
    __E_ETC_GMT_P11 = static_cast<int32_t>(0x19b),
    __E_ETC_GMT_P12 = static_cast<int32_t>(0x19c),
    __E_ETC_GMT_P2 = static_cast<int32_t>(0x19d),
    __E_ETC_GMT_P3 = static_cast<int32_t>(0x19e),
    __E_ETC_GMT_P4 = static_cast<int32_t>(0x19f),
    __E_ETC_GMT_P5 = static_cast<int32_t>(0x1a0),
    __E_ETC_GMT_P6 = static_cast<int32_t>(0x1a1),
    __E_ETC_GMT_P7 = static_cast<int32_t>(0x1a2),
    __E_ETC_GMT_P8 = static_cast<int32_t>(0x1a3),
    __E_ETC_GMT_P9 = static_cast<int32_t>(0x1a4),
    __E_ETC_GMT0 = static_cast<int32_t>(0x1a5),
    __E_ETC_GREENWICH = static_cast<int32_t>(0x1a6),
    __E_ETC_UCT = static_cast<int32_t>(0x1a7),
    __E_ETC_UNIVERSAL = static_cast<int32_t>(0x1a8),
    __E_ETC_UTC = static_cast<int32_t>(0x1a9),
    __E_ETC_ZULU = static_cast<int32_t>(0x1aa),
    __E_EUROPE_AMSTERDAM = static_cast<int32_t>(0x1ab),
    __E_EUROPE_ANDORRA = static_cast<int32_t>(0x1ac),
    __E_EUROPE_ASTRAKHAN = static_cast<int32_t>(0x1ad),
    __E_EUROPE_ATHENS = static_cast<int32_t>(0x1ae),
    __E_EUROPE_BELFAST = static_cast<int32_t>(0x1af),
    __E_EUROPE_BELGRADE = static_cast<int32_t>(0x1b0),
    __E_EUROPE_BERLIN = static_cast<int32_t>(0x1b1),
    __E_EUROPE_BRATISLAVA = static_cast<int32_t>(0x1b2),
    __E_EUROPE_BRUSSELS = static_cast<int32_t>(0x1b3),
    __E_EUROPE_BUCHAREST = static_cast<int32_t>(0x1b4),
    __E_EUROPE_BUDAPEST = static_cast<int32_t>(0x1b5),
    __E_EUROPE_BUSINGEN = static_cast<int32_t>(0x1b6),
    __E_EUROPE_CHISINAU = static_cast<int32_t>(0x1b7),
    __E_EUROPE_COPENHAGEN = static_cast<int32_t>(0x1b8),
    __E_EUROPE_DUBLIN = static_cast<int32_t>(0x1b9),
    __E_EUROPE_GIBRALTAR = static_cast<int32_t>(0x1ba),
    __E_EUROPE_GUERNSEY = static_cast<int32_t>(0x1bb),
    __E_EUROPE_HELSINKI = static_cast<int32_t>(0x1bc),
    __E_EUROPE_ISLE_OF_MAN = static_cast<int32_t>(0x1bd),
    __E_EUROPE_ISTANBUL = static_cast<int32_t>(0x1be),
    __E_EUROPE_JERSEY = static_cast<int32_t>(0x1bf),
    __E_EUROPE_KALININGRAD = static_cast<int32_t>(0x1c0),
    __E_EUROPE_KIEV = static_cast<int32_t>(0x1c1),
    __E_EUROPE_KIROV = static_cast<int32_t>(0x1c2),
    __E_EUROPE_LISBON = static_cast<int32_t>(0x1c3),
    __E_EUROPE_LJUBLJANA = static_cast<int32_t>(0x1c4),
    __E_EUROPE_LONDON = static_cast<int32_t>(0x1c5),
    __E_EUROPE_LUXEMBOURG = static_cast<int32_t>(0x1c6),
    __E_EUROPE_MADRID = static_cast<int32_t>(0x1c7),
    __E_EUROPE_MALTA = static_cast<int32_t>(0x1c8),
    __E_EUROPE_MARIEHAMN = static_cast<int32_t>(0x1c9),
    __E_EUROPE_MINSK = static_cast<int32_t>(0x1ca),
    __E_EUROPE_MONACO = static_cast<int32_t>(0x1cb),
    __E_EUROPE_MOSCOW = static_cast<int32_t>(0x1cc),
    __E_EUROPE_NICOSIA = static_cast<int32_t>(0x1cd),
    __E_EUROPE_OSLO = static_cast<int32_t>(0x1ce),
    __E_EUROPE_PARIS = static_cast<int32_t>(0x1cf),
    __E_EUROPE_PODGORICA = static_cast<int32_t>(0x1d0),
    __E_EUROPE_PRAGUE = static_cast<int32_t>(0x1d1),
    __E_EUROPE_RIGA = static_cast<int32_t>(0x1d2),
    __E_EUROPE_ROME = static_cast<int32_t>(0x1d3),
    __E_EUROPE_SAMARA = static_cast<int32_t>(0x1d4),
    __E_EUROPE_SAN_MARINO = static_cast<int32_t>(0x1d5),
    __E_EUROPE_SARAJEVO = static_cast<int32_t>(0x1d6),
    __E_EUROPE_SARATOV = static_cast<int32_t>(0x1d7),
    __E_EUROPE_SIMFEROPOL = static_cast<int32_t>(0x1d8),
    __E_EUROPE_SKOPJE = static_cast<int32_t>(0x1d9),
    __E_EUROPE_SOFIA = static_cast<int32_t>(0x1da),
    __E_EUROPE_STOCKHOLM = static_cast<int32_t>(0x1db),
    __E_EUROPE_TALLINN = static_cast<int32_t>(0x1dc),
    __E_EUROPE_TIRANE = static_cast<int32_t>(0x1dd),
    __E_EUROPE_TIRASPOL = static_cast<int32_t>(0x1de),
    __E_EUROPE_ULYANOVSK = static_cast<int32_t>(0x1df),
    __E_EUROPE_UZHGOROD = static_cast<int32_t>(0x1e0),
    __E_EUROPE_VADUZ = static_cast<int32_t>(0x1e1),
    __E_EUROPE_VATICAN = static_cast<int32_t>(0x1e2),
    __E_EUROPE_VIENNA = static_cast<int32_t>(0x1e3),
    __E_EUROPE_VILNIUS = static_cast<int32_t>(0x1e4),
    __E_EUROPE_VOLGOGRAD = static_cast<int32_t>(0x1e5),
    __E_EUROPE_WARSAW = static_cast<int32_t>(0x1e6),
    __E_EUROPE_ZAGREB = static_cast<int32_t>(0x1e7),
    __E_EUROPE_ZAPOROZHYE = static_cast<int32_t>(0x1e8),
    __E_EUROPE_ZURICH = static_cast<int32_t>(0x1e9),
    __E_FACTORY = static_cast<int32_t>(0x1ea),
    __E_GB = static_cast<int32_t>(0x1eb),
    __E_GB_EIRE = static_cast<int32_t>(0x1ec),
    __E_GMT = static_cast<int32_t>(0x1ed),
    __E_GMT_M0 = static_cast<int32_t>(0x1ee),
    __E_GMT_P0 = static_cast<int32_t>(0x1ef),
    __E_GMT0 = static_cast<int32_t>(0x1f0),
    __E_GREENWICH = static_cast<int32_t>(0x1f1),
    __E_HONGKONG = static_cast<int32_t>(0x1f2),
    __E_HST = static_cast<int32_t>(0x1f3),
    __E_ICELAND = static_cast<int32_t>(0x1f4),
    __E_INDIAN_ANTANANARIVO = static_cast<int32_t>(0x1f5),
    __E_INDIAN_CHAGOS = static_cast<int32_t>(0x1f6),
    __E_INDIAN_CHRISTMAS = static_cast<int32_t>(0x1f7),
    __E_INDIAN_COCOS = static_cast<int32_t>(0x1f8),
    __E_INDIAN_COMORO = static_cast<int32_t>(0x1f9),
    __E_INDIAN_KERGUELEN = static_cast<int32_t>(0x1fa),
    __E_INDIAN_MAHE = static_cast<int32_t>(0x1fb),
    __E_INDIAN_MALDIVES = static_cast<int32_t>(0x1fc),
    __E_INDIAN_MAURITIUS = static_cast<int32_t>(0x1fd),
    __E_INDIAN_MAYOTTE = static_cast<int32_t>(0x1fe),
    __E_INDIAN_REUNION = static_cast<int32_t>(0x1ff),
    __E_IRAN = static_cast<int32_t>(0x200),
    __E_ISRAEL = static_cast<int32_t>(0x201),
    __E_JAMAICA = static_cast<int32_t>(0x202),
    __E_JAPAN = static_cast<int32_t>(0x203),
    __E_KWAJALEIN = static_cast<int32_t>(0x204),
    __E_LIBYA = static_cast<int32_t>(0x205),
    __E_MET = static_cast<int32_t>(0x206),
    __E_MEXICO_BAJANORTE = static_cast<int32_t>(0x207),
    __E_MEXICO_BAJASUR = static_cast<int32_t>(0x208),
    __E_MEXICO_GENERAL = static_cast<int32_t>(0x209),
    __E_MST = static_cast<int32_t>(0x20a),
    __E_MST7MDT = static_cast<int32_t>(0x20b),
    __E_NAVAJO = static_cast<int32_t>(0x20c),
    __E_NZ = static_cast<int32_t>(0x20d),
    __E_NZ_CHAT = static_cast<int32_t>(0x20e),
    __E_PACIFIC_APIA = static_cast<int32_t>(0x20f),
    __E_PACIFIC_AUCKLAND = static_cast<int32_t>(0x210),
    __E_PACIFIC_BOUGAINVILLE = static_cast<int32_t>(0x211),
    __E_PACIFIC_CHATHAM = static_cast<int32_t>(0x212),
    __E_PACIFIC_CHUUK = static_cast<int32_t>(0x213),
    __E_PACIFIC_EASTER = static_cast<int32_t>(0x214),
    __E_PACIFIC_EFATE = static_cast<int32_t>(0x215),
    __E_PACIFIC_ENDERBURY = static_cast<int32_t>(0x216),
    __E_PACIFIC_FAKAOFO = static_cast<int32_t>(0x217),
    __E_PACIFIC_FIJI = static_cast<int32_t>(0x218),
    __E_PACIFIC_FUNAFUTI = static_cast<int32_t>(0x219),
    __E_PACIFIC_GALAPAGOS = static_cast<int32_t>(0x21a),
    __E_PACIFIC_GAMBIER = static_cast<int32_t>(0x21b),
    __E_PACIFIC_GUADALCANAL = static_cast<int32_t>(0x21c),
    __E_PACIFIC_GUAM = static_cast<int32_t>(0x21d),
    __E_PACIFIC_HONOLULU = static_cast<int32_t>(0x21e),
    __E_PACIFIC_JOHNSTON = static_cast<int32_t>(0x21f),
    __E_PACIFIC_KIRITIMATI = static_cast<int32_t>(0x220),
    __E_PACIFIC_KOSRAE = static_cast<int32_t>(0x221),
    __E_PACIFIC_KWAJALEIN = static_cast<int32_t>(0x222),
    __E_PACIFIC_MAJURO = static_cast<int32_t>(0x223),
    __E_PACIFIC_MARQUESAS = static_cast<int32_t>(0x224),
    __E_PACIFIC_MIDWAY = static_cast<int32_t>(0x225),
    __E_PACIFIC_NAURU = static_cast<int32_t>(0x226),
    __E_PACIFIC_NIUE = static_cast<int32_t>(0x227),
    __E_PACIFIC_NORFOLK = static_cast<int32_t>(0x228),
    __E_PACIFIC_NOUMEA = static_cast<int32_t>(0x229),
    __E_PACIFIC_PAGO_PAGO = static_cast<int32_t>(0x22a),
    __E_PACIFIC_PALAU = static_cast<int32_t>(0x22b),
    __E_PACIFIC_PITCAIRN = static_cast<int32_t>(0x22c),
    __E_PACIFIC_POHNPEI = static_cast<int32_t>(0x22d),
    __E_PACIFIC_PONAPE = static_cast<int32_t>(0x22e),
    __E_PACIFIC_PORT_MORESBY = static_cast<int32_t>(0x22f),
    __E_PACIFIC_RAROTONGA = static_cast<int32_t>(0x230),
    __E_PACIFIC_SAIPAN = static_cast<int32_t>(0x231),
    __E_PACIFIC_SAMOA = static_cast<int32_t>(0x232),
    __E_PACIFIC_TAHITI = static_cast<int32_t>(0x233),
    __E_PACIFIC_TARAWA = static_cast<int32_t>(0x234),
    __E_PACIFIC_TONGATAPU = static_cast<int32_t>(0x235),
    __E_PACIFIC_TRUK = static_cast<int32_t>(0x236),
    __E_PACIFIC_WAKE = static_cast<int32_t>(0x237),
    __E_PACIFIC_WALLIS = static_cast<int32_t>(0x238),
    __E_PACIFIC_YAP = static_cast<int32_t>(0x239),
    __E_POLAND = static_cast<int32_t>(0x23a),
    __E_PORTUGAL = static_cast<int32_t>(0x23b),
    __E_PRC = static_cast<int32_t>(0x23c),
    __E_PST8PDT = static_cast<int32_t>(0x23d),
    __E_ROC = static_cast<int32_t>(0x23e),
    __E_ROK = static_cast<int32_t>(0x23f),
    __E_SINGAPORE = static_cast<int32_t>(0x240),
    __E_TURKEY = static_cast<int32_t>(0x241),
    __E_UCT = static_cast<int32_t>(0x242),
    __E_UNIVERSAL = static_cast<int32_t>(0x243),
    __E_US_ALASKA = static_cast<int32_t>(0x244),
    __E_US_ALEUTIAN = static_cast<int32_t>(0x245),
    __E_US_ARIZONA = static_cast<int32_t>(0x246),
    __E_US_CENTRAL = static_cast<int32_t>(0x247),
    __E_US_EAST_INDIANA = static_cast<int32_t>(0x248),
    __E_US_EASTERN = static_cast<int32_t>(0x249),
    __E_US_HAWAII = static_cast<int32_t>(0x24a),
    __E_US_INDIANA_STARKE = static_cast<int32_t>(0x24b),
    __E_US_MICHIGAN = static_cast<int32_t>(0x24c),
    __E_US_MOUNTAIN = static_cast<int32_t>(0x24d),
    __E_US_PACIFIC = static_cast<int32_t>(0x24e),
    __E_US_SAMOA = static_cast<int32_t>(0x24f),
    __E_UTC = static_cast<int32_t>(0x250),
    __E_W_SU = static_cast<int32_t>(0x251),
    __E_WET = static_cast<int32_t>(0x252),
    __E_ZULU = static_cast<int32_t>(0x253),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimezoneIDEnum_Unwrapped() const noexcept {
    return static_cast<__TimezoneIDEnum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimezoneIDEnum();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimezoneIDEnum(int32_t value__) noexcept;

  /// @brief Field AFRICA_ABIDJAN value: I32(1)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_ABIDJAN;

  /// @brief Field AFRICA_ACCRA value: I32(2)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_ACCRA;

  /// @brief Field AFRICA_ADDIS_ABABA value: I32(3)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_ADDIS_ABABA;

  /// @brief Field AFRICA_ALGIERS value: I32(4)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_ALGIERS;

  /// @brief Field AFRICA_ASMARA value: I32(5)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_ASMARA;

  /// @brief Field AFRICA_ASMERA value: I32(6)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_ASMERA;

  /// @brief Field AFRICA_BAMAKO value: I32(7)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_BAMAKO;

  /// @brief Field AFRICA_BANGUI value: I32(8)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_BANGUI;

  /// @brief Field AFRICA_BANJUL value: I32(9)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_BANJUL;

  /// @brief Field AFRICA_BISSAU value: I32(10)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_BISSAU;

  /// @brief Field AFRICA_BLANTYRE value: I32(11)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_BLANTYRE;

  /// @brief Field AFRICA_BRAZZAVILLE value: I32(12)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_BRAZZAVILLE;

  /// @brief Field AFRICA_BUJUMBURA value: I32(13)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_BUJUMBURA;

  /// @brief Field AFRICA_CAIRO value: I32(14)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_CAIRO;

  /// @brief Field AFRICA_CASABLANCA value: I32(15)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_CASABLANCA;

  /// @brief Field AFRICA_CEUTA value: I32(16)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_CEUTA;

  /// @brief Field AFRICA_CONAKRY value: I32(17)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_CONAKRY;

  /// @brief Field AFRICA_DAKAR value: I32(18)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_DAKAR;

  /// @brief Field AFRICA_DAR_ES_SALAAM value: I32(19)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_DAR_ES_SALAAM;

  /// @brief Field AFRICA_DJIBOUTI value: I32(20)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_DJIBOUTI;

  /// @brief Field AFRICA_DOUALA value: I32(21)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_DOUALA;

  /// @brief Field AFRICA_EL_AAIUN value: I32(22)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_EL_AAIUN;

  /// @brief Field AFRICA_FREETOWN value: I32(23)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_FREETOWN;

  /// @brief Field AFRICA_GABORONE value: I32(24)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_GABORONE;

  /// @brief Field AFRICA_HARARE value: I32(25)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_HARARE;

  /// @brief Field AFRICA_JOHANNESBURG value: I32(26)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_JOHANNESBURG;

  /// @brief Field AFRICA_JUBA value: I32(27)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_JUBA;

  /// @brief Field AFRICA_KAMPALA value: I32(28)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_KAMPALA;

  /// @brief Field AFRICA_KHARTOUM value: I32(29)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_KHARTOUM;

  /// @brief Field AFRICA_KIGALI value: I32(30)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_KIGALI;

  /// @brief Field AFRICA_KINSHASA value: I32(31)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_KINSHASA;

  /// @brief Field AFRICA_LAGOS value: I32(32)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_LAGOS;

  /// @brief Field AFRICA_LIBREVILLE value: I32(33)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_LIBREVILLE;

  /// @brief Field AFRICA_LOME value: I32(34)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_LOME;

  /// @brief Field AFRICA_LUANDA value: I32(35)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_LUANDA;

  /// @brief Field AFRICA_LUBUMBASHI value: I32(36)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_LUBUMBASHI;

  /// @brief Field AFRICA_LUSAKA value: I32(37)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_LUSAKA;

  /// @brief Field AFRICA_MALABO value: I32(38)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_MALABO;

  /// @brief Field AFRICA_MAPUTO value: I32(39)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_MAPUTO;

  /// @brief Field AFRICA_MASERU value: I32(40)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_MASERU;

  /// @brief Field AFRICA_MBABANE value: I32(41)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_MBABANE;

  /// @brief Field AFRICA_MOGADISHU value: I32(42)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_MOGADISHU;

  /// @brief Field AFRICA_MONROVIA value: I32(43)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_MONROVIA;

  /// @brief Field AFRICA_NAIROBI value: I32(44)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_NAIROBI;

  /// @brief Field AFRICA_NDJAMENA value: I32(45)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_NDJAMENA;

  /// @brief Field AFRICA_NIAMEY value: I32(46)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_NIAMEY;

  /// @brief Field AFRICA_NOUAKCHOTT value: I32(47)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_NOUAKCHOTT;

  /// @brief Field AFRICA_OUAGADOUGOU value: I32(48)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_OUAGADOUGOU;

  /// @brief Field AFRICA_PORTO_NOVO value: I32(49)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_PORTO_NOVO;

  /// @brief Field AFRICA_SAO_TOME value: I32(50)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_SAO_TOME;

  /// @brief Field AFRICA_TIMBUKTU value: I32(51)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_TIMBUKTU;

  /// @brief Field AFRICA_TRIPOLI value: I32(52)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_TRIPOLI;

  /// @brief Field AFRICA_TUNIS value: I32(53)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_TUNIS;

  /// @brief Field AFRICA_WINDHOEK value: I32(54)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AFRICA_WINDHOEK;

  /// @brief Field AMERICA_ADAK value: I32(55)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ADAK;

  /// @brief Field AMERICA_ANCHORAGE value: I32(56)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ANCHORAGE;

  /// @brief Field AMERICA_ANGUILLA value: I32(57)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ANGUILLA;

  /// @brief Field AMERICA_ANTIGUA value: I32(58)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ANTIGUA;

  /// @brief Field AMERICA_ARAGUAINA value: I32(59)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARAGUAINA;

  /// @brief Field AMERICA_ARGENTINA_BUENOS_AIRES value: I32(60)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARGENTINA_BUENOS_AIRES;

  /// @brief Field AMERICA_ARGENTINA_CATAMARCA value: I32(61)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARGENTINA_CATAMARCA;

  /// @brief Field AMERICA_ARGENTINA_COMODRIVADAVIA value: I32(62)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARGENTINA_COMODRIVADAVIA;

  /// @brief Field AMERICA_ARGENTINA_CORDOBA value: I32(63)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARGENTINA_CORDOBA;

  /// @brief Field AMERICA_ARGENTINA_JUJUY value: I32(64)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARGENTINA_JUJUY;

  /// @brief Field AMERICA_ARGENTINA_LA_RIOJA value: I32(65)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARGENTINA_LA_RIOJA;

  /// @brief Field AMERICA_ARGENTINA_MENDOZA value: I32(66)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARGENTINA_MENDOZA;

  /// @brief Field AMERICA_ARGENTINA_RIO_GALLEGOS value: I32(67)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARGENTINA_RIO_GALLEGOS;

  /// @brief Field AMERICA_ARGENTINA_SALTA value: I32(68)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARGENTINA_SALTA;

  /// @brief Field AMERICA_ARGENTINA_SAN_JUAN value: I32(69)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARGENTINA_SAN_JUAN;

  /// @brief Field AMERICA_ARGENTINA_SAN_LUIS value: I32(70)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARGENTINA_SAN_LUIS;

  /// @brief Field AMERICA_ARGENTINA_TUCUMAN value: I32(71)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARGENTINA_TUCUMAN;

  /// @brief Field AMERICA_ARGENTINA_USHUAIA value: I32(72)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARGENTINA_USHUAIA;

  /// @brief Field AMERICA_ARUBA value: I32(73)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ARUBA;

  /// @brief Field AMERICA_ASUNCION value: I32(74)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ASUNCION;

  /// @brief Field AMERICA_ATIKOKAN value: I32(75)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ATIKOKAN;

  /// @brief Field AMERICA_ATKA value: I32(76)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ATKA;

  /// @brief Field AMERICA_BAHIA value: I32(77)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_BAHIA;

  /// @brief Field AMERICA_BAHIA_BANDERAS value: I32(78)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_BAHIA_BANDERAS;

  /// @brief Field AMERICA_BARBADOS value: I32(79)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_BARBADOS;

  /// @brief Field AMERICA_BELEM value: I32(80)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_BELEM;

  /// @brief Field AMERICA_BELIZE value: I32(81)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_BELIZE;

  /// @brief Field AMERICA_BLANC_SABLON value: I32(82)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_BLANC_SABLON;

  /// @brief Field AMERICA_BOA_VISTA value: I32(83)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_BOA_VISTA;

  /// @brief Field AMERICA_BOGOTA value: I32(84)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_BOGOTA;

  /// @brief Field AMERICA_BOISE value: I32(85)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_BOISE;

  /// @brief Field AMERICA_BUENOS_AIRES value: I32(86)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_BUENOS_AIRES;

  /// @brief Field AMERICA_CAMBRIDGE_BAY value: I32(87)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CAMBRIDGE_BAY;

  /// @brief Field AMERICA_CAMPO_GRANDE value: I32(88)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CAMPO_GRANDE;

  /// @brief Field AMERICA_CANCUN value: I32(89)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CANCUN;

  /// @brief Field AMERICA_CARACAS value: I32(90)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CARACAS;

  /// @brief Field AMERICA_CATAMARCA value: I32(91)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CATAMARCA;

  /// @brief Field AMERICA_CAYENNE value: I32(92)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CAYENNE;

  /// @brief Field AMERICA_CAYMAN value: I32(93)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CAYMAN;

  /// @brief Field AMERICA_CHICAGO value: I32(94)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CHICAGO;

  /// @brief Field AMERICA_CHIHUAHUA value: I32(95)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CHIHUAHUA;

  /// @brief Field AMERICA_CIUDAD_JUAREZ value: I32(96)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CIUDAD_JUAREZ;

  /// @brief Field AMERICA_CORAL_HARBOUR value: I32(97)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CORAL_HARBOUR;

  /// @brief Field AMERICA_CORDOBA value: I32(98)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CORDOBA;

  /// @brief Field AMERICA_COSTA_RICA value: I32(99)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_COSTA_RICA;

  /// @brief Field AMERICA_CRESTON value: I32(100)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CRESTON;

  /// @brief Field AMERICA_CUIABA value: I32(101)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CUIABA;

  /// @brief Field AMERICA_CURACAO value: I32(102)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_CURACAO;

  /// @brief Field AMERICA_DANMARKSHAVN value: I32(103)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_DANMARKSHAVN;

  /// @brief Field AMERICA_DAWSON value: I32(104)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_DAWSON;

  /// @brief Field AMERICA_DAWSON_CREEK value: I32(105)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_DAWSON_CREEK;

  /// @brief Field AMERICA_DENVER value: I32(106)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_DENVER;

  /// @brief Field AMERICA_DETROIT value: I32(107)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_DETROIT;

  /// @brief Field AMERICA_DOMINICA value: I32(108)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_DOMINICA;

  /// @brief Field AMERICA_EDMONTON value: I32(109)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_EDMONTON;

  /// @brief Field AMERICA_EIRUNEPE value: I32(110)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_EIRUNEPE;

  /// @brief Field AMERICA_EL_SALVADOR value: I32(111)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_EL_SALVADOR;

  /// @brief Field AMERICA_ENSENADA value: I32(112)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ENSENADA;

  /// @brief Field AMERICA_FORTALEZA value: I32(115)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_FORTALEZA;

  /// @brief Field AMERICA_FORT_NELSON value: I32(113)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_FORT_NELSON;

  /// @brief Field AMERICA_FORT_WAYNE value: I32(114)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_FORT_WAYNE;

  /// @brief Field AMERICA_GLACE_BAY value: I32(116)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_GLACE_BAY;

  /// @brief Field AMERICA_GODTHAB value: I32(117)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_GODTHAB;

  /// @brief Field AMERICA_GOOSE_BAY value: I32(118)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_GOOSE_BAY;

  /// @brief Field AMERICA_GRAND_TURK value: I32(119)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_GRAND_TURK;

  /// @brief Field AMERICA_GRENADA value: I32(120)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_GRENADA;

  /// @brief Field AMERICA_GUADELOUPE value: I32(121)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_GUADELOUPE;

  /// @brief Field AMERICA_GUATEMALA value: I32(122)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_GUATEMALA;

  /// @brief Field AMERICA_GUAYAQUIL value: I32(123)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_GUAYAQUIL;

  /// @brief Field AMERICA_GUYANA value: I32(124)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_GUYANA;

  /// @brief Field AMERICA_HALIFAX value: I32(125)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_HALIFAX;

  /// @brief Field AMERICA_HAVANA value: I32(126)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_HAVANA;

  /// @brief Field AMERICA_HERMOSILLO value: I32(127)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_HERMOSILLO;

  /// @brief Field AMERICA_INDIANAPOLIS value: I32(136)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_INDIANAPOLIS;

  /// @brief Field AMERICA_INDIANA_INDIANAPOLIS value: I32(128)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_INDIANA_INDIANAPOLIS;

  /// @brief Field AMERICA_INDIANA_KNOX value: I32(129)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_INDIANA_KNOX;

  /// @brief Field AMERICA_INDIANA_MARENGO value: I32(130)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_INDIANA_MARENGO;

  /// @brief Field AMERICA_INDIANA_PETERSBURG value: I32(131)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_INDIANA_PETERSBURG;

  /// @brief Field AMERICA_INDIANA_TELL_CITY value: I32(132)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_INDIANA_TELL_CITY;

  /// @brief Field AMERICA_INDIANA_VEVAY value: I32(133)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_INDIANA_VEVAY;

  /// @brief Field AMERICA_INDIANA_VINCENNES value: I32(134)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_INDIANA_VINCENNES;

  /// @brief Field AMERICA_INDIANA_WINAMAC value: I32(135)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_INDIANA_WINAMAC;

  /// @brief Field AMERICA_INUVIK value: I32(137)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_INUVIK;

  /// @brief Field AMERICA_IQALUIT value: I32(138)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_IQALUIT;

  /// @brief Field AMERICA_JAMAICA value: I32(139)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_JAMAICA;

  /// @brief Field AMERICA_JUJUY value: I32(140)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_JUJUY;

  /// @brief Field AMERICA_JUNEAU value: I32(141)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_JUNEAU;

  /// @brief Field AMERICA_KENTUCKY_LOUISVILLE value: I32(142)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_KENTUCKY_LOUISVILLE;

  /// @brief Field AMERICA_KENTUCKY_MONTICELLO value: I32(143)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_KENTUCKY_MONTICELLO;

  /// @brief Field AMERICA_KNOX_IN value: I32(144)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_KNOX_IN;

  /// @brief Field AMERICA_KRALENDIJK value: I32(145)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_KRALENDIJK;

  /// @brief Field AMERICA_LA_PAZ value: I32(146)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_LA_PAZ;

  /// @brief Field AMERICA_LIMA value: I32(147)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_LIMA;

  /// @brief Field AMERICA_LOS_ANGELES value: I32(148)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_LOS_ANGELES;

  /// @brief Field AMERICA_LOUISVILLE value: I32(149)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_LOUISVILLE;

  /// @brief Field AMERICA_LOWER_PRINCES value: I32(150)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_LOWER_PRINCES;

  /// @brief Field AMERICA_MACEIO value: I32(151)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MACEIO;

  /// @brief Field AMERICA_MANAGUA value: I32(152)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MANAGUA;

  /// @brief Field AMERICA_MANAUS value: I32(153)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MANAUS;

  /// @brief Field AMERICA_MARIGOT value: I32(154)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MARIGOT;

  /// @brief Field AMERICA_MARTINIQUE value: I32(155)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MARTINIQUE;

  /// @brief Field AMERICA_MATAMOROS value: I32(156)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MATAMOROS;

  /// @brief Field AMERICA_MAZATLAN value: I32(157)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MAZATLAN;

  /// @brief Field AMERICA_MENDOZA value: I32(158)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MENDOZA;

  /// @brief Field AMERICA_MENOMINEE value: I32(159)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MENOMINEE;

  /// @brief Field AMERICA_MERIDA value: I32(160)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MERIDA;

  /// @brief Field AMERICA_METLAKATLA value: I32(161)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_METLAKATLA;

  /// @brief Field AMERICA_MEXICO_CITY value: I32(162)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MEXICO_CITY;

  /// @brief Field AMERICA_MIQUELON value: I32(163)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MIQUELON;

  /// @brief Field AMERICA_MONCTON value: I32(164)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MONCTON;

  /// @brief Field AMERICA_MONTERREY value: I32(165)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MONTERREY;

  /// @brief Field AMERICA_MONTEVIDEO value: I32(166)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MONTEVIDEO;

  /// @brief Field AMERICA_MONTREAL value: I32(167)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MONTREAL;

  /// @brief Field AMERICA_MONTSERRAT value: I32(168)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_MONTSERRAT;

  /// @brief Field AMERICA_NASSAU value: I32(169)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_NASSAU;

  /// @brief Field AMERICA_NEW_YORK value: I32(170)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_NEW_YORK;

  /// @brief Field AMERICA_NIPIGON value: I32(171)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_NIPIGON;

  /// @brief Field AMERICA_NOME value: I32(172)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_NOME;

  /// @brief Field AMERICA_NORONHA value: I32(173)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_NORONHA;

  /// @brief Field AMERICA_NORTH_DAKOTA_BEULAH value: I32(174)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_NORTH_DAKOTA_BEULAH;

  /// @brief Field AMERICA_NORTH_DAKOTA_CENTER value: I32(175)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_NORTH_DAKOTA_CENTER;

  /// @brief Field AMERICA_NORTH_DAKOTA_NEW_SALEM value: I32(176)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_NORTH_DAKOTA_NEW_SALEM;

  /// @brief Field AMERICA_NUUK value: I32(177)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_NUUK;

  /// @brief Field AMERICA_OJINAGA value: I32(178)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_OJINAGA;

  /// @brief Field AMERICA_PANAMA value: I32(179)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_PANAMA;

  /// @brief Field AMERICA_PANGNIRTUNG value: I32(180)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_PANGNIRTUNG;

  /// @brief Field AMERICA_PARAMARIBO value: I32(181)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_PARAMARIBO;

  /// @brief Field AMERICA_PHOENIX value: I32(182)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_PHOENIX;

  /// @brief Field AMERICA_PORTO_ACRE value: I32(185)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_PORTO_ACRE;

  /// @brief Field AMERICA_PORTO_VELHO value: I32(186)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_PORTO_VELHO;

  /// @brief Field AMERICA_PORT_AU_PRINCE value: I32(183)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_PORT_AU_PRINCE;

  /// @brief Field AMERICA_PORT_OF_SPAIN value: I32(184)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_PORT_OF_SPAIN;

  /// @brief Field AMERICA_PUERTO_RICO value: I32(187)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_PUERTO_RICO;

  /// @brief Field AMERICA_PUNTA_ARENAS value: I32(188)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_PUNTA_ARENAS;

  /// @brief Field AMERICA_RAINY_RIVER value: I32(189)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_RAINY_RIVER;

  /// @brief Field AMERICA_RANKIN_INLET value: I32(190)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_RANKIN_INLET;

  /// @brief Field AMERICA_RECIFE value: I32(191)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_RECIFE;

  /// @brief Field AMERICA_REGINA value: I32(192)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_REGINA;

  /// @brief Field AMERICA_RESOLUTE value: I32(193)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_RESOLUTE;

  /// @brief Field AMERICA_RIO_BRANCO value: I32(194)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_RIO_BRANCO;

  /// @brief Field AMERICA_ROSARIO value: I32(195)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ROSARIO;

  /// @brief Field AMERICA_SANTAREM value: I32(197)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_SANTAREM;

  /// @brief Field AMERICA_SANTA_ISABEL value: I32(196)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_SANTA_ISABEL;

  /// @brief Field AMERICA_SANTIAGO value: I32(198)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_SANTIAGO;

  /// @brief Field AMERICA_SANTO_DOMINGO value: I32(199)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_SANTO_DOMINGO;

  /// @brief Field AMERICA_SAO_PAULO value: I32(200)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_SAO_PAULO;

  /// @brief Field AMERICA_SCORESBYSUND value: I32(201)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_SCORESBYSUND;

  /// @brief Field AMERICA_SHIPROCK value: I32(202)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_SHIPROCK;

  /// @brief Field AMERICA_SITKA value: I32(203)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_SITKA;

  /// @brief Field AMERICA_ST_BARTHELEMY value: I32(204)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ST_BARTHELEMY;

  /// @brief Field AMERICA_ST_JOHNS value: I32(205)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ST_JOHNS;

  /// @brief Field AMERICA_ST_KITTS value: I32(206)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ST_KITTS;

  /// @brief Field AMERICA_ST_LUCIA value: I32(207)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ST_LUCIA;

  /// @brief Field AMERICA_ST_THOMAS value: I32(208)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ST_THOMAS;

  /// @brief Field AMERICA_ST_VINCENT value: I32(209)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_ST_VINCENT;

  /// @brief Field AMERICA_SWIFT_CURRENT value: I32(210)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_SWIFT_CURRENT;

  /// @brief Field AMERICA_TEGUCIGALPA value: I32(211)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_TEGUCIGALPA;

  /// @brief Field AMERICA_THULE value: I32(212)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_THULE;

  /// @brief Field AMERICA_THUNDER_BAY value: I32(213)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_THUNDER_BAY;

  /// @brief Field AMERICA_TIJUANA value: I32(214)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_TIJUANA;

  /// @brief Field AMERICA_TORONTO value: I32(215)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_TORONTO;

  /// @brief Field AMERICA_TORTOLA value: I32(216)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_TORTOLA;

  /// @brief Field AMERICA_VANCOUVER value: I32(217)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_VANCOUVER;

  /// @brief Field AMERICA_VIRGIN value: I32(218)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_VIRGIN;

  /// @brief Field AMERICA_WHITEHORSE value: I32(219)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_WHITEHORSE;

  /// @brief Field AMERICA_WINNIPEG value: I32(220)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_WINNIPEG;

  /// @brief Field AMERICA_YAKUTAT value: I32(221)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_YAKUTAT;

  /// @brief Field AMERICA_YELLOWKNIFE value: I32(222)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AMERICA_YELLOWKNIFE;

  /// @brief Field ANTARCTICA_CASEY value: I32(223)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ANTARCTICA_CASEY;

  /// @brief Field ANTARCTICA_DAVIS value: I32(224)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ANTARCTICA_DAVIS;

  /// @brief Field ANTARCTICA_DUMONTDURVILLE value: I32(225)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ANTARCTICA_DUMONTDURVILLE;

  /// @brief Field ANTARCTICA_MACQUARIE value: I32(226)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ANTARCTICA_MACQUARIE;

  /// @brief Field ANTARCTICA_MAWSON value: I32(227)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ANTARCTICA_MAWSON;

  /// @brief Field ANTARCTICA_MCMURDO value: I32(228)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ANTARCTICA_MCMURDO;

  /// @brief Field ANTARCTICA_PALMER value: I32(229)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ANTARCTICA_PALMER;

  /// @brief Field ANTARCTICA_ROTHERA value: I32(230)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ANTARCTICA_ROTHERA;

  /// @brief Field ANTARCTICA_SOUTH_POLE value: I32(231)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ANTARCTICA_SOUTH_POLE;

  /// @brief Field ANTARCTICA_SYOWA value: I32(232)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ANTARCTICA_SYOWA;

  /// @brief Field ANTARCTICA_TROLL value: I32(233)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ANTARCTICA_TROLL;

  /// @brief Field ANTARCTICA_VOSTOK value: I32(234)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ANTARCTICA_VOSTOK;

  /// @brief Field ARCTIC_LONGYEARBYEN value: I32(235)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ARCTIC_LONGYEARBYEN;

  /// @brief Field ASIA_ADEN value: I32(236)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_ADEN;

  /// @brief Field ASIA_ALMATY value: I32(237)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_ALMATY;

  /// @brief Field ASIA_AMMAN value: I32(238)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_AMMAN;

  /// @brief Field ASIA_ANADYR value: I32(239)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_ANADYR;

  /// @brief Field ASIA_AQTAU value: I32(240)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_AQTAU;

  /// @brief Field ASIA_AQTOBE value: I32(241)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_AQTOBE;

  /// @brief Field ASIA_ASHGABAT value: I32(242)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_ASHGABAT;

  /// @brief Field ASIA_ASHKHABAD value: I32(243)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_ASHKHABAD;

  /// @brief Field ASIA_ATYRAU value: I32(244)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_ATYRAU;

  /// @brief Field ASIA_BAGHDAD value: I32(245)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_BAGHDAD;

  /// @brief Field ASIA_BAHRAIN value: I32(246)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_BAHRAIN;

  /// @brief Field ASIA_BAKU value: I32(247)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_BAKU;

  /// @brief Field ASIA_BANGKOK value: I32(248)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_BANGKOK;

  /// @brief Field ASIA_BARNAUL value: I32(249)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_BARNAUL;

  /// @brief Field ASIA_BEIRUT value: I32(250)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_BEIRUT;

  /// @brief Field ASIA_BISHKEK value: I32(251)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_BISHKEK;

  /// @brief Field ASIA_BRUNEI value: I32(252)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_BRUNEI;

  /// @brief Field ASIA_CALCUTTA value: I32(253)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_CALCUTTA;

  /// @brief Field ASIA_CHITA value: I32(254)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_CHITA;

  /// @brief Field ASIA_CHOIBALSAN value: I32(255)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_CHOIBALSAN;

  /// @brief Field ASIA_CHONGQING value: I32(256)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_CHONGQING;

  /// @brief Field ASIA_CHUNGKING value: I32(257)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_CHUNGKING;

  /// @brief Field ASIA_COLOMBO value: I32(258)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_COLOMBO;

  /// @brief Field ASIA_DACCA value: I32(259)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_DACCA;

  /// @brief Field ASIA_DAMASCUS value: I32(260)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_DAMASCUS;

  /// @brief Field ASIA_DHAKA value: I32(261)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_DHAKA;

  /// @brief Field ASIA_DILI value: I32(262)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_DILI;

  /// @brief Field ASIA_DUBAI value: I32(263)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_DUBAI;

  /// @brief Field ASIA_DUSHANBE value: I32(264)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_DUSHANBE;

  /// @brief Field ASIA_FAMAGUSTA value: I32(265)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_FAMAGUSTA;

  /// @brief Field ASIA_GAZA value: I32(266)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_GAZA;

  /// @brief Field ASIA_HARBIN value: I32(267)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_HARBIN;

  /// @brief Field ASIA_HEBRON value: I32(268)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_HEBRON;

  /// @brief Field ASIA_HONG_KONG value: I32(270)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_HONG_KONG;

  /// @brief Field ASIA_HOVD value: I32(271)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_HOVD;

  /// @brief Field ASIA_HO_CHI_MINH value: I32(269)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_HO_CHI_MINH;

  /// @brief Field ASIA_IRKUTSK value: I32(272)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_IRKUTSK;

  /// @brief Field ASIA_ISTANBUL value: I32(273)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_ISTANBUL;

  /// @brief Field ASIA_JAKARTA value: I32(274)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_JAKARTA;

  /// @brief Field ASIA_JAYAPURA value: I32(275)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_JAYAPURA;

  /// @brief Field ASIA_JERUSALEM value: I32(276)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_JERUSALEM;

  /// @brief Field ASIA_KABUL value: I32(277)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_KABUL;

  /// @brief Field ASIA_KAMCHATKA value: I32(278)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_KAMCHATKA;

  /// @brief Field ASIA_KARACHI value: I32(279)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_KARACHI;

  /// @brief Field ASIA_KASHGAR value: I32(280)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_KASHGAR;

  /// @brief Field ASIA_KATHMANDU value: I32(281)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_KATHMANDU;

  /// @brief Field ASIA_KATMANDU value: I32(282)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_KATMANDU;

  /// @brief Field ASIA_KHANDYGA value: I32(283)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_KHANDYGA;

  /// @brief Field ASIA_KOLKATA value: I32(284)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_KOLKATA;

  /// @brief Field ASIA_KRASNOYARSK value: I32(285)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_KRASNOYARSK;

  /// @brief Field ASIA_KUALA_LUMPUR value: I32(286)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_KUALA_LUMPUR;

  /// @brief Field ASIA_KUCHING value: I32(287)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_KUCHING;

  /// @brief Field ASIA_KUWAIT value: I32(288)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_KUWAIT;

  /// @brief Field ASIA_MACAO value: I32(289)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_MACAO;

  /// @brief Field ASIA_MACAU value: I32(290)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_MACAU;

  /// @brief Field ASIA_MAGADAN value: I32(291)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_MAGADAN;

  /// @brief Field ASIA_MAKASSAR value: I32(292)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_MAKASSAR;

  /// @brief Field ASIA_MANILA value: I32(293)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_MANILA;

  /// @brief Field ASIA_MUSCAT value: I32(294)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_MUSCAT;

  /// @brief Field ASIA_NICOSIA value: I32(295)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_NICOSIA;

  /// @brief Field ASIA_NOVOKUZNETSK value: I32(296)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_NOVOKUZNETSK;

  /// @brief Field ASIA_NOVOSIBIRSK value: I32(297)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_NOVOSIBIRSK;

  /// @brief Field ASIA_OMSK value: I32(298)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_OMSK;

  /// @brief Field ASIA_ORAL value: I32(299)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_ORAL;

  /// @brief Field ASIA_PHNOM_PENH value: I32(300)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_PHNOM_PENH;

  /// @brief Field ASIA_PONTIANAK value: I32(301)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_PONTIANAK;

  /// @brief Field ASIA_PYONGYANG value: I32(302)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_PYONGYANG;

  /// @brief Field ASIA_QATAR value: I32(303)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_QATAR;

  /// @brief Field ASIA_QOSTANAY value: I32(304)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_QOSTANAY;

  /// @brief Field ASIA_QYZYLORDA value: I32(305)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_QYZYLORDA;

  /// @brief Field ASIA_RANGOON value: I32(306)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_RANGOON;

  /// @brief Field ASIA_RIYADH value: I32(307)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_RIYADH;

  /// @brief Field ASIA_SAIGON value: I32(308)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_SAIGON;

  /// @brief Field ASIA_SAKHALIN value: I32(309)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_SAKHALIN;

  /// @brief Field ASIA_SAMARKAND value: I32(310)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_SAMARKAND;

  /// @brief Field ASIA_SEOUL value: I32(311)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_SEOUL;

  /// @brief Field ASIA_SHANGHAI value: I32(312)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_SHANGHAI;

  /// @brief Field ASIA_SINGAPORE value: I32(313)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_SINGAPORE;

  /// @brief Field ASIA_SREDNEKOLYMSK value: I32(314)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_SREDNEKOLYMSK;

  /// @brief Field ASIA_TAIPEI value: I32(315)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_TAIPEI;

  /// @brief Field ASIA_TASHKENT value: I32(316)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_TASHKENT;

  /// @brief Field ASIA_TBILISI value: I32(317)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_TBILISI;

  /// @brief Field ASIA_TEHRAN value: I32(318)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_TEHRAN;

  /// @brief Field ASIA_TEL_AVIV value: I32(319)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_TEL_AVIV;

  /// @brief Field ASIA_THIMBU value: I32(320)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_THIMBU;

  /// @brief Field ASIA_THIMPHU value: I32(321)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_THIMPHU;

  /// @brief Field ASIA_TOKYO value: I32(322)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_TOKYO;

  /// @brief Field ASIA_TOMSK value: I32(323)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_TOMSK;

  /// @brief Field ASIA_UJUNG_PANDANG value: I32(324)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_UJUNG_PANDANG;

  /// @brief Field ASIA_ULAANBAATAR value: I32(325)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_ULAANBAATAR;

  /// @brief Field ASIA_ULAN_BATOR value: I32(326)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_ULAN_BATOR;

  /// @brief Field ASIA_URUMQI value: I32(327)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_URUMQI;

  /// @brief Field ASIA_UST_NERA value: I32(328)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_UST_NERA;

  /// @brief Field ASIA_VIENTIANE value: I32(329)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_VIENTIANE;

  /// @brief Field ASIA_VLADIVOSTOK value: I32(330)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_VLADIVOSTOK;

  /// @brief Field ASIA_YAKUTSK value: I32(331)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_YAKUTSK;

  /// @brief Field ASIA_YANGON value: I32(332)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_YANGON;

  /// @brief Field ASIA_YEKATERINBURG value: I32(333)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_YEKATERINBURG;

  /// @brief Field ASIA_YEREVAN value: I32(334)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ASIA_YEREVAN;

  /// @brief Field ATLANTIC_AZORES value: I32(335)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ATLANTIC_AZORES;

  /// @brief Field ATLANTIC_BERMUDA value: I32(336)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ATLANTIC_BERMUDA;

  /// @brief Field ATLANTIC_CANARY value: I32(337)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ATLANTIC_CANARY;

  /// @brief Field ATLANTIC_CAPE_VERDE value: I32(338)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ATLANTIC_CAPE_VERDE;

  /// @brief Field ATLANTIC_FAEROE value: I32(339)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ATLANTIC_FAEROE;

  /// @brief Field ATLANTIC_FAROE value: I32(340)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ATLANTIC_FAROE;

  /// @brief Field ATLANTIC_JAN_MAYEN value: I32(341)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ATLANTIC_JAN_MAYEN;

  /// @brief Field ATLANTIC_MADEIRA value: I32(342)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ATLANTIC_MADEIRA;

  /// @brief Field ATLANTIC_REYKJAVIK value: I32(343)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ATLANTIC_REYKJAVIK;

  /// @brief Field ATLANTIC_SOUTH_GEORGIA value: I32(344)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ATLANTIC_SOUTH_GEORGIA;

  /// @brief Field ATLANTIC_STANLEY value: I32(346)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ATLANTIC_STANLEY;

  /// @brief Field ATLANTIC_ST_HELENA value: I32(345)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ATLANTIC_ST_HELENA;

  /// @brief Field AUSTRALIA_ACT value: I32(347)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_ACT;

  /// @brief Field AUSTRALIA_ADELAIDE value: I32(348)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_ADELAIDE;

  /// @brief Field AUSTRALIA_BRISBANE value: I32(349)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_BRISBANE;

  /// @brief Field AUSTRALIA_BROKEN_HILL value: I32(350)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_BROKEN_HILL;

  /// @brief Field AUSTRALIA_CANBERRA value: I32(351)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_CANBERRA;

  /// @brief Field AUSTRALIA_CURRIE value: I32(352)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_CURRIE;

  /// @brief Field AUSTRALIA_DARWIN value: I32(353)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_DARWIN;

  /// @brief Field AUSTRALIA_EUCLA value: I32(354)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_EUCLA;

  /// @brief Field AUSTRALIA_HOBART value: I32(355)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_HOBART;

  /// @brief Field AUSTRALIA_LHI value: I32(356)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_LHI;

  /// @brief Field AUSTRALIA_LINDEMAN value: I32(357)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_LINDEMAN;

  /// @brief Field AUSTRALIA_LORD_HOWE value: I32(358)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_LORD_HOWE;

  /// @brief Field AUSTRALIA_MELBOURNE value: I32(359)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_MELBOURNE;

  /// @brief Field AUSTRALIA_NORTH value: I32(360)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_NORTH;

  /// @brief Field AUSTRALIA_NSW value: I32(361)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_NSW;

  /// @brief Field AUSTRALIA_PERTH value: I32(362)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_PERTH;

  /// @brief Field AUSTRALIA_QUEENSLAND value: I32(363)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_QUEENSLAND;

  /// @brief Field AUSTRALIA_SOUTH value: I32(364)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_SOUTH;

  /// @brief Field AUSTRALIA_SYDNEY value: I32(365)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_SYDNEY;

  /// @brief Field AUSTRALIA_TASMANIA value: I32(366)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_TASMANIA;

  /// @brief Field AUSTRALIA_VICTORIA value: I32(367)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_VICTORIA;

  /// @brief Field AUSTRALIA_WEST value: I32(368)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_WEST;

  /// @brief Field AUSTRALIA_YANCOWINNA value: I32(369)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const AUSTRALIA_YANCOWINNA;

  /// @brief Field BRAZIL_ACRE value: I32(370)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const BRAZIL_ACRE;

  /// @brief Field BRAZIL_DENORONHA value: I32(371)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const BRAZIL_DENORONHA;

  /// @brief Field BRAZIL_EAST value: I32(372)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const BRAZIL_EAST;

  /// @brief Field BRAZIL_WEST value: I32(373)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const BRAZIL_WEST;

  /// @brief Field CANADA_ATLANTIC value: I32(374)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const CANADA_ATLANTIC;

  /// @brief Field CANADA_CENTRAL value: I32(375)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const CANADA_CENTRAL;

  /// @brief Field CANADA_EASTERN value: I32(376)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const CANADA_EASTERN;

  /// @brief Field CANADA_MOUNTAIN value: I32(377)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const CANADA_MOUNTAIN;

  /// @brief Field CANADA_NEWFOUNDLAND value: I32(378)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const CANADA_NEWFOUNDLAND;

  /// @brief Field CANADA_PACIFIC value: I32(379)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const CANADA_PACIFIC;

  /// @brief Field CANADA_SASKATCHEWAN value: I32(380)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const CANADA_SASKATCHEWAN;

  /// @brief Field CANADA_YUKON value: I32(381)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const CANADA_YUKON;

  /// @brief Field CET value: I32(382)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const CET;

  /// @brief Field CHILE_CONTINENTAL value: I32(383)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const CHILE_CONTINENTAL;

  /// @brief Field CHILE_EASTERISLAND value: I32(384)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const CHILE_EASTERISLAND;

  /// @brief Field CST6CDT value: I32(385)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const CST6CDT;

  /// @brief Field CUBA value: I32(386)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const CUBA;

  /// @brief Field EET value: I32(387)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EET;

  /// @brief Field EGYPT value: I32(388)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EGYPT;

  /// @brief Field EIRE value: I32(389)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EIRE;

  /// @brief Field EST value: I32(390)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EST;

  /// @brief Field EST5EDT value: I32(391)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EST5EDT;

  /// @brief Field ETC_GMT value: I32(392)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT;

  /// @brief Field ETC_GMT0 value: I32(421)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT0;

  /// @brief Field ETC_GMT_M0 value: I32(393)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M0;

  /// @brief Field ETC_GMT_M1 value: I32(394)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M1;

  /// @brief Field ETC_GMT_M10 value: I32(395)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M10;

  /// @brief Field ETC_GMT_M11 value: I32(396)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M11;

  /// @brief Field ETC_GMT_M12 value: I32(397)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M12;

  /// @brief Field ETC_GMT_M13 value: I32(398)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M13;

  /// @brief Field ETC_GMT_M14 value: I32(399)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M14;

  /// @brief Field ETC_GMT_M2 value: I32(400)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M2;

  /// @brief Field ETC_GMT_M3 value: I32(401)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M3;

  /// @brief Field ETC_GMT_M4 value: I32(402)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M4;

  /// @brief Field ETC_GMT_M5 value: I32(403)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M5;

  /// @brief Field ETC_GMT_M6 value: I32(404)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M6;

  /// @brief Field ETC_GMT_M7 value: I32(405)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M7;

  /// @brief Field ETC_GMT_M8 value: I32(406)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M8;

  /// @brief Field ETC_GMT_M9 value: I32(407)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_M9;

  /// @brief Field ETC_GMT_P0 value: I32(408)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_P0;

  /// @brief Field ETC_GMT_P1 value: I32(409)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_P1;

  /// @brief Field ETC_GMT_P10 value: I32(410)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_P10;

  /// @brief Field ETC_GMT_P11 value: I32(411)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_P11;

  /// @brief Field ETC_GMT_P12 value: I32(412)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_P12;

  /// @brief Field ETC_GMT_P2 value: I32(413)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_P2;

  /// @brief Field ETC_GMT_P3 value: I32(414)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_P3;

  /// @brief Field ETC_GMT_P4 value: I32(415)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_P4;

  /// @brief Field ETC_GMT_P5 value: I32(416)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_P5;

  /// @brief Field ETC_GMT_P6 value: I32(417)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_P6;

  /// @brief Field ETC_GMT_P7 value: I32(418)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_P7;

  /// @brief Field ETC_GMT_P8 value: I32(419)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_P8;

  /// @brief Field ETC_GMT_P9 value: I32(420)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GMT_P9;

  /// @brief Field ETC_GREENWICH value: I32(422)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_GREENWICH;

  /// @brief Field ETC_UCT value: I32(423)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_UCT;

  /// @brief Field ETC_UNIVERSAL value: I32(424)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_UNIVERSAL;

  /// @brief Field ETC_UTC value: I32(425)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_UTC;

  /// @brief Field ETC_ZULU value: I32(426)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ETC_ZULU;

  /// @brief Field EUROPE_AMSTERDAM value: I32(427)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_AMSTERDAM;

  /// @brief Field EUROPE_ANDORRA value: I32(428)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_ANDORRA;

  /// @brief Field EUROPE_ASTRAKHAN value: I32(429)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_ASTRAKHAN;

  /// @brief Field EUROPE_ATHENS value: I32(430)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_ATHENS;

  /// @brief Field EUROPE_BELFAST value: I32(431)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_BELFAST;

  /// @brief Field EUROPE_BELGRADE value: I32(432)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_BELGRADE;

  /// @brief Field EUROPE_BERLIN value: I32(433)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_BERLIN;

  /// @brief Field EUROPE_BRATISLAVA value: I32(434)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_BRATISLAVA;

  /// @brief Field EUROPE_BRUSSELS value: I32(435)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_BRUSSELS;

  /// @brief Field EUROPE_BUCHAREST value: I32(436)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_BUCHAREST;

  /// @brief Field EUROPE_BUDAPEST value: I32(437)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_BUDAPEST;

  /// @brief Field EUROPE_BUSINGEN value: I32(438)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_BUSINGEN;

  /// @brief Field EUROPE_CHISINAU value: I32(439)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_CHISINAU;

  /// @brief Field EUROPE_COPENHAGEN value: I32(440)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_COPENHAGEN;

  /// @brief Field EUROPE_DUBLIN value: I32(441)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_DUBLIN;

  /// @brief Field EUROPE_GIBRALTAR value: I32(442)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_GIBRALTAR;

  /// @brief Field EUROPE_GUERNSEY value: I32(443)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_GUERNSEY;

  /// @brief Field EUROPE_HELSINKI value: I32(444)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_HELSINKI;

  /// @brief Field EUROPE_ISLE_OF_MAN value: I32(445)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_ISLE_OF_MAN;

  /// @brief Field EUROPE_ISTANBUL value: I32(446)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_ISTANBUL;

  /// @brief Field EUROPE_JERSEY value: I32(447)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_JERSEY;

  /// @brief Field EUROPE_KALININGRAD value: I32(448)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_KALININGRAD;

  /// @brief Field EUROPE_KIEV value: I32(449)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_KIEV;

  /// @brief Field EUROPE_KIROV value: I32(450)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_KIROV;

  /// @brief Field EUROPE_LISBON value: I32(451)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_LISBON;

  /// @brief Field EUROPE_LJUBLJANA value: I32(452)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_LJUBLJANA;

  /// @brief Field EUROPE_LONDON value: I32(453)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_LONDON;

  /// @brief Field EUROPE_LUXEMBOURG value: I32(454)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_LUXEMBOURG;

  /// @brief Field EUROPE_MADRID value: I32(455)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_MADRID;

  /// @brief Field EUROPE_MALTA value: I32(456)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_MALTA;

  /// @brief Field EUROPE_MARIEHAMN value: I32(457)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_MARIEHAMN;

  /// @brief Field EUROPE_MINSK value: I32(458)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_MINSK;

  /// @brief Field EUROPE_MONACO value: I32(459)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_MONACO;

  /// @brief Field EUROPE_MOSCOW value: I32(460)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_MOSCOW;

  /// @brief Field EUROPE_NICOSIA value: I32(461)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_NICOSIA;

  /// @brief Field EUROPE_OSLO value: I32(462)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_OSLO;

  /// @brief Field EUROPE_PARIS value: I32(463)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_PARIS;

  /// @brief Field EUROPE_PODGORICA value: I32(464)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_PODGORICA;

  /// @brief Field EUROPE_PRAGUE value: I32(465)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_PRAGUE;

  /// @brief Field EUROPE_RIGA value: I32(466)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_RIGA;

  /// @brief Field EUROPE_ROME value: I32(467)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_ROME;

  /// @brief Field EUROPE_SAMARA value: I32(468)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_SAMARA;

  /// @brief Field EUROPE_SAN_MARINO value: I32(469)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_SAN_MARINO;

  /// @brief Field EUROPE_SARAJEVO value: I32(470)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_SARAJEVO;

  /// @brief Field EUROPE_SARATOV value: I32(471)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_SARATOV;

  /// @brief Field EUROPE_SIMFEROPOL value: I32(472)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_SIMFEROPOL;

  /// @brief Field EUROPE_SKOPJE value: I32(473)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_SKOPJE;

  /// @brief Field EUROPE_SOFIA value: I32(474)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_SOFIA;

  /// @brief Field EUROPE_STOCKHOLM value: I32(475)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_STOCKHOLM;

  /// @brief Field EUROPE_TALLINN value: I32(476)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_TALLINN;

  /// @brief Field EUROPE_TIRANE value: I32(477)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_TIRANE;

  /// @brief Field EUROPE_TIRASPOL value: I32(478)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_TIRASPOL;

  /// @brief Field EUROPE_ULYANOVSK value: I32(479)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_ULYANOVSK;

  /// @brief Field EUROPE_UZHGOROD value: I32(480)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_UZHGOROD;

  /// @brief Field EUROPE_VADUZ value: I32(481)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_VADUZ;

  /// @brief Field EUROPE_VATICAN value: I32(482)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_VATICAN;

  /// @brief Field EUROPE_VIENNA value: I32(483)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_VIENNA;

  /// @brief Field EUROPE_VILNIUS value: I32(484)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_VILNIUS;

  /// @brief Field EUROPE_VOLGOGRAD value: I32(485)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_VOLGOGRAD;

  /// @brief Field EUROPE_WARSAW value: I32(486)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_WARSAW;

  /// @brief Field EUROPE_ZAGREB value: I32(487)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_ZAGREB;

  /// @brief Field EUROPE_ZAPOROZHYE value: I32(488)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_ZAPOROZHYE;

  /// @brief Field EUROPE_ZURICH value: I32(489)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const EUROPE_ZURICH;

  /// @brief Field FACTORY value: I32(490)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const FACTORY;

  /// @brief Field GB value: I32(491)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const GB;

  /// @brief Field GB_EIRE value: I32(492)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const GB_EIRE;

  /// @brief Field GMT value: I32(493)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const GMT;

  /// @brief Field GMT0 value: I32(496)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const GMT0;

  /// @brief Field GMT_M0 value: I32(494)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const GMT_M0;

  /// @brief Field GMT_P0 value: I32(495)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const GMT_P0;

  /// @brief Field GREENWICH value: I32(497)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const GREENWICH;

  /// @brief Field HONGKONG value: I32(498)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const HONGKONG;

  /// @brief Field HST value: I32(499)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const HST;

  /// @brief Field ICELAND value: I32(500)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ICELAND;

  /// @brief Field INDIAN_ANTANANARIVO value: I32(501)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const INDIAN_ANTANANARIVO;

  /// @brief Field INDIAN_CHAGOS value: I32(502)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const INDIAN_CHAGOS;

  /// @brief Field INDIAN_CHRISTMAS value: I32(503)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const INDIAN_CHRISTMAS;

  /// @brief Field INDIAN_COCOS value: I32(504)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const INDIAN_COCOS;

  /// @brief Field INDIAN_COMORO value: I32(505)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const INDIAN_COMORO;

  /// @brief Field INDIAN_KERGUELEN value: I32(506)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const INDIAN_KERGUELEN;

  /// @brief Field INDIAN_MAHE value: I32(507)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const INDIAN_MAHE;

  /// @brief Field INDIAN_MALDIVES value: I32(508)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const INDIAN_MALDIVES;

  /// @brief Field INDIAN_MAURITIUS value: I32(509)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const INDIAN_MAURITIUS;

  /// @brief Field INDIAN_MAYOTTE value: I32(510)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const INDIAN_MAYOTTE;

  /// @brief Field INDIAN_REUNION value: I32(511)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const INDIAN_REUNION;

  /// @brief Field IRAN value: I32(512)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const IRAN;

  /// @brief Field ISRAEL value: I32(513)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ISRAEL;

  /// @brief Field JAMAICA value: I32(514)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const JAMAICA;

  /// @brief Field JAPAN value: I32(515)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const JAPAN;

  /// @brief Field KWAJALEIN value: I32(516)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const KWAJALEIN;

  /// @brief Field LIBYA value: I32(517)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const LIBYA;

  /// @brief Field MET value: I32(518)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const MET;

  /// @brief Field MEXICO_BAJANORTE value: I32(519)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const MEXICO_BAJANORTE;

  /// @brief Field MEXICO_BAJASUR value: I32(520)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const MEXICO_BAJASUR;

  /// @brief Field MEXICO_GENERAL value: I32(521)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const MEXICO_GENERAL;

  /// @brief Field MST value: I32(522)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const MST;

  /// @brief Field MST7MDT value: I32(523)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const MST7MDT;

  /// @brief Field NAVAJO value: I32(524)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const NAVAJO;

  /// @brief Field NZ value: I32(525)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const NZ;

  /// @brief Field NZ_CHAT value: I32(526)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const NZ_CHAT;

  /// @brief Field PACIFIC_APIA value: I32(527)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_APIA;

  /// @brief Field PACIFIC_AUCKLAND value: I32(528)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_AUCKLAND;

  /// @brief Field PACIFIC_BOUGAINVILLE value: I32(529)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_BOUGAINVILLE;

  /// @brief Field PACIFIC_CHATHAM value: I32(530)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_CHATHAM;

  /// @brief Field PACIFIC_CHUUK value: I32(531)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_CHUUK;

  /// @brief Field PACIFIC_EASTER value: I32(532)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_EASTER;

  /// @brief Field PACIFIC_EFATE value: I32(533)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_EFATE;

  /// @brief Field PACIFIC_ENDERBURY value: I32(534)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_ENDERBURY;

  /// @brief Field PACIFIC_FAKAOFO value: I32(535)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_FAKAOFO;

  /// @brief Field PACIFIC_FIJI value: I32(536)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_FIJI;

  /// @brief Field PACIFIC_FUNAFUTI value: I32(537)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_FUNAFUTI;

  /// @brief Field PACIFIC_GALAPAGOS value: I32(538)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_GALAPAGOS;

  /// @brief Field PACIFIC_GAMBIER value: I32(539)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_GAMBIER;

  /// @brief Field PACIFIC_GUADALCANAL value: I32(540)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_GUADALCANAL;

  /// @brief Field PACIFIC_GUAM value: I32(541)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_GUAM;

  /// @brief Field PACIFIC_HONOLULU value: I32(542)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_HONOLULU;

  /// @brief Field PACIFIC_JOHNSTON value: I32(543)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_JOHNSTON;

  /// @brief Field PACIFIC_KIRITIMATI value: I32(544)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_KIRITIMATI;

  /// @brief Field PACIFIC_KOSRAE value: I32(545)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_KOSRAE;

  /// @brief Field PACIFIC_KWAJALEIN value: I32(546)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_KWAJALEIN;

  /// @brief Field PACIFIC_MAJURO value: I32(547)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_MAJURO;

  /// @brief Field PACIFIC_MARQUESAS value: I32(548)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_MARQUESAS;

  /// @brief Field PACIFIC_MIDWAY value: I32(549)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_MIDWAY;

  /// @brief Field PACIFIC_NAURU value: I32(550)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_NAURU;

  /// @brief Field PACIFIC_NIUE value: I32(551)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_NIUE;

  /// @brief Field PACIFIC_NORFOLK value: I32(552)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_NORFOLK;

  /// @brief Field PACIFIC_NOUMEA value: I32(553)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_NOUMEA;

  /// @brief Field PACIFIC_PAGO_PAGO value: I32(554)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_PAGO_PAGO;

  /// @brief Field PACIFIC_PALAU value: I32(555)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_PALAU;

  /// @brief Field PACIFIC_PITCAIRN value: I32(556)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_PITCAIRN;

  /// @brief Field PACIFIC_POHNPEI value: I32(557)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_POHNPEI;

  /// @brief Field PACIFIC_PONAPE value: I32(558)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_PONAPE;

  /// @brief Field PACIFIC_PORT_MORESBY value: I32(559)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_PORT_MORESBY;

  /// @brief Field PACIFIC_RAROTONGA value: I32(560)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_RAROTONGA;

  /// @brief Field PACIFIC_SAIPAN value: I32(561)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_SAIPAN;

  /// @brief Field PACIFIC_SAMOA value: I32(562)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_SAMOA;

  /// @brief Field PACIFIC_TAHITI value: I32(563)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_TAHITI;

  /// @brief Field PACIFIC_TARAWA value: I32(564)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_TARAWA;

  /// @brief Field PACIFIC_TONGATAPU value: I32(565)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_TONGATAPU;

  /// @brief Field PACIFIC_TRUK value: I32(566)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_TRUK;

  /// @brief Field PACIFIC_WAKE value: I32(567)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_WAKE;

  /// @brief Field PACIFIC_WALLIS value: I32(568)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_WALLIS;

  /// @brief Field PACIFIC_YAP value: I32(569)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PACIFIC_YAP;

  /// @brief Field POLAND value: I32(570)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const POLAND;

  /// @brief Field PORTUGAL value: I32(571)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PORTUGAL;

  /// @brief Field PRC value: I32(572)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PRC;

  /// @brief Field PST8PDT value: I32(573)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const PST8PDT;

  /// @brief Field ROC value: I32(574)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ROC;

  /// @brief Field ROK value: I32(575)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ROK;

  /// @brief Field SINGAPORE value: I32(576)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const SINGAPORE;

  /// @brief Field TURKEY value: I32(577)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const TURKEY;

  /// @brief Field UCT value: I32(578)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const UCT;

  /// @brief Field UNIVERSAL value: I32(579)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const UNIVERSAL;

  /// @brief Field US_ALASKA value: I32(580)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const US_ALASKA;

  /// @brief Field US_ALEUTIAN value: I32(581)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const US_ALEUTIAN;

  /// @brief Field US_ARIZONA value: I32(582)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const US_ARIZONA;

  /// @brief Field US_CENTRAL value: I32(583)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const US_CENTRAL;

  /// @brief Field US_EASTERN value: I32(585)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const US_EASTERN;

  /// @brief Field US_EAST_INDIANA value: I32(584)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const US_EAST_INDIANA;

  /// @brief Field US_HAWAII value: I32(586)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const US_HAWAII;

  /// @brief Field US_INDIANA_STARKE value: I32(587)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const US_INDIANA_STARKE;

  /// @brief Field US_MICHIGAN value: I32(588)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const US_MICHIGAN;

  /// @brief Field US_MOUNTAIN value: I32(589)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const US_MOUNTAIN;

  /// @brief Field US_PACIFIC value: I32(590)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const US_PACIFIC;

  /// @brief Field US_SAMOA value: I32(591)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const US_SAMOA;

  /// @brief Field UTC value: I32(592)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const UTC;

  /// @brief Field WET value: I32(594)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const WET;

  /// @brief Field W_SU value: I32(593)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const W_SU;

  /// @brief Field ZULU value: I32(595)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const ZULU;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20674 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field __UnknownValue value: I32(0)
  static ::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum const __UnknownValue;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum) == 0x4, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Enums

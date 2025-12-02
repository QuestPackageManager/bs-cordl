#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Enums/ISOCountryCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ISOCountryCode)
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Enums {
struct ISOCountryCode;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Main::GraphQL::Enums::ISOCountryCode);
// Dependencies
namespace BeatSaber::Main::GraphQL::Enums {
// Is value type: true
// CS Name: BeatSaber.Main.GraphQL.Enums.ISOCountryCode
struct CORDL_TYPE ISOCountryCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ISOCountryCode_Unwrapped
  enum struct __ISOCountryCode_Unwrapped : int32_t {
    __E___UnknownValue = static_cast<int32_t>(0x0),
    __E_AC = static_cast<int32_t>(0x1),
    __E_AD = static_cast<int32_t>(0x2),
    __E_AE = static_cast<int32_t>(0x3),
    __E_AF = static_cast<int32_t>(0x4),
    __E_AG = static_cast<int32_t>(0x5),
    __E_AI = static_cast<int32_t>(0x6),
    __E_AL = static_cast<int32_t>(0x7),
    __E_AM = static_cast<int32_t>(0x8),
    __E_AN = static_cast<int32_t>(0x9),
    __E_AO = static_cast<int32_t>(0xa),
    __E_AQ = static_cast<int32_t>(0xb),
    __E_AR = static_cast<int32_t>(0xc),
    __E_AS = static_cast<int32_t>(0xd),
    __E_AT = static_cast<int32_t>(0xe),
    __E_AU = static_cast<int32_t>(0xf),
    __E_AW = static_cast<int32_t>(0x10),
    __E_AX = static_cast<int32_t>(0x11),
    __E_AZ = static_cast<int32_t>(0x12),
    __E_BA = static_cast<int32_t>(0x13),
    __E_BB = static_cast<int32_t>(0x14),
    __E_BD = static_cast<int32_t>(0x15),
    __E_BE = static_cast<int32_t>(0x16),
    __E_BF = static_cast<int32_t>(0x17),
    __E_BG = static_cast<int32_t>(0x18),
    __E_BH = static_cast<int32_t>(0x19),
    __E_BI = static_cast<int32_t>(0x1a),
    __E_BJ = static_cast<int32_t>(0x1b),
    __E_BL = static_cast<int32_t>(0x1c),
    __E_BM = static_cast<int32_t>(0x1d),
    __E_BN = static_cast<int32_t>(0x1e),
    __E_BO = static_cast<int32_t>(0x1f),
    __E_BQ = static_cast<int32_t>(0x20),
    __E_BR = static_cast<int32_t>(0x21),
    __E_BS = static_cast<int32_t>(0x22),
    __E_BT = static_cast<int32_t>(0x23),
    __E_BV = static_cast<int32_t>(0x24),
    __E_BW = static_cast<int32_t>(0x25),
    __E_BY = static_cast<int32_t>(0x26),
    __E_BZ = static_cast<int32_t>(0x27),
    __E_CA = static_cast<int32_t>(0x28),
    __E_CC = static_cast<int32_t>(0x29),
    __E_CD = static_cast<int32_t>(0x2a),
    __E_CF = static_cast<int32_t>(0x2b),
    __E_CG = static_cast<int32_t>(0x2c),
    __E_CH = static_cast<int32_t>(0x2d),
    __E_CI = static_cast<int32_t>(0x2e),
    __E_CK = static_cast<int32_t>(0x2f),
    __E_CL = static_cast<int32_t>(0x30),
    __E_CM = static_cast<int32_t>(0x31),
    __E_CN = static_cast<int32_t>(0x32),
    __E_CO = static_cast<int32_t>(0x33),
    __E_CR = static_cast<int32_t>(0x34),
    __E_CU = static_cast<int32_t>(0x35),
    __E_CV = static_cast<int32_t>(0x36),
    __E_CW = static_cast<int32_t>(0x37),
    __E_CX = static_cast<int32_t>(0x38),
    __E_CY = static_cast<int32_t>(0x39),
    __E_CZ = static_cast<int32_t>(0x3a),
    __E_DE = static_cast<int32_t>(0x3b),
    __E_DJ = static_cast<int32_t>(0x3c),
    __E_DK = static_cast<int32_t>(0x3d),
    __E_DM = static_cast<int32_t>(0x3e),
    __E_DO = static_cast<int32_t>(0x3f),
    __E_DZ = static_cast<int32_t>(0x40),
    __E_EC = static_cast<int32_t>(0x41),
    __E_EE = static_cast<int32_t>(0x42),
    __E_EG = static_cast<int32_t>(0x43),
    __E_EH = static_cast<int32_t>(0x44),
    __E_ER = static_cast<int32_t>(0x45),
    __E_ES = static_cast<int32_t>(0x46),
    __E_ET = static_cast<int32_t>(0x47),
    __E_FI = static_cast<int32_t>(0x48),
    __E_FJ = static_cast<int32_t>(0x49),
    __E_FK = static_cast<int32_t>(0x4a),
    __E_FM = static_cast<int32_t>(0x4b),
    __E_FO = static_cast<int32_t>(0x4c),
    __E_FR = static_cast<int32_t>(0x4d),
    __E_GA = static_cast<int32_t>(0x4e),
    __E_GB = static_cast<int32_t>(0x4f),
    __E_GD = static_cast<int32_t>(0x50),
    __E_GE = static_cast<int32_t>(0x51),
    __E_GF = static_cast<int32_t>(0x52),
    __E_GG = static_cast<int32_t>(0x53),
    __E_GH = static_cast<int32_t>(0x54),
    __E_GI = static_cast<int32_t>(0x55),
    __E_GL = static_cast<int32_t>(0x56),
    __E_GM = static_cast<int32_t>(0x57),
    __E_GN = static_cast<int32_t>(0x58),
    __E_GP = static_cast<int32_t>(0x59),
    __E_GQ = static_cast<int32_t>(0x5a),
    __E_GR = static_cast<int32_t>(0x5b),
    __E_GS = static_cast<int32_t>(0x5c),
    __E_GT = static_cast<int32_t>(0x5d),
    __E_GU = static_cast<int32_t>(0x5e),
    __E_GW = static_cast<int32_t>(0x5f),
    __E_GY = static_cast<int32_t>(0x60),
    __E_HK = static_cast<int32_t>(0x61),
    __E_HM = static_cast<int32_t>(0x62),
    __E_HN = static_cast<int32_t>(0x63),
    __E_HR = static_cast<int32_t>(0x64),
    __E_HT = static_cast<int32_t>(0x65),
    __E_HU = static_cast<int32_t>(0x66),
    __E_ID = static_cast<int32_t>(0x67),
    __E_IE = static_cast<int32_t>(0x68),
    __E_IL = static_cast<int32_t>(0x69),
    __E_IM = static_cast<int32_t>(0x6a),
    __E_IN = static_cast<int32_t>(0x6b),
    __E_IO = static_cast<int32_t>(0x6c),
    __E_IQ = static_cast<int32_t>(0x6d),
    __E_IR = static_cast<int32_t>(0x6e),
    __E_IS = static_cast<int32_t>(0x6f),
    __E_IT = static_cast<int32_t>(0x70),
    __E_JE = static_cast<int32_t>(0x71),
    __E_JM = static_cast<int32_t>(0x72),
    __E_JO = static_cast<int32_t>(0x73),
    __E_JP = static_cast<int32_t>(0x74),
    __E_KE = static_cast<int32_t>(0x75),
    __E_KG = static_cast<int32_t>(0x76),
    __E_KH = static_cast<int32_t>(0x77),
    __E_KI = static_cast<int32_t>(0x78),
    __E_KM = static_cast<int32_t>(0x79),
    __E_KN = static_cast<int32_t>(0x7a),
    __E_KP = static_cast<int32_t>(0x7b),
    __E_KR = static_cast<int32_t>(0x7c),
    __E_KW = static_cast<int32_t>(0x7d),
    __E_KY = static_cast<int32_t>(0x7e),
    __E_KZ = static_cast<int32_t>(0x7f),
    __E_LA = static_cast<int32_t>(0x80),
    __E_LB = static_cast<int32_t>(0x81),
    __E_LC = static_cast<int32_t>(0x82),
    __E_LI = static_cast<int32_t>(0x83),
    __E_LK = static_cast<int32_t>(0x84),
    __E_LR = static_cast<int32_t>(0x85),
    __E_LS = static_cast<int32_t>(0x86),
    __E_LT = static_cast<int32_t>(0x87),
    __E_LU = static_cast<int32_t>(0x88),
    __E_LV = static_cast<int32_t>(0x89),
    __E_LY = static_cast<int32_t>(0x8a),
    __E_MA = static_cast<int32_t>(0x8b),
    __E_MC = static_cast<int32_t>(0x8c),
    __E_MD = static_cast<int32_t>(0x8d),
    __E_ME = static_cast<int32_t>(0x8e),
    __E_MF = static_cast<int32_t>(0x8f),
    __E_MG = static_cast<int32_t>(0x90),
    __E_MH = static_cast<int32_t>(0x91),
    __E_MK = static_cast<int32_t>(0x92),
    __E_ML = static_cast<int32_t>(0x93),
    __E_MM = static_cast<int32_t>(0x94),
    __E_MN = static_cast<int32_t>(0x95),
    __E_MO = static_cast<int32_t>(0x96),
    __E_MP = static_cast<int32_t>(0x97),
    __E_MQ = static_cast<int32_t>(0x98),
    __E_MR = static_cast<int32_t>(0x99),
    __E_MS = static_cast<int32_t>(0x9a),
    __E_MT = static_cast<int32_t>(0x9b),
    __E_MU = static_cast<int32_t>(0x9c),
    __E_MV = static_cast<int32_t>(0x9d),
    __E_MW = static_cast<int32_t>(0x9e),
    __E_MX = static_cast<int32_t>(0x9f),
    __E_MY = static_cast<int32_t>(0xa0),
    __E_MZ = static_cast<int32_t>(0xa1),
    __E_NA = static_cast<int32_t>(0xa2),
    __E_NC = static_cast<int32_t>(0xa3),
    __E_NE = static_cast<int32_t>(0xa4),
    __E_NF = static_cast<int32_t>(0xa5),
    __E_NG = static_cast<int32_t>(0xa6),
    __E_NI = static_cast<int32_t>(0xa7),
    __E_NL = static_cast<int32_t>(0xa8),
    __E_NO = static_cast<int32_t>(0xa9),
    __E_NP = static_cast<int32_t>(0xaa),
    __E_NR = static_cast<int32_t>(0xab),
    __E_NU = static_cast<int32_t>(0xac),
    __E_NZ = static_cast<int32_t>(0xad),
    __E_OM = static_cast<int32_t>(0xae),
    __E_PA = static_cast<int32_t>(0xaf),
    __E_PE = static_cast<int32_t>(0xb0),
    __E_PF = static_cast<int32_t>(0xb1),
    __E_PG = static_cast<int32_t>(0xb2),
    __E_PH = static_cast<int32_t>(0xb3),
    __E_PK = static_cast<int32_t>(0xb4),
    __E_PL = static_cast<int32_t>(0xb5),
    __E_PM = static_cast<int32_t>(0xb6),
    __E_PN = static_cast<int32_t>(0xb7),
    __E_PR = static_cast<int32_t>(0xb8),
    __E_PS = static_cast<int32_t>(0xb9),
    __E_PT = static_cast<int32_t>(0xba),
    __E_PW = static_cast<int32_t>(0xbb),
    __E_PY = static_cast<int32_t>(0xbc),
    __E_QA = static_cast<int32_t>(0xbd),
    __E_RE = static_cast<int32_t>(0xbe),
    __E_RO = static_cast<int32_t>(0xbf),
    __E_RS = static_cast<int32_t>(0xc0),
    __E_RU = static_cast<int32_t>(0xc1),
    __E_RW = static_cast<int32_t>(0xc2),
    __E_SA = static_cast<int32_t>(0xc3),
    __E_SB = static_cast<int32_t>(0xc4),
    __E_SC = static_cast<int32_t>(0xc5),
    __E_SD = static_cast<int32_t>(0xc6),
    __E_SE = static_cast<int32_t>(0xc7),
    __E_SG = static_cast<int32_t>(0xc8),
    __E_SH = static_cast<int32_t>(0xc9),
    __E_SI = static_cast<int32_t>(0xca),
    __E_SJ = static_cast<int32_t>(0xcb),
    __E_SK = static_cast<int32_t>(0xcc),
    __E_SL = static_cast<int32_t>(0xcd),
    __E_SM = static_cast<int32_t>(0xce),
    __E_SN = static_cast<int32_t>(0xcf),
    __E_SO = static_cast<int32_t>(0xd0),
    __E_SR = static_cast<int32_t>(0xd1),
    __E_SS = static_cast<int32_t>(0xd2),
    __E_ST = static_cast<int32_t>(0xd3),
    __E_SV = static_cast<int32_t>(0xd4),
    __E_SX = static_cast<int32_t>(0xd5),
    __E_SY = static_cast<int32_t>(0xd6),
    __E_SZ = static_cast<int32_t>(0xd7),
    __E_TC = static_cast<int32_t>(0xd8),
    __E_TD = static_cast<int32_t>(0xd9),
    __E_TF = static_cast<int32_t>(0xda),
    __E_TG = static_cast<int32_t>(0xdb),
    __E_TH = static_cast<int32_t>(0xdc),
    __E_TJ = static_cast<int32_t>(0xdd),
    __E_TK = static_cast<int32_t>(0xde),
    __E_TL = static_cast<int32_t>(0xdf),
    __E_TM = static_cast<int32_t>(0xe0),
    __E_TN = static_cast<int32_t>(0xe1),
    __E_TO = static_cast<int32_t>(0xe2),
    __E_TR = static_cast<int32_t>(0xe3),
    __E_TT = static_cast<int32_t>(0xe4),
    __E_TV = static_cast<int32_t>(0xe5),
    __E_TW = static_cast<int32_t>(0xe6),
    __E_TZ = static_cast<int32_t>(0xe7),
    __E_UA = static_cast<int32_t>(0xe8),
    __E_UG = static_cast<int32_t>(0xe9),
    __E_UM = static_cast<int32_t>(0xea),
    __E_US = static_cast<int32_t>(0xeb),
    __E_UY = static_cast<int32_t>(0xec),
    __E_UZ = static_cast<int32_t>(0xed),
    __E_VA = static_cast<int32_t>(0xee),
    __E_VC = static_cast<int32_t>(0xef),
    __E_VE = static_cast<int32_t>(0xf0),
    __E_VG = static_cast<int32_t>(0xf1),
    __E_VI = static_cast<int32_t>(0xf2),
    __E_VN = static_cast<int32_t>(0xf3),
    __E_VU = static_cast<int32_t>(0xf4),
    __E_WF = static_cast<int32_t>(0xf5),
    __E_WS = static_cast<int32_t>(0xf6),
    __E_XK = static_cast<int32_t>(0xf7),
    __E_YE = static_cast<int32_t>(0xf8),
    __E_YT = static_cast<int32_t>(0xf9),
    __E_ZA = static_cast<int32_t>(0xfa),
    __E_ZM = static_cast<int32_t>(0xfb),
    __E_ZW = static_cast<int32_t>(0xfc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ISOCountryCode_Unwrapped() const noexcept {
    return static_cast<__ISOCountryCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ISOCountryCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ISOCountryCode(int32_t value__) noexcept;

  /// @brief Field AC value: I32(1)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AC;

  /// @brief Field AD value: I32(2)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AD;

  /// @brief Field AE value: I32(3)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AE;

  /// @brief Field AF value: I32(4)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AF;

  /// @brief Field AG value: I32(5)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AG;

  /// @brief Field AI value: I32(6)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AI;

  /// @brief Field AL value: I32(7)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AL;

  /// @brief Field AM value: I32(8)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AM;

  /// @brief Field AN value: I32(9)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AN;

  /// @brief Field AO value: I32(10)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AO;

  /// @brief Field AQ value: I32(11)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AQ;

  /// @brief Field AR value: I32(12)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AR;

  /// @brief Field AS value: I32(13)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AS;

  /// @brief Field AT value: I32(14)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AT;

  /// @brief Field AU value: I32(15)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AU;

  /// @brief Field AW value: I32(16)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AW;

  /// @brief Field AX value: I32(17)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AX;

  /// @brief Field AZ value: I32(18)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const AZ;

  /// @brief Field BA value: I32(19)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BA;

  /// @brief Field BB value: I32(20)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BB;

  /// @brief Field BD value: I32(21)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BD;

  /// @brief Field BE value: I32(22)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BE;

  /// @brief Field BF value: I32(23)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BF;

  /// @brief Field BG value: I32(24)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BG;

  /// @brief Field BH value: I32(25)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BH;

  /// @brief Field BI value: I32(26)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BI;

  /// @brief Field BJ value: I32(27)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BJ;

  /// @brief Field BL value: I32(28)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BL;

  /// @brief Field BM value: I32(29)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BM;

  /// @brief Field BN value: I32(30)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BN;

  /// @brief Field BO value: I32(31)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BO;

  /// @brief Field BQ value: I32(32)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BQ;

  /// @brief Field BR value: I32(33)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BR;

  /// @brief Field BS value: I32(34)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BS;

  /// @brief Field BT value: I32(35)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BT;

  /// @brief Field BV value: I32(36)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BV;

  /// @brief Field BW value: I32(37)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BW;

  /// @brief Field BY value: I32(38)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BY;

  /// @brief Field BZ value: I32(39)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const BZ;

  /// @brief Field CA value: I32(40)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CA;

  /// @brief Field CC value: I32(41)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CC;

  /// @brief Field CD value: I32(42)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CD;

  /// @brief Field CF value: I32(43)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CF;

  /// @brief Field CG value: I32(44)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CG;

  /// @brief Field CH value: I32(45)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CH;

  /// @brief Field CI value: I32(46)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CI;

  /// @brief Field CK value: I32(47)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CK;

  /// @brief Field CL value: I32(48)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CL;

  /// @brief Field CM value: I32(49)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CM;

  /// @brief Field CN value: I32(50)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CN;

  /// @brief Field CO value: I32(51)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CO;

  /// @brief Field CR value: I32(52)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CR;

  /// @brief Field CU value: I32(53)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CU;

  /// @brief Field CV value: I32(54)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CV;

  /// @brief Field CW value: I32(55)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CW;

  /// @brief Field CX value: I32(56)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CX;

  /// @brief Field CY value: I32(57)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CY;

  /// @brief Field CZ value: I32(58)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const CZ;

  /// @brief Field DE value: I32(59)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const DE;

  /// @brief Field DJ value: I32(60)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const DJ;

  /// @brief Field DK value: I32(61)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const DK;

  /// @brief Field DM value: I32(62)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const DM;

  /// @brief Field DO value: I32(63)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const DO;

  /// @brief Field DZ value: I32(64)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const DZ;

  /// @brief Field EC value: I32(65)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const EC;

  /// @brief Field EE value: I32(66)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const EE;

  /// @brief Field EG value: I32(67)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const EG;

  /// @brief Field EH value: I32(68)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const EH;

  /// @brief Field ER value: I32(69)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const ER;

  /// @brief Field ES value: I32(70)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const ES;

  /// @brief Field ET value: I32(71)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const ET;

  /// @brief Field FI value: I32(72)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const FI;

  /// @brief Field FJ value: I32(73)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const FJ;

  /// @brief Field FK value: I32(74)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const FK;

  /// @brief Field FM value: I32(75)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const FM;

  /// @brief Field FO value: I32(76)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const FO;

  /// @brief Field FR value: I32(77)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const FR;

  /// @brief Field GA value: I32(78)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GA;

  /// @brief Field GB value: I32(79)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GB;

  /// @brief Field GD value: I32(80)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GD;

  /// @brief Field GE value: I32(81)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GE;

  /// @brief Field GF value: I32(82)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GF;

  /// @brief Field GG value: I32(83)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GG;

  /// @brief Field GH value: I32(84)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GH;

  /// @brief Field GI value: I32(85)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GI;

  /// @brief Field GL value: I32(86)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GL;

  /// @brief Field GM value: I32(87)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GM;

  /// @brief Field GN value: I32(88)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GN;

  /// @brief Field GP value: I32(89)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GP;

  /// @brief Field GQ value: I32(90)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GQ;

  /// @brief Field GR value: I32(91)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GR;

  /// @brief Field GS value: I32(92)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GS;

  /// @brief Field GT value: I32(93)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GT;

  /// @brief Field GU value: I32(94)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GU;

  /// @brief Field GW value: I32(95)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GW;

  /// @brief Field GY value: I32(96)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const GY;

  /// @brief Field HK value: I32(97)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const HK;

  /// @brief Field HM value: I32(98)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const HM;

  /// @brief Field HN value: I32(99)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const HN;

  /// @brief Field HR value: I32(100)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const HR;

  /// @brief Field HT value: I32(101)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const HT;

  /// @brief Field HU value: I32(102)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const HU;

  /// @brief Field IE value: I32(104)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const IE;

  /// @brief Field IL value: I32(105)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const IL;

  /// @brief Field IM value: I32(106)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const IM;

  /// @brief Field IN value: I32(107)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const IN;

  /// @brief Field IO value: I32(108)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const IO;

  /// @brief Field IQ value: I32(109)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const IQ;

  /// @brief Field IR value: I32(110)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const IR;

  /// @brief Field IS value: I32(111)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const IS;

  /// @brief Field IT value: I32(112)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const IT;

  /// @brief Field JE value: I32(113)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const JE;

  /// @brief Field JM value: I32(114)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const JM;

  /// @brief Field JO value: I32(115)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const JO;

  /// @brief Field JP value: I32(116)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const JP;

  /// @brief Field KE value: I32(117)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const KE;

  /// @brief Field KG value: I32(118)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const KG;

  /// @brief Field KH value: I32(119)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const KH;

  /// @brief Field KI value: I32(120)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const KI;

  /// @brief Field KM value: I32(121)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const KM;

  /// @brief Field KN value: I32(122)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const KN;

  /// @brief Field KP value: I32(123)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const KP;

  /// @brief Field KR value: I32(124)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const KR;

  /// @brief Field KW value: I32(125)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const KW;

  /// @brief Field KY value: I32(126)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const KY;

  /// @brief Field KZ value: I32(127)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const KZ;

  /// @brief Field LA value: I32(128)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const LA;

  /// @brief Field LB value: I32(129)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const LB;

  /// @brief Field LC value: I32(130)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const LC;

  /// @brief Field LI value: I32(131)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const LI;

  /// @brief Field LK value: I32(132)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const LK;

  /// @brief Field LR value: I32(133)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const LR;

  /// @brief Field LS value: I32(134)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const LS;

  /// @brief Field LT value: I32(135)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const LT;

  /// @brief Field LU value: I32(136)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const LU;

  /// @brief Field LV value: I32(137)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const LV;

  /// @brief Field LY value: I32(138)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const LY;

  /// @brief Field MA value: I32(139)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MA;

  /// @brief Field MC value: I32(140)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MC;

  /// @brief Field MD value: I32(141)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MD;

  /// @brief Field ME value: I32(142)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const ME;

  /// @brief Field MF value: I32(143)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MF;

  /// @brief Field MG value: I32(144)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MG;

  /// @brief Field MH value: I32(145)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MH;

  /// @brief Field MK value: I32(146)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MK;

  /// @brief Field ML value: I32(147)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const ML;

  /// @brief Field MM value: I32(148)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MM;

  /// @brief Field MN value: I32(149)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MN;

  /// @brief Field MO value: I32(150)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MO;

  /// @brief Field MP value: I32(151)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MP;

  /// @brief Field MQ value: I32(152)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MQ;

  /// @brief Field MR value: I32(153)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MR;

  /// @brief Field MS value: I32(154)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MS;

  /// @brief Field MT value: I32(155)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MT;

  /// @brief Field MU value: I32(156)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MU;

  /// @brief Field MV value: I32(157)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MV;

  /// @brief Field MW value: I32(158)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MW;

  /// @brief Field MX value: I32(159)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MX;

  /// @brief Field MY value: I32(160)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MY;

  /// @brief Field MZ value: I32(161)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const MZ;

  /// @brief Field NA value: I32(162)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const NA;

  /// @brief Field NC value: I32(163)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const NC;

  /// @brief Field NE value: I32(164)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const NE;

  /// @brief Field NF value: I32(165)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const NF;

  /// @brief Field NG value: I32(166)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const NG;

  /// @brief Field NI value: I32(167)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const NI;

  /// @brief Field NL value: I32(168)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const NL;

  /// @brief Field NO value: I32(169)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const NO;

  /// @brief Field NP value: I32(170)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const NP;

  /// @brief Field NR value: I32(171)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const NR;

  /// @brief Field NU value: I32(172)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const NU;

  /// @brief Field NZ value: I32(173)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const NZ;

  /// @brief Field OM value: I32(174)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const OM;

  /// @brief Field PA value: I32(175)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PA;

  /// @brief Field PE value: I32(176)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PE;

  /// @brief Field PF value: I32(177)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PF;

  /// @brief Field PG value: I32(178)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PG;

  /// @brief Field PH value: I32(179)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PH;

  /// @brief Field PK value: I32(180)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PK;

  /// @brief Field PL value: I32(181)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PL;

  /// @brief Field PM value: I32(182)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PM;

  /// @brief Field PN value: I32(183)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PN;

  /// @brief Field PR value: I32(184)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PR;

  /// @brief Field PS value: I32(185)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PS;

  /// @brief Field PT value: I32(186)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PT;

  /// @brief Field PW value: I32(187)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PW;

  /// @brief Field PY value: I32(188)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const PY;

  /// @brief Field QA value: I32(189)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const QA;

  /// @brief Field RE value: I32(190)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const RE;

  /// @brief Field RO value: I32(191)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const RO;

  /// @brief Field RS value: I32(192)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const RS;

  /// @brief Field RU value: I32(193)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const RU;

  /// @brief Field RW value: I32(194)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const RW;

  /// @brief Field SA value: I32(195)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SA;

  /// @brief Field SB value: I32(196)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SB;

  /// @brief Field SC value: I32(197)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SC;

  /// @brief Field SD value: I32(198)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SD;

  /// @brief Field SE value: I32(199)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SE;

  /// @brief Field SG value: I32(200)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SG;

  /// @brief Field SH value: I32(201)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SH;

  /// @brief Field SI value: I32(202)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SI;

  /// @brief Field SJ value: I32(203)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SJ;

  /// @brief Field SK value: I32(204)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SK;

  /// @brief Field SL value: I32(205)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SL;

  /// @brief Field SM value: I32(206)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SM;

  /// @brief Field SN value: I32(207)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SN;

  /// @brief Field SO value: I32(208)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SO;

  /// @brief Field SR value: I32(209)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SR;

  /// @brief Field SS value: I32(210)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SS;

  /// @brief Field ST value: I32(211)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const ST;

  /// @brief Field SV value: I32(212)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SV;

  /// @brief Field SX value: I32(213)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SX;

  /// @brief Field SY value: I32(214)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SY;

  /// @brief Field SZ value: I32(215)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const SZ;

  /// @brief Field TC value: I32(216)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TC;

  /// @brief Field TD value: I32(217)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TD;

  /// @brief Field TF value: I32(218)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TF;

  /// @brief Field TG value: I32(219)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TG;

  /// @brief Field TH value: I32(220)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TH;

  /// @brief Field TJ value: I32(221)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TJ;

  /// @brief Field TK value: I32(222)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TK;

  /// @brief Field TL value: I32(223)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TL;

  /// @brief Field TM value: I32(224)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TM;

  /// @brief Field TN value: I32(225)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TN;

  /// @brief Field TO value: I32(226)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TO;

  /// @brief Field TR value: I32(227)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TR;

  /// @brief Field TT value: I32(228)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TT;

  /// @brief Field TV value: I32(229)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TV;

  /// @brief Field TW value: I32(230)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TW;

  /// @brief Field TZ value: I32(231)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const TZ;

  /// @brief Field UA value: I32(232)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const UA;

  /// @brief Field UG value: I32(233)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const UG;

  /// @brief Field UM value: I32(234)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const UM;

  /// @brief Field US value: I32(235)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const US;

  /// @brief Field UY value: I32(236)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const UY;

  /// @brief Field UZ value: I32(237)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const UZ;

  /// @brief Field VA value: I32(238)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const VA;

  /// @brief Field VC value: I32(239)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const VC;

  /// @brief Field VE value: I32(240)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const VE;

  /// @brief Field VG value: I32(241)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const VG;

  /// @brief Field VI value: I32(242)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const VI;

  /// @brief Field VN value: I32(243)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const VN;

  /// @brief Field VU value: I32(244)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const VU;

  /// @brief Field WF value: I32(245)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const WF;

  /// @brief Field WS value: I32(246)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const WS;

  /// @brief Field XK value: I32(247)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const XK;

  /// @brief Field YE value: I32(248)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const YE;

  /// @brief Field YT value: I32(249)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const YT;

  /// @brief Field ZA value: I32(250)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const ZA;

  /// @brief Field ZM value: I32(251)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const ZM;

  /// @brief Field ZW value: I32(252)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const ZW;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20922 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field __UnknownValue value: I32(0)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const __UnknownValue;

  /// @brief Field ID value: I32(103)
  static ::BeatSaber::Main::GraphQL::Enums::ISOCountryCode const _cordl_ID;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Enums::ISOCountryCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Enums::ISOCountryCode, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Enums
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Enums::ISOCountryCode, "BeatSaber.Main.GraphQL.Enums", "ISOCountryCode");

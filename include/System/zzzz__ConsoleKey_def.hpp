#pragma once
// IWYU pragma private; include "System/ConsoleKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleKey)
// Forward declare root types
namespace System {
struct ConsoleKey;
}
// Write type traits
MARK_VAL_T(::System::ConsoleKey);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.ConsoleKey
struct CORDL_TYPE ConsoleKey {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConsoleKey_Unwrapped
  enum struct __ConsoleKey_Unwrapped : int32_t {
    __E_Backspace = static_cast<int32_t>(0x8),
    __E_Tab = static_cast<int32_t>(0x9),
    __E_Clear = static_cast<int32_t>(0xc),
    __E_Enter = static_cast<int32_t>(0xd),
    __E_Pause = static_cast<int32_t>(0x13),
    __E_Escape = static_cast<int32_t>(0x1b),
    __E_Spacebar = static_cast<int32_t>(0x20),
    __E_PageUp = static_cast<int32_t>(0x21),
    __E_PageDown = static_cast<int32_t>(0x22),
    __E_End = static_cast<int32_t>(0x23),
    __E_Home = static_cast<int32_t>(0x24),
    __E_LeftArrow = static_cast<int32_t>(0x25),
    __E_UpArrow = static_cast<int32_t>(0x26),
    __E_RightArrow = static_cast<int32_t>(0x27),
    __E_DownArrow = static_cast<int32_t>(0x28),
    __E_Select = static_cast<int32_t>(0x29),
    __E_Print = static_cast<int32_t>(0x2a),
    __E_Execute = static_cast<int32_t>(0x2b),
    __E_PrintScreen = static_cast<int32_t>(0x2c),
    __E_Insert = static_cast<int32_t>(0x2d),
    __E_Delete = static_cast<int32_t>(0x2e),
    __E_Help = static_cast<int32_t>(0x2f),
    __E_D0 = static_cast<int32_t>(0x30),
    __E_D1 = static_cast<int32_t>(0x31),
    __E_D2 = static_cast<int32_t>(0x32),
    __E_D3 = static_cast<int32_t>(0x33),
    __E_D4 = static_cast<int32_t>(0x34),
    __E_D5 = static_cast<int32_t>(0x35),
    __E_D6 = static_cast<int32_t>(0x36),
    __E_D7 = static_cast<int32_t>(0x37),
    __E_D8 = static_cast<int32_t>(0x38),
    __E_D9 = static_cast<int32_t>(0x39),
    __E_A = static_cast<int32_t>(0x41),
    __E_B = static_cast<int32_t>(0x42),
    __E_C = static_cast<int32_t>(0x43),
    __E_D = static_cast<int32_t>(0x44),
    __E_E = static_cast<int32_t>(0x45),
    __E_F = static_cast<int32_t>(0x46),
    __E_G = static_cast<int32_t>(0x47),
    __E_H = static_cast<int32_t>(0x48),
    __E_I = static_cast<int32_t>(0x49),
    __E_J = static_cast<int32_t>(0x4a),
    __E_K = static_cast<int32_t>(0x4b),
    __E_L = static_cast<int32_t>(0x4c),
    __E_M = static_cast<int32_t>(0x4d),
    __E_N = static_cast<int32_t>(0x4e),
    __E_O = static_cast<int32_t>(0x4f),
    __E_P = static_cast<int32_t>(0x50),
    __E_Q = static_cast<int32_t>(0x51),
    __E_R = static_cast<int32_t>(0x52),
    __E_S = static_cast<int32_t>(0x53),
    __E_T = static_cast<int32_t>(0x54),
    __E_U = static_cast<int32_t>(0x55),
    __E_V = static_cast<int32_t>(0x56),
    __E_W = static_cast<int32_t>(0x57),
    __E_X = static_cast<int32_t>(0x58),
    __E_Y = static_cast<int32_t>(0x59),
    __E_Z = static_cast<int32_t>(0x5a),
    __E_LeftWindows = static_cast<int32_t>(0x5b),
    __E_RightWindows = static_cast<int32_t>(0x5c),
    __E_Applications = static_cast<int32_t>(0x5d),
    __E_Sleep = static_cast<int32_t>(0x5f),
    __E_NumPad0 = static_cast<int32_t>(0x60),
    __E_NumPad1 = static_cast<int32_t>(0x61),
    __E_NumPad2 = static_cast<int32_t>(0x62),
    __E_NumPad3 = static_cast<int32_t>(0x63),
    __E_NumPad4 = static_cast<int32_t>(0x64),
    __E_NumPad5 = static_cast<int32_t>(0x65),
    __E_NumPad6 = static_cast<int32_t>(0x66),
    __E_NumPad7 = static_cast<int32_t>(0x67),
    __E_NumPad8 = static_cast<int32_t>(0x68),
    __E_NumPad9 = static_cast<int32_t>(0x69),
    __E_Multiply = static_cast<int32_t>(0x6a),
    __E_Add = static_cast<int32_t>(0x6b),
    __E_Separator = static_cast<int32_t>(0x6c),
    __E_Subtract = static_cast<int32_t>(0x6d),
    __E_Decimal = static_cast<int32_t>(0x6e),
    __E_Divide = static_cast<int32_t>(0x6f),
    __E_F1 = static_cast<int32_t>(0x70),
    __E_F2 = static_cast<int32_t>(0x71),
    __E_F3 = static_cast<int32_t>(0x72),
    __E_F4 = static_cast<int32_t>(0x73),
    __E_F5 = static_cast<int32_t>(0x74),
    __E_F6 = static_cast<int32_t>(0x75),
    __E_F7 = static_cast<int32_t>(0x76),
    __E_F8 = static_cast<int32_t>(0x77),
    __E_F9 = static_cast<int32_t>(0x78),
    __E_F10 = static_cast<int32_t>(0x79),
    __E_F11 = static_cast<int32_t>(0x7a),
    __E_F12 = static_cast<int32_t>(0x7b),
    __E_F13 = static_cast<int32_t>(0x7c),
    __E_F14 = static_cast<int32_t>(0x7d),
    __E_F15 = static_cast<int32_t>(0x7e),
    __E_F16 = static_cast<int32_t>(0x7f),
    __E_F17 = static_cast<int32_t>(0x80),
    __E_F18 = static_cast<int32_t>(0x81),
    __E_F19 = static_cast<int32_t>(0x82),
    __E_F20 = static_cast<int32_t>(0x83),
    __E_F21 = static_cast<int32_t>(0x84),
    __E_F22 = static_cast<int32_t>(0x85),
    __E_F23 = static_cast<int32_t>(0x86),
    __E_F24 = static_cast<int32_t>(0x87),
    __E_BrowserBack = static_cast<int32_t>(0xa6),
    __E_BrowserForward = static_cast<int32_t>(0xa7),
    __E_BrowserRefresh = static_cast<int32_t>(0xa8),
    __E_BrowserStop = static_cast<int32_t>(0xa9),
    __E_BrowserSearch = static_cast<int32_t>(0xaa),
    __E_BrowserFavorites = static_cast<int32_t>(0xab),
    __E_BrowserHome = static_cast<int32_t>(0xac),
    __E_VolumeMute = static_cast<int32_t>(0xad),
    __E_VolumeDown = static_cast<int32_t>(0xae),
    __E_VolumeUp = static_cast<int32_t>(0xaf),
    __E_MediaNext = static_cast<int32_t>(0xb0),
    __E_MediaPrevious = static_cast<int32_t>(0xb1),
    __E_MediaStop = static_cast<int32_t>(0xb2),
    __E_MediaPlay = static_cast<int32_t>(0xb3),
    __E_LaunchMail = static_cast<int32_t>(0xb4),
    __E_LaunchMediaSelect = static_cast<int32_t>(0xb5),
    __E_LaunchApp1 = static_cast<int32_t>(0xb6),
    __E_LaunchApp2 = static_cast<int32_t>(0xb7),
    __E_Oem1 = static_cast<int32_t>(0xba),
    __E_OemPlus = static_cast<int32_t>(0xbb),
    __E_OemComma = static_cast<int32_t>(0xbc),
    __E_OemMinus = static_cast<int32_t>(0xbd),
    __E_OemPeriod = static_cast<int32_t>(0xbe),
    __E_Oem2 = static_cast<int32_t>(0xbf),
    __E_Oem3 = static_cast<int32_t>(0xc0),
    __E_Oem4 = static_cast<int32_t>(0xdb),
    __E_Oem5 = static_cast<int32_t>(0xdc),
    __E_Oem6 = static_cast<int32_t>(0xdd),
    __E_Oem7 = static_cast<int32_t>(0xde),
    __E_Oem8 = static_cast<int32_t>(0xdf),
    __E_Oem102 = static_cast<int32_t>(0xe2),
    __E_Process = static_cast<int32_t>(0xe5),
    __E_Packet = static_cast<int32_t>(0xe7),
    __E_Attention = static_cast<int32_t>(0xf6),
    __E_CrSel = static_cast<int32_t>(0xf7),
    __E_ExSel = static_cast<int32_t>(0xf8),
    __E_EraseEndOfFile = static_cast<int32_t>(0xf9),
    __E_Play = static_cast<int32_t>(0xfa),
    __E_Zoom = static_cast<int32_t>(0xfb),
    __E_NoName = static_cast<int32_t>(0xfc),
    __E_Pa1 = static_cast<int32_t>(0xfd),
    __E_OemClear = static_cast<int32_t>(0xfe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConsoleKey_Unwrapped() const noexcept {
    return static_cast<__ConsoleKey_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleKey();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConsoleKey(int32_t value__) noexcept;

  /// @brief Field A value: I32(65)
  static ::System::ConsoleKey const A;

  /// @brief Field Add value: I32(107)
  static ::System::ConsoleKey const Add;

  /// @brief Field Applications value: I32(93)
  static ::System::ConsoleKey const Applications;

  /// @brief Field Attention value: I32(246)
  static ::System::ConsoleKey const Attention;

  /// @brief Field B value: I32(66)
  static ::System::ConsoleKey const B;

  /// @brief Field Backspace value: I32(8)
  static ::System::ConsoleKey const Backspace;

  /// @brief Field BrowserBack value: I32(166)
  static ::System::ConsoleKey const BrowserBack;

  /// @brief Field BrowserFavorites value: I32(171)
  static ::System::ConsoleKey const BrowserFavorites;

  /// @brief Field BrowserForward value: I32(167)
  static ::System::ConsoleKey const BrowserForward;

  /// @brief Field BrowserHome value: I32(172)
  static ::System::ConsoleKey const BrowserHome;

  /// @brief Field BrowserRefresh value: I32(168)
  static ::System::ConsoleKey const BrowserRefresh;

  /// @brief Field BrowserSearch value: I32(170)
  static ::System::ConsoleKey const BrowserSearch;

  /// @brief Field BrowserStop value: I32(169)
  static ::System::ConsoleKey const BrowserStop;

  /// @brief Field C value: I32(67)
  static ::System::ConsoleKey const C;

  /// @brief Field Clear value: I32(12)
  static ::System::ConsoleKey const Clear;

  /// @brief Field CrSel value: I32(247)
  static ::System::ConsoleKey const CrSel;

  /// @brief Field D value: I32(68)
  static ::System::ConsoleKey const D;

  /// @brief Field D0 value: I32(48)
  static ::System::ConsoleKey const D0;

  /// @brief Field D1 value: I32(49)
  static ::System::ConsoleKey const D1;

  /// @brief Field D2 value: I32(50)
  static ::System::ConsoleKey const D2;

  /// @brief Field D3 value: I32(51)
  static ::System::ConsoleKey const D3;

  /// @brief Field D4 value: I32(52)
  static ::System::ConsoleKey const D4;

  /// @brief Field D5 value: I32(53)
  static ::System::ConsoleKey const D5;

  /// @brief Field D6 value: I32(54)
  static ::System::ConsoleKey const D6;

  /// @brief Field D7 value: I32(55)
  static ::System::ConsoleKey const D7;

  /// @brief Field D8 value: I32(56)
  static ::System::ConsoleKey const D8;

  /// @brief Field D9 value: I32(57)
  static ::System::ConsoleKey const D9;

  /// @brief Field Decimal value: I32(110)
  static ::System::ConsoleKey const Decimal;

  /// @brief Field Delete value: I32(46)
  static ::System::ConsoleKey const Delete;

  /// @brief Field Divide value: I32(111)
  static ::System::ConsoleKey const Divide;

  /// @brief Field DownArrow value: I32(40)
  static ::System::ConsoleKey const DownArrow;

  /// @brief Field E value: I32(69)
  static ::System::ConsoleKey const E;

  /// @brief Field End value: I32(35)
  static ::System::ConsoleKey const End;

  /// @brief Field Enter value: I32(13)
  static ::System::ConsoleKey const Enter;

  /// @brief Field EraseEndOfFile value: I32(249)
  static ::System::ConsoleKey const EraseEndOfFile;

  /// @brief Field Escape value: I32(27)
  static ::System::ConsoleKey const Escape;

  /// @brief Field ExSel value: I32(248)
  static ::System::ConsoleKey const ExSel;

  /// @brief Field Execute value: I32(43)
  static ::System::ConsoleKey const Execute;

  /// @brief Field F value: I32(70)
  static ::System::ConsoleKey const F;

  /// @brief Field F1 value: I32(112)
  static ::System::ConsoleKey const F1;

  /// @brief Field F10 value: I32(121)
  static ::System::ConsoleKey const F10;

  /// @brief Field F11 value: I32(122)
  static ::System::ConsoleKey const F11;

  /// @brief Field F12 value: I32(123)
  static ::System::ConsoleKey const F12;

  /// @brief Field F13 value: I32(124)
  static ::System::ConsoleKey const F13;

  /// @brief Field F14 value: I32(125)
  static ::System::ConsoleKey const F14;

  /// @brief Field F15 value: I32(126)
  static ::System::ConsoleKey const F15;

  /// @brief Field F16 value: I32(127)
  static ::System::ConsoleKey const F16;

  /// @brief Field F17 value: I32(128)
  static ::System::ConsoleKey const F17;

  /// @brief Field F18 value: I32(129)
  static ::System::ConsoleKey const F18;

  /// @brief Field F19 value: I32(130)
  static ::System::ConsoleKey const F19;

  /// @brief Field F2 value: I32(113)
  static ::System::ConsoleKey const F2;

  /// @brief Field F20 value: I32(131)
  static ::System::ConsoleKey const F20;

  /// @brief Field F21 value: I32(132)
  static ::System::ConsoleKey const F21;

  /// @brief Field F22 value: I32(133)
  static ::System::ConsoleKey const F22;

  /// @brief Field F23 value: I32(134)
  static ::System::ConsoleKey const F23;

  /// @brief Field F24 value: I32(135)
  static ::System::ConsoleKey const F24;

  /// @brief Field F3 value: I32(114)
  static ::System::ConsoleKey const F3;

  /// @brief Field F4 value: I32(115)
  static ::System::ConsoleKey const F4;

  /// @brief Field F5 value: I32(116)
  static ::System::ConsoleKey const F5;

  /// @brief Field F6 value: I32(117)
  static ::System::ConsoleKey const F6;

  /// @brief Field F7 value: I32(118)
  static ::System::ConsoleKey const F7;

  /// @brief Field F8 value: I32(119)
  static ::System::ConsoleKey const F8;

  /// @brief Field F9 value: I32(120)
  static ::System::ConsoleKey const F9;

  /// @brief Field G value: I32(71)
  static ::System::ConsoleKey const G;

  /// @brief Field H value: I32(72)
  static ::System::ConsoleKey const H;

  /// @brief Field Help value: I32(47)
  static ::System::ConsoleKey const Help;

  /// @brief Field Home value: I32(36)
  static ::System::ConsoleKey const Home;

  /// @brief Field I value: I32(73)
  static ::System::ConsoleKey const I;

  /// @brief Field Insert value: I32(45)
  static ::System::ConsoleKey const Insert;

  /// @brief Field J value: I32(74)
  static ::System::ConsoleKey const J;

  /// @brief Field K value: I32(75)
  static ::System::ConsoleKey const K;

  /// @brief Field L value: I32(76)
  static ::System::ConsoleKey const L;

  /// @brief Field LaunchApp1 value: I32(182)
  static ::System::ConsoleKey const LaunchApp1;

  /// @brief Field LaunchApp2 value: I32(183)
  static ::System::ConsoleKey const LaunchApp2;

  /// @brief Field LaunchMail value: I32(180)
  static ::System::ConsoleKey const LaunchMail;

  /// @brief Field LaunchMediaSelect value: I32(181)
  static ::System::ConsoleKey const LaunchMediaSelect;

  /// @brief Field LeftArrow value: I32(37)
  static ::System::ConsoleKey const LeftArrow;

  /// @brief Field LeftWindows value: I32(91)
  static ::System::ConsoleKey const LeftWindows;

  /// @brief Field M value: I32(77)
  static ::System::ConsoleKey const M;

  /// @brief Field MediaNext value: I32(176)
  static ::System::ConsoleKey const MediaNext;

  /// @brief Field MediaPlay value: I32(179)
  static ::System::ConsoleKey const MediaPlay;

  /// @brief Field MediaPrevious value: I32(177)
  static ::System::ConsoleKey const MediaPrevious;

  /// @brief Field MediaStop value: I32(178)
  static ::System::ConsoleKey const MediaStop;

  /// @brief Field Multiply value: I32(106)
  static ::System::ConsoleKey const Multiply;

  /// @brief Field N value: I32(78)
  static ::System::ConsoleKey const N;

  /// @brief Field NoName value: I32(252)
  static ::System::ConsoleKey const NoName;

  /// @brief Field NumPad0 value: I32(96)
  static ::System::ConsoleKey const NumPad0;

  /// @brief Field NumPad1 value: I32(97)
  static ::System::ConsoleKey const NumPad1;

  /// @brief Field NumPad2 value: I32(98)
  static ::System::ConsoleKey const NumPad2;

  /// @brief Field NumPad3 value: I32(99)
  static ::System::ConsoleKey const NumPad3;

  /// @brief Field NumPad4 value: I32(100)
  static ::System::ConsoleKey const NumPad4;

  /// @brief Field NumPad5 value: I32(101)
  static ::System::ConsoleKey const NumPad5;

  /// @brief Field NumPad6 value: I32(102)
  static ::System::ConsoleKey const NumPad6;

  /// @brief Field NumPad7 value: I32(103)
  static ::System::ConsoleKey const NumPad7;

  /// @brief Field NumPad8 value: I32(104)
  static ::System::ConsoleKey const NumPad8;

  /// @brief Field NumPad9 value: I32(105)
  static ::System::ConsoleKey const NumPad9;

  /// @brief Field O value: I32(79)
  static ::System::ConsoleKey const O;

  /// @brief Field Oem1 value: I32(186)
  static ::System::ConsoleKey const Oem1;

  /// @brief Field Oem102 value: I32(226)
  static ::System::ConsoleKey const Oem102;

  /// @brief Field Oem2 value: I32(191)
  static ::System::ConsoleKey const Oem2;

  /// @brief Field Oem3 value: I32(192)
  static ::System::ConsoleKey const Oem3;

  /// @brief Field Oem4 value: I32(219)
  static ::System::ConsoleKey const Oem4;

  /// @brief Field Oem5 value: I32(220)
  static ::System::ConsoleKey const Oem5;

  /// @brief Field Oem6 value: I32(221)
  static ::System::ConsoleKey const Oem6;

  /// @brief Field Oem7 value: I32(222)
  static ::System::ConsoleKey const Oem7;

  /// @brief Field Oem8 value: I32(223)
  static ::System::ConsoleKey const Oem8;

  /// @brief Field OemClear value: I32(254)
  static ::System::ConsoleKey const OemClear;

  /// @brief Field OemComma value: I32(188)
  static ::System::ConsoleKey const OemComma;

  /// @brief Field OemMinus value: I32(189)
  static ::System::ConsoleKey const OemMinus;

  /// @brief Field OemPeriod value: I32(190)
  static ::System::ConsoleKey const OemPeriod;

  /// @brief Field OemPlus value: I32(187)
  static ::System::ConsoleKey const OemPlus;

  /// @brief Field P value: I32(80)
  static ::System::ConsoleKey const P;

  /// @brief Field Pa1 value: I32(253)
  static ::System::ConsoleKey const Pa1;

  /// @brief Field Packet value: I32(231)
  static ::System::ConsoleKey const Packet;

  /// @brief Field PageDown value: I32(34)
  static ::System::ConsoleKey const PageDown;

  /// @brief Field PageUp value: I32(33)
  static ::System::ConsoleKey const PageUp;

  /// @brief Field Pause value: I32(19)
  static ::System::ConsoleKey const Pause;

  /// @brief Field Play value: I32(250)
  static ::System::ConsoleKey const Play;

  /// @brief Field Print value: I32(42)
  static ::System::ConsoleKey const Print;

  /// @brief Field PrintScreen value: I32(44)
  static ::System::ConsoleKey const PrintScreen;

  /// @brief Field Process value: I32(229)
  static ::System::ConsoleKey const Process;

  /// @brief Field Q value: I32(81)
  static ::System::ConsoleKey const Q;

  /// @brief Field R value: I32(82)
  static ::System::ConsoleKey const R;

  /// @brief Field RightArrow value: I32(39)
  static ::System::ConsoleKey const RightArrow;

  /// @brief Field RightWindows value: I32(92)
  static ::System::ConsoleKey const RightWindows;

  /// @brief Field S value: I32(83)
  static ::System::ConsoleKey const S;

  /// @brief Field Select value: I32(41)
  static ::System::ConsoleKey const Select;

  /// @brief Field Separator value: I32(108)
  static ::System::ConsoleKey const Separator;

  /// @brief Field Sleep value: I32(95)
  static ::System::ConsoleKey const Sleep;

  /// @brief Field Spacebar value: I32(32)
  static ::System::ConsoleKey const Spacebar;

  /// @brief Field Subtract value: I32(109)
  static ::System::ConsoleKey const Subtract;

  /// @brief Field T value: I32(84)
  static ::System::ConsoleKey const T;

  /// @brief Field Tab value: I32(9)
  static ::System::ConsoleKey const Tab;

  /// @brief Field U value: I32(85)
  static ::System::ConsoleKey const U;

  /// @brief Field UpArrow value: I32(38)
  static ::System::ConsoleKey const UpArrow;

  /// @brief Field V value: I32(86)
  static ::System::ConsoleKey const V;

  /// @brief Field VolumeDown value: I32(174)
  static ::System::ConsoleKey const VolumeDown;

  /// @brief Field VolumeMute value: I32(173)
  static ::System::ConsoleKey const VolumeMute;

  /// @brief Field VolumeUp value: I32(175)
  static ::System::ConsoleKey const VolumeUp;

  /// @brief Field W value: I32(87)
  static ::System::ConsoleKey const W;

  /// @brief Field X value: I32(88)
  static ::System::ConsoleKey const X;

  /// @brief Field Y value: I32(89)
  static ::System::ConsoleKey const Y;

  /// @brief Field Z value: I32(90)
  static ::System::ConsoleKey const Z;

  /// @brief Field Zoom value: I32(251)
  static ::System::ConsoleKey const Zoom;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2526 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ConsoleKey, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ConsoleKey, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleKey, "System", "ConsoleKey");

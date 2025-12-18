#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidKeyCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidKeyCode)
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidKeyCode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode);
// Dependencies
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidKeyCode
struct CORDL_TYPE AndroidKeyCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AndroidKeyCode_Unwrapped
  enum struct __AndroidKeyCode_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_SoftLeft = static_cast<int32_t>(0x1),
    __E_SoftRight = static_cast<int32_t>(0x2),
    __E_Home = static_cast<int32_t>(0x3),
    __E_Back = static_cast<int32_t>(0x4),
    __E_Call = static_cast<int32_t>(0x5),
    __E_Endcall = static_cast<int32_t>(0x6),
    __E_Alpha0 = static_cast<int32_t>(0x7),
    __E_Alpha1 = static_cast<int32_t>(0x8),
    __E_Alpha2 = static_cast<int32_t>(0x9),
    __E_Alpha3 = static_cast<int32_t>(0xa),
    __E_Alpha4 = static_cast<int32_t>(0xb),
    __E_Alpha5 = static_cast<int32_t>(0xc),
    __E_Alpha6 = static_cast<int32_t>(0xd),
    __E_Alpha7 = static_cast<int32_t>(0xe),
    __E_Alpha8 = static_cast<int32_t>(0xf),
    __E_Alpha9 = static_cast<int32_t>(0x10),
    __E_Star = static_cast<int32_t>(0x11),
    __E_Pound = static_cast<int32_t>(0x12),
    __E_DpadUp = static_cast<int32_t>(0x13),
    __E_DpadDown = static_cast<int32_t>(0x14),
    __E_DpadLeft = static_cast<int32_t>(0x15),
    __E_DpadRight = static_cast<int32_t>(0x16),
    __E_DpadCenter = static_cast<int32_t>(0x17),
    __E_VolumeUp = static_cast<int32_t>(0x18),
    __E_VolumeDown = static_cast<int32_t>(0x19),
    __E_Power = static_cast<int32_t>(0x1a),
    __E_Camera = static_cast<int32_t>(0x1b),
    __E_Clear = static_cast<int32_t>(0x1c),
    __E_A = static_cast<int32_t>(0x1d),
    __E_B = static_cast<int32_t>(0x1e),
    __E_C = static_cast<int32_t>(0x1f),
    __E_D = static_cast<int32_t>(0x20),
    __E_E = static_cast<int32_t>(0x21),
    __E_F = static_cast<int32_t>(0x22),
    __E_G = static_cast<int32_t>(0x23),
    __E_H = static_cast<int32_t>(0x24),
    __E_I = static_cast<int32_t>(0x25),
    __E_J = static_cast<int32_t>(0x26),
    __E_K = static_cast<int32_t>(0x27),
    __E_L = static_cast<int32_t>(0x28),
    __E_M = static_cast<int32_t>(0x29),
    __E_N = static_cast<int32_t>(0x2a),
    __E_O = static_cast<int32_t>(0x2b),
    __E_P = static_cast<int32_t>(0x2c),
    __E_Q = static_cast<int32_t>(0x2d),
    __E_R = static_cast<int32_t>(0x2e),
    __E_S = static_cast<int32_t>(0x2f),
    __E_T = static_cast<int32_t>(0x30),
    __E_U = static_cast<int32_t>(0x31),
    __E_V = static_cast<int32_t>(0x32),
    __E_W = static_cast<int32_t>(0x33),
    __E_X = static_cast<int32_t>(0x34),
    __E_Y = static_cast<int32_t>(0x35),
    __E_Z = static_cast<int32_t>(0x36),
    __E_Comma = static_cast<int32_t>(0x37),
    __E_Period = static_cast<int32_t>(0x38),
    __E_AltLeft = static_cast<int32_t>(0x39),
    __E_AltRight = static_cast<int32_t>(0x3a),
    __E_ShiftLeft = static_cast<int32_t>(0x3b),
    __E_ShiftRight = static_cast<int32_t>(0x3c),
    __E_Tab = static_cast<int32_t>(0x3d),
    __E_Space = static_cast<int32_t>(0x3e),
    __E_Sym = static_cast<int32_t>(0x3f),
    __E_Explorer = static_cast<int32_t>(0x40),
    __E_Envelope = static_cast<int32_t>(0x41),
    __E_Enter = static_cast<int32_t>(0x42),
    __E_Del = static_cast<int32_t>(0x43),
    __E_Grave = static_cast<int32_t>(0x44),
    __E_Minus = static_cast<int32_t>(0x45),
    __E_Equals = static_cast<int32_t>(0x46),
    __E_LeftBracket = static_cast<int32_t>(0x47),
    __E_RightBracket = static_cast<int32_t>(0x48),
    __E_Backslash = static_cast<int32_t>(0x49),
    __E_Semicolon = static_cast<int32_t>(0x4a),
    __E_Apostrophe = static_cast<int32_t>(0x4b),
    __E_Slash = static_cast<int32_t>(0x4c),
    __E_At = static_cast<int32_t>(0x4d),
    __E_Num = static_cast<int32_t>(0x4e),
    __E_Headsethook = static_cast<int32_t>(0x4f),
    __E_Focus = static_cast<int32_t>(0x50),
    __E_Plus = static_cast<int32_t>(0x51),
    __E_Menu = static_cast<int32_t>(0x52),
    __E_Notification = static_cast<int32_t>(0x53),
    __E_Search = static_cast<int32_t>(0x54),
    __E_MediaPlayPause = static_cast<int32_t>(0x55),
    __E_MediaStop = static_cast<int32_t>(0x56),
    __E_MediaNext = static_cast<int32_t>(0x57),
    __E_MediaPrevious = static_cast<int32_t>(0x58),
    __E_MediaRewind = static_cast<int32_t>(0x59),
    __E_MediaFastForward = static_cast<int32_t>(0x5a),
    __E_Mute = static_cast<int32_t>(0x5b),
    __E_PageUp = static_cast<int32_t>(0x5c),
    __E_PageDown = static_cast<int32_t>(0x5d),
    __E_Pictsymbols = static_cast<int32_t>(0x5e),
    __E_SwitchCharset = static_cast<int32_t>(0x5f),
    __E_ButtonA = static_cast<int32_t>(0x60),
    __E_ButtonB = static_cast<int32_t>(0x61),
    __E_ButtonC = static_cast<int32_t>(0x62),
    __E_ButtonX = static_cast<int32_t>(0x63),
    __E_ButtonY = static_cast<int32_t>(0x64),
    __E_ButtonZ = static_cast<int32_t>(0x65),
    __E_ButtonL1 = static_cast<int32_t>(0x66),
    __E_ButtonR1 = static_cast<int32_t>(0x67),
    __E_ButtonL2 = static_cast<int32_t>(0x68),
    __E_ButtonR2 = static_cast<int32_t>(0x69),
    __E_ButtonThumbl = static_cast<int32_t>(0x6a),
    __E_ButtonThumbr = static_cast<int32_t>(0x6b),
    __E_ButtonStart = static_cast<int32_t>(0x6c),
    __E_ButtonSelect = static_cast<int32_t>(0x6d),
    __E_ButtonMode = static_cast<int32_t>(0x6e),
    __E_Escape = static_cast<int32_t>(0x6f),
    __E_ForwardDel = static_cast<int32_t>(0x70),
    __E_CtrlLeft = static_cast<int32_t>(0x71),
    __E_CtrlRight = static_cast<int32_t>(0x72),
    __E_CapsLock = static_cast<int32_t>(0x73),
    __E_ScrollLock = static_cast<int32_t>(0x74),
    __E_MetaLeft = static_cast<int32_t>(0x75),
    __E_MetaRight = static_cast<int32_t>(0x76),
    __E_Function = static_cast<int32_t>(0x77),
    __E_Sysrq = static_cast<int32_t>(0x78),
    __E_Break = static_cast<int32_t>(0x79),
    __E_MoveHome = static_cast<int32_t>(0x7a),
    __E_MoveEnd = static_cast<int32_t>(0x7b),
    __E_Insert = static_cast<int32_t>(0x7c),
    __E_Forward = static_cast<int32_t>(0x7d),
    __E_MediaPlay = static_cast<int32_t>(0x7e),
    __E_MediaPause = static_cast<int32_t>(0x7f),
    __E_MediaClose = static_cast<int32_t>(0x80),
    __E_MediaEject = static_cast<int32_t>(0x81),
    __E_MediaRecord = static_cast<int32_t>(0x82),
    __E_F1 = static_cast<int32_t>(0x83),
    __E_F2 = static_cast<int32_t>(0x84),
    __E_F3 = static_cast<int32_t>(0x85),
    __E_F4 = static_cast<int32_t>(0x86),
    __E_F5 = static_cast<int32_t>(0x87),
    __E_F6 = static_cast<int32_t>(0x88),
    __E_F7 = static_cast<int32_t>(0x89),
    __E_F8 = static_cast<int32_t>(0x8a),
    __E_F9 = static_cast<int32_t>(0x8b),
    __E_F10 = static_cast<int32_t>(0x8c),
    __E_F11 = static_cast<int32_t>(0x8d),
    __E_F12 = static_cast<int32_t>(0x8e),
    __E_NumLock = static_cast<int32_t>(0x8f),
    __E_Numpad0 = static_cast<int32_t>(0x90),
    __E_Numpad1 = static_cast<int32_t>(0x91),
    __E_Numpad2 = static_cast<int32_t>(0x92),
    __E_Numpad3 = static_cast<int32_t>(0x93),
    __E_Numpad4 = static_cast<int32_t>(0x94),
    __E_Numpad5 = static_cast<int32_t>(0x95),
    __E_Numpad6 = static_cast<int32_t>(0x96),
    __E_Numpad7 = static_cast<int32_t>(0x97),
    __E_Numpad8 = static_cast<int32_t>(0x98),
    __E_Numpad9 = static_cast<int32_t>(0x99),
    __E_NumpadDivide = static_cast<int32_t>(0x9a),
    __E_NumpadMultiply = static_cast<int32_t>(0x9b),
    __E_NumpadSubtract = static_cast<int32_t>(0x9c),
    __E_NumpadAdd = static_cast<int32_t>(0x9d),
    __E_NumpadDot = static_cast<int32_t>(0x9e),
    __E_NumpadComma = static_cast<int32_t>(0x9f),
    __E_NumpadEnter = static_cast<int32_t>(0xa0),
    __E_NumpadEquals = static_cast<int32_t>(0xa1),
    __E_NumpadLeftParen = static_cast<int32_t>(0xa2),
    __E_NumpadRightParen = static_cast<int32_t>(0xa3),
    __E_VolumeMute = static_cast<int32_t>(0xa4),
    __E_Info = static_cast<int32_t>(0xa5),
    __E_ChannelUp = static_cast<int32_t>(0xa6),
    __E_ChannelDown = static_cast<int32_t>(0xa7),
    __E_ZoomIn = static_cast<int32_t>(0xa8),
    __E_ZoomOut = static_cast<int32_t>(0xa9),
    __E_Tv = static_cast<int32_t>(0xaa),
    __E_Window = static_cast<int32_t>(0xab),
    __E_Guide = static_cast<int32_t>(0xac),
    __E_Dvr = static_cast<int32_t>(0xad),
    __E_Bookmark = static_cast<int32_t>(0xae),
    __E_Captions = static_cast<int32_t>(0xaf),
    __E_Settings = static_cast<int32_t>(0xb0),
    __E_TvPower = static_cast<int32_t>(0xb1),
    __E_TvInput = static_cast<int32_t>(0xb2),
    __E_StbPower = static_cast<int32_t>(0xb3),
    __E_StbInput = static_cast<int32_t>(0xb4),
    __E_AvrPower = static_cast<int32_t>(0xb5),
    __E_AvrInput = static_cast<int32_t>(0xb6),
    __E_ProgRed = static_cast<int32_t>(0xb7),
    __E_ProgGreen = static_cast<int32_t>(0xb8),
    __E_ProgYellow = static_cast<int32_t>(0xb9),
    __E_ProgBlue = static_cast<int32_t>(0xba),
    __E_AppSwitch = static_cast<int32_t>(0xbb),
    __E_Button1 = static_cast<int32_t>(0xbc),
    __E_Button2 = static_cast<int32_t>(0xbd),
    __E_Button3 = static_cast<int32_t>(0xbe),
    __E_Button4 = static_cast<int32_t>(0xbf),
    __E_Button5 = static_cast<int32_t>(0xc0),
    __E_Button6 = static_cast<int32_t>(0xc1),
    __E_Button7 = static_cast<int32_t>(0xc2),
    __E_Button8 = static_cast<int32_t>(0xc3),
    __E_Button9 = static_cast<int32_t>(0xc4),
    __E_Button10 = static_cast<int32_t>(0xc5),
    __E_Button11 = static_cast<int32_t>(0xc6),
    __E_Button12 = static_cast<int32_t>(0xc7),
    __E_Button13 = static_cast<int32_t>(0xc8),
    __E_Button14 = static_cast<int32_t>(0xc9),
    __E_Button15 = static_cast<int32_t>(0xca),
    __E_Button16 = static_cast<int32_t>(0xcb),
    __E_LanguageSwitch = static_cast<int32_t>(0xcc),
    __E_MannerMode = static_cast<int32_t>(0xcd),
    __E_Mode3D = static_cast<int32_t>(0xce),
    __E_Contacts = static_cast<int32_t>(0xcf),
    __E_Calendar = static_cast<int32_t>(0xd0),
    __E_Music = static_cast<int32_t>(0xd1),
    __E_Calculator = static_cast<int32_t>(0xd2),
    __E_ZenkakuHankaku = static_cast<int32_t>(0xd3),
    __E_Eisu = static_cast<int32_t>(0xd4),
    __E_Muhenkan = static_cast<int32_t>(0xd5),
    __E_Henkan = static_cast<int32_t>(0xd6),
    __E_KatakanaHiragana = static_cast<int32_t>(0xd7),
    __E_Yen = static_cast<int32_t>(0xd8),
    __E_Ro = static_cast<int32_t>(0xd9),
    __E_Kana = static_cast<int32_t>(0xda),
    __E_Assist = static_cast<int32_t>(0xdb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AndroidKeyCode_Unwrapped() const noexcept {
    return static_cast<__AndroidKeyCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidKeyCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AndroidKeyCode(int32_t value__) noexcept;

  /// @brief Field A value: I32(29)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const A;

  /// @brief Field Alpha0 value: I32(7)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha0;

  /// @brief Field Alpha1 value: I32(8)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha1;

  /// @brief Field Alpha2 value: I32(9)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha2;

  /// @brief Field Alpha3 value: I32(10)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha3;

  /// @brief Field Alpha4 value: I32(11)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha4;

  /// @brief Field Alpha5 value: I32(12)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha5;

  /// @brief Field Alpha6 value: I32(13)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha6;

  /// @brief Field Alpha7 value: I32(14)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha7;

  /// @brief Field Alpha8 value: I32(15)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha8;

  /// @brief Field Alpha9 value: I32(16)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha9;

  /// @brief Field AltLeft value: I32(57)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AltLeft;

  /// @brief Field AltRight value: I32(58)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AltRight;

  /// @brief Field Apostrophe value: I32(75)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Apostrophe;

  /// @brief Field AppSwitch value: I32(187)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AppSwitch;

  /// @brief Field Assist value: I32(219)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Assist;

  /// @brief Field At value: I32(77)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const At;

  /// @brief Field AvrInput value: I32(182)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AvrInput;

  /// @brief Field AvrPower value: I32(181)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AvrPower;

  /// @brief Field B value: I32(30)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const B;

  /// @brief Field Back value: I32(4)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Back;

  /// @brief Field Backslash value: I32(73)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Backslash;

  /// @brief Field Bookmark value: I32(174)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Bookmark;

  /// @brief Field Break value: I32(121)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Break;

  /// @brief Field Button1 value: I32(188)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button1;

  /// @brief Field Button10 value: I32(197)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button10;

  /// @brief Field Button11 value: I32(198)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button11;

  /// @brief Field Button12 value: I32(199)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button12;

  /// @brief Field Button13 value: I32(200)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button13;

  /// @brief Field Button14 value: I32(201)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button14;

  /// @brief Field Button15 value: I32(202)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button15;

  /// @brief Field Button16 value: I32(203)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button16;

  /// @brief Field Button2 value: I32(189)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button2;

  /// @brief Field Button3 value: I32(190)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button3;

  /// @brief Field Button4 value: I32(191)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button4;

  /// @brief Field Button5 value: I32(192)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button5;

  /// @brief Field Button6 value: I32(193)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button6;

  /// @brief Field Button7 value: I32(194)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button7;

  /// @brief Field Button8 value: I32(195)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button8;

  /// @brief Field Button9 value: I32(196)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button9;

  /// @brief Field ButtonA value: I32(96)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonA;

  /// @brief Field ButtonB value: I32(97)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonB;

  /// @brief Field ButtonC value: I32(98)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonC;

  /// @brief Field ButtonL1 value: I32(102)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonL1;

  /// @brief Field ButtonL2 value: I32(104)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonL2;

  /// @brief Field ButtonMode value: I32(110)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonMode;

  /// @brief Field ButtonR1 value: I32(103)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonR1;

  /// @brief Field ButtonR2 value: I32(105)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonR2;

  /// @brief Field ButtonSelect value: I32(109)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonSelect;

  /// @brief Field ButtonStart value: I32(108)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonStart;

  /// @brief Field ButtonThumbl value: I32(106)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonThumbl;

  /// @brief Field ButtonThumbr value: I32(107)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonThumbr;

  /// @brief Field ButtonX value: I32(99)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonX;

  /// @brief Field ButtonY value: I32(100)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonY;

  /// @brief Field ButtonZ value: I32(101)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonZ;

  /// @brief Field C value: I32(31)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const C;

  /// @brief Field Calculator value: I32(210)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Calculator;

  /// @brief Field Calendar value: I32(208)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Calendar;

  /// @brief Field Call value: I32(5)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Call;

  /// @brief Field Camera value: I32(27)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Camera;

  /// @brief Field CapsLock value: I32(115)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const CapsLock;

  /// @brief Field Captions value: I32(175)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Captions;

  /// @brief Field ChannelDown value: I32(167)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ChannelDown;

  /// @brief Field ChannelUp value: I32(166)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ChannelUp;

  /// @brief Field Clear value: I32(28)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Clear;

  /// @brief Field Comma value: I32(55)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Comma;

  /// @brief Field Contacts value: I32(207)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Contacts;

  /// @brief Field CtrlLeft value: I32(113)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const CtrlLeft;

  /// @brief Field CtrlRight value: I32(114)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const CtrlRight;

  /// @brief Field D value: I32(32)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const D;

  /// @brief Field Del value: I32(67)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Del;

  /// @brief Field DpadCenter value: I32(23)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadCenter;

  /// @brief Field DpadDown value: I32(20)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadDown;

  /// @brief Field DpadLeft value: I32(21)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadLeft;

  /// @brief Field DpadRight value: I32(22)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadRight;

  /// @brief Field DpadUp value: I32(19)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadUp;

  /// @brief Field Dvr value: I32(173)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Dvr;

  /// @brief Field E value: I32(33)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const E;

  /// @brief Field Eisu value: I32(212)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Eisu;

  /// @brief Field Endcall value: I32(6)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Endcall;

  /// @brief Field Enter value: I32(66)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Enter;

  /// @brief Field Envelope value: I32(65)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Envelope;

  /// @brief Field Equals value: I32(70)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Equals;

  /// @brief Field Escape value: I32(111)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Escape;

  /// @brief Field Explorer value: I32(64)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Explorer;

  /// @brief Field F value: I32(34)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F;

  /// @brief Field F1 value: I32(131)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F1;

  /// @brief Field F10 value: I32(140)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F10;

  /// @brief Field F11 value: I32(141)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F11;

  /// @brief Field F12 value: I32(142)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F12;

  /// @brief Field F2 value: I32(132)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F2;

  /// @brief Field F3 value: I32(133)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F3;

  /// @brief Field F4 value: I32(134)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F4;

  /// @brief Field F5 value: I32(135)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F5;

  /// @brief Field F6 value: I32(136)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F6;

  /// @brief Field F7 value: I32(137)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F7;

  /// @brief Field F8 value: I32(138)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F8;

  /// @brief Field F9 value: I32(139)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F9;

  /// @brief Field Focus value: I32(80)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Focus;

  /// @brief Field Forward value: I32(125)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Forward;

  /// @brief Field ForwardDel value: I32(112)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ForwardDel;

  /// @brief Field Function value: I32(119)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Function;

  /// @brief Field G value: I32(35)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const G;

  /// @brief Field Grave value: I32(68)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Grave;

  /// @brief Field Guide value: I32(172)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Guide;

  /// @brief Field H value: I32(36)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const H;

  /// @brief Field Headsethook value: I32(79)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Headsethook;

  /// @brief Field Henkan value: I32(214)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Henkan;

  /// @brief Field Home value: I32(3)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Home;

  /// @brief Field I value: I32(37)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const I;

  /// @brief Field Info value: I32(165)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Info;

  /// @brief Field Insert value: I32(124)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Insert;

  /// @brief Field J value: I32(38)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const J;

  /// @brief Field K value: I32(39)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const K;

  /// @brief Field Kana value: I32(218)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Kana;

  /// @brief Field KatakanaHiragana value: I32(215)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const KatakanaHiragana;

  /// @brief Field L value: I32(40)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const L;

  /// @brief Field LanguageSwitch value: I32(204)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const LanguageSwitch;

  /// @brief Field LeftBracket value: I32(71)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const LeftBracket;

  /// @brief Field M value: I32(41)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const M;

  /// @brief Field MannerMode value: I32(205)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MannerMode;

  /// @brief Field MediaClose value: I32(128)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaClose;

  /// @brief Field MediaEject value: I32(129)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaEject;

  /// @brief Field MediaFastForward value: I32(90)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaFastForward;

  /// @brief Field MediaNext value: I32(87)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaNext;

  /// @brief Field MediaPause value: I32(127)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaPause;

  /// @brief Field MediaPlay value: I32(126)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaPlay;

  /// @brief Field MediaPlayPause value: I32(85)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaPlayPause;

  /// @brief Field MediaPrevious value: I32(88)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaPrevious;

  /// @brief Field MediaRecord value: I32(130)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaRecord;

  /// @brief Field MediaRewind value: I32(89)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaRewind;

  /// @brief Field MediaStop value: I32(86)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaStop;

  /// @brief Field Menu value: I32(82)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Menu;

  /// @brief Field MetaLeft value: I32(117)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MetaLeft;

  /// @brief Field MetaRight value: I32(118)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MetaRight;

  /// @brief Field Minus value: I32(69)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Minus;

  /// @brief Field Mode3D value: I32(206)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Mode3D;

  /// @brief Field MoveEnd value: I32(123)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MoveEnd;

  /// @brief Field MoveHome value: I32(122)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MoveHome;

  /// @brief Field Muhenkan value: I32(213)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Muhenkan;

  /// @brief Field Music value: I32(209)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Music;

  /// @brief Field Mute value: I32(91)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Mute;

  /// @brief Field N value: I32(42)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const N;

  /// @brief Field Notification value: I32(83)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Notification;

  /// @brief Field Num value: I32(78)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Num;

  /// @brief Field NumLock value: I32(143)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumLock;

  /// @brief Field Numpad0 value: I32(144)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad0;

  /// @brief Field Numpad1 value: I32(145)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad1;

  /// @brief Field Numpad2 value: I32(146)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad2;

  /// @brief Field Numpad3 value: I32(147)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad3;

  /// @brief Field Numpad4 value: I32(148)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad4;

  /// @brief Field Numpad5 value: I32(149)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad5;

  /// @brief Field Numpad6 value: I32(150)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad6;

  /// @brief Field Numpad7 value: I32(151)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad7;

  /// @brief Field Numpad8 value: I32(152)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad8;

  /// @brief Field Numpad9 value: I32(153)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad9;

  /// @brief Field NumpadAdd value: I32(157)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadAdd;

  /// @brief Field NumpadComma value: I32(159)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadComma;

  /// @brief Field NumpadDivide value: I32(154)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadDivide;

  /// @brief Field NumpadDot value: I32(158)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadDot;

  /// @brief Field NumpadEnter value: I32(160)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadEnter;

  /// @brief Field NumpadEquals value: I32(161)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadEquals;

  /// @brief Field NumpadLeftParen value: I32(162)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadLeftParen;

  /// @brief Field NumpadMultiply value: I32(155)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadMultiply;

  /// @brief Field NumpadRightParen value: I32(163)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadRightParen;

  /// @brief Field NumpadSubtract value: I32(156)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadSubtract;

  /// @brief Field O value: I32(43)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const O;

  /// @brief Field P value: I32(44)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const P;

  /// @brief Field PageDown value: I32(93)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const PageDown;

  /// @brief Field PageUp value: I32(92)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const PageUp;

  /// @brief Field Period value: I32(56)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Period;

  /// @brief Field Pictsymbols value: I32(94)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Pictsymbols;

  /// @brief Field Plus value: I32(81)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Plus;

  /// @brief Field Pound value: I32(18)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Pound;

  /// @brief Field Power value: I32(26)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Power;

  /// @brief Field ProgBlue value: I32(186)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ProgBlue;

  /// @brief Field ProgGreen value: I32(184)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ProgGreen;

  /// @brief Field ProgRed value: I32(183)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ProgRed;

  /// @brief Field ProgYellow value: I32(185)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ProgYellow;

  /// @brief Field Q value: I32(45)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Q;

  /// @brief Field R value: I32(46)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const R;

  /// @brief Field RightBracket value: I32(72)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const RightBracket;

  /// @brief Field Ro value: I32(217)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Ro;

  /// @brief Field S value: I32(47)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const S;

  /// @brief Field ScrollLock value: I32(116)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ScrollLock;

  /// @brief Field Search value: I32(84)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Search;

  /// @brief Field Semicolon value: I32(74)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Semicolon;

  /// @brief Field Settings value: I32(176)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Settings;

  /// @brief Field ShiftLeft value: I32(59)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ShiftLeft;

  /// @brief Field ShiftRight value: I32(60)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ShiftRight;

  /// @brief Field Slash value: I32(76)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Slash;

  /// @brief Field SoftLeft value: I32(1)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const SoftLeft;

  /// @brief Field SoftRight value: I32(2)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const SoftRight;

  /// @brief Field Space value: I32(62)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Space;

  /// @brief Field Star value: I32(17)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Star;

  /// @brief Field StbInput value: I32(180)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const StbInput;

  /// @brief Field StbPower value: I32(179)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const StbPower;

  /// @brief Field SwitchCharset value: I32(95)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const SwitchCharset;

  /// @brief Field Sym value: I32(63)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Sym;

  /// @brief Field Sysrq value: I32(120)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Sysrq;

  /// @brief Field T value: I32(48)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const T;

  /// @brief Field Tab value: I32(61)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Tab;

  /// @brief Field Tv value: I32(170)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Tv;

  /// @brief Field TvInput value: I32(178)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const TvInput;

  /// @brief Field TvPower value: I32(177)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const TvPower;

  /// @brief Field U value: I32(49)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const U;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Unknown;

  /// @brief Field V value: I32(50)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const V;

  /// @brief Field VolumeDown value: I32(25)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const VolumeDown;

  /// @brief Field VolumeMute value: I32(164)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const VolumeMute;

  /// @brief Field VolumeUp value: I32(24)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const VolumeUp;

  /// @brief Field W value: I32(51)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const W;

  /// @brief Field Window value: I32(171)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Window;

  /// @brief Field X value: I32(52)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const X;

  /// @brief Field Y value: I32(53)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Y;

  /// @brief Field Yen value: I32(216)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Yen;

  /// @brief Field Z value: I32(54)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Z;

  /// @brief Field ZenkakuHankaku value: I32(211)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ZenkakuHankaku;

  /// @brief Field ZoomIn value: I32(168)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ZoomIn;

  /// @brief Field ZoomOut value: I32(169)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ZoomOut;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8926 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode, "UnityEngine.InputSystem.Android.LowLevel", "AndroidKeyCode");

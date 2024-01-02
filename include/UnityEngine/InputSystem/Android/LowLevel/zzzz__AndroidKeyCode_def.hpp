#pragma once
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
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidKeyCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6453))
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidKeyCode
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AndroidKeyCode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidKeyCode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Unknown;

  /// @brief Field SoftLeft value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const SoftLeft;

  /// @brief Field SoftRight value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const SoftRight;

  /// @brief Field Home value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Home;

  /// @brief Field Back value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Back;

  /// @brief Field Call value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Call;

  /// @brief Field Endcall value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Endcall;

  /// @brief Field Alpha0 value: static_cast<int32_t>(0x7)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha0;

  /// @brief Field Alpha1 value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha1;

  /// @brief Field Alpha2 value: static_cast<int32_t>(0x9)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha2;

  /// @brief Field Alpha3 value: static_cast<int32_t>(0xa)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha3;

  /// @brief Field Alpha4 value: static_cast<int32_t>(0xb)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha4;

  /// @brief Field Alpha5 value: static_cast<int32_t>(0xc)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha5;

  /// @brief Field Alpha6 value: static_cast<int32_t>(0xd)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha6;

  /// @brief Field Alpha7 value: static_cast<int32_t>(0xe)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha7;

  /// @brief Field Alpha8 value: static_cast<int32_t>(0xf)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha8;

  /// @brief Field Alpha9 value: static_cast<int32_t>(0x10)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha9;

  /// @brief Field Star value: static_cast<int32_t>(0x11)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Star;

  /// @brief Field Pound value: static_cast<int32_t>(0x12)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Pound;

  /// @brief Field DpadUp value: static_cast<int32_t>(0x13)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadUp;

  /// @brief Field DpadDown value: static_cast<int32_t>(0x14)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadDown;

  /// @brief Field DpadLeft value: static_cast<int32_t>(0x15)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadLeft;

  /// @brief Field DpadRight value: static_cast<int32_t>(0x16)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadRight;

  /// @brief Field DpadCenter value: static_cast<int32_t>(0x17)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadCenter;

  /// @brief Field VolumeUp value: static_cast<int32_t>(0x18)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const VolumeUp;

  /// @brief Field VolumeDown value: static_cast<int32_t>(0x19)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const VolumeDown;

  /// @brief Field Power value: static_cast<int32_t>(0x1a)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Power;

  /// @brief Field Camera value: static_cast<int32_t>(0x1b)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Camera;

  /// @brief Field Clear value: static_cast<int32_t>(0x1c)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Clear;

  /// @brief Field A value: static_cast<int32_t>(0x1d)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const A;

  /// @brief Field B value: static_cast<int32_t>(0x1e)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const B;

  /// @brief Field C value: static_cast<int32_t>(0x1f)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const C;

  /// @brief Field D value: static_cast<int32_t>(0x20)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const D;

  /// @brief Field E value: static_cast<int32_t>(0x21)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const E;

  /// @brief Field F value: static_cast<int32_t>(0x22)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F;

  /// @brief Field G value: static_cast<int32_t>(0x23)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const G;

  /// @brief Field H value: static_cast<int32_t>(0x24)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const H;

  /// @brief Field I value: static_cast<int32_t>(0x25)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const I;

  /// @brief Field J value: static_cast<int32_t>(0x26)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const J;

  /// @brief Field K value: static_cast<int32_t>(0x27)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const K;

  /// @brief Field L value: static_cast<int32_t>(0x28)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const L;

  /// @brief Field M value: static_cast<int32_t>(0x29)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const M;

  /// @brief Field N value: static_cast<int32_t>(0x2a)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const N;

  /// @brief Field O value: static_cast<int32_t>(0x2b)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const O;

  /// @brief Field P value: static_cast<int32_t>(0x2c)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const P;

  /// @brief Field Q value: static_cast<int32_t>(0x2d)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Q;

  /// @brief Field R value: static_cast<int32_t>(0x2e)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const R;

  /// @brief Field S value: static_cast<int32_t>(0x2f)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const S;

  /// @brief Field T value: static_cast<int32_t>(0x30)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const T;

  /// @brief Field U value: static_cast<int32_t>(0x31)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const U;

  /// @brief Field V value: static_cast<int32_t>(0x32)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const V;

  /// @brief Field W value: static_cast<int32_t>(0x33)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const W;

  /// @brief Field X value: static_cast<int32_t>(0x34)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const X;

  /// @brief Field Y value: static_cast<int32_t>(0x35)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x36)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Z;

  /// @brief Field Comma value: static_cast<int32_t>(0x37)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Comma;

  /// @brief Field Period value: static_cast<int32_t>(0x38)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Period;

  /// @brief Field AltLeft value: static_cast<int32_t>(0x39)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AltLeft;

  /// @brief Field AltRight value: static_cast<int32_t>(0x3a)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AltRight;

  /// @brief Field ShiftLeft value: static_cast<int32_t>(0x3b)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ShiftLeft;

  /// @brief Field ShiftRight value: static_cast<int32_t>(0x3c)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ShiftRight;

  /// @brief Field Tab value: static_cast<int32_t>(0x3d)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Tab;

  /// @brief Field Space value: static_cast<int32_t>(0x3e)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Space;

  /// @brief Field Sym value: static_cast<int32_t>(0x3f)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Sym;

  /// @brief Field Explorer value: static_cast<int32_t>(0x40)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Explorer;

  /// @brief Field Envelope value: static_cast<int32_t>(0x41)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Envelope;

  /// @brief Field Enter value: static_cast<int32_t>(0x42)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Enter;

  /// @brief Field Del value: static_cast<int32_t>(0x43)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Del;

  /// @brief Field Grave value: static_cast<int32_t>(0x44)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Grave;

  /// @brief Field Minus value: static_cast<int32_t>(0x45)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Minus;

  /// @brief Field Equals value: static_cast<int32_t>(0x46)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Equals;

  /// @brief Field LeftBracket value: static_cast<int32_t>(0x47)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const LeftBracket;

  /// @brief Field RightBracket value: static_cast<int32_t>(0x48)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const RightBracket;

  /// @brief Field Backslash value: static_cast<int32_t>(0x49)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Backslash;

  /// @brief Field Semicolon value: static_cast<int32_t>(0x4a)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Semicolon;

  /// @brief Field Apostrophe value: static_cast<int32_t>(0x4b)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Apostrophe;

  /// @brief Field Slash value: static_cast<int32_t>(0x4c)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Slash;

  /// @brief Field At value: static_cast<int32_t>(0x4d)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const At;

  /// @brief Field Num value: static_cast<int32_t>(0x4e)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Num;

  /// @brief Field Headsethook value: static_cast<int32_t>(0x4f)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Headsethook;

  /// @brief Field Focus value: static_cast<int32_t>(0x50)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Focus;

  /// @brief Field Plus value: static_cast<int32_t>(0x51)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Plus;

  /// @brief Field Menu value: static_cast<int32_t>(0x52)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Menu;

  /// @brief Field Notification value: static_cast<int32_t>(0x53)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Notification;

  /// @brief Field Search value: static_cast<int32_t>(0x54)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Search;

  /// @brief Field MediaPlayPause value: static_cast<int32_t>(0x55)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaPlayPause;

  /// @brief Field MediaStop value: static_cast<int32_t>(0x56)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaStop;

  /// @brief Field MediaNext value: static_cast<int32_t>(0x57)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaNext;

  /// @brief Field MediaPrevious value: static_cast<int32_t>(0x58)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaPrevious;

  /// @brief Field MediaRewind value: static_cast<int32_t>(0x59)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaRewind;

  /// @brief Field MediaFastForward value: static_cast<int32_t>(0x5a)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaFastForward;

  /// @brief Field Mute value: static_cast<int32_t>(0x5b)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Mute;

  /// @brief Field PageUp value: static_cast<int32_t>(0x5c)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const PageUp;

  /// @brief Field PageDown value: static_cast<int32_t>(0x5d)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const PageDown;

  /// @brief Field Pictsymbols value: static_cast<int32_t>(0x5e)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Pictsymbols;

  /// @brief Field SwitchCharset value: static_cast<int32_t>(0x5f)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const SwitchCharset;

  /// @brief Field ButtonA value: static_cast<int32_t>(0x60)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonA;

  /// @brief Field ButtonB value: static_cast<int32_t>(0x61)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonB;

  /// @brief Field ButtonC value: static_cast<int32_t>(0x62)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonC;

  /// @brief Field ButtonX value: static_cast<int32_t>(0x63)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonX;

  /// @brief Field ButtonY value: static_cast<int32_t>(0x64)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonY;

  /// @brief Field ButtonZ value: static_cast<int32_t>(0x65)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonZ;

  /// @brief Field ButtonL1 value: static_cast<int32_t>(0x66)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonL1;

  /// @brief Field ButtonR1 value: static_cast<int32_t>(0x67)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonR1;

  /// @brief Field ButtonL2 value: static_cast<int32_t>(0x68)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonL2;

  /// @brief Field ButtonR2 value: static_cast<int32_t>(0x69)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonR2;

  /// @brief Field ButtonThumbl value: static_cast<int32_t>(0x6a)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonThumbl;

  /// @brief Field ButtonThumbr value: static_cast<int32_t>(0x6b)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonThumbr;

  /// @brief Field ButtonStart value: static_cast<int32_t>(0x6c)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonStart;

  /// @brief Field ButtonSelect value: static_cast<int32_t>(0x6d)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonSelect;

  /// @brief Field ButtonMode value: static_cast<int32_t>(0x6e)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonMode;

  /// @brief Field Escape value: static_cast<int32_t>(0x6f)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Escape;

  /// @brief Field ForwardDel value: static_cast<int32_t>(0x70)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ForwardDel;

  /// @brief Field CtrlLeft value: static_cast<int32_t>(0x71)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const CtrlLeft;

  /// @brief Field CtrlRight value: static_cast<int32_t>(0x72)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const CtrlRight;

  /// @brief Field CapsLock value: static_cast<int32_t>(0x73)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const CapsLock;

  /// @brief Field ScrollLock value: static_cast<int32_t>(0x74)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ScrollLock;

  /// @brief Field MetaLeft value: static_cast<int32_t>(0x75)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MetaLeft;

  /// @brief Field MetaRight value: static_cast<int32_t>(0x76)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MetaRight;

  /// @brief Field Function value: static_cast<int32_t>(0x77)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Function;

  /// @brief Field Sysrq value: static_cast<int32_t>(0x78)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Sysrq;

  /// @brief Field Break value: static_cast<int32_t>(0x79)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Break;

  /// @brief Field MoveHome value: static_cast<int32_t>(0x7a)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MoveHome;

  /// @brief Field MoveEnd value: static_cast<int32_t>(0x7b)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MoveEnd;

  /// @brief Field Insert value: static_cast<int32_t>(0x7c)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Insert;

  /// @brief Field Forward value: static_cast<int32_t>(0x7d)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Forward;

  /// @brief Field MediaPlay value: static_cast<int32_t>(0x7e)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaPlay;

  /// @brief Field MediaPause value: static_cast<int32_t>(0x7f)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaPause;

  /// @brief Field MediaClose value: static_cast<int32_t>(0x80)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaClose;

  /// @brief Field MediaEject value: static_cast<int32_t>(0x81)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaEject;

  /// @brief Field MediaRecord value: static_cast<int32_t>(0x82)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaRecord;

  /// @brief Field F1 value: static_cast<int32_t>(0x83)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F1;

  /// @brief Field F2 value: static_cast<int32_t>(0x84)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F2;

  /// @brief Field F3 value: static_cast<int32_t>(0x85)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F3;

  /// @brief Field F4 value: static_cast<int32_t>(0x86)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F4;

  /// @brief Field F5 value: static_cast<int32_t>(0x87)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F5;

  /// @brief Field F6 value: static_cast<int32_t>(0x88)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F6;

  /// @brief Field F7 value: static_cast<int32_t>(0x89)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F7;

  /// @brief Field F8 value: static_cast<int32_t>(0x8a)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F8;

  /// @brief Field F9 value: static_cast<int32_t>(0x8b)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F9;

  /// @brief Field F10 value: static_cast<int32_t>(0x8c)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F10;

  /// @brief Field F11 value: static_cast<int32_t>(0x8d)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F11;

  /// @brief Field F12 value: static_cast<int32_t>(0x8e)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F12;

  /// @brief Field NumLock value: static_cast<int32_t>(0x8f)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumLock;

  /// @brief Field Numpad0 value: static_cast<int32_t>(0x90)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad0;

  /// @brief Field Numpad1 value: static_cast<int32_t>(0x91)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad1;

  /// @brief Field Numpad2 value: static_cast<int32_t>(0x92)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad2;

  /// @brief Field Numpad3 value: static_cast<int32_t>(0x93)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad3;

  /// @brief Field Numpad4 value: static_cast<int32_t>(0x94)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad4;

  /// @brief Field Numpad5 value: static_cast<int32_t>(0x95)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad5;

  /// @brief Field Numpad6 value: static_cast<int32_t>(0x96)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad6;

  /// @brief Field Numpad7 value: static_cast<int32_t>(0x97)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad7;

  /// @brief Field Numpad8 value: static_cast<int32_t>(0x98)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad8;

  /// @brief Field Numpad9 value: static_cast<int32_t>(0x99)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad9;

  /// @brief Field NumpadDivide value: static_cast<int32_t>(0x9a)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadDivide;

  /// @brief Field NumpadMultiply value: static_cast<int32_t>(0x9b)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadMultiply;

  /// @brief Field NumpadSubtract value: static_cast<int32_t>(0x9c)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadSubtract;

  /// @brief Field NumpadAdd value: static_cast<int32_t>(0x9d)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadAdd;

  /// @brief Field NumpadDot value: static_cast<int32_t>(0x9e)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadDot;

  /// @brief Field NumpadComma value: static_cast<int32_t>(0x9f)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadComma;

  /// @brief Field NumpadEnter value: static_cast<int32_t>(0xa0)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadEnter;

  /// @brief Field NumpadEquals value: static_cast<int32_t>(0xa1)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadEquals;

  /// @brief Field NumpadLeftParen value: static_cast<int32_t>(0xa2)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadLeftParen;

  /// @brief Field NumpadRightParen value: static_cast<int32_t>(0xa3)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadRightParen;

  /// @brief Field VolumeMute value: static_cast<int32_t>(0xa4)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const VolumeMute;

  /// @brief Field Info value: static_cast<int32_t>(0xa5)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Info;

  /// @brief Field ChannelUp value: static_cast<int32_t>(0xa6)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ChannelUp;

  /// @brief Field ChannelDown value: static_cast<int32_t>(0xa7)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ChannelDown;

  /// @brief Field ZoomIn value: static_cast<int32_t>(0xa8)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ZoomIn;

  /// @brief Field ZoomOut value: static_cast<int32_t>(0xa9)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ZoomOut;

  /// @brief Field Tv value: static_cast<int32_t>(0xaa)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Tv;

  /// @brief Field Window value: static_cast<int32_t>(0xab)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Window;

  /// @brief Field Guide value: static_cast<int32_t>(0xac)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Guide;

  /// @brief Field Dvr value: static_cast<int32_t>(0xad)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Dvr;

  /// @brief Field Bookmark value: static_cast<int32_t>(0xae)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Bookmark;

  /// @brief Field Captions value: static_cast<int32_t>(0xaf)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Captions;

  /// @brief Field Settings value: static_cast<int32_t>(0xb0)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Settings;

  /// @brief Field TvPower value: static_cast<int32_t>(0xb1)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const TvPower;

  /// @brief Field TvInput value: static_cast<int32_t>(0xb2)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const TvInput;

  /// @brief Field StbPower value: static_cast<int32_t>(0xb3)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const StbPower;

  /// @brief Field StbInput value: static_cast<int32_t>(0xb4)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const StbInput;

  /// @brief Field AvrPower value: static_cast<int32_t>(0xb5)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AvrPower;

  /// @brief Field AvrInput value: static_cast<int32_t>(0xb6)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AvrInput;

  /// @brief Field ProgRed value: static_cast<int32_t>(0xb7)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ProgRed;

  /// @brief Field ProgGreen value: static_cast<int32_t>(0xb8)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ProgGreen;

  /// @brief Field ProgYellow value: static_cast<int32_t>(0xb9)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ProgYellow;

  /// @brief Field ProgBlue value: static_cast<int32_t>(0xba)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ProgBlue;

  /// @brief Field AppSwitch value: static_cast<int32_t>(0xbb)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AppSwitch;

  /// @brief Field Button1 value: static_cast<int32_t>(0xbc)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button1;

  /// @brief Field Button2 value: static_cast<int32_t>(0xbd)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button2;

  /// @brief Field Button3 value: static_cast<int32_t>(0xbe)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button3;

  /// @brief Field Button4 value: static_cast<int32_t>(0xbf)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button4;

  /// @brief Field Button5 value: static_cast<int32_t>(0xc0)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button5;

  /// @brief Field Button6 value: static_cast<int32_t>(0xc1)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button6;

  /// @brief Field Button7 value: static_cast<int32_t>(0xc2)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button7;

  /// @brief Field Button8 value: static_cast<int32_t>(0xc3)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button8;

  /// @brief Field Button9 value: static_cast<int32_t>(0xc4)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button9;

  /// @brief Field Button10 value: static_cast<int32_t>(0xc5)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button10;

  /// @brief Field Button11 value: static_cast<int32_t>(0xc6)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button11;

  /// @brief Field Button12 value: static_cast<int32_t>(0xc7)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button12;

  /// @brief Field Button13 value: static_cast<int32_t>(0xc8)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button13;

  /// @brief Field Button14 value: static_cast<int32_t>(0xc9)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button14;

  /// @brief Field Button15 value: static_cast<int32_t>(0xca)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button15;

  /// @brief Field Button16 value: static_cast<int32_t>(0xcb)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button16;

  /// @brief Field LanguageSwitch value: static_cast<int32_t>(0xcc)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const LanguageSwitch;

  /// @brief Field MannerMode value: static_cast<int32_t>(0xcd)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MannerMode;

  /// @brief Field Mode3D value: static_cast<int32_t>(0xce)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Mode3D;

  /// @brief Field Contacts value: static_cast<int32_t>(0xcf)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Contacts;

  /// @brief Field Calendar value: static_cast<int32_t>(0xd0)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Calendar;

  /// @brief Field Music value: static_cast<int32_t>(0xd1)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Music;

  /// @brief Field Calculator value: static_cast<int32_t>(0xd2)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Calculator;

  /// @brief Field ZenkakuHankaku value: static_cast<int32_t>(0xd3)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ZenkakuHankaku;

  /// @brief Field Eisu value: static_cast<int32_t>(0xd4)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Eisu;

  /// @brief Field Muhenkan value: static_cast<int32_t>(0xd5)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Muhenkan;

  /// @brief Field Henkan value: static_cast<int32_t>(0xd6)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Henkan;

  /// @brief Field KatakanaHiragana value: static_cast<int32_t>(0xd7)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const KatakanaHiragana;

  /// @brief Field Yen value: static_cast<int32_t>(0xd8)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Yen;

  /// @brief Field Ro value: static_cast<int32_t>(0xd9)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Ro;

  /// @brief Field Kana value: static_cast<int32_t>(0xda)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Kana;

  /// @brief Field Assist value: static_cast<int32_t>(0xdb)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Assist;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode, "UnityEngine.InputSystem.Android.LowLevel", "AndroidKeyCode");

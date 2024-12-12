#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Key.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Key)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct Key;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Key);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Key
struct CORDL_TYPE Key {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Key_Unwrapped
  enum struct __Key_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Space = static_cast<int32_t>(0x1),
    __E_Enter = static_cast<int32_t>(0x2),
    __E_Tab = static_cast<int32_t>(0x3),
    __E_Backquote = static_cast<int32_t>(0x4),
    __E_Quote = static_cast<int32_t>(0x5),
    __E_Semicolon = static_cast<int32_t>(0x6),
    __E_Comma = static_cast<int32_t>(0x7),
    __E_Period = static_cast<int32_t>(0x8),
    __E_Slash = static_cast<int32_t>(0x9),
    __E_Backslash = static_cast<int32_t>(0xa),
    __E_LeftBracket = static_cast<int32_t>(0xb),
    __E_RightBracket = static_cast<int32_t>(0xc),
    __E_Minus = static_cast<int32_t>(0xd),
    __E_Equals = static_cast<int32_t>(0xe),
    __E_A = static_cast<int32_t>(0xf),
    __E_B = static_cast<int32_t>(0x10),
    __E_C = static_cast<int32_t>(0x11),
    __E_D = static_cast<int32_t>(0x12),
    __E_E = static_cast<int32_t>(0x13),
    __E_F = static_cast<int32_t>(0x14),
    __E_G = static_cast<int32_t>(0x15),
    __E_H = static_cast<int32_t>(0x16),
    __E_I = static_cast<int32_t>(0x17),
    __E_J = static_cast<int32_t>(0x18),
    __E_K = static_cast<int32_t>(0x19),
    __E_L = static_cast<int32_t>(0x1a),
    __E_M = static_cast<int32_t>(0x1b),
    __E_N = static_cast<int32_t>(0x1c),
    __E_O = static_cast<int32_t>(0x1d),
    __E_P = static_cast<int32_t>(0x1e),
    __E_Q = static_cast<int32_t>(0x1f),
    __E_R = static_cast<int32_t>(0x20),
    __E_S = static_cast<int32_t>(0x21),
    __E_T = static_cast<int32_t>(0x22),
    __E_U = static_cast<int32_t>(0x23),
    __E_V = static_cast<int32_t>(0x24),
    __E_W = static_cast<int32_t>(0x25),
    __E_X = static_cast<int32_t>(0x26),
    __E_Y = static_cast<int32_t>(0x27),
    __E_Z = static_cast<int32_t>(0x28),
    __E_Digit1 = static_cast<int32_t>(0x29),
    __E_Digit2 = static_cast<int32_t>(0x2a),
    __E_Digit3 = static_cast<int32_t>(0x2b),
    __E_Digit4 = static_cast<int32_t>(0x2c),
    __E_Digit5 = static_cast<int32_t>(0x2d),
    __E_Digit6 = static_cast<int32_t>(0x2e),
    __E_Digit7 = static_cast<int32_t>(0x2f),
    __E_Digit8 = static_cast<int32_t>(0x30),
    __E_Digit9 = static_cast<int32_t>(0x31),
    __E_Digit0 = static_cast<int32_t>(0x32),
    __E_LeftShift = static_cast<int32_t>(0x33),
    __E_RightShift = static_cast<int32_t>(0x34),
    __E_LeftAlt = static_cast<int32_t>(0x35),
    __E_RightAlt = static_cast<int32_t>(0x36),
    __E_AltGr = static_cast<int32_t>(0x36),
    __E_LeftCtrl = static_cast<int32_t>(0x37),
    __E_RightCtrl = static_cast<int32_t>(0x38),
    __E_LeftMeta = static_cast<int32_t>(0x39),
    __E_RightMeta = static_cast<int32_t>(0x3a),
    __E_LeftWindows = static_cast<int32_t>(0x39),
    __E_RightWindows = static_cast<int32_t>(0x3a),
    __E_LeftApple = static_cast<int32_t>(0x39),
    __E_RightApple = static_cast<int32_t>(0x3a),
    __E_LeftCommand = static_cast<int32_t>(0x39),
    __E_RightCommand = static_cast<int32_t>(0x3a),
    __E_ContextMenu = static_cast<int32_t>(0x3b),
    __E_Escape = static_cast<int32_t>(0x3c),
    __E_LeftArrow = static_cast<int32_t>(0x3d),
    __E_RightArrow = static_cast<int32_t>(0x3e),
    __E_UpArrow = static_cast<int32_t>(0x3f),
    __E_DownArrow = static_cast<int32_t>(0x40),
    __E_Backspace = static_cast<int32_t>(0x41),
    __E_PageDown = static_cast<int32_t>(0x42),
    __E_PageUp = static_cast<int32_t>(0x43),
    __E_Home = static_cast<int32_t>(0x44),
    __E_End = static_cast<int32_t>(0x45),
    __E_Insert = static_cast<int32_t>(0x46),
    __E_Delete = static_cast<int32_t>(0x47),
    __E_CapsLock = static_cast<int32_t>(0x48),
    __E_NumLock = static_cast<int32_t>(0x49),
    __E_PrintScreen = static_cast<int32_t>(0x4a),
    __E_ScrollLock = static_cast<int32_t>(0x4b),
    __E_Pause = static_cast<int32_t>(0x4c),
    __E_NumpadEnter = static_cast<int32_t>(0x4d),
    __E_NumpadDivide = static_cast<int32_t>(0x4e),
    __E_NumpadMultiply = static_cast<int32_t>(0x4f),
    __E_NumpadPlus = static_cast<int32_t>(0x50),
    __E_NumpadMinus = static_cast<int32_t>(0x51),
    __E_NumpadPeriod = static_cast<int32_t>(0x52),
    __E_NumpadEquals = static_cast<int32_t>(0x53),
    __E_Numpad0 = static_cast<int32_t>(0x54),
    __E_Numpad1 = static_cast<int32_t>(0x55),
    __E_Numpad2 = static_cast<int32_t>(0x56),
    __E_Numpad3 = static_cast<int32_t>(0x57),
    __E_Numpad4 = static_cast<int32_t>(0x58),
    __E_Numpad5 = static_cast<int32_t>(0x59),
    __E_Numpad6 = static_cast<int32_t>(0x5a),
    __E_Numpad7 = static_cast<int32_t>(0x5b),
    __E_Numpad8 = static_cast<int32_t>(0x5c),
    __E_Numpad9 = static_cast<int32_t>(0x5d),
    __E_F1 = static_cast<int32_t>(0x5e),
    __E_F2 = static_cast<int32_t>(0x5f),
    __E_F3 = static_cast<int32_t>(0x60),
    __E_F4 = static_cast<int32_t>(0x61),
    __E_F5 = static_cast<int32_t>(0x62),
    __E_F6 = static_cast<int32_t>(0x63),
    __E_F7 = static_cast<int32_t>(0x64),
    __E_F8 = static_cast<int32_t>(0x65),
    __E_F9 = static_cast<int32_t>(0x66),
    __E_F10 = static_cast<int32_t>(0x67),
    __E_F11 = static_cast<int32_t>(0x68),
    __E_F12 = static_cast<int32_t>(0x69),
    __E_OEM1 = static_cast<int32_t>(0x6a),
    __E_OEM2 = static_cast<int32_t>(0x6b),
    __E_OEM3 = static_cast<int32_t>(0x6c),
    __E_OEM4 = static_cast<int32_t>(0x6d),
    __E_OEM5 = static_cast<int32_t>(0x6e),
    __E_IMESelected = static_cast<int32_t>(0x6f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Key_Unwrapped() const noexcept {
    return static_cast<__Key_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Key();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Key(int32_t value__) noexcept;

  /// @brief Field A value: I32(15)
  static ::UnityEngine::InputSystem::Key const A;

  /// @brief Field AltGr value: I32(54)
  static ::UnityEngine::InputSystem::Key const AltGr;

  /// @brief Field B value: I32(16)
  static ::UnityEngine::InputSystem::Key const B;

  /// @brief Field Backquote value: I32(4)
  static ::UnityEngine::InputSystem::Key const Backquote;

  /// @brief Field Backslash value: I32(10)
  static ::UnityEngine::InputSystem::Key const Backslash;

  /// @brief Field Backspace value: I32(65)
  static ::UnityEngine::InputSystem::Key const Backspace;

  /// @brief Field C value: I32(17)
  static ::UnityEngine::InputSystem::Key const C;

  /// @brief Field CapsLock value: I32(72)
  static ::UnityEngine::InputSystem::Key const CapsLock;

  /// @brief Field Comma value: I32(7)
  static ::UnityEngine::InputSystem::Key const Comma;

  /// @brief Field ContextMenu value: I32(59)
  static ::UnityEngine::InputSystem::Key const ContextMenu;

  /// @brief Field D value: I32(18)
  static ::UnityEngine::InputSystem::Key const D;

  /// @brief Field Delete value: I32(71)
  static ::UnityEngine::InputSystem::Key const Delete;

  /// @brief Field Digit0 value: I32(50)
  static ::UnityEngine::InputSystem::Key const Digit0;

  /// @brief Field Digit1 value: I32(41)
  static ::UnityEngine::InputSystem::Key const Digit1;

  /// @brief Field Digit2 value: I32(42)
  static ::UnityEngine::InputSystem::Key const Digit2;

  /// @brief Field Digit3 value: I32(43)
  static ::UnityEngine::InputSystem::Key const Digit3;

  /// @brief Field Digit4 value: I32(44)
  static ::UnityEngine::InputSystem::Key const Digit4;

  /// @brief Field Digit5 value: I32(45)
  static ::UnityEngine::InputSystem::Key const Digit5;

  /// @brief Field Digit6 value: I32(46)
  static ::UnityEngine::InputSystem::Key const Digit6;

  /// @brief Field Digit7 value: I32(47)
  static ::UnityEngine::InputSystem::Key const Digit7;

  /// @brief Field Digit8 value: I32(48)
  static ::UnityEngine::InputSystem::Key const Digit8;

  /// @brief Field Digit9 value: I32(49)
  static ::UnityEngine::InputSystem::Key const Digit9;

  /// @brief Field DownArrow value: I32(64)
  static ::UnityEngine::InputSystem::Key const DownArrow;

  /// @brief Field E value: I32(19)
  static ::UnityEngine::InputSystem::Key const E;

  /// @brief Field End value: I32(69)
  static ::UnityEngine::InputSystem::Key const End;

  /// @brief Field Enter value: I32(2)
  static ::UnityEngine::InputSystem::Key const Enter;

  /// @brief Field Equals value: I32(14)
  static ::UnityEngine::InputSystem::Key const Equals;

  /// @brief Field Escape value: I32(60)
  static ::UnityEngine::InputSystem::Key const Escape;

  /// @brief Field F value: I32(20)
  static ::UnityEngine::InputSystem::Key const F;

  /// @brief Field F1 value: I32(94)
  static ::UnityEngine::InputSystem::Key const F1;

  /// @brief Field F10 value: I32(103)
  static ::UnityEngine::InputSystem::Key const F10;

  /// @brief Field F11 value: I32(104)
  static ::UnityEngine::InputSystem::Key const F11;

  /// @brief Field F12 value: I32(105)
  static ::UnityEngine::InputSystem::Key const F12;

  /// @brief Field F2 value: I32(95)
  static ::UnityEngine::InputSystem::Key const F2;

  /// @brief Field F3 value: I32(96)
  static ::UnityEngine::InputSystem::Key const F3;

  /// @brief Field F4 value: I32(97)
  static ::UnityEngine::InputSystem::Key const F4;

  /// @brief Field F5 value: I32(98)
  static ::UnityEngine::InputSystem::Key const F5;

  /// @brief Field F6 value: I32(99)
  static ::UnityEngine::InputSystem::Key const F6;

  /// @brief Field F7 value: I32(100)
  static ::UnityEngine::InputSystem::Key const F7;

  /// @brief Field F8 value: I32(101)
  static ::UnityEngine::InputSystem::Key const F8;

  /// @brief Field F9 value: I32(102)
  static ::UnityEngine::InputSystem::Key const F9;

  /// @brief Field G value: I32(21)
  static ::UnityEngine::InputSystem::Key const G;

  /// @brief Field H value: I32(22)
  static ::UnityEngine::InputSystem::Key const H;

  /// @brief Field Home value: I32(68)
  static ::UnityEngine::InputSystem::Key const Home;

  /// @brief Field I value: I32(23)
  static ::UnityEngine::InputSystem::Key const I;

  /// @brief Field IMESelected value: I32(111)
  static ::UnityEngine::InputSystem::Key const IMESelected;

  /// @brief Field Insert value: I32(70)
  static ::UnityEngine::InputSystem::Key const Insert;

  /// @brief Field J value: I32(24)
  static ::UnityEngine::InputSystem::Key const J;

  /// @brief Field K value: I32(25)
  static ::UnityEngine::InputSystem::Key const K;

  /// @brief Field L value: I32(26)
  static ::UnityEngine::InputSystem::Key const L;

  /// @brief Field LeftAlt value: I32(53)
  static ::UnityEngine::InputSystem::Key const LeftAlt;

  /// @brief Field LeftApple value: I32(57)
  static ::UnityEngine::InputSystem::Key const LeftApple;

  /// @brief Field LeftArrow value: I32(61)
  static ::UnityEngine::InputSystem::Key const LeftArrow;

  /// @brief Field LeftBracket value: I32(11)
  static ::UnityEngine::InputSystem::Key const LeftBracket;

  /// @brief Field LeftCommand value: I32(57)
  static ::UnityEngine::InputSystem::Key const LeftCommand;

  /// @brief Field LeftCtrl value: I32(55)
  static ::UnityEngine::InputSystem::Key const LeftCtrl;

  /// @brief Field LeftMeta value: I32(57)
  static ::UnityEngine::InputSystem::Key const LeftMeta;

  /// @brief Field LeftShift value: I32(51)
  static ::UnityEngine::InputSystem::Key const LeftShift;

  /// @brief Field LeftWindows value: I32(57)
  static ::UnityEngine::InputSystem::Key const LeftWindows;

  /// @brief Field M value: I32(27)
  static ::UnityEngine::InputSystem::Key const M;

  /// @brief Field Minus value: I32(13)
  static ::UnityEngine::InputSystem::Key const Minus;

  /// @brief Field N value: I32(28)
  static ::UnityEngine::InputSystem::Key const N;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::InputSystem::Key const None;

  /// @brief Field NumLock value: I32(73)
  static ::UnityEngine::InputSystem::Key const NumLock;

  /// @brief Field Numpad0 value: I32(84)
  static ::UnityEngine::InputSystem::Key const Numpad0;

  /// @brief Field Numpad1 value: I32(85)
  static ::UnityEngine::InputSystem::Key const Numpad1;

  /// @brief Field Numpad2 value: I32(86)
  static ::UnityEngine::InputSystem::Key const Numpad2;

  /// @brief Field Numpad3 value: I32(87)
  static ::UnityEngine::InputSystem::Key const Numpad3;

  /// @brief Field Numpad4 value: I32(88)
  static ::UnityEngine::InputSystem::Key const Numpad4;

  /// @brief Field Numpad5 value: I32(89)
  static ::UnityEngine::InputSystem::Key const Numpad5;

  /// @brief Field Numpad6 value: I32(90)
  static ::UnityEngine::InputSystem::Key const Numpad6;

  /// @brief Field Numpad7 value: I32(91)
  static ::UnityEngine::InputSystem::Key const Numpad7;

  /// @brief Field Numpad8 value: I32(92)
  static ::UnityEngine::InputSystem::Key const Numpad8;

  /// @brief Field Numpad9 value: I32(93)
  static ::UnityEngine::InputSystem::Key const Numpad9;

  /// @brief Field NumpadDivide value: I32(78)
  static ::UnityEngine::InputSystem::Key const NumpadDivide;

  /// @brief Field NumpadEnter value: I32(77)
  static ::UnityEngine::InputSystem::Key const NumpadEnter;

  /// @brief Field NumpadEquals value: I32(83)
  static ::UnityEngine::InputSystem::Key const NumpadEquals;

  /// @brief Field NumpadMinus value: I32(81)
  static ::UnityEngine::InputSystem::Key const NumpadMinus;

  /// @brief Field NumpadMultiply value: I32(79)
  static ::UnityEngine::InputSystem::Key const NumpadMultiply;

  /// @brief Field NumpadPeriod value: I32(82)
  static ::UnityEngine::InputSystem::Key const NumpadPeriod;

  /// @brief Field NumpadPlus value: I32(80)
  static ::UnityEngine::InputSystem::Key const NumpadPlus;

  /// @brief Field O value: I32(29)
  static ::UnityEngine::InputSystem::Key const O;

  /// @brief Field OEM1 value: I32(106)
  static ::UnityEngine::InputSystem::Key const OEM1;

  /// @brief Field OEM2 value: I32(107)
  static ::UnityEngine::InputSystem::Key const OEM2;

  /// @brief Field OEM3 value: I32(108)
  static ::UnityEngine::InputSystem::Key const OEM3;

  /// @brief Field OEM4 value: I32(109)
  static ::UnityEngine::InputSystem::Key const OEM4;

  /// @brief Field OEM5 value: I32(110)
  static ::UnityEngine::InputSystem::Key const OEM5;

  /// @brief Field P value: I32(30)
  static ::UnityEngine::InputSystem::Key const P;

  /// @brief Field PageDown value: I32(66)
  static ::UnityEngine::InputSystem::Key const PageDown;

  /// @brief Field PageUp value: I32(67)
  static ::UnityEngine::InputSystem::Key const PageUp;

  /// @brief Field Pause value: I32(76)
  static ::UnityEngine::InputSystem::Key const Pause;

  /// @brief Field Period value: I32(8)
  static ::UnityEngine::InputSystem::Key const Period;

  /// @brief Field PrintScreen value: I32(74)
  static ::UnityEngine::InputSystem::Key const PrintScreen;

  /// @brief Field Q value: I32(31)
  static ::UnityEngine::InputSystem::Key const Q;

  /// @brief Field Quote value: I32(5)
  static ::UnityEngine::InputSystem::Key const Quote;

  /// @brief Field R value: I32(32)
  static ::UnityEngine::InputSystem::Key const R;

  /// @brief Field RightAlt value: I32(54)
  static ::UnityEngine::InputSystem::Key const RightAlt;

  /// @brief Field RightApple value: I32(58)
  static ::UnityEngine::InputSystem::Key const RightApple;

  /// @brief Field RightArrow value: I32(62)
  static ::UnityEngine::InputSystem::Key const RightArrow;

  /// @brief Field RightBracket value: I32(12)
  static ::UnityEngine::InputSystem::Key const RightBracket;

  /// @brief Field RightCommand value: I32(58)
  static ::UnityEngine::InputSystem::Key const RightCommand;

  /// @brief Field RightCtrl value: I32(56)
  static ::UnityEngine::InputSystem::Key const RightCtrl;

  /// @brief Field RightMeta value: I32(58)
  static ::UnityEngine::InputSystem::Key const RightMeta;

  /// @brief Field RightShift value: I32(52)
  static ::UnityEngine::InputSystem::Key const RightShift;

  /// @brief Field RightWindows value: I32(58)
  static ::UnityEngine::InputSystem::Key const RightWindows;

  /// @brief Field S value: I32(33)
  static ::UnityEngine::InputSystem::Key const S;

  /// @brief Field ScrollLock value: I32(75)
  static ::UnityEngine::InputSystem::Key const ScrollLock;

  /// @brief Field Semicolon value: I32(6)
  static ::UnityEngine::InputSystem::Key const Semicolon;

  /// @brief Field Slash value: I32(9)
  static ::UnityEngine::InputSystem::Key const Slash;

  /// @brief Field Space value: I32(1)
  static ::UnityEngine::InputSystem::Key const Space;

  /// @brief Field T value: I32(34)
  static ::UnityEngine::InputSystem::Key const T;

  /// @brief Field Tab value: I32(3)
  static ::UnityEngine::InputSystem::Key const Tab;

  /// @brief Field U value: I32(35)
  static ::UnityEngine::InputSystem::Key const U;

  /// @brief Field UpArrow value: I32(63)
  static ::UnityEngine::InputSystem::Key const UpArrow;

  /// @brief Field V value: I32(36)
  static ::UnityEngine::InputSystem::Key const V;

  /// @brief Field W value: I32(37)
  static ::UnityEngine::InputSystem::Key const W;

  /// @brief Field X value: I32(38)
  static ::UnityEngine::InputSystem::Key const X;

  /// @brief Field Y value: I32(39)
  static ::UnityEngine::InputSystem::Key const Y;

  /// @brief Field Z value: I32(40)
  static ::UnityEngine::InputSystem::Key const Z;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6645 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Key, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Key, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Key, "UnityEngine.InputSystem", "Key");

#pragma once
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
// Type: UnityEngine.InputSystem::Key
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6242))
// CS Name: ::UnityEngine.InputSystem::Key
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Key(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Key();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::Key const None;

  /// @brief Field Space value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Key const Space;

  /// @brief Field Enter value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Key const Enter;

  /// @brief Field Tab value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::Key const Tab;

  /// @brief Field Backquote value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::Key const Backquote;

  /// @brief Field Quote value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::Key const Quote;

  /// @brief Field Semicolon value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::Key const Semicolon;

  /// @brief Field Comma value: static_cast<int32_t>(0x7)
  static ::UnityEngine::InputSystem::Key const Comma;

  /// @brief Field Period value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::Key const Period;

  /// @brief Field Slash value: static_cast<int32_t>(0x9)
  static ::UnityEngine::InputSystem::Key const Slash;

  /// @brief Field Backslash value: static_cast<int32_t>(0xa)
  static ::UnityEngine::InputSystem::Key const Backslash;

  /// @brief Field LeftBracket value: static_cast<int32_t>(0xb)
  static ::UnityEngine::InputSystem::Key const LeftBracket;

  /// @brief Field RightBracket value: static_cast<int32_t>(0xc)
  static ::UnityEngine::InputSystem::Key const RightBracket;

  /// @brief Field Minus value: static_cast<int32_t>(0xd)
  static ::UnityEngine::InputSystem::Key const Minus;

  /// @brief Field Equals value: static_cast<int32_t>(0xe)
  static ::UnityEngine::InputSystem::Key const Equals;

  /// @brief Field A value: static_cast<int32_t>(0xf)
  static ::UnityEngine::InputSystem::Key const A;

  /// @brief Field B value: static_cast<int32_t>(0x10)
  static ::UnityEngine::InputSystem::Key const B;

  /// @brief Field C value: static_cast<int32_t>(0x11)
  static ::UnityEngine::InputSystem::Key const C;

  /// @brief Field D value: static_cast<int32_t>(0x12)
  static ::UnityEngine::InputSystem::Key const D;

  /// @brief Field E value: static_cast<int32_t>(0x13)
  static ::UnityEngine::InputSystem::Key const E;

  /// @brief Field F value: static_cast<int32_t>(0x14)
  static ::UnityEngine::InputSystem::Key const F;

  /// @brief Field G value: static_cast<int32_t>(0x15)
  static ::UnityEngine::InputSystem::Key const G;

  /// @brief Field H value: static_cast<int32_t>(0x16)
  static ::UnityEngine::InputSystem::Key const H;

  /// @brief Field I value: static_cast<int32_t>(0x17)
  static ::UnityEngine::InputSystem::Key const I;

  /// @brief Field J value: static_cast<int32_t>(0x18)
  static ::UnityEngine::InputSystem::Key const J;

  /// @brief Field K value: static_cast<int32_t>(0x19)
  static ::UnityEngine::InputSystem::Key const K;

  /// @brief Field L value: static_cast<int32_t>(0x1a)
  static ::UnityEngine::InputSystem::Key const L;

  /// @brief Field M value: static_cast<int32_t>(0x1b)
  static ::UnityEngine::InputSystem::Key const M;

  /// @brief Field N value: static_cast<int32_t>(0x1c)
  static ::UnityEngine::InputSystem::Key const N;

  /// @brief Field O value: static_cast<int32_t>(0x1d)
  static ::UnityEngine::InputSystem::Key const O;

  /// @brief Field P value: static_cast<int32_t>(0x1e)
  static ::UnityEngine::InputSystem::Key const P;

  /// @brief Field Q value: static_cast<int32_t>(0x1f)
  static ::UnityEngine::InputSystem::Key const Q;

  /// @brief Field R value: static_cast<int32_t>(0x20)
  static ::UnityEngine::InputSystem::Key const R;

  /// @brief Field S value: static_cast<int32_t>(0x21)
  static ::UnityEngine::InputSystem::Key const S;

  /// @brief Field T value: static_cast<int32_t>(0x22)
  static ::UnityEngine::InputSystem::Key const T;

  /// @brief Field U value: static_cast<int32_t>(0x23)
  static ::UnityEngine::InputSystem::Key const U;

  /// @brief Field V value: static_cast<int32_t>(0x24)
  static ::UnityEngine::InputSystem::Key const V;

  /// @brief Field W value: static_cast<int32_t>(0x25)
  static ::UnityEngine::InputSystem::Key const W;

  /// @brief Field X value: static_cast<int32_t>(0x26)
  static ::UnityEngine::InputSystem::Key const X;

  /// @brief Field Y value: static_cast<int32_t>(0x27)
  static ::UnityEngine::InputSystem::Key const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x28)
  static ::UnityEngine::InputSystem::Key const Z;

  /// @brief Field Digit1 value: static_cast<int32_t>(0x29)
  static ::UnityEngine::InputSystem::Key const Digit1;

  /// @brief Field Digit2 value: static_cast<int32_t>(0x2a)
  static ::UnityEngine::InputSystem::Key const Digit2;

  /// @brief Field Digit3 value: static_cast<int32_t>(0x2b)
  static ::UnityEngine::InputSystem::Key const Digit3;

  /// @brief Field Digit4 value: static_cast<int32_t>(0x2c)
  static ::UnityEngine::InputSystem::Key const Digit4;

  /// @brief Field Digit5 value: static_cast<int32_t>(0x2d)
  static ::UnityEngine::InputSystem::Key const Digit5;

  /// @brief Field Digit6 value: static_cast<int32_t>(0x2e)
  static ::UnityEngine::InputSystem::Key const Digit6;

  /// @brief Field Digit7 value: static_cast<int32_t>(0x2f)
  static ::UnityEngine::InputSystem::Key const Digit7;

  /// @brief Field Digit8 value: static_cast<int32_t>(0x30)
  static ::UnityEngine::InputSystem::Key const Digit8;

  /// @brief Field Digit9 value: static_cast<int32_t>(0x31)
  static ::UnityEngine::InputSystem::Key const Digit9;

  /// @brief Field Digit0 value: static_cast<int32_t>(0x32)
  static ::UnityEngine::InputSystem::Key const Digit0;

  /// @brief Field LeftShift value: static_cast<int32_t>(0x33)
  static ::UnityEngine::InputSystem::Key const LeftShift;

  /// @brief Field RightShift value: static_cast<int32_t>(0x34)
  static ::UnityEngine::InputSystem::Key const RightShift;

  /// @brief Field LeftAlt value: static_cast<int32_t>(0x35)
  static ::UnityEngine::InputSystem::Key const LeftAlt;

  /// @brief Field RightAlt value: static_cast<int32_t>(0x36)
  static ::UnityEngine::InputSystem::Key const RightAlt;

  /// @brief Field AltGr value: static_cast<int32_t>(0x36)
  static ::UnityEngine::InputSystem::Key const AltGr;

  /// @brief Field LeftCtrl value: static_cast<int32_t>(0x37)
  static ::UnityEngine::InputSystem::Key const LeftCtrl;

  /// @brief Field RightCtrl value: static_cast<int32_t>(0x38)
  static ::UnityEngine::InputSystem::Key const RightCtrl;

  /// @brief Field LeftMeta value: static_cast<int32_t>(0x39)
  static ::UnityEngine::InputSystem::Key const LeftMeta;

  /// @brief Field RightMeta value: static_cast<int32_t>(0x3a)
  static ::UnityEngine::InputSystem::Key const RightMeta;

  /// @brief Field LeftWindows value: static_cast<int32_t>(0x39)
  static ::UnityEngine::InputSystem::Key const LeftWindows;

  /// @brief Field RightWindows value: static_cast<int32_t>(0x3a)
  static ::UnityEngine::InputSystem::Key const RightWindows;

  /// @brief Field LeftApple value: static_cast<int32_t>(0x39)
  static ::UnityEngine::InputSystem::Key const LeftApple;

  /// @brief Field RightApple value: static_cast<int32_t>(0x3a)
  static ::UnityEngine::InputSystem::Key const RightApple;

  /// @brief Field LeftCommand value: static_cast<int32_t>(0x39)
  static ::UnityEngine::InputSystem::Key const LeftCommand;

  /// @brief Field RightCommand value: static_cast<int32_t>(0x3a)
  static ::UnityEngine::InputSystem::Key const RightCommand;

  /// @brief Field ContextMenu value: static_cast<int32_t>(0x3b)
  static ::UnityEngine::InputSystem::Key const ContextMenu;

  /// @brief Field Escape value: static_cast<int32_t>(0x3c)
  static ::UnityEngine::InputSystem::Key const Escape;

  /// @brief Field LeftArrow value: static_cast<int32_t>(0x3d)
  static ::UnityEngine::InputSystem::Key const LeftArrow;

  /// @brief Field RightArrow value: static_cast<int32_t>(0x3e)
  static ::UnityEngine::InputSystem::Key const RightArrow;

  /// @brief Field UpArrow value: static_cast<int32_t>(0x3f)
  static ::UnityEngine::InputSystem::Key const UpArrow;

  /// @brief Field DownArrow value: static_cast<int32_t>(0x40)
  static ::UnityEngine::InputSystem::Key const DownArrow;

  /// @brief Field Backspace value: static_cast<int32_t>(0x41)
  static ::UnityEngine::InputSystem::Key const Backspace;

  /// @brief Field PageDown value: static_cast<int32_t>(0x42)
  static ::UnityEngine::InputSystem::Key const PageDown;

  /// @brief Field PageUp value: static_cast<int32_t>(0x43)
  static ::UnityEngine::InputSystem::Key const PageUp;

  /// @brief Field Home value: static_cast<int32_t>(0x44)
  static ::UnityEngine::InputSystem::Key const Home;

  /// @brief Field End value: static_cast<int32_t>(0x45)
  static ::UnityEngine::InputSystem::Key const End;

  /// @brief Field Insert value: static_cast<int32_t>(0x46)
  static ::UnityEngine::InputSystem::Key const Insert;

  /// @brief Field Delete value: static_cast<int32_t>(0x47)
  static ::UnityEngine::InputSystem::Key const Delete;

  /// @brief Field CapsLock value: static_cast<int32_t>(0x48)
  static ::UnityEngine::InputSystem::Key const CapsLock;

  /// @brief Field NumLock value: static_cast<int32_t>(0x49)
  static ::UnityEngine::InputSystem::Key const NumLock;

  /// @brief Field PrintScreen value: static_cast<int32_t>(0x4a)
  static ::UnityEngine::InputSystem::Key const PrintScreen;

  /// @brief Field ScrollLock value: static_cast<int32_t>(0x4b)
  static ::UnityEngine::InputSystem::Key const ScrollLock;

  /// @brief Field Pause value: static_cast<int32_t>(0x4c)
  static ::UnityEngine::InputSystem::Key const Pause;

  /// @brief Field NumpadEnter value: static_cast<int32_t>(0x4d)
  static ::UnityEngine::InputSystem::Key const NumpadEnter;

  /// @brief Field NumpadDivide value: static_cast<int32_t>(0x4e)
  static ::UnityEngine::InputSystem::Key const NumpadDivide;

  /// @brief Field NumpadMultiply value: static_cast<int32_t>(0x4f)
  static ::UnityEngine::InputSystem::Key const NumpadMultiply;

  /// @brief Field NumpadPlus value: static_cast<int32_t>(0x50)
  static ::UnityEngine::InputSystem::Key const NumpadPlus;

  /// @brief Field NumpadMinus value: static_cast<int32_t>(0x51)
  static ::UnityEngine::InputSystem::Key const NumpadMinus;

  /// @brief Field NumpadPeriod value: static_cast<int32_t>(0x52)
  static ::UnityEngine::InputSystem::Key const NumpadPeriod;

  /// @brief Field NumpadEquals value: static_cast<int32_t>(0x53)
  static ::UnityEngine::InputSystem::Key const NumpadEquals;

  /// @brief Field Numpad0 value: static_cast<int32_t>(0x54)
  static ::UnityEngine::InputSystem::Key const Numpad0;

  /// @brief Field Numpad1 value: static_cast<int32_t>(0x55)
  static ::UnityEngine::InputSystem::Key const Numpad1;

  /// @brief Field Numpad2 value: static_cast<int32_t>(0x56)
  static ::UnityEngine::InputSystem::Key const Numpad2;

  /// @brief Field Numpad3 value: static_cast<int32_t>(0x57)
  static ::UnityEngine::InputSystem::Key const Numpad3;

  /// @brief Field Numpad4 value: static_cast<int32_t>(0x58)
  static ::UnityEngine::InputSystem::Key const Numpad4;

  /// @brief Field Numpad5 value: static_cast<int32_t>(0x59)
  static ::UnityEngine::InputSystem::Key const Numpad5;

  /// @brief Field Numpad6 value: static_cast<int32_t>(0x5a)
  static ::UnityEngine::InputSystem::Key const Numpad6;

  /// @brief Field Numpad7 value: static_cast<int32_t>(0x5b)
  static ::UnityEngine::InputSystem::Key const Numpad7;

  /// @brief Field Numpad8 value: static_cast<int32_t>(0x5c)
  static ::UnityEngine::InputSystem::Key const Numpad8;

  /// @brief Field Numpad9 value: static_cast<int32_t>(0x5d)
  static ::UnityEngine::InputSystem::Key const Numpad9;

  /// @brief Field F1 value: static_cast<int32_t>(0x5e)
  static ::UnityEngine::InputSystem::Key const F1;

  /// @brief Field F2 value: static_cast<int32_t>(0x5f)
  static ::UnityEngine::InputSystem::Key const F2;

  /// @brief Field F3 value: static_cast<int32_t>(0x60)
  static ::UnityEngine::InputSystem::Key const F3;

  /// @brief Field F4 value: static_cast<int32_t>(0x61)
  static ::UnityEngine::InputSystem::Key const F4;

  /// @brief Field F5 value: static_cast<int32_t>(0x62)
  static ::UnityEngine::InputSystem::Key const F5;

  /// @brief Field F6 value: static_cast<int32_t>(0x63)
  static ::UnityEngine::InputSystem::Key const F6;

  /// @brief Field F7 value: static_cast<int32_t>(0x64)
  static ::UnityEngine::InputSystem::Key const F7;

  /// @brief Field F8 value: static_cast<int32_t>(0x65)
  static ::UnityEngine::InputSystem::Key const F8;

  /// @brief Field F9 value: static_cast<int32_t>(0x66)
  static ::UnityEngine::InputSystem::Key const F9;

  /// @brief Field F10 value: static_cast<int32_t>(0x67)
  static ::UnityEngine::InputSystem::Key const F10;

  /// @brief Field F11 value: static_cast<int32_t>(0x68)
  static ::UnityEngine::InputSystem::Key const F11;

  /// @brief Field F12 value: static_cast<int32_t>(0x69)
  static ::UnityEngine::InputSystem::Key const F12;

  /// @brief Field OEM1 value: static_cast<int32_t>(0x6a)
  static ::UnityEngine::InputSystem::Key const OEM1;

  /// @brief Field OEM2 value: static_cast<int32_t>(0x6b)
  static ::UnityEngine::InputSystem::Key const OEM2;

  /// @brief Field OEM3 value: static_cast<int32_t>(0x6c)
  static ::UnityEngine::InputSystem::Key const OEM3;

  /// @brief Field OEM4 value: static_cast<int32_t>(0x6d)
  static ::UnityEngine::InputSystem::Key const OEM4;

  /// @brief Field OEM5 value: static_cast<int32_t>(0x6e)
  static ::UnityEngine::InputSystem::Key const OEM5;

  /// @brief Field IMESelected value: static_cast<int32_t>(0x6f)
  static ::UnityEngine::InputSystem::Key const IMESelected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Key, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Key, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Key, "UnityEngine.InputSystem", "Key");

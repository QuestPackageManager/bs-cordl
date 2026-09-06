#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/KeyboardState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyboardState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct KeyboardState__keys_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
struct Key;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct KeyboardState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct KeyboardState__keys_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::KeyboardState);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::KeyboardState__keys_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::LowLevel::KeyboardState, "UnityEngine.InputSystem.LowLevel", "KeyboardState");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::LowLevel::KeyboardState__keys_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "KeyboardState/<keys>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.KeyboardState/<keys>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE KeyboardState__keys_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardState__keys_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
  constexpr KeyboardState__keys_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8996 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xe };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0xe - 0x1 = 0xd, packed as 0xd
  uint8_t _cordl_size_padding[0xd];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::KeyboardState__keys_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::KeyboardState__keys_e__FixedBuffer) == 0xe, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies UnityEngine.InputSystem.LowLevel.KeyboardState::<keys>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.KeyboardState
struct CORDL_TYPE KeyboardState {
public:
  // Declarations
  using _keys_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::KeyboardState__keys_e__FixedBuffer;

  __declspec(property(get = get_format)) ::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method Press, addr 0x65ae320, size 0x24, virtual false, abstract: false, final false
  inline void Press(::UnityEngine::InputSystem::Key key);

  /// @brief Method Release, addr 0x65ae344, size 0x24, virtual false, abstract: false, final false
  inline void Release(::UnityEngine::InputSystem::Key key);

  /// @brief Method Set, addr 0x65ae2f0, size 0x30, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::InputSystem::Key key, bool state);

  /// @brief Method .ctor, addr 0x65ae204, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(/* [ParamArray] */ ::ArrayW<::UnityEngine::InputSystem::Key> pressedKeys);

  /// @brief Method get_Format, addr 0x65ae1f8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Format();

  /// @brief Method get_format, addr 0x65ae368, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardState();

  // Ctor Parameters [CppParam { name: "keys", ty: "::UnityEngine::InputSystem::LowLevel::KeyboardState__keys_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
  constexpr KeyboardState(::UnityEngine::InputSystem::LowLevel::KeyboardState__keys_e__FixedBuffer keys) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8997 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xe };

  /// @brief Field kSizeInBits offset 0xffffffff size 0x4
  static constexpr int32_t kSizeInBits{ static_cast<int32_t>(0x6e) };

  /// @brief Field kSizeInBytes offset 0xffffffff size 0x4
  static constexpr int32_t kSizeInBytes{ static_cast<int32_t>(0xe) };

  /// [FixedBuffer(typeof(System.Byte), 14)]
  /// [InputControl(name = "anyKey", displayName = "Any Key", layout = "AnyKey", sizeInBits = 109, synthetic = true)]
  /// [InputControl(name = "escape", displayName = "Escape", layout = "Key", usages = new[] { "Back", "Cancel" }, bit = 60)]
  /// [InputControl(name = "space", displayName = "Space", layout = "Key", bit = 1)]
  /// [InputControl(name = "enter", displayName = "Enter", layout = "Key", usage = "Submit", bit = 2)]
  /// [InputControl(name = "tab", displayName = "Tab", layout = "Key", bit = 3)]
  /// [InputControl(name = "backquote", displayName = "`", layout = "Key", bit = 4)]
  /// [InputControl(name = "quote", displayName = "\'", layout = "Key", bit = 5)]
  /// [InputControl(name = "semicolon", displayName = ";", layout = "Key", bit = 6)]
  /// [InputControl(name = "comma", displayName = ",", layout = "Key", bit = 7)]
  /// [InputControl(name = "period", displayName = ".", layout = "Key", bit = 8)]
  /// [InputControl(name = "slash", displayName = "/", layout = "Key", bit = 9)]
  /// [InputControl(name = "backslash", displayName = "\\", layout = "Key", bit = 10)]
  /// [InputControl(name = "leftBracket", displayName = "[", layout = "Key", bit = 11)]
  /// [InputControl(name = "rightBracket", displayName = "]", layout = "Key", bit = 12)]
  /// [InputControl(name = "minus", displayName = "-", layout = "Key", bit = 13)]
  /// [InputControl(name = "equals", displayName = "=", layout = "Key", bit = 14)]
  /// [InputControl(name = "upArrow", displayName = "Up Arrow", layout = "Key", bit = 63)]
  /// [InputControl(name = "downArrow", displayName = "Down Arrow", layout = "Key", bit = 64)]
  /// [InputControl(name = "leftArrow", displayName = "Left Arrow", layout = "Key", bit = 61)]
  /// [InputControl(name = "rightArrow", displayName = "Right Arrow", layout = "Key", bit = 62)]
  /// [InputControl(name = "a", displayName = "A", layout = "Key", bit = 15)]
  /// [InputControl(name = "b", displayName = "B", layout = "Key", bit = 16)]
  /// [InputControl(name = "c", displayName = "C", layout = "Key", bit = 17)]
  /// [InputControl(name = "d", displayName = "D", layout = "Key", bit = 18)]
  /// [InputControl(name = "e", displayName = "E", layout = "Key", bit = 19)]
  /// [InputControl(name = "f", displayName = "F", layout = "Key", bit = 20)]
  /// [InputControl(name = "g", displayName = "G", layout = "Key", bit = 21)]
  /// [InputControl(name = "h", displayName = "H", layout = "Key", bit = 22)]
  /// [InputControl(name = "i", displayName = "I", layout = "Key", bit = 23)]
  /// [InputControl(name = "j", displayName = "J", layout = "Key", bit = 24)]
  /// [InputControl(name = "k", displayName = "K", layout = "Key", bit = 25)]
  /// [InputControl(name = "l", displayName = "L", layout = "Key", bit = 26)]
  /// [InputControl(name = "m", displayName = "M", layout = "Key", bit = 27)]
  /// [InputControl(name = "n", displayName = "N", layout = "Key", bit = 28)]
  /// [InputControl(name = "o", displayName = "O", layout = "Key", bit = 29)]
  /// [InputControl(name = "p", displayName = "P", layout = "Key", bit = 30)]
  /// [InputControl(name = "q", displayName = "Q", layout = "Key", bit = 31)]
  /// [InputControl(name = "r", displayName = "R", layout = "Key", bit = 32)]
  /// [InputControl(name = "s", displayName = "S", layout = "Key", bit = 33)]
  /// [InputControl(name = "t", displayName = "T", layout = "Key", bit = 34)]
  /// [InputControl(name = "u", displayName = "U", layout = "Key", bit = 35)]
  /// [InputControl(name = "v", displayName = "V", layout = "Key", bit = 36)]
  /// [InputControl(name = "w", displayName = "W", layout = "Key", bit = 37)]
  /// [InputControl(name = "x", displayName = "X", layout = "Key", bit = 38)]
  /// [InputControl(name = "y", displayName = "Y", layout = "Key", bit = 39)]
  /// [InputControl(name = "z", displayName = "Z", layout = "Key", bit = 40)]
  /// [InputControl(name = "1", displayName = "1", layout = "Key", bit = 41)]
  /// [InputControl(name = "2", displayName = "2", layout = "Key", bit = 42)]
  /// [InputControl(name = "3", displayName = "3", layout = "Key", bit = 43)]
  /// [InputControl(name = "4", displayName = "4", layout = "Key", bit = 44)]
  /// [InputControl(name = "5", displayName = "5", layout = "Key", bit = 45)]
  /// [InputControl(name = "6", displayName = "6", layout = "Key", bit = 46)]
  /// [InputControl(name = "7", displayName = "7", layout = "Key", bit = 47)]
  /// [InputControl(name = "8", displayName = "8", layout = "Key", bit = 48)]
  /// [InputControl(name = "9", displayName = "9", layout = "Key", bit = 49)]
  /// [InputControl(name = "0", displayName = "0", layout = "Key", bit = 50)]
  /// [InputControl(name = "leftShift", displayName = "Left Shift", layout = "Key", usage = "Modifier", bit = 51)]
  /// [InputControl(name = "rightShift", displayName = "Right Shift", layout = "Key", usage = "Modifier", bit = 52)]
  /// [InputControl(name = "shift", displayName = "Shift", layout = "DiscreteButton", usage = "Modifier", bit = 51, sizeInBits = 2, synthetic = true, parameters = "minValue=1,maxValue=3,writeMode=1")]
  /// [InputControl(name = "leftAlt", displayName = "Left Alt", layout = "Key", usage = "Modifier", bit = 53)]
  /// [InputControl(name = "rightAlt", displayName = "Right Alt", layout = "Key", usage = "Modifier", bit = 54, alias = "AltGr")]
  /// [InputControl(name = "alt", displayName = "Alt", layout = "DiscreteButton", usage = "Modifier", bit = 53, sizeInBits = 2, synthetic = true, parameters = "minValue=1,maxValue=3,writeMode=1")]
  /// [InputControl(name = "leftCtrl", displayName = "Left Control", layout = "Key", usage = "Modifier", bit = 55)]
  /// [InputControl(name = "rightCtrl", displayName = "Right Control", layout = "Key", usage = "Modifier", bit = 56)]
  /// [InputControl(name = "ctrl", displayName = "Control", layout = "DiscreteButton", usage = "Modifier", bit = 55, sizeInBits = 2, synthetic = true, parameters =
  /// "minValue=1,maxValue=3,writeMode=1")] [InputControl(name = "leftMeta", displayName = "Left System", layout = "Key", usage = "Modifier", bit = 57, aliases = new[] { "LeftWindows", "LeftApple",
  /// "LeftCommand" })] [InputControl(name = "rightMeta", displayName = "Right System", layout = "Key", usage = "Modifier", bit = 58, aliases = new[] { "RightWindows", "RightApple", "RightCommand" })]
  /// [InputControl(name = "contextMenu", displayName = "Context Menu", layout = "Key", usage = "Modifier", bit = 59)]
  /// [InputControl(name = "backspace", displayName = "Backspace", layout = "Key", bit = 65)]
  /// [InputControl(name = "pageDown", displayName = "Page Down", layout = "Key", bit = 66)]
  /// [InputControl(name = "pageUp", displayName = "Page Up", layout = "Key", bit = 67)]
  /// [InputControl(name = "home", displayName = "Home", layout = "Key", bit = 68)]
  /// [InputControl(name = "end", displayName = "End", layout = "Key", bit = 69)]
  /// [InputControl(name = "insert", displayName = "Insert", layout = "Key", bit = 70)]
  /// [InputControl(name = "delete", displayName = "Delete", layout = "Key", bit = 71)]
  /// [InputControl(name = "capsLock", displayName = "Caps Lock", layout = "Key", bit = 72)]
  /// [InputControl(name = "numLock", displayName = "Num Lock", layout = "Key", bit = 73)]
  /// [InputControl(name = "printScreen", displayName = "Print Screen", layout = "Key", bit = 74)]
  /// [InputControl(name = "scrollLock", displayName = "Scroll Lock", layout = "Key", bit = 75)]
  /// [InputControl(name = "pause", displayName = "Pause/Break", layout = "Key", bit = 76)]
  /// [InputControl(name = "numpadEnter", displayName = "Numpad Enter", layout = "Key", bit = 77)]
  /// [InputControl(name = "numpadDivide", displayName = "Numpad /", layout = "Key", bit = 78)]
  /// [InputControl(name = "numpadMultiply", displayName = "Numpad *", layout = "Key", bit = 79)]
  /// [InputControl(name = "numpadPlus", displayName = "Numpad +", layout = "Key", bit = 80)]
  /// [InputControl(name = "numpadMinus", displayName = "Numpad -", layout = "Key", bit = 81)]
  /// [InputControl(name = "numpadPeriod", displayName = "Numpad .", layout = "Key", bit = 82)]
  /// [InputControl(name = "numpadEquals", displayName = "Numpad =", layout = "Key", bit = 83)]
  /// [InputControl(name = "numpad1", displayName = "Numpad 1", layout = "Key", bit = 85)]
  /// [InputControl(name = "numpad2", displayName = "Numpad 2", layout = "Key", bit = 86)]
  /// [InputControl(name = "numpad3", displayName = "Numpad 3", layout = "Key", bit = 87)]
  /// [InputControl(name = "numpad4", displayName = "Numpad 4", layout = "Key", bit = 88)]
  /// [InputControl(name = "numpad5", displayName = "Numpad 5", layout = "Key", bit = 89)]
  /// [InputControl(name = "numpad6", displayName = "Numpad 6", layout = "Key", bit = 90)]
  /// [InputControl(name = "numpad7", displayName = "Numpad 7", layout = "Key", bit = 91)]
  /// [InputControl(name = "numpad8", displayName = "Numpad 8", layout = "Key", bit = 92)]
  /// [InputControl(name = "numpad9", displayName = "Numpad 9", layout = "Key", bit = 93)]
  /// [InputControl(name = "numpad0", displayName = "Numpad 0", layout = "Key", bit = 84)]
  /// [InputControl(name = "f1", displayName = "F1", layout = "Key", bit = 94)]
  /// [InputControl(name = "f2", displayName = "F2", layout = "Key", bit = 95)]
  /// [InputControl(name = "f3", displayName = "F3", layout = "Key", bit = 96)]
  /// [InputControl(name = "f4", displayName = "F4", layout = "Key", bit = 97)]
  /// [InputControl(name = "f5", displayName = "F5", layout = "Key", bit = 98)]
  /// [InputControl(name = "f6", displayName = "F6", layout = "Key", bit = 99)]
  /// [InputControl(name = "f7", displayName = "F7", layout = "Key", bit = 100)]
  /// [InputControl(name = "f8", displayName = "F8", layout = "Key", bit = 101)]
  /// [InputControl(name = "f9", displayName = "F9", layout = "Key", bit = 102)]
  /// [InputControl(name = "f10", displayName = "F10", layout = "Key", bit = 103)]
  /// [InputControl(name = "f11", displayName = "F11", layout = "Key", bit = 104)]
  /// [InputControl(name = "f12", displayName = "F12", layout = "Key", bit = 105)]
  /// [InputControl(name = "OEM1", layout = "Key", bit = 106)]
  /// [InputControl(name = "OEM2", layout = "Key", bit = 107)]
  /// [InputControl(name = "OEM3", layout = "Key", bit = 108)]
  /// [InputControl(name = "OEM4", layout = "Key", bit = 109)]
  /// [InputControl(name = "OEM5", layout = "Key", bit = 110)]
  /// [InputControl(name = "IMESelected", layout = "Button", bit = 111, synthetic = true)]
  /// @brief Field keys, offset: 0x0, size: 0xe, def value: None
  ::UnityEngine::InputSystem::LowLevel::KeyboardState__keys_e__FixedBuffer keys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::KeyboardState, keys) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::KeyboardState) == 0xe, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel

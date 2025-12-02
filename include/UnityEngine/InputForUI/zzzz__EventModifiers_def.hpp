#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventModifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventModifiers)
namespace UnityEngine::InputForUI {
struct EventModifiers_Modifiers;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
struct EventModifiers_Modifiers;
}
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputForUI::EventModifiers_Modifiers);
MARK_VAL_T(::UnityEngine::InputForUI::EventModifiers);
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.EventModifiers/Modifiers
struct CORDL_TYPE EventModifiers_Modifiers {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __EventModifiers_Modifiers_Unwrapped
  enum struct __EventModifiers_Modifiers_Unwrapped : uint32_t {
    __E_LeftShift = static_cast<uint32_t>(0x1u),
    __E_RightShift = static_cast<uint32_t>(0x2u),
    __E_Shift = static_cast<uint32_t>(0x3u),
    __E_LeftCtrl = static_cast<uint32_t>(0x4u),
    __E_RightCtrl = static_cast<uint32_t>(0x8u),
    __E_Ctrl = static_cast<uint32_t>(0xcu),
    __E_LeftAlt = static_cast<uint32_t>(0x10u),
    __E_RightAlt = static_cast<uint32_t>(0x20u),
    __E_Alt = static_cast<uint32_t>(0x30u),
    __E_LeftMeta = static_cast<uint32_t>(0x40u),
    __E_RightMeta = static_cast<uint32_t>(0x80u),
    __E_Meta = static_cast<uint32_t>(0xc0u),
    __E_CapsLock = static_cast<uint32_t>(0x100u),
    __E_Numlock = static_cast<uint32_t>(0x200u),
    __E_FunctionKey = static_cast<uint32_t>(0x400u),
    __E_Numeric = static_cast<uint32_t>(0x800u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventModifiers_Modifiers_Unwrapped() const noexcept {
    return static_cast<__EventModifiers_Modifiers_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventModifiers_Modifiers();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr EventModifiers_Modifiers(uint32_t value__) noexcept;

  /// @brief Field Alt value: U32(48)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const Alt;

  /// @brief Field CapsLock value: U32(256)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const CapsLock;

  /// @brief Field Ctrl value: U32(12)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const Ctrl;

  /// @brief Field FunctionKey value: U32(1024)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const FunctionKey;

  /// @brief Field LeftAlt value: U32(16)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const LeftAlt;

  /// @brief Field LeftCtrl value: U32(4)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const LeftCtrl;

  /// @brief Field LeftMeta value: U32(64)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const LeftMeta;

  /// @brief Field LeftShift value: U32(1)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const LeftShift;

  /// @brief Field Meta value: U32(192)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const Meta;

  /// @brief Field Numeric value: U32(2048)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const Numeric;

  /// @brief Field Numlock value: U32(512)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const Numlock;

  /// @brief Field RightAlt value: U32(32)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const RightAlt;

  /// @brief Field RightCtrl value: U32(8)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const RightCtrl;

  /// @brief Field RightMeta value: U32(128)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const RightMeta;

  /// @brief Field RightShift value: U32(2)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const RightShift;

  /// @brief Field Shift value: U32(3)
  static ::UnityEngine::InputForUI::EventModifiers_Modifiers const Shift;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21585 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::EventModifiers_Modifiers, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::EventModifiers_Modifiers, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.EventModifiers
struct CORDL_TYPE EventModifiers {
public:
  // Declarations
  using Modifiers = ::UnityEngine::InputForUI::EventModifiers_Modifiers;

  __declspec(property(get = get_isAltPressed)) bool isAltPressed;

  __declspec(property(get = get_isCapsLockEnabled)) bool isCapsLockEnabled;

  __declspec(property(get = get_isCtrlPressed)) bool isCtrlPressed;

  __declspec(property(get = get_isFunctionKeyPressed)) bool isFunctionKeyPressed;

  __declspec(property(get = get_isMetaPressed)) bool isMetaPressed;

  __declspec(property(get = get_isNumericPressed)) bool isNumericPressed;

  __declspec(property(get = get_isShiftPressed)) bool isShiftPressed;

  /// @brief Method Append, addr 0x6925260, size 0x78, virtual false, abstract: false, final false
  static inline void Append(::ByRef<::StringW> str, ::StringW value);

  /// @brief Method IsPressed, addr 0x69251c8, size 0x10, virtual false, abstract: false, final false
  inline bool IsPressed(::UnityEngine::InputForUI::EventModifiers_Modifiers mod);

  /// @brief Method Reset, addr 0x6925258, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetPressed, addr 0x692523c, size 0x1c, virtual false, abstract: false, final false
  inline void SetPressed(::UnityEngine::InputForUI::EventModifiers_Modifiers modifier, bool pressed);

  /// @brief Method ToString, addr 0x69248b4, size 0x28c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_isAltPressed, addr 0x69251f8, size 0x10, virtual false, abstract: false, final false
  inline bool get_isAltPressed();

  /// @brief Method get_isCapsLockEnabled, addr 0x6925218, size 0xc, virtual false, abstract: false, final false
  inline bool get_isCapsLockEnabled();

  /// @brief Method get_isCtrlPressed, addr 0x69251e8, size 0x10, virtual false, abstract: false, final false
  inline bool get_isCtrlPressed();

  /// @brief Method get_isFunctionKeyPressed, addr 0x6925224, size 0xc, virtual false, abstract: false, final false
  inline bool get_isFunctionKeyPressed();

  /// @brief Method get_isMetaPressed, addr 0x6925208, size 0x10, virtual false, abstract: false, final false
  inline bool get_isMetaPressed();

  /// @brief Method get_isNumericPressed, addr 0x6925230, size 0xc, virtual false, abstract: false, final false
  inline bool get_isNumericPressed();

  /// @brief Method get_isShiftPressed, addr 0x69251d8, size 0x10, virtual false, abstract: false, final false
  inline bool get_isShiftPressed();

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventModifiers();

  // Ctor Parameters [CppParam { name: "_state", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr EventModifiers(uint32_t _state) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21586 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field _state, offset: 0x0, size: 0x4, def value: None
  uint32_t _state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::EventModifiers, _state) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::EventModifiers, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::EventModifiers_Modifiers, "UnityEngine.InputForUI", "EventModifiers/Modifiers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::EventModifiers, "UnityEngine.InputForUI", "EventModifiers");

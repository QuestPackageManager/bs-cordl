#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/EventTriggerType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventTriggerType)
// Forward declare root types
namespace UnityEngine::EventSystems {
struct EventTriggerType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventSystems::EventTriggerType);
// Dependencies
namespace UnityEngine::EventSystems {
// Is value type: true
// CS Name: UnityEngine.EventSystems.EventTriggerType
struct CORDL_TYPE EventTriggerType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventTriggerType_Unwrapped
  enum struct __EventTriggerType_Unwrapped : int32_t {
    __E_PointerEnter = static_cast<int32_t>(0x0),
    __E_PointerExit = static_cast<int32_t>(0x1),
    __E_PointerDown = static_cast<int32_t>(0x2),
    __E_PointerUp = static_cast<int32_t>(0x3),
    __E_PointerClick = static_cast<int32_t>(0x4),
    __E_Drag = static_cast<int32_t>(0x5),
    __E_Drop = static_cast<int32_t>(0x6),
    __E_Scroll = static_cast<int32_t>(0x7),
    __E_UpdateSelected = static_cast<int32_t>(0x8),
    __E_Select = static_cast<int32_t>(0x9),
    __E_Deselect = static_cast<int32_t>(0xa),
    __E_Move = static_cast<int32_t>(0xb),
    __E_InitializePotentialDrag = static_cast<int32_t>(0xc),
    __E_BeginDrag = static_cast<int32_t>(0xd),
    __E_EndDrag = static_cast<int32_t>(0xe),
    __E_Submit = static_cast<int32_t>(0xf),
    __E_Cancel = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventTriggerType_Unwrapped() const noexcept {
    return static_cast<__EventTriggerType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventTriggerType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventTriggerType(int32_t value__) noexcept;

  /// @brief Field BeginDrag value: I32(13)
  static ::UnityEngine::EventSystems::EventTriggerType const BeginDrag;

  /// @brief Field Cancel value: I32(16)
  static ::UnityEngine::EventSystems::EventTriggerType const Cancel;

  /// @brief Field Deselect value: I32(10)
  static ::UnityEngine::EventSystems::EventTriggerType const Deselect;

  /// @brief Field Drag value: I32(5)
  static ::UnityEngine::EventSystems::EventTriggerType const Drag;

  /// @brief Field Drop value: I32(6)
  static ::UnityEngine::EventSystems::EventTriggerType const Drop;

  /// @brief Field EndDrag value: I32(14)
  static ::UnityEngine::EventSystems::EventTriggerType const EndDrag;

  /// @brief Field InitializePotentialDrag value: I32(12)
  static ::UnityEngine::EventSystems::EventTriggerType const InitializePotentialDrag;

  /// @brief Field Move value: I32(11)
  static ::UnityEngine::EventSystems::EventTriggerType const Move;

  /// @brief Field PointerClick value: I32(4)
  static ::UnityEngine::EventSystems::EventTriggerType const PointerClick;

  /// @brief Field PointerDown value: I32(2)
  static ::UnityEngine::EventSystems::EventTriggerType const PointerDown;

  /// @brief Field PointerEnter value: I32(0)
  static ::UnityEngine::EventSystems::EventTriggerType const PointerEnter;

  /// @brief Field PointerExit value: I32(1)
  static ::UnityEngine::EventSystems::EventTriggerType const PointerExit;

  /// @brief Field PointerUp value: I32(3)
  static ::UnityEngine::EventSystems::EventTriggerType const PointerUp;

  /// @brief Field Scroll value: I32(7)
  static ::UnityEngine::EventSystems::EventTriggerType const Scroll;

  /// @brief Field Select value: I32(9)
  static ::UnityEngine::EventSystems::EventTriggerType const Select;

  /// @brief Field Submit value: I32(15)
  static ::UnityEngine::EventSystems::EventTriggerType const Submit;

  /// @brief Field UpdateSelected value: I32(8)
  static ::UnityEngine::EventSystems::EventTriggerType const UpdateSelected;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15208 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::EventTriggerType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::EventTriggerType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::EventTriggerType, "UnityEngine.EventSystems", "EventTriggerType");

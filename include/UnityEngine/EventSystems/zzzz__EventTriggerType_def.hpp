#pragma once
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
// Type: UnityEngine.EventSystems::EventTriggerType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: true
// CS Name: ::UnityEngine.EventSystems::EventTriggerType
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BeginDrag value: static_cast<int32_t>(0xd)
  static ::UnityEngine::EventSystems::EventTriggerType const BeginDrag;

  /// @brief Field Cancel value: static_cast<int32_t>(0x10)
  static ::UnityEngine::EventSystems::EventTriggerType const Cancel;

  /// @brief Field Deselect value: static_cast<int32_t>(0xa)
  static ::UnityEngine::EventSystems::EventTriggerType const Deselect;

  /// @brief Field Drag value: static_cast<int32_t>(0x5)
  static ::UnityEngine::EventSystems::EventTriggerType const Drag;

  /// @brief Field Drop value: static_cast<int32_t>(0x6)
  static ::UnityEngine::EventSystems::EventTriggerType const Drop;

  /// @brief Field EndDrag value: static_cast<int32_t>(0xe)
  static ::UnityEngine::EventSystems::EventTriggerType const EndDrag;

  /// @brief Field InitializePotentialDrag value: static_cast<int32_t>(0xc)
  static ::UnityEngine::EventSystems::EventTriggerType const InitializePotentialDrag;

  /// @brief Field Move value: static_cast<int32_t>(0xb)
  static ::UnityEngine::EventSystems::EventTriggerType const Move;

  /// @brief Field PointerClick value: static_cast<int32_t>(0x4)
  static ::UnityEngine::EventSystems::EventTriggerType const PointerClick;

  /// @brief Field PointerDown value: static_cast<int32_t>(0x2)
  static ::UnityEngine::EventSystems::EventTriggerType const PointerDown;

  /// @brief Field PointerEnter value: static_cast<int32_t>(0x0)
  static ::UnityEngine::EventSystems::EventTriggerType const PointerEnter;

  /// @brief Field PointerExit value: static_cast<int32_t>(0x1)
  static ::UnityEngine::EventSystems::EventTriggerType const PointerExit;

  /// @brief Field PointerUp value: static_cast<int32_t>(0x3)
  static ::UnityEngine::EventSystems::EventTriggerType const PointerUp;

  /// @brief Field Scroll value: static_cast<int32_t>(0x7)
  static ::UnityEngine::EventSystems::EventTriggerType const Scroll;

  /// @brief Field Select value: static_cast<int32_t>(0x9)
  static ::UnityEngine::EventSystems::EventTriggerType const Select;

  /// @brief Field Submit value: static_cast<int32_t>(0xf)
  static ::UnityEngine::EventSystems::EventTriggerType const Submit;

  /// @brief Field UpdateSelected value: static_cast<int32_t>(0x8)
  static ::UnityEngine::EventSystems::EventTriggerType const UpdateSelected;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::EventTriggerType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::EventTriggerType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::EventTriggerType, "UnityEngine.EventSystems", "EventTriggerType");

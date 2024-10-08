#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCategory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventCategory)
// Forward declare root types
namespace UnityEngine::UIElements {
struct EventCategory;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::EventCategory);
// Type: UnityEngine.UIElements::EventCategory
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::EventCategory
struct CORDL_TYPE EventCategory {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventCategory_Unwrapped
  enum struct __EventCategory_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Pointer = static_cast<int32_t>(0x1),
    __E_PointerMove = static_cast<int32_t>(0x2),
    __E_EnterLeave = static_cast<int32_t>(0x3),
    __E_EnterLeaveWindow = static_cast<int32_t>(0x4),
    __E_Keyboard = static_cast<int32_t>(0x5),
    __E_Geometry = static_cast<int32_t>(0x6),
    __E_Style = static_cast<int32_t>(0x7),
    __E_ChangeValue = static_cast<int32_t>(0x8),
    __E_Bind = static_cast<int32_t>(0x9),
    __E_Focus = static_cast<int32_t>(0xa),
    __E_ChangePanel = static_cast<int32_t>(0xb),
    __E_StyleTransition = static_cast<int32_t>(0xc),
    __E_Navigation = static_cast<int32_t>(0xd),
    __E_Command = static_cast<int32_t>(0xe),
    __E_Tooltip = static_cast<int32_t>(0xf),
    __E_IMGUI = static_cast<int32_t>(0x10),
    __E_Reserved = static_cast<int32_t>(0x1f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventCategory_Unwrapped() const noexcept {
    return static_cast<__EventCategory_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCategory();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventCategory(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bind value: static_cast<int32_t>(0x9)
  static ::UnityEngine::UIElements::EventCategory const Bind;

  /// @brief Field ChangePanel value: static_cast<int32_t>(0xb)
  static ::UnityEngine::UIElements::EventCategory const ChangePanel;

  /// @brief Field ChangeValue value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::EventCategory const ChangeValue;

  /// @brief Field Command value: static_cast<int32_t>(0xe)
  static ::UnityEngine::UIElements::EventCategory const Command;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::EventCategory const Default;

  /// @brief Field EnterLeave value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::EventCategory const EnterLeave;

  /// @brief Field EnterLeaveWindow value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::EventCategory const EnterLeaveWindow;

  /// @brief Field Focus value: static_cast<int32_t>(0xa)
  static ::UnityEngine::UIElements::EventCategory const Focus;

  /// @brief Field Geometry value: static_cast<int32_t>(0x6)
  static ::UnityEngine::UIElements::EventCategory const Geometry;

  /// @brief Field IMGUI value: static_cast<int32_t>(0x10)
  static ::UnityEngine::UIElements::EventCategory const IMGUI;

  /// @brief Field Keyboard value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::EventCategory const Keyboard;

  /// @brief Field Navigation value: static_cast<int32_t>(0xd)
  static ::UnityEngine::UIElements::EventCategory const Navigation;

  /// @brief Field Pointer value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::EventCategory const Pointer;

  /// @brief Field PointerMove value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::EventCategory const PointerMove;

  /// @brief Field Reserved value: static_cast<int32_t>(0x1f)
  static ::UnityEngine::UIElements::EventCategory const Reserved;

  /// @brief Field Style value: static_cast<int32_t>(0x7)
  static ::UnityEngine::UIElements::EventCategory const Style;

  /// @brief Field StyleTransition value: static_cast<int32_t>(0xc)
  static ::UnityEngine::UIElements::EventCategory const StyleTransition;

  /// @brief Field Tooltip value: static_cast<int32_t>(0xf)
  static ::UnityEngine::UIElements::EventCategory const Tooltip;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6281 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventCategory, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCategory, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCategory, "UnityEngine.UIElements", "EventCategory");

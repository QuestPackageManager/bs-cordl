#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIPointerType)
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::UIPointerType);
// Type: UnityEngine.InputSystem.UI::UIPointerType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.UI::UIPointerType
struct CORDL_TYPE UIPointerType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UIPointerType_Unwrapped
  enum struct __UIPointerType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MouseOrPen = static_cast<int32_t>(0x1),
    __E_Touch = static_cast<int32_t>(0x2),
    __E_Tracked = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UIPointerType_Unwrapped() const noexcept {
    return static_cast<__UIPointerType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__UIPointerType_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UIPointerType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UIPointerType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MouseOrPen value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::UI::UIPointerType const MouseOrPen;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::UI::UIPointerType const None;

  /// @brief Field Touch value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::UI::UIPointerType const Touch;

  /// @brief Field Tracked value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::UI::UIPointerType const Tracked;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::UIPointerType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::UIPointerType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::UIPointerType, "UnityEngine.InputSystem.UI", "UIPointerType");

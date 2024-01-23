#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIPointerBehavior)
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct UIPointerBehavior;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::UIPointerBehavior);
// Type: UnityEngine.InputSystem.UI::UIPointerBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6373))
// CS Name: ::UnityEngine.InputSystem.UI::UIPointerBehavior
struct CORDL_TYPE UIPointerBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UIPointerBehavior_Unwrapped
  enum struct __UIPointerBehavior_Unwrapped : int32_t {
    __E_SingleMouseOrPenButMultiTouchAndTrack = static_cast<int32_t>(0x0),
    __E_SingleUnifiedPointer = static_cast<int32_t>(0x1),
    __E_AllPointersAsIs = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UIPointerBehavior_Unwrapped() const noexcept {
    return static_cast<__UIPointerBehavior_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UIPointerBehavior(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UIPointerBehavior();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SingleMouseOrPenButMultiTouchAndTrack value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::UI::UIPointerBehavior const SingleMouseOrPenButMultiTouchAndTrack;

  /// @brief Field SingleUnifiedPointer value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::UI::UIPointerBehavior const SingleUnifiedPointer;

  /// @brief Field AllPointersAsIs value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::UI::UIPointerBehavior const AllPointersAsIs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::UIPointerBehavior, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::UIPointerBehavior, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::UIPointerBehavior, "UnityEngine.InputSystem.UI", "UIPointerBehavior");

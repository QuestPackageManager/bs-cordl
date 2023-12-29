#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PressBehavior)
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
struct PressBehavior;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Interactions::PressBehavior);
// Type: UnityEngine.InputSystem.Interactions::PressBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Interactions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6736))
// CS Name: ::UnityEngine.InputSystem.Interactions::PressBehavior
struct CORDL_TYPE PressBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PressBehavior_Unwrapped
  enum struct __PressBehavior_Unwrapped : int32_t {
    __E_PressOnly = static_cast<int32_t>(0x0),
    __E_ReleaseOnly = static_cast<int32_t>(0x1),
    __E_PressAndRelease = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PressBehavior_Unwrapped() const noexcept {
    return static_cast<__PressBehavior_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PressBehavior(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PressBehavior();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field PressOnly value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::Interactions::PressBehavior const PressOnly;

  /// @brief Field ReleaseOnly value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Interactions::PressBehavior const ReleaseOnly;

  /// @brief Field PressAndRelease value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Interactions::PressBehavior const PressAndRelease;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Interactions::PressBehavior, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::PressBehavior, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Interactions
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::PressBehavior, "UnityEngine.InputSystem.Interactions", "PressBehavior");

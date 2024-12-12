#pragma once
// IWYU pragma private; include "UnityEngine/ConfigurableJointMotion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfigurableJointMotion)
// Forward declare root types
namespace UnityEngine {
struct ConfigurableJointMotion;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ConfigurableJointMotion);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ConfigurableJointMotion
struct CORDL_TYPE ConfigurableJointMotion {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConfigurableJointMotion_Unwrapped
  enum struct __ConfigurableJointMotion_Unwrapped : int32_t {
    __E_Locked = static_cast<int32_t>(0x0),
    __E_Limited = static_cast<int32_t>(0x1),
    __E_Free = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConfigurableJointMotion_Unwrapped() const noexcept {
    return static_cast<__ConfigurableJointMotion_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurableJointMotion();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConfigurableJointMotion(int32_t value__) noexcept;

  /// @brief Field Free value: I32(2)
  static ::UnityEngine::ConfigurableJointMotion const Free;

  /// @brief Field Limited value: I32(1)
  static ::UnityEngine::ConfigurableJointMotion const Limited;

  /// @brief Field Locked value: I32(0)
  static ::UnityEngine::ConfigurableJointMotion const Locked;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15725 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ConfigurableJointMotion, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ConfigurableJointMotion, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ConfigurableJointMotion, "UnityEngine", "ConfigurableJointMotion");

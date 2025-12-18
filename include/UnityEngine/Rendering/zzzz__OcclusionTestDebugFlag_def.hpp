#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionTestDebugFlag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionTestDebugFlag)
// Forward declare root types
namespace UnityEngine::Rendering {
struct OcclusionTestDebugFlag;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OcclusionTestDebugFlag);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionTestDebugFlag
struct CORDL_TYPE OcclusionTestDebugFlag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OcclusionTestDebugFlag_Unwrapped
  enum struct __OcclusionTestDebugFlag_Unwrapped : int32_t {
    __E_AlwaysPass = static_cast<int32_t>(0x1),
    __E_CountVisible = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OcclusionTestDebugFlag_Unwrapped() const noexcept {
    return static_cast<__OcclusionTestDebugFlag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionTestDebugFlag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OcclusionTestDebugFlag(int32_t value__) noexcept;

  /// @brief Field AlwaysPass value: I32(1)
  static ::UnityEngine::Rendering::OcclusionTestDebugFlag const AlwaysPass;

  /// @brief Field CountVisible value: I32(2)
  static ::UnityEngine::Rendering::OcclusionTestDebugFlag const CountVisible;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17738 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionTestDebugFlag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionTestDebugFlag, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionTestDebugFlag, "UnityEngine.Rendering", "OcclusionTestDebugFlag");

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBlendingTextureMemoryBudget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeBlendingTextureMemoryBudget)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ProbeVolumeBlendingTextureMemoryBudget;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeBlendingTextureMemoryBudget
struct CORDL_TYPE ProbeVolumeBlendingTextureMemoryBudget {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProbeVolumeBlendingTextureMemoryBudget_Unwrapped
  enum struct __ProbeVolumeBlendingTextureMemoryBudget_Unwrapped : int32_t {
    __E_MemoryBudgetLow = static_cast<int32_t>(0x80),
    __E_MemoryBudgetMedium = static_cast<int32_t>(0x100),
    __E_MemoryBudgetHigh = static_cast<int32_t>(0x200),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProbeVolumeBlendingTextureMemoryBudget_Unwrapped() const noexcept {
    return static_cast<__ProbeVolumeBlendingTextureMemoryBudget_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeBlendingTextureMemoryBudget();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeVolumeBlendingTextureMemoryBudget(int32_t value__) noexcept;

  /// @brief Field MemoryBudgetHigh value: I32(512)
  static ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget const MemoryBudgetHigh;

  /// @brief Field MemoryBudgetLow value: I32(128)
  static ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget const MemoryBudgetLow;

  /// @brief Field MemoryBudgetMedium value: I32(256)
  static ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget const MemoryBudgetMedium;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12092 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget, "UnityEngine.Rendering", "ProbeVolumeBlendingTextureMemoryBudget");

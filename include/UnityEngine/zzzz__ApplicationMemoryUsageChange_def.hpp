#pragma once
// IWYU pragma private; include "UnityEngine/ApplicationMemoryUsageChange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ApplicationMemoryUsage_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ApplicationMemoryUsageChange)
namespace UnityEngine {
struct ApplicationMemoryUsage;
}
// Forward declare root types
namespace UnityEngine {
struct ApplicationMemoryUsageChange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ApplicationMemoryUsageChange);
// Dependencies UnityEngine.ApplicationMemoryUsage
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ApplicationMemoryUsageChange
struct CORDL_TYPE ApplicationMemoryUsageChange {
public:
  // Declarations
  __declspec(property(put = set_memoryUsage)) ::UnityEngine::ApplicationMemoryUsage memoryUsage;

  /// @brief Method .ctor, addr 0x4860cd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ApplicationMemoryUsage usage);

  /// @brief Method set_memoryUsage, addr 0x48624cc, size 0x8, virtual false, abstract: false, final false
  inline void set_memoryUsage(::UnityEngine::ApplicationMemoryUsage value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationMemoryUsageChange();

  // Ctor Parameters [CppParam { name: "_memoryUsage_k__BackingField", ty: "::UnityEngine::ApplicationMemoryUsage", modifiers: "", def_value: None }]
  constexpr ApplicationMemoryUsageChange(::UnityEngine::ApplicationMemoryUsage _memoryUsage_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10649 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field <memoryUsage>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::ApplicationMemoryUsage _memoryUsage_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ApplicationMemoryUsageChange, _memoryUsage_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ApplicationMemoryUsageChange, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ApplicationMemoryUsageChange, "UnityEngine", "ApplicationMemoryUsageChange");

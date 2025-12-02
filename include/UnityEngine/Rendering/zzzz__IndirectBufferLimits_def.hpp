#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferLimits.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectBufferLimits)
// Forward declare root types
namespace UnityEngine::Rendering {
struct IndirectBufferLimits;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::IndirectBufferLimits);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.IndirectBufferLimits
struct CORDL_TYPE IndirectBufferLimits {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndirectBufferLimits();

  // Ctor Parameters [CppParam { name: "maxInstanceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxDrawCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IndirectBufferLimits(int32_t maxInstanceCount, int32_t maxDrawCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17699 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field maxInstanceCount, offset: 0x0, size: 0x4, def value: None
  int32_t maxInstanceCount;

  /// @brief Field maxDrawCount, offset: 0x4, size: 0x4, def value: None
  int32_t maxDrawCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferLimits, maxInstanceCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferLimits, maxDrawCount) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::IndirectBufferLimits, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IndirectBufferLimits, "UnityEngine.Rendering", "IndirectBufferLimits");

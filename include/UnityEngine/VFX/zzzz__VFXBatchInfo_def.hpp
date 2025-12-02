#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXBatchInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXBatchInfo)
// Forward declare root types
namespace UnityEngine::VFX {
struct VFXBatchInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::VFXBatchInfo);
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VFXBatchInfo
struct CORDL_TYPE VFXBatchInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXBatchInfo();

  // Ctor Parameters [CppParam { name: "capacity", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "activeInstanceCount", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr VFXBatchInfo(uint32_t capacity, uint32_t activeInstanceCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22584 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field capacity, offset: 0x0, size: 0x4, def value: None
  uint32_t capacity;

  /// @brief Field activeInstanceCount, offset: 0x4, size: 0x4, def value: None
  uint32_t activeInstanceCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXBatchInfo, capacity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXBatchInfo, activeInstanceCount) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::VFX::VFXBatchInfo, 0x8>, "Size mismatch!");

} // namespace UnityEngine::VFX
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXBatchInfo, "UnityEngine.VFX", "VFXBatchInfo");

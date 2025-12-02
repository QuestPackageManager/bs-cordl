#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectDrawInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectDrawInfo)
// Forward declare root types
namespace UnityEngine::Rendering {
struct IndirectDrawInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::IndirectDrawInfo);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.IndirectDrawInfo
struct CORDL_TYPE IndirectDrawInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndirectDrawInfo();

  // Ctor Parameters [CppParam { name: "indexCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "firstIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "baseVertex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "firstInstanceGlobalIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "maxInstanceCount",
  // ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr IndirectDrawInfo(uint32_t indexCount, uint32_t firstIndex, uint32_t baseVertex, uint32_t firstInstanceGlobalIndex, uint32_t maxInstanceCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17691 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field indexCount, offset: 0x0, size: 0x4, def value: None
  uint32_t indexCount;

  /// @brief Field firstIndex, offset: 0x4, size: 0x4, def value: None
  uint32_t firstIndex;

  /// @brief Field baseVertex, offset: 0x8, size: 0x4, def value: None
  uint32_t baseVertex;

  /// @brief Field firstInstanceGlobalIndex, offset: 0xc, size: 0x4, def value: None
  uint32_t firstInstanceGlobalIndex;

  /// @brief Field maxInstanceCount, offset: 0x10, size: 0x4, def value: None
  uint32_t maxInstanceCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IndirectDrawInfo, indexCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectDrawInfo, firstIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectDrawInfo, baseVertex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectDrawInfo, firstInstanceGlobalIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectDrawInfo, maxInstanceCount) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::IndirectDrawInfo, 0x14>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IndirectDrawInfo, "UnityEngine.Rendering", "IndirectDrawInfo");

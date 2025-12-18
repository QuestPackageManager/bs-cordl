#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MeshProceduralInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshProceduralInfo)
// Forward declare root types
namespace UnityEngine::Rendering {
struct MeshProceduralInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::MeshProceduralInfo);
// Dependencies UnityEngine.MeshTopology
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.MeshProceduralInfo
struct CORDL_TYPE MeshProceduralInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshProceduralInfo();

  // Ctor Parameters [CppParam { name: "topology", ty: "::UnityEngine::MeshTopology", modifiers: "", def_value: None }, CppParam { name: "baseVertex", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "firstIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "indexCount", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr MeshProceduralInfo(::UnityEngine::MeshTopology topology, uint32_t baseVertex, uint32_t firstIndex, uint32_t indexCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17633 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field topology, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::MeshTopology topology;

  /// @brief Field baseVertex, offset: 0x4, size: 0x4, def value: None
  uint32_t baseVertex;

  /// @brief Field firstIndex, offset: 0x8, size: 0x4, def value: None
  uint32_t firstIndex;

  /// @brief Field indexCount, offset: 0xc, size: 0x4, def value: None
  uint32_t indexCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::MeshProceduralInfo, topology) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::MeshProceduralInfo, baseVertex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::MeshProceduralInfo, firstIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::MeshProceduralInfo, indexCount) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::MeshProceduralInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MeshProceduralInfo, "UnityEngine.Rendering", "MeshProceduralInfo");

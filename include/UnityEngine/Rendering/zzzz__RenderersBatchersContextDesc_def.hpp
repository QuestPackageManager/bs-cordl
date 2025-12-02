#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderersBatchersContextDesc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__InstanceNumInfo_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(RenderersBatchersContextDesc)
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderersBatchersContextDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderersBatchersContextDesc);
// Dependencies UnityEngine.Rendering.InstanceNumInfo
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderersBatchersContextDesc
struct CORDL_TYPE RenderersBatchersContextDesc {
public:
  // Declarations
  /// @brief Method NewDefault, addr 0x6617f28, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderersBatchersContextDesc NewDefault();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderersBatchersContextDesc();

  // Ctor Parameters [CppParam { name: "instanceNumInfo", ty: "::UnityEngine::Rendering::InstanceNumInfo", modifiers: "", def_value: None }, CppParam { name: "supportDitheringCrossFade", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "enableBoundingSpheresInstanceData", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "smallMeshScreenPercentage", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "enableCullerDebugStats", ty: "bool", modifiers: "", def_value: None }]
  constexpr RenderersBatchersContextDesc(::UnityEngine::Rendering::InstanceNumInfo instanceNumInfo, bool supportDitheringCrossFade, bool enableBoundingSpheresInstanceData,
                                         float_t smallMeshScreenPercentage, bool enableCullerDebugStats) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17745 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field instanceNumInfo, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::InstanceNumInfo instanceNumInfo;

  /// @brief Field supportDitheringCrossFade, offset: 0x8, size: 0x1, def value: None
  bool supportDitheringCrossFade;

  /// @brief Field enableBoundingSpheresInstanceData, offset: 0x9, size: 0x1, def value: None
  bool enableBoundingSpheresInstanceData;

  /// @brief Field smallMeshScreenPercentage, offset: 0xc, size: 0x4, def value: None
  float_t smallMeshScreenPercentage;

  /// @brief Field enableCullerDebugStats, offset: 0x10, size: 0x1, def value: None
  bool enableCullerDebugStats;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContextDesc, instanceNumInfo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContextDesc, supportDitheringCrossFade) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContextDesc, enableBoundingSpheresInstanceData) == 0x9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContextDesc, smallMeshScreenPercentage) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContextDesc, enableCullerDebugStats) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderersBatchersContextDesc, 0x14>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderersBatchersContextDesc, "UnityEngine.Rendering", "RenderersBatchersContextDesc");

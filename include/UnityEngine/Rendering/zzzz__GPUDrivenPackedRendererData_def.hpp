#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenPackedRendererData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUDrivenPackedRendererData)
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngine {
struct MotionVectorGenerationMode;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUDrivenPackedRendererData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUDrivenPackedRendererData);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUDrivenPackedRendererData
struct CORDL_TYPE GPUDrivenPackedRendererData {
public:
  // Declarations
  __declspec(property(get = get_hasTree)) bool hasTree;

  __declspec(property(get = get_isPartOfStaticBatch)) bool isPartOfStaticBatch;

  __declspec(property(get = get_lightProbeUsage)) ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage;

  __declspec(property(get = get_lodMask)) uint8_t lodMask;

  __declspec(property(get = get_motionVecGenMode)) ::UnityEngine::MotionVectorGenerationMode motionVecGenMode;

  __declspec(property(get = get_shadowCastingMode)) ::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode;

  __declspec(property(get = get_smallMeshCulling)) bool smallMeshCulling;

  __declspec(property(get = get_staticShadowCaster)) bool staticShadowCaster;

  /// @brief Method .ctor, addr 0x69619d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasTree, addr 0x69619bc, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasTree();

  /// @brief Method get_isPartOfStaticBatch, addr 0x69619b0, size 0xc, virtual false, abstract: false, final false
  inline bool get_isPartOfStaticBatch();

  /// @brief Method get_lightProbeUsage, addr 0x6961998, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::LightProbeUsage get_lightProbeUsage();

  /// @brief Method get_lodMask, addr 0x6961980, size 0xc, virtual false, abstract: false, final false
  inline uint8_t get_lodMask();

  /// @brief Method get_motionVecGenMode, addr 0x69619a4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::MotionVectorGenerationMode get_motionVecGenMode();

  /// @brief Method get_shadowCastingMode, addr 0x696198c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShadowCastingMode get_shadowCastingMode();

  /// @brief Method get_smallMeshCulling, addr 0x69619c8, size 0xc, virtual false, abstract: false, final false
  inline bool get_smallMeshCulling();

  /// @brief Method get_staticShadowCaster, addr 0x6961974, size 0xc, virtual false, abstract: false, final false
  inline bool get_staticShadowCaster();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenPackedRendererData();

  // Ctor Parameters [CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr GPUDrivenPackedRendererData(uint32_t data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10862 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field data, offset: 0x0, size: 0x4, def value: None
  uint32_t data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenPackedRendererData, data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUDrivenPackedRendererData, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUDrivenPackedRendererData, "UnityEngine.Rendering", "GPUDrivenPackedRendererData");

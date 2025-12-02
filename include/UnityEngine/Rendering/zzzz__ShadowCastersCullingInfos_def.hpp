#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadowCastersCullingInfos.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__LightShadowCasterCullingInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ShadowCastersCullingInfos)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShadowCastersCullingInfos;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShadowCastersCullingInfos);
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.LightShadowCasterCullingInfo, UnityEngine.Rendering.ShadowSplitData
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShadowCastersCullingInfos
struct CORDL_TYPE ShadowCastersCullingInfos {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowCastersCullingInfos();

  // Ctor Parameters [CppParam { name: "splitBuffer", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ShadowSplitData>", modifiers: "", def_value: None }, CppParam { name:
  // "perLightInfos", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LightShadowCasterCullingInfo>", modifiers: "", def_value: None }]
  constexpr ShadowCastersCullingInfos(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ShadowSplitData> splitBuffer,
                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LightShadowCasterCullingInfo> perLightInfos) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10774 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field splitBuffer, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ShadowSplitData> splitBuffer;

  /// @brief Field perLightInfos, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LightShadowCasterCullingInfo> perLightInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShadowCastersCullingInfos, splitBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowCastersCullingInfos, perLightInfos) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShadowCastersCullingInfos, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShadowCastersCullingInfos, "UnityEngine.Rendering", "ShadowCastersCullingInfos");

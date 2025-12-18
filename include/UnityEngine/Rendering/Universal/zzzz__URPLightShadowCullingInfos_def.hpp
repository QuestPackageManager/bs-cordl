#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPLightShadowCullingInfos.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowSliceData_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(URPLightShadowCullingInfos)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct URPLightShadowCullingInfos;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos);
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.Universal.ShadowSliceData
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.URPLightShadowCullingInfos
struct CORDL_TYPE URPLightShadowCullingInfos {
public:
  // Declarations
  /// @brief Method IsSliceValid, addr 0x6702d0c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSliceValid(int32_t i);

  // Ctor Parameters []
  // @brief default ctor
  constexpr URPLightShadowCullingInfos();

  // Ctor Parameters [CppParam { name: "slices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ShadowSliceData>", modifiers: "", def_value: None }, CppParam { name:
  // "slicesValidMask", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr URPLightShadowCullingInfos(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ShadowSliceData> slices, uint32_t slicesValidMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12933 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field slices, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ShadowSliceData> slices;

  /// @brief Field slicesValidMask, offset: 0x10, size: 0x4, def value: None
  uint32_t slicesValidMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos, slices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos, slicesValidMask) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos, "UnityEngine.Rendering.Universal", "URPLightShadowCullingInfos");

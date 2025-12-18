#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShadowCulling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ShadowCulling)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering::Universal {
struct AdditionalLightsShadowAtlasLayout;
}
namespace UnityEngine::Rendering::Universal {
struct URPLightShadowCullingInfos;
}
namespace UnityEngine::Rendering::Universal {
class UniversalShadowData;
}
namespace UnityEngine::Rendering {
struct BatchCullingProjectionType;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShadowCastersCullingInfos;
}
namespace UnityEngine {
struct LightType;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShadowCulling;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShadowCulling);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ShadowCulling
class CORDL_TYPE ShadowCulling : public ::System::Object {
public:
  // Declarations
  /// @brief Field computeShadowCasterCullingInfosMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_computeShadowCasterCullingInfosMarker,
                      put = setStaticF_computeShadowCasterCullingInfosMarker)) ::UnityEngine::Rendering::ProfilingSampler* computeShadowCasterCullingInfosMarker;

  /// @brief Method ComputeShadowCasterCullingInfos, addr 0x6702e00, size 0x84c, virtual false, abstract: false, final false
  static inline void ComputeShadowCasterCullingInfos(::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                     ::ByRef<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout> shadowAtlasLayout,
                                                     ::ByRef<::UnityEngine::Rendering::CullingResults> cullingResults, ::ByRef<::UnityEngine::Rendering::ShadowCastersCullingInfos> shadowCullingInfos,
                                                     ::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>> urpVisibleLightsShadowCullingInfos);

  /// @brief Method CullShadowCasters, addr 0x6702d1c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>
  CullShadowCasters(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> context, ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                    ::ByRef<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout> shadowAtlasLayout, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults);

  /// @brief Method GetCullingProjectionType, addr 0x6703a88, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BatchCullingProjectionType GetCullingProjectionType(::UnityEngine::LightType type);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_computeShadowCasterCullingInfosMarker();

  static inline void setStaticF_computeShadowCasterCullingInfosMarker(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowCulling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShadowCulling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShadowCulling(ShadowCulling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShadowCulling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShadowCulling(ShadowCulling const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12934 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShadowCulling, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShadowCulling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowCulling*, "UnityEngine.Rendering.Universal", "ShadowCulling");

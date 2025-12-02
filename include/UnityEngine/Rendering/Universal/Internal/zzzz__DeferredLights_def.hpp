#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DeferredLights.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MixedLightingSetup_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeferredLights)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct DeferredLights_InitParams;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights_SetupLightPassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct DeferredLights_StencilDeferredPasses;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights___c;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager;
}
namespace UnityEngine::Rendering::Universal {
struct MixedLightingSetup;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingLayerUtils_MaskSize;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalShadowData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
namespace UnityEngine::Rendering {
struct StencilState;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
struct DeferredLights_StencilDeferredPasses;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights_SetupLightPassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights___c;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct DeferredLights_InitParams;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DeferredLights);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DeferredLights___c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DeferredLights/ShaderConstants
class CORDL_TYPE DeferredLights_ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ClearStencilReadMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ClearStencilReadMask, put = setStaticF__ClearStencilReadMask)) int32_t _ClearStencilReadMask;

  /// @brief Field _ClearStencilRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ClearStencilRef, put = setStaticF__ClearStencilRef)) int32_t _ClearStencilRef;

  /// @brief Field _ClearStencilWriteMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ClearStencilWriteMask, put = setStaticF__ClearStencilWriteMask)) int32_t _ClearStencilWriteMask;

  /// @brief Field _CookieLightIndex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CookieLightIndex, put = setStaticF__CookieLightIndex)) int32_t _CookieLightIndex;

  /// @brief Field _LightAttenuation, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LightAttenuation, put = setStaticF__LightAttenuation)) int32_t _LightAttenuation;

  /// @brief Field _LightColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LightColor, put = setStaticF__LightColor)) int32_t _LightColor;

  /// @brief Field _LightDirection, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LightDirection, put = setStaticF__LightDirection)) int32_t _LightDirection;

  /// @brief Field _LightFlags, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LightFlags, put = setStaticF__LightFlags)) int32_t _LightFlags;

  /// @brief Field _LightLayerMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LightLayerMask, put = setStaticF__LightLayerMask)) int32_t _LightLayerMask;

  /// @brief Field _LightOcclusionProbInfo, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LightOcclusionProbInfo, put = setStaticF__LightOcclusionProbInfo)) int32_t _LightOcclusionProbInfo;

  /// @brief Field _LightPosWS, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LightPosWS, put = setStaticF__LightPosWS)) int32_t _LightPosWS;

  /// @brief Field _LitDirStencilReadMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LitDirStencilReadMask, put = setStaticF__LitDirStencilReadMask)) int32_t _LitDirStencilReadMask;

  /// @brief Field _LitDirStencilRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LitDirStencilRef, put = setStaticF__LitDirStencilRef)) int32_t _LitDirStencilRef;

  /// @brief Field _LitDirStencilWriteMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LitDirStencilWriteMask, put = setStaticF__LitDirStencilWriteMask)) int32_t _LitDirStencilWriteMask;

  /// @brief Field _LitPunctualStencilReadMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LitPunctualStencilReadMask, put = setStaticF__LitPunctualStencilReadMask)) int32_t _LitPunctualStencilReadMask;

  /// @brief Field _LitPunctualStencilRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LitPunctualStencilRef, put = setStaticF__LitPunctualStencilRef)) int32_t _LitPunctualStencilRef;

  /// @brief Field _LitPunctualStencilWriteMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LitPunctualStencilWriteMask, put = setStaticF__LitPunctualStencilWriteMask)) int32_t _LitPunctualStencilWriteMask;

  /// @brief Field _LitStencilReadMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LitStencilReadMask, put = setStaticF__LitStencilReadMask)) int32_t _LitStencilReadMask;

  /// @brief Field _LitStencilRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LitStencilRef, put = setStaticF__LitStencilRef)) int32_t _LitStencilRef;

  /// @brief Field _LitStencilWriteMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LitStencilWriteMask, put = setStaticF__LitStencilWriteMask)) int32_t _LitStencilWriteMask;

  /// @brief Field _MainLightColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__MainLightColor, put = setStaticF__MainLightColor)) int32_t _MainLightColor;

  /// @brief Field _MainLightLayerMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__MainLightLayerMask, put = setStaticF__MainLightLayerMask)) int32_t _MainLightLayerMask;

  /// @brief Field _MainLightPosition, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__MainLightPosition, put = setStaticF__MainLightPosition)) int32_t _MainLightPosition;

  /// @brief Field _ScreenToWorld, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ScreenToWorld, put = setStaticF__ScreenToWorld)) int32_t _ScreenToWorld;

  /// @brief Field _ShadowLightIndex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ShadowLightIndex, put = setStaticF__ShadowLightIndex)) int32_t _ShadowLightIndex;

  /// @brief Field _SimpleLitDirStencilReadMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SimpleLitDirStencilReadMask, put = setStaticF__SimpleLitDirStencilReadMask)) int32_t _SimpleLitDirStencilReadMask;

  /// @brief Field _SimpleLitDirStencilRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SimpleLitDirStencilRef, put = setStaticF__SimpleLitDirStencilRef)) int32_t _SimpleLitDirStencilRef;

  /// @brief Field _SimpleLitDirStencilWriteMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SimpleLitDirStencilWriteMask, put = setStaticF__SimpleLitDirStencilWriteMask)) int32_t _SimpleLitDirStencilWriteMask;

  /// @brief Field _SimpleLitPunctualStencilReadMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SimpleLitPunctualStencilReadMask, put = setStaticF__SimpleLitPunctualStencilReadMask)) int32_t _SimpleLitPunctualStencilReadMask;

  /// @brief Field _SimpleLitPunctualStencilRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SimpleLitPunctualStencilRef, put = setStaticF__SimpleLitPunctualStencilRef)) int32_t _SimpleLitPunctualStencilRef;

  /// @brief Field _SimpleLitPunctualStencilWriteMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SimpleLitPunctualStencilWriteMask, put = setStaticF__SimpleLitPunctualStencilWriteMask)) int32_t _SimpleLitPunctualStencilWriteMask;

  /// @brief Field _SimpleLitStencilReadMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SimpleLitStencilReadMask, put = setStaticF__SimpleLitStencilReadMask)) int32_t _SimpleLitStencilReadMask;

  /// @brief Field _SimpleLitStencilRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SimpleLitStencilRef, put = setStaticF__SimpleLitStencilRef)) int32_t _SimpleLitStencilRef;

  /// @brief Field _SimpleLitStencilWriteMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SimpleLitStencilWriteMask, put = setStaticF__SimpleLitStencilWriteMask)) int32_t _SimpleLitStencilWriteMask;

  /// @brief Field _SpotLightBias, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SpotLightBias, put = setStaticF__SpotLightBias)) int32_t _SpotLightBias;

  /// @brief Field _SpotLightGuard, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SpotLightGuard, put = setStaticF__SpotLightGuard)) int32_t _SpotLightGuard;

  /// @brief Field _SpotLightScale, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SpotLightScale, put = setStaticF__SpotLightScale)) int32_t _SpotLightScale;

  /// @brief Field _StencilReadMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StencilReadMask, put = setStaticF__StencilReadMask)) int32_t _StencilReadMask;

  /// @brief Field _StencilRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StencilRef, put = setStaticF__StencilRef)) int32_t _StencilRef;

  /// @brief Field _StencilWriteMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StencilWriteMask, put = setStaticF__StencilWriteMask)) int32_t _StencilWriteMask;

  static inline int32_t getStaticF__ClearStencilReadMask();

  static inline int32_t getStaticF__ClearStencilRef();

  static inline int32_t getStaticF__ClearStencilWriteMask();

  static inline int32_t getStaticF__CookieLightIndex();

  static inline int32_t getStaticF__LightAttenuation();

  static inline int32_t getStaticF__LightColor();

  static inline int32_t getStaticF__LightDirection();

  static inline int32_t getStaticF__LightFlags();

  static inline int32_t getStaticF__LightLayerMask();

  static inline int32_t getStaticF__LightOcclusionProbInfo();

  static inline int32_t getStaticF__LightPosWS();

  static inline int32_t getStaticF__LitDirStencilReadMask();

  static inline int32_t getStaticF__LitDirStencilRef();

  static inline int32_t getStaticF__LitDirStencilWriteMask();

  static inline int32_t getStaticF__LitPunctualStencilReadMask();

  static inline int32_t getStaticF__LitPunctualStencilRef();

  static inline int32_t getStaticF__LitPunctualStencilWriteMask();

  static inline int32_t getStaticF__LitStencilReadMask();

  static inline int32_t getStaticF__LitStencilRef();

  static inline int32_t getStaticF__LitStencilWriteMask();

  static inline int32_t getStaticF__MainLightColor();

  static inline int32_t getStaticF__MainLightLayerMask();

  static inline int32_t getStaticF__MainLightPosition();

  static inline int32_t getStaticF__ScreenToWorld();

  static inline int32_t getStaticF__ShadowLightIndex();

  static inline int32_t getStaticF__SimpleLitDirStencilReadMask();

  static inline int32_t getStaticF__SimpleLitDirStencilRef();

  static inline int32_t getStaticF__SimpleLitDirStencilWriteMask();

  static inline int32_t getStaticF__SimpleLitPunctualStencilReadMask();

  static inline int32_t getStaticF__SimpleLitPunctualStencilRef();

  static inline int32_t getStaticF__SimpleLitPunctualStencilWriteMask();

  static inline int32_t getStaticF__SimpleLitStencilReadMask();

  static inline int32_t getStaticF__SimpleLitStencilRef();

  static inline int32_t getStaticF__SimpleLitStencilWriteMask();

  static inline int32_t getStaticF__SpotLightBias();

  static inline int32_t getStaticF__SpotLightGuard();

  static inline int32_t getStaticF__SpotLightScale();

  static inline int32_t getStaticF__StencilReadMask();

  static inline int32_t getStaticF__StencilRef();

  static inline int32_t getStaticF__StencilWriteMask();

  static inline void setStaticF__ClearStencilReadMask(int32_t value);

  static inline void setStaticF__ClearStencilRef(int32_t value);

  static inline void setStaticF__ClearStencilWriteMask(int32_t value);

  static inline void setStaticF__CookieLightIndex(int32_t value);

  static inline void setStaticF__LightAttenuation(int32_t value);

  static inline void setStaticF__LightColor(int32_t value);

  static inline void setStaticF__LightDirection(int32_t value);

  static inline void setStaticF__LightFlags(int32_t value);

  static inline void setStaticF__LightLayerMask(int32_t value);

  static inline void setStaticF__LightOcclusionProbInfo(int32_t value);

  static inline void setStaticF__LightPosWS(int32_t value);

  static inline void setStaticF__LitDirStencilReadMask(int32_t value);

  static inline void setStaticF__LitDirStencilRef(int32_t value);

  static inline void setStaticF__LitDirStencilWriteMask(int32_t value);

  static inline void setStaticF__LitPunctualStencilReadMask(int32_t value);

  static inline void setStaticF__LitPunctualStencilRef(int32_t value);

  static inline void setStaticF__LitPunctualStencilWriteMask(int32_t value);

  static inline void setStaticF__LitStencilReadMask(int32_t value);

  static inline void setStaticF__LitStencilRef(int32_t value);

  static inline void setStaticF__LitStencilWriteMask(int32_t value);

  static inline void setStaticF__MainLightColor(int32_t value);

  static inline void setStaticF__MainLightLayerMask(int32_t value);

  static inline void setStaticF__MainLightPosition(int32_t value);

  static inline void setStaticF__ScreenToWorld(int32_t value);

  static inline void setStaticF__ShadowLightIndex(int32_t value);

  static inline void setStaticF__SimpleLitDirStencilReadMask(int32_t value);

  static inline void setStaticF__SimpleLitDirStencilRef(int32_t value);

  static inline void setStaticF__SimpleLitDirStencilWriteMask(int32_t value);

  static inline void setStaticF__SimpleLitPunctualStencilReadMask(int32_t value);

  static inline void setStaticF__SimpleLitPunctualStencilRef(int32_t value);

  static inline void setStaticF__SimpleLitPunctualStencilWriteMask(int32_t value);

  static inline void setStaticF__SimpleLitStencilReadMask(int32_t value);

  static inline void setStaticF__SimpleLitStencilRef(int32_t value);

  static inline void setStaticF__SimpleLitStencilWriteMask(int32_t value);

  static inline void setStaticF__SpotLightBias(int32_t value);

  static inline void setStaticF__SpotLightGuard(int32_t value);

  static inline void setStaticF__SpotLightScale(int32_t value);

  static inline void setStaticF__StencilReadMask(int32_t value);

  static inline void setStaticF__StencilRef(int32_t value);

  static inline void setStaticF__StencilWriteMask(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredLights_ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeferredLights_ShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeferredLights_ShaderConstants(DeferredLights_ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeferredLights_ShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeferredLights_ShaderConstants(DeferredLights_ShaderConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13023 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.DeferredLights/StencilDeferredPasses
struct CORDL_TYPE DeferredLights_StencilDeferredPasses {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DeferredLights_StencilDeferredPasses_Unwrapped
  enum struct __DeferredLights_StencilDeferredPasses_Unwrapped : int32_t {
    __E_StencilVolume = static_cast<int32_t>(0x0),
    __E_PunctualLit = static_cast<int32_t>(0x1),
    __E_PunctualSimpleLit = static_cast<int32_t>(0x2),
    __E_DirectionalLit = static_cast<int32_t>(0x3),
    __E_DirectionalSimpleLit = static_cast<int32_t>(0x4),
    __E_ClearStencilPartial = static_cast<int32_t>(0x5),
    __E_Fog = static_cast<int32_t>(0x6),
    __E_SSAOOnly = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DeferredLights_StencilDeferredPasses_Unwrapped() const noexcept {
    return static_cast<__DeferredLights_StencilDeferredPasses_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredLights_StencilDeferredPasses();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DeferredLights_StencilDeferredPasses(int32_t value__) noexcept;

  /// @brief Field ClearStencilPartial value: I32(5)
  static ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses const ClearStencilPartial;

  /// @brief Field DirectionalLit value: I32(3)
  static ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses const DirectionalLit;

  /// @brief Field DirectionalSimpleLit value: I32(4)
  static ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses const DirectionalSimpleLit;

  /// @brief Field Fog value: I32(6)
  static ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses const Fog;

  /// @brief Field PunctualLit value: I32(1)
  static ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses const PunctualLit;

  /// @brief Field PunctualSimpleLit value: I32(2)
  static ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses const PunctualSimpleLit;

  /// @brief Field SSAOOnly value: I32(7)
  static ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses const SSAOOnly;

  /// @brief Field StencilVolume value: I32(0)
  static ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses const StencilVolume;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13024 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.DeferredLights/InitParams
struct CORDL_TYPE DeferredLights_InitParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredLights_InitParams();

  // Ctor Parameters [CppParam { name: "stencilDeferredMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "lightCookieManager", ty:
  // "::UnityEngine::Rendering::Universal::LightCookieManager*", modifiers: "", def_value: None }]
  constexpr DeferredLights_InitParams(::UnityW<::UnityEngine::Material> stencilDeferredMaterial, ::UnityEngine::Rendering::Universal::LightCookieManager* lightCookieManager) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13025 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field stencilDeferredMaterial, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> stencilDeferredMaterial;

  /// @brief Field lightCookieManager, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager* lightCookieManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams, stencilDeferredMaterial) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams, lightCookieManager) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object, UnityEngine.Vector2Int
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DeferredLights/SetupLightPassData
class CORDL_TYPE DeferredLights_SetupLightPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field cameraTargetSizeCopy, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraTargetSizeCopy, put = __cordl_internal_set_cameraTargetSizeCopy)) ::UnityEngine::Vector2Int cameraTargetSizeCopy;

  /// @brief Field deferredLights, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_deferredLights, put = __cordl_internal_set_deferredLights)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights;

  /// @brief Field lightData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lightData, put = __cordl_internal_set_lightData)) ::UnityEngine::Rendering::Universal::UniversalLightData* lightData;

  static inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_cameraTargetSizeCopy() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_cameraTargetSizeCopy();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& __cordl_internal_get_deferredLights() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get_deferredLights();

  constexpr ::UnityEngine::Rendering::Universal::UniversalLightData* const& __cordl_internal_get_lightData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalLightData*& __cordl_internal_get_lightData();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_cameraTargetSizeCopy(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_deferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  constexpr void __cordl_internal_set_lightData(::UnityEngine::Rendering::Universal::UniversalLightData* value);

  /// @brief Method .ctor, addr 0x66cfb24, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredLights_SetupLightPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeferredLights_SetupLightPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeferredLights_SetupLightPassData(DeferredLights_SetupLightPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeferredLights_SetupLightPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeferredLights_SetupLightPassData(DeferredLights_SetupLightPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13026 };

  /// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field lightData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalLightData* ___lightData;

  /// @brief Field deferredLights, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ___deferredLights;

  /// @brief Field cameraTargetSizeCopy, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___cameraTargetSizeCopy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData, ___lightData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData, ___deferredLights) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData, ___cameraTargetSizeCopy) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DeferredLights/<>c
class CORDL_TYPE DeferredLights___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c* __9;

  /// @brief Field <>9__139_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__139_0,
                      put = setStaticF___9__139_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__139_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c* New_ctor();

  /// @brief Method <SetupRenderGraphLights>b__139_0, addr 0x66cfb80, size 0x90, virtual false, abstract: false, final false
  inline void _SetupRenderGraphLights_b__139_0(::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData* data,
                                               ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* rgContext);

  /// @brief Method .ctor, addr 0x66cfb7c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__139_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::DeferredLights___c* value);

  static inline void setStaticF___9__139_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredLights___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeferredLights___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeferredLights___c(DeferredLights___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeferredLights___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeferredLights___c(DeferredLights___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13027 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.Universal.MixedLightingSetup, UnityEngine.Rendering.Universal.RenderingLayerUtils::MaskSize
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DeferredLights
class CORDL_TYPE DeferredLights : public ::System::Object {
public:
  // Declarations
  using InitParams = ::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams;

  using SetupLightPassData = ::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData;

  using ShaderConstants = ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants;

  using StencilDeferredPasses = ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses;

  using __c = ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c;

  __declspec(property(get = get_AccurateGbufferNormals, put = set_AccurateGbufferNormals)) bool AccurateGbufferNormals;

  __declspec(property(get = get_DeferredInputAttachments, put = set_DeferredInputAttachments)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      DeferredInputAttachments;

  __declspec(property(get = get_DeferredInputIsTransient, put = set_DeferredInputIsTransient)) ::ArrayW<bool, ::Array<bool>*> DeferredInputIsTransient;

  __declspec(property(get = get_DepthAttachment, put = set_DepthAttachment)) ::UnityEngine::Rendering::RTHandle* DepthAttachment;

  __declspec(property(get = get_DepthAttachmentHandle, put = set_DepthAttachmentHandle)) ::UnityEngine::Rendering::RTHandle* DepthAttachmentHandle;

  __declspec(property(get = get_DepthCopyTexture, put = set_DepthCopyTexture)) ::UnityEngine::Rendering::RTHandle* DepthCopyTexture;

  __declspec(property(get = get_GBufferAlbedoIndex)) int32_t GBufferAlbedoIndex;

  __declspec(property(get = get_GBufferInputAttachmentCount)) int32_t GBufferInputAttachmentCount;

  __declspec(property(get = get_GBufferLightingIndex)) int32_t GBufferLightingIndex;

  __declspec(property(get = get_GBufferNormalSmoothnessIndex)) int32_t GBufferNormalSmoothnessIndex;

  __declspec(property(get = get_GBufferRenderingLayers)) int32_t GBufferRenderingLayers;

  __declspec(property(get = get_GBufferShadowMask)) int32_t GBufferShadowMask;

  __declspec(property(get = get_GBufferSliceCount)) int32_t GBufferSliceCount;

  __declspec(property(get = get_GBufferSpecularMetallicIndex)) int32_t GBufferSpecularMetallicIndex;

  __declspec(property(get = get_GbufferAttachments, put = set_GbufferAttachments)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> GbufferAttachments;

  __declspec(property(get = get_GbufferDepthIndex)) int32_t GbufferDepthIndex;

  __declspec(property(get = get_GbufferFormats,
                      put = set_GbufferFormats)) ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>
      GbufferFormats;

  /// @brief Field GbufferRTHandles, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_GbufferRTHandles,
                      put = __cordl_internal_set_GbufferRTHandles)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      GbufferRTHandles;

  __declspec(property(get = get_GbufferTextureHandles,
                      put = set_GbufferTextureHandles)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      GbufferTextureHandles;

  __declspec(property(get = get_HasDepthPrepass, put = set_HasDepthPrepass)) bool HasDepthPrepass;

  __declspec(property(get = get_HasNormalPrepass, put = set_HasNormalPrepass)) bool HasNormalPrepass;

  __declspec(property(get = get_HasRenderingLayerPrepass, put = set_HasRenderingLayerPrepass)) bool HasRenderingLayerPrepass;

  __declspec(property(get = get_IsOverlay, put = set_IsOverlay)) bool IsOverlay;

  __declspec(property(get = get_MixedLightingSetup, put = set_MixedLightingSetup)) ::UnityEngine::Rendering::Universal::MixedLightingSetup MixedLightingSetup;

  __declspec(property(get = get_RenderHeight, put = set_RenderHeight)) int32_t RenderHeight;

  __declspec(property(get = get_RenderWidth, put = set_RenderWidth)) int32_t RenderWidth;

  __declspec(property(get = get_RenderingLayerMaskSize, put = set_RenderingLayerMaskSize)) ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize RenderingLayerMaskSize;

  __declspec(property(get = get_UseDecalLayers, put = set_UseDecalLayers)) bool UseDecalLayers;

  __declspec(property(get = get_UseFramebufferFetch, put = set_UseFramebufferFetch)) bool UseFramebufferFetch;

  __declspec(property(get = get_UseJobSystem, put = set_UseJobSystem)) bool UseJobSystem;

  __declspec(property(get = get_UseLightLayers)) bool UseLightLayers;

  __declspec(property(get = get_UseRenderingLayers)) bool UseRenderingLayers;

  __declspec(property(get = get_UseShadowMask)) bool UseShadowMask;

  /// @brief Field <AccurateGbufferNormals>k__BackingField, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get__AccurateGbufferNormals_k__BackingField,
                      put = __cordl_internal_set__AccurateGbufferNormals_k__BackingField)) bool _AccurateGbufferNormals_k__BackingField;

  /// @brief Field <DeferredInputAttachments>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__DeferredInputAttachments_k__BackingField,
                      put = __cordl_internal_set__DeferredInputAttachments_k__BackingField)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      _DeferredInputAttachments_k__BackingField;

  /// @brief Field <DeferredInputIsTransient>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__DeferredInputIsTransient_k__BackingField, put = __cordl_internal_set__DeferredInputIsTransient_k__BackingField)) ::ArrayW<bool, ::Array<bool>*>
      _DeferredInputIsTransient_k__BackingField;

  /// @brief Field <DepthAttachmentHandle>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__DepthAttachmentHandle_k__BackingField,
                      put = __cordl_internal_set__DepthAttachmentHandle_k__BackingField)) ::UnityEngine::Rendering::RTHandle* _DepthAttachmentHandle_k__BackingField;

  /// @brief Field <DepthAttachment>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__DepthAttachment_k__BackingField,
                      put = __cordl_internal_set__DepthAttachment_k__BackingField)) ::UnityEngine::Rendering::RTHandle* _DepthAttachment_k__BackingField;

  /// @brief Field <DepthCopyTexture>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__DepthCopyTexture_k__BackingField,
                      put = __cordl_internal_set__DepthCopyTexture_k__BackingField)) ::UnityEngine::Rendering::RTHandle* _DepthCopyTexture_k__BackingField;

  /// @brief Field <GbufferAttachments>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__GbufferAttachments_k__BackingField,
                      put = __cordl_internal_set__GbufferAttachments_k__BackingField)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      _GbufferAttachments_k__BackingField;

  /// @brief Field <GbufferFormats>k__BackingField, offset 0x68, size 0x8
  __declspec(property(
      get = __cordl_internal_get__GbufferFormats_k__BackingField,
      put = __cordl_internal_set__GbufferFormats_k__BackingField)) ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>
      _GbufferFormats_k__BackingField;

  /// @brief Field <GbufferTextureHandles>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__GbufferTextureHandles_k__BackingField,
                      put = __cordl_internal_set__GbufferTextureHandles_k__BackingField)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
                                                                                                   ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      _GbufferTextureHandles_k__BackingField;

  /// @brief Field <HasDepthPrepass>k__BackingField, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get__HasDepthPrepass_k__BackingField, put = __cordl_internal_set__HasDepthPrepass_k__BackingField)) bool _HasDepthPrepass_k__BackingField;

  /// @brief Field <HasNormalPrepass>k__BackingField, offset 0x17, size 0x1
  __declspec(property(get = __cordl_internal_get__HasNormalPrepass_k__BackingField, put = __cordl_internal_set__HasNormalPrepass_k__BackingField)) bool _HasNormalPrepass_k__BackingField;

  /// @brief Field <HasRenderingLayerPrepass>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__HasRenderingLayerPrepass_k__BackingField,
                      put = __cordl_internal_set__HasRenderingLayerPrepass_k__BackingField)) bool _HasRenderingLayerPrepass_k__BackingField;

  /// @brief Field <IsOverlay>k__BackingField, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__IsOverlay_k__BackingField, put = __cordl_internal_set__IsOverlay_k__BackingField)) bool _IsOverlay_k__BackingField;

  /// @brief Field <MixedLightingSetup>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__MixedLightingSetup_k__BackingField,
                      put = __cordl_internal_set__MixedLightingSetup_k__BackingField)) ::UnityEngine::Rendering::Universal::MixedLightingSetup _MixedLightingSetup_k__BackingField;

  /// @brief Field <RenderHeight>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__RenderHeight_k__BackingField, put = __cordl_internal_set__RenderHeight_k__BackingField)) int32_t _RenderHeight_k__BackingField;

  /// @brief Field <RenderWidth>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__RenderWidth_k__BackingField, put = __cordl_internal_set__RenderWidth_k__BackingField)) int32_t _RenderWidth_k__BackingField;

  /// @brief Field <RenderingLayerMaskSize>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__RenderingLayerMaskSize_k__BackingField,
                      put = __cordl_internal_set__RenderingLayerMaskSize_k__BackingField)) ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize _RenderingLayerMaskSize_k__BackingField;

  /// @brief Field <UseDecalLayers>k__BackingField, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__UseDecalLayers_k__BackingField, put = __cordl_internal_set__UseDecalLayers_k__BackingField)) bool _UseDecalLayers_k__BackingField;

  /// @brief Field <UseFramebufferFetch>k__BackingField, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get__UseFramebufferFetch_k__BackingField, put = __cordl_internal_set__UseFramebufferFetch_k__BackingField)) bool _UseFramebufferFetch_k__BackingField;

  /// @brief Field <UseJobSystem>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__UseJobSystem_k__BackingField, put = __cordl_internal_set__UseJobSystem_k__BackingField)) bool _UseJobSystem_k__BackingField;

  /// @brief Field kStencilShapeGuard, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kStencilShapeGuard, put = setStaticF_kStencilShapeGuard)) float_t kStencilShapeGuard;

  /// @brief Field k_ClearStencilPartial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ClearStencilPartial, put = setStaticF_k_ClearStencilPartial)) ::StringW k_ClearStencilPartial;

  /// @brief Field k_DeferredFogPass, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_DeferredFogPass, put = setStaticF_k_DeferredFogPass)) ::StringW k_DeferredFogPass;

  /// @brief Field k_DeferredPass, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_DeferredPass, put = setStaticF_k_DeferredPass)) ::StringW k_DeferredPass;

  /// @brief Field k_DeferredStencilPass, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_DeferredStencilPass, put = setStaticF_k_DeferredStencilPass)) ::StringW k_DeferredStencilPass;

  /// @brief Field k_GBufferNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GBufferNames, put = setStaticF_k_GBufferNames)) ::ArrayW<::StringW, ::Array<::StringW>*> k_GBufferNames;

  /// @brief Field k_GBufferShaderPropertyIDs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GBufferShaderPropertyIDs, put = setStaticF_k_GBufferShaderPropertyIDs)) ::ArrayW<int32_t, ::Array<int32_t>*> k_GBufferShaderPropertyIDs;

  /// @brief Field k_InvalidLightOffset, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_k_InvalidLightOffset, put = setStaticF_k_InvalidLightOffset)) uint16_t k_InvalidLightOffset;

  /// @brief Field k_SetupLightConstants, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_SetupLightConstants, put = setStaticF_k_SetupLightConstants)) ::StringW k_SetupLightConstants;

  /// @brief Field k_SetupLights, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_SetupLights, put = setStaticF_k_SetupLights)) ::StringW k_SetupLights;

  /// @brief Field k_StencilDeferredPassNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_StencilDeferredPassNames, put = setStaticF_k_StencilDeferredPassNames)) ::ArrayW<::StringW, ::Array<::StringW>*> k_StencilDeferredPassNames;

  /// @brief Field m_AdditionalLightsShadowCasterPass, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowCasterPass,
                      put =
                          __cordl_internal_set_m_AdditionalLightsShadowCasterPass)) ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* m_AdditionalLightsShadowCasterPass;

  /// @brief Field m_FullscreenMesh, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FullscreenMesh, put = __cordl_internal_set_m_FullscreenMesh)) ::UnityW<::UnityEngine::Mesh> m_FullscreenMesh;

  /// @brief Field m_HemisphereMesh, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HemisphereMesh, put = __cordl_internal_set_m_HemisphereMesh)) ::UnityW<::UnityEngine::Mesh> m_HemisphereMesh;

  /// @brief Field m_LightCookieManager, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightCookieManager, put = __cordl_internal_set_m_LightCookieManager)) ::UnityEngine::Rendering::Universal::LightCookieManager* m_LightCookieManager;

  /// @brief Field m_ProfilingDeferredPass, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ProfilingDeferredPass, put = setStaticF_m_ProfilingDeferredPass)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingDeferredPass;

  /// @brief Field m_ProfilingSamplerClearStencilPartialPass, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSamplerClearStencilPartialPass,
                      put = __cordl_internal_set_m_ProfilingSamplerClearStencilPartialPass)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerClearStencilPartialPass;

  /// @brief Field m_ProfilingSamplerDeferredFogPass, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSamplerDeferredFogPass,
                      put = __cordl_internal_set_m_ProfilingSamplerDeferredFogPass)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerDeferredFogPass;

  /// @brief Field m_ProfilingSamplerDeferredStencilPass, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSamplerDeferredStencilPass,
                      put = __cordl_internal_set_m_ProfilingSamplerDeferredStencilPass)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerDeferredStencilPass;

  /// @brief Field m_ProfilingSetupLightConstants, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ProfilingSetupLightConstants, put = setStaticF_m_ProfilingSetupLightConstants)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupLightConstants;

  /// @brief Field m_ProfilingSetupLights, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ProfilingSetupLights, put = setStaticF_m_ProfilingSetupLights)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupLights;

  /// @brief Field m_ScreenToWorld, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScreenToWorld, put = __cordl_internal_set_m_ScreenToWorld)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_ScreenToWorld;

  /// @brief Field m_SphereMesh, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SphereMesh, put = __cordl_internal_set_m_SphereMesh)) ::UnityW<::UnityEngine::Mesh> m_SphereMesh;

  /// @brief Field m_StencilDeferredMaterial, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StencilDeferredMaterial, put = __cordl_internal_set_m_StencilDeferredMaterial)) ::UnityW<::UnityEngine::Material> m_StencilDeferredMaterial;

  /// @brief Field m_StencilDeferredPasses, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StencilDeferredPasses, put = __cordl_internal_set_m_StencilDeferredPasses)) ::ArrayW<int32_t, ::Array<int32_t>*> m_StencilDeferredPasses;

  /// @brief Field m_stencilVisLightOffsets, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get_m_stencilVisLightOffsets, put = __cordl_internal_set_m_stencilVisLightOffsets)) ::Unity::Collections::NativeArray_1<uint16_t> m_stencilVisLightOffsets;

  /// @brief Field m_stencilVisLights, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get_m_stencilVisLights, put = __cordl_internal_set_m_stencilVisLights)) ::Unity::Collections::NativeArray_1<uint16_t> m_stencilVisLights;

  /// @brief Field s_SetupDeferredLights, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SetupDeferredLights, put = setStaticF_s_SetupDeferredLights)) ::UnityEngine::Rendering::ProfilingSampler* s_SetupDeferredLights;

  /// @brief Method ClearStencilPartial, addr 0x66cb7fc, size 0x180, virtual false, abstract: false, final false
  inline void ClearStencilPartial(::UnityEngine::Rendering::RasterCommandBuffer* cmd);

  /// @brief Method CreateFullscreenMesh, addr 0x66cb97c, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> CreateFullscreenMesh();

  /// @brief Method CreateGbufferResources, addr 0x66ca970, size 0x2c4, virtual false, abstract: false, final false
  inline void CreateGbufferResources();

  /// @brief Method CreateHemisphereMesh, addr 0x66ce750, size 0x538, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> CreateHemisphereMesh();

  /// @brief Method CreateSphereMesh, addr 0x66ce17c, size 0x5d4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> CreateSphereMesh();

  /// @brief Method DisableFramebufferFetchInput, addr 0x66cac34, size 0x8, virtual false, abstract: false, final false
  inline void DisableFramebufferFetchInput();

  /// @brief Method ExecuteDeferredPass, addr 0x66cbad4, size 0x364, virtual false, abstract: false, final false
  inline void ExecuteDeferredPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                  ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData);

  /// @brief Method GetGBufferFormat, addr 0x66c93f8, size 0x15c, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGBufferFormat(int32_t index);

  /// @brief Method HasStencilLightsOfType, addr 0x66cc214, size 0x7c, virtual false, abstract: false, final false
  inline bool HasStencilLightsOfType(::UnityEngine::LightType type);

  /// @brief Method InitStencilDeferredMaterial, addr 0x66c99b0, size 0x380, virtual false, abstract: false, final false
  inline void InitStencilDeferredMaterial();

  /// @brief Method IsRuntimeSupportedThisFrame, addr 0x66cb174, size 0xcc, virtual false, abstract: false, final false
  inline bool IsRuntimeSupportedThisFrame();

  static inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights* New_ctor(::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams initParams, bool useNativeRenderPass);

  /// @brief Method OnCameraCleanup, addr 0x66cb47c, size 0xd4, virtual false, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OverwriteStencil, addr 0x66cb690, size 0x16c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderStateBlock OverwriteStencil(::UnityEngine::Rendering::RenderStateBlock block, int32_t stencilWriteMask, int32_t stencilRef);

  /// @brief Method OverwriteStencil, addr 0x66cb550, size 0x140, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::StencilState OverwriteStencil(::UnityEngine::Rendering::StencilState s, int32_t stencilWriteMask);

  /// @brief Method PrecomputeLights, addr 0x66ca4ec, size 0x314, virtual false, abstract: false, final false
  inline void PrecomputeLights(::ByRef<::Unity::Collections::NativeArray_1<uint16_t>> stencilVisLights, ::ByRef<::Unity::Collections::NativeArray_1<uint16_t>> stencilVisLightOffsets,
                               ::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>> visibleLights, bool hasAdditionalLights);

  /// @brief Method ReAllocateGBufferIfNeeded, addr 0x66cacc8, size 0x1d8, virtual false, abstract: false, final false
  inline void ReAllocateGBufferIfNeeded(::UnityEngine::RenderTextureDescriptor gbufferSlice, int32_t gbufferIndex);

  /// @brief Method ReleaseGbufferResources, addr 0x66cac3c, size 0x8c, virtual false, abstract: false, final false
  inline void ReleaseGbufferResources();

  /// @brief Method RenderFog, addr 0x66cc6c8, size 0x22c, virtual false, abstract: false, final false
  inline void RenderFog(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool isOrthographic);

  /// @brief Method RenderSSAOBeforeShading, addr 0x66cc290, size 0x140, virtual false, abstract: false, final false
  inline void RenderSSAOBeforeShading(::UnityEngine::Rendering::RasterCommandBuffer* cmd);

  /// @brief Method RenderStencilDirectionalLights, addr 0x66ccb14, size 0x614, virtual false, abstract: false, final false
  inline void RenderStencilDirectionalLights(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool stripShadowsOffVariants, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                             ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                             ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights, bool hasAdditionalLightPass, bool hasLightCookieManager,
                                             int32_t mainLightIndex);

  /// @brief Method RenderStencilLights, addr 0x66cc3d0, size 0x2f8, virtual false, abstract: false, final false
  inline void RenderStencilLights(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                  ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData, bool stripShadowsOffVariants);

  /// @brief Method RenderStencilPointLights, addr 0x66cd128, size 0x618, virtual false, abstract: false, final false
  inline void RenderStencilPointLights(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool stripShadowsOffVariants, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                       ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights,
                                       bool hasAdditionalLightPass, bool hasLightCookieManager);

  /// @brief Method RenderStencilSpotLights, addr 0x66cd740, size 0x6e0, virtual false, abstract: false, final false
  inline void RenderStencilSpotLights(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool stripShadowsOffVariants, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                      ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights,
                                      bool hasAdditionalLightPass, bool hasLightCookieManager);

  /// @brief Method ResolveMixedLightingMode, addr 0x66ca804, size 0x16c, virtual false, abstract: false, final false
  inline void ResolveMixedLightingMode(::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method SetAdditionalLightsShadowsKeyword, addr 0x66cdfc8, size 0xc4, virtual false, abstract: false, final false
  inline void SetAdditionalLightsShadowsKeyword(::ByRef<::UnityEngine::Rendering::RasterCommandBuffer*> cmd, bool stripShadowsOffVariants, bool additionalLightShadowsEnabled, bool hasDeferredShadows,
                                                bool shouldOverride, ::ByRef<bool> lastShadowsKeyword);

  /// @brief Method SetLightCookiesKeyword, addr 0x66cde80, size 0x148, virtual false, abstract: false, final false
  inline void SetLightCookiesKeyword(::UnityEngine::Rendering::RasterCommandBuffer* cmd, int32_t visLightIndex, bool hasLightCookieManager, bool shouldOverride, ::ByRef<bool> lastLightCookieState,
                                     ::ByRef<int32_t> lastCookieLightIndex);

  /// @brief Method SetRenderingLayersMask, addr 0x66ccac0, size 0x54, virtual false, abstract: false, final false
  inline void SetRenderingLayersMask(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Light* light, int32_t shaderPropertyID);

  /// @brief Method SetSoftShadowsKeyword, addr 0x66ce08c, size 0xf0, virtual false, abstract: false, final false
  inline void SetSoftShadowsKeyword(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData, ::UnityEngine::Light* light,
                                    bool hasDeferredShadows, bool shouldOverride, ::ByRef<bool> lastHasSoftShadow);

  /// @brief Method Setup, addr 0x66cb474, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* additionalLightsShadowCasterPass);

  /// @brief Method Setup, addr 0x66cb240, size 0x234, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* additionalLightsShadowCasterPass, bool hasDepthPrepass, bool hasNormalPrepass,
                    bool hasRenderingLayerPrepass, ::UnityEngine::Rendering::RTHandle* depthCopyTexture, ::UnityEngine::Rendering::RTHandle* depthAttachment,
                    ::UnityEngine::Rendering::RTHandle* colorAttachment);

  /// @brief Method SetupLights, addr 0x66ca0e8, size 0x404, virtual false, abstract: false, final false
  inline void SetupLights(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Vector2Int cameraTargetSizeCopy,
                          ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, bool isRenderGraph);

  /// @brief Method SetupMainLightConstants, addr 0x66cc8f4, size 0x1cc, virtual false, abstract: false, final false
  inline void SetupMainLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method SetupMatrixConstants, addr 0x66cbe38, size 0x3dc, virtual false, abstract: false, final false
  inline void SetupMatrixConstants(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method SetupRenderGraphLights, addr 0x66c9d30, size 0x3b8, virtual false, abstract: false, final false
  inline void SetupRenderGraphLights(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                     ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method SetupShaderLightConstants, addr 0x66ca800, size 0x4, virtual false, abstract: false, final false
  inline void SetupShaderLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method UpdateDeferredInputAttachments, addr 0x66caea0, size 0x2d4, virtual false, abstract: false, final false
  inline void UpdateDeferredInputAttachments();

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get_GbufferRTHandles() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get_GbufferRTHandles();

  constexpr bool const& __cordl_internal_get__AccurateGbufferNormals_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AccurateGbufferNormals_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get__DeferredInputAttachments_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get__DeferredInputAttachments_k__BackingField();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get__DeferredInputIsTransient_k__BackingField() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get__DeferredInputIsTransient_k__BackingField();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__DepthAttachmentHandle_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__DepthAttachmentHandle_k__BackingField();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__DepthAttachment_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__DepthAttachment_k__BackingField();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__DepthCopyTexture_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__DepthCopyTexture_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get__GbufferAttachments_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get__GbufferAttachments_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> const&
  __cordl_internal_get__GbufferFormats_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>& __cordl_internal_get__GbufferFormats_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> const&
  __cordl_internal_get__GbufferTextureHandles_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>&
  __cordl_internal_get__GbufferTextureHandles_k__BackingField();

  constexpr bool const& __cordl_internal_get__HasDepthPrepass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__HasDepthPrepass_k__BackingField();

  constexpr bool const& __cordl_internal_get__HasNormalPrepass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__HasNormalPrepass_k__BackingField();

  constexpr bool const& __cordl_internal_get__HasRenderingLayerPrepass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__HasRenderingLayerPrepass_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsOverlay_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsOverlay_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup const& __cordl_internal_get__MixedLightingSetup_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup& __cordl_internal_get__MixedLightingSetup_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__RenderHeight_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__RenderHeight_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__RenderWidth_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__RenderWidth_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const& __cordl_internal_get__RenderingLayerMaskSize_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize& __cordl_internal_get__RenderingLayerMaskSize_k__BackingField();

  constexpr bool const& __cordl_internal_get__UseDecalLayers_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseDecalLayers_k__BackingField();

  constexpr bool const& __cordl_internal_get__UseFramebufferFetch_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseFramebufferFetch_k__BackingField();

  constexpr bool const& __cordl_internal_get__UseJobSystem_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseJobSystem_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* const& __cordl_internal_get_m_AdditionalLightsShadowCasterPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*& __cordl_internal_get_m_AdditionalLightsShadowCasterPass();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_FullscreenMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_FullscreenMesh();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_HemisphereMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_HemisphereMesh();

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager* const& __cordl_internal_get_m_LightCookieManager() const;

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager*& __cordl_internal_get_m_LightCookieManager();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfilingSamplerClearStencilPartialPass() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSamplerClearStencilPartialPass();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfilingSamplerDeferredFogPass() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSamplerDeferredFogPass();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfilingSamplerDeferredStencilPass() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSamplerDeferredStencilPass();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_ScreenToWorld() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_ScreenToWorld();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_SphereMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_SphereMesh();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_StencilDeferredMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_StencilDeferredMaterial();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_StencilDeferredPasses() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_StencilDeferredPasses();

  constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& __cordl_internal_get_m_stencilVisLightOffsets() const;

  constexpr ::Unity::Collections::NativeArray_1<uint16_t>& __cordl_internal_get_m_stencilVisLightOffsets();

  constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& __cordl_internal_get_m_stencilVisLights() const;

  constexpr ::Unity::Collections::NativeArray_1<uint16_t>& __cordl_internal_get_m_stencilVisLights();

  constexpr void __cordl_internal_set_GbufferRTHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  constexpr void __cordl_internal_set__AccurateGbufferNormals_k__BackingField(bool value);

  constexpr void __cordl_internal_set__DeferredInputAttachments_k__BackingField(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  constexpr void __cordl_internal_set__DeferredInputIsTransient_k__BackingField(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set__DepthAttachmentHandle_k__BackingField(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set__DepthAttachment_k__BackingField(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set__DepthCopyTexture_k__BackingField(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set__GbufferAttachments_k__BackingField(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  constexpr void
  __cordl_internal_set__GbufferFormats_k__BackingField(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value);

  constexpr void __cordl_internal_set__GbufferTextureHandles_k__BackingField(
      ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  constexpr void __cordl_internal_set__HasDepthPrepass_k__BackingField(bool value);

  constexpr void __cordl_internal_set__HasNormalPrepass_k__BackingField(bool value);

  constexpr void __cordl_internal_set__HasRenderingLayerPrepass_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsOverlay_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MixedLightingSetup_k__BackingField(::UnityEngine::Rendering::Universal::MixedLightingSetup value);

  constexpr void __cordl_internal_set__RenderHeight_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__RenderWidth_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__RenderingLayerMaskSize_k__BackingField(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value);

  constexpr void __cordl_internal_set__UseDecalLayers_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UseFramebufferFetch_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UseJobSystem_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* value);

  constexpr void __cordl_internal_set_m_FullscreenMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_HemisphereMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager* value);

  constexpr void __cordl_internal_set_m_ProfilingSamplerClearStencilPartialPass(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ProfilingSamplerDeferredFogPass(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ProfilingSamplerDeferredStencilPass(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ScreenToWorld(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_SphereMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_StencilDeferredMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_StencilDeferredPasses(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_stencilVisLightOffsets(::Unity::Collections::NativeArray_1<uint16_t> value);

  constexpr void __cordl_internal_set_m_stencilVisLights(::Unity::Collections::NativeArray_1<uint16_t> value);

  /// @brief Method .ctor, addr 0x66c96f8, size 0x2b8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams initParams, bool useNativeRenderPass);

  static inline float_t getStaticF_kStencilShapeGuard();

  static inline ::StringW getStaticF_k_ClearStencilPartial();

  static inline ::StringW getStaticF_k_DeferredFogPass();

  static inline ::StringW getStaticF_k_DeferredPass();

  static inline ::StringW getStaticF_k_DeferredStencilPass();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_k_GBufferNames();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_GBufferShaderPropertyIDs();

  static inline uint16_t getStaticF_k_InvalidLightOffset();

  static inline ::StringW getStaticF_k_SetupLightConstants();

  static inline ::StringW getStaticF_k_SetupLights();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_k_StencilDeferredPassNames();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingDeferredPass();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSetupLightConstants();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSetupLights();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_s_SetupDeferredLights();

  /// @brief Method get_AccurateGbufferNormals, addr 0x66c9628, size 0x8, virtual false, abstract: false, final false
  inline bool get_AccurateGbufferNormals();

  /// @brief Method get_DeferredInputAttachments, addr 0x66c9698, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> get_DeferredInputAttachments();

  /// @brief Method get_DeferredInputIsTransient, addr 0x66c96a8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> get_DeferredInputIsTransient();

  /// @brief Method get_DepthAttachment, addr 0x66c96b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_DepthAttachment();

  /// @brief Method get_DepthAttachmentHandle, addr 0x66c96e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_DepthAttachmentHandle();

  /// @brief Method get_DepthCopyTexture, addr 0x66c96c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_DepthCopyTexture();

  /// @brief Method get_GBufferAlbedoIndex, addr 0x66c92b8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GBufferAlbedoIndex();

  /// @brief Method get_GBufferInputAttachmentCount, addr 0x66c93e4, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_GBufferInputAttachmentCount();

  /// @brief Method get_GBufferLightingIndex, addr 0x66c92d0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GBufferLightingIndex();

  /// @brief Method get_GBufferNormalSmoothnessIndex, addr 0x66c92c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GBufferNormalSmoothnessIndex();

  /// @brief Method get_GBufferRenderingLayers, addr 0x66c92ec, size 0x30, virtual false, abstract: false, final false
  inline int32_t get_GBufferRenderingLayers();

  /// @brief Method get_GBufferShadowMask, addr 0x66c9348, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_GBufferShadowMask();

  /// @brief Method get_GBufferSliceCount, addr 0x66c93a0, size 0x44, virtual false, abstract: false, final false
  inline int32_t get_GBufferSliceCount();

  /// @brief Method get_GBufferSpecularMetallicIndex, addr 0x66c92c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GBufferSpecularMetallicIndex();

  /// @brief Method get_GbufferAttachments, addr 0x66c9678, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> get_GbufferAttachments();

  /// @brief Method get_GbufferDepthIndex, addr 0x66c92d8, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_GbufferDepthIndex();

  /// @brief Method get_GbufferFormats, addr 0x66c96d8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> get_GbufferFormats();

  /// @brief Method get_GbufferTextureHandles, addr 0x66c9688, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> get_GbufferTextureHandles();

  /// @brief Method get_HasDepthPrepass, addr 0x66c95e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasDepthPrepass();

  /// @brief Method get_HasNormalPrepass, addr 0x66c95f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasNormalPrepass();

  /// @brief Method get_HasRenderingLayerPrepass, addr 0x66c9608, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasRenderingLayerPrepass();

  /// @brief Method get_IsOverlay, addr 0x66c9618, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsOverlay();

  /// @brief Method get_MixedLightingSetup, addr 0x66c9638, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::MixedLightingSetup get_MixedLightingSetup();

  /// @brief Method get_RenderHeight, addr 0x66c9668, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RenderHeight();

  /// @brief Method get_RenderWidth, addr 0x66c9658, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RenderWidth();

  /// @brief Method get_RenderingLayerMaskSize, addr 0x66c95b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize get_RenderingLayerMaskSize();

  /// @brief Method get_UseDecalLayers, addr 0x66c95c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseDecalLayers();

  /// @brief Method get_UseFramebufferFetch, addr 0x66c95d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseFramebufferFetch();

  /// @brief Method get_UseJobSystem, addr 0x66c9648, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseJobSystem();

  /// @brief Method get_UseLightLayers, addr 0x66c9554, size 0x64, virtual false, abstract: false, final false
  inline bool get_UseLightLayers();

  /// @brief Method get_UseRenderingLayers, addr 0x66c931c, size 0x2c, virtual false, abstract: false, final false
  inline bool get_UseRenderingLayers();

  /// @brief Method get_UseShadowMask, addr 0x66c9390, size 0x10, virtual false, abstract: false, final false
  inline bool get_UseShadowMask();

  static inline void setStaticF_kStencilShapeGuard(float_t value);

  static inline void setStaticF_k_ClearStencilPartial(::StringW value);

  static inline void setStaticF_k_DeferredFogPass(::StringW value);

  static inline void setStaticF_k_DeferredPass(::StringW value);

  static inline void setStaticF_k_DeferredStencilPass(::StringW value);

  static inline void setStaticF_k_GBufferNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_k_GBufferShaderPropertyIDs(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_k_InvalidLightOffset(uint16_t value);

  static inline void setStaticF_k_SetupLightConstants(::StringW value);

  static inline void setStaticF_k_SetupLights(::StringW value);

  static inline void setStaticF_k_StencilDeferredPassNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_m_ProfilingDeferredPass(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingSetupLightConstants(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingSetupLights(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_s_SetupDeferredLights(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method set_AccurateGbufferNormals, addr 0x66c9630, size 0x8, virtual false, abstract: false, final false
  inline void set_AccurateGbufferNormals(bool value);

  /// @brief Method set_DeferredInputAttachments, addr 0x66c96a0, size 0x8, virtual false, abstract: false, final false
  inline void set_DeferredInputAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  /// @brief Method set_DeferredInputIsTransient, addr 0x66c96b0, size 0x8, virtual false, abstract: false, final false
  inline void set_DeferredInputIsTransient(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method set_DepthAttachment, addr 0x66c96c0, size 0x8, virtual false, abstract: false, final false
  inline void set_DepthAttachment(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method set_DepthAttachmentHandle, addr 0x66c96f0, size 0x8, virtual false, abstract: false, final false
  inline void set_DepthAttachmentHandle(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method set_DepthCopyTexture, addr 0x66c96d0, size 0x8, virtual false, abstract: false, final false
  inline void set_DepthCopyTexture(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method set_GbufferAttachments, addr 0x66c9680, size 0x8, virtual false, abstract: false, final false
  inline void set_GbufferAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  /// @brief Method set_GbufferFormats, addr 0x66c96e0, size 0x8, virtual false, abstract: false, final false
  inline void set_GbufferFormats(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value);

  /// @brief Method set_GbufferTextureHandles, addr 0x66c9690, size 0x8, virtual false, abstract: false, final false
  inline void set_GbufferTextureHandles(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  /// @brief Method set_HasDepthPrepass, addr 0x66c95f0, size 0x8, virtual false, abstract: false, final false
  inline void set_HasDepthPrepass(bool value);

  /// @brief Method set_HasNormalPrepass, addr 0x66c9600, size 0x8, virtual false, abstract: false, final false
  inline void set_HasNormalPrepass(bool value);

  /// @brief Method set_HasRenderingLayerPrepass, addr 0x66c9610, size 0x8, virtual false, abstract: false, final false
  inline void set_HasRenderingLayerPrepass(bool value);

  /// @brief Method set_IsOverlay, addr 0x66c9620, size 0x8, virtual false, abstract: false, final false
  inline void set_IsOverlay(bool value);

  /// @brief Method set_MixedLightingSetup, addr 0x66c9640, size 0x8, virtual false, abstract: false, final false
  inline void set_MixedLightingSetup(::UnityEngine::Rendering::Universal::MixedLightingSetup value);

  /// @brief Method set_RenderHeight, addr 0x66c9670, size 0x8, virtual false, abstract: false, final false
  inline void set_RenderHeight(int32_t value);

  /// @brief Method set_RenderWidth, addr 0x66c9660, size 0x8, virtual false, abstract: false, final false
  inline void set_RenderWidth(int32_t value);

  /// @brief Method set_RenderingLayerMaskSize, addr 0x66c95c0, size 0x8, virtual false, abstract: false, final false
  inline void set_RenderingLayerMaskSize(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value);

  /// @brief Method set_UseDecalLayers, addr 0x66c95d0, size 0x8, virtual false, abstract: false, final false
  inline void set_UseDecalLayers(bool value);

  /// @brief Method set_UseFramebufferFetch, addr 0x66c95e0, size 0x8, virtual false, abstract: false, final false
  inline void set_UseFramebufferFetch(bool value);

  /// @brief Method set_UseJobSystem, addr 0x66c9650, size 0x8, virtual false, abstract: false, final false
  inline void set_UseJobSystem(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredLights();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeferredLights", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeferredLights(DeferredLights&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeferredLights", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeferredLights(DeferredLights const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13028 };

  /// @brief Field <RenderingLayerMaskSize>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize ____RenderingLayerMaskSize_k__BackingField;

  /// @brief Field <UseDecalLayers>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool ____UseDecalLayers_k__BackingField;

  /// @brief Field <UseFramebufferFetch>k__BackingField, offset: 0x15, size: 0x1, def value: None
  bool ____UseFramebufferFetch_k__BackingField;

  /// @brief Field <HasDepthPrepass>k__BackingField, offset: 0x16, size: 0x1, def value: None
  bool ____HasDepthPrepass_k__BackingField;

  /// @brief Field <HasNormalPrepass>k__BackingField, offset: 0x17, size: 0x1, def value: None
  bool ____HasNormalPrepass_k__BackingField;

  /// @brief Field <HasRenderingLayerPrepass>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____HasRenderingLayerPrepass_k__BackingField;

  /// @brief Field <IsOverlay>k__BackingField, offset: 0x19, size: 0x1, def value: None
  bool ____IsOverlay_k__BackingField;

  /// @brief Field <AccurateGbufferNormals>k__BackingField, offset: 0x1a, size: 0x1, def value: None
  bool ____AccurateGbufferNormals_k__BackingField;

  /// @brief Field <MixedLightingSetup>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::MixedLightingSetup ____MixedLightingSetup_k__BackingField;

  /// @brief Field <UseJobSystem>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____UseJobSystem_k__BackingField;

  /// @brief Field <RenderWidth>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____RenderWidth_k__BackingField;

  /// @brief Field <RenderHeight>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____RenderHeight_k__BackingField;

  /// @brief Field <GbufferAttachments>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ____GbufferAttachments_k__BackingField;

  /// @brief Field GbufferRTHandles, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ___GbufferRTHandles;

  /// @brief Field <GbufferTextureHandles>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> ____GbufferTextureHandles_k__BackingField;

  /// @brief Field <DeferredInputAttachments>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ____DeferredInputAttachments_k__BackingField;

  /// @brief Field <DeferredInputIsTransient>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____DeferredInputIsTransient_k__BackingField;

  /// @brief Field <DepthAttachment>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ____DepthAttachment_k__BackingField;

  /// @brief Field <DepthCopyTexture>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ____DepthCopyTexture_k__BackingField;

  /// @brief Field <GbufferFormats>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> ____GbufferFormats_k__BackingField;

  /// @brief Field <DepthAttachmentHandle>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ____DepthAttachmentHandle_k__BackingField;

  /// @brief Field m_stencilVisLights, offset: 0x78, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint16_t> ___m_stencilVisLights;

  /// @brief Field m_stencilVisLightOffsets, offset: 0x88, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint16_t> ___m_stencilVisLightOffsets;

  /// @brief Field m_AdditionalLightsShadowCasterPass, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* ___m_AdditionalLightsShadowCasterPass;

  /// @brief Field m_SphereMesh, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_SphereMesh;

  /// @brief Field m_HemisphereMesh, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_HemisphereMesh;

  /// @brief Field m_FullscreenMesh, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_FullscreenMesh;

  /// @brief Field m_StencilDeferredMaterial, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_StencilDeferredMaterial;

  /// @brief Field m_StencilDeferredPasses, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_StencilDeferredPasses;

  /// @brief Field m_ScreenToWorld, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_ScreenToWorld;

  /// @brief Field m_ProfilingSamplerDeferredStencilPass, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSamplerDeferredStencilPass;

  /// @brief Field m_ProfilingSamplerDeferredFogPass, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSamplerDeferredFogPass;

  /// @brief Field m_ProfilingSamplerClearStencilPartialPass, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSamplerClearStencilPartialPass;

  /// @brief Field m_LightCookieManager, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager* ___m_LightCookieManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____RenderingLayerMaskSize_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____UseDecalLayers_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____UseFramebufferFetch_k__BackingField) == 0x15, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____HasDepthPrepass_k__BackingField) == 0x16, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____HasNormalPrepass_k__BackingField) == 0x17, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____HasRenderingLayerPrepass_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____IsOverlay_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____AccurateGbufferNormals_k__BackingField) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____MixedLightingSetup_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____UseJobSystem_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____RenderWidth_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____RenderHeight_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____GbufferAttachments_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___GbufferRTHandles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____GbufferTextureHandles_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____DeferredInputAttachments_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____DeferredInputIsTransient_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____DepthAttachment_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____DepthCopyTexture_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____GbufferFormats_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____DepthAttachmentHandle_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_stencilVisLights) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_stencilVisLightOffsets) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_AdditionalLightsShadowCasterPass) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_SphereMesh) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_HemisphereMesh) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_FullscreenMesh) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_StencilDeferredMaterial) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_StencilDeferredPasses) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_ScreenToWorld) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_ProfilingSamplerDeferredStencilPass) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_ProfilingSamplerDeferredFogPass) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_ProfilingSamplerClearStencilPartialPass) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_LightCookieManager) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DeferredLights, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/StencilDeferredPasses");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DeferredLights);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredLights*, "UnityEngine.Rendering.Universal.Internal", "DeferredLights");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/SetupLightPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/ShaderConstants");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DeferredLights___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/InitParams");

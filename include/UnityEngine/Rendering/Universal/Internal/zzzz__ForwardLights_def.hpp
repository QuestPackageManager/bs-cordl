#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/ForwardLights.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MixedLightingSetup_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ReflectionProbeManager_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ForwardLights)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct ForwardLights_InitParams;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ForwardLights_LightConstantBuffer;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ForwardLights_SetupLightPassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ForwardLights___c;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager;
}
namespace UnityEngine::Rendering::Universal {
struct ReflectionProbeManager;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
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
class UnsafeCommandBuffer;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine::Rendering {
struct VisibleReflectionProbe;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class ForwardLights;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ForwardLights_LightConstantBuffer;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ForwardLights_SetupLightPassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ForwardLights___c;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct ForwardLights_InitParams;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::ForwardLights);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::ForwardLights___c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.ForwardLights/LightConstantBuffer
class CORDL_TYPE ForwardLights_LightConstantBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AdditionalLightOcclusionProbeChannel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalLightOcclusionProbeChannel, put = setStaticF__AdditionalLightOcclusionProbeChannel)) int32_t _AdditionalLightOcclusionProbeChannel;

  /// @brief Field _AdditionalLightsAttenuation, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalLightsAttenuation, put = setStaticF__AdditionalLightsAttenuation)) int32_t _AdditionalLightsAttenuation;

  /// @brief Field _AdditionalLightsColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalLightsColor, put = setStaticF__AdditionalLightsColor)) int32_t _AdditionalLightsColor;

  /// @brief Field _AdditionalLightsCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalLightsCount, put = setStaticF__AdditionalLightsCount)) int32_t _AdditionalLightsCount;

  /// @brief Field _AdditionalLightsLayerMasks, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalLightsLayerMasks, put = setStaticF__AdditionalLightsLayerMasks)) int32_t _AdditionalLightsLayerMasks;

  /// @brief Field _AdditionalLightsPosition, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalLightsPosition, put = setStaticF__AdditionalLightsPosition)) int32_t _AdditionalLightsPosition;

  /// @brief Field _AdditionalLightsSpotDir, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalLightsSpotDir, put = setStaticF__AdditionalLightsSpotDir)) int32_t _AdditionalLightsSpotDir;

  /// @brief Field _MainLightColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__MainLightColor, put = setStaticF__MainLightColor)) int32_t _MainLightColor;

  /// @brief Field _MainLightLayerMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__MainLightLayerMask, put = setStaticF__MainLightLayerMask)) int32_t _MainLightLayerMask;

  /// @brief Field _MainLightOcclusionProbesChannel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__MainLightOcclusionProbesChannel, put = setStaticF__MainLightOcclusionProbesChannel)) int32_t _MainLightOcclusionProbesChannel;

  /// @brief Field _MainLightPosition, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__MainLightPosition, put = setStaticF__MainLightPosition)) int32_t _MainLightPosition;

  static inline int32_t getStaticF__AdditionalLightOcclusionProbeChannel();

  static inline int32_t getStaticF__AdditionalLightsAttenuation();

  static inline int32_t getStaticF__AdditionalLightsColor();

  static inline int32_t getStaticF__AdditionalLightsCount();

  static inline int32_t getStaticF__AdditionalLightsLayerMasks();

  static inline int32_t getStaticF__AdditionalLightsPosition();

  static inline int32_t getStaticF__AdditionalLightsSpotDir();

  static inline int32_t getStaticF__MainLightColor();

  static inline int32_t getStaticF__MainLightLayerMask();

  static inline int32_t getStaticF__MainLightOcclusionProbesChannel();

  static inline int32_t getStaticF__MainLightPosition();

  static inline void setStaticF__AdditionalLightOcclusionProbeChannel(int32_t value);

  static inline void setStaticF__AdditionalLightsAttenuation(int32_t value);

  static inline void setStaticF__AdditionalLightsColor(int32_t value);

  static inline void setStaticF__AdditionalLightsCount(int32_t value);

  static inline void setStaticF__AdditionalLightsLayerMasks(int32_t value);

  static inline void setStaticF__AdditionalLightsPosition(int32_t value);

  static inline void setStaticF__AdditionalLightsSpotDir(int32_t value);

  static inline void setStaticF__MainLightColor(int32_t value);

  static inline void setStaticF__MainLightLayerMask(int32_t value);

  static inline void setStaticF__MainLightOcclusionProbesChannel(int32_t value);

  static inline void setStaticF__MainLightPosition(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ForwardLights_LightConstantBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ForwardLights_LightConstantBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ForwardLights_LightConstantBuffer(ForwardLights_LightConstantBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ForwardLights_LightConstantBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ForwardLights_LightConstantBuffer(ForwardLights_LightConstantBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13037 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.ForwardLights/InitParams
struct CORDL_TYPE ForwardLights_InitParams {
public:
  // Declarations
  /// @brief Method Create, addr 0x673fd70, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams Create();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ForwardLights_InitParams();

  // Ctor Parameters [CppParam { name: "lightCookieManager", ty: "::UnityEngine::Rendering::Universal::LightCookieManager*", modifiers: "", def_value: None }, CppParam { name: "forwardPlus", ty:
  // "bool", modifiers: "", def_value: None }]
  constexpr ForwardLights_InitParams(::UnityEngine::Rendering::Universal::LightCookieManager* lightCookieManager, bool forwardPlus) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13038 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field lightCookieManager, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager* lightCookieManager;

  /// @brief Field forwardPlus, offset: 0x8, size: 0x1, def value: None
  bool forwardPlus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams, lightCookieManager) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams, forwardPlus) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.ForwardLights/SetupLightPassData
class CORDL_TYPE ForwardLights_SetupLightPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field forwardLights, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_forwardLights, put = __cordl_internal_set_forwardLights)) ::UnityEngine::Rendering::Universal::Internal::ForwardLights* forwardLights;

  /// @brief Field lightData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lightData, put = __cordl_internal_set_lightData)) ::UnityEngine::Rendering::Universal::UniversalLightData* lightData;

  /// @brief Field renderingData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_renderingData, put = __cordl_internal_set_renderingData)) ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData;

  static inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights* const& __cordl_internal_get_forwardLights() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights*& __cordl_internal_get_forwardLights();

  constexpr ::UnityEngine::Rendering::Universal::UniversalLightData* const& __cordl_internal_get_lightData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalLightData*& __cordl_internal_get_lightData();

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData* const& __cordl_internal_get_renderingData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData*& __cordl_internal_get_renderingData();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_forwardLights(::UnityEngine::Rendering::Universal::Internal::ForwardLights* value);

  constexpr void __cordl_internal_set_lightData(::UnityEngine::Rendering::Universal::UniversalLightData* value);

  constexpr void __cordl_internal_set_renderingData(::UnityEngine::Rendering::Universal::UniversalRenderingData* value);

  /// @brief Method .ctor, addr 0x673fe78, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ForwardLights_SetupLightPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ForwardLights_SetupLightPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ForwardLights_SetupLightPassData(ForwardLights_SetupLightPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ForwardLights_SetupLightPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ForwardLights_SetupLightPassData(ForwardLights_SetupLightPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13039 };

  /// @brief Field renderingData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalRenderingData* ___renderingData;

  /// @brief Field cameraData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field lightData, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalLightData* ___lightData;

  /// @brief Field forwardLights, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::ForwardLights* ___forwardLights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData, ___renderingData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData, ___cameraData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData, ___lightData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData, ___forwardLights) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.ForwardLights/<>c
class CORDL_TYPE ForwardLights___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::ForwardLights___c* __9;

  /// @brief Field <>9__44_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__44_0,
                      put = setStaticF___9__44_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__44_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights___c* New_ctor();

  /// @brief Method <SetupRenderGraphLights>b__44_0, addr 0x673fed4, size 0x38, virtual false, abstract: false, final false
  inline void _SetupRenderGraphLights_b__44_0(::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData* data,
                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* rgContext);

  /// @brief Method .ctor, addr 0x673fed0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__44_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::ForwardLights___c* value);

  static inline void setStaticF___9__44_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ForwardLights___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ForwardLights___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ForwardLights___c(ForwardLights___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ForwardLights___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ForwardLights___c(ForwardLights___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13040 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::ForwardLights___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle, Unity.Mathematics.int2, UnityEngine.Rendering.Universal.MixedLightingSetup,
// UnityEngine.Rendering.Universal.ReflectionProbeManager
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.ForwardLights
class CORDL_TYPE ForwardLights : public ::System::Object {
public:
  // Declarations
  using InitParams = ::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams;

  using LightConstantBuffer = ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer;

  using SetupLightPassData = ::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData;

  using __c = ::UnityEngine::Rendering::Universal::Internal::ForwardLights___c;

  /// @brief Field m_ActualTileWidth, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ActualTileWidth, put = __cordl_internal_set_m_ActualTileWidth)) int32_t m_ActualTileWidth;

  /// @brief Field m_AdditionalLightAttenuations, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightAttenuations,
                      put = __cordl_internal_set_m_AdditionalLightAttenuations)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      m_AdditionalLightAttenuations;

  /// @brief Field m_AdditionalLightColors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightColors, put = __cordl_internal_set_m_AdditionalLightColors)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      m_AdditionalLightColors;

  /// @brief Field m_AdditionalLightOcclusionProbeChannels, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightOcclusionProbeChannels,
                      put = __cordl_internal_set_m_AdditionalLightOcclusionProbeChannels)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      m_AdditionalLightOcclusionProbeChannels;

  /// @brief Field m_AdditionalLightPositions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightPositions, put = __cordl_internal_set_m_AdditionalLightPositions)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      m_AdditionalLightPositions;

  /// @brief Field m_AdditionalLightSpotDirections, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightSpotDirections,
                      put = __cordl_internal_set_m_AdditionalLightSpotDirections)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      m_AdditionalLightSpotDirections;

  /// @brief Field m_AdditionalLightsBufferId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsBufferId, put = __cordl_internal_set_m_AdditionalLightsBufferId)) int32_t m_AdditionalLightsBufferId;

  /// @brief Field m_AdditionalLightsIndicesId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsIndicesId, put = __cordl_internal_set_m_AdditionalLightsIndicesId)) int32_t m_AdditionalLightsIndicesId;

  /// @brief Field m_AdditionalLightsLayerMasks, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsLayerMasks, put = __cordl_internal_set_m_AdditionalLightsLayerMasks)) ::ArrayW<float_t, ::Array<float_t>*>
      m_AdditionalLightsLayerMasks;

  /// @brief Field m_BinCount, offset 0x148, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BinCount, put = __cordl_internal_set_m_BinCount)) int32_t m_BinCount;

  /// @brief Field m_CullingHandle, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CullingHandle, put = __cordl_internal_set_m_CullingHandle)) ::Unity::Jobs::JobHandle m_CullingHandle;

  /// @brief Field m_DirectionalLightCount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DirectionalLightCount, put = __cordl_internal_set_m_DirectionalLightCount)) int32_t m_DirectionalLightCount;

  /// @brief Field m_LightCookieManager, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightCookieManager, put = __cordl_internal_set_m_LightCookieManager)) ::UnityEngine::Rendering::Universal::LightCookieManager* m_LightCookieManager;

  /// @brief Field m_LightCount, offset 0x144, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LightCount, put = __cordl_internal_set_m_LightCount)) int32_t m_LightCount;

  /// @brief Field m_MixedLightingSetup, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MixedLightingSetup, put = __cordl_internal_set_m_MixedLightingSetup)) ::UnityEngine::Rendering::Universal::MixedLightingSetup m_MixedLightingSetup;

  /// @brief Field m_ProfilingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ProfilingSampler, put = setStaticF_m_ProfilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_ProfilingSamplerFPComplete, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ProfilingSamplerFPComplete, put = setStaticF_m_ProfilingSamplerFPComplete)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerFPComplete;

  /// @brief Field m_ProfilingSamplerFPSetup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ProfilingSamplerFPSetup, put = setStaticF_m_ProfilingSamplerFPSetup)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerFPSetup;

  /// @brief Field m_ProfilingSamplerFPUpload, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ProfilingSamplerFPUpload, put = setStaticF_m_ProfilingSamplerFPUpload)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerFPUpload;

  /// @brief Field m_ReflectionProbeManager, offset 0xb0, size 0x88
  __declspec(property(get = __cordl_internal_get_m_ReflectionProbeManager,
                      put = __cordl_internal_set_m_ReflectionProbeManager)) ::UnityEngine::Rendering::Universal::ReflectionProbeManager m_ReflectionProbeManager;

  /// @brief Field m_TileMasks, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get_m_TileMasks, put = __cordl_internal_set_m_TileMasks)) ::Unity::Collections::NativeArray_1<uint32_t> m_TileMasks;

  /// @brief Field m_TileMasksBuffer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TileMasksBuffer, put = __cordl_internal_set_m_TileMasksBuffer)) ::UnityEngine::GraphicsBuffer* m_TileMasksBuffer;

  /// @brief Field m_TileResolution, offset 0x5c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TileResolution, put = __cordl_internal_set_m_TileResolution)) ::Unity::Mathematics::int2 m_TileResolution;

  /// @brief Field m_UseForwardPlus, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseForwardPlus, put = __cordl_internal_set_m_UseForwardPlus)) bool m_UseForwardPlus;

  /// @brief Field m_UseStructuredBuffer, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseStructuredBuffer, put = __cordl_internal_set_m_UseStructuredBuffer)) bool m_UseStructuredBuffer;

  /// @brief Field m_WordsPerTile, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WordsPerTile, put = __cordl_internal_set_m_WordsPerTile)) int32_t m_WordsPerTile;

  /// @brief Field m_ZBinOffset, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ZBinOffset, put = __cordl_internal_set_m_ZBinOffset)) float_t m_ZBinOffset;

  /// @brief Field m_ZBinScale, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ZBinScale, put = __cordl_internal_set_m_ZBinScale)) float_t m_ZBinScale;

  /// @brief Field m_ZBins, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ZBins, put = __cordl_internal_set_m_ZBins)) ::Unity::Collections::NativeArray_1<uint32_t> m_ZBins;

  /// @brief Field m_ZBinsBuffer, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ZBinsBuffer, put = __cordl_internal_set_m_ZBinsBuffer)) ::UnityEngine::GraphicsBuffer* m_ZBinsBuffer;

  __declspec(property(get = get_reflectionProbeManager)) ::UnityEngine::Rendering::Universal::ReflectionProbeManager reflectionProbeManager;

  /// @brief Field s_SetupForwardLights, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SetupForwardLights, put = setStaticF_s_SetupForwardLights)) ::UnityEngine::Rendering::ProfilingSampler* s_SetupForwardLights;

  /// @brief Method AlignByteCount, addr 0x673ccb8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t AlignByteCount(int32_t count, int32_t align);

  /// @brief Method Cleanup, addr 0x673f020, size 0xe4, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CreateForwardPlusBuffers, addr 0x673cafc, size 0x1ac, virtual false, abstract: false, final false
  inline void CreateForwardPlusBuffers();

  /// @brief Method GetViewParams, addr 0x673cccc, size 0xb8, virtual false, abstract: false, final false
  inline void GetViewParams(::UnityEngine::Camera* camera, ::Unity::Mathematics::float4x4 viewToClip, ::ByRef<float_t> viewPlaneBot, ::ByRef<float_t> viewPlaneTop,
                            ::ByRef<::Unity::Mathematics::float4> viewToViewportScaleBias);

  /// @brief Method InitializeLightConstants, addr 0x673f104, size 0x1fc, virtual false, abstract: false, final false
  inline void InitializeLightConstants(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights, int32_t lightIndex, bool supportsLightLayers,
                                       ::ByRef<::UnityEngine::Vector4> lightPos, ::ByRef<::UnityEngine::Vector4> lightColor, ::ByRef<::UnityEngine::Vector4> lightAttenuation,
                                       ::ByRef<::UnityEngine::Vector4> lightSpotDir, ::ByRef<::UnityEngine::Vector4> lightOcclusionProbeChannel, ::ByRef<uint32_t> lightLayerMask,
                                       ::ByRef<bool> isSubtractive);

  static inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights* New_ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights* New_ctor(::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams initParams);

  /// @brief Method PreSetup, addr 0x673cd84, size 0x12d8, virtual false, abstract: false, final false
  inline void PreSetup(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                       ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method Setup, addr 0x673e0c4, size 0x114, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupAdditionalLightConstants, addr 0x673f468, size 0x578, virtual false, abstract: false, final false
  inline void SetupAdditionalLightConstants(::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                            ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method SetupLights, addr 0x673e1d8, size 0xa5c, virtual false, abstract: false, final false
  inline void SetupLights(::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                          ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method SetupMainLightConstants, addr 0x673f300, size 0x168, virtual false, abstract: false, final false
  inline void SetupMainLightConstants(::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method SetupPerObjectLightIndices, addr 0x673f9e0, size 0x20c, virtual false, abstract: false, final false
  inline int32_t SetupPerObjectLightIndices(::UnityEngine::Rendering::CullingResults cullResults, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method SetupRenderGraphLights, addr 0x673ec34, size 0x3a4, virtual false, abstract: false, final false
  inline void SetupRenderGraphLights(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                     ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method SetupShaderLightConstants, addr 0x673efd8, size 0x48, virtual false, abstract: false, final false
  inline void SetupShaderLightConstants(::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                        ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method <PreSetup>g__IsProbeGreater|40_0, addr 0x673e05c, size 0x68, virtual false, abstract: false, final false
  static inline bool _PreSetup_g__IsProbeGreater_40_0(::UnityEngine::Rendering::VisibleReflectionProbe probe, ::UnityEngine::Rendering::VisibleReflectionProbe otherProbe);

  constexpr int32_t const& __cordl_internal_get_m_ActualTileWidth() const;

  constexpr int32_t& __cordl_internal_get_m_ActualTileWidth();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AdditionalLightAttenuations() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AdditionalLightAttenuations();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AdditionalLightColors() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AdditionalLightColors();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AdditionalLightOcclusionProbeChannels() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AdditionalLightOcclusionProbeChannels();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AdditionalLightPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AdditionalLightPositions();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AdditionalLightSpotDirections() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AdditionalLightSpotDirections();

  constexpr int32_t const& __cordl_internal_get_m_AdditionalLightsBufferId() const;

  constexpr int32_t& __cordl_internal_get_m_AdditionalLightsBufferId();

  constexpr int32_t const& __cordl_internal_get_m_AdditionalLightsIndicesId() const;

  constexpr int32_t& __cordl_internal_get_m_AdditionalLightsIndicesId();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_AdditionalLightsLayerMasks() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_AdditionalLightsLayerMasks();

  constexpr int32_t const& __cordl_internal_get_m_BinCount() const;

  constexpr int32_t& __cordl_internal_get_m_BinCount();

  constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_m_CullingHandle() const;

  constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_m_CullingHandle();

  constexpr int32_t const& __cordl_internal_get_m_DirectionalLightCount() const;

  constexpr int32_t& __cordl_internal_get_m_DirectionalLightCount();

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager* const& __cordl_internal_get_m_LightCookieManager() const;

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager*& __cordl_internal_get_m_LightCookieManager();

  constexpr int32_t const& __cordl_internal_get_m_LightCount() const;

  constexpr int32_t& __cordl_internal_get_m_LightCount();

  constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup const& __cordl_internal_get_m_MixedLightingSetup() const;

  constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup& __cordl_internal_get_m_MixedLightingSetup();

  constexpr ::UnityEngine::Rendering::Universal::ReflectionProbeManager const& __cordl_internal_get_m_ReflectionProbeManager() const;

  constexpr ::UnityEngine::Rendering::Universal::ReflectionProbeManager& __cordl_internal_get_m_ReflectionProbeManager();

  constexpr ::Unity::Collections::NativeArray_1<uint32_t> const& __cordl_internal_get_m_TileMasks() const;

  constexpr ::Unity::Collections::NativeArray_1<uint32_t>& __cordl_internal_get_m_TileMasks();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_TileMasksBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_TileMasksBuffer();

  constexpr ::Unity::Mathematics::int2 const& __cordl_internal_get_m_TileResolution() const;

  constexpr ::Unity::Mathematics::int2& __cordl_internal_get_m_TileResolution();

  constexpr bool const& __cordl_internal_get_m_UseForwardPlus() const;

  constexpr bool& __cordl_internal_get_m_UseForwardPlus();

  constexpr bool const& __cordl_internal_get_m_UseStructuredBuffer() const;

  constexpr bool& __cordl_internal_get_m_UseStructuredBuffer();

  constexpr int32_t const& __cordl_internal_get_m_WordsPerTile() const;

  constexpr int32_t& __cordl_internal_get_m_WordsPerTile();

  constexpr float_t const& __cordl_internal_get_m_ZBinOffset() const;

  constexpr float_t& __cordl_internal_get_m_ZBinOffset();

  constexpr float_t const& __cordl_internal_get_m_ZBinScale() const;

  constexpr float_t& __cordl_internal_get_m_ZBinScale();

  constexpr ::Unity::Collections::NativeArray_1<uint32_t> const& __cordl_internal_get_m_ZBins() const;

  constexpr ::Unity::Collections::NativeArray_1<uint32_t>& __cordl_internal_get_m_ZBins();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_ZBinsBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_ZBinsBuffer();

  constexpr void __cordl_internal_set_m_ActualTileWidth(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightAttenuations(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightColors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightOcclusionProbeChannels(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightPositions(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightSpotDirections(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightsBufferId(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightsIndicesId(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightsLayerMasks(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_BinCount(int32_t value);

  constexpr void __cordl_internal_set_m_CullingHandle(::Unity::Jobs::JobHandle value);

  constexpr void __cordl_internal_set_m_DirectionalLightCount(int32_t value);

  constexpr void __cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager* value);

  constexpr void __cordl_internal_set_m_LightCount(int32_t value);

  constexpr void __cordl_internal_set_m_MixedLightingSetup(::UnityEngine::Rendering::Universal::MixedLightingSetup value);

  constexpr void __cordl_internal_set_m_ReflectionProbeManager(::UnityEngine::Rendering::Universal::ReflectionProbeManager value);

  constexpr void __cordl_internal_set_m_TileMasks(::Unity::Collections::NativeArray_1<uint32_t> value);

  constexpr void __cordl_internal_set_m_TileMasksBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_TileResolution(::Unity::Mathematics::int2 value);

  constexpr void __cordl_internal_set_m_UseForwardPlus(bool value);

  constexpr void __cordl_internal_set_m_UseStructuredBuffer(bool value);

  constexpr void __cordl_internal_set_m_WordsPerTile(int32_t value);

  constexpr void __cordl_internal_set_m_ZBinOffset(float_t value);

  constexpr void __cordl_internal_set_m_ZBinScale(float_t value);

  constexpr void __cordl_internal_set_m_ZBins(::Unity::Collections::NativeArray_1<uint32_t> value);

  constexpr void __cordl_internal_set_m_ZBinsBuffer(::UnityEngine::GraphicsBuffer* value);

  /// @brief Method .ctor, addr 0x673c690, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x673c6bc, size 0x440, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams initParams);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSampler();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSamplerFPComplete();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSamplerFPSetup();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSamplerFPUpload();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_s_SetupForwardLights();

  /// @brief Method get_reflectionProbeManager, addr 0x673cca8, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ReflectionProbeManager get_reflectionProbeManager();

  static inline void setStaticF_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingSamplerFPComplete(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingSamplerFPSetup(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingSamplerFPUpload(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_s_SetupForwardLights(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ForwardLights();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ForwardLights", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ForwardLights(ForwardLights&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ForwardLights", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ForwardLights(ForwardLights const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13041 };

  /// @brief Field k_SetupLightConstants offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SetupLightConstants{ u"Setup Light Constants" };

  /// @brief Field m_AdditionalLightsBufferId, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsBufferId;

  /// @brief Field m_AdditionalLightsIndicesId, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsIndicesId;

  /// @brief Field m_MixedLightingSetup, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::MixedLightingSetup ___m_MixedLightingSetup;

  /// @brief Field m_AdditionalLightPositions, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AdditionalLightPositions;

  /// @brief Field m_AdditionalLightColors, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AdditionalLightColors;

  /// @brief Field m_AdditionalLightAttenuations, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AdditionalLightAttenuations;

  /// @brief Field m_AdditionalLightSpotDirections, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AdditionalLightSpotDirections;

  /// @brief Field m_AdditionalLightOcclusionProbeChannels, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AdditionalLightOcclusionProbeChannels;

  /// @brief Field m_AdditionalLightsLayerMasks, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_AdditionalLightsLayerMasks;

  /// @brief Field m_UseStructuredBuffer, offset: 0x50, size: 0x1, def value: None
  bool ___m_UseStructuredBuffer;

  /// @brief Field m_UseForwardPlus, offset: 0x51, size: 0x1, def value: None
  bool ___m_UseForwardPlus;

  /// @brief Field m_DirectionalLightCount, offset: 0x54, size: 0x4, def value: None
  int32_t ___m_DirectionalLightCount;

  /// @brief Field m_ActualTileWidth, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_ActualTileWidth;

  /// @brief Field m_TileResolution, offset: 0x5c, size: 0x8, def value: None
  ::Unity::Mathematics::int2 ___m_TileResolution;

  /// @brief Field m_CullingHandle, offset: 0x68, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle ___m_CullingHandle;

  /// @brief Field m_ZBins, offset: 0x78, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> ___m_ZBins;

  /// @brief Field m_ZBinsBuffer, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_ZBinsBuffer;

  /// @brief Field m_TileMasks, offset: 0x90, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> ___m_TileMasks;

  /// @brief Field m_TileMasksBuffer, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_TileMasksBuffer;

  /// @brief Field m_LightCookieManager, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager* ___m_LightCookieManager;

  /// @brief Field m_ReflectionProbeManager, offset: 0xb0, size: 0x88, def value: None
  ::UnityEngine::Rendering::Universal::ReflectionProbeManager ___m_ReflectionProbeManager;

  /// @brief Field m_WordsPerTile, offset: 0x138, size: 0x4, def value: None
  int32_t ___m_WordsPerTile;

  /// @brief Field m_ZBinScale, offset: 0x13c, size: 0x4, def value: None
  float_t ___m_ZBinScale;

  /// @brief Field m_ZBinOffset, offset: 0x140, size: 0x4, def value: None
  float_t ___m_ZBinOffset;

  /// @brief Field m_LightCount, offset: 0x144, size: 0x4, def value: None
  int32_t ___m_LightCount;

  /// @brief Field m_BinCount, offset: 0x148, size: 0x4, def value: None
  int32_t ___m_BinCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightsBufferId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightsIndicesId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_MixedLightingSetup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightPositions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightAttenuations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightSpotDirections) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightOcclusionProbeChannels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightsLayerMasks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_UseStructuredBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_UseForwardPlus) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_DirectionalLightCount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_ActualTileWidth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_TileResolution) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_CullingHandle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_ZBins) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_ZBinsBuffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_TileMasks) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_TileMasksBuffer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_LightCookieManager) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_ReflectionProbeManager) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_WordsPerTile) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_ZBinScale) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_ZBinOffset) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_LightCount) == 0x144, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_BinCount) == 0x148, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::ForwardLights, 0x150>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::ForwardLights);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ForwardLights*, "UnityEngine.Rendering.Universal.Internal", "ForwardLights");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*, "UnityEngine.Rendering.Universal.Internal", "ForwardLights/LightConstantBuffer");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*, "UnityEngine.Rendering.Universal.Internal", "ForwardLights/SetupLightPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::ForwardLights___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ForwardLights___c*, "UnityEngine.Rendering.Universal.Internal", "ForwardLights/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams, "UnityEngine.Rendering.Universal.Internal", "ForwardLights/InitParams");

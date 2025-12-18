#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/AdditionalLightsShadowCasterPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalLightsShadowCasterPass)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct ShadowSliceData;
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
namespace UnityEngine::Rendering::Universal {
class UniversalShadowData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
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
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass/AdditionalShadowsConstantBuffer
class CORDL_TYPE AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AdditionalLightsShadowmapID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalLightsShadowmapID, put = setStaticF__AdditionalLightsShadowmapID)) int32_t _AdditionalLightsShadowmapID;

  /// @brief Field _AdditionalLightsWorldToShadow, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalLightsWorldToShadow, put = setStaticF__AdditionalLightsWorldToShadow)) int32_t _AdditionalLightsWorldToShadow;

  /// @brief Field _AdditionalLightsWorldToShadow_SSBO, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalLightsWorldToShadow_SSBO, put = setStaticF__AdditionalLightsWorldToShadow_SSBO)) int32_t _AdditionalLightsWorldToShadow_SSBO;

  /// @brief Field _AdditionalShadowFadeParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalShadowFadeParams, put = setStaticF__AdditionalShadowFadeParams)) int32_t _AdditionalShadowFadeParams;

  /// @brief Field _AdditionalShadowOffset0, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalShadowOffset0, put = setStaticF__AdditionalShadowOffset0)) int32_t _AdditionalShadowOffset0;

  /// @brief Field _AdditionalShadowOffset1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalShadowOffset1, put = setStaticF__AdditionalShadowOffset1)) int32_t _AdditionalShadowOffset1;

  /// @brief Field _AdditionalShadowParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalShadowParams, put = setStaticF__AdditionalShadowParams)) int32_t _AdditionalShadowParams;

  /// @brief Field _AdditionalShadowParams_SSBO, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalShadowParams_SSBO, put = setStaticF__AdditionalShadowParams_SSBO)) int32_t _AdditionalShadowParams_SSBO;

  /// @brief Field _AdditionalShadowmapSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AdditionalShadowmapSize, put = setStaticF__AdditionalShadowmapSize)) int32_t _AdditionalShadowmapSize;

  static inline int32_t getStaticF__AdditionalLightsShadowmapID();

  static inline int32_t getStaticF__AdditionalLightsWorldToShadow();

  static inline int32_t getStaticF__AdditionalLightsWorldToShadow_SSBO();

  static inline int32_t getStaticF__AdditionalShadowFadeParams();

  static inline int32_t getStaticF__AdditionalShadowOffset0();

  static inline int32_t getStaticF__AdditionalShadowOffset1();

  static inline int32_t getStaticF__AdditionalShadowParams();

  static inline int32_t getStaticF__AdditionalShadowParams_SSBO();

  static inline int32_t getStaticF__AdditionalShadowmapSize();

  static inline void setStaticF__AdditionalLightsShadowmapID(int32_t value);

  static inline void setStaticF__AdditionalLightsWorldToShadow(int32_t value);

  static inline void setStaticF__AdditionalLightsWorldToShadow_SSBO(int32_t value);

  static inline void setStaticF__AdditionalShadowFadeParams(int32_t value);

  static inline void setStaticF__AdditionalShadowOffset0(int32_t value);

  static inline void setStaticF__AdditionalShadowOffset1(int32_t value);

  static inline void setStaticF__AdditionalShadowParams(int32_t value);

  static inline void setStaticF__AdditionalShadowParams_SSBO(int32_t value);

  static inline void setStaticF__AdditionalShadowmapSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer(AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer(AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13033 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object, UnityEngine.Matrix4x4, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector2Int
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass/PassData
class CORDL_TYPE AdditionalLightsShadowCasterPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field allocatedShadowAtlasSize, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_allocatedShadowAtlasSize, put = __cordl_internal_set_allocatedShadowAtlasSize)) ::UnityEngine::Vector2Int allocatedShadowAtlasSize;

  /// @brief Field emptyShadowmap, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_emptyShadowmap, put = __cordl_internal_set_emptyShadowmap)) bool emptyShadowmap;

  /// @brief Field lightData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_lightData, put = __cordl_internal_set_lightData)) ::UnityEngine::Rendering::Universal::UniversalLightData* lightData;

  /// @brief Field pass, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_pass, put = __cordl_internal_set_pass)) ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* pass;

  /// @brief Field shadowData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_shadowData, put = __cordl_internal_set_shadowData)) ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData;

  /// @brief Field shadowRendererLists, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_shadowRendererLists,
                      put = __cordl_internal_set_shadowRendererLists)) ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*>
      shadowRendererLists;

  /// @brief Field shadowRendererListsHdl, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_shadowRendererListsHdl,
                      put = __cordl_internal_set_shadowRendererListsHdl)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle,
                                                                                   ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*>
      shadowRendererListsHdl;

  /// @brief Field shadowmapID, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_shadowmapID, put = __cordl_internal_set_shadowmapID)) int32_t shadowmapID;

  /// @brief Field shadowmapTexture, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_shadowmapTexture, put = __cordl_internal_set_shadowmapTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle shadowmapTexture;

  /// @brief Field stripShadowsOffVariants, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get_stripShadowsOffVariants, put = __cordl_internal_set_stripShadowsOffVariants)) bool stripShadowsOffVariants;

  /// @brief Field useStructuredBuffer, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_useStructuredBuffer, put = __cordl_internal_set_useStructuredBuffer)) bool useStructuredBuffer;

  /// @brief Field viewMatrix, offset 0x18, size 0x40
  __declspec(property(get = __cordl_internal_get_viewMatrix, put = __cordl_internal_set_viewMatrix)) ::UnityEngine::Matrix4x4 viewMatrix;

  static inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData* New_ctor();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_allocatedShadowAtlasSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_allocatedShadowAtlasSize();

  constexpr bool const& __cordl_internal_get_emptyShadowmap() const;

  constexpr bool& __cordl_internal_get_emptyShadowmap();

  constexpr ::UnityEngine::Rendering::Universal::UniversalLightData* const& __cordl_internal_get_lightData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalLightData*& __cordl_internal_get_lightData();

  constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* const& __cordl_internal_get_pass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*& __cordl_internal_get_pass();

  constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData* const& __cordl_internal_get_shadowData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData*& __cordl_internal_get_shadowData();

  constexpr ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*> const& __cordl_internal_get_shadowRendererLists() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*>& __cordl_internal_get_shadowRendererLists();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*> const&
  __cordl_internal_get_shadowRendererListsHdl() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*>&
  __cordl_internal_get_shadowRendererListsHdl();

  constexpr int32_t const& __cordl_internal_get_shadowmapID() const;

  constexpr int32_t& __cordl_internal_get_shadowmapID();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_shadowmapTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_shadowmapTexture();

  constexpr bool const& __cordl_internal_get_stripShadowsOffVariants() const;

  constexpr bool& __cordl_internal_get_stripShadowsOffVariants();

  constexpr bool const& __cordl_internal_get_useStructuredBuffer() const;

  constexpr bool& __cordl_internal_get_useStructuredBuffer();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_viewMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_viewMatrix();

  constexpr void __cordl_internal_set_allocatedShadowAtlasSize(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_emptyShadowmap(bool value);

  constexpr void __cordl_internal_set_lightData(::UnityEngine::Rendering::Universal::UniversalLightData* value);

  constexpr void __cordl_internal_set_pass(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* value);

  constexpr void __cordl_internal_set_shadowData(::UnityEngine::Rendering::Universal::UniversalShadowData* value);

  constexpr void __cordl_internal_set_shadowRendererLists(::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*> value);

  constexpr void __cordl_internal_set_shadowRendererListsHdl(
      ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*> value);

  constexpr void __cordl_internal_set_shadowmapID(int32_t value);

  constexpr void __cordl_internal_set_shadowmapTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_stripShadowsOffVariants(bool value);

  constexpr void __cordl_internal_set_useStructuredBuffer(bool value);

  constexpr void __cordl_internal_set_viewMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method .ctor, addr 0x6737bf8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalLightsShadowCasterPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdditionalLightsShadowCasterPass_PassData(AdditionalLightsShadowCasterPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdditionalLightsShadowCasterPass_PassData(AdditionalLightsShadowCasterPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13034 };

  /// @brief Field shadowmapID, offset: 0x10, size: 0x4, def value: None
  int32_t ___shadowmapID;

  /// @brief Field emptyShadowmap, offset: 0x14, size: 0x1, def value: None
  bool ___emptyShadowmap;

  /// @brief Field useStructuredBuffer, offset: 0x15, size: 0x1, def value: None
  bool ___useStructuredBuffer;

  /// @brief Field stripShadowsOffVariants, offset: 0x16, size: 0x1, def value: None
  bool ___stripShadowsOffVariants;

  /// @brief Field viewMatrix, offset: 0x18, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___viewMatrix;

  /// @brief Field allocatedShadowAtlasSize, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___allocatedShadowAtlasSize;

  /// @brief Field shadowmapTexture, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___shadowmapTexture;

  /// @brief Field lightData, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalLightData* ___lightData;

  /// @brief Field shadowData, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalShadowData* ___shadowData;

  /// @brief Field pass, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* ___pass;

  /// @brief Field shadowRendererLists, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*> ___shadowRendererLists;

  /// @brief Field shadowRendererListsHdl, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*> ___shadowRendererListsHdl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___shadowmapID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___emptyShadowmap) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___useStructuredBuffer) == 0x15, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___stripShadowsOffVariants) == 0x16, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___viewMatrix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___allocatedShadowAtlasSize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___shadowmapTexture) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___lightData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___shadowData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___pass) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___shadowRendererLists) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___shadowRendererListsHdl) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, 0x98>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass/<>c
class CORDL_TYPE AdditionalLightsShadowCasterPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c* __9;

  /// @brief Field <>9__61_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__61_0, put = setStaticF___9__61_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__61_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c* New_ctor();

  /// @brief Method <Render>b__61_0, addr 0x673c5bc, size 0xd4, virtual false, abstract: false, final false
  inline void _Render_b__61_0(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x673c5b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__61_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c* value);

  static inline void setStaticF___9__61_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalLightsShadowCasterPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdditionalLightsShadowCasterPass___c(AdditionalLightsShadowCasterPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdditionalLightsShadowCasterPass___c(AdditionalLightsShadowCasterPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13035 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.Universal.ScriptableRenderPass, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass
class CORDL_TYPE AdditionalLightsShadowCasterPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using AdditionalShadowsConstantBuffer = ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer;

  using PassData = ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c;

  /// @brief Field c_DefaultShadowParams, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_c_DefaultShadowParams, put = setStaticF_c_DefaultShadowParams)) ::UnityEngine::Vector4 c_DefaultShadowParams;

  /// @brief Field m_AdditionalLightIndexToShadowParams, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightIndexToShadowParams,
                      put = __cordl_internal_set_m_AdditionalLightIndexToShadowParams)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      m_AdditionalLightIndexToShadowParams;

  /// @brief Field m_AdditionalLightIndexToVisibleLightIndex, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightIndexToVisibleLightIndex, put = __cordl_internal_set_m_AdditionalLightIndexToVisibleLightIndex)) ::ArrayW<int16_t, ::Array<int16_t>*>
      m_AdditionalLightIndexToVisibleLightIndex;

  /// @brief Field m_AdditionalLightShadowDescriptor, offset 0x138, size 0x34
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightShadowDescriptor,
                      put = __cordl_internal_set_m_AdditionalLightShadowDescriptor)) ::UnityEngine::RenderTextureDescriptor m_AdditionalLightShadowDescriptor;

  /// @brief Field m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix,
                      put = __cordl_internal_set_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix;

  /// @brief Field m_AdditionalLightsShadowSlices, offset 0x110, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_AdditionalLightsShadowSlices,
      put = __cordl_internal_set_m_AdditionalLightsShadowSlices)) ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*>
      m_AdditionalLightsShadowSlices;

  /// @brief Field m_AdditionalLightsShadowmapHandle, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowmapHandle,
                      put = __cordl_internal_set_m_AdditionalLightsShadowmapHandle)) ::UnityEngine::Rendering::RTHandle* m_AdditionalLightsShadowmapHandle;

  /// @brief Field m_AdditionalShadowsBufferId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_AdditionalShadowsBufferId, put = setStaticF_m_AdditionalShadowsBufferId)) int32_t m_AdditionalShadowsBufferId;

  /// @brief Field m_AdditionalShadowsIndicesId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_AdditionalShadowsIndicesId, put = setStaticF_m_AdditionalShadowsIndicesId)) int32_t m_AdditionalShadowsIndicesId;

  /// @brief Field m_CascadeBorder, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CascadeBorder, put = __cordl_internal_set_m_CascadeBorder)) float_t m_CascadeBorder;

  /// @brief Field m_CreateEmptyShadowmap, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CreateEmptyShadowmap, put = __cordl_internal_set_m_CreateEmptyShadowmap)) bool m_CreateEmptyShadowmap;

  /// @brief Field m_EmptyAdditionalLightShadowmapTexture, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EmptyAdditionalLightShadowmapTexture,
                      put = __cordl_internal_set_m_EmptyAdditionalLightShadowmapTexture)) ::UnityEngine::Rendering::RTHandle* m_EmptyAdditionalLightShadowmapTexture;

  /// @brief Field m_EmptyShadowmapNeedsClear, offset 0xc9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EmptyShadowmapNeedsClear, put = __cordl_internal_set_m_EmptyShadowmapNeedsClear)) bool m_EmptyShadowmapNeedsClear;

  /// @brief Field m_GlobalShadowSliceIndexToPerLightShadowSliceIndex, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex,
                      put =
                          __cordl_internal_set_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex)) ::System::Collections::Generic::List_1<uint8_t>* m_GlobalShadowSliceIndexToPerLightShadowSliceIndex;

  /// @brief Field m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall,
                      put = setStaticF_m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall)) bool m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall;

  /// @brief Field m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall,
                      put = setStaticF_m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall)) bool m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall;

  /// @brief Field m_IssuedMessageAboutRemovedShadowSlices, offset 0xcd, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IssuedMessageAboutRemovedShadowSlices,
                      put = __cordl_internal_set_m_IssuedMessageAboutRemovedShadowSlices)) bool m_IssuedMessageAboutRemovedShadowSlices;

  /// @brief Field m_IssuedMessageAboutShadowMapsRescale, offset 0xcb, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IssuedMessageAboutShadowMapsRescale, put = __cordl_internal_set_m_IssuedMessageAboutShadowMapsRescale)) bool m_IssuedMessageAboutShadowMapsRescale;

  /// @brief Field m_IssuedMessageAboutShadowMapsTooBig, offset 0xcc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IssuedMessageAboutShadowMapsTooBig, put = __cordl_internal_set_m_IssuedMessageAboutShadowMapsTooBig)) bool m_IssuedMessageAboutShadowMapsTooBig;

  /// @brief Field m_IssuedMessageAboutShadowSlicesTooMany, offset 0xca, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IssuedMessageAboutShadowSlicesTooMany,
                      put = __cordl_internal_set_m_IssuedMessageAboutShadowSlicesTooMany)) bool m_IssuedMessageAboutShadowSlicesTooMany;

  /// @brief Field m_MaxShadowDistanceSq, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxShadowDistanceSq, put = __cordl_internal_set_m_MaxShadowDistanceSq)) float_t m_MaxShadowDistanceSq;

  /// @brief Field m_PassData, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData,
                      put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData* m_PassData;

  /// @brief Field m_ProfilingSetupSampler, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSetupSampler, put = __cordl_internal_set_m_ProfilingSetupSampler)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupSampler;

  /// @brief Field m_ShadowRequestsHashes, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShadowRequestsHashes,
                      put = __cordl_internal_set_m_ShadowRequestsHashes)) ::System::Collections::Generic::Dictionary_2<int32_t, uint64_t>* m_ShadowRequestsHashes;

  /// @brief Field m_ShadowSliceToAdditionalLightIndex, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShadowSliceToAdditionalLightIndex,
                      put = __cordl_internal_set_m_ShadowSliceToAdditionalLightIndex)) ::System::Collections::Generic::List_1<int16_t>* m_ShadowSliceToAdditionalLightIndex;

  /// @brief Field m_UseStructuredBuffer, offset 0xce, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseStructuredBuffer, put = __cordl_internal_set_m_UseStructuredBuffer)) bool m_UseStructuredBuffer;

  /// @brief Field m_VisibleLightIndexToAdditionalLightIndex, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisibleLightIndexToAdditionalLightIndex, put = __cordl_internal_set_m_VisibleLightIndexToAdditionalLightIndex)) ::ArrayW<int16_t, ::Array<int16_t>*>
      m_VisibleLightIndexToAdditionalLightIndex;

  /// @brief Field m_VisibleLightIndexToIsCastingShadows, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisibleLightIndexToIsCastingShadows, put = __cordl_internal_set_m_VisibleLightIndexToIsCastingShadows)) ::ArrayW<bool, ::Array<bool>*>
      m_VisibleLightIndexToIsCastingShadows;

  /// @brief Field renderTargetHeight, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_renderTargetHeight, put = __cordl_internal_set_renderTargetHeight)) int32_t renderTargetHeight;

  /// @brief Field renderTargetWidth, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_renderTargetWidth, put = __cordl_internal_set_renderTargetWidth)) int32_t renderTargetWidth;

  /// @brief Field s_EmptyAdditionalLightIndexToShadowParams, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EmptyAdditionalLightIndexToShadowParams,
                      put = setStaticF_s_EmptyAdditionalLightIndexToShadowParams)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      s_EmptyAdditionalLightIndexToShadowParams;

  /// @brief Field s_EmptyAdditionalShadowFadeParams, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_EmptyAdditionalShadowFadeParams, put = setStaticF_s_EmptyAdditionalShadowFadeParams)) ::UnityEngine::Vector4 s_EmptyAdditionalShadowFadeParams;

  /// @brief Method CalcGuardAngle, addr 0x6737cac, size 0x70, virtual false, abstract: false, final false
  static inline float_t CalcGuardAngle(float_t frustumAngleInDegrees, float_t guardBandSizeInTexels, float_t sliceResolutionInTexels);

  /// @brief Method Clear, addr 0x673a100, size 0x80, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ComputeShadowRequestHash, addr 0x6738028, size 0x2f8, virtual false, abstract: false, final false
  inline uint64_t ComputeShadowRequestHash(::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData);

  /// @brief Method Configure, addr 0x673a22c, size 0x140, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method Dispose, addr 0x6737c78, size 0x34, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Execute, addr 0x673a36c, size 0x314, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method GetLightTypeIdentifierForShadowParams, addr 0x6738320, size 0x20, virtual false, abstract: false, final false
  inline float_t GetLightTypeIdentifierForShadowParams(::UnityEngine::LightType lightType);

  /// @brief Method GetPointLightShadowFrustumFovBiasInDegrees, addr 0x6737d1c, size 0x2c0, virtual false, abstract: false, final false
  static inline float_t GetPointLightShadowFrustumFovBiasInDegrees(int32_t shadowSliceResolution, bool shadowFiltering);

  /// @brief Method GetShadowLightIndexFromLightIndex, addr 0x67359ac, size 0x60, virtual false, abstract: false, final false
  inline int32_t GetShadowLightIndexFromLightIndex(int32_t visibleLightIndex);

  /// @brief Method InitPassData, addr 0x673a7b8, size 0xb8, virtual false, abstract: false, final false
  inline void InitPassData(::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*> passData,
                           ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                           ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData);

  /// @brief Method InitRendererLists, addr 0x673a870, size 0x278, virtual false, abstract: false, final false
  inline void InitRendererLists(::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                ::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*> passData, ::UnityEngine::Rendering::ScriptableRenderContext context,
                                ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool useRenderGraph);

  static inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method Render, addr 0x673b958, size 0x9a8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method RenderAdditionalShadowmapAtlas, addr 0x673aae8, size 0xb0c, virtual false, abstract: false, final false
  inline void RenderAdditionalShadowmapAtlas(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                             ::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*> data, bool useRenderGraph);

  /// @brief Method ResolutionLog2ForHash, addr 0x6737fdc, size 0x4c, virtual false, abstract: false, final false
  inline uint64_t ResolutionLog2ForHash(int32_t resolution);

  /// @brief Method SetShadowParamsForEmptyShadowmap, addr 0x673a680, size 0x138, virtual false, abstract: false, final false
  static inline void SetShadowParamsForEmptyShadowmap(::UnityEngine::Rendering::RasterCommandBuffer* rasterCommandBuffer);

  /// @brief Method Setup, addr 0x6738378, size 0xf4, virtual false, abstract: false, final false
  inline bool Setup(::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Setup, addr 0x673846c, size 0x184c, virtual false, abstract: false, final false
  inline bool Setup(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                    ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData);

  /// @brief Method SetupAdditionalLightsShadowReceiverConstants, addr 0x673b5f4, size 0x364, virtual false, abstract: false, final false
  inline void SetupAdditionalLightsShadowReceiverConstants(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Vector2Int allocatedShadowAtlasSize, bool useStructuredBuffer,
                                                           bool softShadows);

  /// @brief Method SetupForEmptyRendering, addr 0x6739cb8, size 0x448, virtual false, abstract: false, final false
  inline bool SetupForEmptyRendering(bool stripShadowsOffVariants, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                     ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData);

  /// @brief Method UpdateTextureDescriptorIfNeeded, addr 0x673a180, size 0xac, virtual false, abstract: false, final false
  inline void UpdateTextureDescriptorIfNeeded();

  /// @brief Method UsesBakedShadows, addr 0x6738340, size 0x38, virtual false, abstract: false, final false
  inline bool UsesBakedShadows(::UnityEngine::Light* light);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AdditionalLightIndexToShadowParams() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AdditionalLightIndexToShadowParams();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __cordl_internal_get_m_AdditionalLightIndexToVisibleLightIndex() const;

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __cordl_internal_get_m_AdditionalLightIndexToVisibleLightIndex();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_AdditionalLightShadowDescriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_AdditionalLightShadowDescriptor();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> const&
  __cordl_internal_get_m_AdditionalLightsShadowSlices() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*>& __cordl_internal_get_m_AdditionalLightsShadowSlices();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_AdditionalLightsShadowmapHandle() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_AdditionalLightsShadowmapHandle();

  constexpr float_t const& __cordl_internal_get_m_CascadeBorder() const;

  constexpr float_t& __cordl_internal_get_m_CascadeBorder();

  constexpr bool const& __cordl_internal_get_m_CreateEmptyShadowmap() const;

  constexpr bool& __cordl_internal_get_m_CreateEmptyShadowmap();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_EmptyAdditionalLightShadowmapTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_EmptyAdditionalLightShadowmapTexture();

  constexpr bool const& __cordl_internal_get_m_EmptyShadowmapNeedsClear() const;

  constexpr bool& __cordl_internal_get_m_EmptyShadowmapNeedsClear();

  constexpr ::System::Collections::Generic::List_1<uint8_t>* const& __cordl_internal_get_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex() const;

  constexpr ::System::Collections::Generic::List_1<uint8_t>*& __cordl_internal_get_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex();

  constexpr bool const& __cordl_internal_get_m_IssuedMessageAboutRemovedShadowSlices() const;

  constexpr bool& __cordl_internal_get_m_IssuedMessageAboutRemovedShadowSlices();

  constexpr bool const& __cordl_internal_get_m_IssuedMessageAboutShadowMapsRescale() const;

  constexpr bool& __cordl_internal_get_m_IssuedMessageAboutShadowMapsRescale();

  constexpr bool const& __cordl_internal_get_m_IssuedMessageAboutShadowMapsTooBig() const;

  constexpr bool& __cordl_internal_get_m_IssuedMessageAboutShadowMapsTooBig();

  constexpr bool const& __cordl_internal_get_m_IssuedMessageAboutShadowSlicesTooMany() const;

  constexpr bool& __cordl_internal_get_m_IssuedMessageAboutShadowSlicesTooMany();

  constexpr float_t const& __cordl_internal_get_m_MaxShadowDistanceSq() const;

  constexpr float_t& __cordl_internal_get_m_MaxShadowDistanceSq();

  constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfilingSetupSampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSetupSampler();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, uint64_t>* const& __cordl_internal_get_m_ShadowRequestsHashes() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, uint64_t>*& __cordl_internal_get_m_ShadowRequestsHashes();

  constexpr ::System::Collections::Generic::List_1<int16_t>* const& __cordl_internal_get_m_ShadowSliceToAdditionalLightIndex() const;

  constexpr ::System::Collections::Generic::List_1<int16_t>*& __cordl_internal_get_m_ShadowSliceToAdditionalLightIndex();

  constexpr bool const& __cordl_internal_get_m_UseStructuredBuffer() const;

  constexpr bool& __cordl_internal_get_m_UseStructuredBuffer();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __cordl_internal_get_m_VisibleLightIndexToAdditionalLightIndex() const;

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __cordl_internal_get_m_VisibleLightIndexToAdditionalLightIndex();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_m_VisibleLightIndexToIsCastingShadows() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_m_VisibleLightIndexToIsCastingShadows();

  constexpr int32_t const& __cordl_internal_get_renderTargetHeight() const;

  constexpr int32_t& __cordl_internal_get_renderTargetHeight();

  constexpr int32_t const& __cordl_internal_get_renderTargetWidth() const;

  constexpr int32_t& __cordl_internal_get_renderTargetWidth();

  constexpr void __cordl_internal_set_m_AdditionalLightIndexToShadowParams(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightIndexToVisibleLightIndex(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightShadowDescriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void
  __cordl_internal_set_m_AdditionalLightsShadowSlices(::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowmapHandle(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_CascadeBorder(float_t value);

  constexpr void __cordl_internal_set_m_CreateEmptyShadowmap(bool value);

  constexpr void __cordl_internal_set_m_EmptyAdditionalLightShadowmapTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_EmptyShadowmapNeedsClear(bool value);

  constexpr void __cordl_internal_set_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex(::System::Collections::Generic::List_1<uint8_t>* value);

  constexpr void __cordl_internal_set_m_IssuedMessageAboutRemovedShadowSlices(bool value);

  constexpr void __cordl_internal_set_m_IssuedMessageAboutShadowMapsRescale(bool value);

  constexpr void __cordl_internal_set_m_IssuedMessageAboutShadowMapsTooBig(bool value);

  constexpr void __cordl_internal_set_m_IssuedMessageAboutShadowSlicesTooMany(bool value);

  constexpr void __cordl_internal_set_m_MaxShadowDistanceSq(float_t value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData* value);

  constexpr void __cordl_internal_set_m_ProfilingSetupSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ShadowRequestsHashes(::System::Collections::Generic::Dictionary_2<int32_t, uint64_t>* value);

  constexpr void __cordl_internal_set_m_ShadowSliceToAdditionalLightIndex(::System::Collections::Generic::List_1<int16_t>* value);

  constexpr void __cordl_internal_set_m_UseStructuredBuffer(bool value);

  constexpr void __cordl_internal_set_m_VisibleLightIndexToAdditionalLightIndex(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr void __cordl_internal_set_m_VisibleLightIndexToIsCastingShadows(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_renderTargetHeight(int32_t value);

  constexpr void __cordl_internal_set_renderTargetWidth(int32_t value);

  /// @brief Method .ctor, addr 0x673779c, size 0x45c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  static inline ::UnityEngine::Vector4 getStaticF_c_DefaultShadowParams();

  static inline int32_t getStaticF_m_AdditionalShadowsBufferId();

  static inline int32_t getStaticF_m_AdditionalShadowsIndicesId();

  static inline bool getStaticF_m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall();

  static inline bool getStaticF_m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall();

  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> getStaticF_s_EmptyAdditionalLightIndexToShadowParams();

  static inline ::UnityEngine::Vector4 getStaticF_s_EmptyAdditionalShadowFadeParams();

  static inline void setStaticF_c_DefaultShadowParams(::UnityEngine::Vector4 value);

  static inline void setStaticF_m_AdditionalShadowsBufferId(int32_t value);

  static inline void setStaticF_m_AdditionalShadowsIndicesId(int32_t value);

  static inline void setStaticF_m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall(bool value);

  static inline void setStaticF_m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall(bool value);

  static inline void setStaticF_s_EmptyAdditionalLightIndexToShadowParams(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  static inline void setStaticF_s_EmptyAdditionalShadowFadeParams(::UnityEngine::Vector4 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalLightsShadowCasterPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdditionalLightsShadowCasterPass(AdditionalLightsShadowCasterPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdditionalLightsShadowCasterPass(AdditionalLightsShadowCasterPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13036 };

  /// @brief Field k_AdditionalLightShadowMapTextureName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_AdditionalLightShadowMapTextureName{ u"_AdditionalLightsShadowmapTexture" };

  /// @brief Field k_EmptyAdditionalLightShadowMapTextureName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_EmptyAdditionalLightShadowMapTextureName{ u"_EmptyAdditionalLightShadowmapTexture" };

  /// @brief Field k_EmptyShadowMapDimensions offset 0xffffffff size 0x4
  static constexpr int32_t k_EmptyShadowMapDimensions{ static_cast<int32_t>(0x1) };

  /// @brief Field k_LightTypeIdentifierInShadowParams_Point offset 0xffffffff size 0x4
  static constexpr float_t k_LightTypeIdentifierInShadowParams_Point{ static_cast<float_t>(1.0f) };

  /// @brief Field k_LightTypeIdentifierInShadowParams_Spot offset 0xffffffff size 0x4
  static constexpr float_t k_LightTypeIdentifierInShadowParams_Spot{ static_cast<float_t>(0.0f) };

  /// @brief Field k_ShadowmapBufferBits offset 0xffffffff size 0x4
  static constexpr int32_t k_ShadowmapBufferBits{ static_cast<int32_t>(0x10) };

  /// @brief Field m_AdditionalLightsShadowmapHandle, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_AdditionalLightsShadowmapHandle;

  /// @brief Field renderTargetWidth, offset: 0xc0, size: 0x4, def value: None
  int32_t ___renderTargetWidth;

  /// @brief Field renderTargetHeight, offset: 0xc4, size: 0x4, def value: None
  int32_t ___renderTargetHeight;

  /// @brief Field m_CreateEmptyShadowmap, offset: 0xc8, size: 0x1, def value: None
  bool ___m_CreateEmptyShadowmap;

  /// @brief Field m_EmptyShadowmapNeedsClear, offset: 0xc9, size: 0x1, def value: None
  bool ___m_EmptyShadowmapNeedsClear;

  /// @brief Field m_IssuedMessageAboutShadowSlicesTooMany, offset: 0xca, size: 0x1, def value: None
  bool ___m_IssuedMessageAboutShadowSlicesTooMany;

  /// @brief Field m_IssuedMessageAboutShadowMapsRescale, offset: 0xcb, size: 0x1, def value: None
  bool ___m_IssuedMessageAboutShadowMapsRescale;

  /// @brief Field m_IssuedMessageAboutShadowMapsTooBig, offset: 0xcc, size: 0x1, def value: None
  bool ___m_IssuedMessageAboutShadowMapsTooBig;

  /// @brief Field m_IssuedMessageAboutRemovedShadowSlices, offset: 0xcd, size: 0x1, def value: None
  bool ___m_IssuedMessageAboutRemovedShadowSlices;

  /// @brief Field m_UseStructuredBuffer, offset: 0xce, size: 0x1, def value: None
  bool ___m_UseStructuredBuffer;

  /// @brief Field m_MaxShadowDistanceSq, offset: 0xd0, size: 0x4, def value: None
  float_t ___m_MaxShadowDistanceSq;

  /// @brief Field m_CascadeBorder, offset: 0xd4, size: 0x4, def value: None
  float_t ___m_CascadeBorder;

  /// @brief Field m_PassData, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData* ___m_PassData;

  /// @brief Field m_EmptyAdditionalLightShadowmapTexture, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_EmptyAdditionalLightShadowmapTexture;

  /// @brief Field m_VisibleLightIndexToIsCastingShadows, offset: 0xe8, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_VisibleLightIndexToIsCastingShadows;

  /// @brief Field m_VisibleLightIndexToAdditionalLightIndex, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___m_VisibleLightIndexToAdditionalLightIndex;

  /// @brief Field m_AdditionalLightIndexToVisibleLightIndex, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___m_AdditionalLightIndexToVisibleLightIndex;

  /// @brief Field m_AdditionalLightIndexToShadowParams, offset: 0x100, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AdditionalLightIndexToShadowParams;

  /// @brief Field m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix;

  /// @brief Field m_AdditionalLightsShadowSlices, offset: 0x110, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> ___m_AdditionalLightsShadowSlices;

  /// @brief Field m_GlobalShadowSliceIndexToPerLightShadowSliceIndex, offset: 0x118, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint8_t>* ___m_GlobalShadowSliceIndexToPerLightShadowSliceIndex;

  /// @brief Field m_ShadowSliceToAdditionalLightIndex, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int16_t>* ___m_ShadowSliceToAdditionalLightIndex;

  /// @brief Field m_ShadowRequestsHashes, offset: 0x128, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, uint64_t>* ___m_ShadowRequestsHashes;

  /// @brief Field m_ProfilingSetupSampler, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSetupSampler;

  /// @brief Field m_AdditionalLightShadowDescriptor, offset: 0x138, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___m_AdditionalLightShadowDescriptor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightsShadowmapHandle) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___renderTargetWidth) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___renderTargetHeight) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_CreateEmptyShadowmap) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_EmptyShadowmapNeedsClear) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_IssuedMessageAboutShadowSlicesTooMany) == 0xca, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_IssuedMessageAboutShadowMapsRescale) == 0xcb, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_IssuedMessageAboutShadowMapsTooBig) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_IssuedMessageAboutRemovedShadowSlices) == 0xcd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_UseStructuredBuffer) == 0xce, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_MaxShadowDistanceSq) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_CascadeBorder) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_PassData) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_EmptyAdditionalLightShadowmapTexture) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_VisibleLightIndexToIsCastingShadows) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_VisibleLightIndexToAdditionalLightIndex) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightIndexToVisibleLightIndex) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightIndexToShadowParams) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightsShadowSlices) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_GlobalShadowSliceIndexToPerLightShadowSliceIndex) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_ShadowSliceToAdditionalLightIndex) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_ShadowRequestsHashes) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_ProfilingSetupSampler) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightShadowDescriptor) == 0x138, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, 0x170>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*, "UnityEngine.Rendering.Universal.Internal", "AdditionalLightsShadowCasterPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*, "UnityEngine.Rendering.Universal.Internal",
                       "AdditionalLightsShadowCasterPass/AdditionalShadowsConstantBuffer");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*, "UnityEngine.Rendering.Universal.Internal",
                       "AdditionalLightsShadowCasterPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*, "UnityEngine.Rendering.Universal.Internal", "AdditionalLightsShadowCasterPass/<>c");

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/MainLightShadowCasterPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MainLightShadowCasterPass)
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
class MainLightShadowCasterPass_MainLightShadowConstantBuffer;
}
namespace UnityEngine::Rendering::Universal::Internal {
class MainLightShadowCasterPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class MainLightShadowCasterPass___c;
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
namespace UnityEngine::Rendering {
struct VisibleLight;
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
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class MainLightShadowCasterPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class MainLightShadowCasterPass_MainLightShadowConstantBuffer;
}
namespace UnityEngine::Rendering::Universal::Internal {
class MainLightShadowCasterPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class MainLightShadowCasterPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.MainLightShadowCasterPass/MainLightShadowConstantBuffer
class CORDL_TYPE MainLightShadowCasterPass_MainLightShadowConstantBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _CascadeShadowSplitSphereRadii, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CascadeShadowSplitSphereRadii, put = setStaticF__CascadeShadowSplitSphereRadii)) int32_t _CascadeShadowSplitSphereRadii;

  /// @brief Field _CascadeShadowSplitSpheres0, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CascadeShadowSplitSpheres0, put = setStaticF__CascadeShadowSplitSpheres0)) int32_t _CascadeShadowSplitSpheres0;

  /// @brief Field _CascadeShadowSplitSpheres1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CascadeShadowSplitSpheres1, put = setStaticF__CascadeShadowSplitSpheres1)) int32_t _CascadeShadowSplitSpheres1;

  /// @brief Field _CascadeShadowSplitSpheres2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CascadeShadowSplitSpheres2, put = setStaticF__CascadeShadowSplitSpheres2)) int32_t _CascadeShadowSplitSpheres2;

  /// @brief Field _CascadeShadowSplitSpheres3, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CascadeShadowSplitSpheres3, put = setStaticF__CascadeShadowSplitSpheres3)) int32_t _CascadeShadowSplitSpheres3;

  /// @brief Field _MainLightShadowmapID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__MainLightShadowmapID, put = setStaticF__MainLightShadowmapID)) int32_t _MainLightShadowmapID;

  /// @brief Field _ShadowOffset0, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ShadowOffset0, put = setStaticF__ShadowOffset0)) int32_t _ShadowOffset0;

  /// @brief Field _ShadowOffset1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ShadowOffset1, put = setStaticF__ShadowOffset1)) int32_t _ShadowOffset1;

  /// @brief Field _ShadowParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ShadowParams, put = setStaticF__ShadowParams)) int32_t _ShadowParams;

  /// @brief Field _ShadowmapSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ShadowmapSize, put = setStaticF__ShadowmapSize)) int32_t _ShadowmapSize;

  /// @brief Field _WorldToShadow, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__WorldToShadow, put = setStaticF__WorldToShadow)) int32_t _WorldToShadow;

  static inline int32_t getStaticF__CascadeShadowSplitSphereRadii();

  static inline int32_t getStaticF__CascadeShadowSplitSpheres0();

  static inline int32_t getStaticF__CascadeShadowSplitSpheres1();

  static inline int32_t getStaticF__CascadeShadowSplitSpheres2();

  static inline int32_t getStaticF__CascadeShadowSplitSpheres3();

  static inline int32_t getStaticF__MainLightShadowmapID();

  static inline int32_t getStaticF__ShadowOffset0();

  static inline int32_t getStaticF__ShadowOffset1();

  static inline int32_t getStaticF__ShadowParams();

  static inline int32_t getStaticF__ShadowmapSize();

  static inline int32_t getStaticF__WorldToShadow();

  static inline void setStaticF__CascadeShadowSplitSphereRadii(int32_t value);

  static inline void setStaticF__CascadeShadowSplitSpheres0(int32_t value);

  static inline void setStaticF__CascadeShadowSplitSpheres1(int32_t value);

  static inline void setStaticF__CascadeShadowSplitSpheres2(int32_t value);

  static inline void setStaticF__CascadeShadowSplitSpheres3(int32_t value);

  static inline void setStaticF__MainLightShadowmapID(int32_t value);

  static inline void setStaticF__ShadowOffset0(int32_t value);

  static inline void setStaticF__ShadowOffset1(int32_t value);

  static inline void setStaticF__ShadowParams(int32_t value);

  static inline void setStaticF__ShadowmapSize(int32_t value);

  static inline void setStaticF__WorldToShadow(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainLightShadowCasterPass_MainLightShadowConstantBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainLightShadowCasterPass_MainLightShadowConstantBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainLightShadowCasterPass_MainLightShadowConstantBuffer(MainLightShadowCasterPass_MainLightShadowConstantBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainLightShadowCasterPass_MainLightShadowConstantBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainLightShadowCasterPass_MainLightShadowConstantBuffer(MainLightShadowCasterPass_MainLightShadowConstantBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13074 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.MainLightShadowCasterPass/PassData
class CORDL_TYPE MainLightShadowCasterPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field emptyShadowmap, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_emptyShadowmap, put = __cordl_internal_set_emptyShadowmap)) bool emptyShadowmap;

  /// @brief Field lightData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_lightData, put = __cordl_internal_set_lightData)) ::UnityEngine::Rendering::Universal::UniversalLightData* lightData;

  /// @brief Field pass, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_pass, put = __cordl_internal_set_pass)) ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* pass;

  /// @brief Field renderingData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_renderingData, put = __cordl_internal_set_renderingData)) ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData;

  /// @brief Field shadowData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_shadowData, put = __cordl_internal_set_shadowData)) ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData;

  /// @brief Field shadowRendererLists, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_shadowRendererLists,
                      put = __cordl_internal_set_shadowRendererLists)) ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*>
      shadowRendererLists;

  /// @brief Field shadowRendererListsHandle, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_shadowRendererListsHandle,
                      put = __cordl_internal_set_shadowRendererListsHandle)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle,
                                                                                      ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*>
      shadowRendererListsHandle;

  /// @brief Field shadowmapTexture, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_shadowmapTexture, put = __cordl_internal_set_shadowmapTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle shadowmapTexture;

  static inline ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr bool const& __cordl_internal_get_emptyShadowmap() const;

  constexpr bool& __cordl_internal_get_emptyShadowmap();

  constexpr ::UnityEngine::Rendering::Universal::UniversalLightData* const& __cordl_internal_get_lightData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalLightData*& __cordl_internal_get_lightData();

  constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* const& __cordl_internal_get_pass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*& __cordl_internal_get_pass();

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData* const& __cordl_internal_get_renderingData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData*& __cordl_internal_get_renderingData();

  constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData* const& __cordl_internal_get_shadowData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData*& __cordl_internal_get_shadowData();

  constexpr ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*> const& __cordl_internal_get_shadowRendererLists() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*>& __cordl_internal_get_shadowRendererLists();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*> const&
  __cordl_internal_get_shadowRendererListsHandle() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*>&
  __cordl_internal_get_shadowRendererListsHandle();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_shadowmapTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_shadowmapTexture();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_emptyShadowmap(bool value);

  constexpr void __cordl_internal_set_lightData(::UnityEngine::Rendering::Universal::UniversalLightData* value);

  constexpr void __cordl_internal_set_pass(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* value);

  constexpr void __cordl_internal_set_renderingData(::UnityEngine::Rendering::Universal::UniversalRenderingData* value);

  constexpr void __cordl_internal_set_shadowData(::UnityEngine::Rendering::Universal::UniversalShadowData* value);

  constexpr void __cordl_internal_set_shadowRendererLists(::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*> value);

  constexpr void __cordl_internal_set_shadowRendererListsHandle(
      ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*> value);

  constexpr void __cordl_internal_set_shadowmapTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66e7bdc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainLightShadowCasterPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainLightShadowCasterPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainLightShadowCasterPass_PassData(MainLightShadowCasterPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainLightShadowCasterPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainLightShadowCasterPass_PassData(MainLightShadowCasterPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13075 };

  /// @brief Field emptyShadowmap, offset: 0x10, size: 0x1, def value: None
  bool ___emptyShadowmap;

  /// @brief Field renderingData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalRenderingData* ___renderingData;

  /// @brief Field cameraData, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field lightData, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalLightData* ___lightData;

  /// @brief Field shadowData, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalShadowData* ___shadowData;

  /// @brief Field pass, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* ___pass;

  /// @brief Field shadowmapTexture, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___shadowmapTexture;

  /// @brief Field shadowRendererLists, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*> ___shadowRendererLists;

  /// @brief Field shadowRendererListsHandle, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*> ___shadowRendererListsHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData, ___emptyShadowmap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData, ___renderingData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData, ___cameraData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData, ___lightData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData, ___shadowData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData, ___pass) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData, ___shadowmapTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData, ___shadowRendererLists) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData, ___shadowRendererListsHandle) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.MainLightShadowCasterPass/<>c
class CORDL_TYPE MainLightShadowCasterPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c* __9;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__38_0,
                      put = setStaticF___9__38_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__38_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c* New_ctor();

  /// @brief Method <Render>b__38_0, addr 0x66ea510, size 0xd0, virtual false, abstract: false, final false
  inline void _Render_b__38_0(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x66ea50c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__38_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c* value);

  static inline void setStaticF___9__38_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainLightShadowCasterPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainLightShadowCasterPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainLightShadowCasterPass___c(MainLightShadowCasterPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainLightShadowCasterPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainLightShadowCasterPass___c(MainLightShadowCasterPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13076 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.Universal.ScriptableRenderPass, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.MainLightShadowCasterPass
class CORDL_TYPE MainLightShadowCasterPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using MainLightShadowConstantBuffer = ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer;

  using PassData = ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c;

  /// @brief Field m_CascadeBorder, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CascadeBorder, put = __cordl_internal_set_m_CascadeBorder)) float_t m_CascadeBorder;

  /// @brief Field m_CascadeSlices, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CascadeSlices,
                      put = __cordl_internal_set_m_CascadeSlices)) ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*>
      m_CascadeSlices;

  /// @brief Field m_CascadeSplitDistances, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CascadeSplitDistances, put = __cordl_internal_set_m_CascadeSplitDistances)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      m_CascadeSplitDistances;

  /// @brief Field m_CreateEmptyShadowmap, offset 0xcc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CreateEmptyShadowmap, put = __cordl_internal_set_m_CreateEmptyShadowmap)) bool m_CreateEmptyShadowmap;

  /// @brief Field m_EmptyMainLightShadowmapTexture, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EmptyMainLightShadowmapTexture,
                      put = __cordl_internal_set_m_EmptyMainLightShadowmapTexture)) ::UnityEngine::Rendering::RTHandle* m_EmptyMainLightShadowmapTexture;

  /// @brief Field m_EmptyShadowmapNeedsClear, offset 0xcd, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EmptyShadowmapNeedsClear, put = __cordl_internal_set_m_EmptyShadowmapNeedsClear)) bool m_EmptyShadowmapNeedsClear;

  /// @brief Field m_MainLightShadowDescriptor, offset 0xe8, size 0x34
  __declspec(property(get = __cordl_internal_get_m_MainLightShadowDescriptor,
                      put = __cordl_internal_set_m_MainLightShadowDescriptor)) ::UnityEngine::RenderTextureDescriptor m_MainLightShadowDescriptor;

  /// @brief Field m_MainLightShadowMatrices, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MainLightShadowMatrices,
                      put = __cordl_internal_set_m_MainLightShadowMatrices)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      m_MainLightShadowMatrices;

  /// @brief Field m_MainLightShadowmapTexture, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MainLightShadowmapTexture, put = __cordl_internal_set_m_MainLightShadowmapTexture)) ::UnityEngine::Rendering::RTHandle* m_MainLightShadowmapTexture;

  /// @brief Field m_MaxShadowDistanceSq, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxShadowDistanceSq, put = __cordl_internal_set_m_MaxShadowDistanceSq)) float_t m_MaxShadowDistanceSq;

  /// @brief Field m_PassData, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData* m_PassData;

  /// @brief Field m_ProfilingSetupSampler, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSetupSampler, put = __cordl_internal_set_m_ProfilingSetupSampler)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupSampler;

  /// @brief Field m_ShadowCasterCascadesCount, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowCasterCascadesCount, put = __cordl_internal_set_m_ShadowCasterCascadesCount)) int32_t m_ShadowCasterCascadesCount;

  /// @brief Field renderTargetHeight, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_renderTargetHeight, put = __cordl_internal_set_renderTargetHeight)) int32_t renderTargetHeight;

  /// @brief Field renderTargetWidth, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_renderTargetWidth, put = __cordl_internal_set_renderTargetWidth)) int32_t renderTargetWidth;

  /// @brief Field s_EmptyShadowParams, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_EmptyShadowParams, put = setStaticF_s_EmptyShadowParams)) ::UnityEngine::Vector4 s_EmptyShadowParams;

  /// @brief Field s_EmptyShadowmapSize, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_EmptyShadowmapSize, put = setStaticF_s_EmptyShadowmapSize)) ::UnityEngine::Vector4 s_EmptyShadowmapSize;

  /// @brief Method Clear, addr 0x66e8398, size 0x148, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Configure, addr 0x66e858c, size 0x140, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method Dispose, addr 0x66e7c5c, size 0x34, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Execute, addr 0x66e86cc, size 0x2d0, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method InitPassData, addr 0x66e8a84, size 0x54, virtual false, abstract: false, final false
  inline void InitPassData(::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*> passData,
                           ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                           ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData);

  /// @brief Method InitRendererLists, addr 0x66e8ad8, size 0x220, virtual false, abstract: false, final false
  inline void InitRendererLists(::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*> passData, ::UnityEngine::Rendering::ScriptableRenderContext context,
                                ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool useRenderGraph);

  static inline ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method Render, addr 0x66e9890, size 0x94c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method RenderMainLightCascadeShadowmap, addr 0x66e8cf8, size 0x614, virtual false, abstract: false, final false
  inline void RenderMainLightCascadeShadowmap(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*> data,
                                              bool isRenderGraph);

  /// @brief Method SetShadowParamsForEmptyShadowmap, addr 0x66e899c, size 0xe8, virtual false, abstract: false, final false
  static inline void SetShadowParamsForEmptyShadowmap(::UnityEngine::Rendering::RasterCommandBuffer* rasterCommandBuffer);

  /// @brief Method Setup, addr 0x66e7c90, size 0xf4, virtual false, abstract: false, final false
  inline bool Setup(::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Setup, addr 0x66e7d84, size 0x430, virtual false, abstract: false, final false
  inline bool Setup(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                    ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData);

  /// @brief Method SetupForEmptyRendering, addr 0x66e81b4, size 0x1e4, virtual false, abstract: false, final false
  inline bool SetupForEmptyRendering(bool stripShadowsOffVariants, ::UnityEngine::Light* light, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                     ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData);

  /// @brief Method SetupMainLightShadowReceiverConstants, addr 0x66e930c, size 0x584, virtual false, abstract: false, final false
  inline void SetupMainLightShadowReceiverConstants(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::VisibleLight> shadowLight,
                                                    ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData);

  /// @brief Method UpdateTextureDescriptorIfNeeded, addr 0x66e84e0, size 0xac, virtual false, abstract: false, final false
  inline void UpdateTextureDescriptorIfNeeded();

  constexpr float_t const& __cordl_internal_get_m_CascadeBorder() const;

  constexpr float_t& __cordl_internal_get_m_CascadeBorder();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> const& __cordl_internal_get_m_CascadeSlices() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*>& __cordl_internal_get_m_CascadeSlices();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_CascadeSplitDistances() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_CascadeSplitDistances();

  constexpr bool const& __cordl_internal_get_m_CreateEmptyShadowmap() const;

  constexpr bool& __cordl_internal_get_m_CreateEmptyShadowmap();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_EmptyMainLightShadowmapTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_EmptyMainLightShadowmapTexture();

  constexpr bool const& __cordl_internal_get_m_EmptyShadowmapNeedsClear() const;

  constexpr bool& __cordl_internal_get_m_EmptyShadowmapNeedsClear();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_MainLightShadowDescriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_MainLightShadowDescriptor();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_MainLightShadowMatrices() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_MainLightShadowMatrices();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_MainLightShadowmapTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_MainLightShadowmapTexture();

  constexpr float_t const& __cordl_internal_get_m_MaxShadowDistanceSq() const;

  constexpr float_t& __cordl_internal_get_m_MaxShadowDistanceSq();

  constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfilingSetupSampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSetupSampler();

  constexpr int32_t const& __cordl_internal_get_m_ShadowCasterCascadesCount() const;

  constexpr int32_t& __cordl_internal_get_m_ShadowCasterCascadesCount();

  constexpr int32_t const& __cordl_internal_get_renderTargetHeight() const;

  constexpr int32_t& __cordl_internal_get_renderTargetHeight();

  constexpr int32_t const& __cordl_internal_get_renderTargetWidth() const;

  constexpr int32_t& __cordl_internal_get_renderTargetWidth();

  constexpr void __cordl_internal_set_m_CascadeBorder(float_t value);

  constexpr void __cordl_internal_set_m_CascadeSlices(::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> value);

  constexpr void __cordl_internal_set_m_CascadeSplitDistances(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_CreateEmptyShadowmap(bool value);

  constexpr void __cordl_internal_set_m_EmptyMainLightShadowmapTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_EmptyShadowmapNeedsClear(bool value);

  constexpr void __cordl_internal_set_m_MainLightShadowDescriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_m_MainLightShadowMatrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_MainLightShadowmapTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_MaxShadowDistanceSq(float_t value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData* value);

  constexpr void __cordl_internal_set_m_ProfilingSetupSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ShadowCasterCascadesCount(int32_t value);

  constexpr void __cordl_internal_set_renderTargetHeight(int32_t value);

  constexpr void __cordl_internal_set_renderTargetWidth(int32_t value);

  /// @brief Method .ctor, addr 0x66e7a2c, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  static inline ::UnityEngine::Vector4 getStaticF_s_EmptyShadowParams();

  static inline ::UnityEngine::Vector4 getStaticF_s_EmptyShadowmapSize();

  static inline void setStaticF_s_EmptyShadowParams(::UnityEngine::Vector4 value);

  static inline void setStaticF_s_EmptyShadowmapSize(::UnityEngine::Vector4 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainLightShadowCasterPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainLightShadowCasterPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainLightShadowCasterPass(MainLightShadowCasterPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainLightShadowCasterPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainLightShadowCasterPass(MainLightShadowCasterPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13077 };

  /// @brief Field k_EmptyMainLightShadowMapTextureName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_EmptyMainLightShadowMapTextureName{ u"_EmptyMainLightShadowmapTexture" };

  /// @brief Field k_EmptyShadowMapDimensions offset 0xffffffff size 0x4
  static constexpr int32_t k_EmptyShadowMapDimensions{ static_cast<int32_t>(0x1) };

  /// @brief Field k_MainLightShadowMapTextureName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MainLightShadowMapTextureName{ u"_MainLightShadowmapTexture" };

  /// @brief Field k_MaxCascades offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxCascades{ static_cast<int32_t>(0x4) };

  /// @brief Field k_ShadowmapBufferBits offset 0xffffffff size 0x4
  static constexpr int32_t k_ShadowmapBufferBits{ static_cast<int32_t>(0x10) };

  /// @brief Field m_MainLightShadowmapTexture, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_MainLightShadowmapTexture;

  /// @brief Field renderTargetWidth, offset: 0xc0, size: 0x4, def value: None
  int32_t ___renderTargetWidth;

  /// @brief Field renderTargetHeight, offset: 0xc4, size: 0x4, def value: None
  int32_t ___renderTargetHeight;

  /// @brief Field m_ShadowCasterCascadesCount, offset: 0xc8, size: 0x4, def value: None
  int32_t ___m_ShadowCasterCascadesCount;

  /// @brief Field m_CreateEmptyShadowmap, offset: 0xcc, size: 0x1, def value: None
  bool ___m_CreateEmptyShadowmap;

  /// @brief Field m_EmptyShadowmapNeedsClear, offset: 0xcd, size: 0x1, def value: None
  bool ___m_EmptyShadowmapNeedsClear;

  /// @brief Field m_CascadeBorder, offset: 0xd0, size: 0x4, def value: None
  float_t ___m_CascadeBorder;

  /// @brief Field m_MaxShadowDistanceSq, offset: 0xd4, size: 0x4, def value: None
  float_t ___m_MaxShadowDistanceSq;

  /// @brief Field m_PassData, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData* ___m_PassData;

  /// @brief Field m_EmptyMainLightShadowmapTexture, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_EmptyMainLightShadowmapTexture;

  /// @brief Field m_MainLightShadowDescriptor, offset: 0xe8, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___m_MainLightShadowDescriptor;

  /// @brief Field m_CascadeSplitDistances, offset: 0x120, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_CascadeSplitDistances;

  /// @brief Field m_MainLightShadowMatrices, offset: 0x128, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_MainLightShadowMatrices;

  /// @brief Field m_ProfilingSetupSampler, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSetupSampler;

  /// @brief Field m_CascadeSlices, offset: 0x138, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> ___m_CascadeSlices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_MainLightShadowmapTexture) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___renderTargetWidth) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___renderTargetHeight) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_ShadowCasterCascadesCount) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_CreateEmptyShadowmap) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_EmptyShadowmapNeedsClear) == 0xcd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_CascadeBorder) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_MaxShadowDistanceSq) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_PassData) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_EmptyMainLightShadowmapTexture) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_MainLightShadowDescriptor) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_CascadeSplitDistances) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_MainLightShadowMatrices) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_ProfilingSetupSampler) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_CascadeSlices) == 0x138, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, 0x140>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*, "UnityEngine.Rendering.Universal.Internal", "MainLightShadowCasterPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*, "UnityEngine.Rendering.Universal.Internal",
                       "MainLightShadowCasterPass/MainLightShadowConstantBuffer");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*, "UnityEngine.Rendering.Universal.Internal", "MainLightShadowCasterPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c*, "UnityEngine.Rendering.Universal.Internal", "MainLightShadowCasterPass/<>c");

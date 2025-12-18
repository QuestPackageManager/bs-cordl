#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/MotionVectorRenderPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MotionVectorRenderPass)
namespace UnityEngine::Experimental::Rendering {
class XRPass;
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
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
class MotionVectorRenderPass_MotionMatrixPassData;
}
namespace UnityEngine::Rendering::Universal {
class MotionVectorRenderPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class MotionVectorRenderPass___c;
}
namespace UnityEngine::Rendering::Universal {
class MotionVectorsPersistentData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
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
struct DrawingSettings;
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
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class MotionVectorRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class MotionVectorRenderPass_MotionMatrixPassData;
}
namespace UnityEngine::Rendering::Universal {
class MotionVectorRenderPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class MotionVectorRenderPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::MotionVectorRenderPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.RendererList
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.MotionVectorRenderPass/PassData
class CORDL_TYPE MotionVectorRenderPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field camera, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_camera, put = __cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field cameraDepth, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_cameraDepth, put = __cordl_internal_set_cameraDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraDepth;

  /// @brief Field cameraMaterial, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraMaterial, put = __cordl_internal_set_cameraMaterial)) ::UnityW<::UnityEngine::Material> cameraMaterial;

  /// @brief Field motionVectorColor, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_motionVectorColor, put = __cordl_internal_set_motionVectorColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle motionVectorColor;

  /// @brief Field motionVectorDepth, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_motionVectorDepth, put = __cordl_internal_set_motionVectorDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle motionVectorDepth;

  /// @brief Field rendererList, offset 0x68, size 0x18
  __declspec(property(get = __cordl_internal_get_rendererList, put = __cordl_internal_set_rendererList)) ::UnityEngine::Rendering::RendererList rendererList;

  /// @brief Field rendererListHdl, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererListHdl, put = __cordl_internal_set_rendererListHdl)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererListHdl;

  /// @brief Field xr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_xr, put = __cordl_internal_set_xr)) ::UnityEngine::Experimental::Rendering::XRPass* xr;

  static inline ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData* New_ctor();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_cameraDepth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_cameraDepth();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_cameraMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_cameraMaterial();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_motionVectorColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_motionVectorColor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_motionVectorDepth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_motionVectorDepth();

  constexpr ::UnityEngine::Rendering::RendererList const& __cordl_internal_get_rendererList() const;

  constexpr ::UnityEngine::Rendering::RendererList& __cordl_internal_get_rendererList();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererListHdl() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererListHdl();

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_xr() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_xr();

  constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_cameraDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_cameraMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_motionVectorColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_motionVectorDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_rendererList(::UnityEngine::Rendering::RendererList value);

  constexpr void __cordl_internal_set_rendererListHdl(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  constexpr void __cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value);

  /// @brief Method .ctor, addr 0x66ceeb4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionVectorRenderPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorRenderPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MotionVectorRenderPass_PassData(MotionVectorRenderPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorRenderPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MotionVectorRenderPass_PassData(MotionVectorRenderPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12817 };

  /// @brief Field camera, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___camera;

  /// @brief Field xr, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ___xr;

  /// @brief Field motionVectorColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___motionVectorColor;

  /// @brief Field motionVectorDepth, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___motionVectorDepth;

  /// @brief Field cameraDepth, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___cameraDepth;

  /// @brief Field cameraMaterial, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___cameraMaterial;

  /// @brief Field rendererListHdl, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererListHdl;

  /// @brief Field rendererList, offset: 0x68, size: 0x18, def value: None
  ::UnityEngine::Rendering::RendererList ___rendererList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData, ___camera) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData, ___xr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData, ___motionVectorColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData, ___motionVectorDepth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData, ___cameraDepth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData, ___cameraMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData, ___rendererListHdl) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData, ___rendererList) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.MotionVectorRenderPass/MotionMatrixPassData
class CORDL_TYPE MotionVectorRenderPass_MotionMatrixPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field motionData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_motionData, put = __cordl_internal_set_motionData)) ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* motionData;

  /// @brief Field xr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_xr, put = __cordl_internal_set_xr)) ::UnityEngine::Experimental::Rendering::XRPass* xr;

  static inline ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* const& __cordl_internal_get_motionData() const;

  constexpr ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*& __cordl_internal_get_motionData();

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_xr() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_xr();

  constexpr void __cordl_internal_set_motionData(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* value);

  constexpr void __cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value);

  /// @brief Method .ctor, addr 0x66d0aa8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionVectorRenderPass_MotionMatrixPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorRenderPass_MotionMatrixPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MotionVectorRenderPass_MotionMatrixPassData(MotionVectorRenderPass_MotionMatrixPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorRenderPass_MotionMatrixPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MotionVectorRenderPass_MotionMatrixPassData(MotionVectorRenderPass_MotionMatrixPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12818 };

  /// @brief Field motionData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* ___motionData;

  /// @brief Field xr, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ___xr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData, ___motionData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData, ___xr) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.MotionVectorRenderPass/<>c
class CORDL_TYPE MotionVectorRenderPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c* __9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_0,
                      put = setStaticF___9__23_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__23_0;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0,
                      put = setStaticF___9__26_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__26_0;

  static inline ::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c* New_ctor();

  /// @brief Method <Render>b__23_0, addr 0x66d0b04, size 0x150, virtual false, abstract: false, final false
  inline void _Render_b__23_0(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <SetRenderGraphMotionVectorGlobalMatrices>b__26_0, addr 0x66d0c54, size 0x28, virtual false, abstract: false, final false
  inline void _SetRenderGraphMotionVectorGlobalMatrices_b__26_0(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData* data,
                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x66d0b00, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__23_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__26_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c* value);

  static inline void setStaticF___9__23_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__26_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionVectorRenderPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorRenderPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MotionVectorRenderPass___c(MotionVectorRenderPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorRenderPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MotionVectorRenderPass___c(MotionVectorRenderPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12819 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Rendering.FilteringSettings, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.MotionVectorRenderPass
class CORDL_TYPE MotionVectorRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using MotionMatrixPassData = ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData;

  using PassData = ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c;

  /// @brief Field m_CameraMaterial, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraMaterial, put = __cordl_internal_set_m_CameraMaterial)) ::UnityW<::UnityEngine::Material> m_CameraMaterial;

  /// @brief Field m_Color, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Color, put = __cordl_internal_set_m_Color)) ::UnityEngine::Rendering::RTHandle* m_Color;

  /// @brief Field m_Depth, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Depth, put = __cordl_internal_set_m_Depth)) ::UnityEngine::Rendering::RTHandle* m_Depth;

  /// @brief Field m_FilteringSettings, offset 0xd0, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings)) ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_PassData, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData* m_PassData;

  /// @brief Field s_CameraDepthTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraDepthTextureID, put = setStaticF_s_CameraDepthTextureID)) int32_t s_CameraDepthTextureID;

  /// @brief Field s_SetMotionMatrixProfilingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SetMotionMatrixProfilingSampler,
                      put = setStaticF_s_SetMotionMatrixProfilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* s_SetMotionMatrixProfilingSampler;

  /// @brief Field s_ShaderTags, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ShaderTags, put = setStaticF_s_ShaderTags)) ::ArrayW<::StringW, ::Array<::StringW>*> s_ShaderTags;

  /// @brief Method Configure, addr 0x66ceec0, size 0xe4, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method DrawCameraMotionVectors, addr 0x66cf0bc, size 0x1ac, virtual false, abstract: false, final false
  static inline void DrawCameraMotionVectors(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Experimental::Rendering::XRPass* xr, ::UnityEngine::Material* cameraMaterial);

  /// @brief Method DrawObjectMotionVectors, addr 0x66cf268, size 0xb8, virtual false, abstract: false, final false
  static inline void DrawObjectMotionVectors(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Experimental::Rendering::XRPass* xr,
                                             ::ByRef<::UnityEngine::Rendering::RendererList> rendererList);

  /// @brief Method Execute, addr 0x66cf320, size 0x1d8, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x66cefa4, size 0x118, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData* passData,
                                 ::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method GetDrawingSettings, addr 0x66cf74c, size 0x22c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DrawingSettings GetDrawingSettings(::UnityEngine::Camera* camera, bool supportsDynamicBatching);

  /// @brief Method InitPassData, addr 0x66cf4f8, size 0x44, virtual false, abstract: false, final false
  inline void InitPassData(::ByRef<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*> passData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method InitRendererLists, addr 0x66cf53c, size 0x210, virtual false, abstract: false, final false
  inline void InitRendererLists(::ByRef<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*> passData, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                bool supportsDynamicBatching, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                bool useRenderGraph);

  static inline ::UnityEngine::Rendering::Universal::MotionVectorRenderPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* cameraMaterial,
                                                                                      ::UnityEngine::LayerMask opaqueLayerMask);

  /// @brief Method Render, addr 0x66cf978, size 0xaec, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraDepthTexture, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle motionVectorColor,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle motionVectorDepth);

  /// @brief Method SetMotionVectorGlobalMatrices, addr 0x66d0464, size 0xcc, virtual false, abstract: false, final false
  static inline void SetMotionVectorGlobalMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method SetRenderGraphMotionVectorGlobalMatrices, addr 0x66d0530, size 0x44c, virtual false, abstract: false, final false
  static inline void SetRenderGraphMotionVectorGlobalMatrices(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                              ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method Setup, addr 0x66ceeb8, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RTHandle* color, ::UnityEngine::Rendering::RTHandle* depth);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CameraMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CameraMaterial();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_Color() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_Color();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_Depth() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_Depth();

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr void __cordl_internal_set_m_CameraMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_Color(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_Depth(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData* value);

  /// @brief Method .ctor, addr 0x66ced5c, size 0x158, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* cameraMaterial, ::UnityEngine::LayerMask opaqueLayerMask);

  static inline int32_t getStaticF_s_CameraDepthTextureID();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_s_SetMotionMatrixProfilingSampler();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_ShaderTags();

  static inline void setStaticF_s_CameraDepthTextureID(int32_t value);

  static inline void setStaticF_s_SetMotionMatrixProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_s_ShaderTags(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionVectorRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MotionVectorRenderPass(MotionVectorRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MotionVectorRenderPass(MotionVectorRenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12820 };

  /// @brief Field k_MotionVectorDepthTextureName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MotionVectorDepthTextureName{ u"_MotionVectorDepthTexture" };

  /// @brief Field k_MotionVectorTextureName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MotionVectorTextureName{ u"_MotionVectorTexture" };

  /// @brief Field k_MotionVectorsLightModeTag offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MotionVectorsLightModeTag{ u"MotionVectors" };

  /// @brief Field k_TargetFormat value: I32(46)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const k_TargetFormat;

  /// @brief Field m_Color, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_Color;

  /// @brief Field m_Depth, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_Depth;

  /// @brief Field m_CameraMaterial, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_CameraMaterial;

  /// @brief Field m_FilteringSettings, offset: 0xd0, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_PassData, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData* ___m_PassData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass, ___m_Color) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass, ___m_Depth) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass, ___m_CameraMaterial) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass, ___m_FilteringSettings) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorRenderPass, ___m_PassData) == 0xf0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MotionVectorRenderPass, 0xf8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MotionVectorRenderPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MotionVectorRenderPass*, "UnityEngine.Rendering.Universal", "MotionVectorRenderPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*, "UnityEngine.Rendering.Universal", "MotionVectorRenderPass/MotionMatrixPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*, "UnityEngine.Rendering.Universal", "MotionVectorRenderPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*, "UnityEngine.Rendering.Universal", "MotionVectorRenderPass/<>c");

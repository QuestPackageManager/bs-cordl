#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/XRDepthMotionPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRDepthMotionPass)
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class XRDepthMotionPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class XRDepthMotionPass___c__DisplayClass17_0;
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
class RTHandle;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class XRDepthMotionPass;
}
namespace UnityEngine::Rendering::Universal {
class XRDepthMotionPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class XRDepthMotionPass___c__DisplayClass17_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::XRDepthMotionPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.XRDepthMotionPass/PassData
class CORDL_TYPE XRDepthMotionPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field objMotionRendererList, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_objMotionRendererList,
                      put = __cordl_internal_set_objMotionRendererList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle objMotionRendererList;

  /// @brief Field previousViewProjectionStereo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_previousViewProjectionStereo,
                      put = __cordl_internal_set_previousViewProjectionStereo)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      previousViewProjectionStereo;

  /// @brief Field viewProjectionStereo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_viewProjectionStereo, put = __cordl_internal_set_viewProjectionStereo)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      viewProjectionStereo;

  /// @brief Field xrMotionVector, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_xrMotionVector, put = __cordl_internal_set_xrMotionVector)) ::UnityW<::UnityEngine::Material> xrMotionVector;

  static inline ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_objMotionRendererList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_objMotionRendererList();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_previousViewProjectionStereo() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_previousViewProjectionStereo();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_viewProjectionStereo() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_viewProjectionStereo();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_xrMotionVector() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_xrMotionVector();

  constexpr void __cordl_internal_set_objMotionRendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  constexpr void __cordl_internal_set_previousViewProjectionStereo(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_viewProjectionStereo(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_xrMotionVector(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x66f0f60, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDepthMotionPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDepthMotionPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDepthMotionPass_PassData(XRDepthMotionPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDepthMotionPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDepthMotionPass_PassData(XRDepthMotionPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12862 };

  /// @brief Field objMotionRendererList, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___objMotionRendererList;

  /// @brief Field previousViewProjectionStereo, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___previousViewProjectionStereo;

  /// @brief Field viewProjectionStereo, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___viewProjectionStereo;

  /// @brief Field xrMotionVector, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___xrMotionVector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData, ___objMotionRendererList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData, ___previousViewProjectionStereo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData, ___viewProjectionStereo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData, ___xrMotionVector) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.XRDepthMotionPass/<>c__DisplayClass17_0
class CORDL_TYPE XRDepthMotionPass___c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field passData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_passData, put = __cordl_internal_set_passData)) ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* passData;

  static inline ::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0* New_ctor();

  /// @brief Method <Render>b__0, addr 0x66f2278, size 0x150, virtual false, abstract: false, final false
  inline void _Render_b__0(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* const& __cordl_internal_get_passData() const;

  constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*& __cordl_internal_get_passData();

  constexpr void __cordl_internal_set_passData(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* value);

  /// @brief Method .ctor, addr 0x66f1e00, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDepthMotionPass___c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDepthMotionPass___c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDepthMotionPass___c__DisplayClass17_0(XRDepthMotionPass___c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDepthMotionPass___c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDepthMotionPass___c__DisplayClass17_0(XRDepthMotionPass___c__DisplayClass17_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12863 };

  /// @brief Field passData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* ___passData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0, ___passData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.ShaderTagId, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.XRDepthMotionPass
class CORDL_TYPE XRDepthMotionPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData;

  using __c__DisplayClass17_0 = ::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0;

  /// @brief Field k_MotionOnlyShaderTagId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MotionOnlyShaderTagId, put = setStaticF_k_MotionOnlyShaderTagId)) ::UnityEngine::Rendering::ShaderTagId k_MotionOnlyShaderTagId;

  /// @brief Field m_LastFrameIndex, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastFrameIndex, put = __cordl_internal_set_m_LastFrameIndex)) int32_t m_LastFrameIndex;

  /// @brief Field m_PassData, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* m_PassData;

  /// @brief Field m_PreviousViewProjection, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousViewProjection, put = __cordl_internal_set_m_PreviousViewProjection)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      m_PreviousViewProjection;

  /// @brief Field m_ViewProjection, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewProjection, put = __cordl_internal_set_m_ViewProjection)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      m_ViewProjection;

  /// @brief Field m_XRMotionVectorColor, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XRMotionVectorColor, put = __cordl_internal_set_m_XRMotionVectorColor)) ::UnityEngine::Rendering::RTHandle* m_XRMotionVectorColor;

  /// @brief Field m_XRMotionVectorDepth, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XRMotionVectorDepth, put = __cordl_internal_set_m_XRMotionVectorDepth)) ::UnityEngine::Rendering::RTHandle* m_XRMotionVectorDepth;

  /// @brief Field m_XRMotionVectorMaterial, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XRMotionVectorMaterial, put = __cordl_internal_set_m_XRMotionVectorMaterial)) ::UnityW<::UnityEngine::Material> m_XRMotionVectorMaterial;

  /// @brief Field xrMotionVectorColor, offset 0xc8, size 0x10
  __declspec(property(get = __cordl_internal_get_xrMotionVectorColor, put = __cordl_internal_set_xrMotionVectorColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle xrMotionVectorColor;

  /// @brief Field xrMotionVectorDepth, offset 0xe0, size 0x10
  __declspec(property(get = __cordl_internal_get_xrMotionVectorDepth, put = __cordl_internal_set_xrMotionVectorDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle xrMotionVectorDepth;

  /// @brief Method Dispose, addr 0x66f2188, size 0x80, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetObjectMotionDrawingSettings, addr 0x66f10b8, size 0x178, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DrawingSettings GetObjectMotionDrawingSettings(::UnityEngine::Camera* camera);

  /// @brief Method ImportXRMotionColorAndDepth, addr 0x66f1464, size 0x2a4, virtual false, abstract: false, final false
  inline void ImportXRMotionColorAndDepth(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method InitObjectMotionRendererLists, addr 0x66f1230, size 0x1f4, virtual false, abstract: false, final false
  inline void InitObjectMotionRendererLists(::ByRef<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*> passData, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                            ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Camera* camera);

  /// @brief Method InitPassData, addr 0x66f1424, size 0x40, virtual false, abstract: false, final false
  inline void InitPassData(::ByRef<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*> passData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  static inline ::UnityEngine::Rendering::Universal::XRDepthMotionPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* xrMotionVector);

  /// @brief Method Render, addr 0x66f1708, size 0x6f8, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method ResetMotionData, addr 0x66f0fc8, size 0xf0, virtual false, abstract: false, final false
  inline void ResetMotionData();

  /// @brief Method Update, addr 0x66f1e04, size 0x384, virtual false, abstract: false, final false
  inline void Update(::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData);

  constexpr int32_t const& __cordl_internal_get_m_LastFrameIndex() const;

  constexpr int32_t& __cordl_internal_get_m_LastFrameIndex();

  constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_PreviousViewProjection() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_PreviousViewProjection();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_ViewProjection() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_ViewProjection();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_XRMotionVectorColor() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_XRMotionVectorColor();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_XRMotionVectorDepth() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_XRMotionVectorDepth();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_XRMotionVectorMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_XRMotionVectorMaterial();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_xrMotionVectorColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_xrMotionVectorColor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_xrMotionVectorDepth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_xrMotionVectorDepth();

  constexpr void __cordl_internal_set_m_LastFrameIndex(int32_t value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* value);

  constexpr void __cordl_internal_set_m_PreviousViewProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_ViewProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_XRMotionVectorColor(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_XRMotionVectorDepth(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_XRMotionVectorMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_xrMotionVectorColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_xrMotionVectorDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66f0d10, size 0x250, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* xrMotionVector);

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_k_MotionOnlyShaderTagId();

  static inline void setStaticF_k_MotionOnlyShaderTagId(::UnityEngine::Rendering::ShaderTagId value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDepthMotionPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDepthMotionPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDepthMotionPass(XRDepthMotionPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDepthMotionPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDepthMotionPass(XRDepthMotionPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12864 };

  /// @brief Field k_XRViewCount offset 0xffffffff size 0x4
  static constexpr int32_t k_XRViewCount{ static_cast<int32_t>(0x2) };

  /// @brief Field m_PassData, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* ___m_PassData;

  /// @brief Field m_XRMotionVectorColor, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_XRMotionVectorColor;

  /// @brief Field xrMotionVectorColor, offset: 0xc8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___xrMotionVectorColor;

  /// @brief Field m_XRMotionVectorDepth, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_XRMotionVectorDepth;

  /// @brief Field xrMotionVectorDepth, offset: 0xe0, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___xrMotionVectorDepth;

  /// @brief Field m_ViewProjection, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_ViewProjection;

  /// @brief Field m_PreviousViewProjection, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_PreviousViewProjection;

  /// @brief Field m_LastFrameIndex, offset: 0x100, size: 0x4, def value: None
  int32_t ___m_LastFrameIndex;

  /// @brief Field m_XRMotionVectorMaterial, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_XRMotionVectorMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass, ___m_PassData) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass, ___m_XRMotionVectorColor) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass, ___xrMotionVectorColor) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass, ___m_XRMotionVectorDepth) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass, ___xrMotionVectorDepth) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass, ___m_ViewProjection) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass, ___m_PreviousViewProjection) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass, ___m_LastFrameIndex) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRDepthMotionPass, ___m_XRMotionVectorMaterial) == 0x108, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRDepthMotionPass, 0x110>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::XRDepthMotionPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRDepthMotionPass*, "UnityEngine.Rendering.Universal", "XRDepthMotionPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*, "UnityEngine.Rendering.Universal", "XRDepthMotionPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0*, "UnityEngine.Rendering.Universal", "XRDepthMotionPass/<>c__DisplayClass17_0");

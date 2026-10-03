#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/XROcclusionMeshPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
CORDL_MODULE_EXPORT(XROcclusionMeshPass)
namespace UnityEngine::Experimental::Rendering {
class XRPass;
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
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class XROcclusionMeshPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class XROcclusionMeshPass___c__DisplayClass5_0;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class XROcclusionMeshPass;
}
namespace UnityEngine::Rendering::Universal {
class XROcclusionMeshPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class XROcclusionMeshPass___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::XROcclusionMeshPass*);
MARK_REF_T(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::XROcclusionMeshPass*, "UnityEngine.Rendering.Universal", "XROcclusionMeshPass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*, "UnityEngine.Rendering.Universal", "XROcclusionMeshPass/PassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0*, "UnityEngine.Rendering.Universal", "XROcclusionMeshPass/<>c__DisplayClass5_0");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.XROcclusionMeshPass/PassData
class CORDL_TYPE XROcclusionMeshPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraColorAttachment, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_cameraColorAttachment,
                      put = __cordl_internal_set_cameraColorAttachment)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraColorAttachment;

  /// @brief Field isActiveTargetBackBuffer, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_isActiveTargetBackBuffer, put = __cordl_internal_set_isActiveTargetBackBuffer)) bool isActiveTargetBackBuffer;

  /// @brief Field shouldYFlip, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldYFlip, put = __cordl_internal_set_shouldYFlip)) bool shouldYFlip;

  /// @brief Field xr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_xr, put = __cordl_internal_set_xr)) ::UnityEngine::Experimental::Rendering::XRPass* xr;

  static inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_cameraColorAttachment() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_cameraColorAttachment();

  constexpr bool const& __cordl_internal_get_isActiveTargetBackBuffer() const;

  constexpr bool& __cordl_internal_get_isActiveTargetBackBuffer();

  constexpr bool const& __cordl_internal_get_shouldYFlip() const;

  constexpr bool& __cordl_internal_get_shouldYFlip();

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_xr() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_xr();

  constexpr void __cordl_internal_set_cameraColorAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_isActiveTargetBackBuffer(bool value);

  constexpr void __cordl_internal_set_shouldYFlip(bool value);

  constexpr void __cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value);

  /// @brief Method .ctor, addr 0x6ca5b50, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XROcclusionMeshPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMeshPass_PassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XROcclusionMeshPass_PassData(XROcclusionMeshPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMeshPass_PassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XROcclusionMeshPass_PassData(XROcclusionMeshPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12965 };

  /// @brief Field xr, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ___xr;

  /// @brief Field isActiveTargetBackBuffer, offset: 0x18, size: 0x1, def value: None
  bool ___isActiveTargetBackBuffer;

  /// @brief Field shouldYFlip, offset: 0x19, size: 0x1, def value: None
  bool ___shouldYFlip;

  /// @brief Field cameraColorAttachment, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___cameraColorAttachment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData, ___xr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData, ___isActiveTargetBackBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData, ___shouldYFlip) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData, ___cameraColorAttachment) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.XROcclusionMeshPass/<>c__DisplayClass5_0
class CORDL_TYPE XROcclusionMeshPass___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field passData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_passData, put = __cordl_internal_set_passData)) ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* passData;

  static inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0* New_ctor();

  /// @brief Method <Render>b__0, addr 0x6ca5b54, size 0xa0, virtual false, abstract: false, final false
  inline void _Render_b__0(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* const& __cordl_internal_get_passData() const;

  constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*& __cordl_internal_get_passData();

  constexpr void __cordl_internal_set_passData(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* value);

  /// @brief Method .ctor, addr 0x6ca5ab8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XROcclusionMeshPass___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMeshPass___c__DisplayClass5_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XROcclusionMeshPass___c__DisplayClass5_0(XROcclusionMeshPass___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMeshPass___c__DisplayClass5_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XROcclusionMeshPass___c__DisplayClass5_0(XROcclusionMeshPass___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12966 };

  /// @brief Field passData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* ___passData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0, ___passData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.XROcclusionMeshPass
class CORDL_TYPE XROcclusionMeshPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData;

  using __c__DisplayClass5_0 = ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0;

  /// @brief Field m_IsActiveTargetBackBuffer, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsActiveTargetBackBuffer, put = __cordl_internal_set_m_IsActiveTargetBackBuffer)) bool m_IsActiveTargetBackBuffer;

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method Execute, addr 0x6ca5338, size 0x4, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x6ca53dc, size 0x8c, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* data);

  static inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method Render, addr 0x6ca5468, size 0x650, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> cameraColorAttachment,
                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> cameraDepthAttachment);

  constexpr bool const& __cordl_internal_get_m_IsActiveTargetBackBuffer() const;

  constexpr bool& __cordl_internal_get_m_IsActiveTargetBackBuffer();

  constexpr void __cordl_internal_set_m_IsActiveTargetBackBuffer(bool value);

  /// @brief Method .ctor, addr 0x6ca533c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XROcclusionMeshPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMeshPass", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XROcclusionMeshPass(XROcclusionMeshPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMeshPass", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XROcclusionMeshPass(XROcclusionMeshPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12967 };

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Field m_IsActiveTargetBackBuffer, offset: 0x5c, size: 0x1, def value: None
  bool ___m_IsActiveTargetBackBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass, ___m_IsActiveTargetBackBuffer) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass) == 0x60, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal

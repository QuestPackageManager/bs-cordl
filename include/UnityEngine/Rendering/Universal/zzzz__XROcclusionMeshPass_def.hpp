#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/XROcclusionMeshPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class XROcclusionMeshPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class XROcclusionMeshPass___c;
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
class XROcclusionMeshPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::XROcclusionMeshPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.XROcclusionMeshPass/PassData
class CORDL_TYPE XROcclusionMeshPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraColorAttachment, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_cameraColorAttachment,
                      put = __cordl_internal_set_cameraColorAttachment)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraColorAttachment;

  /// @brief Field cameraDepthAttachment, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_cameraDepthAttachment,
                      put = __cordl_internal_set_cameraDepthAttachment)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraDepthAttachment;

  /// @brief Field isActiveTargetBackBuffer, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isActiveTargetBackBuffer, put = __cordl_internal_set_isActiveTargetBackBuffer)) bool isActiveTargetBackBuffer;

  /// @brief Field xr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_xr, put = __cordl_internal_set_xr)) ::UnityEngine::Experimental::Rendering::XRPass* xr;

  static inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_cameraColorAttachment() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_cameraColorAttachment();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_cameraDepthAttachment() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_cameraDepthAttachment();

  constexpr bool const& __cordl_internal_get_isActiveTargetBackBuffer() const;

  constexpr bool& __cordl_internal_get_isActiveTargetBackBuffer();

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_xr() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_xr();

  constexpr void __cordl_internal_set_cameraColorAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_cameraDepthAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_isActiveTargetBackBuffer(bool value);

  constexpr void __cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value);

  /// @brief Method .ctor, addr 0x668a92c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XROcclusionMeshPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMeshPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XROcclusionMeshPass_PassData(XROcclusionMeshPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMeshPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XROcclusionMeshPass_PassData(XROcclusionMeshPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12861 };

  /// @brief Field xr, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ___xr;

  /// @brief Field cameraColorAttachment, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___cameraColorAttachment;

  /// @brief Field cameraDepthAttachment, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___cameraDepthAttachment;

  /// @brief Field isActiveTargetBackBuffer, offset: 0x38, size: 0x1, def value: None
  bool ___isActiveTargetBackBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData, ___xr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData, ___cameraColorAttachment) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData, ___cameraDepthAttachment) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData, ___isActiveTargetBackBuffer) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.XROcclusionMeshPass/<>c
class CORDL_TYPE XROcclusionMeshPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0,
                      put = setStaticF___9__6_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__6_0;

  static inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c* New_ctor();

  /// @brief Method <Render>b__6_0, addr 0x668b16c, size 0x8, virtual false, abstract: false, final false
  inline void _Render_b__6_0(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x668b168, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__6_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c* value);

  static inline void setStaticF___9__6_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XROcclusionMeshPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMeshPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XROcclusionMeshPass___c(XROcclusionMeshPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMeshPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XROcclusionMeshPass___c(XROcclusionMeshPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12862 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.XROcclusionMeshPass
class CORDL_TYPE XROcclusionMeshPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c;

  /// @brief Field m_IsActiveTargetBackBuffer, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsActiveTargetBackBuffer, put = __cordl_internal_set_m_IsActiveTargetBackBuffer)) bool m_IsActiveTargetBackBuffer;

  /// @brief Field m_PassData, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* m_PassData;

  /// @brief Method Execute, addr 0x668a9c4, size 0xb0, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x668a930, size 0x94, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* data);

  static inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method Render, addr 0x668aa74, size 0x6a0, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> cameraColorAttachment,
                     ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> cameraDepthAttachment);

  constexpr bool const& __cordl_internal_get_m_IsActiveTargetBackBuffer() const;

  constexpr bool& __cordl_internal_get_m_IsActiveTargetBackBuffer();

  constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr void __cordl_internal_set_m_IsActiveTargetBackBuffer(bool value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* value);

  /// @brief Method .ctor, addr 0x668a83c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XROcclusionMeshPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMeshPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XROcclusionMeshPass(XROcclusionMeshPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMeshPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XROcclusionMeshPass(XROcclusionMeshPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12863 };

  /// @brief Field m_PassData, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* ___m_PassData;

  /// @brief Field m_IsActiveTargetBackBuffer, offset: 0xc0, size: 0x1, def value: None
  bool ___m_IsActiveTargetBackBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass, ___m_PassData) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XROcclusionMeshPass, ___m_IsActiveTargetBackBuffer) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XROcclusionMeshPass, 0xc8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::XROcclusionMeshPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XROcclusionMeshPass*, "UnityEngine.Rendering.Universal", "XROcclusionMeshPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*, "UnityEngine.Rendering.Universal", "XROcclusionMeshPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c*, "UnityEngine.Rendering.Universal", "XROcclusionMeshPass/<>c");

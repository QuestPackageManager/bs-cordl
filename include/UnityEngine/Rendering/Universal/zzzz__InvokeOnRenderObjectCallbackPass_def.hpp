#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/InvokeOnRenderObjectCallbackPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
CORDL_MODULE_EXPORT(InvokeOnRenderObjectCallbackPass)
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
namespace UnityEngine::Rendering::Universal {
class InvokeOnRenderObjectCallbackPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class InvokeOnRenderObjectCallbackPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class InvokeOnRenderObjectCallbackPass;
}
namespace UnityEngine::Rendering::Universal {
class InvokeOnRenderObjectCallbackPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class InvokeOnRenderObjectCallbackPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.InvokeOnRenderObjectCallbackPass/PassData
class CORDL_TYPE InvokeOnRenderObjectCallbackPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorTarget, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_colorTarget, put = __cordl_internal_set_colorTarget)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorTarget;

  /// @brief Field depthTarget, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_depthTarget, put = __cordl_internal_set_depthTarget)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget;

  static inline ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_colorTarget() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_colorTarget();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depthTarget() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depthTarget();

  constexpr void __cordl_internal_set_colorTarget(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_depthTarget(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66cece0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokeOnRenderObjectCallbackPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokeOnRenderObjectCallbackPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokeOnRenderObjectCallbackPass_PassData(InvokeOnRenderObjectCallbackPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokeOnRenderObjectCallbackPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokeOnRenderObjectCallbackPass_PassData(InvokeOnRenderObjectCallbackPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12814 };

  /// @brief Field colorTarget, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___colorTarget;

  /// @brief Field depthTarget, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depthTarget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData, ___colorTarget) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData, ___depthTarget) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.InvokeOnRenderObjectCallbackPass/<>c
class CORDL_TYPE InvokeOnRenderObjectCallbackPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0,
                      put = setStaticF___9__3_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__3_0;

  static inline ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c* New_ctor();

  /// @brief Method <Render>b__3_0, addr 0x66ced3c, size 0x20, virtual false, abstract: false, final false
  inline void _Render_b__3_0(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method .ctor, addr 0x66ced38, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c* value);

  static inline void setStaticF___9__3_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokeOnRenderObjectCallbackPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokeOnRenderObjectCallbackPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokeOnRenderObjectCallbackPass___c(InvokeOnRenderObjectCallbackPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokeOnRenderObjectCallbackPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokeOnRenderObjectCallbackPass___c(InvokeOnRenderObjectCallbackPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12815 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.InvokeOnRenderObjectCallbackPass
class CORDL_TYPE InvokeOnRenderObjectCallbackPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c;

  /// @brief Method Execute, addr 0x66ce838, size 0x38, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method Render, addr 0x66ce870, size 0x470, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorTarget,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget);

  /// @brief Method .ctor, addr 0x66ce76c, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokeOnRenderObjectCallbackPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokeOnRenderObjectCallbackPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokeOnRenderObjectCallbackPass(InvokeOnRenderObjectCallbackPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokeOnRenderObjectCallbackPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokeOnRenderObjectCallbackPass(InvokeOnRenderObjectCallbackPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12816 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*, "UnityEngine.Rendering.Universal", "InvokeOnRenderObjectCallbackPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*, "UnityEngine.Rendering.Universal", "InvokeOnRenderObjectCallbackPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c*, "UnityEngine.Rendering.Universal", "InvokeOnRenderObjectCallbackPass/<>c");

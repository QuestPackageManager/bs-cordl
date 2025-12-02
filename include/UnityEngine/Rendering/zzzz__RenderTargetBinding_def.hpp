#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderTargetBinding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RenderTargetBinding)
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetFlags;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderTargetBinding;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderTargetBinding);
// Dependencies UnityEngine.Rendering.RenderBufferLoadAction, UnityEngine.Rendering.RenderBufferStoreAction, UnityEngine.Rendering.RenderTargetFlags, UnityEngine.Rendering.RenderTargetIdentifier
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderTargetBinding
struct CORDL_TYPE RenderTargetBinding {
public:
  // Declarations
  __declspec(property(get = get_colorLoadActions)) ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction, ::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*> colorLoadActions;

  __declspec(property(get = get_colorRenderTargets)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorRenderTargets;

  __declspec(property(get = get_colorStoreActions)) ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> colorStoreActions;

  __declspec(property(get = get_depthLoadAction)) ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction;

  __declspec(property(get = get_depthRenderTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier depthRenderTarget;

  __declspec(property(get = get_depthStoreAction)) ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction;

  __declspec(property(get = get_flags)) ::UnityEngine::Rendering::RenderTargetFlags flags;

  /// @brief Method get_colorLoadActions, addr 0x68d5c20, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction, ::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*> get_colorLoadActions();

  /// @brief Method get_colorRenderTargets, addr 0x68d5c00, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> get_colorRenderTargets();

  /// @brief Method get_colorStoreActions, addr 0x68d5c28, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> get_colorStoreActions();

  /// @brief Method get_depthLoadAction, addr 0x68d5c30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderBufferLoadAction get_depthLoadAction();

  /// @brief Method get_depthRenderTarget, addr 0x68d5c08, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_depthRenderTarget();

  /// @brief Method get_depthStoreAction, addr 0x68d5c38, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderBufferStoreAction get_depthStoreAction();

  /// @brief Method get_flags, addr 0x68d5c40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetFlags get_flags();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTargetBinding();

  // Ctor Parameters [CppParam { name: "m_ColorRenderTargets", ty: "::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier,::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>", modifiers:
  // "", def_value: None }, CppParam { name: "m_DepthRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "m_ColorLoadActions", ty:
  // "::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction,::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*>", modifiers: "", def_value: None }, CppParam { name: "m_ColorStoreActions",
  // ty: "::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction,::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>", modifiers: "", def_value: None }, CppParam { name:
  // "m_DepthLoadAction", ty: "::UnityEngine::Rendering::RenderBufferLoadAction", modifiers: "", def_value: None }, CppParam { name: "m_DepthStoreAction", ty:
  // "::UnityEngine::Rendering::RenderBufferStoreAction", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::Rendering::RenderTargetFlags", modifiers: "", def_value:
  // None }]
  constexpr RenderTargetBinding(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> m_ColorRenderTargets,
                                ::UnityEngine::Rendering::RenderTargetIdentifier m_DepthRenderTarget,
                                ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction, ::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*> m_ColorLoadActions,
                                ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> m_ColorStoreActions,
                                ::UnityEngine::Rendering::RenderBufferLoadAction m_DepthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction m_DepthStoreAction,
                                ::UnityEngine::Rendering::RenderTargetFlags m_Flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10709 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field m_ColorRenderTargets, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> m_ColorRenderTargets;

  /// @brief Field m_DepthRenderTarget, offset: 0x8, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier m_DepthRenderTarget;

  /// @brief Field m_ColorLoadActions, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction, ::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*> m_ColorLoadActions;

  /// @brief Field m_ColorStoreActions, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> m_ColorStoreActions;

  /// @brief Field m_DepthLoadAction, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferLoadAction m_DepthLoadAction;

  /// @brief Field m_DepthStoreAction, offset: 0x44, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferStoreAction m_DepthStoreAction;

  /// @brief Field m_Flags, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderTargetFlags m_Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBinding, m_ColorRenderTargets) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBinding, m_DepthRenderTarget) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBinding, m_ColorLoadActions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBinding, m_ColorStoreActions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBinding, m_DepthLoadAction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBinding, m_DepthStoreAction) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetBinding, m_Flags) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderTargetBinding, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderTargetBinding, "UnityEngine.Rendering", "RenderTargetBinding");

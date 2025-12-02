#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AttachmentDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttachmentDescriptor)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct AttachmentDescriptor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::AttachmentDescriptor);
// Dependencies UnityEngine.Color, UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Rendering.RenderBufferLoadAction, UnityEngine.Rendering.RenderBufferStoreAction,
// UnityEngine.Rendering.RenderTargetIdentifier
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.AttachmentDescriptor
struct CORDL_TYPE AttachmentDescriptor {
public:
  // Declarations
  __declspec(property(put = set_clearColor)) ::UnityEngine::Color clearColor;

  __declspec(property(put = set_clearDepth)) float_t clearDepth;

  __declspec(property(put = set_clearStencil)) uint32_t clearStencil;

  __declspec(property(get = get_graphicsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat;

  __declspec(property(put = set_loadAction)) ::UnityEngine::Rendering::RenderBufferLoadAction loadAction;

  __declspec(property(get = get_loadStoreTarget, put = set_loadStoreTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier loadStoreTarget;

  __declspec(property(put = set_resolveTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier resolveTarget;

  __declspec(property(put = set_storeAction)) ::UnityEngine::Rendering::RenderBufferStoreAction storeAction;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::AttachmentDescriptor>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::AttachmentDescriptor>*();

  /// @brief Method ConfigureClear, addr 0x68e9618, size 0x1c, virtual false, abstract: false, final false
  inline void ConfigureClear(::UnityEngine::Color clearColor, float_t clearDepth, uint32_t clearStencil);

  /// @brief Method ConfigureResolveTarget, addr 0x68e95ec, size 0x2c, virtual false, abstract: false, final false
  inline void ConfigureResolveTarget(::UnityEngine::Rendering::RenderTargetIdentifier target);

  /// @brief Method ConfigureTarget, addr 0x68e95a8, size 0x44, virtual false, abstract: false, final false
  inline void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier target, bool loadExistingContents, bool storeResults);

  /// @brief Method Equals, addr 0x68e98a0, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x68e9698, size 0x208, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::AttachmentDescriptor other);

  /// @brief Method GetHashCode, addr 0x68e9934, size 0xe8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x68e9634, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method get_graphicsFormat, addr 0x68e9544, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();

  /// @brief Method get_loadStoreTarget, addr 0x68e954c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_loadStoreTarget();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::AttachmentDescriptor>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::AttachmentDescriptor>* i___System__IEquatable_1___UnityEngine__Rendering__AttachmentDescriptor_();

  /// @brief Method op_Inequality, addr 0x68e9a1c, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::AttachmentDescriptor left, ::UnityEngine::Rendering::AttachmentDescriptor right);

  /// @brief Method set_clearColor, addr 0x68e958c, size 0xc, virtual false, abstract: false, final false
  inline void set_clearColor(::UnityEngine::Color value);

  /// @brief Method set_clearDepth, addr 0x68e9598, size 0x8, virtual false, abstract: false, final false
  inline void set_clearDepth(float_t value);

  /// @brief Method set_clearStencil, addr 0x68e95a0, size 0x8, virtual false, abstract: false, final false
  inline void set_clearStencil(uint32_t value);

  /// @brief Method set_loadAction, addr 0x68e9534, size 0x8, virtual false, abstract: false, final false
  inline void set_loadAction(::UnityEngine::Rendering::RenderBufferLoadAction value);

  /// @brief Method set_loadStoreTarget, addr 0x68e9560, size 0x14, virtual false, abstract: false, final false
  inline void set_loadStoreTarget(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method set_resolveTarget, addr 0x68e9574, size 0x18, virtual false, abstract: false, final false
  inline void set_resolveTarget(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method set_storeAction, addr 0x68e953c, size 0x8, virtual false, abstract: false, final false
  inline void set_storeAction(::UnityEngine::Rendering::RenderBufferStoreAction value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AttachmentDescriptor();

  // Ctor Parameters [CppParam { name: "m_LoadAction", ty: "::UnityEngine::Rendering::RenderBufferLoadAction", modifiers: "", def_value: None }, CppParam { name: "m_StoreAction", ty:
  // "::UnityEngine::Rendering::RenderBufferStoreAction", modifiers: "", def_value: None }, CppParam { name: "m_Format", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "",
  // def_value: None }, CppParam { name: "m_LoadStoreTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "m_ResolveTarget", ty:
  // "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "m_ClearColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam {
  // name: "m_ClearDepth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ClearStencil", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr AttachmentDescriptor(::UnityEngine::Rendering::RenderBufferLoadAction m_LoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction m_StoreAction,
                                 ::UnityEngine::Experimental::Rendering::GraphicsFormat m_Format, ::UnityEngine::Rendering::RenderTargetIdentifier m_LoadStoreTarget,
                                 ::UnityEngine::Rendering::RenderTargetIdentifier m_ResolveTarget, ::UnityEngine::Color m_ClearColor, float_t m_ClearDepth, uint32_t m_ClearStencil) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10759 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field m_LoadAction, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferLoadAction m_LoadAction;

  /// @brief Field m_StoreAction, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferStoreAction m_StoreAction;

  /// @brief Field m_Format, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat m_Format;

  /// @brief Field m_LoadStoreTarget, offset: 0x10, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier m_LoadStoreTarget;

  /// @brief Field m_ResolveTarget, offset: 0x38, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier m_ResolveTarget;

  /// @brief Field m_ClearColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color m_ClearColor;

  /// @brief Field m_ClearDepth, offset: 0x70, size: 0x4, def value: None
  float_t m_ClearDepth;

  /// @brief Field m_ClearStencil, offset: 0x74, size: 0x4, def value: None
  uint32_t m_ClearStencil;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::AttachmentDescriptor, m_LoadAction) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentDescriptor, m_StoreAction) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentDescriptor, m_Format) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentDescriptor, m_LoadStoreTarget) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentDescriptor, m_ResolveTarget) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentDescriptor, m_ClearColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentDescriptor, m_ClearDepth) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentDescriptor, m_ClearStencil) == 0x74, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AttachmentDescriptor, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AttachmentDescriptor, "UnityEngine.Rendering", "AttachmentDescriptor");

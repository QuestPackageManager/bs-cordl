#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TextureHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureHandle)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::TextureHandle);
// Dependencies UnityEngine.Rendering.RenderGraphModule.ResourceHandle
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.TextureHandle
struct CORDL_TYPE TextureHandle {
public:
  // Declarations
  /// @brief Field s_NullHandle, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_NullHandle, put = setStaticF_s_NullHandle)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle s_NullHandle;

  /// @brief Method GetDescriptor, addr 0x66336c0, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc GetDescriptor(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method IsBuiltin, addr 0x66336b8, size 0x8, virtual false, abstract: false, final false
  inline bool IsBuiltin();

  /// @brief Method IsValid, addr 0x66335d4, size 0xe4, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method .ctor, addr 0x6632efc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> h);

  /// @brief Method .ctor, addr 0x662fe98, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(int32_t handle, bool shared, bool builtin);

  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle getStaticF_s_NullHandle();

  /// @brief Method get_nullHandle, addr 0x6632ea0, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_nullHandle();

  /// @brief Method op_Implicit, addr 0x6633438, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* op_Implicit___UnityEngine__Rendering__RTHandle_(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method op_Implicit, addr 0x6632f14, size 0x1e0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method op_Implicit, addr 0x6633294, size 0x1a4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> op_Implicit___UnityW___UnityEngine__RenderTexture_(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method op_Implicit, addr 0x66330f4, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> op_Implicit___UnityW___UnityEngine__Texture_(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  static inline void setStaticF_s_NullHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureHandle();

  // Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: None }, CppParam { name: "builtin", ty: "bool", modifiers:
  // "", def_value: None }]
  constexpr TextureHandle(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle, bool builtin) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12437 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field handle, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle;

  /// @brief Field builtin, offset: 0xc, size: 0x1, def value: None
  bool builtin;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureHandle, handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureHandle, builtin) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::TextureHandle, "UnityEngine.Rendering.RenderGraphModule", "TextureHandle");

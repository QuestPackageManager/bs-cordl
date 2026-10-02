#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IRenderAttachmentRenderGraphBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IRenderAttachmentRenderGraphBuilder)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct AccessFlags;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IBaseRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderAttachmentRenderGraphBuilder;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*, "UnityEngine.Rendering.RenderGraphModule", "IRenderAttachmentRenderGraphBuilder");
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.IRenderAttachmentRenderGraphBuilder
class CORDL_TYPE IRenderAttachmentRenderGraphBuilder {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*() noexcept;

  /// @brief Method SetRandomAccessAttachment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle SetRandomAccessAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index,
                                                                                              ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method SetRenderAttachment, addr 0x6c02be0, size 0xd4, virtual true, abstract: false, final false
  inline void SetRenderAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method SetRenderAttachment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                  int32_t depthSlice);

  /// @brief Method SetRenderAttachmentDepth, addr 0x6c02cb4, size 0xcc, virtual true, abstract: false, final false
  inline void SetRenderAttachmentDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method SetRenderAttachmentDepth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderAttachmentDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                       int32_t depthSlice);

  /// @brief Method UseBufferRandomAccess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UseBufferRandomAccess(::UnityEngine::Rendering::RenderGraphModule::BufferHandle tex, int32_t index,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseBufferRandomAccess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UseBufferRandomAccess(::UnityEngine::Rendering::RenderGraphModule::BufferHandle tex, int32_t index, bool preserveCounterValue,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IBaseRenderGraphBuilder() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IRenderAttachmentRenderGraphBuilder", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRenderAttachmentRenderGraphBuilder(IRenderAttachmentRenderGraphBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9313 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule

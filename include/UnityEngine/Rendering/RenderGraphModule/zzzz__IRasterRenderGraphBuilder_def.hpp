#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IRasterRenderGraphBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IRasterRenderGraphBuilder)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct AccessFlags;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IBaseRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class IRasterRenderGraphBuilder;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.IRasterRenderGraphBuilder
class CORDL_TYPE IRasterRenderGraphBuilder {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*() noexcept;

  /// @brief Method SetInputAttachment, addr 0x6619e40, size 0xd4, virtual true, abstract: false, final false
  inline void SetInputAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method SetInputAttachment, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetInputAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                 int32_t depthSlice);

  /// @brief Method SetRandomAccessAttachment, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle SetRandomAccessAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index,
                                                                                              ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method SetRenderAttachment, addr 0x6619d6c, size 0xd4, virtual true, abstract: false, final false
  inline void SetRenderAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method SetRenderAttachment, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetRenderAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                  int32_t depthSlice);

  /// @brief Method SetRenderAttachmentDepth, addr 0x6619f14, size 0xcc, virtual true, abstract: false, final false
  inline void SetRenderAttachmentDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method SetRenderAttachmentDepth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetRenderAttachmentDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                       int32_t depthSlice);

  /// @brief Method SetRenderFunc, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename PassData>
  inline void SetRenderFunc(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* renderFunc);

  /// @brief Method UseBufferRandomAccess, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UseBufferRandomAccess(::UnityEngine::Rendering::RenderGraphModule::BufferHandle tex, int32_t index,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseBufferRandomAccess, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UseBufferRandomAccess(::UnityEngine::Rendering::RenderGraphModule::BufferHandle tex, int32_t index, bool preserveCounterValue,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IBaseRenderGraphBuilder() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IRasterRenderGraphBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRasterRenderGraphBuilder(IRasterRenderGraphBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12360 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*, "UnityEngine.Rendering.RenderGraphModule", "IRasterRenderGraphBuilder");

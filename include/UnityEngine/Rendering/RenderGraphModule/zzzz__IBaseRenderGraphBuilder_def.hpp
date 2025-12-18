#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IBaseRenderGraphBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IBaseRenderGraphBuilder)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct AccessFlags;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class IBaseRenderGraphBuilder;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder
class CORDL_TYPE IBaseRenderGraphBuilder {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AllowGlobalStateModification, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AllowGlobalStateModification(bool value);

  /// @brief Method AllowPassCulling, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AllowPassCulling(bool value);

  /// @brief Method CreateTransientBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateTransientBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> computebuffer);

  /// @brief Method CreateTransientBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateTransientBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc);

  /// @brief Method CreateTransientTexture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTransientTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc);

  /// @brief Method CreateTransientTexture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTransientTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture);

  /// @brief Method EnableAsyncCompute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EnableAsyncCompute(bool value);

  /// @brief Method EnableFoveatedRasterization, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EnableFoveatedRasterization(bool value);

  /// @brief Method SetGlobalTextureAfterPass, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetGlobalTextureAfterPass(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input, int32_t propertyId);

  /// @brief Method UseAllGlobalTextures, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UseAllGlobalTextures(bool enable);

  /// @brief Method UseBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UseBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> input,
                                                                             ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseGlobalTexture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UseGlobalTexture(int32_t propertyId, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseRendererList, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UseRendererList(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> input);

  /// @brief Method UseTexture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UseTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IBaseRenderGraphBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBaseRenderGraphBuilder(IBaseRenderGraphBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12357 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*, "UnityEngine.Rendering.RenderGraphModule", "IBaseRenderGraphBuilder");

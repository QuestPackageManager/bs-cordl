#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphBuilder)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct DepthAccess;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RayTracingAccelerationStructureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphBuilder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphBuilder
struct CORDL_TYPE RenderGraphBuilder {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AllowPassCulling, addr 0x6625f68, size 0x1c, virtual false, abstract: false, final false
  inline void AllowPassCulling(bool value);

  /// @brief Method AllowRendererListCulling, addr 0x6625fe0, size 0x1c, virtual false, abstract: false, final false
  inline void AllowRendererListCulling(bool value);

  /// @brief Method CheckResource, addr 0x66260d0, size 0x300, virtual false, abstract: false, final false
  inline void CheckResource(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res, bool checkTransientReadWrite);

  /// @brief Method CreateTransientBuffer, addr 0x6625c08, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateTransientBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc);

  /// @brief Method CreateTransientBuffer, addr 0x6625d40, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateTransientBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> graphicsbuffer);

  /// @brief Method CreateTransientTexture, addr 0x6625714, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTransientTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc);

  /// @brief Method CreateTransientTexture, addr 0x662584c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTransientTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture);

  /// @brief Method DependsOn, addr 0x6625ffc, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle DependsOn(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> input);

  /// @brief Method Dispose, addr 0x6625fa0, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6625fa8, size 0x38, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnableAsyncCompute, addr 0x6625f4c, size 0x1c, virtual false, abstract: false, final false
  inline void EnableAsyncCompute(bool value);

  /// @brief Method EnableFoveatedRasterization, addr 0x6625f84, size 0x1c, virtual false, abstract: false, final false
  inline void EnableFoveatedRasterization(bool value);

  /// @brief Method GenerateDebugData, addr 0x66264e0, size 0x1c, virtual false, abstract: false, final false
  inline void GenerateDebugData(bool value);

  /// @brief Method ReadBuffer, addr 0x6625b94, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle ReadBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> input);

  /// @brief Method ReadRayTracingAccelerationStructure, addr 0x6625a9c, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle
  ReadRayTracingAccelerationStructure(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle> input);

  /// @brief Method ReadTexture, addr 0x66254d8, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ReadTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input);

  /// @brief Method ReadWriteTexture, addr 0x66256bc, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ReadWriteTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input);

  /// @brief Method SetRenderFunc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
  inline void SetRenderFunc(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>* renderFunc);

  /// @brief Method UseColorBuffer, addr 0x6624fa4, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UseColorBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input, int32_t index);

  /// @brief Method UseDepthBuffer, addr 0x6625180, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UseDepthBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input,
                                                                                   ::UnityEngine::Rendering::RenderGraphModule::DepthAccess flags);

  /// @brief Method UseRendererList, addr 0x6625ac8, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle UseRendererList(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> input);

  /// @brief Method WriteBuffer, addr 0x6625bc0, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle WriteBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> input);

  /// @brief Method WriteRayTracingAccelerationStructure, addr 0x6625a54, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle
  WriteRayTracingAccelerationStructure(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle> input);

  /// @brief Method WriteTexture, addr 0x6625494, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle WriteTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input);

  /// @brief Method .ctor, addr 0x66260c0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* renderPass, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphBuilder();

  // Ctor Parameters [CppParam { name: "m_RenderPass", ty: "::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*", modifiers: "", def_value: None }, CppParam { name: "m_Resources", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*", modifiers: "", def_value: None }, CppParam { name: "m_RenderGraph", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::RenderGraph*", modifiers: "", def_value: None }, CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: None }]
  constexpr RenderGraphBuilder(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* m_RenderPass, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources,
                               ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* m_RenderGraph, bool m_Disposed) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12393 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_RenderPass, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* m_RenderPass;

  /// @brief Field m_Resources, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources;

  /// @brief Field m_RenderGraph, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* m_RenderGraph;

  /// @brief Field m_Disposed, offset: 0x18, size: 0x1, def value: None
  bool m_Disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder, m_RenderPass) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder, m_Resources) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder, m_RenderGraph) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder, m_Disposed) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphBuilder");

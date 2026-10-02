#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/ResourceUnversionedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureUVOriginSelection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceUnversionedData)
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderGraphResource;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RayTracingAccelerationStructureDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderTargetInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class TextureResource;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct ResourceUnversionedData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler",
                    "ResourceUnversionedData");
// Dependencies UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Rendering.RenderGraphModule.TextureUVOriginSelection
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.ResourceUnversionedData
struct CORDL_TYPE ResourceUnversionedData {
public:
  // Declarations
  /// @brief Method GetName, addr 0x6c2b6e8, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW GetName(Il2CppObject* ctx, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> h);

  /// @brief Method InitializeNullResource, addr 0x6c2b808, size 0x1c, virtual false, abstract: false, final false
  inline void InitializeNullResource();

  /// @brief Method .ctor, addr 0x6c2b768, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* rll, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> _, bool isResourceShared);

  /// @brief Method .ctor, addr 0x6c2b7b8, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* rll, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureDesc> _,
                    bool isResourceShared);

  /// @brief Method .ctor, addr 0x6c2b704, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureResource* rll, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo> info,
                    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc, bool isResourceShared);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceUnversionedData();

  // Ctor Parameters [CppParam { name: "isImported", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isShared", ty: "bool", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "tag", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastUsePassID", ty: "int32_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "lastWritePassID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstUsePassID", ty: "int32_t", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "memoryLess", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "height", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "volumeDepth", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "msaaSamples", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "graphicsFormat", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "latestVersionNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "clear", ty: "bool", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "discard", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindMS", ty: "bool", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "textureUVOrigin", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection", modifiers: "", def_value: None, comment: None }]
  constexpr ResourceUnversionedData(bool isImported, bool isShared, int32_t tag, int32_t lastUsePassID, int32_t lastWritePassID, int32_t firstUsePassID, bool memoryLess, int32_t width, int32_t height,
                                    int32_t volumeDepth, int32_t msaaSamples, ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat, int32_t latestVersionNumber, bool clear,
                                    bool discard, bool bindMS, ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection textureUVOrigin) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9418 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field isImported, offset: 0x0, size: 0x1, def value: None
  bool isImported;

  /// @brief Field isShared, offset: 0x1, size: 0x1, def value: None
  bool isShared;

  /// @brief Field tag, offset: 0x4, size: 0x4, def value: None
  int32_t tag;

  /// @brief Field lastUsePassID, offset: 0x8, size: 0x4, def value: None
  int32_t lastUsePassID;

  /// @brief Field lastWritePassID, offset: 0xc, size: 0x4, def value: None
  int32_t lastWritePassID;

  /// @brief Field firstUsePassID, offset: 0x10, size: 0x4, def value: None
  int32_t firstUsePassID;

  /// @brief Field memoryLess, offset: 0x14, size: 0x1, def value: None
  bool memoryLess;

  /// @brief Field width, offset: 0x18, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x1c, size: 0x4, def value: None
  int32_t height;

  /// @brief Field volumeDepth, offset: 0x20, size: 0x4, def value: None
  int32_t volumeDepth;

  /// @brief Field msaaSamples, offset: 0x24, size: 0x4, def value: None
  int32_t msaaSamples;

  /// @brief Field graphicsFormat, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat;

  /// @brief Field latestVersionNumber, offset: 0x2c, size: 0x4, def value: None
  int32_t latestVersionNumber;

  /// @brief Field clear, offset: 0x30, size: 0x1, def value: None
  bool clear;

  /// @brief Field discard, offset: 0x31, size: 0x1, def value: None
  bool discard;

  /// @brief Field bindMS, offset: 0x32, size: 0x1, def value: None
  bool bindMS;

  /// @brief Field textureUVOrigin, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection textureUVOrigin;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, isImported) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, isShared) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, tag) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, lastUsePassID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, lastWritePassID) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, firstUsePassID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, memoryLess) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, width) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, height) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, volumeDepth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, msaaSamples) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, graphicsFormat) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, latestVersionNumber) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, clear) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, discard) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, bindMS) == 0x32, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData, textureUVOrigin) == 0x34, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData) == 0x38, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler

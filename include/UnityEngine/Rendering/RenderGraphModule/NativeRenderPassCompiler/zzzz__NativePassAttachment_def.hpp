#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassAttachment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativePassAttachment)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct NativePassAttachment;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment);
// Dependencies UnityEngine.Rendering.RenderBufferLoadAction, UnityEngine.Rendering.RenderBufferStoreAction, UnityEngine.Rendering.RenderGraphModule.ResourceHandle
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassAttachment
struct CORDL_TYPE NativePassAttachment {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativePassAttachment();

  // Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: None }, CppParam { name: "loadAction", ty:
  // "::UnityEngine::Rendering::RenderBufferLoadAction", modifiers: "", def_value: None }, CppParam { name: "storeAction", ty: "::UnityEngine::Rendering::RenderBufferStoreAction", modifiers: "",
  // def_value: None }, CppParam { name: "memoryless", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mipLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "depthSlice", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NativePassAttachment(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                 ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, bool memoryless, int32_t mipLevel, int32_t depthSlice) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12463 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field handle, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle;

  /// @brief Field loadAction, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferLoadAction loadAction;

  /// @brief Field storeAction, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferStoreAction storeAction;

  /// @brief Field memoryless, offset: 0x14, size: 0x1, def value: None
  bool memoryless;

  /// @brief Field mipLevel, offset: 0x18, size: 0x4, def value: None
  int32_t mipLevel;

  /// @brief Field depthSlice, offset: 0x1c, size: 0x4, def value: None
  int32_t depthSlice;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment, handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment, loadAction) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment, storeAction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment, memoryless) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment, mipLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment, depthSlice) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler",
                       "NativePassAttachment");

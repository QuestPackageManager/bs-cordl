#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/ResourceVersionedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceVersionedData)
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct ResourceVersionedData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.ResourceVersionedData
struct CORDL_TYPE ResourceVersionedData {
public:
  // Declarations
  /// @brief Method RegisterReadingPass, addr 0x6645e50, size 0x194, virtual false, abstract: false, final false
  inline void RegisterReadingPass(Il2CppObject* ctx, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h, int32_t passId, int32_t index);

  /// @brief Method RemoveReadingPass, addr 0x6645fe4, size 0x31c, virtual false, abstract: false, final false
  inline void RemoveReadingPass(Il2CppObject* ctx, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h, int32_t passId);

  /// @brief Method SetWritingPass, addr 0x6645e40, size 0x10, virtual false, abstract: false, final false
  inline void SetWritingPass(Il2CppObject* ctx, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h, int32_t passId);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceVersionedData();

  // Ctor Parameters [CppParam { name: "written", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "writePassId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "numReaders", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ResourceVersionedData(bool written, int32_t writePassId, int32_t numReaders) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12477 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field written, offset: 0x0, size: 0x1, def value: None
  bool written;

  /// @brief Field writePassId, offset: 0x4, size: 0x4, def value: None
  int32_t writePassId;

  /// @brief Field numReaders, offset: 0x8, size: 0x4, def value: None
  int32_t numReaders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData, written) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData, writePassId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData, numReaders) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler",
                       "ResourceVersionedData");

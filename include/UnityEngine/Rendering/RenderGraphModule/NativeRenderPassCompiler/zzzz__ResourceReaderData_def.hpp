#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/ResourceReaderData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceReaderData)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct ResourceReaderData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.ResourceReaderData
struct CORDL_TYPE ResourceReaderData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceReaderData();

  // Ctor Parameters [CppParam { name: "passId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "inputSlot", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ResourceReaderData(int32_t passId, int32_t inputSlot) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12475 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field passId, offset: 0x0, size: 0x4, def value: None
  int32_t passId;

  /// @brief Field inputSlot, offset: 0x4, size: 0x4, def value: None
  int32_t inputSlot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData, passId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData, inputSlot) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler",
                       "ResourceReaderData");

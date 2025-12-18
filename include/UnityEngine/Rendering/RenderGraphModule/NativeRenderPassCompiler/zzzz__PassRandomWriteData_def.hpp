#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassRandomWriteData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PassRandomWriteData)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassRandomWriteData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData);
// Dependencies UnityEngine.Rendering.RenderGraphModule.ResourceHandle
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassRandomWriteData
struct CORDL_TYPE PassRandomWriteData {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0x6642368, size 0x80, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PassRandomWriteData();

  // Ctor Parameters [CppParam { name: "resource", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "preserveCounterValue", ty: "bool", modifiers: "", def_value: None }]
  constexpr PassRandomWriteData(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle resource, int32_t index, bool preserveCounterValue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12464 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field resource, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle resource;

  /// @brief Field index, offset: 0xc, size: 0x4, def value: None
  int32_t index;

  /// @brief Field preserveCounterValue, offset: 0x10, size: 0x1, def value: None
  bool preserveCounterValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData, resource) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData, index) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData, preserveCounterValue) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData, 0x14>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler",
                       "PassRandomWriteData");

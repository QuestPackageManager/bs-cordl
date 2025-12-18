#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassFragmentData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__AccessFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PassFragmentData)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassFragmentData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData);
// Dependencies UnityEngine.Rendering.RenderGraphModule.AccessFlags, UnityEngine.Rendering.RenderGraphModule.ResourceHandle
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassFragmentData
struct CORDL_TYPE PassFragmentData {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0x6642240, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method SameSubResource, addr 0x66422cc, size 0x9c, virtual false, abstract: false, final false
  static inline bool SameSubResource(::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData> x,
                                     ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData> y);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PassFragmentData();

  // Ctor Parameters [CppParam { name: "resource", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: None }, CppParam { name: "accessFlags", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::AccessFlags", modifiers: "", def_value: None }, CppParam { name: "mipLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "depthSlice", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PassFragmentData(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle resource, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags, int32_t mipLevel,
                             int32_t depthSlice) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12463 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field resource, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle resource;

  /// @brief Field accessFlags, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags;

  /// @brief Field mipLevel, offset: 0x10, size: 0x4, def value: None
  int32_t mipLevel;

  /// @brief Field depthSlice, offset: 0x14, size: 0x4, def value: None
  int32_t depthSlice;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData, resource) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData, accessFlags) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData, mipLevel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData, depthSlice) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "PassFragmentData");

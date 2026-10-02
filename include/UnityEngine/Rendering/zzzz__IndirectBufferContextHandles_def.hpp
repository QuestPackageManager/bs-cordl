#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferContextHandles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(IndirectBufferContextHandles)
namespace UnityEngine::Rendering::RenderGraphModule {
class IBaseRenderGraphBuilder;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct IndirectBufferContextHandles;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::IndirectBufferContextHandles);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::IndirectBufferContextHandles, "UnityEngine.Rendering", "IndirectBufferContextHandles");
// Dependencies UnityEngine.Rendering.RenderGraphModule.BufferHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.IndirectBufferContextHandles
struct CORDL_TYPE IndirectBufferContextHandles {
public:
  // Declarations
  /// @brief Method UseForOcclusionTest, addr 0x6c661e4, size 0x274, virtual false, abstract: false, final false
  inline void UseForOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* builder);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndirectBufferContextHandles();

  // Ctor Parameters [CppParam { name: "instanceBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "instanceInfoBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "dispatchArgsBuffer", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "drawArgsBuffer", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "drawInfoBuffer", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None, comment: None }]
  constexpr IndirectBufferContextHandles(::UnityEngine::Rendering::RenderGraphModule::BufferHandle instanceBuffer, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle instanceInfoBuffer,
                                         ::UnityEngine::Rendering::RenderGraphModule::BufferHandle dispatchArgsBuffer, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle drawArgsBuffer,
                                         ::UnityEngine::Rendering::RenderGraphModule::BufferHandle drawInfoBuffer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18277 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3c };

  /// @brief Field instanceBuffer, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle instanceBuffer;

  /// @brief Field instanceInfoBuffer, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle instanceInfoBuffer;

  /// @brief Field dispatchArgsBuffer, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle dispatchArgsBuffer;

  /// @brief Field drawArgsBuffer, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle drawArgsBuffer;

  /// @brief Field drawInfoBuffer, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle drawInfoBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextHandles, instanceBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextHandles, instanceInfoBuffer) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextHandles, dispatchArgsBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextHandles, drawArgsBuffer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextHandles, drawInfoBuffer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::IndirectBufferContextHandles) == 0x3c, "Size mismatch!");

} // namespace UnityEngine::Rendering

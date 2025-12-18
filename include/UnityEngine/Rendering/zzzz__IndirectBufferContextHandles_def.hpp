#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferContextHandles.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
// Dependencies UnityEngine.Rendering.RenderGraphModule.BufferHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.IndirectBufferContextHandles
struct CORDL_TYPE IndirectBufferContextHandles {
public:
  // Declarations
  /// @brief Method UseForOcclusionTest, addr 0x6678bcc, size 0x208, virtual false, abstract: false, final false
  inline void UseForOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* builder);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndirectBufferContextHandles();

  // Ctor Parameters [CppParam { name: "instanceBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None }, CppParam { name: "instanceInfoBuffer", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None }, CppParam { name: "argsBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle",
  // modifiers: "", def_value: None }, CppParam { name: "drawInfoBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None }]
  constexpr IndirectBufferContextHandles(::UnityEngine::Rendering::RenderGraphModule::BufferHandle instanceBuffer, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle instanceInfoBuffer,
                                         ::UnityEngine::Rendering::RenderGraphModule::BufferHandle argsBuffer, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle drawInfoBuffer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17715 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field instanceBuffer, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle instanceBuffer;

  /// @brief Field instanceInfoBuffer, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle instanceInfoBuffer;

  /// @brief Field argsBuffer, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle argsBuffer;

  /// @brief Field drawInfoBuffer, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle drawInfoBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextHandles, instanceBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextHandles, instanceInfoBuffer) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextHandles, argsBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextHandles, drawInfoBuffer) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::IndirectBufferContextHandles, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IndirectBufferContextHandles, "UnityEngine.Rendering", "IndirectBufferContextHandles");

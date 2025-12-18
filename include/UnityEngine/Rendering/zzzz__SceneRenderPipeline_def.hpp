#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SceneRenderPipeline.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SceneRenderPipeline)
// Forward declare root types
namespace UnityEngine::Rendering {
class SceneRenderPipeline;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::SceneRenderPipeline);
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SceneRenderPipeline
class CORDL_TYPE SceneRenderPipeline : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::SceneRenderPipeline* New_ctor();

  /// @brief Method .ctor, addr 0x6610fd8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneRenderPipeline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneRenderPipeline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneRenderPipeline(SceneRenderPipeline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneRenderPipeline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneRenderPipeline(SceneRenderPipeline const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12288 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SceneRenderPipeline, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::SceneRenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SceneRenderPipeline*, "UnityEngine.Rendering", "SceneRenderPipeline");

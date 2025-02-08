#pragma once
// IWYU pragma private; include "UnityEngine/Animations/IAnimationWindowPreview.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnimationWindowPreview)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Animations {
class IAnimationWindowPreview;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Animations::IAnimationWindowPreview);
// Dependencies
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.IAnimationWindowPreview
class CORDL_TYPE IAnimationWindowPreview {
public:
  // Declarations
  /// @brief Method UpdatePreviewGraph, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdatePreviewGraph(::UnityEngine::Playables::PlayableGraph graph);

  // Ctor Parameters [CppParam { name: "", ty: "IAnimationWindowPreview", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAnimationWindowPreview(IAnimationWindowPreview const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16888 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Animations
NEED_NO_BOX(::UnityEngine::Animations::IAnimationWindowPreview);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::IAnimationWindowPreview*, "UnityEngine.Animations", "IAnimationWindowPreview");

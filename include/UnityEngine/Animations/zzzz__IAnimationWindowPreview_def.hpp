#pragma once
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
// Type: UnityEngine.Animations::IAnimationWindowPreview
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Animations {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14775))
// CS Name: ::UnityEngine.Animations::IAnimationWindowPreview*
class CORDL_TYPE IAnimationWindowPreview {
public:
  // Declarations
  /// @brief Method UpdatePreviewGraph, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdatePreviewGraph(::UnityEngine::Playables::PlayableGraph graph);

  // Ctor Parameters [CppParam { name: "", ty: "IAnimationWindowPreview", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAnimationWindowPreview(IAnimationWindowPreview&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAnimationWindowPreview", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAnimationWindowPreview(IAnimationWindowPreview const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Animations
NEED_NO_BOX(::UnityEngine::Animations::IAnimationWindowPreview);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::IAnimationWindowPreview*, "UnityEngine.Animations", "IAnimationWindowPreview");

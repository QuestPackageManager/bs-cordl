#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/IPropertyPreview.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPropertyPreview)
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class IPropertyPreview;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::IPropertyPreview*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::IPropertyPreview*, "UnityEngine.Timeline", "IPropertyPreview");
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.IPropertyPreview
class CORDL_TYPE IPropertyPreview {
public:
  // Declarations
  /// @brief Method GatherProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver);

  // Ctor Parameters [CppParam { name: "", ty: "IPropertyPreview", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPropertyPreview(IPropertyPreviewconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19258 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline

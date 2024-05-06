#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/IPropertyPreview.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::UnityEngine::Timeline::IPropertyPreview);
// Type: UnityEngine.Timeline::IPropertyPreview
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::IPropertyPreview*
class CORDL_TYPE IPropertyPreview {
public:
  // Declarations
  /// @brief Method GatherProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver);

  // Ctor Parameters [CppParam { name: "", ty: "IPropertyPreview", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPropertyPreview(IPropertyPreview&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPropertyPreview", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPropertyPreview(IPropertyPreview const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::IPropertyPreview);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IPropertyPreview*, "UnityEngine.Timeline", "IPropertyPreview");

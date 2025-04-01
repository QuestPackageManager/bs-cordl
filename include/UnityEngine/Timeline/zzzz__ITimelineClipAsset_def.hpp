#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITimelineClipAsset)
namespace UnityEngine::Timeline {
struct ClipCaps;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ITimelineClipAsset);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.ITimelineClipAsset
class CORDL_TYPE ITimelineClipAsset {
public:
  // Declarations
  __declspec(property(get = get_clipCaps)) ::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Method get_clipCaps, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  // Ctor Parameters [CppParam { name: "", ty: "ITimelineClipAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITimelineClipAsset(ITimelineClipAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15892 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ITimelineClipAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ITimelineClipAsset*, "UnityEngine.Timeline", "ITimelineClipAsset");

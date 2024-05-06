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
// Type: UnityEngine.Timeline::ITimelineClipAsset
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::ITimelineClipAsset*
class CORDL_TYPE ITimelineClipAsset {
public:
  // Declarations
  __declspec(property(get = get_clipCaps))::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Method get_clipCaps, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  // Ctor Parameters [CppParam { name: "", ty: "ITimelineClipAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITimelineClipAsset(ITimelineClipAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITimelineClipAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITimelineClipAsset(ITimelineClipAsset const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ITimelineClipAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ITimelineClipAsset*, "UnityEngine.Timeline", "ITimelineClipAsset");

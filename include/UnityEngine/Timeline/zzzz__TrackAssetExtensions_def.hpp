#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackAssetExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TrackAssetExtensions)
namespace UnityEngine::Timeline {
class GroupTrack;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackAssetExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TrackAssetExtensions);
// Type: UnityEngine.Timeline::TrackAssetExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::TrackAssetExtensions*
class CORDL_TYPE TrackAssetExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetGroup, addr 0x47aff44, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Timeline::GroupTrack> GetGroup(::UnityEngine::Timeline::TrackAsset* asset);

  /// @brief Method SetGroup, addr 0x47b0008, size 0x32c, virtual false, abstract: false, final false
  static inline void SetGroup(::UnityEngine::Timeline::TrackAsset* asset, ::UnityEngine::Timeline::GroupTrack* group);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackAssetExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackAssetExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackAssetExtensions(TrackAssetExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackAssetExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackAssetExtensions(TrackAssetExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15812 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackAssetExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TrackAssetExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackAssetExtensions*, "UnityEngine.Timeline", "TrackAssetExtensions");

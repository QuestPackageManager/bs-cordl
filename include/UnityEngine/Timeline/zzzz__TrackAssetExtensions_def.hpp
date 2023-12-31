#pragma once
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13897))
// CS Name: ::UnityEngine.Timeline::TrackAssetExtensions*
class CORDL_TYPE TrackAssetExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetGroup, addr 0x2c69e74, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::GroupTrack* GetGroup(::UnityEngine::Timeline::TrackAsset* asset);

  /// @brief Method SetGroup, addr 0x2c69f38, size 0x330, virtual false, abstract: false, final false
  static inline void SetGroup(::UnityEngine::Timeline::TrackAsset* asset, ::UnityEngine::Timeline::GroupTrack* group);

  // Ctor Parameters [CppParam { name: "", ty: "TrackAssetExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackAssetExtensions(TrackAssetExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackAssetExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackAssetExtensions(TrackAssetExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackAssetExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackAssetExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TrackAssetExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackAssetExtensions*, "UnityEngine.Timeline", "TrackAssetExtensions");

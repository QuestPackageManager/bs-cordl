#pragma once
// IWYU pragma private; include "GlobalNamespace/AvatarColorTrack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
CORDL_MODULE_EXPORT(AvatarColorTrack)
// Forward declare root types
namespace GlobalNamespace {
class AvatarColorTrack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarColorTrack);
// Dependencies UnityEngine.Timeline.TrackAsset
namespace GlobalNamespace {
// Is value type: false
// CS Name: AvatarColorTrack
class CORDL_TYPE AvatarColorTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  static inline ::GlobalNamespace::AvatarColorTrack* New_ctor();

  /// @brief Method .ctor, addr 0x3b42030, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarColorTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarColorTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarColorTrack(AvatarColorTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarColorTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarColorTrack(AvatarColorTrack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5195 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarColorTrack, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarColorTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarColorTrack*, "", "AvatarColorTrack");

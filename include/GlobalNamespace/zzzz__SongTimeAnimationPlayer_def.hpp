#pragma once
// IWYU pragma private; include "GlobalNamespace/SongTimeAnimationPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SongTimeAnimationPlayer)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace GlobalNamespace {
class SongTimeAnimationPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongTimeAnimationPlayer);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongTimeAnimationPlayer
class CORDL_TYPE SongTimeAnimationPlayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animationClip, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__animationClip, put = __cordl_internal_set__animationClip)) ::UnityW<::UnityEngine::AnimationClip> _animationClip;

  /// @brief Field _audioTimeSyncController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  static inline ::GlobalNamespace::SongTimeAnimationPlayer* New_ctor();

  /// @brief Method Update, addr 0x3ad7b58, size 0x44, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__animationClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__animationClip();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr void __cordl_internal_set__animationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  /// @brief Method .ctor, addr 0x3ad7b9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongTimeAnimationPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongTimeAnimationPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongTimeAnimationPlayer(SongTimeAnimationPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongTimeAnimationPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongTimeAnimationPlayer(SongTimeAnimationPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4033 };

  /// @brief Field _animationClip, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____animationClip;

  /// @brief Field _audioTimeSyncController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongTimeAnimationPlayer, ____animationClip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeAnimationPlayer, ____audioTimeSyncController) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongTimeAnimationPlayer, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongTimeAnimationPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeAnimationPlayer*, "", "SongTimeAnimationPlayer");

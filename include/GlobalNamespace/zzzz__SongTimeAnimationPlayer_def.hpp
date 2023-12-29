#pragma once
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
// Type: ::SongTimeAnimationPlayer
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5475))
// CS Name: ::SongTimeAnimationPlayer*
class CORDL_TYPE SongTimeAnimationPlayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animationClip, offset 0x18, size 0x8
  __declspec(property(get = __get__animationClip, put = __set__animationClip))::UnityEngine::AnimationClip* _animationClip;

  /// @brief Field _audioTimeSyncController, offset 0x20, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  constexpr ::UnityEngine::AnimationClip*& __get__animationClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& __get__animationClip() const;

  constexpr void __set__animationClip(::UnityEngine::AnimationClip* value);

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  /// @brief Method Update addr 0x2129914 size 0x44 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::SongTimeAnimationPlayer* New_ctor();

  /// @brief Method .ctor addr 0x2129958 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongTimeAnimationPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongTimeAnimationPlayer(SongTimeAnimationPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongTimeAnimationPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongTimeAnimationPlayer(SongTimeAnimationPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongTimeAnimationPlayer();

public:
  /// @brief Field _animationClip, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AnimationClip* ____animationClip;

  /// @brief Field _audioTimeSyncController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongTimeAnimationPlayer, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeAnimationPlayer, ____animationClip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeAnimationPlayer, ____audioTimeSyncController) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongTimeAnimationPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeAnimationPlayer*, "", "SongTimeAnimationPlayer");

#pragma once
// IWYU pragma private; include "GlobalNamespace/FadeOutSongPreviewPlayerOnSceneTransitionStart.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FadeOutSongPreviewPlayerOnSceneTransitionStart)
namespace GlobalNamespace {
class AudioPlayerBase;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
struct __GameScenesManager__SceneTransitionType;
}
// Forward declare root types
namespace GlobalNamespace {
class FadeOutSongPreviewPlayerOnSceneTransitionStart;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart);
// Type: ::FadeOutSongPreviewPlayerOnSceneTransitionStart
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FadeOutSongPreviewPlayerOnSceneTransitionStart*
class CORDL_TYPE FadeOutSongPreviewPlayerOnSceneTransitionStart : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameScenesManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _songPreviewPlayer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer)) ::UnityW<::GlobalNamespace::AudioPlayerBase> _songPreviewPlayer;

  /// @brief Method HandleGameScenesManagerTransitionDidStart, addr 0x3a7a0dc, size 0x38, virtual false, abstract: false, final false
  inline void HandleGameScenesManagerTransitionDidStart(::GlobalNamespace::__GameScenesManager__SceneTransitionType sceneTransitionType, float_t duration);

  static inline ::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart* New_ctor();

  /// @brief Method OnDestroy, addr 0x3a7a00c, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3a79f7c, size 0x90, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::AudioPlayerBase> const& __cordl_internal_get__songPreviewPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::AudioPlayerBase>& __cordl_internal_get__songPreviewPlayer();

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::AudioPlayerBase> value);

  /// @brief Method .ctor, addr 0x3a7a114, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FadeOutSongPreviewPlayerOnSceneTransitionStart();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FadeOutSongPreviewPlayerOnSceneTransitionStart", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FadeOutSongPreviewPlayerOnSceneTransitionStart(FadeOutSongPreviewPlayerOnSceneTransitionStart&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FadeOutSongPreviewPlayerOnSceneTransitionStart", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FadeOutSongPreviewPlayerOnSceneTransitionStart(FadeOutSongPreviewPlayerOnSceneTransitionStart const&) = delete;

  /// @brief Field _songPreviewPlayer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioPlayerBase> ____songPreviewPlayer;

  /// @brief Field _gameScenesManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4002 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart, ____songPreviewPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart, ____gameScenesManager) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*, "", "FadeOutSongPreviewPlayerOnSceneTransitionStart");

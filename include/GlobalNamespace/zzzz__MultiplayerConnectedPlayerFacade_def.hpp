#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerFacade.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerFacade)
namespace BeatSaber::AvatarCore {
class Avatar;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerBigAvatarAnimator;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerFacade_Factory;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerIntroAnimator;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController;
}
namespace GlobalNamespace {
class MultiplayerScoreDiffText;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerFacade;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerFacade_Factory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerFacade);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory);
// Dependencies MultiplayerPlayerStartState, Zenject.PlaceholderFactory`3<TParam1, TParam2, TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerFacade/Factory
class CORDL_TYPE MultiplayerConnectedPlayerFacade_Factory
    : public ::Zenject::PlaceholderFactory_3<::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::MultiplayerPlayerStartState, ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>> {
public:
  // Declarations
  static inline ::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory* New_ctor();

  /// @brief Method .ctor, addr 0x3bb8b68, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerFacade_Factory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerFacade_Factory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerFacade_Factory(MultiplayerConnectedPlayerFacade_Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerFacade_Factory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerFacade_Factory(MultiplayerConnectedPlayerFacade_Factory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4484 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EaseType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerFacade
class CORDL_TYPE MultiplayerConnectedPlayerFacade : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Factory = ::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory;

  /// @brief Field _beatmapObjectEventManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectEventManager,
                      put = __cordl_internal_set__beatmapObjectEventManager)) ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* _beatmapObjectEventManager;

  /// @brief Field _beatmapObjectManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _bigAvatarAnimator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bigAvatarAnimator, put = __cordl_internal_set__bigAvatarAnimator)) ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> _bigAvatarAnimator;

  /// @brief Field _bigAvatarDisappearDuration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__bigAvatarDisappearDuration, put = __cordl_internal_set__bigAvatarDisappearDuration)) float_t _bigAvatarDisappearDuration;

  /// @brief Field _bigAvatarDisappearEasing, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__bigAvatarDisappearEasing, put = __cordl_internal_set__bigAvatarDisappearEasing)) ::GlobalNamespace::EaseType _bigAvatarDisappearEasing;

  /// @brief Field _introAnimator, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__introAnimator, put = __cordl_internal_set__introAnimator)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> _introAnimator;

  /// @brief Field _outroAnimator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__outroAnimator, put = __cordl_internal_set__outroAnimator)) ::UnityW<::UnityEngine::GameObject> _outroAnimator;

  /// @brief Field _scoreDiffText, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreDiffText, put = __cordl_internal_set__scoreDiffText)) ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> _scoreDiffText;

  /// @brief Field _songTimeSyncController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__songTimeSyncController,
                      put = __cordl_internal_set__songTimeSyncController)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>
      _songTimeSyncController;

  __declspec(property(get = get_introAnimator)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> introAnimator;

  __declspec(property(get = get_outroAnimator)) ::UnityW<::UnityEngine::GameObject> outroAnimator;

  __declspec(property(get = get_scoreDiffText)) ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> scoreDiffText;

  /// @brief Method HideBigAvatar, addr 0x3bb8a78, size 0x90, virtual false, abstract: false, final false
  inline void HideBigAvatar();

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerFacade* New_ctor();

  /// @brief Method PauseSpawning, addr 0x3bb88f0, size 0xa4, virtual false, abstract: false, final false
  inline void PauseSpawning();

  /// @brief Method ResumeSpawning, addr 0x3bb8994, size 0xa4, virtual false, abstract: false, final false
  inline void ResumeSpawning();

  /// @brief Method SetSongStartSyncTime, addr 0x3bb8798, size 0x18, virtual false, abstract: false, final false
  inline void SetSongStartSyncTime(int64_t songStartSyncTime);

  /// @brief Method __ForceStopSong, addr 0x3bb8a38, size 0x34, virtual false, abstract: false, final false
  inline void __ForceStopSong();

  /// @brief Method __GetPlayerAvatar, addr 0x3bb8b08, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityW<::BeatSaber::AvatarCore::Avatar> __GetPlayerAvatar();

  constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* const& __cordl_internal_get__beatmapObjectEventManager() const;

  constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*& __cordl_internal_get__beatmapObjectEventManager();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> const& __cordl_internal_get__bigAvatarAnimator() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator>& __cordl_internal_get__bigAvatarAnimator();

  constexpr float_t const& __cordl_internal_get__bigAvatarDisappearDuration() const;

  constexpr float_t& __cordl_internal_get__bigAvatarDisappearDuration();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__bigAvatarDisappearEasing() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__bigAvatarDisappearEasing();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> const& __cordl_internal_get__introAnimator() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator>& __cordl_internal_get__introAnimator();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__outroAnimator() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__outroAnimator();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> const& __cordl_internal_get__scoreDiffText() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText>& __cordl_internal_get__scoreDiffText();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> const& __cordl_internal_get__songTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>& __cordl_internal_get__songTimeSyncController();

  constexpr void __cordl_internal_set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__bigAvatarAnimator(::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> value);

  constexpr void __cordl_internal_set__bigAvatarDisappearDuration(float_t value);

  constexpr void __cordl_internal_set__bigAvatarDisappearEasing(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__introAnimator(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> value);

  constexpr void __cordl_internal_set__outroAnimator(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__scoreDiffText(::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> value);

  constexpr void __cordl_internal_set__songTimeSyncController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> value);

  /// @brief Method .ctor, addr 0x3bb8b54, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_introAnimator, addr 0x3bb8780, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> get_introAnimator();

  /// @brief Method get_outroAnimator, addr 0x3bb8788, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_outroAnimator();

  /// @brief Method get_scoreDiffText, addr 0x3bb8790, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> get_scoreDiffText();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerFacade();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerFacade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerFacade(MultiplayerConnectedPlayerFacade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerFacade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerFacade(MultiplayerConnectedPlayerFacade const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4485 };

  /// @brief Field _outroAnimator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____outroAnimator;

  /// @brief Field _bigAvatarAnimator, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> ____bigAvatarAnimator;

  /// @brief Field _bigAvatarDisappearDuration, offset: 0x30, size: 0x4, def value: None
  float_t ____bigAvatarDisappearDuration;

  /// @brief Field _bigAvatarDisappearEasing, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____bigAvatarDisappearEasing;

  /// @brief Field _songTimeSyncController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> ____songTimeSyncController;

  /// @brief Field _introAnimator, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> ____introAnimator;

  /// @brief Field _beatmapObjectManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _scoreDiffText, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> ____scoreDiffText;

  /// @brief Field _beatmapObjectEventManager, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* ____beatmapObjectEventManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____outroAnimator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____bigAvatarAnimator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____bigAvatarDisappearDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____bigAvatarDisappearEasing) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____songTimeSyncController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____introAnimator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____beatmapObjectManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____scoreDiffText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____beatmapObjectEventManager) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerFacade, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerFacade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerFacade*, "", "MultiplayerConnectedPlayerFacade");
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory*, "", "MultiplayerConnectedPlayerFacade/Factory");

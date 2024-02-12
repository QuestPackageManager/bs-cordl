#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
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
class MultiplayerBigAvatarAnimator;
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
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerFacade__Factory;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerFacade;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerFacade__Factory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerFacade);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory);
// Type: ::MultiplayerConnectedPlayerFacade
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(16199))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4460))
// CS Name: ::MultiplayerConnectedPlayerFacade*
class CORDL_TYPE MultiplayerConnectedPlayerFacade : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Factory = ::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory;

  /// @brief Field _outroAnimator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__outroAnimator, put = __cordl_internal_set__outroAnimator))::UnityW<::UnityEngine::GameObject> _outroAnimator;

  /// @brief Field _bigAvatarAnimator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bigAvatarAnimator, put = __cordl_internal_set__bigAvatarAnimator))::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> _bigAvatarAnimator;

  /// @brief Field _bigAvatarDisappearDuration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__bigAvatarDisappearDuration, put = __cordl_internal_set__bigAvatarDisappearDuration)) float_t _bigAvatarDisappearDuration;

  /// @brief Field _bigAvatarDisappearEasing, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__bigAvatarDisappearEasing, put = __cordl_internal_set__bigAvatarDisappearEasing))::GlobalNamespace::EaseType _bigAvatarDisappearEasing;

  /// @brief Field _songTimeSyncController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__songTimeSyncController,
                      put = __cordl_internal_set__songTimeSyncController))::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> _songTimeSyncController;

  /// @brief Field _introAnimator, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__introAnimator, put = __cordl_internal_set__introAnimator))::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> _introAnimator;

  /// @brief Field _beatmapObjectManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _scoreDiffText, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreDiffText, put = __cordl_internal_set__scoreDiffText))::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> _scoreDiffText;

  /// @brief Field _beatmapObjectEventManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectEventManager,
                      put = __cordl_internal_set__beatmapObjectEventManager))::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* _beatmapObjectEventManager;

  __declspec(property(get = get_introAnimator))::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> introAnimator;

  __declspec(property(get = get_outroAnimator))::UnityW<::UnityEngine::GameObject> outroAnimator;

  __declspec(property(get = get_scoreDiffText))::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> scoreDiffText;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__outroAnimator();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__outroAnimator() const;

  constexpr void __cordl_internal_set__outroAnimator(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator>& __cordl_internal_get__bigAvatarAnimator();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> const& __cordl_internal_get__bigAvatarAnimator() const;

  constexpr void __cordl_internal_set__bigAvatarAnimator(::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> value);

  constexpr float_t& __cordl_internal_get__bigAvatarDisappearDuration();

  constexpr float_t const& __cordl_internal_get__bigAvatarDisappearDuration() const;

  constexpr void __cordl_internal_set__bigAvatarDisappearDuration(float_t value);

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__bigAvatarDisappearEasing();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__bigAvatarDisappearEasing() const;

  constexpr void __cordl_internal_set__bigAvatarDisappearEasing(::GlobalNamespace::EaseType value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>& __cordl_internal_get__songTimeSyncController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> const& __cordl_internal_get__songTimeSyncController() const;

  constexpr void __cordl_internal_set__songTimeSyncController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator>& __cordl_internal_get__introAnimator();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> const& __cordl_internal_get__introAnimator() const;

  constexpr void __cordl_internal_set__introAnimator(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText>& __cordl_internal_get__scoreDiffText();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> const& __cordl_internal_get__scoreDiffText() const;

  constexpr void __cordl_internal_set__scoreDiffText(::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> value);

  constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*& __cordl_internal_get__beatmapObjectEventManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*> const& __cordl_internal_get__beatmapObjectEventManager() const;

  constexpr void __cordl_internal_set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* value);

  /// @brief Method get_introAnimator, addr 0x238e6dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> get_introAnimator();

  /// @brief Method get_outroAnimator, addr 0x238e6e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_outroAnimator();

  /// @brief Method get_scoreDiffText, addr 0x238e6ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> get_scoreDiffText();

  /// @brief Method SetSongStartSyncTime, addr 0x238e6f4, size 0x18, virtual false, abstract: false, final false
  inline void SetSongStartSyncTime(int64_t songStartSyncTime);

  /// @brief Method PauseSpawning, addr 0x238e860, size 0xa4, virtual false, abstract: false, final false
  inline void PauseSpawning();

  /// @brief Method ResumeSpawning, addr 0x238e904, size 0xa4, virtual false, abstract: false, final false
  inline void ResumeSpawning();

  /// @brief Method __ForceStopSong, addr 0x238e9a8, size 0x34, virtual false, abstract: false, final false
  inline void __ForceStopSong();

  /// @brief Method HideBigAvatar, addr 0x238e9e8, size 0x8c, virtual false, abstract: false, final false
  inline void HideBigAvatar();

  /// @brief Method __GetPlayerAvatar, addr 0x238ec44, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityW<::BeatSaber::AvatarCore::Avatar> __GetPlayerAvatar();

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerFacade* New_ctor();

  /// @brief Method .ctor, addr 0x238ec90, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerFacade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerFacade(MultiplayerConnectedPlayerFacade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerFacade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerFacade(MultiplayerConnectedPlayerFacade const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerFacade();

public:
  /// @brief Field _outroAnimator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____outroAnimator;

  /// @brief Field _bigAvatarAnimator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> ____bigAvatarAnimator;

  /// @brief Field _bigAvatarDisappearDuration, offset: 0x28, size: 0x4, def value: None
  float_t ____bigAvatarDisappearDuration;

  /// @brief Field _bigAvatarDisappearEasing, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____bigAvatarDisappearEasing;

  /// @brief Field _songTimeSyncController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> ____songTimeSyncController;

  /// @brief Field _introAnimator, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator> ____introAnimator;

  /// @brief Field _beatmapObjectManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _scoreDiffText, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> ____scoreDiffText;

  /// @brief Field _beatmapObjectEventManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* ____beatmapObjectEventManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerFacade, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____outroAnimator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____bigAvatarAnimator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____bigAvatarDisappearDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____bigAvatarDisappearEasing) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____songTimeSyncController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____introAnimator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____beatmapObjectManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____scoreDiffText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerFacade, ____beatmapObjectEventManager) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Factory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4460)), TypeDefinitionIndex(TypeDefinitionIndex(4580)), TypeDefinitionIndex(TypeDefinitionIndex(10150)),
// TypeDefinitionIndex(TypeDefinitionIndex(12676)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10150), inst: 3474 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(4459)) CS
// Name: ::MultiplayerConnectedPlayerFacade::Factory*
class CORDL_TYPE __MultiplayerConnectedPlayerFacade__Factory
    : public ::Zenject::PlaceholderFactory_3<::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::MultiplayerPlayerStartState, ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory* New_ctor();

  /// @brief Method .ctor, addr 0x238eca4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerFacade__Factory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerConnectedPlayerFacade__Factory(__MultiplayerConnectedPlayerFacade__Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerFacade__Factory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerConnectedPlayerFacade__Factory(__MultiplayerConnectedPlayerFacade__Factory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerConnectedPlayerFacade__Factory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerFacade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerFacade*, "", "MultiplayerConnectedPlayerFacade");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory*, "", "MultiplayerConnectedPlayerFacade/Factory");

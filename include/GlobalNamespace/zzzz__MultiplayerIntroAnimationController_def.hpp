#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerIntroAnimationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerIntroAnimationController)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class MultiplayerScoreRingManager;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
class Action;
}
namespace System {
class Random;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerIntroAnimationController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerIntroAnimationController);
// Type: ::MultiplayerIntroAnimationController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 153, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerIntroAnimationController*
class CORDL_TYPE MultiplayerIntroAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bindingFinished, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__bindingFinished, put = __cordl_internal_set__bindingFinished)) bool _bindingFinished;

  /// @brief Field _endMarkerName, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__endMarkerName, put = __cordl_internal_set__endMarkerName)) ::StringW _endMarkerName;

  /// @brief Field _firstConnectedPlayerStart, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__firstConnectedPlayerStart, put = __cordl_internal_set__firstConnectedPlayerStart)) float_t _firstConnectedPlayerStart;

  /// @brief Field _introDuration, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__introDuration, put = __cordl_internal_set__introDuration)) int64_t _introDuration;

  /// @brief Field _introPlayableDirector, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__introPlayableDirector, put = __cordl_internal_set__introPlayableDirector)) ::UnityW<::UnityEngine::Playables::PlayableDirector>
      _introPlayableDirector;

  /// @brief Field _layoutProvider, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__layoutProvider, put = __cordl_internal_set__layoutProvider)) ::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _localPlayerRingTrackName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerRingTrackName, put = __cordl_internal_set__localPlayerRingTrackName)) ::StringW _localPlayerRingTrackName;

  /// @brief Field _localPlayerTimelinePropertyName, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__localPlayerTimelinePropertyName,
                      put = __cordl_internal_set__localPlayerTimelinePropertyName)) ::UnityEngine::PropertyName _localPlayerTimelinePropertyName;

  /// @brief Field _localPlayerTrackName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerTrackName, put = __cordl_internal_set__localPlayerTrackName)) ::StringW _localPlayerTrackName;

  /// @brief Field _multiplayerPlayersManager, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerPlayersManager, put = __cordl_internal_set__multiplayerPlayersManager)) ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>
      _multiplayerPlayersManager;

  /// @brief Field _multiplayerSessionManager, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _onCompleted, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__onCompleted, put = __cordl_internal_set__onCompleted)) ::System::Action* _onCompleted;

  /// @brief Field _playerTimelinePropertyNames, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTimelinePropertyNames,
                      put = __cordl_internal_set__playerTimelinePropertyNames)) ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>
      _playerTimelinePropertyNames;

  /// @brief Field _playerTimelineTrackNames, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTimelineTrackNames, put = __cordl_internal_set__playerTimelineTrackNames)) ::ArrayW<::StringW, ::Array<::StringW>*> _playerTimelineTrackNames;

  /// @brief Field _random, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__random, put = setStaticF__random)) ::System::Random* _random;

  /// @brief Field _ringTimelineTrackNames, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ringTimelineTrackNames, put = __cordl_internal_set__ringTimelineTrackNames)) ::ArrayW<::StringW, ::Array<::StringW>*> _ringTimelineTrackNames;

  /// @brief Field _scoreRingManager, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreRingManager, put = __cordl_internal_set__scoreRingManager)) ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> _scoreRingManager;

  /// @brief Field _spawnDuration, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__spawnDuration, put = __cordl_internal_set__spawnDuration)) float_t _spawnDuration;

  /// @brief Method BindRingsAndSetTiming, addr 0x3b6fb90, size 0x800, virtual false, abstract: false, final false
  inline void BindRingsAndSetTiming(int32_t connectedPlayersCount, ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> connectedRings, ::UnityEngine::GameObject* localRing);

  /// @brief Method BindTimeline, addr 0x3b6e988, size 0x774, virtual false, abstract: false, final false
  inline void BindTimeline();

  /// @brief Method CalculatePlayerIndexSequence, addr 0x3b6f50c, size 0x580, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Queue_1<int32_t>* CalculatePlayerIndexSequence(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* allActivePlayer);

  /// @brief Method Completed, addr 0x3b70464, size 0x38, virtual false, abstract: false, final false
  inline void Completed();

  /// @brief Method GetFullIntroAnimationTime, addr 0x3b6f0fc, size 0x410, virtual false, abstract: false, final false
  inline int64_t GetFullIntroAnimationTime();

  static inline ::GlobalNamespace::MultiplayerIntroAnimationController* New_ctor();

  /// @brief Method OnValidate, addr 0x3b6e2fc, size 0x57c, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method PlayIntroAnimation, addr 0x3b6e878, size 0x110, virtual false, abstract: false, final false
  inline void PlayIntroAnimation(float_t maxDesiredIntroAnimationDuration, ::System::Action* onCompleted);

  /// @brief Method SetBeforeIntroValue, addr 0x3b6c768, size 0x474, virtual false, abstract: false, final false
  inline void SetBeforeIntroValue();

  /// @brief Method TransitionToAfterIntroAnimationState, addr 0x3b70390, size 0xd4, virtual false, abstract: false, final false
  inline void TransitionToAfterIntroAnimationState();

  constexpr bool const& __cordl_internal_get__bindingFinished() const;

  constexpr bool& __cordl_internal_get__bindingFinished();

  constexpr ::StringW const& __cordl_internal_get__endMarkerName() const;

  constexpr ::StringW& __cordl_internal_get__endMarkerName();

  constexpr float_t const& __cordl_internal_get__firstConnectedPlayerStart() const;

  constexpr float_t& __cordl_internal_get__firstConnectedPlayerStart();

  constexpr int64_t const& __cordl_internal_get__introDuration() const;

  constexpr int64_t& __cordl_internal_get__introDuration();

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__introPlayableDirector() const;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__introPlayableDirector();

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __cordl_internal_get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __cordl_internal_get__layoutProvider() const;

  constexpr ::StringW const& __cordl_internal_get__localPlayerRingTrackName() const;

  constexpr ::StringW& __cordl_internal_get__localPlayerRingTrackName();

  constexpr ::UnityEngine::PropertyName const& __cordl_internal_get__localPlayerTimelinePropertyName() const;

  constexpr ::UnityEngine::PropertyName& __cordl_internal_get__localPlayerTimelinePropertyName();

  constexpr ::StringW const& __cordl_internal_get__localPlayerTrackName() const;

  constexpr ::StringW& __cordl_internal_get__localPlayerTrackName();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& __cordl_internal_get__multiplayerPlayersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& __cordl_internal_get__multiplayerPlayersManager();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::System::Action*& __cordl_internal_get__onCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get__onCompleted() const;

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> const& __cordl_internal_get__playerTimelinePropertyNames() const;

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>& __cordl_internal_get__playerTimelinePropertyNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__playerTimelineTrackNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__playerTimelineTrackNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__ringTimelineTrackNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__ringTimelineTrackNames();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> const& __cordl_internal_get__scoreRingManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager>& __cordl_internal_get__scoreRingManager();

  constexpr float_t const& __cordl_internal_get__spawnDuration() const;

  constexpr float_t& __cordl_internal_get__spawnDuration();

  constexpr void __cordl_internal_set__bindingFinished(bool value);

  constexpr void __cordl_internal_set__endMarkerName(::StringW value);

  constexpr void __cordl_internal_set__firstConnectedPlayerStart(float_t value);

  constexpr void __cordl_internal_set__introDuration(int64_t value);

  constexpr void __cordl_internal_set__introPlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value);

  constexpr void __cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr void __cordl_internal_set__localPlayerRingTrackName(::StringW value);

  constexpr void __cordl_internal_set__localPlayerTimelinePropertyName(::UnityEngine::PropertyName value);

  constexpr void __cordl_internal_set__localPlayerTrackName(::StringW value);

  constexpr void __cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__onCompleted(::System::Action* value);

  constexpr void __cordl_internal_set__playerTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> value);

  constexpr void __cordl_internal_set__playerTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__ringTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__scoreRingManager(::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> value);

  constexpr void __cordl_internal_set__spawnDuration(float_t value);

  /// @brief Method .ctor, addr 0x3b7049c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Random* getStaticF__random();

  static inline void setStaticF__random(::System::Random* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerIntroAnimationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroAnimationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerIntroAnimationController(MultiplayerIntroAnimationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroAnimationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerIntroAnimationController(MultiplayerIntroAnimationController const&) = delete;

  /// @brief Field _introPlayableDirector, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableDirector> ____introPlayableDirector;

  /// @brief Field _playerTimelineTrackNames, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____playerTimelineTrackNames;

  /// @brief Field _ringTimelineTrackNames, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____ringTimelineTrackNames;

  /// @brief Field _playerTimelinePropertyNames, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> ____playerTimelinePropertyNames;

  /// @brief Field _localPlayerTrackName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____localPlayerTrackName;

  /// @brief Field _localPlayerRingTrackName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____localPlayerRingTrackName;

  /// @brief Field _localPlayerTimelinePropertyName, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::PropertyName ____localPlayerTimelinePropertyName;

  /// @brief Field _firstConnectedPlayerStart, offset: 0x54, size: 0x4, def value: None
  float_t ____firstConnectedPlayerStart;

  /// @brief Field _spawnDuration, offset: 0x58, size: 0x4, def value: None
  float_t ____spawnDuration;

  /// @brief Field _endMarkerName, offset: 0x60, size: 0x8, def value: None
  ::StringW ____endMarkerName;

  /// @brief Field _scoreRingManager, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> ____scoreRingManager;

  /// @brief Field _multiplayerPlayersManager, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> ____multiplayerPlayersManager;

  /// @brief Field _multiplayerSessionManager, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _layoutProvider, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _onCompleted, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ____onCompleted;

  /// @brief Field _introDuration, offset: 0x90, size: 0x8, def value: None
  int64_t ____introDuration;

  /// @brief Field _bindingFinished, offset: 0x98, size: 0x1, def value: None
  bool ____bindingFinished;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4555 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerIntroAnimationController, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____introPlayableDirector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____playerTimelineTrackNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____ringTimelineTrackNames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____playerTimelinePropertyNames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____localPlayerTrackName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____localPlayerRingTrackName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____localPlayerTimelinePropertyName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____firstConnectedPlayerStart) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____spawnDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____endMarkerName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____scoreRingManager) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____multiplayerPlayersManager) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____multiplayerSessionManager) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____layoutProvider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____onCompleted) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____introDuration) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroAnimationController, ____bindingFinished) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerIntroAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerIntroAnimationController*, "", "MultiplayerIntroAnimationController");

#pragma once
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
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace UnityEngine {
struct PropertyName;
}
namespace System {
class Random;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerScoreRingManager;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerIntroAnimationController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerIntroAnimationController);
// Type: ::MultiplayerIntroAnimationController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10159)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5208))
// CS Name: ::MultiplayerIntroAnimationController*
class CORDL_TYPE MultiplayerIntroAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _introPlayableDirector, offset 0x18, size 0x8
  __declspec(property(get = __get__introPlayableDirector, put = __set__introPlayableDirector))::UnityEngine::Playables::PlayableDirector* _introPlayableDirector;

  /// @brief Field _playerTimelineTrackNames, offset 0x20, size 0x8
  __declspec(property(get = __get__playerTimelineTrackNames, put = __set__playerTimelineTrackNames))::ArrayW<::StringW, ::Array<::StringW>*> _playerTimelineTrackNames;

  /// @brief Field _ringTimelineTrackNames, offset 0x28, size 0x8
  __declspec(property(get = __get__ringTimelineTrackNames, put = __set__ringTimelineTrackNames))::ArrayW<::StringW, ::Array<::StringW>*> _ringTimelineTrackNames;

  /// @brief Field _playerTimelinePropertyNames, offset 0x30, size 0x8
  __declspec(property(get = __get__playerTimelinePropertyNames,
                      put = __set__playerTimelinePropertyNames))::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> _playerTimelinePropertyNames;

  /// @brief Field _localPlayerTrackName, offset 0x38, size 0x8
  __declspec(property(get = __get__localPlayerTrackName, put = __set__localPlayerTrackName))::StringW _localPlayerTrackName;

  /// @brief Field _localPlayerRingTrackName, offset 0x40, size 0x8
  __declspec(property(get = __get__localPlayerRingTrackName, put = __set__localPlayerRingTrackName))::StringW _localPlayerRingTrackName;

  /// @brief Field _localPlayerTimelinePropertyName, offset 0x48, size 0x4
  __declspec(property(get = __get__localPlayerTimelinePropertyName, put = __set__localPlayerTimelinePropertyName))::UnityEngine::PropertyName _localPlayerTimelinePropertyName;

  /// @brief Field _firstConnectedPlayerStart, offset 0x4c, size 0x4
  __declspec(property(get = __get__firstConnectedPlayerStart, put = __set__firstConnectedPlayerStart)) float_t _firstConnectedPlayerStart;

  /// @brief Field _spawnDuration, offset 0x50, size 0x4
  __declspec(property(get = __get__spawnDuration, put = __set__spawnDuration)) float_t _spawnDuration;

  /// @brief Field _endMarkerName, offset 0x58, size 0x8
  __declspec(property(get = __get__endMarkerName, put = __set__endMarkerName))::StringW _endMarkerName;

  /// @brief Field _scoreRingManager, offset 0x60, size 0x8
  __declspec(property(get = __get__scoreRingManager, put = __set__scoreRingManager))::GlobalNamespace::MultiplayerScoreRingManager* _scoreRingManager;

  /// @brief Field _multiplayerPlayersManager, offset 0x68, size 0x8
  __declspec(property(get = __get__multiplayerPlayersManager, put = __set__multiplayerPlayersManager))::GlobalNamespace::MultiplayerPlayersManager* _multiplayerPlayersManager;

  /// @brief Field _multiplayerSessionManager, offset 0x70, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _layoutProvider, offset 0x78, size 0x8
  __declspec(property(get = __get__layoutProvider, put = __set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _onCompleted, offset 0x80, size 0x8
  __declspec(property(get = __get__onCompleted, put = __set__onCompleted))::System::Action* _onCompleted;

  /// @brief Field _introDuration, offset 0x88, size 0x8
  __declspec(property(get = __get__introDuration, put = __set__introDuration)) int64_t _introDuration;

  /// @brief Field _bindingFinished, offset 0x90, size 0x1
  __declspec(property(get = __get__bindingFinished, put = __set__bindingFinished)) bool _bindingFinished;

  /// @brief Field _random, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__random, put = setStaticF__random))::System::Random* _random;

  constexpr ::UnityEngine::Playables::PlayableDirector*& __get__introPlayableDirector();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> const& __get__introPlayableDirector() const;

  constexpr void __set__introPlayableDirector(::UnityEngine::Playables::PlayableDirector* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__playerTimelineTrackNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__playerTimelineTrackNames() const;

  constexpr void __set__playerTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__ringTimelineTrackNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__ringTimelineTrackNames() const;

  constexpr void __set__ringTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>& __get__playerTimelinePropertyNames();

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> const& __get__playerTimelinePropertyNames() const;

  constexpr void __set__playerTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> value);

  constexpr ::StringW& __get__localPlayerTrackName();

  constexpr ::StringW const& __get__localPlayerTrackName() const;

  constexpr void __set__localPlayerTrackName(::StringW value);

  constexpr ::StringW& __get__localPlayerRingTrackName();

  constexpr ::StringW const& __get__localPlayerRingTrackName() const;

  constexpr void __set__localPlayerRingTrackName(::StringW value);

  constexpr ::UnityEngine::PropertyName& __get__localPlayerTimelinePropertyName();

  constexpr ::UnityEngine::PropertyName const& __get__localPlayerTimelinePropertyName() const;

  constexpr void __set__localPlayerTimelinePropertyName(::UnityEngine::PropertyName value);

  constexpr float_t& __get__firstConnectedPlayerStart();

  constexpr float_t const& __get__firstConnectedPlayerStart() const;

  constexpr void __set__firstConnectedPlayerStart(float_t value);

  constexpr float_t& __get__spawnDuration();

  constexpr float_t const& __get__spawnDuration() const;

  constexpr void __set__spawnDuration(float_t value);

  constexpr ::StringW& __get__endMarkerName();

  constexpr ::StringW const& __get__endMarkerName() const;

  constexpr void __set__endMarkerName(::StringW value);

  constexpr ::GlobalNamespace::MultiplayerScoreRingManager*& __get__scoreRingManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreRingManager*> const& __get__scoreRingManager() const;

  constexpr void __set__scoreRingManager(::GlobalNamespace::MultiplayerScoreRingManager* value);

  constexpr ::GlobalNamespace::MultiplayerPlayersManager*& __get__multiplayerPlayersManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> const& __get__multiplayerPlayersManager() const;

  constexpr void __set__multiplayerPlayersManager(::GlobalNamespace::MultiplayerPlayersManager* value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __get__layoutProvider() const;

  constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr ::System::Action*& __get__onCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get__onCompleted() const;

  constexpr void __set__onCompleted(::System::Action* value);

  constexpr int64_t& __get__introDuration();

  constexpr int64_t const& __get__introDuration() const;

  constexpr void __set__introDuration(int64_t value);

  constexpr bool& __get__bindingFinished();

  constexpr bool const& __get__bindingFinished() const;

  constexpr void __set__bindingFinished(bool value);

  static inline void setStaticF__random(::System::Random* value);

  static inline ::System::Random* getStaticF__random();

  /// @brief Method OnValidate addr 0x224cea4 size 0x57c virtual false final false
  inline void OnValidate();

  /// @brief Method SetBeforeIntroValue addr 0x224b254 size 0x478 virtual false final false
  inline void SetBeforeIntroValue();

  /// @brief Method PlayIntroAnimation addr 0x2248c00 size 0x118 virtual false final false
  inline void PlayIntroAnimation(float_t maxDesiredIntroAnimationDuration, ::System::Action* onCompleted);

  /// @brief Method GetFullIntroAnimationTime addr 0x22487e8 size 0x418 virtual false final false
  inline int64_t GetFullIntroAnimationTime();

  /// @brief Method BindTimeline addr 0x224d420 size 0x78c virtual false final false
  inline void BindTimeline();

  /// @brief Method BindRingsAndSetTiming addr 0x224e234 size 0x7f4 virtual false final false
  inline void BindRingsAndSetTiming(int32_t connectedPlayersCount, ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> connectedRings, ::UnityEngine::GameObject* localRing);

  /// @brief Method TransitionToAfterIntroAnimationState addr 0x2248d18 size 0xd4 virtual false final false
  inline void TransitionToAfterIntroAnimationState();

  /// @brief Method CalculatePlayerIndexSequence addr 0x224dbac size 0x584 virtual false final false
  inline ::System::Collections::Generic::Queue_1<int32_t>* CalculatePlayerIndexSequence(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* allActivePlayer);

  /// @brief Method Completed addr 0x224ea28 size 0x38 virtual false final false
  inline void Completed();

  static inline ::GlobalNamespace::MultiplayerIntroAnimationController* New_ctor();

  /// @brief Method .ctor addr 0x224ea60 size 0x5c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroAnimationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerIntroAnimationController(MultiplayerIntroAnimationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroAnimationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerIntroAnimationController(MultiplayerIntroAnimationController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerIntroAnimationController();

public:
  /// @brief Field _introPlayableDirector, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Playables::PlayableDirector* ____introPlayableDirector;

  /// @brief Field _playerTimelineTrackNames, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____playerTimelineTrackNames;

  /// @brief Field _ringTimelineTrackNames, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____ringTimelineTrackNames;

  /// @brief Field _playerTimelinePropertyNames, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> ____playerTimelinePropertyNames;

  /// @brief Field _localPlayerTrackName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____localPlayerTrackName;

  /// @brief Field _localPlayerRingTrackName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____localPlayerRingTrackName;

  /// @brief Field _localPlayerTimelinePropertyName, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::PropertyName ____localPlayerTimelinePropertyName;

  /// @brief Field _firstConnectedPlayerStart, offset: 0x4c, size: 0x4, def value: None
  float_t ____firstConnectedPlayerStart;

  /// @brief Field _spawnDuration, offset: 0x50, size: 0x4, def value: None
  float_t ____spawnDuration;

  /// @brief Field _endMarkerName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____endMarkerName;

  /// @brief Field _scoreRingManager, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreRingManager* ____scoreRingManager;

  /// @brief Field _multiplayerPlayersManager, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerPlayersManager* ____multiplayerPlayersManager;

  /// @brief Field _multiplayerSessionManager, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _layoutProvider, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _onCompleted, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ____onCompleted;

  /// @brief Field _introDuration, offset: 0x88, size: 0x8, def value: None
  int64_t ____introDuration;

  /// @brief Field _bindingFinished, offset: 0x90, size: 0x1, def value: None
  bool ____bindingFinished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerIntroAnimationController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerIntroAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerIntroAnimationController*, "", "MultiplayerIntroAnimationController");

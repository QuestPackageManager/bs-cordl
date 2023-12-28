#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerOutroAnimationController)
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerResultsPyramidView;
}
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class MultiplayerScoreRingManager;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerOutroAnimationController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerOutroAnimationController);
// Type: ::MultiplayerOutroAnimationController
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10159)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5232))
// CS Name: ::MultiplayerOutroAnimationController*
class CORDL_TYPE MultiplayerOutroAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _outroPlayableDirector, offset 0x18, size 0x8
  __declspec(property(get = __get__outroPlayableDirector, put = __set__outroPlayableDirector))::UnityEngine::Playables::PlayableDirector* _outroPlayableDirector;

  /// @brief Field _playerTimelineTrackNames, offset 0x20, size 0x8
  __declspec(property(get = __get__playerTimelineTrackNames, put = __set__playerTimelineTrackNames))::ArrayW<::StringW, ::Array<::StringW>*> _playerTimelineTrackNames;

  /// @brief Field _ringTimelineTrackNames, offset 0x28, size 0x8
  __declspec(property(get = __get__ringTimelineTrackNames, put = __set__ringTimelineTrackNames))::ArrayW<::StringW, ::Array<::StringW>*> _ringTimelineTrackNames;

  /// @brief Field _resultsTimelineTrackNames, offset 0x30, size 0x8
  __declspec(property(get = __get__resultsTimelineTrackNames, put = __set__resultsTimelineTrackNames))::ArrayW<::StringW, ::Array<::StringW>*> _resultsTimelineTrackNames;

  /// @brief Field _playerTimelinePropertyNames, offset 0x38, size 0x8
  __declspec(property(get = __get__playerTimelinePropertyNames,
                      put = __set__playerTimelinePropertyNames))::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> _playerTimelinePropertyNames;

  /// @brief Field _resultsTimelinePropertyNames, offset 0x40, size 0x8
  __declspec(property(get = __get__resultsTimelinePropertyNames,
                      put = __set__resultsTimelinePropertyNames))::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> _resultsTimelinePropertyNames;

  /// @brief Field _localPlayerTrackName, offset 0x48, size 0x8
  __declspec(property(get = __get__localPlayerTrackName, put = __set__localPlayerTrackName))::StringW _localPlayerTrackName;

  /// @brief Field _localPlayerTimelinePropertyName, offset 0x50, size 0x4
  __declspec(property(get = __get__localPlayerTimelinePropertyName, put = __set__localPlayerTimelinePropertyName))::UnityEngine::PropertyName _localPlayerTimelinePropertyName;

  /// @brief Field _badgeTimelineTrackNames, offset 0x58, size 0x8
  __declspec(property(get = __get__badgeTimelineTrackNames, put = __set__badgeTimelineTrackNames))::ArrayW<::StringW, ::Array<::StringW>*> _badgeTimelineTrackNames;

  /// @brief Field _badgeTimelinePropertyNames, offset 0x60, size 0x8
  __declspec(property(get = __get__badgeTimelinePropertyNames,
                      put = __set__badgeTimelinePropertyNames))::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> _badgeTimelinePropertyNames;

  /// @brief Field _badgeStartTransform, offset 0x68, size 0x8
  __declspec(property(get = __get__badgeStartTransform, put = __set__badgeStartTransform))::UnityEngine::Transform* _badgeStartTransform;

  /// @brief Field _badgeMidTransform, offset 0x70, size 0x8
  __declspec(property(get = __get__badgeMidTransform, put = __set__badgeMidTransform))::UnityEngine::Transform* _badgeMidTransform;

  /// @brief Field _songPreviewTrackName, offset 0x78, size 0x8
  __declspec(property(get = __get__songPreviewTrackName, put = __set__songPreviewTrackName))::StringW _songPreviewTrackName;

  /// @brief Field _resultsMocksActivationTrack, offset 0x80, size 0x8
  __declspec(property(get = __get__resultsMocksActivationTrack, put = __set__resultsMocksActivationTrack))::StringW _resultsMocksActivationTrack;

  /// @brief Field _multiplayerScoreRingManager, offset 0x88, size 0x8
  __declspec(property(get = __get__multiplayerScoreRingManager, put = __set__multiplayerScoreRingManager))::GlobalNamespace::MultiplayerScoreRingManager* _multiplayerScoreRingManager;

  /// @brief Field _multiplayerResultsPyramidView, offset 0x90, size 0x8
  __declspec(property(get = __get__multiplayerResultsPyramidView, put = __set__multiplayerResultsPyramidView))::GlobalNamespace::MultiplayerResultsPyramidView* _multiplayerResultsPyramidView;

  /// @brief Field _multiplayerPlayersManager, offset 0x98, size 0x8
  __declspec(property(get = __get__multiplayerPlayersManager, put = __set__multiplayerPlayersManager))::GlobalNamespace::MultiplayerPlayersManager* _multiplayerPlayersManager;

  /// @brief Field _multiplayerSessionManager, offset 0xa0, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _sceneSetupData, offset 0xa8, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _layoutProvider, offset 0xb0, size 0x8
  __declspec(property(get = __get__layoutProvider, put = __set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _onCompleted, offset 0xb8, size 0x8
  __declspec(property(get = __get__onCompleted, put = __set__onCompleted))::System::Action* _onCompleted;

  constexpr ::UnityEngine::Playables::PlayableDirector*& __get__outroPlayableDirector();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> const& __get__outroPlayableDirector() const;

  constexpr void __set__outroPlayableDirector(::UnityEngine::Playables::PlayableDirector* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__playerTimelineTrackNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__playerTimelineTrackNames() const;

  constexpr void __set__playerTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__ringTimelineTrackNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__ringTimelineTrackNames() const;

  constexpr void __set__ringTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__resultsTimelineTrackNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__resultsTimelineTrackNames() const;

  constexpr void __set__resultsTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>& __get__playerTimelinePropertyNames();

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> const& __get__playerTimelinePropertyNames() const;

  constexpr void __set__playerTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> value);

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>& __get__resultsTimelinePropertyNames();

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> const& __get__resultsTimelinePropertyNames() const;

  constexpr void __set__resultsTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> value);

  constexpr ::StringW& __get__localPlayerTrackName();

  constexpr ::StringW const& __get__localPlayerTrackName() const;

  constexpr void __set__localPlayerTrackName(::StringW value);

  constexpr ::UnityEngine::PropertyName& __get__localPlayerTimelinePropertyName();

  constexpr ::UnityEngine::PropertyName const& __get__localPlayerTimelinePropertyName() const;

  constexpr void __set__localPlayerTimelinePropertyName(::UnityEngine::PropertyName value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__badgeTimelineTrackNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__badgeTimelineTrackNames() const;

  constexpr void __set__badgeTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>& __get__badgeTimelinePropertyNames();

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> const& __get__badgeTimelinePropertyNames() const;

  constexpr void __set__badgeTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> value);

  constexpr ::UnityEngine::Transform*& __get__badgeStartTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__badgeStartTransform() const;

  constexpr void __set__badgeStartTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__badgeMidTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__badgeMidTransform() const;

  constexpr void __set__badgeMidTransform(::UnityEngine::Transform* value);

  constexpr ::StringW& __get__songPreviewTrackName();

  constexpr ::StringW const& __get__songPreviewTrackName() const;

  constexpr void __set__songPreviewTrackName(::StringW value);

  constexpr ::StringW& __get__resultsMocksActivationTrack();

  constexpr ::StringW const& __get__resultsMocksActivationTrack() const;

  constexpr void __set__resultsMocksActivationTrack(::StringW value);

  constexpr ::GlobalNamespace::MultiplayerScoreRingManager*& __get__multiplayerScoreRingManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreRingManager*> const& __get__multiplayerScoreRingManager() const;

  constexpr void __set__multiplayerScoreRingManager(::GlobalNamespace::MultiplayerScoreRingManager* value);

  constexpr ::GlobalNamespace::MultiplayerResultsPyramidView*& __get__multiplayerResultsPyramidView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsPyramidView*> const& __get__multiplayerResultsPyramidView() const;

  constexpr void __set__multiplayerResultsPyramidView(::GlobalNamespace::MultiplayerResultsPyramidView* value);

  constexpr ::GlobalNamespace::MultiplayerPlayersManager*& __get__multiplayerPlayersManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> const& __get__multiplayerPlayersManager() const;

  constexpr void __set__multiplayerPlayersManager(::GlobalNamespace::MultiplayerPlayersManager* value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __get__layoutProvider() const;

  constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr ::System::Action*& __get__onCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get__onCompleted() const;

  constexpr void __set__onCompleted(::System::Action* value);

  /// @brief Method Start addr 0x2253df4 size 0xa0 virtual false final false
  inline void Start();

  /// @brief Method OnValidate addr 0x2253f54 size 0x7a4 virtual false final false
  inline void OnValidate();

  /// @brief Method OnDestroy addr 0x22546f8 size 0xd0 virtual false final false
  inline void OnDestroy();

  /// @brief Method AnimateOutro addr 0x2249c54 size 0x1c0 virtual false final false
  inline void AnimateOutro(::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData, ::System::Action* onCompleted);

  /// @brief Method BindOutroTimeline addr 0x2254864 size 0x6b4 virtual false final false
  inline void BindOutroTimeline();

  /// @brief Method BindRingsAndAudio addr 0x2255138 size 0x968 virtual false final false
  inline void BindRingsAndAudio(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> rings, bool isMock, bool isDuel, ::UnityEngine::GameObject* resultsMocks);

  /// @brief Method Completed addr 0x22560b4 size 0x24 virtual false final false
  inline void Completed();

  /// @brief Method HandlePlayerSpawningDidFinish addr 0x2253e94 size 0x24 virtual false final false
  inline void HandlePlayerSpawningDidFinish();

  static inline ::GlobalNamespace::MultiplayerOutroAnimationController* New_ctor();

  /// @brief Method .ctor addr 0x22564d8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerOutroAnimationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerOutroAnimationController(MultiplayerOutroAnimationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerOutroAnimationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerOutroAnimationController(MultiplayerOutroAnimationController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerOutroAnimationController();

public:
  /// @brief Field _outroPlayableDirector, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Playables::PlayableDirector* ____outroPlayableDirector;

  /// @brief Field _playerTimelineTrackNames, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____playerTimelineTrackNames;

  /// @brief Field _ringTimelineTrackNames, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____ringTimelineTrackNames;

  /// @brief Field _resultsTimelineTrackNames, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____resultsTimelineTrackNames;

  /// @brief Field _playerTimelinePropertyNames, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> ____playerTimelinePropertyNames;

  /// @brief Field _resultsTimelinePropertyNames, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> ____resultsTimelinePropertyNames;

  /// @brief Field _localPlayerTrackName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____localPlayerTrackName;

  /// @brief Field _localPlayerTimelinePropertyName, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::PropertyName ____localPlayerTimelinePropertyName;

  /// @brief Field _badgeTimelineTrackNames, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____badgeTimelineTrackNames;

  /// @brief Field _badgeTimelinePropertyNames, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> ____badgeTimelinePropertyNames;

  /// @brief Field _badgeStartTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Transform* ____badgeStartTransform;

  /// @brief Field _badgeMidTransform, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Transform* ____badgeMidTransform;

  /// @brief Field _songPreviewTrackName, offset: 0x78, size: 0x8, def value: None
  ::StringW ____songPreviewTrackName;

  /// @brief Field _resultsMocksActivationTrack, offset: 0x80, size: 0x8, def value: None
  ::StringW ____resultsMocksActivationTrack;

  /// @brief Field _multiplayerScoreRingManager, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreRingManager* ____multiplayerScoreRingManager;

  /// @brief Field _multiplayerResultsPyramidView, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsPyramidView* ____multiplayerResultsPyramidView;

  /// @brief Field _multiplayerPlayersManager, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerPlayersManager* ____multiplayerPlayersManager;

  /// @brief Field _multiplayerSessionManager, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _sceneSetupData, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _layoutProvider, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _onCompleted, offset: 0xb8, size: 0x8, def value: None
  ::System::Action* ____onCompleted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerOutroAnimationController, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerOutroAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerOutroAnimationController*, "", "MultiplayerOutroAnimationController");

#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerOutroAnimationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerOutroAnimationController)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
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
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class MultiplayerResultsPyramidView;
}
namespace GlobalNamespace {
class MultiplayerScoreRingManager;
}
namespace System {
class Action;
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
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerOutroAnimationController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerOutroAnimationController);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.PropertyName
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerOutroAnimationController
class CORDL_TYPE MultiplayerOutroAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _badgeMidTransform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeMidTransform, put = __cordl_internal_set__badgeMidTransform)) ::UnityW<::UnityEngine::Transform> _badgeMidTransform;

  /// @brief Field _badgeStartTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeStartTransform, put = __cordl_internal_set__badgeStartTransform)) ::UnityW<::UnityEngine::Transform> _badgeStartTransform;

  /// @brief Field _badgeTimelinePropertyNames, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeTimelinePropertyNames,
                      put = __cordl_internal_set__badgeTimelinePropertyNames)) ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>
      _badgeTimelinePropertyNames;

  /// @brief Field _badgeTimelineTrackNames, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeTimelineTrackNames, put = __cordl_internal_set__badgeTimelineTrackNames)) ::ArrayW<::StringW, ::Array<::StringW>*> _badgeTimelineTrackNames;

  /// @brief Field _layoutProvider, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__layoutProvider, put = __cordl_internal_set__layoutProvider)) ::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _localPlayerTimelinePropertyName, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__localPlayerTimelinePropertyName,
                      put = __cordl_internal_set__localPlayerTimelinePropertyName)) ::UnityEngine::PropertyName _localPlayerTimelinePropertyName;

  /// @brief Field _localPlayerTrackName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerTrackName, put = __cordl_internal_set__localPlayerTrackName)) ::StringW _localPlayerTrackName;

  /// @brief Field _multiplayerPlayersManager, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerPlayersManager, put = __cordl_internal_set__multiplayerPlayersManager)) ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>
      _multiplayerPlayersManager;

  /// @brief Field _multiplayerResultsPyramidView, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerResultsPyramidView, put = __cordl_internal_set__multiplayerResultsPyramidView)) ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidView>
      _multiplayerResultsPyramidView;

  /// @brief Field _multiplayerScoreRingManager, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerScoreRingManager, put = __cordl_internal_set__multiplayerScoreRingManager)) ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager>
      _multiplayerScoreRingManager;

  /// @brief Field _multiplayerSessionManager, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _onCompleted, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__onCompleted, put = __cordl_internal_set__onCompleted)) ::System::Action* _onCompleted;

  /// @brief Field _outroPlayableDirector, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__outroPlayableDirector, put = __cordl_internal_set__outroPlayableDirector)) ::UnityW<::UnityEngine::Playables::PlayableDirector>
      _outroPlayableDirector;

  /// @brief Field _playerTimelinePropertyNames, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTimelinePropertyNames,
                      put = __cordl_internal_set__playerTimelinePropertyNames)) ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>
      _playerTimelinePropertyNames;

  /// @brief Field _playerTimelineTrackNames, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTimelineTrackNames, put = __cordl_internal_set__playerTimelineTrackNames)) ::ArrayW<::StringW, ::Array<::StringW>*> _playerTimelineTrackNames;

  /// @brief Field _resultsMocksActivationTrack, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsMocksActivationTrack, put = __cordl_internal_set__resultsMocksActivationTrack)) ::StringW _resultsMocksActivationTrack;

  /// @brief Field _resultsTimelinePropertyNames, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsTimelinePropertyNames,
                      put = __cordl_internal_set__resultsTimelinePropertyNames)) ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>
      _resultsTimelinePropertyNames;

  /// @brief Field _resultsTimelineTrackNames, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsTimelineTrackNames, put = __cordl_internal_set__resultsTimelineTrackNames)) ::ArrayW<::StringW, ::Array<::StringW>*>
      _resultsTimelineTrackNames;

  /// @brief Field _ringTimelineTrackNames, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ringTimelineTrackNames, put = __cordl_internal_set__ringTimelineTrackNames)) ::ArrayW<::StringW, ::Array<::StringW>*> _ringTimelineTrackNames;

  /// @brief Field _sceneSetupData, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _songPreviewTrackName, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewTrackName, put = __cordl_internal_set__songPreviewTrackName)) ::StringW _songPreviewTrackName;

  /// @brief Method AnimateOutro, addr 0x3bd1320, size 0x1bc, virtual false, abstract: false, final false
  inline void AnimateOutro(::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData, ::System::Action* onCompleted);

  /// @brief Method BindOutroTimeline, addr 0x3bdd294, size 0x6b4, virtual false, abstract: false, final false
  inline void BindOutroTimeline();

  /// @brief Method BindRingsAndAudio, addr 0x3bddb20, size 0x748, virtual false, abstract: false, final false
  inline void BindRingsAndAudio(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> rings, bool isMock, bool isDuel, ::UnityEngine::GameObject* resultsMocks);

  /// @brief Method Completed, addr 0x3bde838, size 0x24, virtual false, abstract: false, final false
  inline void Completed();

  /// @brief Method HandlePlayerSpawningDidFinish, addr 0x3bdd06c, size 0x24, virtual false, abstract: false, final false
  inline void HandlePlayerSpawningDidFinish();

  static inline ::GlobalNamespace::MultiplayerOutroAnimationController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bdd12c, size 0xcc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3bdcfd0, size 0x9c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__badgeMidTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__badgeMidTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__badgeStartTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__badgeStartTransform();

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> const& __cordl_internal_get__badgeTimelinePropertyNames() const;

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>& __cordl_internal_get__badgeTimelinePropertyNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__badgeTimelineTrackNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__badgeTimelineTrackNames();

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider* const& __cordl_internal_get__layoutProvider() const;

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __cordl_internal_get__layoutProvider();

  constexpr ::UnityEngine::PropertyName const& __cordl_internal_get__localPlayerTimelinePropertyName() const;

  constexpr ::UnityEngine::PropertyName& __cordl_internal_get__localPlayerTimelinePropertyName();

  constexpr ::StringW const& __cordl_internal_get__localPlayerTrackName() const;

  constexpr ::StringW& __cordl_internal_get__localPlayerTrackName();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& __cordl_internal_get__multiplayerPlayersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& __cordl_internal_get__multiplayerPlayersManager();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidView> const& __cordl_internal_get__multiplayerResultsPyramidView() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidView>& __cordl_internal_get__multiplayerResultsPyramidView();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> const& __cordl_internal_get__multiplayerScoreRingManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager>& __cordl_internal_get__multiplayerScoreRingManager();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::System::Action* const& __cordl_internal_get__onCompleted() const;

  constexpr ::System::Action*& __cordl_internal_get__onCompleted();

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__outroPlayableDirector() const;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__outroPlayableDirector();

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> const& __cordl_internal_get__playerTimelinePropertyNames() const;

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>& __cordl_internal_get__playerTimelinePropertyNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__playerTimelineTrackNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__playerTimelineTrackNames();

  constexpr ::StringW const& __cordl_internal_get__resultsMocksActivationTrack() const;

  constexpr ::StringW& __cordl_internal_get__resultsMocksActivationTrack();

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> const& __cordl_internal_get__resultsTimelinePropertyNames() const;

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>& __cordl_internal_get__resultsTimelinePropertyNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__resultsTimelineTrackNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__resultsTimelineTrackNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__ringTimelineTrackNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__ringTimelineTrackNames();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::StringW const& __cordl_internal_get__songPreviewTrackName() const;

  constexpr ::StringW& __cordl_internal_get__songPreviewTrackName();

  constexpr void __cordl_internal_set__badgeMidTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__badgeStartTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__badgeTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> value);

  constexpr void __cordl_internal_set__badgeTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr void __cordl_internal_set__localPlayerTimelinePropertyName(::UnityEngine::PropertyName value);

  constexpr void __cordl_internal_set__localPlayerTrackName(::StringW value);

  constexpr void __cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value);

  constexpr void __cordl_internal_set__multiplayerResultsPyramidView(::UnityW<::GlobalNamespace::MultiplayerResultsPyramidView> value);

  constexpr void __cordl_internal_set__multiplayerScoreRingManager(::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__onCompleted(::System::Action* value);

  constexpr void __cordl_internal_set__outroPlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value);

  constexpr void __cordl_internal_set__playerTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> value);

  constexpr void __cordl_internal_set__playerTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__resultsMocksActivationTrack(::StringW value);

  constexpr void __cordl_internal_set__resultsTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> value);

  constexpr void __cordl_internal_set__resultsTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__ringTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr void __cordl_internal_set__songPreviewTrackName(::StringW value);

  /// @brief Method .ctor, addr 0x3bdec58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerOutroAnimationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerOutroAnimationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerOutroAnimationController(MultiplayerOutroAnimationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerOutroAnimationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerOutroAnimationController(MultiplayerOutroAnimationController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4598 };

  /// @brief Field _outroPlayableDirector, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableDirector> ____outroPlayableDirector;

  /// @brief Field _localPlayerTrackName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____localPlayerTrackName;

  /// @brief Field _playerTimelineTrackNames, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____playerTimelineTrackNames;

  /// @brief Field _ringTimelineTrackNames, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____ringTimelineTrackNames;

  /// @brief Field _localPlayerTimelinePropertyName, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::PropertyName ____localPlayerTimelinePropertyName;

  /// @brief Field _playerTimelinePropertyNames, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> ____playerTimelinePropertyNames;

  /// @brief Field _resultsTimelineTrackNames, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____resultsTimelineTrackNames;

  /// @brief Field _resultsTimelinePropertyNames, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> ____resultsTimelinePropertyNames;

  /// @brief Field _badgeStartTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____badgeStartTransform;

  /// @brief Field _badgeMidTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____badgeMidTransform;

  /// @brief Field _badgeTimelineTrackNames, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____badgeTimelineTrackNames;

  /// @brief Field _badgeTimelinePropertyNames, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> ____badgeTimelinePropertyNames;

  /// @brief Field _songPreviewTrackName, offset: 0x80, size: 0x8, def value: None
  ::StringW ____songPreviewTrackName;

  /// @brief Field _resultsMocksActivationTrack, offset: 0x88, size: 0x8, def value: None
  ::StringW ____resultsMocksActivationTrack;

  /// @brief Field _multiplayerScoreRingManager, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> ____multiplayerScoreRingManager;

  /// @brief Field _multiplayerResultsPyramidView, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidView> ____multiplayerResultsPyramidView;

  /// @brief Field _multiplayerPlayersManager, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> ____multiplayerPlayersManager;

  /// @brief Field _multiplayerSessionManager, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _sceneSetupData, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _layoutProvider, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _onCompleted, offset: 0xc0, size: 0x8, def value: None
  ::System::Action* ____onCompleted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____outroPlayableDirector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____localPlayerTrackName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____playerTimelineTrackNames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____ringTimelineTrackNames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____localPlayerTimelinePropertyName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____playerTimelinePropertyNames) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____resultsTimelineTrackNames) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____resultsTimelinePropertyNames) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____badgeStartTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____badgeMidTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____badgeTimelineTrackNames) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____badgeTimelinePropertyNames) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____songPreviewTrackName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____resultsMocksActivationTrack) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____multiplayerScoreRingManager) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____multiplayerResultsPyramidView) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____multiplayerPlayersManager) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____multiplayerSessionManager) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____sceneSetupData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____layoutProvider) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____onCompleted) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerOutroAnimationController, 0xc8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerOutroAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerOutroAnimationController*, "", "MultiplayerOutroAnimationController");

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
// Type: ::MultiplayerOutroAnimationController
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8903)), TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4574))
// CS Name: ::MultiplayerOutroAnimationController*
class CORDL_TYPE MultiplayerOutroAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _outroPlayableDirector, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__outroPlayableDirector, put = __cordl_internal_set__outroPlayableDirector))::UnityW<::UnityEngine::Playables::PlayableDirector> _outroPlayableDirector;

  /// @brief Field _playerTimelineTrackNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTimelineTrackNames, put = __cordl_internal_set__playerTimelineTrackNames))::ArrayW<::StringW, ::Array<::StringW>*> _playerTimelineTrackNames;

  /// @brief Field _ringTimelineTrackNames, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ringTimelineTrackNames, put = __cordl_internal_set__ringTimelineTrackNames))::ArrayW<::StringW, ::Array<::StringW>*> _ringTimelineTrackNames;

  /// @brief Field _resultsTimelineTrackNames, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsTimelineTrackNames, put = __cordl_internal_set__resultsTimelineTrackNames))::ArrayW<::StringW, ::Array<::StringW>*> _resultsTimelineTrackNames;

  /// @brief Field _playerTimelinePropertyNames, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTimelinePropertyNames,
                      put = __cordl_internal_set__playerTimelinePropertyNames))::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> _playerTimelinePropertyNames;

  /// @brief Field _resultsTimelinePropertyNames, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsTimelinePropertyNames,
                      put = __cordl_internal_set__resultsTimelinePropertyNames))::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> _resultsTimelinePropertyNames;

  /// @brief Field _localPlayerTrackName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerTrackName, put = __cordl_internal_set__localPlayerTrackName))::StringW _localPlayerTrackName;

  /// @brief Field _localPlayerTimelinePropertyName, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__localPlayerTimelinePropertyName,
                      put = __cordl_internal_set__localPlayerTimelinePropertyName))::UnityEngine::PropertyName _localPlayerTimelinePropertyName;

  /// @brief Field _badgeTimelineTrackNames, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeTimelineTrackNames, put = __cordl_internal_set__badgeTimelineTrackNames))::ArrayW<::StringW, ::Array<::StringW>*> _badgeTimelineTrackNames;

  /// @brief Field _badgeTimelinePropertyNames, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeTimelinePropertyNames,
                      put = __cordl_internal_set__badgeTimelinePropertyNames))::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> _badgeTimelinePropertyNames;

  /// @brief Field _badgeStartTransform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeStartTransform, put = __cordl_internal_set__badgeStartTransform))::UnityW<::UnityEngine::Transform> _badgeStartTransform;

  /// @brief Field _badgeMidTransform, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeMidTransform, put = __cordl_internal_set__badgeMidTransform))::UnityW<::UnityEngine::Transform> _badgeMidTransform;

  /// @brief Field _songPreviewTrackName, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewTrackName, put = __cordl_internal_set__songPreviewTrackName))::StringW _songPreviewTrackName;

  /// @brief Field _resultsMocksActivationTrack, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsMocksActivationTrack, put = __cordl_internal_set__resultsMocksActivationTrack))::StringW _resultsMocksActivationTrack;

  /// @brief Field _multiplayerScoreRingManager, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerScoreRingManager,
                      put = __cordl_internal_set__multiplayerScoreRingManager))::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> _multiplayerScoreRingManager;

  /// @brief Field _multiplayerResultsPyramidView, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerResultsPyramidView,
                      put = __cordl_internal_set__multiplayerResultsPyramidView))::UnityW<::GlobalNamespace::MultiplayerResultsPyramidView> _multiplayerResultsPyramidView;

  /// @brief Field _multiplayerPlayersManager, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerPlayersManager,
                      put = __cordl_internal_set__multiplayerPlayersManager))::UnityW<::GlobalNamespace::MultiplayerPlayersManager> _multiplayerPlayersManager;

  /// @brief Field _multiplayerSessionManager, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _sceneSetupData, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _layoutProvider, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__layoutProvider, put = __cordl_internal_set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _onCompleted, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__onCompleted, put = __cordl_internal_set__onCompleted))::System::Action* _onCompleted;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__outroPlayableDirector();

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__outroPlayableDirector() const;

  constexpr void __cordl_internal_set__outroPlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__playerTimelineTrackNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__playerTimelineTrackNames() const;

  constexpr void __cordl_internal_set__playerTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__ringTimelineTrackNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__ringTimelineTrackNames() const;

  constexpr void __cordl_internal_set__ringTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__resultsTimelineTrackNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__resultsTimelineTrackNames() const;

  constexpr void __cordl_internal_set__resultsTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>& __cordl_internal_get__playerTimelinePropertyNames();

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> const& __cordl_internal_get__playerTimelinePropertyNames() const;

  constexpr void __cordl_internal_set__playerTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> value);

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>& __cordl_internal_get__resultsTimelinePropertyNames();

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> const& __cordl_internal_get__resultsTimelinePropertyNames() const;

  constexpr void __cordl_internal_set__resultsTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> value);

  constexpr ::StringW& __cordl_internal_get__localPlayerTrackName();

  constexpr ::StringW const& __cordl_internal_get__localPlayerTrackName() const;

  constexpr void __cordl_internal_set__localPlayerTrackName(::StringW value);

  constexpr ::UnityEngine::PropertyName& __cordl_internal_get__localPlayerTimelinePropertyName();

  constexpr ::UnityEngine::PropertyName const& __cordl_internal_get__localPlayerTimelinePropertyName() const;

  constexpr void __cordl_internal_set__localPlayerTimelinePropertyName(::UnityEngine::PropertyName value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__badgeTimelineTrackNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__badgeTimelineTrackNames() const;

  constexpr void __cordl_internal_set__badgeTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>& __cordl_internal_get__badgeTimelinePropertyNames();

  constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> const& __cordl_internal_get__badgeTimelinePropertyNames() const;

  constexpr void __cordl_internal_set__badgeTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__badgeStartTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__badgeStartTransform() const;

  constexpr void __cordl_internal_set__badgeStartTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__badgeMidTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__badgeMidTransform() const;

  constexpr void __cordl_internal_set__badgeMidTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::StringW& __cordl_internal_get__songPreviewTrackName();

  constexpr ::StringW const& __cordl_internal_get__songPreviewTrackName() const;

  constexpr void __cordl_internal_set__songPreviewTrackName(::StringW value);

  constexpr ::StringW& __cordl_internal_get__resultsMocksActivationTrack();

  constexpr ::StringW const& __cordl_internal_get__resultsMocksActivationTrack() const;

  constexpr void __cordl_internal_set__resultsMocksActivationTrack(::StringW value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager>& __cordl_internal_get__multiplayerScoreRingManager();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> const& __cordl_internal_get__multiplayerScoreRingManager() const;

  constexpr void __cordl_internal_set__multiplayerScoreRingManager(::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidView>& __cordl_internal_get__multiplayerResultsPyramidView();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidView> const& __cordl_internal_get__multiplayerResultsPyramidView() const;

  constexpr void __cordl_internal_set__multiplayerResultsPyramidView(::UnityW<::GlobalNamespace::MultiplayerResultsPyramidView> value);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& __cordl_internal_get__multiplayerPlayersManager();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& __cordl_internal_get__multiplayerPlayersManager() const;

  constexpr void __cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __cordl_internal_get__sceneSetupData() const;

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __cordl_internal_get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __cordl_internal_get__layoutProvider() const;

  constexpr void __cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr ::System::Action*& __cordl_internal_get__onCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get__onCompleted() const;

  constexpr void __cordl_internal_set__onCompleted(::System::Action* value);

  /// @brief Method Start, addr 0x23b3d98, size 0xa0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnValidate, addr 0x23b3ef8, size 0x7a4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method OnDestroy, addr 0x23b469c, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method AnimateOutro, addr 0x23a8084, size 0x1c0, virtual false, abstract: false, final false
  inline void AnimateOutro(::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData, ::System::Action* onCompleted);

  /// @brief Method BindOutroTimeline, addr 0x23b4808, size 0x6b4, virtual false, abstract: false, final false
  inline void BindOutroTimeline();

  /// @brief Method BindRingsAndAudio, addr 0x23b50dc, size 0x724, virtual false, abstract: false, final false
  inline void BindRingsAndAudio(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> rings, bool isMock, bool isDuel, ::UnityEngine::GameObject* resultsMocks);

  /// @brief Method Completed, addr 0x23b5e14, size 0x24, virtual false, abstract: false, final false
  inline void Completed();

  /// @brief Method HandlePlayerSpawningDidFinish, addr 0x23b3e38, size 0x24, virtual false, abstract: false, final false
  inline void HandlePlayerSpawningDidFinish();

  static inline ::GlobalNamespace::MultiplayerOutroAnimationController* New_ctor();

  /// @brief Method .ctor, addr 0x23b6238, size 0x8, virtual false, abstract: false, final false
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
  ::UnityW<::UnityEngine::Playables::PlayableDirector> ____outroPlayableDirector;

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
  ::UnityW<::UnityEngine::Transform> ____badgeStartTransform;

  /// @brief Field _badgeMidTransform, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____badgeMidTransform;

  /// @brief Field _songPreviewTrackName, offset: 0x78, size: 0x8, def value: None
  ::StringW ____songPreviewTrackName;

  /// @brief Field _resultsMocksActivationTrack, offset: 0x80, size: 0x8, def value: None
  ::StringW ____resultsMocksActivationTrack;

  /// @brief Field _multiplayerScoreRingManager, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> ____multiplayerScoreRingManager;

  /// @brief Field _multiplayerResultsPyramidView, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidView> ____multiplayerResultsPyramidView;

  /// @brief Field _multiplayerPlayersManager, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> ____multiplayerPlayersManager;

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

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____outroPlayableDirector) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____playerTimelineTrackNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____ringTimelineTrackNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____resultsTimelineTrackNames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____playerTimelinePropertyNames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____resultsTimelinePropertyNames) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____localPlayerTrackName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____localPlayerTimelinePropertyName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____badgeTimelineTrackNames) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____badgeTimelinePropertyNames) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____badgeStartTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____badgeMidTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____songPreviewTrackName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____resultsMocksActivationTrack) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____multiplayerScoreRingManager) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____multiplayerResultsPyramidView) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____multiplayerPlayersManager) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____multiplayerSessionManager) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____sceneSetupData) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____layoutProvider) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOutroAnimationController, ____onCompleted) == 0xb8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerOutroAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerOutroAnimationController*, "", "MultiplayerOutroAnimationController");

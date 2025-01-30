#pragma once
// IWYU pragma private; include "GlobalNamespace/StopPreviewPlayerOnTransitionDidFinish.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StopPreviewPlayerOnTransitionDidFinish)
namespace GlobalNamespace {
struct GameScenesManager_SceneTransitionType;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class StopPreviewPlayerOnTransitionDidFinish;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StopPreviewPlayerOnTransitionDidFinish);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StopPreviewPlayerOnTransitionDidFinish
class CORDL_TYPE StopPreviewPlayerOnTransitionDidFinish : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameScenesManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _songPreviewPlayer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer)) ::UnityW<::GlobalNamespace::SongPreviewPlayer> _songPreviewPlayer;

  /// @brief Method HandleTransitionDidFinish, addr 0x3ad80f8, size 0x18, virtual false, abstract: false, final false
  inline void HandleTransitionDidFinish(::GlobalNamespace::GameScenesManager_SceneTransitionType transitionType, ::GlobalNamespace::ScenesTransitionSetupDataSO* transitionSetupDataSo,
                                        ::Zenject::DiContainer* diContainer);

  static inline ::GlobalNamespace::StopPreviewPlayerOnTransitionDidFinish* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ad8028, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3ad7f98, size 0x90, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& __cordl_internal_get__songPreviewPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& __cordl_internal_get__songPreviewPlayer();

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value);

  /// @brief Method .ctor, addr 0x3ad8110, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StopPreviewPlayerOnTransitionDidFinish();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StopPreviewPlayerOnTransitionDidFinish", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StopPreviewPlayerOnTransitionDidFinish(StopPreviewPlayerOnTransitionDidFinish&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StopPreviewPlayerOnTransitionDidFinish", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StopPreviewPlayerOnTransitionDidFinish(StopPreviewPlayerOnTransitionDidFinish const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4035 };

  /// @brief Field _songPreviewPlayer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPreviewPlayer> ____songPreviewPlayer;

  /// @brief Field _gameScenesManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StopPreviewPlayerOnTransitionDidFinish, ____songPreviewPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopPreviewPlayerOnTransitionDidFinish, ____gameScenesManager) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StopPreviewPlayerOnTransitionDidFinish, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StopPreviewPlayerOnTransitionDidFinish);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StopPreviewPlayerOnTransitionDidFinish*, "", "StopPreviewPlayerOnTransitionDidFinish");

#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerDuelScoreManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerDuelScoreManager)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct MultiplayerController_State;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerScoreItem;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerDuelScoreManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerDuelScoreManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerDuelScoreManager
class CORDL_TYPE MultiplayerDuelScoreManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _delayBetweenScoreUpdates, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__delayBetweenScoreUpdates, put = __cordl_internal_set__delayBetweenScoreUpdates)) float_t _delayBetweenScoreUpdates;

  /// @brief Field _multiplayerController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerController, put = __cordl_internal_set__multiplayerController)) ::UnityW<::GlobalNamespace::MultiplayerController> _multiplayerController;

  /// @brief Field _multiplayerSessionManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _opponentPlayer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__opponentPlayer, put = __cordl_internal_set__opponentPlayer)) ::GlobalNamespace::IConnectedPlayer* _opponentPlayer;

  /// @brief Field _scoreItem, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreItem, put = __cordl_internal_set__scoreItem)) ::UnityW<::GlobalNamespace::MultiplayerScoreItem> _scoreItem;

  /// @brief Field _scoreProvider, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreProvider, put = __cordl_internal_set__scoreProvider)) ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> _scoreProvider;

  /// @brief Field _timeSinceLastScoreUpdate, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__timeSinceLastScoreUpdate, put = __cordl_internal_set__timeSinceLastScoreUpdate)) float_t _timeSinceLastScoreUpdate;

  /// @brief Method EnsureOpponentAssigned, addr 0x3bcf2b8, size 0x2c, virtual false, abstract: false, final false
  inline bool EnsureOpponentAssigned();

  /// @brief Method GetOpponentPlayer, addr 0x3bcf2e4, size 0x3d4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IConnectedPlayer* GetOpponentPlayer();

  /// @brief Method HandleStateChanged, addr 0x3bcf798, size 0xf4, virtual false, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::MultiplayerController_State newState);

  static inline ::GlobalNamespace::MultiplayerDuelScoreManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bcf184, size 0xcc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3bcede0, size 0xd0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3bcf250, size 0x68, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateScoreAndName, addr 0x3bcefcc, size 0x1b8, virtual false, abstract: false, final false
  inline void UpdateScoreAndName();

  constexpr float_t const& __cordl_internal_get__delayBetweenScoreUpdates() const;

  constexpr float_t& __cordl_internal_get__delayBetweenScoreUpdates();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get__multiplayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get__multiplayerController();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__opponentPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__opponentPlayer();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreItem> const& __cordl_internal_get__scoreItem() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreItem>& __cordl_internal_get__scoreItem();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& __cordl_internal_get__scoreProvider() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& __cordl_internal_get__scoreProvider();

  constexpr float_t const& __cordl_internal_get__timeSinceLastScoreUpdate() const;

  constexpr float_t& __cordl_internal_get__timeSinceLastScoreUpdate();

  constexpr void __cordl_internal_set__delayBetweenScoreUpdates(float_t value);

  constexpr void __cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__opponentPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__scoreItem(::UnityW<::GlobalNamespace::MultiplayerScoreItem> value);

  constexpr void __cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value);

  constexpr void __cordl_internal_set__timeSinceLastScoreUpdate(float_t value);

  /// @brief Method .ctor, addr 0x3bcf88c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerDuelScoreManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerDuelScoreManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerDuelScoreManager(MultiplayerDuelScoreManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerDuelScoreManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerDuelScoreManager(MultiplayerDuelScoreManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4562 };

  /// @brief Field _scoreItem, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreItem> ____scoreItem;

  /// @brief Field _delayBetweenScoreUpdates, offset: 0x28, size: 0x4, def value: None
  float_t ____delayBetweenScoreUpdates;

  /// @brief Field _multiplayerController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> ____multiplayerController;

  /// @brief Field _scoreProvider, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> ____scoreProvider;

  /// @brief Field _multiplayerSessionManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _opponentPlayer, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____opponentPlayer;

  /// @brief Field _timeSinceLastScoreUpdate, offset: 0x50, size: 0x4, def value: None
  float_t ____timeSinceLastScoreUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____scoreItem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____delayBetweenScoreUpdates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____multiplayerController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____scoreProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____multiplayerSessionManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____opponentPlayer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____timeSinceLastScoreUpdate) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerDuelScoreManager, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerDuelScoreManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerDuelScoreManager*, "", "MultiplayerDuelScoreManager");

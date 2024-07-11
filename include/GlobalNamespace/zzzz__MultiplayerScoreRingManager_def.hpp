#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerScoreRingManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerScoreRingManager)
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class MultiplayerScoreRingItem;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class __MultiplayerScoreRingItem__Pool;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerScoreRingManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreRingManager);
// Type: ::MultiplayerScoreRingManager
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 122, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerScoreRingManager*
class CORDL_TYPE MultiplayerScoreRingManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _allActivePlayers, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__allActivePlayers,
                      put = __cordl_internal_set__allActivePlayers))::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* _allActivePlayers;

  /// @brief Field _centerDistanceOffset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__centerDistanceOffset, put = __cordl_internal_set__centerDistanceOffset)) float_t _centerDistanceOffset;

  /// @brief Field _currentlyScoreUpdateIndex, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__currentlyScoreUpdateIndex, put = __cordl_internal_set__currentlyScoreUpdateIndex)) int32_t _currentlyScoreUpdateIndex;

  /// @brief Field _delayBetweenScoreUpdates, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__delayBetweenScoreUpdates, put = __cordl_internal_set__delayBetweenScoreUpdates)) float_t _delayBetweenScoreUpdates;

  /// @brief Field _firstPlayerItem, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__firstPlayerItem, put = __cordl_internal_set__firstPlayerItem))::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> _firstPlayerItem;

  /// @brief Field _layoutProvider, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__layoutProvider, put = __cordl_internal_set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _multiplayerController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerController, put = __cordl_internal_set__multiplayerController))::UnityW<::GlobalNamespace::MultiplayerController> _multiplayerController;

  /// @brief Field _multiplayerPlayersManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerPlayersManager,
                      put = __cordl_internal_set__multiplayerPlayersManager))::UnityW<::GlobalNamespace::MultiplayerPlayersManager> _multiplayerPlayersManager;

  /// @brief Field _multiplayerSessionManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _playersSpawned, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__playersSpawned, put = __cordl_internal_set__playersSpawned)) bool _playersSpawned;

  /// @brief Field _scoreProvider, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreProvider, put = __cordl_internal_set__scoreProvider))::UnityW<::GlobalNamespace::MultiplayerScoreProvider> _scoreProvider;

  /// @brief Field _scoreRingItemPool, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreRingItemPool, put = __cordl_internal_set__scoreRingItemPool))::GlobalNamespace::__MultiplayerScoreRingItem__Pool* _scoreRingItemPool;

  /// @brief Field _scoreRingItems, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreRingItems,
                      put = __cordl_internal_set__scoreRingItems))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>>* _scoreRingItems;

  /// @brief Field _spawnCenter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnCenter, put = __cordl_internal_set__spawnCenter))::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> _spawnCenter;

  /// @brief Field _spawnCenterDistanceFound, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__spawnCenterDistanceFound, put = __cordl_internal_set__spawnCenterDistanceFound)) bool _spawnCenterDistanceFound;

  /// @brief Field _timeSinceLastScoreUpdate, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__timeSinceLastScoreUpdate, put = __cordl_internal_set__timeSinceLastScoreUpdate)) float_t _timeSinceLastScoreUpdate;

  /// @brief Method AnimateColorsForAllPlayers, addr 0x2749540, size 0x1c8, virtual false, abstract: false, final false
  inline void AnimateColorsForAllPlayers(::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method AnimateColorsForPlayer, addr 0x27493c0, size 0x180, virtual false, abstract: false, final false
  inline void AnimateColorsForPlayer(::StringW userId, ::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method GetScoreRingItem, addr 0x273b6d4, size 0x104, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> GetScoreRingItem(::StringW userId);

  /// @brief Method GetScoreRingItems, addr 0x2743f78, size 0x220, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> GetScoreRingItems();

  /// @brief Method HandlePlayerDisconnected, addr 0x2749e5c, size 0x4, virtual false, abstract: false, final false
  inline void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerSpawningDidFinish, addr 0x2748898, size 0x18, virtual false, abstract: false, final false
  inline void HandlePlayerSpawningDidFinish();

  /// @brief Method HandlePlayerStateChanged, addr 0x2749e1c, size 0x40, virtual false, abstract: false, final false
  inline void HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleSpawnCenterDistanceWasFound, addr 0x2748880, size 0x18, virtual false, abstract: false, final false
  inline void HandleSpawnCenterDistanceWasFound(float_t spawnCenterDistance);

  /// @brief Method HandleStateChanged, addr 0x27488b0, size 0x4f4, virtual false, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  static inline ::GlobalNamespace::MultiplayerScoreRingManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x2748da4, size 0x354, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetPlayerToFailedState, addr 0x2749708, size 0x120, virtual false, abstract: false, final false
  inline void SetPlayerToFailedState(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method SpawnTexts, addr 0x2749840, size 0x5dc, virtual false, abstract: false, final false
  inline void SpawnTexts();

  /// @brief Method Start, addr 0x27486d0, size 0x1b0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TrySpawnTexts, addr 0x2749828, size 0x18, virtual false, abstract: false, final false
  inline void TrySpawnTexts();

  /// @brief Method Update, addr 0x27490f8, size 0xd4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateScore, addr 0x27491cc, size 0x1f4, virtual false, abstract: false, final false
  inline void UpdateScore(::GlobalNamespace::IConnectedPlayer* playerToUpdate);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get__allActivePlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*> const& __cordl_internal_get__allActivePlayers() const;

  constexpr float_t const& __cordl_internal_get__centerDistanceOffset() const;

  constexpr float_t& __cordl_internal_get__centerDistanceOffset();

  constexpr int32_t const& __cordl_internal_get__currentlyScoreUpdateIndex() const;

  constexpr int32_t& __cordl_internal_get__currentlyScoreUpdateIndex();

  constexpr float_t const& __cordl_internal_get__delayBetweenScoreUpdates() const;

  constexpr float_t& __cordl_internal_get__delayBetweenScoreUpdates();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> const& __cordl_internal_get__firstPlayerItem() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>& __cordl_internal_get__firstPlayerItem();

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __cordl_internal_get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __cordl_internal_get__layoutProvider() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get__multiplayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get__multiplayerController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& __cordl_internal_get__multiplayerPlayersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& __cordl_internal_get__multiplayerPlayersManager();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr bool const& __cordl_internal_get__playersSpawned() const;

  constexpr bool& __cordl_internal_get__playersSpawned();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& __cordl_internal_get__scoreProvider() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& __cordl_internal_get__scoreProvider();

  constexpr ::GlobalNamespace::__MultiplayerScoreRingItem__Pool*& __cordl_internal_get__scoreRingItemPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerScoreRingItem__Pool*> const& __cordl_internal_get__scoreRingItemPool() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>>*& __cordl_internal_get__scoreRingItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>>*> const&
  __cordl_internal_get__scoreRingItems() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> const& __cordl_internal_get__spawnCenter() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter>& __cordl_internal_get__spawnCenter();

  constexpr bool const& __cordl_internal_get__spawnCenterDistanceFound() const;

  constexpr bool& __cordl_internal_get__spawnCenterDistanceFound();

  constexpr float_t const& __cordl_internal_get__timeSinceLastScoreUpdate() const;

  constexpr float_t& __cordl_internal_get__timeSinceLastScoreUpdate();

  constexpr void __cordl_internal_set__allActivePlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set__centerDistanceOffset(float_t value);

  constexpr void __cordl_internal_set__currentlyScoreUpdateIndex(int32_t value);

  constexpr void __cordl_internal_set__delayBetweenScoreUpdates(float_t value);

  constexpr void __cordl_internal_set__firstPlayerItem(::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> value);

  constexpr void __cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr void __cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value);

  constexpr void __cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__playersSpawned(bool value);

  constexpr void __cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value);

  constexpr void __cordl_internal_set__scoreRingItemPool(::GlobalNamespace::__MultiplayerScoreRingItem__Pool* value);

  constexpr void __cordl_internal_set__scoreRingItems(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>>* value);

  constexpr void __cordl_internal_set__spawnCenter(::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> value);

  constexpr void __cordl_internal_set__spawnCenterDistanceFound(bool value);

  constexpr void __cordl_internal_set__timeSinceLastScoreUpdate(float_t value);

  /// @brief Method .ctor, addr 0x2749e60, size 0x1088, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreRingManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerScoreRingManager(MultiplayerScoreRingManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerScoreRingManager(MultiplayerScoreRingManager const&) = delete;

  /// @brief Field _delayBetweenScoreUpdates, offset: 0x18, size: 0x4, def value: None
  float_t ____delayBetweenScoreUpdates;

  /// @brief Field _centerDistanceOffset, offset: 0x1c, size: 0x4, def value: None
  float_t ____centerDistanceOffset;

  /// @brief Field _multiplayerController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> ____multiplayerController;

  /// @brief Field _multiplayerPlayersManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> ____multiplayerPlayersManager;

  /// @brief Field _multiplayerSessionManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _spawnCenter, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> ____spawnCenter;

  /// @brief Field _layoutProvider, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _scoreProvider, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> ____scoreProvider;

  /// @brief Field _scoreRingItemPool, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerScoreRingItem__Pool* ____scoreRingItemPool;

  /// @brief Field _scoreRingItems, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>>* ____scoreRingItems;

  /// @brief Field _allActivePlayers, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* ____allActivePlayers;

  /// @brief Field _currentlyScoreUpdateIndex, offset: 0x68, size: 0x4, def value: None
  int32_t ____currentlyScoreUpdateIndex;

  /// @brief Field _timeSinceLastScoreUpdate, offset: 0x6c, size: 0x4, def value: None
  float_t ____timeSinceLastScoreUpdate;

  /// @brief Field _firstPlayerItem, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> ____firstPlayerItem;

  /// @brief Field _spawnCenterDistanceFound, offset: 0x78, size: 0x1, def value: None
  bool ____spawnCenterDistanceFound;

  /// @brief Field _playersSpawned, offset: 0x79, size: 0x1, def value: None
  bool ____playersSpawned;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreRingManager, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____delayBetweenScoreUpdates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____centerDistanceOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____multiplayerController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____multiplayerPlayersManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____multiplayerSessionManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____spawnCenter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____layoutProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____scoreProvider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____scoreRingItemPool) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____scoreRingItems) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____allActivePlayers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____currentlyScoreUpdateIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____timeSinceLastScoreUpdate) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____firstPlayerItem) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____spawnCenterDistanceFound) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreRingManager, ____playersSpawned) == 0x79, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreRingManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreRingManager*, "", "MultiplayerScoreRingManager");

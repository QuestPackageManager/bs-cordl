#pragma once
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
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class MultiplayerScoreRingItem;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class __MultiplayerScoreRingItem__Pool;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5254))
// CS Name: ::MultiplayerScoreRingManager*
class CORDL_TYPE MultiplayerScoreRingManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _delayBetweenScoreUpdates, offset 0x18, size 0x4
  __declspec(property(get = __get__delayBetweenScoreUpdates, put = __set__delayBetweenScoreUpdates)) float_t _delayBetweenScoreUpdates;

  /// @brief Field _centerDistanceOffset, offset 0x1c, size 0x4
  __declspec(property(get = __get__centerDistanceOffset, put = __set__centerDistanceOffset)) float_t _centerDistanceOffset;

  /// @brief Field _multiplayerController, offset 0x20, size 0x8
  __declspec(property(get = __get__multiplayerController, put = __set__multiplayerController))::GlobalNamespace::MultiplayerController* _multiplayerController;

  /// @brief Field _multiplayerPlayersManager, offset 0x28, size 0x8
  __declspec(property(get = __get__multiplayerPlayersManager, put = __set__multiplayerPlayersManager))::GlobalNamespace::MultiplayerPlayersManager* _multiplayerPlayersManager;

  /// @brief Field _multiplayerSessionManager, offset 0x30, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _spawnCenter, offset 0x38, size 0x8
  __declspec(property(get = __get__spawnCenter, put = __set__spawnCenter))::GlobalNamespace::BeatmapObjectSpawnCenter* _spawnCenter;

  /// @brief Field _layoutProvider, offset 0x40, size 0x8
  __declspec(property(get = __get__layoutProvider, put = __set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _scoreProvider, offset 0x48, size 0x8
  __declspec(property(get = __get__scoreProvider, put = __set__scoreProvider))::GlobalNamespace::MultiplayerScoreProvider* _scoreProvider;

  /// @brief Field _scoreRingItemPool, offset 0x50, size 0x8
  __declspec(property(get = __get__scoreRingItemPool, put = __set__scoreRingItemPool))::GlobalNamespace::__MultiplayerScoreRingItem__Pool* _scoreRingItemPool;

  /// @brief Field _scoreRingItems, offset 0x58, size 0x8
  __declspec(property(get = __get__scoreRingItems, put = __set__scoreRingItems))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreRingItem*>* _scoreRingItems;

  /// @brief Field _allActivePlayers, offset 0x60, size 0x8
  __declspec(property(get = __get__allActivePlayers, put = __set__allActivePlayers))::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* _allActivePlayers;

  /// @brief Field _currentlyScoreUpdateIndex, offset 0x68, size 0x4
  __declspec(property(get = __get__currentlyScoreUpdateIndex, put = __set__currentlyScoreUpdateIndex)) int32_t _currentlyScoreUpdateIndex;

  /// @brief Field _timeSinceLastScoreUpdate, offset 0x6c, size 0x4
  __declspec(property(get = __get__timeSinceLastScoreUpdate, put = __set__timeSinceLastScoreUpdate)) float_t _timeSinceLastScoreUpdate;

  /// @brief Field _firstPlayerItem, offset 0x70, size 0x8
  __declspec(property(get = __get__firstPlayerItem, put = __set__firstPlayerItem))::GlobalNamespace::MultiplayerScoreRingItem* _firstPlayerItem;

  /// @brief Field _spawnCenterDistanceFound, offset 0x78, size 0x1
  __declspec(property(get = __get__spawnCenterDistanceFound, put = __set__spawnCenterDistanceFound)) bool _spawnCenterDistanceFound;

  /// @brief Field _playersSpawned, offset 0x79, size 0x1
  __declspec(property(get = __get__playersSpawned, put = __set__playersSpawned)) bool _playersSpawned;

  constexpr float_t& __get__delayBetweenScoreUpdates();

  constexpr float_t const& __get__delayBetweenScoreUpdates() const;

  constexpr void __set__delayBetweenScoreUpdates(float_t value);

  constexpr float_t& __get__centerDistanceOffset();

  constexpr float_t const& __get__centerDistanceOffset() const;

  constexpr void __set__centerDistanceOffset(float_t value);

  constexpr ::GlobalNamespace::MultiplayerController*& __get__multiplayerController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> const& __get__multiplayerController() const;

  constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController* value);

  constexpr ::GlobalNamespace::MultiplayerPlayersManager*& __get__multiplayerPlayersManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> const& __get__multiplayerPlayersManager() const;

  constexpr void __set__multiplayerPlayersManager(::GlobalNamespace::MultiplayerPlayersManager* value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::BeatmapObjectSpawnCenter*& __get__spawnCenter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnCenter*> const& __get__spawnCenter() const;

  constexpr void __set__spawnCenter(::GlobalNamespace::BeatmapObjectSpawnCenter* value);

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __get__layoutProvider() const;

  constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr ::GlobalNamespace::MultiplayerScoreProvider*& __get__scoreProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> const& __get__scoreProvider() const;

  constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider* value);

  constexpr ::GlobalNamespace::__MultiplayerScoreRingItem__Pool*& __get__scoreRingItemPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerScoreRingItem__Pool*> const& __get__scoreRingItemPool() const;

  constexpr void __set__scoreRingItemPool(::GlobalNamespace::__MultiplayerScoreRingItem__Pool* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreRingItem*>*& __get__scoreRingItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreRingItem*>*> const& __get__scoreRingItems() const;

  constexpr void __set__scoreRingItems(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreRingItem*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& __get__allActivePlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get__allActivePlayers() const;

  constexpr void __set__allActivePlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr int32_t& __get__currentlyScoreUpdateIndex();

  constexpr int32_t const& __get__currentlyScoreUpdateIndex() const;

  constexpr void __set__currentlyScoreUpdateIndex(int32_t value);

  constexpr float_t& __get__timeSinceLastScoreUpdate();

  constexpr float_t const& __get__timeSinceLastScoreUpdate() const;

  constexpr void __set__timeSinceLastScoreUpdate(float_t value);

  constexpr ::GlobalNamespace::MultiplayerScoreRingItem*& __get__firstPlayerItem();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreRingItem*> const& __get__firstPlayerItem() const;

  constexpr void __set__firstPlayerItem(::GlobalNamespace::MultiplayerScoreRingItem* value);

  constexpr bool& __get__spawnCenterDistanceFound();

  constexpr bool const& __get__spawnCenterDistanceFound() const;

  constexpr void __set__spawnCenterDistanceFound(bool value);

  constexpr bool& __get__playersSpawned();

  constexpr bool const& __get__playersSpawned() const;

  constexpr void __set__playersSpawned(bool value);

  /// @brief Method Start, addr 0x2259aa4, size 0x1b0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x225a178, size 0x354, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x225a4cc, size 0xd4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateScore, addr 0x225a5a0, size 0x1f4, virtual false, abstract: false, final false
  inline void UpdateScore(::GlobalNamespace::IConnectedPlayer* playerToUpdate);

  /// @brief Method AnimateColorsForPlayer, addr 0x225a794, size 0x180, virtual false, abstract: false, final false
  inline void AnimateColorsForPlayer(::StringW userId, ::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method GetScoreRingItem, addr 0x224e130, size 0x104, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerScoreRingItem* GetScoreRingItem(::StringW userId);

  /// @brief Method GetScoreRingItems, addr 0x2254f18, size 0x220, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> GetScoreRingItems();

  /// @brief Method AnimateColorsForAllPlayers, addr 0x225a914, size 0x1c8, virtual false, abstract: false, final false
  inline void AnimateColorsForAllPlayers(::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method SetPlayerToFailedState, addr 0x225aadc, size 0x120, virtual false, abstract: false, final false
  inline void SetPlayerToFailedState(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method TrySpawnTexts, addr 0x225abfc, size 0x18, virtual false, abstract: false, final false
  inline void TrySpawnTexts();

  /// @brief Method SpawnTexts, addr 0x225ac14, size 0x5dc, virtual false, abstract: false, final false
  inline void SpawnTexts();

  /// @brief Method HandleStateChanged, addr 0x2259c84, size 0x4f4, virtual false, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  /// @brief Method HandleSpawnCenterDistanceWasFound, addr 0x2259c54, size 0x18, virtual false, abstract: false, final false
  inline void HandleSpawnCenterDistanceWasFound(float_t spawnCenterDistance);

  /// @brief Method HandlePlayerSpawningDidFinish, addr 0x2259c6c, size 0x18, virtual false, abstract: false, final false
  inline void HandlePlayerSpawningDidFinish();

  /// @brief Method HandlePlayerStateChanged, addr 0x225b1f0, size 0x40, virtual false, abstract: false, final false
  inline void HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerDisconnected, addr 0x225b230, size 0x4, virtual false, abstract: false, final false
  inline void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);

  static inline ::GlobalNamespace::MultiplayerScoreRingManager* New_ctor();

  /// @brief Method .ctor, addr 0x225b234, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerScoreRingManager(MultiplayerScoreRingManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerScoreRingManager(MultiplayerScoreRingManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreRingManager();

public:
  /// @brief Field _delayBetweenScoreUpdates, offset: 0x18, size: 0x4, def value: None
  float_t ____delayBetweenScoreUpdates;

  /// @brief Field _centerDistanceOffset, offset: 0x1c, size: 0x4, def value: None
  float_t ____centerDistanceOffset;

  /// @brief Field _multiplayerController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerController* ____multiplayerController;

  /// @brief Field _multiplayerPlayersManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerPlayersManager* ____multiplayerPlayersManager;

  /// @brief Field _multiplayerSessionManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _spawnCenter, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectSpawnCenter* ____spawnCenter;

  /// @brief Field _layoutProvider, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _scoreProvider, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreProvider* ____scoreProvider;

  /// @brief Field _scoreRingItemPool, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerScoreRingItem__Pool* ____scoreRingItemPool;

  /// @brief Field _scoreRingItems, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreRingItem*>* ____scoreRingItems;

  /// @brief Field _allActivePlayers, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* ____allActivePlayers;

  /// @brief Field _currentlyScoreUpdateIndex, offset: 0x68, size: 0x4, def value: None
  int32_t ____currentlyScoreUpdateIndex;

  /// @brief Field _timeSinceLastScoreUpdate, offset: 0x6c, size: 0x4, def value: None
  float_t ____timeSinceLastScoreUpdate;

  /// @brief Field _firstPlayerItem, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreRingItem* ____firstPlayerItem;

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

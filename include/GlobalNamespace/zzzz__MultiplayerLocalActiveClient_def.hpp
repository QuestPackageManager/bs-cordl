#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLocalActiveClient)
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace GlobalNamespace {
class ComboController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class IScoreSyncStateManager;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class ObstacleData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActiveClient;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActiveClient);
// Type: ::MultiplayerLocalActiveClient
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5252))
// CS Name: ::MultiplayerLocalActiveClient*
class CORDL_TYPE MultiplayerLocalActiveClient : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _playerTransforms, offset 0x18, size 0x8
  __declspec(property(get = __get__playerTransforms, put = __set__playerTransforms))::GlobalNamespace::PlayerTransforms* _playerTransforms;

  /// @brief Field _audioTimeSyncController, offset 0x20, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  /// @brief Field _scoreSyncStateManager, offset 0x28, size 0x8
  __declspec(property(get = __get__scoreSyncStateManager, put = __set__scoreSyncStateManager))::GlobalNamespace::IScoreSyncStateManager* _scoreSyncStateManager;

  /// @brief Field _nodePoseSyncStateManager, offset 0x30, size 0x8
  __declspec(property(get = __get__nodePoseSyncStateManager, put = __set__nodePoseSyncStateManager))::GlobalNamespace::INodePoseSyncStateManager* _nodePoseSyncStateManager;

  /// @brief Field _rpcManager, offset 0x38, size 0x8
  __declspec(property(get = __get__rpcManager, put = __set__rpcManager))::GlobalNamespace::IGameplayRpcManager* _rpcManager;

  /// @brief Field _beatmapObjectManager, offset 0x40, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _scoreController, offset 0x48, size 0x8
  __declspec(property(get = __get__scoreController, put = __set__scoreController))::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Field _comboController, offset 0x50, size 0x8
  __declspec(property(get = __get__comboController, put = __set__comboController))::GlobalNamespace::ComboController* _comboController;

  constexpr ::GlobalNamespace::PlayerTransforms*& __get__playerTransforms();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> const& __get__playerTransforms() const;

  constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms* value);

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  constexpr ::GlobalNamespace::IScoreSyncStateManager*& __get__scoreSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreSyncStateManager*> const& __get__scoreSyncStateManager() const;

  constexpr void __set__scoreSyncStateManager(::GlobalNamespace::IScoreSyncStateManager* value);

  constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __get__nodePoseSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& __get__nodePoseSyncStateManager() const;

  constexpr void __set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value);

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __get__rpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& __get__rpcManager() const;

  constexpr void __set__rpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::GlobalNamespace::IScoreController*& __get__scoreController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& __get__scoreController() const;

  constexpr void __set__scoreController(::GlobalNamespace::IScoreController* value);

  constexpr ::GlobalNamespace::ComboController*& __get__comboController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ComboController*> const& __get__comboController() const;

  constexpr void __set__comboController(::GlobalNamespace::ComboController* value);

  /// @brief Method Start addr 0x20f6dd0 size 0x6e0 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x20f74b0 size 0x434 virtual false final false
  inline void OnDestroy();

  /// @brief Method LateUpdate addr 0x20f78e4 size 0x348 virtual false final false
  inline void LateUpdate();

  /// @brief Method HandleNoteWasAdded addr 0x20f7c2c size 0x160 virtual false final false
  inline void HandleNoteWasAdded(::GlobalNamespace::NoteData* noteData, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData, float_t rotation);

  /// @brief Method HandleObstacleWasAdded addr 0x20f7d8c size 0x140 virtual false final false
  inline void HandleObstacleWasAdded(::GlobalNamespace::ObstacleData* obstacleData, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData obstacleSpawnData, float_t rotation);

  /// @brief Method HandleSliderWasAdded addr 0x20f7ecc size 0x1d4 virtual false final false
  inline void HandleSliderWasAdded(::GlobalNamespace::SliderData* sliderData, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData, float_t rotation);

  /// @brief Method HandleNoteWasMissed addr 0x20f80a0 size 0xfc virtual false final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteWasCut addr 0x20f819c size 0x1c4 virtual false final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleComboDidChange addr 0x20f8360 size 0xcc virtual false final false
  inline void HandleComboDidChange(int32_t combo);

  /// @brief Method HandleMultiplierDidChange addr 0x20f842c size 0xcc virtual false final false
  inline void HandleMultiplierDidChange(int32_t multiplier, float_t multiplierProgress);

  /// @brief Method HandleScoreDidChange addr 0x20f84f8 size 0x254 virtual false final false
  inline void HandleScoreDidChange(int32_t multipliedScore, int32_t modifiedScore);

  static inline ::GlobalNamespace::MultiplayerLocalActiveClient* New_ctor();

  /// @brief Method .ctor addr 0x20f874c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActiveClient(MultiplayerLocalActiveClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActiveClient(MultiplayerLocalActiveClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActiveClient();

public:
  /// @brief Field _playerTransforms, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerTransforms* ____playerTransforms;

  /// @brief Field _audioTimeSyncController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field _scoreSyncStateManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IScoreSyncStateManager* ____scoreSyncStateManager;

  /// @brief Field _nodePoseSyncStateManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::INodePoseSyncStateManager* ____nodePoseSyncStateManager;

  /// @brief Field _rpcManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____rpcManager;

  /// @brief Field _beatmapObjectManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _scoreController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _comboController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ComboController* ____comboController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActiveClient, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____playerTransforms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____audioTimeSyncController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____scoreSyncStateManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____nodePoseSyncStateManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____rpcManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____beatmapObjectManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____scoreController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____comboController) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActiveClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActiveClient*, "", "MultiplayerLocalActiveClient");

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
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class ComboController;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class IScoreSyncStateManager;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5147))
// CS Name: ::MultiplayerLocalActiveClient*
class CORDL_TYPE MultiplayerLocalActiveClient : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _playerTransforms, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms))::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field _audioTimeSyncController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController,
                      put = __cordl_internal_set__audioTimeSyncController))::UnityW<::GlobalNamespace::AudioTimeSyncController> _audioTimeSyncController;

  /// @brief Field _scoreSyncStateManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreSyncStateManager, put = __cordl_internal_set__scoreSyncStateManager))::GlobalNamespace::IScoreSyncStateManager* _scoreSyncStateManager;

  /// @brief Field _nodePoseSyncStateManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nodePoseSyncStateManager,
                      put = __cordl_internal_set__nodePoseSyncStateManager))::GlobalNamespace::INodePoseSyncStateManager* _nodePoseSyncStateManager;

  /// @brief Field _rpcManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rpcManager, put = __cordl_internal_set__rpcManager))::GlobalNamespace::IGameplayRpcManager* _rpcManager;

  /// @brief Field _beatmapObjectManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _scoreController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController))::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Field _comboController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__comboController, put = __cordl_internal_set__comboController))::UnityW<::GlobalNamespace::ComboController> _comboController;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr ::GlobalNamespace::IScoreSyncStateManager*& __cordl_internal_get__scoreSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreSyncStateManager*> const& __cordl_internal_get__scoreSyncStateManager() const;

  constexpr void __cordl_internal_set__scoreSyncStateManager(::GlobalNamespace::IScoreSyncStateManager* value);

  constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __cordl_internal_get__nodePoseSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& __cordl_internal_get__nodePoseSyncStateManager() const;

  constexpr void __cordl_internal_set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value);

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __cordl_internal_get__rpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& __cordl_internal_get__rpcManager() const;

  constexpr void __cordl_internal_set__rpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& __cordl_internal_get__scoreController() const;

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  constexpr ::UnityW<::GlobalNamespace::ComboController>& __cordl_internal_get__comboController();

  constexpr ::UnityW<::GlobalNamespace::ComboController> const& __cordl_internal_get__comboController() const;

  constexpr void __cordl_internal_set__comboController(::UnityW<::GlobalNamespace::ComboController> value);

  /// @brief Method Start, addr 0x23d8948, size 0x6e0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23d9028, size 0x434, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method LateUpdate, addr 0x23d945c, size 0x348, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method HandleNoteWasAdded, addr 0x23d97a4, size 0x160, virtual false, abstract: false, final false
  inline void HandleNoteWasAdded(::GlobalNamespace::NoteData* noteData, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData, float_t rotation);

  /// @brief Method HandleObstacleWasAdded, addr 0x23d9904, size 0x140, virtual false, abstract: false, final false
  inline void HandleObstacleWasAdded(::GlobalNamespace::ObstacleData* obstacleData, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData obstacleSpawnData, float_t rotation);

  /// @brief Method HandleSliderWasAdded, addr 0x23d9a44, size 0x1d4, virtual false, abstract: false, final false
  inline void HandleSliderWasAdded(::GlobalNamespace::SliderData* sliderData, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData, float_t rotation);

  /// @brief Method HandleNoteWasMissed, addr 0x23d9c18, size 0xfc, virtual false, abstract: false, final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteWasCut, addr 0x23d9d14, size 0x1c4, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleComboDidChange, addr 0x23d9ed8, size 0xcc, virtual false, abstract: false, final false
  inline void HandleComboDidChange(int32_t combo);

  /// @brief Method HandleMultiplierDidChange, addr 0x23d9fa4, size 0xcc, virtual false, abstract: false, final false
  inline void HandleMultiplierDidChange(int32_t multiplier, float_t multiplierProgress);

  /// @brief Method HandleScoreDidChange, addr 0x23da070, size 0x254, virtual false, abstract: false, final false
  inline void HandleScoreDidChange(int32_t multipliedScore, int32_t modifiedScore);

  static inline ::GlobalNamespace::MultiplayerLocalActiveClient* New_ctor();

  /// @brief Method .ctor, addr 0x23da2c4, size 0x8, virtual false, abstract: false, final false
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
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field _audioTimeSyncController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

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
  ::UnityW<::GlobalNamespace::ComboController> ____comboController;

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

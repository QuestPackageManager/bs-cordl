#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalActiveClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
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
struct NoteSpawnData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
struct ObstacleSpawnData;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct SliderSpawnData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActiveClient;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActiveClient);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalActiveClient
class CORDL_TYPE MultiplayerLocalActiveClient : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _beatmapObjectManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _comboController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__comboController, put = __cordl_internal_set__comboController)) ::UnityW<::GlobalNamespace::ComboController> _comboController;

  /// @brief Field _nodePoseSyncStateManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__nodePoseSyncStateManager,
                      put = __cordl_internal_set__nodePoseSyncStateManager)) ::GlobalNamespace::INodePoseSyncStateManager* _nodePoseSyncStateManager;

  /// @brief Field _playerTransforms, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms)) ::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field _rpcManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rpcManager, put = __cordl_internal_set__rpcManager)) ::GlobalNamespace::IGameplayRpcManager* _rpcManager;

  /// @brief Field _scoreController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController)) ::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Field _scoreSyncStateManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreSyncStateManager, put = __cordl_internal_set__scoreSyncStateManager)) ::GlobalNamespace::IScoreSyncStateManager* _scoreSyncStateManager;

  /// @brief Method HandleComboDidChange, addr 0x581a16c, size 0xdc, virtual false, abstract: false, final false
  inline void HandleComboDidChange(int32_t combo);

  /// @brief Method HandleMultiplierDidChange, addr 0x581a248, size 0xdc, virtual false, abstract: false, final false
  inline void HandleMultiplierDidChange(int32_t multiplier, float_t multiplierProgress);

  /// @brief Method HandleNoteWasAdded, addr 0x5819a50, size 0x160, virtual false, abstract: false, final false
  inline void HandleNoteWasAdded(::GlobalNamespace::NoteData* noteData, ::GlobalNamespace::NoteSpawnData noteSpawnData);

  /// @brief Method HandleNoteWasCut, addr 0x5819fa8, size 0x1c4, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleNoteWasMissed, addr 0x5819e98, size 0x110, virtual false, abstract: false, final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleObstacleWasAdded, addr 0x5819bb0, size 0x15c, virtual false, abstract: false, final false
  inline void HandleObstacleWasAdded(::GlobalNamespace::ObstacleData* obstacleData, ::GlobalNamespace::ObstacleSpawnData obstacleSpawnData, float_t rotation);

  /// @brief Method HandleScoreDidChange, addr 0x581a324, size 0x25c, virtual false, abstract: false, final false
  inline void HandleScoreDidChange(int32_t multipliedScore, int32_t modifiedScore);

  /// @brief Method HandleSliderWasAdded, addr 0x5819d0c, size 0x18c, virtual false, abstract: false, final false
  inline void HandleSliderWasAdded(::GlobalNamespace::SliderData* sliderData, ::GlobalNamespace::SliderSpawnData sliderSpawnData);

  /// @brief Method LateUpdate, addr 0x5819740, size 0x310, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MultiplayerLocalActiveClient* New_ctor();

  /// @brief Method OnDestroy, addr 0x5819270, size 0x4d0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x5818b2c, size 0x744, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::UnityW<::GlobalNamespace::ComboController> const& __cordl_internal_get__comboController() const;

  constexpr ::UnityW<::GlobalNamespace::ComboController>& __cordl_internal_get__comboController();

  constexpr ::GlobalNamespace::INodePoseSyncStateManager* const& __cordl_internal_get__nodePoseSyncStateManager() const;

  constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __cordl_internal_get__nodePoseSyncStateManager();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr ::GlobalNamespace::IGameplayRpcManager* const& __cordl_internal_get__rpcManager() const;

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __cordl_internal_get__rpcManager();

  constexpr ::GlobalNamespace::IScoreController* const& __cordl_internal_get__scoreController() const;

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr ::GlobalNamespace::IScoreSyncStateManager* const& __cordl_internal_get__scoreSyncStateManager() const;

  constexpr ::GlobalNamespace::IScoreSyncStateManager*& __cordl_internal_get__scoreSyncStateManager();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__comboController(::UnityW<::GlobalNamespace::ComboController> value);

  constexpr void __cordl_internal_set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set__rpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  constexpr void __cordl_internal_set__scoreSyncStateManager(::GlobalNamespace::IScoreSyncStateManager* value);

  /// @brief Method .ctor, addr 0x581a580, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActiveClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActiveClient(MultiplayerLocalActiveClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActiveClient(MultiplayerLocalActiveClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6093 };

  /// @brief Field _playerTransforms, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field _audioTimeSyncController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _scoreSyncStateManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IScoreSyncStateManager* ____scoreSyncStateManager;

  /// @brief Field _nodePoseSyncStateManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::INodePoseSyncStateManager* ____nodePoseSyncStateManager;

  /// @brief Field _rpcManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____rpcManager;

  /// @brief Field _beatmapObjectManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _scoreController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _comboController, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ComboController> ____comboController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____playerTransforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____audioTimeSyncController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____scoreSyncStateManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____nodePoseSyncStateManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____rpcManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____beatmapObjectManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____scoreController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveClient, ____comboController) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActiveClient, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActiveClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActiveClient*, "", "MultiplayerLocalActiveClient");

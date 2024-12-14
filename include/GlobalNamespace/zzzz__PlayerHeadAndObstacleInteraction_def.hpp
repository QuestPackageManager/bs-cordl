#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerHeadAndObstacleInteraction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerHeadAndObstacleInteraction)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerHeadAndObstacleInteraction);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerHeadAndObstacleInteraction
class CORDL_TYPE PlayerHeadAndObstacleInteraction : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _intersectingObstacles, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__intersectingObstacles,
                      put = __cordl_internal_set__intersectingObstacles)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>* _intersectingObstacles;

  /// @brief Field _lastFrameNumCheck, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameNumCheck, put = __cordl_internal_set__lastFrameNumCheck)) int32_t _lastFrameNumCheck;

  /// @brief Field _playerTransforms, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms)) ::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field _prevFrameNumberOfIntersectingObstaclesCount, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__prevFrameNumberOfIntersectingObstaclesCount,
                      put = __cordl_internal_set__prevFrameNumberOfIntersectingObstaclesCount)) int32_t _prevFrameNumberOfIntersectingObstaclesCount;

  /// @brief Field headDidEnterObstacleEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_headDidEnterObstacleEvent,
                      put = __cordl_internal_set_headDidEnterObstacleEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* headDidEnterObstacleEvent;

  /// @brief Field headDidEnterObstaclesEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_headDidEnterObstaclesEvent, put = __cordl_internal_set_headDidEnterObstaclesEvent)) ::System::Action* headDidEnterObstaclesEvent;

  __declspec(property(get = get_playerHeadIsInObstacle)) bool playerHeadIsInObstacle;

  static inline ::GlobalNamespace::PlayerHeadAndObstacleInteraction* New_ctor();

  /// @brief Method RefreshIntersectingObstacles, addr 0x3be35ac, size 0x310, virtual false, abstract: false, final false
  inline void RefreshIntersectingObstacles(::UnityEngine::Vector3 worldPos);

  /// @brief Method Update, addr 0x3be38bc, size 0x8c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& __cordl_internal_get__intersectingObstacles() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get__intersectingObstacles();

  constexpr int32_t const& __cordl_internal_get__lastFrameNumCheck() const;

  constexpr int32_t& __cordl_internal_get__lastFrameNumCheck();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr int32_t const& __cordl_internal_get__prevFrameNumberOfIntersectingObstaclesCount() const;

  constexpr int32_t& __cordl_internal_get__prevFrameNumberOfIntersectingObstaclesCount();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& __cordl_internal_get_headDidEnterObstacleEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get_headDidEnterObstacleEvent();

  constexpr ::System::Action* const& __cordl_internal_get_headDidEnterObstaclesEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_headDidEnterObstaclesEvent();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__intersectingObstacles(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set__lastFrameNumCheck(int32_t value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set__prevFrameNumberOfIntersectingObstaclesCount(int32_t value);

  constexpr void __cordl_internal_set_headDidEnterObstacleEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set_headDidEnterObstaclesEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3be3948, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_headDidEnterObstacleEvent, addr 0x3be33fc, size 0xb0, virtual false, abstract: false, final false
  inline void add_headDidEnterObstacleEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method add_headDidEnterObstaclesEvent, addr 0x3be32c4, size 0x9c, virtual false, abstract: false, final false
  inline void add_headDidEnterObstaclesEvent(::System::Action* value);

  /// @brief Method get_playerHeadIsInObstacle, addr 0x3be355c, size 0x50, virtual false, abstract: false, final false
  inline bool get_playerHeadIsInObstacle();

  /// @brief Method remove_headDidEnterObstacleEvent, addr 0x3be34ac, size 0xb0, virtual false, abstract: false, final false
  inline void remove_headDidEnterObstacleEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method remove_headDidEnterObstaclesEvent, addr 0x3be3360, size 0x9c, virtual false, abstract: false, final false
  inline void remove_headDidEnterObstaclesEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerHeadAndObstacleInteraction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeadAndObstacleInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerHeadAndObstacleInteraction(PlayerHeadAndObstacleInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeadAndObstacleInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerHeadAndObstacleInteraction(PlayerHeadAndObstacleInteraction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4632 };

  /// @brief Field _playerTransforms, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field _beatmapObjectManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field headDidEnterObstaclesEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___headDidEnterObstaclesEvent;

  /// @brief Field headDidEnterObstacleEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* ___headDidEnterObstacleEvent;

  /// @brief Field _lastFrameNumCheck, offset: 0x40, size: 0x4, def value: None
  int32_t ____lastFrameNumCheck;

  /// @brief Field _intersectingObstacles, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>* ____intersectingObstacles;

  /// @brief Field _prevFrameNumberOfIntersectingObstaclesCount, offset: 0x50, size: 0x4, def value: None
  int32_t ____prevFrameNumberOfIntersectingObstaclesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ____playerTransforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ____beatmapObjectManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ___headDidEnterObstaclesEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ___headDidEnterObstacleEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ____lastFrameNumCheck) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ____intersectingObstacles) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ____prevFrameNumberOfIntersectingObstaclesCount) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerHeadAndObstacleInteraction, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerHeadAndObstacleInteraction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeadAndObstacleInteraction*, "", "PlayerHeadAndObstacleInteraction");

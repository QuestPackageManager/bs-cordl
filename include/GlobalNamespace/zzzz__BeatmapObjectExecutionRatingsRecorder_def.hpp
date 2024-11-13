#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectExecutionRatingsRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BeatmapObjectExecutionRatingsRecorder)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapObjectExecutionRating;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace GlobalNamespace {
class ScoringElement;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectExecutionRatingsRecorder;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder);
// Type: ::BeatmapObjectExecutionRatingsRecorder
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapObjectExecutionRatingsRecorder*
class CORDL_TYPE BeatmapObjectExecutionRatingsRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _beatmapObjectExecutionRatings, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get__beatmapObjectExecutionRatings,
      put = __cordl_internal_set__beatmapObjectExecutionRatings)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>* _beatmapObjectExecutionRatings;

  /// @brief Field _beatmapObjectManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _hitObstacles, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__hitObstacles,
                      put = __cordl_internal_set__hitObstacles)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>* _hitObstacles;

  /// @brief Field _playerHeadAndObstacleInteraction, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeadAndObstacleInteraction,
                      put = __cordl_internal_set__playerHeadAndObstacleInteraction)) ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>
      _playerHeadAndObstacleInteraction;

  /// @brief Field _scoreController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController)) ::GlobalNamespace::IScoreController* _scoreController;

  __declspec(property(get = get_beatmapObjectExecutionRatings)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>* beatmapObjectExecutionRatings;

  /// @brief Method HandleObstacleDidPassAvoidedMark, addr 0x3a84bb4, size 0x154, virtual false, abstract: false, final false
  inline void HandleObstacleDidPassAvoidedMark(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandlePlayerHeadDidEnterObstacle, addr 0x3a84a9c, size 0x118, virtual false, abstract: false, final false
  inline void HandlePlayerHeadDidEnterObstacle(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleScoringForNoteDidFinish, addr 0x3a8462c, size 0x470, virtual false, abstract: false, final false
  inline void HandleScoringForNoteDidFinish(::GlobalNamespace::ScoringElement* scoringElement);

  static inline ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* New_ctor();

  /// @brief Method OnDestroy, addr 0x3a8439c, size 0x1e0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3a84158, size 0x194, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>*& __cordl_internal_get__beatmapObjectExecutionRatings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>*> const&
  __cordl_internal_get__beatmapObjectExecutionRatings() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get__hitObstacles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const& __cordl_internal_get__hitObstacles() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> const& __cordl_internal_get__playerHeadAndObstacleInteraction() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>& __cordl_internal_get__playerHeadAndObstacleInteraction();

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& __cordl_internal_get__scoreController() const;

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__beatmapObjectExecutionRatings(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>* value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__hitObstacles(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set__playerHeadAndObstacleInteraction(::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> value);

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  /// @brief Method .ctor, addr 0x3a84d08, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beatmapObjectExecutionRatings, addr 0x3a84150, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>* get_beatmapObjectExecutionRatings();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectExecutionRatingsRecorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRatingsRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectExecutionRatingsRecorder(BeatmapObjectExecutionRatingsRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRatingsRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectExecutionRatingsRecorder(BeatmapObjectExecutionRatingsRecorder const&) = delete;

  /// @brief Field _scoreController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _beatmapObjectManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _playerHeadAndObstacleInteraction, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> ____playerHeadAndObstacleInteraction;

  /// @brief Field _audioTimeSyncController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _beatmapObjectExecutionRatings, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>* ____beatmapObjectExecutionRatings;

  /// @brief Field _hitObstacles, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>* ____hitObstacles;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4054 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder, ____scoreController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder, ____beatmapObjectManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder, ____playerHeadAndObstacleInteraction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder, ____audioTimeSyncController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder, ____beatmapObjectExecutionRatings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder, ____hitObstacles) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*, "", "BeatmapObjectExecutionRatingsRecorder");

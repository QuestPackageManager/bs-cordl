#pragma once
// IWYU pragma private; include "GlobalNamespace/TrackLaneRingsPositionStepEffectSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrackLaneRingsPositionStepEffectSpawner)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class TrackLaneRingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class TrackLaneRingsPositionStepEffectSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner);
// Dependencies BasicBeatmapEventType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrackLaneRingsPositionStepEffectSpawner
class CORDL_TYPE TrackLaneRingsPositionStepEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapCallbacksController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _beatmapEventType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapEventType, put = __cordl_internal_set__beatmapEventType)) ::GlobalNamespace::BasicBeatmapEventType _beatmapEventType;

  /// @brief Field _maxPositionStep, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__maxPositionStep, put = __cordl_internal_set__maxPositionStep)) float_t _maxPositionStep;

  /// @brief Field _minPositionStep, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__minPositionStep, put = __cordl_internal_set__minPositionStep)) float_t _minPositionStep;

  /// @brief Field _moveSpeed, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__moveSpeed, put = __cordl_internal_set__moveSpeed)) float_t _moveSpeed;

  /// @brief Field _trackLaneRingsManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__trackLaneRingsManager, put = __cordl_internal_set__trackLaneRingsManager)) ::UnityW<::GlobalNamespace::TrackLaneRingsManager> _trackLaneRingsManager;

  /// @brief Method HandleBeatmapEvent, addr 0x578ea98, size 0x80, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner* New_ctor();

  /// @brief Method OnDestroy, addr 0x578ea7c, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x578e954, size 0x128, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__beatmapEventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__beatmapEventType();

  constexpr float_t const& __cordl_internal_get__maxPositionStep() const;

  constexpr float_t& __cordl_internal_get__maxPositionStep();

  constexpr float_t const& __cordl_internal_get__minPositionStep() const;

  constexpr float_t& __cordl_internal_get__minPositionStep();

  constexpr float_t const& __cordl_internal_get__moveSpeed() const;

  constexpr float_t& __cordl_internal_get__moveSpeed();

  constexpr ::UnityW<::GlobalNamespace::TrackLaneRingsManager> const& __cordl_internal_get__trackLaneRingsManager() const;

  constexpr ::UnityW<::GlobalNamespace::TrackLaneRingsManager>& __cordl_internal_get__trackLaneRingsManager();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__maxPositionStep(float_t value);

  constexpr void __cordl_internal_set__minPositionStep(float_t value);

  constexpr void __cordl_internal_set__moveSpeed(float_t value);

  constexpr void __cordl_internal_set__trackLaneRingsManager(::UnityW<::GlobalNamespace::TrackLaneRingsManager> value);

  /// @brief Method .ctor, addr 0x578eb18, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackLaneRingsPositionStepEffectSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsPositionStepEffectSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackLaneRingsPositionStepEffectSpawner(TrackLaneRingsPositionStepEffectSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsPositionStepEffectSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackLaneRingsPositionStepEffectSpawner(TrackLaneRingsPositionStepEffectSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5965 };

  /// @brief Field _trackLaneRingsManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TrackLaneRingsManager> ____trackLaneRingsManager;

  /// @brief Field _beatmapEventType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEventType;

  /// @brief Field _minPositionStep, offset: 0x2c, size: 0x4, def value: None
  float_t ____minPositionStep;

  /// @brief Field _maxPositionStep, offset: 0x30, size: 0x4, def value: None
  float_t ____maxPositionStep;

  /// @brief Field _moveSpeed, offset: 0x34, size: 0x4, def value: None
  float_t ____moveSpeed;

  /// @brief Field _beatmapCallbacksController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner, ____trackLaneRingsManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner, ____beatmapEventType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner, ____minPositionStep) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner, ____maxPositionStep) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner, ____moveSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner, ____beatmapCallbacksController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner, ____beatmapDataCallbackWrapper) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*, "", "TrackLaneRingsPositionStepEffectSpawner");

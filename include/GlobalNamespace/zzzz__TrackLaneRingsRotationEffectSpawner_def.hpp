#pragma once
// IWYU pragma private; include "GlobalNamespace/TrackLaneRingsRotationEffectSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackLaneRingsRotationEffectSpawner)
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
struct TrackLaneRingsRotationEffectSpawner_RotationStepType;
}
namespace GlobalNamespace {
class TrackLaneRingsRotationEffect;
}
namespace System {
class Random;
}
// Forward declare root types
namespace GlobalNamespace {
struct TrackLaneRingsRotationEffectSpawner_RotationStepType;
}
namespace GlobalNamespace {
class TrackLaneRingsRotationEffectSpawner;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType);
MARK_REF_PTR_T(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: TrackLaneRingsRotationEffectSpawner/RotationStepType
struct CORDL_TYPE TrackLaneRingsRotationEffectSpawner_RotationStepType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TrackLaneRingsRotationEffectSpawner_RotationStepType_Unwrapped
  enum struct __TrackLaneRingsRotationEffectSpawner_RotationStepType_Unwrapped : int32_t {
    __E_Range0ToMax = static_cast<int32_t>(0x0),
    __E_Range = static_cast<int32_t>(0x1),
    __E_MaxOr0 = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TrackLaneRingsRotationEffectSpawner_RotationStepType_Unwrapped() const noexcept {
    return static_cast<__TrackLaneRingsRotationEffectSpawner_RotationStepType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackLaneRingsRotationEffectSpawner_RotationStepType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TrackLaneRingsRotationEffectSpawner_RotationStepType(int32_t value__) noexcept;

  /// @brief Field MaxOr0 value: I32(2)
  static ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType const MaxOr0;

  /// @brief Field Range value: I32(1)
  static ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType const Range;

  /// @brief Field Range0ToMax value: I32(0)
  static ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType const Range0ToMax;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4385 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BasicBeatmapEventType, TrackLaneRingsRotationEffectSpawner::RotationStepType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrackLaneRingsRotationEffectSpawner
class CORDL_TYPE TrackLaneRingsRotationEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RotationStepType = ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType;

  /// @brief Field _beatmapCallbacksController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _beatmapEventType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapEventType, put = __cordl_internal_set__beatmapEventType)) ::GlobalNamespace::BasicBeatmapEventType _beatmapEventType;

  /// @brief Field _random, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::System::Random* _random;

  /// @brief Field _rotation, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__rotation, put = __cordl_internal_set__rotation)) float_t _rotation;

  /// @brief Field _rotationFlexySpeed, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationFlexySpeed, put = __cordl_internal_set__rotationFlexySpeed)) float_t _rotationFlexySpeed;

  /// @brief Field _rotationPropagationSpeed, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationPropagationSpeed, put = __cordl_internal_set__rotationPropagationSpeed)) int32_t _rotationPropagationSpeed;

  /// @brief Field _rotationStep, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationStep, put = __cordl_internal_set__rotationStep)) float_t _rotationStep;

  /// @brief Field _rotationStepType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationStepType,
                      put = __cordl_internal_set__rotationStepType)) ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType _rotationStepType;

  /// @brief Field _trackLaneRingsRotationEffect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__trackLaneRingsRotationEffect, put = __cordl_internal_set__trackLaneRingsRotationEffect)) ::UnityW<::GlobalNamespace::TrackLaneRingsRotationEffect>
      _trackLaneRingsRotationEffect;

  /// @brief Method HandleBeatmapEvent, addr 0x3ba52f4, size 0xc8, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ba52d8, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3ba51b0, size 0x128, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__beatmapEventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__beatmapEventType();

  constexpr ::System::Random* const& __cordl_internal_get__random() const;

  constexpr ::System::Random*& __cordl_internal_get__random();

  constexpr float_t const& __cordl_internal_get__rotation() const;

  constexpr float_t& __cordl_internal_get__rotation();

  constexpr float_t const& __cordl_internal_get__rotationFlexySpeed() const;

  constexpr float_t& __cordl_internal_get__rotationFlexySpeed();

  constexpr int32_t const& __cordl_internal_get__rotationPropagationSpeed() const;

  constexpr int32_t& __cordl_internal_get__rotationPropagationSpeed();

  constexpr float_t const& __cordl_internal_get__rotationStep() const;

  constexpr float_t& __cordl_internal_get__rotationStep();

  constexpr ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType const& __cordl_internal_get__rotationStepType() const;

  constexpr ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType& __cordl_internal_get__rotationStepType();

  constexpr ::UnityW<::GlobalNamespace::TrackLaneRingsRotationEffect> const& __cordl_internal_get__trackLaneRingsRotationEffect() const;

  constexpr ::UnityW<::GlobalNamespace::TrackLaneRingsRotationEffect>& __cordl_internal_get__trackLaneRingsRotationEffect();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__random(::System::Random* value);

  constexpr void __cordl_internal_set__rotation(float_t value);

  constexpr void __cordl_internal_set__rotationFlexySpeed(float_t value);

  constexpr void __cordl_internal_set__rotationPropagationSpeed(int32_t value);

  constexpr void __cordl_internal_set__rotationStep(float_t value);

  constexpr void __cordl_internal_set__rotationStepType(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType value);

  constexpr void __cordl_internal_set__trackLaneRingsRotationEffect(::UnityW<::GlobalNamespace::TrackLaneRingsRotationEffect> value);

  /// @brief Method .ctor, addr 0x3ba53bc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackLaneRingsRotationEffectSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsRotationEffectSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackLaneRingsRotationEffectSpawner(TrackLaneRingsRotationEffectSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsRotationEffectSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackLaneRingsRotationEffectSpawner(TrackLaneRingsRotationEffectSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4386 };

  /// @brief Field _trackLaneRingsRotationEffect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TrackLaneRingsRotationEffect> ____trackLaneRingsRotationEffect;

  /// @brief Field _beatmapEventType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEventType;

  /// @brief Field _rotation, offset: 0x2c, size: 0x4, def value: None
  float_t ____rotation;

  /// @brief Field _rotationStep, offset: 0x30, size: 0x4, def value: None
  float_t ____rotationStep;

  /// @brief Field _rotationStepType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType ____rotationStepType;

  /// @brief Field _rotationPropagationSpeed, offset: 0x38, size: 0x4, def value: None
  int32_t ____rotationPropagationSpeed;

  /// @brief Field _rotationFlexySpeed, offset: 0x3c, size: 0x4, def value: None
  float_t ____rotationFlexySpeed;

  /// @brief Field _beatmapCallbacksController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _random, offset: 0x48, size: 0x8, def value: None
  ::System::Random* ____random;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner, ____trackLaneRingsRotationEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner, ____beatmapEventType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner, ____rotation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner, ____rotationStep) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner, ____rotationStepType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner, ____rotationPropagationSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner, ____rotationFlexySpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner, ____beatmapCallbacksController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner, ____random) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner, ____beatmapDataCallbackWrapper) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType, "", "TrackLaneRingsRotationEffectSpawner/RotationStepType");
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*, "", "TrackLaneRingsRotationEffectSpawner");

#pragma once
// IWYU pragma private; include "GlobalNamespace/HydraulicCarJumpEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HydraulicCarJumpEffect)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class HydraulicCarJumpEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HydraulicCarJumpEffect);
// Dependencies BasicBeatmapEventType, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: HydraulicCarJumpEffect
class CORDL_TYPE HydraulicCarJumpEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapCallbacksController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _event, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__event, put = __cordl_internal_set__event)) ::GlobalNamespace::BasicBeatmapEventType _event;

  /// @brief Field _eventValues, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__eventValues, put = __cordl_internal_set__eventValues)) ::ArrayW<int32_t, ::Array<int32_t>*> _eventValues;

  /// @brief Field _eventValuesHashSet, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__eventValuesHashSet, put = __cordl_internal_set__eventValuesHashSet)) ::System::Collections::Generic::HashSet_1<int32_t>* _eventValuesHashSet;

  /// @brief Field _impulse, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__impulse, put = __cordl_internal_set__impulse)) ::UnityEngine::Vector3 _impulse;

  /// @brief Field _lastEventTime, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__lastEventTime, put = __cordl_internal_set__lastEventTime)) float_t _lastEventTime;

  /// @brief Field _minDelayBetweenEvents, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__minDelayBetweenEvents, put = __cordl_internal_set__minDelayBetweenEvents)) float_t _minDelayBetweenEvents;

  /// @brief Field _position, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position)) ::UnityEngine::Vector3 _position;

  /// @brief Field _randomness, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__randomness, put = __cordl_internal_set__randomness)) float_t _randomness;

  /// @brief Field _rigidbody, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__rigidbody, put = __cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody> _rigidbody;

  /// @brief Method HandleBeatmapEvent, addr 0x2268524, size 0x11c, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::HydraulicCarJumpEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x2268508, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x2268390, size 0x178, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__event() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__event();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__eventValues() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__eventValues();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__eventValuesHashSet() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__eventValuesHashSet();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__impulse() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__impulse();

  constexpr float_t const& __cordl_internal_get__lastEventTime() const;

  constexpr float_t& __cordl_internal_get__lastEventTime();

  constexpr float_t const& __cordl_internal_get__minDelayBetweenEvents() const;

  constexpr float_t& __cordl_internal_get__minDelayBetweenEvents();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position();

  constexpr float_t const& __cordl_internal_get__randomness() const;

  constexpr float_t& __cordl_internal_get__randomness();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__event(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__eventValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__eventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set__impulse(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__lastEventTime(float_t value);

  constexpr void __cordl_internal_set__minDelayBetweenEvents(float_t value);

  constexpr void __cordl_internal_set__position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__randomness(float_t value);

  constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody> value);

  /// @brief Method .ctor, addr 0x2268640, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HydraulicCarJumpEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HydraulicCarJumpEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HydraulicCarJumpEffect(HydraulicCarJumpEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HydraulicCarJumpEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HydraulicCarJumpEffect(HydraulicCarJumpEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19135 };

  /// @brief Field _event, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____event;

  /// @brief Field _eventValues, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____eventValues;

  /// @brief Field _impulse, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____impulse;

  /// @brief Field _randomness, offset: 0x3c, size: 0x4, def value: None
  float_t ____randomness;

  /// @brief Field _position, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position;

  /// @brief Field _minDelayBetweenEvents, offset: 0x4c, size: 0x4, def value: None
  float_t ____minDelayBetweenEvents;

  /// @brief Field _rigidbody, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ____rigidbody;

  /// @brief Field _beatmapCallbacksController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _lastEventTime, offset: 0x60, size: 0x4, def value: None
  float_t ____lastEventTime;

  /// @brief Field _eventValuesHashSet, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ____eventValuesHashSet;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____event) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____eventValues) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____impulse) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____randomness) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____position) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____minDelayBetweenEvents) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____rigidbody) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____beatmapCallbacksController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____lastEventTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____eventValuesHashSet) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____beatmapDataCallbackWrapper) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HydraulicCarJumpEffect, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HydraulicCarJumpEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HydraulicCarJumpEffect*, "", "HydraulicCarJumpEffect");

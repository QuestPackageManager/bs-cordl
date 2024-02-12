#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::HydraulicCarJumpEffect
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(8993)), TypeDefinitionIndex(TypeDefinitionIndex(15108))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16390))
// CS Name: ::HydraulicCarJumpEffect*
class CORDL_TYPE HydraulicCarJumpEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _event, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__event, put = __cordl_internal_set__event))::GlobalNamespace::BasicBeatmapEventType _event;

  /// @brief Field _eventValues, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__eventValues, put = __cordl_internal_set__eventValues))::ArrayW<int32_t, ::Array<int32_t>*> _eventValues;

  /// @brief Field _impulse, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get__impulse, put = __cordl_internal_set__impulse))::UnityEngine::Vector3 _impulse;

  /// @brief Field _randomness, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__randomness, put = __cordl_internal_set__randomness)) float_t _randomness;

  /// @brief Field _position, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position))::UnityEngine::Vector3 _position;

  /// @brief Field _minDelayBetweenEvents, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__minDelayBetweenEvents, put = __cordl_internal_set__minDelayBetweenEvents)) float_t _minDelayBetweenEvents;

  /// @brief Field _rigidbody, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__rigidbody, put = __cordl_internal_set__rigidbody))::UnityW<::UnityEngine::Rigidbody> _rigidbody;

  /// @brief Field _beatmapCallbacksController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _lastEventTime, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__lastEventTime, put = __cordl_internal_set__lastEventTime)) float_t _lastEventTime;

  /// @brief Field _eventValuesHashSet, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__eventValuesHashSet, put = __cordl_internal_set__eventValuesHashSet))::System::Collections::Generic::HashSet_1<int32_t>* _eventValuesHashSet;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__event();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__event() const;

  constexpr void __cordl_internal_set__event(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__eventValues();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__eventValues() const;

  constexpr void __cordl_internal_set__eventValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__impulse();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__impulse() const;

  constexpr void __cordl_internal_set__impulse(::UnityEngine::Vector3 value);

  constexpr float_t& __cordl_internal_get__randomness();

  constexpr float_t const& __cordl_internal_get__randomness() const;

  constexpr void __cordl_internal_set__randomness(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position() const;

  constexpr void __cordl_internal_set__position(::UnityEngine::Vector3 value);

  constexpr float_t& __cordl_internal_get__minDelayBetweenEvents();

  constexpr float_t const& __cordl_internal_get__minDelayBetweenEvents() const;

  constexpr void __cordl_internal_set__minDelayBetweenEvents(float_t value);

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

  constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr float_t& __cordl_internal_get__lastEventTime();

  constexpr float_t const& __cordl_internal_get__lastEventTime() const;

  constexpr void __cordl_internal_set__lastEventTime(float_t value);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__eventValuesHashSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __cordl_internal_get__eventValuesHashSet() const;

  constexpr void __cordl_internal_set__eventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method Start, addr 0xe331b0, size 0x170, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0xe33320, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleBeatmapEvent, addr 0xe3333c, size 0x11c, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::HydraulicCarJumpEffect* New_ctor();

  /// @brief Method .ctor, addr 0xe33458, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HydraulicCarJumpEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HydraulicCarJumpEffect(HydraulicCarJumpEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HydraulicCarJumpEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HydraulicCarJumpEffect(HydraulicCarJumpEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HydraulicCarJumpEffect();

public:
  /// @brief Field _event, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____event;

  /// @brief Field _eventValues, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____eventValues;

  /// @brief Field _impulse, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____impulse;

  /// @brief Field _randomness, offset: 0x34, size: 0x4, def value: None
  float_t ____randomness;

  /// @brief Field _position, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position;

  /// @brief Field _minDelayBetweenEvents, offset: 0x44, size: 0x4, def value: None
  float_t ____minDelayBetweenEvents;

  /// @brief Field _rigidbody, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ____rigidbody;

  /// @brief Field _beatmapCallbacksController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _lastEventTime, offset: 0x58, size: 0x4, def value: None
  float_t ____lastEventTime;

  /// @brief Field _eventValuesHashSet, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ____eventValuesHashSet;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HydraulicCarJumpEffect, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____event) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____eventValues) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____impulse) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____randomness) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____position) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____minDelayBetweenEvents) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____rigidbody) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____beatmapCallbacksController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____lastEventTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____eventValuesHashSet) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarJumpEffect, ____beatmapDataCallbackWrapper) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HydraulicCarJumpEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HydraulicCarJumpEffect*, "", "HydraulicCarJumpEffect");

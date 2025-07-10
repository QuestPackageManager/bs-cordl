#pragma once
// IWYU pragma private; include "GlobalNamespace/HydraulicCarSuspensionEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HydraulicCarSuspensionEffect)
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
namespace UnityEngine {
class SpringJoint;
}
// Forward declare root types
namespace GlobalNamespace {
class HydraulicCarSuspensionEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HydraulicCarSuspensionEffect);
// Dependencies BasicBeatmapEventType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HydraulicCarSuspensionEffect
class CORDL_TYPE HydraulicCarSuspensionEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapCallbacksController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _contractBeatmapDataCallbackWrapper, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__contractBeatmapDataCallbackWrapper,
                      put = __cordl_internal_set__contractBeatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _contractBeatmapDataCallbackWrapper;

  /// @brief Field _contractDistance, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__contractDistance, put = __cordl_internal_set__contractDistance)) float_t _contractDistance;

  /// @brief Field _contractEvent, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__contractEvent, put = __cordl_internal_set__contractEvent)) ::GlobalNamespace::BasicBeatmapEventType _contractEvent;

  /// @brief Field _contractEventValues, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__contractEventValues, put = __cordl_internal_set__contractEventValues)) ::ArrayW<int32_t, ::Array<int32_t>*> _contractEventValues;

  /// @brief Field _contractEventValuesHashSet, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__contractEventValuesHashSet,
                      put = __cordl_internal_set__contractEventValuesHashSet)) ::System::Collections::Generic::HashSet_1<int32_t>* _contractEventValuesHashSet;

  /// @brief Field _expandBeatmapDataCallbackWrapper, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__expandBeatmapDataCallbackWrapper,
                      put = __cordl_internal_set__expandBeatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _expandBeatmapDataCallbackWrapper;

  /// @brief Field _expandDistance, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__expandDistance, put = __cordl_internal_set__expandDistance)) float_t _expandDistance;

  /// @brief Field _expandEvent, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__expandEvent, put = __cordl_internal_set__expandEvent)) ::GlobalNamespace::BasicBeatmapEventType _expandEvent;

  /// @brief Field _expandEventValues, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__expandEventValues, put = __cordl_internal_set__expandEventValues)) ::ArrayW<int32_t, ::Array<int32_t>*> _expandEventValues;

  /// @brief Field _expandEventValuesHashSet, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__expandEventValuesHashSet,
                      put = __cordl_internal_set__expandEventValuesHashSet)) ::System::Collections::Generic::HashSet_1<int32_t>* _expandEventValuesHashSet;

  /// @brief Field _rigidbody, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__rigidbody, put = __cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody> _rigidbody;

  /// @brief Field _springJoint, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__springJoint, put = __cordl_internal_set__springJoint)) ::UnityW<::UnityEngine::SpringJoint> _springJoint;

  /// @brief Method HandleContractBeatmapEvent, addr 0x22688b4, size 0xa4, virtual false, abstract: false, final false
  inline void HandleContractBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method HandleExpandBeatmapEvent, addr 0x2268958, size 0xa4, virtual false, abstract: false, final false
  inline void HandleExpandBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::HydraulicCarSuspensionEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x2268874, size 0x40, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x226865c, size 0x218, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__contractBeatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__contractBeatmapDataCallbackWrapper();

  constexpr float_t const& __cordl_internal_get__contractDistance() const;

  constexpr float_t& __cordl_internal_get__contractDistance();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__contractEvent() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__contractEvent();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__contractEventValues() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__contractEventValues();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__contractEventValuesHashSet() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__contractEventValuesHashSet();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__expandBeatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__expandBeatmapDataCallbackWrapper();

  constexpr float_t const& __cordl_internal_get__expandDistance() const;

  constexpr float_t& __cordl_internal_get__expandDistance();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__expandEvent() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__expandEvent();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__expandEventValues() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__expandEventValues();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__expandEventValuesHashSet() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__expandEventValuesHashSet();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody();

  constexpr ::UnityW<::UnityEngine::SpringJoint> const& __cordl_internal_get__springJoint() const;

  constexpr ::UnityW<::UnityEngine::SpringJoint>& __cordl_internal_get__springJoint();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__contractBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__contractDistance(float_t value);

  constexpr void __cordl_internal_set__contractEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__contractEventValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__contractEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set__expandBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__expandDistance(float_t value);

  constexpr void __cordl_internal_set__expandEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__expandEventValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__expandEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set__springJoint(::UnityW<::UnityEngine::SpringJoint> value);

  /// @brief Method .ctor, addr 0x22689fc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HydraulicCarSuspensionEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HydraulicCarSuspensionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HydraulicCarSuspensionEffect(HydraulicCarSuspensionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HydraulicCarSuspensionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HydraulicCarSuspensionEffect(HydraulicCarSuspensionEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19136 };

  /// @brief Field _contractEvent, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____contractEvent;

  /// @brief Field _contractEventValues, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____contractEventValues;

  /// @brief Field _expandEvent, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____expandEvent;

  /// @brief Field _expandEventValues, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____expandEventValues;

  /// @brief Field _springJoint, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpringJoint> ____springJoint;

  /// @brief Field _contractDistance, offset: 0x48, size: 0x4, def value: None
  float_t ____contractDistance;

  /// @brief Field _expandDistance, offset: 0x4c, size: 0x4, def value: None
  float_t ____expandDistance;

  /// @brief Field _rigidbody, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ____rigidbody;

  /// @brief Field _beatmapCallbacksController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _contractEventValuesHashSet, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ____contractEventValuesHashSet;

  /// @brief Field _expandEventValuesHashSet, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ____expandEventValuesHashSet;

  /// @brief Field _contractBeatmapDataCallbackWrapper, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____contractBeatmapDataCallbackWrapper;

  /// @brief Field _expandBeatmapDataCallbackWrapper, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____expandBeatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____contractEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____contractEventValues) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____expandEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____expandEventValues) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____springJoint) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____contractDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____expandDistance) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____rigidbody) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____beatmapCallbacksController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____contractEventValuesHashSet) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____expandEventValuesHashSet) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____contractBeatmapDataCallbackWrapper) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____expandBeatmapDataCallbackWrapper) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HydraulicCarSuspensionEffect, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HydraulicCarSuspensionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HydraulicCarSuspensionEffect*, "", "HydraulicCarSuspensionEffect");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HydraulicCarSuspensionEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace UnityEngine {
class Rigidbody;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
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
// Type: ::HydraulicCarSuspensionEffect
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14941)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3987))
// CS Name: ::HydraulicCarSuspensionEffect*
class CORDL_TYPE HydraulicCarSuspensionEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _contractEvent, offset 0x18, size 0x4
  __declspec(property(get = __get__contractEvent, put = __set__contractEvent))::GlobalNamespace::BasicBeatmapEventType _contractEvent;

  /// @brief Field _contractEventValues, offset 0x20, size 0x8
  __declspec(property(get = __get__contractEventValues, put = __set__contractEventValues))::ArrayW<int32_t, ::Array<int32_t>*> _contractEventValues;

  /// @brief Field _expandEvent, offset 0x28, size 0x4
  __declspec(property(get = __get__expandEvent, put = __set__expandEvent))::GlobalNamespace::BasicBeatmapEventType _expandEvent;

  /// @brief Field _expandEventValues, offset 0x30, size 0x8
  __declspec(property(get = __get__expandEventValues, put = __set__expandEventValues))::ArrayW<int32_t, ::Array<int32_t>*> _expandEventValues;

  /// @brief Field _springJoint, offset 0x38, size 0x8
  __declspec(property(get = __get__springJoint, put = __set__springJoint))::UnityEngine::SpringJoint* _springJoint;

  /// @brief Field _contractDistance, offset 0x40, size 0x4
  __declspec(property(get = __get__contractDistance, put = __set__contractDistance)) float_t _contractDistance;

  /// @brief Field _expandDistance, offset 0x44, size 0x4
  __declspec(property(get = __get__expandDistance, put = __set__expandDistance)) float_t _expandDistance;

  /// @brief Field _rigidbody, offset 0x48, size 0x8
  __declspec(property(get = __get__rigidbody, put = __set__rigidbody))::UnityEngine::Rigidbody* _rigidbody;

  /// @brief Field _beatmapCallbacksController, offset 0x50, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _contractEventValuesHashSet, offset 0x58, size 0x8
  __declspec(property(get = __get__contractEventValuesHashSet, put = __set__contractEventValuesHashSet))::System::Collections::Generic::HashSet_1<int32_t>* _contractEventValuesHashSet;

  /// @brief Field _expandEventValuesHashSet, offset 0x60, size 0x8
  __declspec(property(get = __get__expandEventValuesHashSet, put = __set__expandEventValuesHashSet))::System::Collections::Generic::HashSet_1<int32_t>* _expandEventValuesHashSet;

  /// @brief Field _contractBeatmapDataCallbackWrapper, offset 0x68, size 0x8
  __declspec(property(get = __get__contractBeatmapDataCallbackWrapper,
                      put = __set__contractBeatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _contractBeatmapDataCallbackWrapper;

  /// @brief Field _expandBeatmapDataCallbackWrapper, offset 0x70, size 0x8
  __declspec(property(get = __get__expandBeatmapDataCallbackWrapper, put = __set__expandBeatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _expandBeatmapDataCallbackWrapper;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__contractEvent();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__contractEvent() const;

  constexpr void __set__contractEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__contractEventValues();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__contractEventValues() const;

  constexpr void __set__contractEventValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__expandEvent();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__expandEvent() const;

  constexpr void __set__expandEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__expandEventValues();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__expandEventValues() const;

  constexpr void __set__expandEventValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::UnityEngine::SpringJoint*& __get__springJoint();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpringJoint*> const& __get__springJoint() const;

  constexpr void __set__springJoint(::UnityEngine::SpringJoint* value);

  constexpr float_t& __get__contractDistance();

  constexpr float_t const& __get__contractDistance() const;

  constexpr void __set__contractDistance(float_t value);

  constexpr float_t& __get__expandDistance();

  constexpr float_t const& __get__expandDistance() const;

  constexpr void __set__expandDistance(float_t value);

  constexpr ::UnityEngine::Rigidbody*& __get__rigidbody();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> const& __get__rigidbody() const;

  constexpr void __set__rigidbody(::UnityEngine::Rigidbody* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __get__contractEventValuesHashSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __get__contractEventValuesHashSet() const;

  constexpr void __set__contractEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __get__expandEventValuesHashSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __get__expandEventValuesHashSet() const;

  constexpr void __set__expandEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__contractBeatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__contractBeatmapDataCallbackWrapper() const;

  constexpr void __set__contractBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__expandBeatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__expandBeatmapDataCallbackWrapper() const;

  constexpr void __set__expandBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method Start addr 0x20bf584 size 0x220 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x20bf7a4 size 0x40 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleContractBeatmapEvent addr 0x20bf7e4 size 0xa4 virtual false final false
  inline void HandleContractBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method HandleExpandBeatmapEvent addr 0x20bf888 size 0xa4 virtual false final false
  inline void HandleExpandBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::HydraulicCarSuspensionEffect* New_ctor();

  /// @brief Method .ctor addr 0x20bf92c size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HydraulicCarSuspensionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HydraulicCarSuspensionEffect(HydraulicCarSuspensionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HydraulicCarSuspensionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HydraulicCarSuspensionEffect(HydraulicCarSuspensionEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HydraulicCarSuspensionEffect();

public:
  /// @brief Field _contractEvent, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____contractEvent;

  /// @brief Field _contractEventValues, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____contractEventValues;

  /// @brief Field _expandEvent, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____expandEvent;

  /// @brief Field _expandEventValues, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____expandEventValues;

  /// @brief Field _springJoint, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::SpringJoint* ____springJoint;

  /// @brief Field _contractDistance, offset: 0x40, size: 0x4, def value: None
  float_t ____contractDistance;

  /// @brief Field _expandDistance, offset: 0x44, size: 0x4, def value: None
  float_t ____expandDistance;

  /// @brief Field _rigidbody, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rigidbody* ____rigidbody;

  /// @brief Field _beatmapCallbacksController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _contractEventValuesHashSet, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ____contractEventValuesHashSet;

  /// @brief Field _expandEventValuesHashSet, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ____expandEventValuesHashSet;

  /// @brief Field _contractBeatmapDataCallbackWrapper, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____contractBeatmapDataCallbackWrapper;

  /// @brief Field _expandBeatmapDataCallbackWrapper, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____expandBeatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HydraulicCarSuspensionEffect, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____contractEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____contractEventValues) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____expandEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____expandEventValues) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____springJoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____contractDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____expandDistance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____rigidbody) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____beatmapCallbacksController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____contractEventValuesHashSet) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____expandEventValuesHashSet) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____contractBeatmapDataCallbackWrapper) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydraulicCarSuspensionEffect, ____expandBeatmapDataCallbackWrapper) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HydraulicCarSuspensionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HydraulicCarSuspensionEffect*, "", "HydraulicCarSuspensionEffect");

#pragma once
// IWYU pragma private; include "GlobalNamespace/MovementBeatmapEventEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MovementBeatmapEventEffect)
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
class __MovementBeatmapEventEffect__MovementData;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MovementBeatmapEventEffect;
}
namespace GlobalNamespace {
class __MovementBeatmapEventEffect__MovementData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MovementBeatmapEventEffect);
MARK_REF_PTR_T(::GlobalNamespace::__MovementBeatmapEventEffect__MovementData);
// Type: ::MovementData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MovementBeatmapEventEffect::MovementData*
class CORDL_TYPE __MovementBeatmapEventEffect__MovementData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _localPositionOffset, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get__localPositionOffset, put = __cordl_internal_set__localPositionOffset)) ::UnityEngine::Vector3 _localPositionOffset;

  __declspec(property(get = get_localPositionOffset)) ::UnityEngine::Vector3 localPositionOffset;

  static inline ::GlobalNamespace::__MovementBeatmapEventEffect__MovementData* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__localPositionOffset();

  constexpr void __cordl_internal_set__localPositionOffset(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x3b222c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_localPositionOffset, addr 0x3b222b4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localPositionOffset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MovementBeatmapEventEffect__MovementData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MovementBeatmapEventEffect__MovementData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MovementBeatmapEventEffect__MovementData(__MovementBeatmapEventEffect__MovementData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MovementBeatmapEventEffect__MovementData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MovementBeatmapEventEffect__MovementData(__MovementBeatmapEventEffect__MovementData const&) = delete;

  /// @brief Field _localPositionOffset, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localPositionOffset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4346 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MovementBeatmapEventEffect__MovementData, ____localPositionOffset) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MovementBeatmapEventEffect
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MovementBeatmapEventEffect*
class CORDL_TYPE MovementBeatmapEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MovementData = ::GlobalNamespace::__MovementBeatmapEventEffect__MovementData;

  /// @brief Field _beatmapCallbacksController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _beatmapEventType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapEventType, put = __cordl_internal_set__beatmapEventType)) ::GlobalNamespace::BasicBeatmapEventType _beatmapEventType;

  /// @brief Field _currentMovementDataIdx, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__currentMovementDataIdx, put = __cordl_internal_set__currentMovementDataIdx)) int32_t _currentMovementDataIdx;

  /// @brief Field _currentPositionOffset, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get__currentPositionOffset, put = __cordl_internal_set__currentPositionOffset)) ::UnityEngine::Vector3 _currentPositionOffset;

  /// @brief Field _movementData, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__movementData,
      put = __cordl_internal_set__movementData)) ::ArrayW<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, ::Array<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>*>
      _movementData;

  /// @brief Field _prevPositionOffset, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get__prevPositionOffset, put = __cordl_internal_set__prevPositionOffset)) ::UnityEngine::Vector3 _prevPositionOffset;

  /// @brief Field _startLocalPositions, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__startLocalPositions, put = __cordl_internal_set__startLocalPositions)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>
      _startLocalPositions;

  /// @brief Field _transforms, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__transforms, put = __cordl_internal_set__transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
      _transforms;

  /// @brief Field _transitionSpeed, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__transitionSpeed, put = __cordl_internal_set__transitionSpeed)) float_t _transitionSpeed;

  /// @brief Method FixedUpdate, addr 0x3b220d8, size 0x110, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method HandleBeatmapEvent, addr 0x3b22274, size 0x38, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method LateUpdate, addr 0x3b221e8, size 0x8c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MovementBeatmapEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b220bc, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetLocalPositionOffsetsForAllObjects, addr 0x3b22000, size 0xbc, virtual false, abstract: false, final false
  inline void SetLocalPositionOffsetsForAllObjects(::UnityEngine::Vector3 localPositionOffset);

  /// @brief Method Start, addr 0x3b21dfc, size 0x204, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__beatmapEventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__beatmapEventType();

  constexpr int32_t const& __cordl_internal_get__currentMovementDataIdx() const;

  constexpr int32_t& __cordl_internal_get__currentMovementDataIdx();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentPositionOffset();

  constexpr ::ArrayW<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, ::Array<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>*> const&
  __cordl_internal_get__movementData() const;

  constexpr ::ArrayW<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, ::Array<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>*>& __cordl_internal_get__movementData();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__prevPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__prevPositionOffset();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__startLocalPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__startLocalPositions();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__transforms() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__transforms();

  constexpr float_t const& __cordl_internal_get__transitionSpeed() const;

  constexpr float_t& __cordl_internal_get__transitionSpeed();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__currentMovementDataIdx(int32_t value);

  constexpr void __cordl_internal_set__currentPositionOffset(::UnityEngine::Vector3 value);

  constexpr void
  __cordl_internal_set__movementData(::ArrayW<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, ::Array<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>*> value);

  constexpr void __cordl_internal_set__prevPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set__transitionSpeed(float_t value);

  /// @brief Method .ctor, addr 0x3b222ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MovementBeatmapEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MovementBeatmapEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MovementBeatmapEventEffect(MovementBeatmapEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MovementBeatmapEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MovementBeatmapEventEffect(MovementBeatmapEventEffect const&) = delete;

  /// @brief Field _beatmapEventType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEventType;

  /// @brief Field _transitionSpeed, offset: 0x24, size: 0x4, def value: None
  float_t ____transitionSpeed;

  /// @brief Field _movementData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, ::Array<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>*> ____movementData;

  /// @brief Field _transforms, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____transforms;

  /// @brief Field _beatmapCallbacksController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _currentMovementDataIdx, offset: 0x40, size: 0x4, def value: None
  int32_t ____currentMovementDataIdx;

  /// @brief Field _currentPositionOffset, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____currentPositionOffset;

  /// @brief Field _prevPositionOffset, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevPositionOffset;

  /// @brief Field _startLocalPositions, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____startLocalPositions;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4347 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MovementBeatmapEventEffect, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementBeatmapEventEffect, ____beatmapEventType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementBeatmapEventEffect, ____transitionSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementBeatmapEventEffect, ____movementData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementBeatmapEventEffect, ____transforms) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementBeatmapEventEffect, ____beatmapCallbacksController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementBeatmapEventEffect, ____currentMovementDataIdx) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementBeatmapEventEffect, ____currentPositionOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementBeatmapEventEffect, ____prevPositionOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementBeatmapEventEffect, ____startLocalPositions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementBeatmapEventEffect, ____beatmapDataCallbackWrapper) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MovementBeatmapEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MovementBeatmapEventEffect*, "", "MovementBeatmapEventEffect");
NEED_NO_BOX(::GlobalNamespace::__MovementBeatmapEventEffect__MovementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, "", "MovementBeatmapEventEffect/MovementData");

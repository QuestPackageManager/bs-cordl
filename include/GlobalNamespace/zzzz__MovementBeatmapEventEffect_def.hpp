#pragma once
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
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class __MovementBeatmapEventEffect__MovementData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4988))
// CS Name: ::MovementBeatmapEventEffect::MovementData*
class CORDL_TYPE __MovementBeatmapEventEffect__MovementData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _localPositionOffset, offset 0x10, size 0xc
  __declspec(property(get = __get__localPositionOffset, put = __set__localPositionOffset))::UnityEngine::Vector3 _localPositionOffset;

  __declspec(property(get = get_localPositionOffset))::UnityEngine::Vector3 localPositionOffset;

  constexpr ::UnityEngine::Vector3& __get__localPositionOffset();

  constexpr ::UnityEngine::Vector3 const& __get__localPositionOffset() const;

  constexpr void __set__localPositionOffset(::UnityEngine::Vector3 value);

  /// @brief Method get_localPositionOffset addr 0x23b4e1c size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_localPositionOffset();

  static inline ::GlobalNamespace::__MovementBeatmapEventEffect__MovementData* New_ctor();

  /// @brief Method .ctor addr 0x23b4e28 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MovementBeatmapEventEffect__MovementData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MovementBeatmapEventEffect__MovementData(__MovementBeatmapEventEffect__MovementData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MovementBeatmapEventEffect__MovementData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MovementBeatmapEventEffect__MovementData(__MovementBeatmapEventEffect__MovementData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MovementBeatmapEventEffect__MovementData();

public:
  /// @brief Field _localPositionOffset, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localPositionOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MovementBeatmapEventEffect
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(14724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4989))
// CS Name: ::MovementBeatmapEventEffect*
class CORDL_TYPE MovementBeatmapEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MovementData = ::GlobalNamespace::__MovementBeatmapEventEffect__MovementData;

  /// @brief Field _beatmapEventType, offset 0x18, size 0x4
  __declspec(property(get = __get__beatmapEventType, put = __set__beatmapEventType))::GlobalNamespace::BasicBeatmapEventType _beatmapEventType;

  /// @brief Field _transitionSpeed, offset 0x1c, size 0x4
  __declspec(property(get = __get__transitionSpeed, put = __set__transitionSpeed)) float_t _transitionSpeed;

  /// @brief Field _movementData, offset 0x20, size 0x8
  __declspec(property(
      get = __get__movementData,
      put = __set__movementData))::ArrayW<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, ::Array<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>*> _movementData;

  /// @brief Field _transforms, offset 0x28, size 0x8
  __declspec(property(get = __get__transforms, put = __set__transforms))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> _transforms;

  /// @brief Field _beatmapCallbacksController, offset 0x30, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _currentMovementDataIdx, offset 0x38, size 0x4
  __declspec(property(get = __get__currentMovementDataIdx, put = __set__currentMovementDataIdx)) int32_t _currentMovementDataIdx;

  /// @brief Field _currentPositionOffset, offset 0x3c, size 0xc
  __declspec(property(get = __get__currentPositionOffset, put = __set__currentPositionOffset))::UnityEngine::Vector3 _currentPositionOffset;

  /// @brief Field _prevPositionOffset, offset 0x48, size 0xc
  __declspec(property(get = __get__prevPositionOffset, put = __set__prevPositionOffset))::UnityEngine::Vector3 _prevPositionOffset;

  /// @brief Field _startLocalPositions, offset 0x58, size 0x8
  __declspec(property(get = __get__startLocalPositions, put = __set__startLocalPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _startLocalPositions;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x60, size 0x8
  __declspec(property(get = __get__beatmapDataCallbackWrapper, put = __set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__beatmapEventType();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__beatmapEventType() const;

  constexpr void __set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr float_t& __get__transitionSpeed();

  constexpr float_t const& __get__transitionSpeed() const;

  constexpr void __set__transitionSpeed(float_t value);

  constexpr ::ArrayW<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, ::Array<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>*>& __get__movementData();

  constexpr ::ArrayW<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, ::Array<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>*> const& __get__movementData() const;

  constexpr void __set__movementData(::ArrayW<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, ::Array<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>*> value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get__transforms();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get__transforms() const;

  constexpr void __set__transforms(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr int32_t& __get__currentMovementDataIdx();

  constexpr int32_t const& __get__currentMovementDataIdx() const;

  constexpr void __set__currentMovementDataIdx(int32_t value);

  constexpr ::UnityEngine::Vector3& __get__currentPositionOffset();

  constexpr ::UnityEngine::Vector3 const& __get__currentPositionOffset() const;

  constexpr void __set__currentPositionOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__prevPositionOffset();

  constexpr ::UnityEngine::Vector3 const& __get__prevPositionOffset() const;

  constexpr void __set__prevPositionOffset(::UnityEngine::Vector3 value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get__startLocalPositions();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get__startLocalPositions() const;

  constexpr void __set__startLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__beatmapDataCallbackWrapper() const;

  constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method Start addr 0x23b4970 size 0x1f8 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x23b4c24 size 0x1c virtual false final false
  inline void OnDestroy();

  /// @brief Method FixedUpdate addr 0x23b4c40 size 0x110 virtual false final false
  inline void FixedUpdate();

  /// @brief Method LateUpdate addr 0x23b4d50 size 0x8c virtual false final false
  inline void LateUpdate();

  /// @brief Method HandleBeatmapEvent addr 0x23b4ddc size 0x38 virtual false final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method SetLocalPositionOffsetsForAllObjects addr 0x23b4b68 size 0xbc virtual false final false
  inline void SetLocalPositionOffsetsForAllObjects(::UnityEngine::Vector3 localPositionOffset);

  static inline ::GlobalNamespace::MovementBeatmapEventEffect* New_ctor();

  /// @brief Method .ctor addr 0x23b4e14 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MovementBeatmapEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MovementBeatmapEventEffect(MovementBeatmapEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MovementBeatmapEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MovementBeatmapEventEffect(MovementBeatmapEventEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MovementBeatmapEventEffect();

public:
  /// @brief Field _beatmapEventType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEventType;

  /// @brief Field _transitionSpeed, offset: 0x1c, size: 0x4, def value: None
  float_t ____transitionSpeed;

  /// @brief Field _movementData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, ::Array<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>*> ____movementData;

  /// @brief Field _transforms, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ____transforms;

  /// @brief Field _beatmapCallbacksController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _currentMovementDataIdx, offset: 0x38, size: 0x4, def value: None
  int32_t ____currentMovementDataIdx;

  /// @brief Field _currentPositionOffset, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____currentPositionOffset;

  /// @brief Field _prevPositionOffset, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevPositionOffset;

  /// @brief Field _startLocalPositions, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____startLocalPositions;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MovementBeatmapEventEffect, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MovementBeatmapEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MovementBeatmapEventEffect*, "", "MovementBeatmapEventEffect");
NEED_NO_BOX(::GlobalNamespace::__MovementBeatmapEventEffect__MovementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, "", "MovementBeatmapEventEffect/MovementData");

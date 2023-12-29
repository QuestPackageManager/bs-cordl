#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackLaneRingsRotationEffect)
namespace GlobalNamespace {
class TrackLaneRingsManager;
}
namespace GlobalNamespace {
class __TrackLaneRingsRotationEffect__RingRotationEffect;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class TrackLaneRingsRotationEffect;
}
namespace GlobalNamespace {
class __TrackLaneRingsRotationEffect__RingRotationEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrackLaneRingsRotationEffect);
MARK_REF_PTR_T(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect);
// Type: ::RingRotationEffect
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5111))
// CS Name: ::TrackLaneRingsRotationEffect::RingRotationEffect*
class CORDL_TYPE __TrackLaneRingsRotationEffect__RingRotationEffect : public ::System::Object {
public:
  // Declarations
  /// @brief Field rotationAngle, offset 0x10, size 0x4
  __declspec(property(get = __get_rotationAngle, put = __set_rotationAngle)) float_t rotationAngle;

  /// @brief Field rotationStep, offset 0x14, size 0x4
  __declspec(property(get = __get_rotationStep, put = __set_rotationStep)) float_t rotationStep;

  /// @brief Field rotationFlexySpeed, offset 0x18, size 0x4
  __declspec(property(get = __get_rotationFlexySpeed, put = __set_rotationFlexySpeed)) float_t rotationFlexySpeed;

  /// @brief Field rotationPropagationSpeed, offset 0x1c, size 0x4
  __declspec(property(get = __get_rotationPropagationSpeed, put = __set_rotationPropagationSpeed)) int32_t rotationPropagationSpeed;

  /// @brief Field progressPos, offset 0x20, size 0x4
  __declspec(property(get = __get_progressPos, put = __set_progressPos)) int32_t progressPos;

  constexpr float_t& __get_rotationAngle();

  constexpr float_t const& __get_rotationAngle() const;

  constexpr void __set_rotationAngle(float_t value);

  constexpr float_t& __get_rotationStep();

  constexpr float_t const& __get_rotationStep() const;

  constexpr void __set_rotationStep(float_t value);

  constexpr float_t& __get_rotationFlexySpeed();

  constexpr float_t const& __get_rotationFlexySpeed() const;

  constexpr void __set_rotationFlexySpeed(float_t value);

  constexpr int32_t& __get_rotationPropagationSpeed();

  constexpr int32_t const& __get_rotationPropagationSpeed() const;

  constexpr void __set_rotationPropagationSpeed(int32_t value);

  constexpr int32_t& __get_progressPos();

  constexpr int32_t const& __get_progressPos() const;

  constexpr void __set_progressPos(int32_t value);

  static inline ::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect* New_ctor();

  /// @brief Method .ctor addr 0x227f494 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TrackLaneRingsRotationEffect__RingRotationEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TrackLaneRingsRotationEffect__RingRotationEffect(__TrackLaneRingsRotationEffect__RingRotationEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TrackLaneRingsRotationEffect__RingRotationEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TrackLaneRingsRotationEffect__RingRotationEffect(__TrackLaneRingsRotationEffect__RingRotationEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackLaneRingsRotationEffect__RingRotationEffect();

public:
  /// @brief Field rotationAngle, offset: 0x10, size: 0x4, def value: None
  float_t ___rotationAngle;

  /// @brief Field rotationStep, offset: 0x14, size: 0x4, def value: None
  float_t ___rotationStep;

  /// @brief Field rotationFlexySpeed, offset: 0x18, size: 0x4, def value: None
  float_t ___rotationFlexySpeed;

  /// @brief Field rotationPropagationSpeed, offset: 0x1c, size: 0x4, def value: None
  int32_t ___rotationPropagationSpeed;

  /// @brief Field progressPos, offset: 0x20, size: 0x4, def value: None
  int32_t ___progressPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect, ___rotationAngle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect, ___rotationStep) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect, ___rotationFlexySpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect, ___rotationPropagationSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect, ___progressPos) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackLaneRingsRotationEffect
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5112))
// CS Name: ::TrackLaneRingsRotationEffect*
class CORDL_TYPE TrackLaneRingsRotationEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RingRotationEffect = ::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect;

  /// @brief Field _trackLaneRingsManager, offset 0x18, size 0x8
  __declspec(property(get = __get__trackLaneRingsManager, put = __set__trackLaneRingsManager))::GlobalNamespace::TrackLaneRingsManager* _trackLaneRingsManager;

  /// @brief Field _startupRotationAngle, offset 0x20, size 0x4
  __declspec(property(get = __get__startupRotationAngle, put = __set__startupRotationAngle)) float_t _startupRotationAngle;

  /// @brief Field _startupRotationStep, offset 0x24, size 0x4
  __declspec(property(get = __get__startupRotationStep, put = __set__startupRotationStep)) float_t _startupRotationStep;

  /// @brief Field _startupRotationPropagationSpeed, offset 0x28, size 0x4
  __declspec(property(get = __get__startupRotationPropagationSpeed, put = __set__startupRotationPropagationSpeed)) int32_t _startupRotationPropagationSpeed;

  /// @brief Field _startupRotationFlexySpeed, offset 0x2c, size 0x4
  __declspec(property(get = __get__startupRotationFlexySpeed, put = __set__startupRotationFlexySpeed)) float_t _startupRotationFlexySpeed;

  /// @brief Field _activeRingRotationEffects, offset 0x30, size 0x8
  __declspec(
      property(get = __get__activeRingRotationEffects,
               put = __set__activeRingRotationEffects))::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* _activeRingRotationEffects;

  /// @brief Field _ringRotationEffectsPool, offset 0x38, size 0x8
  __declspec(property(get = __get__ringRotationEffectsPool,
                      put = __set__ringRotationEffectsPool))::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* _ringRotationEffectsPool;

  /// @brief Field ringRotationEffectsToDelete, offset 0x40, size 0x8
  __declspec(property(get = __get_ringRotationEffectsToDelete, put = __set_ringRotationEffectsToDelete))::System::Collections::Generic::List_1<int32_t>* ringRotationEffectsToDelete;

  constexpr ::GlobalNamespace::TrackLaneRingsManager*& __get__trackLaneRingsManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TrackLaneRingsManager*> const& __get__trackLaneRingsManager() const;

  constexpr void __set__trackLaneRingsManager(::GlobalNamespace::TrackLaneRingsManager* value);

  constexpr float_t& __get__startupRotationAngle();

  constexpr float_t const& __get__startupRotationAngle() const;

  constexpr void __set__startupRotationAngle(float_t value);

  constexpr float_t& __get__startupRotationStep();

  constexpr float_t const& __get__startupRotationStep() const;

  constexpr void __set__startupRotationStep(float_t value);

  constexpr int32_t& __get__startupRotationPropagationSpeed();

  constexpr int32_t const& __get__startupRotationPropagationSpeed() const;

  constexpr void __set__startupRotationPropagationSpeed(int32_t value);

  constexpr float_t& __get__startupRotationFlexySpeed();

  constexpr float_t const& __get__startupRotationFlexySpeed() const;

  constexpr void __set__startupRotationFlexySpeed(float_t value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>*& __get__activeRingRotationEffects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>*> const&
  __get__activeRingRotationEffects() const;

  constexpr void __set__activeRingRotationEffects(::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>*& __get__ringRotationEffectsPool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>*> const&
  __get__ringRotationEffectsPool() const;

  constexpr void __set__ringRotationEffectsPool(::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get_ringRotationEffectsToDelete();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get_ringRotationEffectsToDelete() const;

  constexpr void __set_ringRotationEffectsToDelete(::System::Collections::Generic::List_1<int32_t>* value);

  /// @brief Method Awake addr 0x227f314 size 0x180 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x227f49c size 0x10 virtual false final false
  inline void Start();

  /// @brief Method FixedUpdate addr 0x227f590 size 0x164 virtual false final false
  inline void FixedUpdate();

  /// @brief Method AddRingRotationEffect addr 0x227f4ac size 0xe4 virtual false final false
  inline void AddRingRotationEffect(float_t angle, float_t step, int32_t propagationSpeed, float_t flexySpeed);

  /// @brief Method GetFirstRingRotationAngle addr 0x227f870 size 0x38 virtual false final false
  inline float_t GetFirstRingRotationAngle();

  /// @brief Method GetFirstRingDestinationRotationAngle addr 0x227f8a8 size 0x38 virtual false final false
  inline float_t GetFirstRingDestinationRotationAngle();

  /// @brief Method SpawnRingRotationEffect addr 0x227f79c size 0xd4 virtual false final false
  inline ::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect* SpawnRingRotationEffect();

  /// @brief Method RecycleRingRotationEffect addr 0x227f6f4 size 0xa8 virtual false final false
  inline void RecycleRingRotationEffect(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect* ringRotationEffect);

  static inline ::GlobalNamespace::TrackLaneRingsRotationEffect* New_ctor();

  /// @brief Method .ctor addr 0x227f8e0 size 0x90 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsRotationEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackLaneRingsRotationEffect(TrackLaneRingsRotationEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsRotationEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackLaneRingsRotationEffect(TrackLaneRingsRotationEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackLaneRingsRotationEffect();

public:
  /// @brief Field _trackLaneRingsManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TrackLaneRingsManager* ____trackLaneRingsManager;

  /// @brief Field _startupRotationAngle, offset: 0x20, size: 0x4, def value: None
  float_t ____startupRotationAngle;

  /// @brief Field _startupRotationStep, offset: 0x24, size: 0x4, def value: None
  float_t ____startupRotationStep;

  /// @brief Field _startupRotationPropagationSpeed, offset: 0x28, size: 0x4, def value: None
  int32_t ____startupRotationPropagationSpeed;

  /// @brief Field _startupRotationFlexySpeed, offset: 0x2c, size: 0x4, def value: None
  float_t ____startupRotationFlexySpeed;

  /// @brief Field _activeRingRotationEffects, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* ____activeRingRotationEffects;

  /// @brief Field _ringRotationEffectsPool, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* ____ringRotationEffectsPool;

  /// @brief Field ringRotationEffectsToDelete, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___ringRotationEffectsToDelete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrackLaneRingsRotationEffect, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____trackLaneRingsManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____startupRotationAngle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____startupRotationStep) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____startupRotationPropagationSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____startupRotationFlexySpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____activeRingRotationEffects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____ringRotationEffectsPool) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ___ringRotationEffectsToDelete) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsRotationEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsRotationEffect*, "", "TrackLaneRingsRotationEffect");
NEED_NO_BOX(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*, "", "TrackLaneRingsRotationEffect/RingRotationEffect");

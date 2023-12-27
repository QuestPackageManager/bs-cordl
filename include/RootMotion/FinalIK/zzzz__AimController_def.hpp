#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AimController)
namespace RootMotion::FinalIK {
class __AimController___TurnToTarget_d__33;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections {
class IEnumerator;
}
namespace RootMotion::FinalIK {
class AimIK;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class AimController;
}
namespace RootMotion::FinalIK {
class __AimController___TurnToTarget_d__33;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::AimController);
MARK_REF_PTR_T(::RootMotion::FinalIK::__AimController___TurnToTarget_d__33);
// Type: ::<TurnToTarget>d__33
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12629))
// CS Name: ::AimController::<TurnToTarget>d__33*
class CORDL_TYPE __AimController___TurnToTarget_d__33 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::RootMotion::FinalIK::AimController* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::RootMotion::FinalIK::AimController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::AimController*> const& __get___4__this() const;

  constexpr void __set___4__this(::RootMotion::FinalIK::AimController* value);

  static inline ::RootMotion::FinalIK::__AimController___TurnToTarget_d__33* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x1293cd4 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x1293de0 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x1293de4 size 0xe4 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1293ec8 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x1293ed0 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x1293f10 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__AimController___TurnToTarget_d__33", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AimController___TurnToTarget_d__33(__AimController___TurnToTarget_d__33&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AimController___TurnToTarget_d__33", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AimController___TurnToTarget_d__33(__AimController___TurnToTarget_d__33 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AimController___TurnToTarget_d__33();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::FinalIK::AimController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__AimController___TurnToTarget_d__33, 0x28>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::AimController
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12630))
// CS Name: ::RootMotion.FinalIK::AimController*
class CORDL_TYPE AimController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _TurnToTarget_d__33 = ::RootMotion::FinalIK::__AimController___TurnToTarget_d__33;

  /// @brief Field ik, offset 0x18, size 0x8
  __declspec(property(get = __get_ik, put = __set_ik))::RootMotion::FinalIK::AimIK* ik;

  /// @brief Field weight, offset 0x20, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  /// @brief Field target, offset 0x28, size 0x8
  __declspec(property(get = __get_target, put = __set_target))::UnityEngine::Transform* target;

  /// @brief Field targetSwitchSmoothTime, offset 0x30, size 0x4
  __declspec(property(get = __get_targetSwitchSmoothTime, put = __set_targetSwitchSmoothTime)) float_t targetSwitchSmoothTime;

  /// @brief Field weightSmoothTime, offset 0x34, size 0x4
  __declspec(property(get = __get_weightSmoothTime, put = __set_weightSmoothTime)) float_t weightSmoothTime;

  /// @brief Field smoothTurnTowardsTarget, offset 0x38, size 0x1
  __declspec(property(get = __get_smoothTurnTowardsTarget, put = __set_smoothTurnTowardsTarget)) bool smoothTurnTowardsTarget;

  /// @brief Field maxRadiansDelta, offset 0x3c, size 0x4
  __declspec(property(get = __get_maxRadiansDelta, put = __set_maxRadiansDelta)) float_t maxRadiansDelta;

  /// @brief Field maxMagnitudeDelta, offset 0x40, size 0x4
  __declspec(property(get = __get_maxMagnitudeDelta, put = __set_maxMagnitudeDelta)) float_t maxMagnitudeDelta;

  /// @brief Field slerpSpeed, offset 0x44, size 0x4
  __declspec(property(get = __get_slerpSpeed, put = __set_slerpSpeed)) float_t slerpSpeed;

  /// @brief Field pivotOffsetFromRoot, offset 0x48, size 0xc
  __declspec(property(get = __get_pivotOffsetFromRoot, put = __set_pivotOffsetFromRoot))::UnityEngine::Vector3 pivotOffsetFromRoot;

  /// @brief Field minDistance, offset 0x54, size 0x4
  __declspec(property(get = __get_minDistance, put = __set_minDistance)) float_t minDistance;

  /// @brief Field offset, offset 0x58, size 0xc
  __declspec(property(get = __get_offset, put = __set_offset))::UnityEngine::Vector3 offset;

  /// @brief Field maxRootAngle, offset 0x64, size 0x4
  __declspec(property(get = __get_maxRootAngle, put = __set_maxRootAngle)) float_t maxRootAngle;

  /// @brief Field turnToTarget, offset 0x68, size 0x1
  __declspec(property(get = __get_turnToTarget, put = __set_turnToTarget)) bool turnToTarget;

  /// @brief Field turnToTargetTime, offset 0x6c, size 0x4
  __declspec(property(get = __get_turnToTargetTime, put = __set_turnToTargetTime)) float_t turnToTargetTime;

  /// @brief Field useAnimatedAimDirection, offset 0x70, size 0x1
  __declspec(property(get = __get_useAnimatedAimDirection, put = __set_useAnimatedAimDirection)) bool useAnimatedAimDirection;

  /// @brief Field animatedAimDirection, offset 0x74, size 0xc
  __declspec(property(get = __get_animatedAimDirection, put = __set_animatedAimDirection))::UnityEngine::Vector3 animatedAimDirection;

  /// @brief Field lastTarget, offset 0x80, size 0x8
  __declspec(property(get = __get_lastTarget, put = __set_lastTarget))::UnityEngine::Transform* lastTarget;

  /// @brief Field switchWeight, offset 0x88, size 0x4
  __declspec(property(get = __get_switchWeight, put = __set_switchWeight)) float_t switchWeight;

  /// @brief Field switchWeightV, offset 0x8c, size 0x4
  __declspec(property(get = __get_switchWeightV, put = __set_switchWeightV)) float_t switchWeightV;

  /// @brief Field weightV, offset 0x90, size 0x4
  __declspec(property(get = __get_weightV, put = __set_weightV)) float_t weightV;

  /// @brief Field lastPosition, offset 0x94, size 0xc
  __declspec(property(get = __get_lastPosition, put = __set_lastPosition))::UnityEngine::Vector3 lastPosition;

  /// @brief Field dir, offset 0xa0, size 0xc
  __declspec(property(get = __get_dir, put = __set_dir))::UnityEngine::Vector3 dir;

  /// @brief Field lastSmoothTowardsTarget, offset 0xac, size 0x1
  __declspec(property(get = __get_lastSmoothTowardsTarget, put = __set_lastSmoothTowardsTarget)) bool lastSmoothTowardsTarget;

  /// @brief Field turningToTarget, offset 0xad, size 0x1
  __declspec(property(get = __get_turningToTarget, put = __set_turningToTarget)) bool turningToTarget;

  /// @brief Field turnToTargetMlp, offset 0xb0, size 0x4
  __declspec(property(get = __get_turnToTargetMlp, put = __set_turnToTargetMlp)) float_t turnToTargetMlp;

  /// @brief Field turnToTargetMlpV, offset 0xb4, size 0x4
  __declspec(property(get = __get_turnToTargetMlpV, put = __set_turnToTargetMlpV)) float_t turnToTargetMlpV;

  __declspec(property(get = get_pivot))::UnityEngine::Vector3 pivot;

  constexpr ::RootMotion::FinalIK::AimIK*& __get_ik();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::AimIK*> const& __get_ik() const;

  constexpr void __set_ik(::RootMotion::FinalIK::AimIK* value);

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  constexpr ::UnityEngine::Transform*& __get_target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_target() const;

  constexpr void __set_target(::UnityEngine::Transform* value);

  constexpr float_t& __get_targetSwitchSmoothTime();

  constexpr float_t const& __get_targetSwitchSmoothTime() const;

  constexpr void __set_targetSwitchSmoothTime(float_t value);

  constexpr float_t& __get_weightSmoothTime();

  constexpr float_t const& __get_weightSmoothTime() const;

  constexpr void __set_weightSmoothTime(float_t value);

  constexpr bool& __get_smoothTurnTowardsTarget();

  constexpr bool const& __get_smoothTurnTowardsTarget() const;

  constexpr void __set_smoothTurnTowardsTarget(bool value);

  constexpr float_t& __get_maxRadiansDelta();

  constexpr float_t const& __get_maxRadiansDelta() const;

  constexpr void __set_maxRadiansDelta(float_t value);

  constexpr float_t& __get_maxMagnitudeDelta();

  constexpr float_t const& __get_maxMagnitudeDelta() const;

  constexpr void __set_maxMagnitudeDelta(float_t value);

  constexpr float_t& __get_slerpSpeed();

  constexpr float_t const& __get_slerpSpeed() const;

  constexpr void __set_slerpSpeed(float_t value);

  constexpr ::UnityEngine::Vector3& __get_pivotOffsetFromRoot();

  constexpr ::UnityEngine::Vector3 const& __get_pivotOffsetFromRoot() const;

  constexpr void __set_pivotOffsetFromRoot(::UnityEngine::Vector3 value);

  constexpr float_t& __get_minDistance();

  constexpr float_t const& __get_minDistance() const;

  constexpr void __set_minDistance(float_t value);

  constexpr ::UnityEngine::Vector3& __get_offset();

  constexpr ::UnityEngine::Vector3 const& __get_offset() const;

  constexpr void __set_offset(::UnityEngine::Vector3 value);

  constexpr float_t& __get_maxRootAngle();

  constexpr float_t const& __get_maxRootAngle() const;

  constexpr void __set_maxRootAngle(float_t value);

  constexpr bool& __get_turnToTarget();

  constexpr bool const& __get_turnToTarget() const;

  constexpr void __set_turnToTarget(bool value);

  constexpr float_t& __get_turnToTargetTime();

  constexpr float_t const& __get_turnToTargetTime() const;

  constexpr void __set_turnToTargetTime(float_t value);

  constexpr bool& __get_useAnimatedAimDirection();

  constexpr bool const& __get_useAnimatedAimDirection() const;

  constexpr void __set_useAnimatedAimDirection(bool value);

  constexpr ::UnityEngine::Vector3& __get_animatedAimDirection();

  constexpr ::UnityEngine::Vector3 const& __get_animatedAimDirection() const;

  constexpr void __set_animatedAimDirection(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Transform*& __get_lastTarget();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_lastTarget() const;

  constexpr void __set_lastTarget(::UnityEngine::Transform* value);

  constexpr float_t& __get_switchWeight();

  constexpr float_t const& __get_switchWeight() const;

  constexpr void __set_switchWeight(float_t value);

  constexpr float_t& __get_switchWeightV();

  constexpr float_t const& __get_switchWeightV() const;

  constexpr void __set_switchWeightV(float_t value);

  constexpr float_t& __get_weightV();

  constexpr float_t const& __get_weightV() const;

  constexpr void __set_weightV(float_t value);

  constexpr ::UnityEngine::Vector3& __get_lastPosition();

  constexpr ::UnityEngine::Vector3 const& __get_lastPosition() const;

  constexpr void __set_lastPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_dir();

  constexpr ::UnityEngine::Vector3 const& __get_dir() const;

  constexpr void __set_dir(::UnityEngine::Vector3 value);

  constexpr bool& __get_lastSmoothTowardsTarget();

  constexpr bool const& __get_lastSmoothTowardsTarget() const;

  constexpr void __set_lastSmoothTowardsTarget(bool value);

  constexpr bool& __get_turningToTarget();

  constexpr bool const& __get_turningToTarget() const;

  constexpr void __set_turningToTarget(bool value);

  constexpr float_t& __get_turnToTargetMlp();

  constexpr float_t const& __get_turnToTargetMlp() const;

  constexpr void __set_turnToTargetMlp(float_t value);

  constexpr float_t& __get_turnToTargetMlpV();

  constexpr float_t const& __get_turnToTargetMlpV() const;

  constexpr void __set_turnToTargetMlpV(float_t value);

  /// @brief Method Start addr 0x1293218 size 0x7c virtual false final false
  inline void Start();

  /// @brief Method LateUpdate addr 0x1293318 size 0x52c virtual false final false
  inline void LateUpdate();

  /// @brief Method get_pivot addr 0x1293294 size 0x84 virtual false final false
  inline ::UnityEngine::Vector3 get_pivot();

  /// @brief Method ApplyMinDistance addr 0x1293844 size 0x184 virtual false final false
  inline void ApplyMinDistance();

  /// @brief Method RootRotation addr 0x12939c8 size 0x2a4 virtual false final false
  inline void RootRotation();

  /// @brief Method TurnToTarget addr 0x1293c6c size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* TurnToTarget();

  static inline ::RootMotion::FinalIK::AimController* New_ctor();

  /// @brief Method .ctor addr 0x1293cfc size 0xe4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AimController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AimController(AimController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AimController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AimController(AimController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AimController();

public:
  /// @brief Field ik, offset: 0x18, size: 0x8, def value: None
  ::RootMotion::FinalIK::AimIK* ___ik;

  /// @brief Field weight, offset: 0x20, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field target, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ___target;

  /// @brief Field targetSwitchSmoothTime, offset: 0x30, size: 0x4, def value: None
  float_t ___targetSwitchSmoothTime;

  /// @brief Field weightSmoothTime, offset: 0x34, size: 0x4, def value: None
  float_t ___weightSmoothTime;

  /// @brief Field smoothTurnTowardsTarget, offset: 0x38, size: 0x1, def value: None
  bool ___smoothTurnTowardsTarget;

  /// @brief Field maxRadiansDelta, offset: 0x3c, size: 0x4, def value: None
  float_t ___maxRadiansDelta;

  /// @brief Field maxMagnitudeDelta, offset: 0x40, size: 0x4, def value: None
  float_t ___maxMagnitudeDelta;

  /// @brief Field slerpSpeed, offset: 0x44, size: 0x4, def value: None
  float_t ___slerpSpeed;

  /// @brief Field pivotOffsetFromRoot, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pivotOffsetFromRoot;

  /// @brief Field minDistance, offset: 0x54, size: 0x4, def value: None
  float_t ___minDistance;

  /// @brief Field offset, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offset;

  /// @brief Field maxRootAngle, offset: 0x64, size: 0x4, def value: None
  float_t ___maxRootAngle;

  /// @brief Field turnToTarget, offset: 0x68, size: 0x1, def value: None
  bool ___turnToTarget;

  /// @brief Field turnToTargetTime, offset: 0x6c, size: 0x4, def value: None
  float_t ___turnToTargetTime;

  /// @brief Field useAnimatedAimDirection, offset: 0x70, size: 0x1, def value: None
  bool ___useAnimatedAimDirection;

  /// @brief Field animatedAimDirection, offset: 0x74, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___animatedAimDirection;

  /// @brief Field lastTarget, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Transform* ___lastTarget;

  /// @brief Field switchWeight, offset: 0x88, size: 0x4, def value: None
  float_t ___switchWeight;

  /// @brief Field switchWeightV, offset: 0x8c, size: 0x4, def value: None
  float_t ___switchWeightV;

  /// @brief Field weightV, offset: 0x90, size: 0x4, def value: None
  float_t ___weightV;

  /// @brief Field lastPosition, offset: 0x94, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastPosition;

  /// @brief Field dir, offset: 0xa0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___dir;

  /// @brief Field lastSmoothTowardsTarget, offset: 0xac, size: 0x1, def value: None
  bool ___lastSmoothTowardsTarget;

  /// @brief Field turningToTarget, offset: 0xad, size: 0x1, def value: None
  bool ___turningToTarget;

  /// @brief Field turnToTargetMlp, offset: 0xb0, size: 0x4, def value: None
  float_t ___turnToTargetMlp;

  /// @brief Field turnToTargetMlpV, offset: 0xb4, size: 0x4, def value: None
  float_t ___turnToTargetMlpV;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::AimController, 0xb8>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::AimController);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::AimController*, "RootMotion.FinalIK", "AimController");
NEED_NO_BOX(::RootMotion::FinalIK::__AimController___TurnToTarget_d__33);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__AimController___TurnToTarget_d__33*, "RootMotion.FinalIK", "AimController/<TurnToTarget>d__33");

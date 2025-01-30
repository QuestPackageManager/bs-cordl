#pragma once
// IWYU pragma private; include "UnityEngine/HingeJoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Joint_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HingeJoint)
namespace UnityEngine {
struct JointLimits;
}
namespace UnityEngine {
struct JointMotor;
}
namespace UnityEngine {
struct JointSpring;
}
// Forward declare root types
namespace UnityEngine {
class HingeJoint;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::HingeJoint);
// Dependencies UnityEngine.Joint
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.HingeJoint
class CORDL_TYPE HingeJoint : public ::UnityEngine::Joint {
public:
  // Declarations
  __declspec(property(get = get_angle)) float_t angle;

  __declspec(property(get = get_extendedLimits, put = set_extendedLimits)) bool extendedLimits;

  __declspec(property(get = get_limits, put = set_limits)) ::UnityEngine::JointLimits limits;

  __declspec(property(get = get_motor, put = set_motor)) ::UnityEngine::JointMotor motor;

  __declspec(property(get = get_spring, put = set_spring)) ::UnityEngine::JointSpring spring;

  __declspec(property(get = get_useAcceleration, put = set_useAcceleration)) bool useAcceleration;

  __declspec(property(get = get_useLimits, put = set_useLimits)) bool useLimits;

  __declspec(property(get = get_useMotor, put = set_useMotor)) bool useMotor;

  __declspec(property(get = get_useSpring, put = set_useSpring)) bool useSpring;

  __declspec(property(get = get_velocity)) float_t velocity;

  static inline ::UnityEngine::HingeJoint* New_ctor();

  /// @brief Method .ctor, addr 0x490cd60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angle, addr 0x490cca4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_angle();

  /// @brief Method get_extendedLimits, addr 0x490cb68, size 0x3c, virtual false, abstract: false, final false
  inline bool get_extendedLimits();

  /// @brief Method get_limits, addr 0x490c7f8, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::JointLimits get_limits();

  /// @brief Method get_limits_Injected, addr 0x490c864, size 0x44, virtual false, abstract: false, final false
  inline void get_limits_Injected(::ByRef<::UnityEngine::JointLimits> ret);

  /// @brief Method get_motor, addr 0x490c6c0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::JointMotor get_motor();

  /// @brief Method get_motor_Injected, addr 0x490c71c, size 0x44, virtual false, abstract: false, final false
  inline void get_motor_Injected(::ByRef<::UnityEngine::JointMotor> ret);

  /// @brief Method get_spring, addr 0x490c930, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::JointSpring get_spring();

  /// @brief Method get_spring_Injected, addr 0x490c98c, size 0x44, virtual false, abstract: false, final false
  inline void get_spring_Injected(::ByRef<::UnityEngine::JointSpring> ret);

  /// @brief Method get_useAcceleration, addr 0x490cce0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useAcceleration();

  /// @brief Method get_useLimits, addr 0x490cae8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useLimits();

  /// @brief Method get_useMotor, addr 0x490ca68, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useMotor();

  /// @brief Method get_useSpring, addr 0x490cbe8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useSpring();

  /// @brief Method get_velocity, addr 0x490cc68, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_velocity();

  /// @brief Method set_extendedLimits, addr 0x490cba4, size 0x44, virtual false, abstract: false, final false
  inline void set_extendedLimits(bool value);

  /// @brief Method set_limits, addr 0x490c8a8, size 0x44, virtual false, abstract: false, final false
  inline void set_limits(::UnityEngine::JointLimits value);

  /// @brief Method set_limits_Injected, addr 0x490c8ec, size 0x44, virtual false, abstract: false, final false
  inline void set_limits_Injected(::ByRef<::UnityEngine::JointLimits> value);

  /// @brief Method set_motor, addr 0x490c760, size 0x54, virtual false, abstract: false, final false
  inline void set_motor(::UnityEngine::JointMotor value);

  /// @brief Method set_motor_Injected, addr 0x490c7b4, size 0x44, virtual false, abstract: false, final false
  inline void set_motor_Injected(::ByRef<::UnityEngine::JointMotor> value);

  /// @brief Method set_spring, addr 0x490c9d0, size 0x54, virtual false, abstract: false, final false
  inline void set_spring(::UnityEngine::JointSpring value);

  /// @brief Method set_spring_Injected, addr 0x490ca24, size 0x44, virtual false, abstract: false, final false
  inline void set_spring_Injected(::ByRef<::UnityEngine::JointSpring> value);

  /// @brief Method set_useAcceleration, addr 0x490cd1c, size 0x44, virtual false, abstract: false, final false
  inline void set_useAcceleration(bool value);

  /// @brief Method set_useLimits, addr 0x490cb24, size 0x44, virtual false, abstract: false, final false
  inline void set_useLimits(bool value);

  /// @brief Method set_useMotor, addr 0x490caa4, size 0x44, virtual false, abstract: false, final false
  inline void set_useMotor(bool value);

  /// @brief Method set_useSpring, addr 0x490cc24, size 0x44, virtual false, abstract: false, final false
  inline void set_useSpring(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HingeJoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HingeJoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HingeJoint(HingeJoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HingeJoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HingeJoint(HingeJoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15757 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HingeJoint, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::HingeJoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HingeJoint*, "UnityEngine", "HingeJoint");

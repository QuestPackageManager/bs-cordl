#pragma once
// IWYU pragma private; include "UnityEngine/HingeJoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Joint_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine::HingeJoint
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::HingeJoint*
class CORDL_TYPE HingeJoint : public ::UnityEngine::Joint {
public:
  // Declarations
  __declspec(property(get = get_angle)) float_t angle;

  __declspec(property(get = get_limits, put = set_limits))::UnityEngine::JointLimits limits;

  __declspec(property(get = get_motor, put = set_motor))::UnityEngine::JointMotor motor;

  __declspec(property(get = get_spring, put = set_spring))::UnityEngine::JointSpring spring;

  __declspec(property(get = get_useLimits, put = set_useLimits)) bool useLimits;

  __declspec(property(get = get_useMotor, put = set_useMotor)) bool useMotor;

  __declspec(property(get = get_useSpring, put = set_useSpring)) bool useSpring;

  __declspec(property(get = get_velocity)) float_t velocity;

  static inline ::UnityEngine::HingeJoint* New_ctor();

  /// @brief Method .ctor, addr 0x3493cc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angle, addr 0x3493c8c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_angle();

  /// @brief Method get_limits, addr 0x3493860, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::JointLimits get_limits();

  /// @brief Method get_limits_Injected, addr 0x34938cc, size 0x44, virtual false, abstract: false, final false
  inline void get_limits_Injected(ByRef<::UnityEngine::JointLimits> ret);

  /// @brief Method get_motor, addr 0x3493728, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::JointMotor get_motor();

  /// @brief Method get_motor_Injected, addr 0x3493784, size 0x44, virtual false, abstract: false, final false
  inline void get_motor_Injected(ByRef<::UnityEngine::JointMotor> ret);

  /// @brief Method get_spring, addr 0x3493998, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::JointSpring get_spring();

  /// @brief Method get_spring_Injected, addr 0x34939f4, size 0x44, virtual false, abstract: false, final false
  inline void get_spring_Injected(ByRef<::UnityEngine::JointSpring> ret);

  /// @brief Method get_useLimits, addr 0x3493b50, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useLimits();

  /// @brief Method get_useMotor, addr 0x3493ad0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useMotor();

  /// @brief Method get_useSpring, addr 0x3493bd0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useSpring();

  /// @brief Method get_velocity, addr 0x3493c50, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_velocity();

  /// @brief Method set_limits, addr 0x3493910, size 0x44, virtual false, abstract: false, final false
  inline void set_limits(::UnityEngine::JointLimits value);

  /// @brief Method set_limits_Injected, addr 0x3493954, size 0x44, virtual false, abstract: false, final false
  inline void set_limits_Injected(ByRef<::UnityEngine::JointLimits> value);

  /// @brief Method set_motor, addr 0x34937c8, size 0x54, virtual false, abstract: false, final false
  inline void set_motor(::UnityEngine::JointMotor value);

  /// @brief Method set_motor_Injected, addr 0x349381c, size 0x44, virtual false, abstract: false, final false
  inline void set_motor_Injected(ByRef<::UnityEngine::JointMotor> value);

  /// @brief Method set_spring, addr 0x3493a38, size 0x54, virtual false, abstract: false, final false
  inline void set_spring(::UnityEngine::JointSpring value);

  /// @brief Method set_spring_Injected, addr 0x3493a8c, size 0x44, virtual false, abstract: false, final false
  inline void set_spring_Injected(ByRef<::UnityEngine::JointSpring> value);

  /// @brief Method set_useLimits, addr 0x3493b8c, size 0x44, virtual false, abstract: false, final false
  inline void set_useLimits(bool value);

  /// @brief Method set_useMotor, addr 0x3493b0c, size 0x44, virtual false, abstract: false, final false
  inline void set_useMotor(bool value);

  /// @brief Method set_useSpring, addr 0x3493c0c, size 0x44, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HingeJoint, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::HingeJoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HingeJoint*, "UnityEngine", "HingeJoint");

#pragma once
// IWYU pragma private; include "UnityEngine/CharacterJoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__JointDrive_def.hpp"
#include "UnityEngine/zzzz__Joint_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CharacterJoint)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct SoftJointLimitSpring;
}
namespace UnityEngine {
struct SoftJointLimit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class CharacterJoint;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CharacterJoint);
// Dependencies UnityEngine.Joint, UnityEngine.JointDrive, UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CharacterJoint
class CORDL_TYPE CharacterJoint : public ::UnityEngine::Joint {
public:
  // Declarations
  __declspec(property(get = get_enableProjection, put = set_enableProjection)) bool enableProjection;

  __declspec(property(get = get_highTwistLimit, put = set_highTwistLimit)) ::UnityEngine::SoftJointLimit highTwistLimit;

  __declspec(property(get = get_lowTwistLimit, put = set_lowTwistLimit)) ::UnityEngine::SoftJointLimit lowTwistLimit;

  __declspec(property(get = get_projectionAngle, put = set_projectionAngle)) float_t projectionAngle;

  __declspec(property(get = get_projectionDistance, put = set_projectionDistance)) float_t projectionDistance;

  /// @brief Field rotationDrive, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_rotationDrive, put = __cordl_internal_set_rotationDrive)) ::UnityEngine::JointDrive rotationDrive;

  __declspec(property(get = get_swing1Limit, put = set_swing1Limit)) ::UnityEngine::SoftJointLimit swing1Limit;

  __declspec(property(get = get_swing2Limit, put = set_swing2Limit)) ::UnityEngine::SoftJointLimit swing2Limit;

  __declspec(property(get = get_swingAxis, put = set_swingAxis)) ::UnityEngine::Vector3 swingAxis;

  __declspec(property(get = get_swingLimitSpring, put = set_swingLimitSpring)) ::UnityEngine::SoftJointLimitSpring swingLimitSpring;

  /// @brief Field targetAngularVelocity, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_targetAngularVelocity, put = __cordl_internal_set_targetAngularVelocity)) ::UnityEngine::Vector3 targetAngularVelocity;

  /// @brief Field targetRotation, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_targetRotation, put = __cordl_internal_set_targetRotation)) ::UnityEngine::Quaternion targetRotation;

  __declspec(property(get = get_twistLimitSpring, put = set_twistLimitSpring)) ::UnityEngine::SoftJointLimitSpring twistLimitSpring;

  static inline ::UnityEngine::CharacterJoint* New_ctor();

  constexpr ::UnityEngine::JointDrive const& __cordl_internal_get_rotationDrive() const;

  constexpr ::UnityEngine::JointDrive& __cordl_internal_get_rotationDrive();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetAngularVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetAngularVelocity();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_targetRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_targetRotation();

  constexpr void __cordl_internal_set_rotationDrive(::UnityEngine::JointDrive value);

  constexpr void __cordl_internal_set_targetAngularVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_targetRotation(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x694a1ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enableProjection, addr 0x6949cec, size 0x80, virtual false, abstract: false, final false
  inline bool get_enableProjection();

  /// @brief Method get_enableProjection_Injected, addr 0x6949d6c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableProjection_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_highTwistLimit, addr 0x69497ac, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_highTwistLimit();

  /// @brief Method get_highTwistLimit_Injected, addr 0x694984c, size 0x44, virtual false, abstract: false, final false
  static inline void get_highTwistLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_lowTwistLimit, addr 0x69495ec, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_lowTwistLimit();

  /// @brief Method get_lowTwistLimit_Injected, addr 0x694968c, size 0x44, virtual false, abstract: false, final false
  static inline void get_lowTwistLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_projectionAngle, addr 0x694a014, size 0x80, virtual false, abstract: false, final false
  inline float_t get_projectionAngle();

  /// @brief Method get_projectionAngle_Injected, addr 0x694a094, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_projectionAngle_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_projectionDistance, addr 0x6949e7c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_projectionDistance();

  /// @brief Method get_projectionDistance_Injected, addr 0x6949efc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_projectionDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_swing1Limit, addr 0x694996c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_swing1Limit();

  /// @brief Method get_swing1Limit_Injected, addr 0x6949a0c, size 0x44, virtual false, abstract: false, final false
  static inline void get_swing1Limit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_swing2Limit, addr 0x6949b2c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_swing2Limit();

  /// @brief Method get_swing2Limit_Injected, addr 0x6949bcc, size 0x44, virtual false, abstract: false, final false
  static inline void get_swing2Limit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_swingAxis, addr 0x69490c4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_swingAxis();

  /// @brief Method get_swingAxis_Injected, addr 0x6949164, size 0x44, virtual false, abstract: false, final false
  static inline void get_swingAxis_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_swingLimitSpring, addr 0x6949438, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_swingLimitSpring();

  /// @brief Method get_swingLimitSpring_Injected, addr 0x69494d0, size 0x44, virtual false, abstract: false, final false
  static inline void get_swingLimitSpring_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_twistLimitSpring, addr 0x6949284, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_twistLimitSpring();

  /// @brief Method get_twistLimitSpring_Injected, addr 0x694931c, size 0x44, virtual false, abstract: false, final false
  static inline void get_twistLimitSpring_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method set_enableProjection, addr 0x6949da8, size 0x90, virtual false, abstract: false, final false
  inline void set_enableProjection(bool value);

  /// @brief Method set_enableProjection_Injected, addr 0x6949e38, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableProjection_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_highTwistLimit, addr 0x6949890, size 0x98, virtual false, abstract: false, final false
  inline void set_highTwistLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_highTwistLimit_Injected, addr 0x6949928, size 0x44, virtual false, abstract: false, final false
  static inline void set_highTwistLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_lowTwistLimit, addr 0x69496d0, size 0x98, virtual false, abstract: false, final false
  inline void set_lowTwistLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_lowTwistLimit_Injected, addr 0x6949768, size 0x44, virtual false, abstract: false, final false
  static inline void set_lowTwistLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_projectionAngle, addr 0x694a0d0, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionAngle(float_t value);

  /// @brief Method set_projectionAngle_Injected, addr 0x694a160, size 0x4c, virtual false, abstract: false, final false
  static inline void set_projectionAngle_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_projectionDistance, addr 0x6949f38, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionDistance(float_t value);

  /// @brief Method set_projectionDistance_Injected, addr 0x6949fc8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_projectionDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_swing1Limit, addr 0x6949a50, size 0x98, virtual false, abstract: false, final false
  inline void set_swing1Limit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_swing1Limit_Injected, addr 0x6949ae8, size 0x44, virtual false, abstract: false, final false
  static inline void set_swing1Limit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_swing2Limit, addr 0x6949c10, size 0x98, virtual false, abstract: false, final false
  inline void set_swing2Limit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_swing2Limit_Injected, addr 0x6949ca8, size 0x44, virtual false, abstract: false, final false
  static inline void set_swing2Limit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_swingAxis, addr 0x69491a8, size 0x98, virtual false, abstract: false, final false
  inline void set_swingAxis(::UnityEngine::Vector3 value);

  /// @brief Method set_swingAxis_Injected, addr 0x6949240, size 0x44, virtual false, abstract: false, final false
  static inline void set_swingAxis_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_swingLimitSpring, addr 0x6949514, size 0x94, virtual false, abstract: false, final false
  inline void set_swingLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_swingLimitSpring_Injected, addr 0x69495a8, size 0x44, virtual false, abstract: false, final false
  static inline void set_swingLimitSpring_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_twistLimitSpring, addr 0x6949360, size 0x94, virtual false, abstract: false, final false
  inline void set_twistLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_twistLimitSpring_Injected, addr 0x69493f4, size 0x44, virtual false, abstract: false, final false
  static inline void set_twistLimitSpring_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimitSpring> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CharacterJoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CharacterJoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CharacterJoint(CharacterJoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CharacterJoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CharacterJoint(CharacterJoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18587 };

  /// @brief Field targetRotation, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___targetRotation;

  /// @brief Field targetAngularVelocity, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___targetAngularVelocity;

  /// @brief Field rotationDrive, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::JointDrive ___rotationDrive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CharacterJoint, ___targetRotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CharacterJoint, ___targetAngularVelocity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CharacterJoint, ___rotationDrive) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::CharacterJoint, 0x48>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CharacterJoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CharacterJoint*, "UnityEngine", "CharacterJoint");

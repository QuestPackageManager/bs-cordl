#pragma once
// IWYU pragma private; include "UnityEngine/CharacterJoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__JointDrive_def.hpp"
#include "UnityEngine/zzzz__Joint_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CharacterJoint)
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
// Type: UnityEngine::CharacterJoint
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::CharacterJoint*
class CORDL_TYPE CharacterJoint : public ::UnityEngine::Joint {
public:
  // Declarations
  __declspec(property(get = get_enableProjection, put = set_enableProjection)) bool enableProjection;

  __declspec(property(get = get_highTwistLimit, put = set_highTwistLimit))::UnityEngine::SoftJointLimit highTwistLimit;

  __declspec(property(get = get_lowTwistLimit, put = set_lowTwistLimit))::UnityEngine::SoftJointLimit lowTwistLimit;

  __declspec(property(get = get_projectionAngle, put = set_projectionAngle)) float_t projectionAngle;

  __declspec(property(get = get_projectionDistance, put = set_projectionDistance)) float_t projectionDistance;

  /// @brief Field rotationDrive, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get_rotationDrive, put = __cordl_internal_set_rotationDrive))::UnityEngine::JointDrive rotationDrive;

  __declspec(property(get = get_swing1Limit, put = set_swing1Limit))::UnityEngine::SoftJointLimit swing1Limit;

  __declspec(property(get = get_swing2Limit, put = set_swing2Limit))::UnityEngine::SoftJointLimit swing2Limit;

  __declspec(property(get = get_swingAxis, put = set_swingAxis))::UnityEngine::Vector3 swingAxis;

  __declspec(property(get = get_swingLimitSpring, put = set_swingLimitSpring))::UnityEngine::SoftJointLimitSpring swingLimitSpring;

  /// @brief Field targetAngularVelocity, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_targetAngularVelocity, put = __cordl_internal_set_targetAngularVelocity))::UnityEngine::Vector3 targetAngularVelocity;

  /// @brief Field targetRotation, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_targetRotation, put = __cordl_internal_set_targetRotation))::UnityEngine::Quaternion targetRotation;

  __declspec(property(get = get_twistLimitSpring, put = set_twistLimitSpring))::UnityEngine::SoftJointLimitSpring twistLimitSpring;

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

  /// @brief Method .ctor, addr 0x3490c0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enableProjection, addr 0x3490a7c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_enableProjection();

  /// @brief Method get_highTwistLimit, addr 0x34906d4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_highTwistLimit();

  /// @brief Method get_highTwistLimit_Injected, addr 0x3490730, size 0x44, virtual false, abstract: false, final false
  inline void get_highTwistLimit_Injected(ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_lowTwistLimit, addr 0x349059c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_lowTwistLimit();

  /// @brief Method get_lowTwistLimit_Injected, addr 0x34905f8, size 0x44, virtual false, abstract: false, final false
  inline void get_lowTwistLimit_Injected(ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_projectionAngle, addr 0x3490b84, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_projectionAngle();

  /// @brief Method get_projectionDistance, addr 0x3490afc, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_projectionDistance();

  /// @brief Method get_swing1Limit, addr 0x349080c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_swing1Limit();

  /// @brief Method get_swing1Limit_Injected, addr 0x3490868, size 0x44, virtual false, abstract: false, final false
  inline void get_swing1Limit_Injected(ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_swing2Limit, addr 0x3490944, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_swing2Limit();

  /// @brief Method get_swing2Limit_Injected, addr 0x34909a0, size 0x44, virtual false, abstract: false, final false
  inline void get_swing2Limit_Injected(ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_swingAxis, addr 0x349022c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_swingAxis();

  /// @brief Method get_swingAxis_Injected, addr 0x3490288, size 0x44, virtual false, abstract: false, final false
  inline void get_swingAxis_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_swingLimitSpring, addr 0x3490480, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_swingLimitSpring();

  /// @brief Method get_swingLimitSpring_Injected, addr 0x34904cc, size 0x44, virtual false, abstract: false, final false
  inline void get_swingLimitSpring_Injected(ByRef<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_twistLimitSpring, addr 0x3490364, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_twistLimitSpring();

  /// @brief Method get_twistLimitSpring_Injected, addr 0x34903b0, size 0x44, virtual false, abstract: false, final false
  inline void get_twistLimitSpring_Injected(ByRef<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method set_enableProjection, addr 0x3490ab8, size 0x44, virtual false, abstract: false, final false
  inline void set_enableProjection(bool value);

  /// @brief Method set_highTwistLimit, addr 0x3490774, size 0x54, virtual false, abstract: false, final false
  inline void set_highTwistLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_highTwistLimit_Injected, addr 0x34907c8, size 0x44, virtual false, abstract: false, final false
  inline void set_highTwistLimit_Injected(ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_lowTwistLimit, addr 0x349063c, size 0x54, virtual false, abstract: false, final false
  inline void set_lowTwistLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_lowTwistLimit_Injected, addr 0x3490690, size 0x44, virtual false, abstract: false, final false
  inline void set_lowTwistLimit_Injected(ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_projectionAngle, addr 0x3490bc0, size 0x4c, virtual false, abstract: false, final false
  inline void set_projectionAngle(float_t value);

  /// @brief Method set_projectionDistance, addr 0x3490b38, size 0x4c, virtual false, abstract: false, final false
  inline void set_projectionDistance(float_t value);

  /// @brief Method set_swing1Limit, addr 0x34908ac, size 0x54, virtual false, abstract: false, final false
  inline void set_swing1Limit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_swing1Limit_Injected, addr 0x3490900, size 0x44, virtual false, abstract: false, final false
  inline void set_swing1Limit_Injected(ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_swing2Limit, addr 0x34909e4, size 0x54, virtual false, abstract: false, final false
  inline void set_swing2Limit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_swing2Limit_Injected, addr 0x3490a38, size 0x44, virtual false, abstract: false, final false
  inline void set_swing2Limit_Injected(ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_swingAxis, addr 0x34902cc, size 0x54, virtual false, abstract: false, final false
  inline void set_swingAxis(::UnityEngine::Vector3 value);

  /// @brief Method set_swingAxis_Injected, addr 0x3490320, size 0x44, virtual false, abstract: false, final false
  inline void set_swingAxis_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_swingLimitSpring, addr 0x3490510, size 0x48, virtual false, abstract: false, final false
  inline void set_swingLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_swingLimitSpring_Injected, addr 0x3490558, size 0x44, virtual false, abstract: false, final false
  inline void set_swingLimitSpring_Injected(ByRef<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_twistLimitSpring, addr 0x34903f4, size 0x48, virtual false, abstract: false, final false
  inline void set_twistLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_twistLimitSpring_Injected, addr 0x349043c, size 0x44, virtual false, abstract: false, final false
  inline void set_twistLimitSpring_Injected(ByRef<::UnityEngine::SoftJointLimitSpring> value);

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

  /// @brief Field targetRotation, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___targetRotation;

  /// @brief Field targetAngularVelocity, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___targetAngularVelocity;

  /// @brief Field rotationDrive, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::JointDrive ___rotationDrive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CharacterJoint, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CharacterJoint, ___targetRotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CharacterJoint, ___targetAngularVelocity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CharacterJoint, ___rotationDrive) == 0x34, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CharacterJoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CharacterJoint*, "UnityEngine", "CharacterJoint");

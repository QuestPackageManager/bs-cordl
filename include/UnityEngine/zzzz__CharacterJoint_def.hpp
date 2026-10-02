#pragma once
// IWYU pragma private; include "UnityEngine/CharacterJoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Joint_def.hpp"
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
MARK_REF_T(::UnityEngine::CharacterJoint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::CharacterJoint*, "UnityEngine", "CharacterJoint");
// [RequireComponent(typeof(UnityEngine.Rigidbody))]
// [NativeHeader("Modules/Physics/CharacterJoint.h")]
// [NativeClass("Unity::CharacterJoint")]
// Dependencies UnityEngine.Joint
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

  __declspec(property(get = get_swing1Limit, put = set_swing1Limit)) ::UnityEngine::SoftJointLimit swing1Limit;

  __declspec(property(get = get_swing2Limit, put = set_swing2Limit)) ::UnityEngine::SoftJointLimit swing2Limit;

  __declspec(property(get = get_swingAxis, put = set_swingAxis)) ::UnityEngine::Vector3 swingAxis;

  __declspec(property(get = get_swingLimitSpring, put = set_swingLimitSpring)) ::UnityEngine::SoftJointLimitSpring swingLimitSpring;

  __declspec(property(get = get_twistLimitSpring, put = set_twistLimitSpring)) ::UnityEngine::SoftJointLimitSpring twistLimitSpring;

  static inline ::UnityEngine::CharacterJoint* New_ctor();

  /// @brief Method .ctor, addr 0x6fe9f28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enableProjection, addr 0x6fe9a68, size 0x80, virtual false, abstract: false, final false
  inline bool get_enableProjection();

  /// @brief Method get_enableProjection_Injected, addr 0x6fe9ae8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableProjection_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_highTwistLimit, addr 0x6fe9528, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_highTwistLimit();

  /// @brief Method get_highTwistLimit_Injected, addr 0x6fe95c8, size 0x44, virtual false, abstract: false, final false
  static inline void get_highTwistLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_lowTwistLimit, addr 0x6fe9368, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_lowTwistLimit();

  /// @brief Method get_lowTwistLimit_Injected, addr 0x6fe9408, size 0x44, virtual false, abstract: false, final false
  static inline void get_lowTwistLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_projectionAngle, addr 0x6fe9d90, size 0x80, virtual false, abstract: false, final false
  inline float_t get_projectionAngle();

  /// @brief Method get_projectionAngle_Injected, addr 0x6fe9e10, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_projectionAngle_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_projectionDistance, addr 0x6fe9bf8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_projectionDistance();

  /// @brief Method get_projectionDistance_Injected, addr 0x6fe9c78, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_projectionDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_swing1Limit, addr 0x6fe96e8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_swing1Limit();

  /// @brief Method get_swing1Limit_Injected, addr 0x6fe9788, size 0x44, virtual false, abstract: false, final false
  static inline void get_swing1Limit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_swing2Limit, addr 0x6fe98a8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_swing2Limit();

  /// @brief Method get_swing2Limit_Injected, addr 0x6fe9948, size 0x44, virtual false, abstract: false, final false
  static inline void get_swing2Limit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_swingAxis, addr 0x6fe8e40, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_swingAxis();

  /// @brief Method get_swingAxis_Injected, addr 0x6fe8ee0, size 0x44, virtual false, abstract: false, final false
  static inline void get_swingAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_swingLimitSpring, addr 0x6fe91b4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_swingLimitSpring();

  /// @brief Method get_swingLimitSpring_Injected, addr 0x6fe924c, size 0x44, virtual false, abstract: false, final false
  static inline void get_swingLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_twistLimitSpring, addr 0x6fe9000, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_twistLimitSpring();

  /// @brief Method get_twistLimitSpring_Injected, addr 0x6fe9098, size 0x44, virtual false, abstract: false, final false
  static inline void get_twistLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method set_enableProjection, addr 0x6fe9b24, size 0x90, virtual false, abstract: false, final false
  inline void set_enableProjection(bool value);

  /// @brief Method set_enableProjection_Injected, addr 0x6fe9bb4, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableProjection_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_highTwistLimit, addr 0x6fe960c, size 0x98, virtual false, abstract: false, final false
  inline void set_highTwistLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_highTwistLimit_Injected, addr 0x6fe96a4, size 0x44, virtual false, abstract: false, final false
  static inline void set_highTwistLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_lowTwistLimit, addr 0x6fe944c, size 0x98, virtual false, abstract: false, final false
  inline void set_lowTwistLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_lowTwistLimit_Injected, addr 0x6fe94e4, size 0x44, virtual false, abstract: false, final false
  static inline void set_lowTwistLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_projectionAngle, addr 0x6fe9e4c, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionAngle(float_t value);

  /// @brief Method set_projectionAngle_Injected, addr 0x6fe9edc, size 0x4c, virtual false, abstract: false, final false
  static inline void set_projectionAngle_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_projectionDistance, addr 0x6fe9cb4, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionDistance(float_t value);

  /// @brief Method set_projectionDistance_Injected, addr 0x6fe9d44, size 0x4c, virtual false, abstract: false, final false
  static inline void set_projectionDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_swing1Limit, addr 0x6fe97cc, size 0x98, virtual false, abstract: false, final false
  inline void set_swing1Limit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_swing1Limit_Injected, addr 0x6fe9864, size 0x44, virtual false, abstract: false, final false
  static inline void set_swing1Limit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_swing2Limit, addr 0x6fe998c, size 0x98, virtual false, abstract: false, final false
  inline void set_swing2Limit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_swing2Limit_Injected, addr 0x6fe9a24, size 0x44, virtual false, abstract: false, final false
  static inline void set_swing2Limit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_swingAxis, addr 0x6fe8f24, size 0x98, virtual false, abstract: false, final false
  inline void set_swingAxis(::UnityEngine::Vector3 value);

  /// @brief Method set_swingAxis_Injected, addr 0x6fe8fbc, size 0x44, virtual false, abstract: false, final false
  static inline void set_swingAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_swingLimitSpring, addr 0x6fe9290, size 0x94, virtual false, abstract: false, final false
  inline void set_swingLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_swingLimitSpring_Injected, addr 0x6fe9324, size 0x44, virtual false, abstract: false, final false
  static inline void set_swingLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_twistLimitSpring, addr 0x6fe90dc, size 0x94, virtual false, abstract: false, final false
  inline void set_twistLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_twistLimitSpring_Injected, addr 0x6fe9170, size 0x44, virtual false, abstract: false, final false
  static inline void set_twistLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CharacterJoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CharacterJoint", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CharacterJoint(CharacterJoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CharacterJoint", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CharacterJoint(CharacterJoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19047 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::CharacterJoint) == 0x18, "Size mismatch!");

} // namespace UnityEngine

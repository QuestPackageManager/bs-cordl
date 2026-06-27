#pragma once
// IWYU pragma private; include "UnityEngine/HingeJoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Joint_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HingeJoint)
namespace System {
struct IntPtr;
}
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
 __declspec(property(get=get_angle)) float_t  angle;

 __declspec(property(get=get_extendedLimits, put=set_extendedLimits)) bool  extendedLimits;

 __declspec(property(get=get_limits, put=set_limits)) ::UnityEngine::JointLimits  limits;

 __declspec(property(get=get_motor, put=set_motor)) ::UnityEngine::JointMotor  motor;

 __declspec(property(get=get_spring, put=set_spring)) ::UnityEngine::JointSpring  spring;

 __declspec(property(get=get_useAcceleration, put=set_useAcceleration)) bool  useAcceleration;

 __declspec(property(get=get_useLimits, put=set_useLimits)) bool  useLimits;

 __declspec(property(get=get_useMotor, put=set_useMotor)) bool  useMotor;

 __declspec(property(get=get_useSpring, put=set_useSpring)) bool  useSpring;

 __declspec(property(get=get_velocity)) float_t  velocity;

static inline ::UnityEngine::HingeJoint* New_ctor() ;

/// @brief Method .ctor, addr 0x6a3a05c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_angle, addr 0x6a39e10, size 0x80, virtual false, abstract: false, final false
inline float_t get_angle() ;

/// @brief Method get_angle_Injected, addr 0x6a39e90, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_angle_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_extendedLimits, addr 0x6a39a34, size 0x80, virtual false, abstract: false, final false
inline bool get_extendedLimits() ;

/// @brief Method get_extendedLimits_Injected, addr 0x6a39ab4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_extendedLimits_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_limits, addr 0x6a39384, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::JointLimits get_limits() ;

/// @brief Method get_limits_Injected, addr 0x6a3943c, size 0x44, virtual false, abstract: false, final false
static inline void get_limits_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::JointLimits>  ret) ;

/// @brief Method get_motor, addr 0x6a391c4, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::JointMotor get_motor() ;

/// @brief Method get_motor_Injected, addr 0x6a39264, size 0x44, virtual false, abstract: false, final false
static inline void get_motor_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::JointMotor>  ret) ;

/// @brief Method get_spring, addr 0x6a39554, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::JointSpring get_spring() ;

/// @brief Method get_spring_Injected, addr 0x6a395f4, size 0x44, virtual false, abstract: false, final false
static inline void get_spring_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::JointSpring>  ret) ;

/// @brief Method get_useAcceleration, addr 0x6a39ecc, size 0x80, virtual false, abstract: false, final false
inline bool get_useAcceleration() ;

/// @brief Method get_useAcceleration_Injected, addr 0x6a39f4c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useAcceleration_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useLimits, addr 0x6a398a4, size 0x80, virtual false, abstract: false, final false
inline bool get_useLimits() ;

/// @brief Method get_useLimits_Injected, addr 0x6a39924, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useLimits_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useMotor, addr 0x6a39714, size 0x80, virtual false, abstract: false, final false
inline bool get_useMotor() ;

/// @brief Method get_useMotor_Injected, addr 0x6a39794, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useMotor_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useSpring, addr 0x6a39bc4, size 0x80, virtual false, abstract: false, final false
inline bool get_useSpring() ;

/// @brief Method get_useSpring_Injected, addr 0x6a39c44, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useSpring_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_velocity, addr 0x6a39d54, size 0x80, virtual false, abstract: false, final false
inline float_t get_velocity() ;

/// @brief Method get_velocity_Injected, addr 0x6a39dd4, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_velocity_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_extendedLimits, addr 0x6a39af0, size 0x90, virtual false, abstract: false, final false
inline void set_extendedLimits(bool  value) ;

/// @brief Method set_extendedLimits_Injected, addr 0x6a39b80, size 0x44, virtual false, abstract: false, final false
static inline void set_extendedLimits_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_limits, addr 0x6a39480, size 0x90, virtual false, abstract: false, final false
inline void set_limits(::UnityEngine::JointLimits  value) ;

/// @brief Method set_limits_Injected, addr 0x6a39510, size 0x44, virtual false, abstract: false, final false
static inline void set_limits_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::JointLimits>  value) ;

/// @brief Method set_motor, addr 0x6a392a8, size 0x98, virtual false, abstract: false, final false
inline void set_motor(::UnityEngine::JointMotor  value) ;

/// @brief Method set_motor_Injected, addr 0x6a39340, size 0x44, virtual false, abstract: false, final false
static inline void set_motor_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::JointMotor>  value) ;

/// @brief Method set_spring, addr 0x6a39638, size 0x98, virtual false, abstract: false, final false
inline void set_spring(::UnityEngine::JointSpring  value) ;

/// @brief Method set_spring_Injected, addr 0x6a396d0, size 0x44, virtual false, abstract: false, final false
static inline void set_spring_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::JointSpring>  value) ;

/// @brief Method set_useAcceleration, addr 0x6a39f88, size 0x90, virtual false, abstract: false, final false
inline void set_useAcceleration(bool  value) ;

/// @brief Method set_useAcceleration_Injected, addr 0x6a3a018, size 0x44, virtual false, abstract: false, final false
static inline void set_useAcceleration_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_useLimits, addr 0x6a39960, size 0x90, virtual false, abstract: false, final false
inline void set_useLimits(bool  value) ;

/// @brief Method set_useLimits_Injected, addr 0x6a399f0, size 0x44, virtual false, abstract: false, final false
static inline void set_useLimits_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_useMotor, addr 0x6a397d0, size 0x90, virtual false, abstract: false, final false
inline void set_useMotor(bool  value) ;

/// @brief Method set_useMotor_Injected, addr 0x6a39860, size 0x44, virtual false, abstract: false, final false
static inline void set_useMotor_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_useSpring, addr 0x6a39c80, size 0x90, virtual false, abstract: false, final false
inline void set_useSpring(bool  value) ;

/// @brief Method set_useSpring_Injected, addr 0x6a39d10, size 0x44, virtual false, abstract: false, final false
static inline void set_useSpring_Injected(::System::IntPtr  _unity_self, bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HingeJoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HingeJoint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HingeJoint(HingeJoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HingeJoint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HingeJoint(HingeJoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18633};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HingeJoint, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::HingeJoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HingeJoint*, "UnityEngine", "HingeJoint");

#pragma once
// IWYU pragma private; include "UnityEngine/Animator.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__StateMachineBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/zzzz__AnimatorClipInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameter_def.hpp"
#include "UnityEngine/zzzz__AnimatorCullingMode_def.hpp"
#include "UnityEngine/zzzz__AnimatorRecorderMode_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorTransitionInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorUpdateMode_def.hpp"
#include "UnityEngine/zzzz__AvatarIKGoal_def.hpp"
#include "UnityEngine/zzzz__AvatarIKHint_def.hpp"
#include "UnityEngine/zzzz__AvatarTarget_def.hpp"
#include "UnityEngine/zzzz__Avatar_def.hpp"
#include "UnityEngine/zzzz__HumanBodyBones_def.hpp"
#include "UnityEngine/zzzz__MatchTargetWeightMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__StateInfoIndex_def.hpp"
#include "UnityEngine/zzzz__StateMachineBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animator.get_isOptimizable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_isOptimizable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e89e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isOptimizable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_isHuman
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_isHuman)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e89ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isHuman", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_hasRootMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_hasRootMotion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e89fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_hasRootMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_isRootPositionOrRotationControlledByCurves
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_isRootPositionOrRotationControlledByCurves)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8a070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isRootPositionOrRotationControlledByCurves", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_humanScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_humanScale)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8a12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_humanScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_isInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_isInitialized)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8a1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::GetFloat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8a2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetFloat", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetFloat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8a418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetFloat", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, float_t)>(&::UnityEngine::Animator::SetFloat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8a4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, float_t, float_t, float_t)>(&::UnityEngine::Animator::SetFloat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8a62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "SetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, float_t)>(&::UnityEngine::Animator::SetFloat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8a7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, float_t, float_t, float_t)>(&::UnityEngine::Animator::SetFloat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8a868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "SetFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::GetBool)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8a924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBool", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetBool)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8aaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBool", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, bool)>(&::UnityEngine::Animator::SetBool)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8ab34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetBool", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, bool)>(&::UnityEngine::Animator::SetBool)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8acac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetBool", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::GetInteger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8ad48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetInteger", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetInteger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8aec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetInteger", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, int32_t)>(&::UnityEngine::Animator::SetInteger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8af54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, int32_t)>(&::UnityEngine::Animator::SetInteger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8b0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetInteger", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetTrigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::SetTrigger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8b168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetTrigger", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetTrigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::SetTrigger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8b2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetTrigger", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ResetTrigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::ResetTrigger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8b368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetTrigger", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ResetTrigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::ResetTrigger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8b4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetTrigger", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.IsParameterControlledByCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::IsParameterControlledByCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8b568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsParameterControlledByCurve", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.IsParameterControlledByCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::IsParameterControlledByCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8b6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsParameterControlledByCurve", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_deltaPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_deltaPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e8b778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_deltaPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_deltaRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_deltaRotation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e8b85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_deltaRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_velocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_velocity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e8b93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_velocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_angularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_angularVelocity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e8ba20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_angularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_rootPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_rootPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e8bb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_rootPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_rootPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::Vector3)>(&::UnityEngine::Animator::set_rootPosition)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e8bbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_rootPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_rootRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_rootRotation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e8bcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_rootRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_rootRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::Quaternion)>(&::UnityEngine::Animator::set_rootRotation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e8bda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_rootRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_applyRootMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_applyRootMotion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8be80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_applyRootMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_applyRootMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::set_applyRootMotion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8bf3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_applyRootMotion", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_linearVelocityBlending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_linearVelocityBlending)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8c010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_linearVelocityBlending", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_linearVelocityBlending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::set_linearVelocityBlending)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8c0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_linearVelocityBlending", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_animatePhysics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_animatePhysics)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8c1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_animatePhysics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_animatePhysics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::set_animatePhysics)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8c25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_animatePhysics", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_updateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorUpdateMode (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_updateMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8c330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_updateMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_updateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AnimatorUpdateMode)>(&::UnityEngine::Animator::set_updateMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8c3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_updateMode", {}, { ::i2c::type_of<::UnityEngine::AnimatorUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_hasTransformHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_hasTransformHierarchy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8c4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_hasTransformHierarchy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_allowConstantClipSamplingOptimization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_allowConstantClipSamplingOptimization)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8c57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_allowConstantClipSamplingOptimization", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_allowConstantClipSamplingOptimization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::set_allowConstantClipSamplingOptimization)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8c638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_allowConstantClipSamplingOptimization", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_gravityWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_gravityWeight)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8c70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_gravityWeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_bodyPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_bodyPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e8c7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_bodyPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_bodyPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::Vector3)>(&::UnityEngine::Animator::set_bodyPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e8c918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_bodyPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_bodyPositionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_bodyPositionInternal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e8c878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_bodyPositionInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_bodyPositionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::Vector3)>(&::UnityEngine::Animator::set_bodyPositionInternal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e8c958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_bodyPositionInternal", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_bodyRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_bodyRotation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e8ca78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_bodyRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_bodyRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::Quaternion)>(&::UnityEngine::Animator::set_bodyRotation)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e8cb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_bodyRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_bodyRotationInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_bodyRotationInternal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e8ca90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_bodyRotationInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_bodyRotationInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::Quaternion)>(&::UnityEngine::Animator::set_bodyRotationInternal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e8cb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_bodyRotationInternal", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetIKPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal)>(&::UnityEngine::Animator::GetIKPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e8cc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIKPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetGoalPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal)>(&::UnityEngine::Animator::GetGoalPosition)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e8ccbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetGoalPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetIKPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal, ::UnityEngine::Vector3)>(&::UnityEngine::Animator::SetIKPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e8cdc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIKPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetGoalPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal, ::UnityEngine::Vector3)>(&::UnityEngine::Animator::SetGoalPosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e8ce10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetGoalPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetIKRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal)>(&::UnityEngine::Animator::GetIKRotation)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e8cf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIKRotation", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetGoalRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal)>(&::UnityEngine::Animator::GetGoalRotation)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e8cf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetGoalRotation", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetIKRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal, ::UnityEngine::Quaternion)>(&::UnityEngine::Animator::SetIKRotation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e8d034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIKRotation", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetGoalRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal, ::UnityEngine::Quaternion)>(&::UnityEngine::Animator::SetGoalRotation)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e8d08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetGoalRotation", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetIKPositionWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal)>(&::UnityEngine::Animator::GetIKPositionWeight)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e8d188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIKPositionWeight", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetGoalWeightPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal)>(&::UnityEngine::Animator::GetGoalWeightPosition)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8d1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetGoalWeightPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetIKPositionWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal, float_t)>(&::UnityEngine::Animator::SetIKPositionWeight)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e8d284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIKPositionWeight", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetGoalWeightPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal, float_t)>(&::UnityEngine::Animator::SetGoalWeightPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e8d2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetGoalWeightPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetIKRotationWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal)>(&::UnityEngine::Animator::GetIKRotationWeight)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e8d3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIKRotationWeight", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetGoalWeightRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal)>(&::UnityEngine::Animator::GetGoalWeightRotation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8d3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetGoalWeightRotation", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetIKRotationWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal, float_t)>(&::UnityEngine::Animator::SetIKRotationWeight)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e8d4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIKRotationWeight", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetGoalWeightRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKGoal, float_t)>(&::UnityEngine::Animator::SetGoalWeightRotation)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e8d4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetGoalWeightRotation", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetIKHintPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKHint)>(&::UnityEngine::Animator::GetIKHintPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e8d5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIKHintPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetHintPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKHint)>(&::UnityEngine::Animator::GetHintPosition)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e8d600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetHintPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetIKHintPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKHint, ::UnityEngine::Vector3)>(&::UnityEngine::Animator::SetIKHintPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e8d704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIKHintPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetHintPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKHint, ::UnityEngine::Vector3)>(&::UnityEngine::Animator::SetHintPosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e8d754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetHintPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetIKHintPositionWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKHint)>(&::UnityEngine::Animator::GetIKHintPositionWeight)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e8d850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIKHintPositionWeight", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetHintWeightPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKHint)>(&::UnityEngine::Animator::GetHintWeightPosition)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8d878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetHintWeightPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetIKHintPositionWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKHint, float_t)>(&::UnityEngine::Animator::SetIKHintPositionWeight)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e8d94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIKHintPositionWeight", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetHintWeightPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AvatarIKHint, float_t)>(&::UnityEngine::Animator::SetHintWeightPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e8d984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetHintWeightPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetLookAtPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::Vector3)>(&::UnityEngine::Animator::SetLookAtPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e8da78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLookAtPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetLookAtPositionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::Vector3)>(&::UnityEngine::Animator::SetLookAtPositionInternal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e8dab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLookAtPositionInternal", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetLookAtWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t)>(&::UnityEngine::Animator::SetLookAtWeight)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e8db94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLookAtWeight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetLookAtWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t, float_t)>(&::UnityEngine::Animator::SetLookAtWeight)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8dc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLookAtWeight", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetLookAtWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t, float_t, float_t)>(&::UnityEngine::Animator::SetLookAtWeight)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e8dcc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLookAtWeight", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetLookAtWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::Animator::SetLookAtWeight)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e8dd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "SetLookAtWeight", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetLookAtWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t, float_t, float_t, float_t, float_t)>(&::UnityEngine::Animator::SetLookAtWeight)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e8dd5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                            { "SetLookAtWeight", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetLookAtWeightInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t, float_t, float_t, float_t, float_t)>(&::UnityEngine::Animator::SetLookAtWeightInternal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e8dbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "SetLookAtWeightInternal", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetBoneLocalRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion)>(&::UnityEngine::Animator::SetBoneLocalRotation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8de30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "SetBoneLocalRotation", {}, { ::i2c::type_of<::UnityEngine::HumanBodyBones>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetBoneLocalRotationInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, ::UnityEngine::Quaternion)>(&::UnityEngine::Animator::SetBoneLocalRotationInternal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e8deec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetBoneLocalRotationInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetBehaviour
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (::UnityEngine::Animator::*)(::System::Type*)>(&::UnityEngine::Animator::GetBehaviour)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6e8dfe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBehaviour", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.InternalGetBehaviours
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> (::UnityEngine::Animator::*)(::System::Type*)>(
    &::UnityEngine::Animator::InternalGetBehaviours)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e8e1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "InternalGetBehaviours", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetBehaviours
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>> (::UnityEngine::Animator::*)(int32_t, int32_t)>(
    &::UnityEngine::Animator::GetBehaviours)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e8e2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBehaviours", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.InternalGetBehavioursByKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> (::UnityEngine::Animator::*)(int32_t, int32_t, ::System::Type*)>(
    &::UnityEngine::Animator::InternalGetBehavioursByKey)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6e8e358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "InternalGetBehavioursByKey", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_stabilizeFeet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_stabilizeFeet)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8e488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_stabilizeFeet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_stabilizeFeet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::set_stabilizeFeet)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8e544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_stabilizeFeet", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_layerCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_layerCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8e618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_layerCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetLayerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetLayerName)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e8e6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetLayerName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetLayerIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::GetLayerIndex)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6e8e868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetLayerIndex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetLayerWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetLayerWeight)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8ea20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetLayerWeight", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetLayerWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, float_t)>(&::UnityEngine::Animator::SetLayerWeight)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e8eaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLayerWeight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetAnimatorStateInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, ::UnityEngine::StateInfoIndex, ::by_ref<::UnityEngine::AnimatorStateInfo>)>(
    &::UnityEngine::Animator::GetAnimatorStateInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e8ebe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "GetAnimatorStateInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::StateInfoIndex>(), ::i2c::type_of<::by_ref<::UnityEngine::AnimatorStateInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetCurrentAnimatorStateInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorStateInfo (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetCurrentAnimatorStateInfo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e8ecec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetCurrentAnimatorStateInfo", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetNextAnimatorStateInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorStateInfo (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetNextAnimatorStateInfo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e8ed2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetNextAnimatorStateInfo", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetAnimatorTransitionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, ::by_ref<::UnityEngine::AnimatorTransitionInfo>)>(
    &::UnityEngine::Animator::GetAnimatorTransitionInfo)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e8ed6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "GetAnimatorTransitionInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AnimatorTransitionInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetAnimatorTransitionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorTransitionInfo (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetAnimatorTransitionInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e8ee58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetAnimatorTransitionInfo", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetAnimatorClipInfoCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animator::*)(int32_t, bool)>(&::UnityEngine::Animator::GetAnimatorClipInfoCount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e8ee88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetAnimatorClipInfoCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetCurrentAnimatorClipInfoCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetCurrentAnimatorClipInfoCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8ef74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetCurrentAnimatorClipInfoCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetNextAnimatorClipInfoCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetNextAnimatorClipInfoCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8ef7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetNextAnimatorClipInfoCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetCurrentAnimatorClipInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorClipInfo> (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetCurrentAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8ef84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetCurrentAnimatorClipInfo", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetNextAnimatorClipInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorClipInfo> (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetNextAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8f058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetNextAnimatorClipInfo", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetCurrentAnimatorClipInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*)>(
    &::UnityEngine::Animator::GetCurrentAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e8f12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                            { "GetCurrentAnimatorClipInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetAnimatorClipInfoInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, bool, ::System::Object*)>(&::UnityEngine::Animator::GetAnimatorClipInfoInternal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e8f188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "GetAnimatorClipInfoInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetNextAnimatorClipInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*)>(
    &::UnityEngine::Animator::GetNextAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e8f28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                            { "GetNextAnimatorClipInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.IsInTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::IsInTransition)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8f2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsInTransition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorControllerParameter*> (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_parameters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8f3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_parameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_parameterCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_parameterCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8f478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_parameterCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetParameterInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorControllerParameter* (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetParameterInternal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8f534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetParameterInternal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorControllerParameter* (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetParameter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e8f608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetParameter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_feetPivotActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_feetPivotActive)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8f6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_feetPivotActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_feetPivotActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t)>(&::UnityEngine::Animator::set_feetPivotActive)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8f760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_feetPivotActive", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_pivotWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_pivotWeight)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8f83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_pivotWeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_pivotPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_pivotPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e8f8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_pivotPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.MatchTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, ::UnityEngine::MatchTargetWeightMask, float_t,
                                                                                         float_t, bool)>(&::UnityEngine::Animator::MatchTarget)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6e8f9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "MatchTarget",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                                                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MatchTargetWeightMask>(),
                                                                                                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.MatchTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::AvatarTarget,
                                                                                         ::UnityEngine::MatchTargetWeightMask, float_t)>(&::UnityEngine::Animator::MatchTarget)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6e8fb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "MatchTarget",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::AvatarTarget>(),
                                                                 ::i2c::type_of<::UnityEngine::MatchTargetWeightMask>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.MatchTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::AvatarTarget,
                                                                                         ::UnityEngine::MatchTargetWeightMask, float_t, float_t)>(&::UnityEngine::Animator::MatchTarget)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e8fb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "MatchTarget",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::AvatarTarget>(),
                                                                 ::i2c::type_of<::UnityEngine::MatchTargetWeightMask>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.MatchTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::AvatarTarget,
                                                                                         ::UnityEngine::MatchTargetWeightMask, float_t, float_t, bool)>(&::UnityEngine::Animator::MatchTarget)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e8fb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "MatchTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::AvatarTarget>(),
                                                    ::i2c::type_of<::UnityEngine::MatchTargetWeightMask>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.InterruptMatchTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::InterruptMatchTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8fbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "InterruptMatchTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.InterruptMatchTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::InterruptMatchTarget)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8fbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "InterruptMatchTarget", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_isMatchingTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_isMatchingTarget)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8fc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isMatchingTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_speed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_speed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8fd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_speed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_speed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t)>(&::UnityEngine::Animator::set_speed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8fe0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_speed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ForceStateNormalizedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t)>(&::UnityEngine::Animator::ForceStateNormalizedTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e8fee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ForceStateNormalizedTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFadeInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, float_t)>(&::UnityEngine::Animator::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8ff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFadeInFixedTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFadeInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, float_t, int32_t)>(&::UnityEngine::Animator::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e901c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFadeInFixedTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFadeInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, float_t, int32_t, float_t)>(&::UnityEngine::Animator::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e9020c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "CrossFadeInFixedTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFadeInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, float_t, int32_t, float_t, float_t)>(&::UnityEngine::Animator::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e90258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Animator*>(),
                         { "CrossFadeInFixedTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFadeInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, float_t, int32_t, float_t)>(&::UnityEngine::Animator::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e902b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "CrossFadeInFixedTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFadeInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, float_t, int32_t)>(&::UnityEngine::Animator::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e902b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFadeInFixedTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFadeInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, float_t)>(&::UnityEngine::Animator::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e902c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFadeInFixedTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFadeInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, float_t, int32_t, float_t, float_t)>(&::UnityEngine::Animator::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e90104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Animator*>(),
                         { "CrossFadeInFixedTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.WriteDefaultValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::WriteDefaultValues)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e90350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "WriteDefaultValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, float_t, int32_t, float_t)>(&::UnityEngine::Animator::CrossFade)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e9040c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "CrossFade", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, float_t, int32_t)>(&::UnityEngine::Animator::CrossFade)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e904b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFade", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, float_t)>(&::UnityEngine::Animator::CrossFade)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e904fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFade", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, float_t, int32_t, float_t, float_t)>(&::UnityEngine::Animator::CrossFade)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e90458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                            { "CrossFade", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, float_t, int32_t, float_t, float_t)>(&::UnityEngine::Animator::CrossFade)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e9053c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                            { "CrossFade", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, float_t, int32_t, float_t)>(&::UnityEngine::Animator::CrossFade)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e90678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "CrossFade", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, float_t, int32_t)>(&::UnityEngine::Animator::CrossFade)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e90680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFade", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, float_t)>(&::UnityEngine::Animator::CrossFade)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e90690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFade", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.PlayInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, int32_t)>(&::UnityEngine::Animator::PlayInFixedTime)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e906a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "PlayInFixedTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.PlayInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::PlayInFixedTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e9071c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "PlayInFixedTime", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.PlayInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, int32_t, float_t)>(&::UnityEngine::Animator::PlayInFixedTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e906dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "PlayInFixedTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.PlayInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, int32_t, float_t)>(&::UnityEngine::Animator::PlayInFixedTime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e90748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "PlayInFixedTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.PlayInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, int32_t)>(&::UnityEngine::Animator::PlayInFixedTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e90854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "PlayInFixedTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.PlayInFixedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::PlayInFixedTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e90860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "PlayInFixedTime", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, int32_t)>(&::UnityEngine::Animator::Play)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e90870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Play", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::Play)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e908e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Play", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, int32_t, float_t)>(&::UnityEngine::Animator::Play)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e908a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Play", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, int32_t, float_t)>(&::UnityEngine::Animator::Play)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e8fef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Play", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, int32_t)>(&::UnityEngine::Animator::Play)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e90978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Play", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::Play)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e90984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Play", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ResetControllerState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::ResetControllerState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e90994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetControllerState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AvatarTarget, float_t)>(&::UnityEngine::Animator::SetTarget)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e90a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetTarget", {}, { ::i2c::type_of<::UnityEngine::AvatarTarget>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_targetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_targetPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e90b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_targetPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_targetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_targetRotation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e90c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_targetRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.IsControlled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)(::UnityEngine::Transform*)>(&::UnityEngine::Animator::IsControlled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e90d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsControlled", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.IsBoneTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)(::UnityEngine::Transform*)>(&::UnityEngine::Animator::IsBoneTransform)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e90d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsBoneTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_avatarRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_avatarRoot)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e90e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_avatarRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetBoneTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Animator::*)(::UnityEngine::HumanBodyBones)>(&::UnityEngine::Animator::GetBoneTransform)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6e90fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBoneTransform", {}, { ::i2c::type_of<::UnityEngine::HumanBodyBones>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetBoneTransformInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetBoneTransformInternal)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6e91400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBoneTransformInternal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_cullingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorCullingMode (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_cullingMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e9159c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_cullingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_cullingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::AnimatorCullingMode)>(&::UnityEngine::Animator::set_cullingMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e91658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_cullingMode", {}, { ::i2c::type_of<::UnityEngine::AnimatorCullingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.StartPlayback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::StartPlayback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e9172c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StartPlayback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.StopPlayback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::StopPlayback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e917e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StopPlayback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_playbackTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_playbackTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e918a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_playbackTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_playbackTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t)>(&::UnityEngine::Animator::set_playbackTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e91960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_playbackTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.StartRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::StartRecording)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e91a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StartRecording", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.StopRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::StopRecording)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e91b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StopRecording", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_recorderStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_recorderStartTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e91bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_recorderStartTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_recorderStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t)>(&::UnityEngine::Animator::set_recorderStartTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e91c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_recorderStartTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetRecorderStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::GetRecorderStartTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e91bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetRecorderStartTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_recorderStopTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_recorderStopTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e91c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_recorderStopTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_recorderStopTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t)>(&::UnityEngine::Animator::set_recorderStopTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e91d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_recorderStopTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetRecorderStopTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::GetRecorderStopTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e91c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetRecorderStopTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_recorderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorRecorderMode (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_recorderMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e91d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_recorderMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_runtimeAnimatorController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RuntimeAnimatorController> (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_runtimeAnimatorController)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e91e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_runtimeAnimatorController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_runtimeAnimatorController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::RuntimeAnimatorController*)>(&::UnityEngine::Animator::set_runtimeAnimatorController)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e91f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_runtimeAnimatorController", {}, { ::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_hasBoundPlayables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_hasBoundPlayables)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e920a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_hasBoundPlayables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ClearInternalControllerPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::ClearInternalControllerPlayable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e9215c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ClearInternalControllerPlayable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.HasState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)(int32_t, int32_t)>(&::UnityEngine::Animator::HasState)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e92218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "HasState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.StringToHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::Animator::StringToHash)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e8ffd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StringToHash", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_avatar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Avatar> (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_avatar)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e911b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_avatar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_avatar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::UnityEngine::Avatar*)>(&::UnityEngine::Animator::set_avatar)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e9237c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_avatar", {}, { ::i2c::type_of<::UnityEngine::Avatar*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::GetStats)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6e92480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetStats", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_playableGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableGraph (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_playableGraph)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e925f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_playableGraph", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetCurrentGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::by_ref<::UnityEngine::Playables::PlayableGraph>)>(&::UnityEngine::Animator::GetCurrentGraph)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e9261c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetCurrentGraph", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CheckIfInIKPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::CheckIfInIKPass)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e8c7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CheckIfInIKPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.IsInIKPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::IsInIKPass)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e92770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsInIKPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetFloatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, float_t)>(&::UnityEngine::Animator::SetFloatString)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6e8a4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetFloatString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetFloatID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, float_t)>(&::UnityEngine::Animator::SetFloatID)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e8a7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetFloatID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetFloatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::GetFloatString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6e8a2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetFloatString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetFloatID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetFloatID)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8a41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetFloatID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetBoolString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, bool)>(&::UnityEngine::Animator::SetBoolString)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6e8ab38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetBoolString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetBoolID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, bool)>(&::UnityEngine::Animator::SetBoolID)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e8acb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetBoolID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetBoolString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::GetBoolString)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6e8a928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBoolString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetBoolID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetBoolID)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8aaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBoolID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetIntegerString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, int32_t)>(&::UnityEngine::Animator::SetIntegerString)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6e8af58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIntegerString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetIntegerID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, int32_t)>(&::UnityEngine::Animator::SetIntegerID)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e8b0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIntegerID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetIntegerString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::GetIntegerString)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6e8ad4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIntegerString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetIntegerID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetIntegerID)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8aec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIntegerID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetTriggerString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::SetTriggerString)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6e8b16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetTriggerString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetTriggerID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::SetTriggerID)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8b2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetTriggerID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ResetTriggerString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::ResetTriggerString)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6e8b36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetTriggerString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ResetTriggerID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::ResetTriggerID)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8b4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetTriggerID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.IsParameterControlledByCurveString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::IsParameterControlledByCurveString)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6e8b56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsParameterControlledByCurveString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.IsParameterControlledByCurveID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::IsParameterControlledByCurveID)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e8b6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsParameterControlledByCurveID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetFloatStringDamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, float_t, float_t, float_t)>(&::UnityEngine::Animator::SetFloatStringDamp)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e8a630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "SetFloatStringDamp", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetFloatIDDamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, float_t, float_t, float_t)>(&::UnityEngine::Animator::SetFloatIDDamp)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6e8a86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "SetFloatIDDamp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_layersAffectMassCenter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_layersAffectMassCenter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e92e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_layersAffectMassCenter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_layersAffectMassCenter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::set_layersAffectMassCenter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e92ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_layersAffectMassCenter", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_leftFeetBottomHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_leftFeetBottomHeight)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e92fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_leftFeetBottomHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_rightFeetBottomHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_rightFeetBottomHeight)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e93078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_rightFeetBottomHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_supportsOnAnimatorMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_supportsOnAnimatorMove)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e93134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_supportsOnAnimatorMove", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.OnUpdateModeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::OnUpdateModeChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e931f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "OnUpdateModeChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.OnCullingModeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::OnCullingModeChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e932ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "OnCullingModeChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.WriteDefaultPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::WriteDefaultPose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e93368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "WriteDefaultPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t)>(&::UnityEngine::Animator::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e93424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Update", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.Rebind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::Rebind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e93500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Rebind", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.Rebind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::Rebind)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e93508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Rebind", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ApplyBuiltinRootMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::ApplyBuiltinRootMotion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e935dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ApplyBuiltinRootMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.EvaluateController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::EvaluateController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e93698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "EvaluateController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.EvaluateController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(float_t)>(&::UnityEngine::Animator::EvaluateController)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e936a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "EvaluateController", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetCurrentStateName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetCurrentStateName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e9377c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetCurrentStateName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetNextStateName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetNextStateName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e938c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetNextStateName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetAnimatorStateName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Animator::*)(int32_t, bool)>(&::UnityEngine::Animator::GetAnimatorStateName)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6e93784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetAnimatorStateName", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ResolveHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::ResolveHash)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e9392c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResolveHash", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_logWarnings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_logWarnings)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e926f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_logWarnings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_logWarnings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::set_logWarnings)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e93afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_logWarnings", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_fireEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_fireEvents)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e93bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_fireEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_fireEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::set_fireEvents)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e93c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_fireEvents", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_keepAnimatorControllerStateOnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_keepAnimatorControllerStateOnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e93d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_keepAnimatorControllerStateOnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_keepAnimatorControllerStateOnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::set_keepAnimatorControllerStateOnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e93de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_keepAnimatorControllerStateOnDisable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_keepAnimatorStateOnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_keepAnimatorStateOnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e93d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_keepAnimatorStateOnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_keepAnimatorStateOnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::set_keepAnimatorStateOnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e93de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_keepAnimatorStateOnDisable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_writeDefaultValuesOnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::get_writeDefaultValuesOnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e93ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_writeDefaultValuesOnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_writeDefaultValuesOnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(bool)>(&::UnityEngine::Animator::set_writeDefaultValuesOnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e93fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_writeDefaultValuesOnDisable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::GetVector)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e94088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetVector", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetVector)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e940d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetVector", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, ::UnityEngine::Vector3)>(&::UnityEngine::Animator::SetVector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e94128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetVector", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, ::UnityEngine::Vector3)>(&::UnityEngine::Animator::SetVector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e9412c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetVector", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Animator::*)(::StringW)>(&::UnityEngine::Animator::GetQuaternion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e94130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetQuaternion", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Animator::*)(int32_t)>(&::UnityEngine::Animator::GetQuaternion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e94180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetQuaternion", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(::StringW, ::UnityEngine::Quaternion)>(&::UnityEngine::Animator::SetQuaternion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e941d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetQuaternion", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)(int32_t, ::UnityEngine::Quaternion)>(&::UnityEngine::Animator::SetQuaternion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e941d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetQuaternion", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animator::*)()>(&::UnityEngine::Animator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e941d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_isOptimizable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_isOptimizable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e89ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isOptimizable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_isHuman_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_isHuman_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e89f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isHuman_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_hasRootMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_hasRootMotion_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8a034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_hasRootMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_isRootPositionOrRotationControlledByCurves_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_isRootPositionOrRotationControlledByCurves_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8a0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isRootPositionOrRotationControlledByCurves_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_humanScale_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_humanScale_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8a1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_humanScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_isInitialized_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_isInitialized_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8a268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isInitialized_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_deltaPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::get_deltaPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8b818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "get_deltaPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_deltaRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Animator::get_deltaRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8b8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "get_deltaRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_velocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::get_velocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8b9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_velocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_angularVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::get_angularVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8bac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "get_angularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_rootPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::get_rootPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8bba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "get_rootPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_rootPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::set_rootPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8bc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "set_rootPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_rootRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Animator::get_rootRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8bd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "get_rootRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_rootRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Animator::set_rootRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8be3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "set_rootRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_applyRootMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_applyRootMotion_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8bf00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_applyRootMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_applyRootMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animator::set_applyRootMotion_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8bfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_applyRootMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_linearVelocityBlending_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_linearVelocityBlending_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8c090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_linearVelocityBlending_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_linearVelocityBlending_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animator::set_linearVelocityBlending_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8c15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_linearVelocityBlending_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_animatePhysics_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_animatePhysics_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8c220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_animatePhysics_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_animatePhysics_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animator::set_animatePhysics_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8c2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_animatePhysics_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_updateMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorUpdateMode (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_updateMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8c3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_updateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_updateMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AnimatorUpdateMode)>(&::UnityEngine::Animator::set_updateMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8c47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "set_updateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AnimatorUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_hasTransformHierarchy_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_hasTransformHierarchy_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8c540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_hasTransformHierarchy_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_allowConstantClipSamplingOptimization_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_allowConstantClipSamplingOptimization_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8c5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_allowConstantClipSamplingOptimization_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_allowConstantClipSamplingOptimization_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animator::set_allowConstantClipSamplingOptimization_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8c6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "set_allowConstantClipSamplingOptimization_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_gravityWeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_gravityWeight_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8c78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_gravityWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_bodyPositionInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::get_bodyPositionInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8c9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "get_bodyPositionInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_bodyPositionInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::set_bodyPositionInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8ca34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "set_bodyPositionInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_bodyRotationInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Animator::get_bodyRotationInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8cc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "get_bodyRotationInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_bodyRotationInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Animator::set_bodyRotationInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8cc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "set_bodyRotationInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetGoalPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AvatarIKGoal, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::GetGoalPosition_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8cd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "GetGoalPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetGoalPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AvatarIKGoal, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::SetGoalPosition_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8ceb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "SetGoalPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetGoalRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AvatarIKGoal, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Animator::GetGoalRotation_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8cfe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "GetGoalRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetGoalRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AvatarIKGoal, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Animator::SetGoalRotation_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8d134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "SetGoalRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetGoalWeightPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::UnityEngine::AvatarIKGoal)>(&::UnityEngine::Animator::GetGoalWeightPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8d240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "GetGoalWeightPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetGoalWeightPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AvatarIKGoal, float_t)>(&::UnityEngine::Animator::SetGoalWeightPosition_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8d35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                         { "SetGoalWeightPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetGoalWeightRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::UnityEngine::AvatarIKGoal)>(&::UnityEngine::Animator::GetGoalWeightRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8d468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "GetGoalWeightRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetGoalWeightRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AvatarIKGoal, float_t)>(&::UnityEngine::Animator::SetGoalWeightRotation_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8d584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                         { "SetGoalWeightRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetHintPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AvatarIKHint, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::GetHintPosition_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8d6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "GetHintPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetHintPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AvatarIKHint, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::SetHintPosition_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8d7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "SetHintPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetHintWeightPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::UnityEngine::AvatarIKHint)>(&::UnityEngine::Animator::GetHintWeightPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8d908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "GetHintWeightPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKHint>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetHintWeightPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AvatarIKHint, float_t)>(&::UnityEngine::Animator::SetHintWeightPosition_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8da24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                         { "SetHintWeightPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetLookAtPositionInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::SetLookAtPositionInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8db50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "SetLookAtPositionInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetLookAtWeightInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t, float_t, float_t, float_t, float_t)>(&::UnityEngine::Animator::SetLookAtWeightInternal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e8ddb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLookAtWeightInternal_Injected",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetBoneLocalRotationInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Animator::SetBoneLocalRotationInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8df94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Animator*>(),
                         { "SetBoneLocalRotationInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetBehaviour_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::Type*)>(&::UnityEngine::Animator::GetBehaviour_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8e16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBehaviour_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.InternalGetBehaviours_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> (*)(::System::IntPtr, ::System::Type*)>(
    &::UnityEngine::Animator::InternalGetBehaviours_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8e26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "InternalGetBehaviours_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.InternalGetBehavioursByKey_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> (*)(::System::IntPtr, int32_t, int32_t, ::System::Type*)>(
    &::UnityEngine::Animator::InternalGetBehavioursByKey_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e8e42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "InternalGetBehavioursByKey_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_stabilizeFeet_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_stabilizeFeet_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8e508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_stabilizeFeet_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_stabilizeFeet_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animator::set_stabilizeFeet_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8e5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_stabilizeFeet_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_layerCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_layerCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8e698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_layerCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetLayerName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animator::GetLayerName_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8e814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Animator*>(),
                         { "GetLayerName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetLayerIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animator::GetLayerIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8e9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "GetLayerIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetLayerWeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Animator::GetLayerWeight_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8eab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetLayerWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetLayerWeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, float_t)>(&::UnityEngine::Animator::SetLayerWeight_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8eb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "SetLayerWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetAnimatorStateInfo_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::UnityEngine::StateInfoIndex, ::by_ref<::UnityEngine::AnimatorStateInfo>)>(
    &::UnityEngine::Animator::GetAnimatorStateInfo_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e8ec90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetAnimatorStateInfo_Injected",
                                                                           {},
                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::StateInfoIndex>(),
                                                                             ::i2c::type_of<::by_ref<::UnityEngine::AnimatorStateInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetAnimatorTransitionInfo_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::AnimatorTransitionInfo>)>(
    &::UnityEngine::Animator::GetAnimatorTransitionInfo_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8ee04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "GetAnimatorTransitionInfo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AnimatorTransitionInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetAnimatorClipInfoCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, bool)>(&::UnityEngine::Animator::GetAnimatorClipInfoCount_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e8ef20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "GetAnimatorClipInfoCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetCurrentAnimatorClipInfo_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorClipInfo> (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Animator::GetCurrentAnimatorClipInfo_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8f014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetCurrentAnimatorClipInfo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetNextAnimatorClipInfo_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorClipInfo> (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Animator::GetNextAnimatorClipInfo_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8f0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetNextAnimatorClipInfo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetAnimatorClipInfoInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, bool, ::System::Object*)>(&::UnityEngine::Animator::GetAnimatorClipInfoInternal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e8f230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "GetAnimatorClipInfoInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.IsInTransition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Animator::IsInTransition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8f378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsInTransition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_parameters_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorControllerParameter*> (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_parameters_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8f43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_parameters_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_parameterCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_parameterCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8f4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_parameterCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetParameterInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorControllerParameter* (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Animator::GetParameterInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8f5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetParameterInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_feetPivotActive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_feetPivotActive_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8f724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_feetPivotActive_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_feetPivotActive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Animator::set_feetPivotActive_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e8f7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_feetPivotActive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_pivotWeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_pivotWeight_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8f8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_pivotWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_pivotPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::get_pivotPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8f998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "get_pivotPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.MatchTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, int32_t,
                                                                ::by_ref<::UnityEngine::MatchTargetWeightMask>, float_t, float_t, bool)>(&::UnityEngine::Animator::MatchTarget_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e8fabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "MatchTarget_Injected",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                                              ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<int32_t>(),
                                                                                                              ::i2c::type_of<::by_ref<::UnityEngine::MatchTargetWeightMask>>(),
                                                                                                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.InterruptMatchTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animator::InterruptMatchTarget_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8fc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "InterruptMatchTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_isMatchingTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_isMatchingTarget_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8fd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isMatchingTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_speed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_speed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e8fdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_speed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_speed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Animator::set_speed_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e8fe9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_speed_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFadeInFixedTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, float_t, int32_t, float_t, float_t)>(&::UnityEngine::Animator::CrossFadeInFixedTime_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e902d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFadeInFixedTime_Injected",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                                                                              ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.WriteDefaultValues_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Animator::WriteDefaultValues_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e903d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "WriteDefaultValues_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.CrossFade_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, float_t, int32_t, float_t, float_t)>(&::UnityEngine::Animator::CrossFade_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e905fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFade_Injected",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                                                                              ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.PlayInFixedTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, float_t)>(&::UnityEngine::Animator::PlayInFixedTime_Injected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e907f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                         { "PlayInFixedTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.Play_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, float_t)>(&::UnityEngine::Animator::Play_Injected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e90914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "Play_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ResetControllerState_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animator::ResetControllerState_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e90a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetControllerState_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AvatarTarget, float_t)>(&::UnityEngine::Animator::SetTarget_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e90b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "SetTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarTarget>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_targetPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animator::get_targetPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e90bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "get_targetPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_targetRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Animator::get_targetRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e90cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "get_targetRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.IsBoneTransform_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Animator::IsBoneTransform_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e90de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsBoneTransform_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_avatarRoot_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_avatarRoot_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e90f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_avatarRoot_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetBoneTransformInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Animator::GetBoneTransformInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e91558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBoneTransformInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_cullingMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorCullingMode (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_cullingMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e9161c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_cullingMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_cullingMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AnimatorCullingMode)>(&::UnityEngine::Animator::set_cullingMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e916e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "set_cullingMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AnimatorCullingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.StartPlayback_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Animator::StartPlayback_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e917ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StartPlayback_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.StopPlayback_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Animator::StopPlayback_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e91868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StopPlayback_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_playbackTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_playbackTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e91924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_playbackTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_playbackTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Animator::set_playbackTime_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e919f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_playbackTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.StartRecording_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Animator::StartRecording_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e91acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StartRecording_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.StopRecording_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Animator::StopRecording_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e91b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StopRecording_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetRecorderStartTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Animator::GetRecorderStartTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e91c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetRecorderStartTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetRecorderStopTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Animator::GetRecorderStopTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e91d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetRecorderStopTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_recorderMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorRecorderMode (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_recorderMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e91dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_recorderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_runtimeAnimatorController_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_runtimeAnimatorController_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e91f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_runtimeAnimatorController_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_runtimeAnimatorController_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Animator::set_runtimeAnimatorController_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e9205c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "set_runtimeAnimatorController_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_hasBoundPlayables_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_hasBoundPlayables_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e92120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_hasBoundPlayables_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ClearInternalControllerPlayable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Animator::ClearInternalControllerPlayable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e921dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ClearInternalControllerPlayable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.HasState_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Animator::HasState_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e922b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "HasState_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.StringToHash_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animator::StringToHash_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e92304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StringToHash_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_avatar_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_avatar_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e92340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_avatar_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_avatar_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Animator::set_avatar_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e9243c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_avatar_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetStats_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animator::GetStats_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e925b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "GetStats_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetCurrentGraph_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Playables::PlayableGraph>)>(&::UnityEngine::Animator::GetCurrentGraph_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e926ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "GetCurrentGraph_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.IsInIKPass_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::IsInIKPass_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e927f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsInIKPass_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetFloatString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t)>(&::UnityEngine::Animator::SetFloatString_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e9282c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "SetFloatString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetFloatID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, float_t)>(&::UnityEngine::Animator::SetFloatID_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e92880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetFloatID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetFloatString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animator::GetFloatString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e928d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "GetFloatString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetFloatID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Animator::GetFloatID_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e92918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetFloatID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetBoolString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool)>(&::UnityEngine::Animator::SetBoolString_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e9295c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Animator*>(),
                         { "SetBoolString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetBoolID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, bool)>(&::UnityEngine::Animator::SetBoolID_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e929b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetBoolID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetBoolString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animator::GetBoolString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e92a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "GetBoolString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetBoolID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Animator::GetBoolID_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e92a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBoolID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetIntegerString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(
    &::UnityEngine::Animator::SetIntegerString_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e92a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "SetIntegerString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetIntegerID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Animator::SetIntegerID_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e92ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                             { "SetIntegerID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetIntegerString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animator::GetIntegerString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e92b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "GetIntegerString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetIntegerID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Animator::GetIntegerID_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e92b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIntegerID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetTriggerString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animator::SetTriggerString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e92bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                { "SetTriggerString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetTriggerID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Animator::SetTriggerID_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e92c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetTriggerID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ResetTriggerString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animator::ResetTriggerString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e92c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                         { "ResetTriggerString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ResetTriggerID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Animator::ResetTriggerID_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e92c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetTriggerID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.IsParameterControlledByCurveString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Animator::IsParameterControlledByCurveString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e92ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                            { "IsParameterControlledByCurveString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.IsParameterControlledByCurveID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Animator::IsParameterControlledByCurveID_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e92d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsParameterControlledByCurveID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetFloatStringDamp_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t, float_t, float_t)>(
    &::UnityEngine::Animator::SetFloatStringDamp_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e92d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetFloatStringDamp_Injected",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                          ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.SetFloatIDDamp_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, float_t, float_t, float_t)>(&::UnityEngine::Animator::SetFloatIDDamp_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e92dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Animator*>(),
            { "SetFloatIDDamp_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_layersAffectMassCenter_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_layersAffectMassCenter_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e92eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_layersAffectMassCenter_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_layersAffectMassCenter_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animator::set_layersAffectMassCenter_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e92f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_layersAffectMassCenter_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_leftFeetBottomHeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_leftFeetBottomHeight_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e9303c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_leftFeetBottomHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_rightFeetBottomHeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_rightFeetBottomHeight_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e930f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_rightFeetBottomHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_supportsOnAnimatorMove_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_supportsOnAnimatorMove_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e931b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_supportsOnAnimatorMove_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.OnUpdateModeChanged_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Animator::OnUpdateModeChanged_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e93270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "OnUpdateModeChanged_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.OnCullingModeChanged_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Animator::OnCullingModeChanged_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e9332c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "OnCullingModeChanged_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.WriteDefaultPose_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Animator::WriteDefaultPose_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e933e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "WriteDefaultPose_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.Update_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Animator::Update_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e934b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Update_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.Rebind_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animator::Rebind_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e93598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Rebind_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ApplyBuiltinRootMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Animator::ApplyBuiltinRootMotion_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e9365c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ApplyBuiltinRootMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.EvaluateController_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Animator::EvaluateController_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e93730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "EvaluateController_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.GetAnimatorStateName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, bool, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Animator::GetAnimatorStateName_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e938d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetAnimatorStateName_Injected",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                                                              ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.ResolveHash_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animator::ResolveHash_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e93a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Animator*>(),
                         { "ResolveHash_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_logWarnings_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_logWarnings_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e93ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_logWarnings_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_logWarnings_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animator::set_logWarnings_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e93b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_logWarnings_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_fireEvents_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_fireEvents_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e93c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_fireEvents_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_fireEvents_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animator::set_fireEvents_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e93d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_fireEvents_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_keepAnimatorStateOnDisable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_keepAnimatorStateOnDisable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e93e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_keepAnimatorStateOnDisable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_keepAnimatorStateOnDisable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animator::set_keepAnimatorStateOnDisable_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e93eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_keepAnimatorStateOnDisable_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.get_writeDefaultValuesOnDisable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Animator::get_writeDefaultValuesOnDisable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e93f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_writeDefaultValuesOnDisable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animator.set_writeDefaultValuesOnDisable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Animator::set_writeDefaultValuesOnDisable_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e94044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_writeDefaultValuesOnDisable_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Animator::get_isOptimizable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isOptimizable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Animator::get_isHuman() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isHuman", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Animator::get_hasRootMotion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_hasRootMotion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Animator::get_isRootPositionOrRotationControlledByCurves() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isRootPositionOrRotationControlledByCurves", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Animator::get_humanScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_humanScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::Animator::get_isInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Animator::GetFloat(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetFloat", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, name);
}
inline float_t UnityEngine::Animator::GetFloat(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetFloat", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, id);
}
inline void UnityEngine::Animator::SetFloat(::StringW name, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Animator::SetFloat(::StringW name, float_t value, float_t dampTime, float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "SetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, dampTime, deltaTime);
}
inline void UnityEngine::Animator::SetFloat(int32_t id, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline void UnityEngine::Animator::SetFloat(int32_t id, float_t value, float_t dampTime, float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "SetFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value, dampTime, deltaTime);
}
inline bool UnityEngine::Animator::GetBool(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBool", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool UnityEngine::Animator::GetBool(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBool", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void UnityEngine::Animator::SetBool(::StringW name, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetBool", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Animator::SetBool(int32_t id, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetBool", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline int32_t UnityEngine::Animator::GetInteger(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetInteger", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline int32_t UnityEngine::Animator::GetInteger(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetInteger", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline void UnityEngine::Animator::SetInteger(::StringW name, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Animator::SetInteger(int32_t id, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetInteger", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline void UnityEngine::Animator::SetTrigger(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetTrigger", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::Animator::SetTrigger(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetTrigger", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void UnityEngine::Animator::ResetTrigger(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetTrigger", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::Animator::ResetTrigger(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetTrigger", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline bool UnityEngine::Animator::IsParameterControlledByCurve(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsParameterControlledByCurve", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool UnityEngine::Animator::IsParameterControlledByCurve(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsParameterControlledByCurve", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::get_deltaPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_deltaPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion UnityEngine::Animator::get_deltaRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_deltaRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::get_velocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_velocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::get_angularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_angularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::get_rootPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_rootPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_rootPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_rootPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::Animator::get_rootRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_rootRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_rootRotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_rootRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Animator::get_applyRootMotion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_applyRootMotion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_applyRootMotion(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_applyRootMotion", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Animator::get_linearVelocityBlending() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_linearVelocityBlending", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_linearVelocityBlending(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_linearVelocityBlending", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Animator::get_animatePhysics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_animatePhysics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_animatePhysics(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_animatePhysics", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimatorUpdateMode UnityEngine::Animator::get_updateMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_updateMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorUpdateMode>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_updateMode(::UnityEngine::AnimatorUpdateMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_updateMode", {}, { ::i2c::type_of<::UnityEngine::AnimatorUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Animator::get_hasTransformHierarchy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_hasTransformHierarchy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Animator::get_allowConstantClipSamplingOptimization() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_allowConstantClipSamplingOptimization", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_allowConstantClipSamplingOptimization(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_allowConstantClipSamplingOptimization", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Animator::get_gravityWeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_gravityWeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::get_bodyPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_bodyPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_bodyPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_bodyPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::get_bodyPositionInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_bodyPositionInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_bodyPositionInternal(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_bodyPositionInternal", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::Animator::get_bodyRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_bodyRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_bodyRotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_bodyRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::Animator::get_bodyRotationInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_bodyRotationInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_bodyRotationInternal(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_bodyRotationInternal", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::GetIKPosition(::UnityEngine::AvatarIKGoal goal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIKPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, goal);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::GetGoalPosition(::UnityEngine::AvatarIKGoal goal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetGoalPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, goal);
}
inline void UnityEngine::Animator::SetIKPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIKPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, goal, goalPosition);
}
inline void UnityEngine::Animator::SetGoalPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetGoalPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, goal, goalPosition);
}
inline ::UnityEngine::Quaternion UnityEngine::Animator::GetIKRotation(::UnityEngine::AvatarIKGoal goal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIKRotation", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, goal);
}
inline ::UnityEngine::Quaternion UnityEngine::Animator::GetGoalRotation(::UnityEngine::AvatarIKGoal goal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetGoalRotation", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, goal);
}
inline void UnityEngine::Animator::SetIKRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIKRotation", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, goal, goalRotation);
}
inline void UnityEngine::Animator::SetGoalRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetGoalRotation", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, goal, goalRotation);
}
inline float_t UnityEngine::Animator::GetIKPositionWeight(::UnityEngine::AvatarIKGoal goal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIKPositionWeight", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, goal);
}
inline float_t UnityEngine::Animator::GetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetGoalWeightPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, goal);
}
inline void UnityEngine::Animator::SetIKPositionWeight(::UnityEngine::AvatarIKGoal goal, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIKPositionWeight", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, goal, value);
}
inline void UnityEngine::Animator::SetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetGoalWeightPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, goal, value);
}
inline float_t UnityEngine::Animator::GetIKRotationWeight(::UnityEngine::AvatarIKGoal goal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIKRotationWeight", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, goal);
}
inline float_t UnityEngine::Animator::GetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetGoalWeightRotation", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, goal);
}
inline void UnityEngine::Animator::SetIKRotationWeight(::UnityEngine::AvatarIKGoal goal, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIKRotationWeight", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, goal, value);
}
inline void UnityEngine::Animator::SetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetGoalWeightRotation", {}, { ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, goal, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::GetIKHintPosition(::UnityEngine::AvatarIKHint hint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIKHintPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, hint);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::GetHintPosition(::UnityEngine::AvatarIKHint hint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetHintPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, hint);
}
inline void UnityEngine::Animator::SetIKHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIKHintPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hint, hintPosition);
}
inline void UnityEngine::Animator::SetHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetHintPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hint, hintPosition);
}
inline float_t UnityEngine::Animator::GetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIKHintPositionWeight", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, hint);
}
inline float_t UnityEngine::Animator::GetHintWeightPosition(::UnityEngine::AvatarIKHint hint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetHintWeightPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, hint);
}
inline void UnityEngine::Animator::SetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIKHintPositionWeight", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hint, value);
}
inline void UnityEngine::Animator::SetHintWeightPosition(::UnityEngine::AvatarIKHint hint, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetHintWeightPosition", {}, { ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hint, value);
}
inline void UnityEngine::Animator::SetLookAtPosition(::UnityEngine::Vector3 lookAtPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLookAtPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lookAtPosition);
}
inline void UnityEngine::Animator::SetLookAtPositionInternal(::UnityEngine::Vector3 lookAtPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLookAtPositionInternal", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lookAtPosition);
}
inline void UnityEngine::Animator::SetLookAtWeight(float_t weight) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLookAtWeight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weight);
}
inline void UnityEngine::Animator::SetLookAtWeight(float_t weight, float_t bodyWeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLookAtWeight", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weight, bodyWeight);
}
inline void UnityEngine::Animator::SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLookAtWeight", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weight, bodyWeight, headWeight);
}
inline void UnityEngine::Animator::SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "SetLookAtWeight", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weight, bodyWeight, headWeight, eyesWeight);
}
inline void UnityEngine::Animator::SetLookAtWeight(float_t weight, /* [DefaultValue("0.0f")] */ float_t bodyWeight, /* [DefaultValue("1.0f")] */ float_t headWeight,
                                                   /* [DefaultValue("0.0f")] */ float_t eyesWeight, /* [DefaultValue("0.5f")] */ float_t clampWeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                          { "SetLookAtWeight", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weight, bodyWeight, headWeight, eyesWeight, clampWeight);
}
inline void UnityEngine::Animator::SetLookAtWeightInternal(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Animator*>(),
                       { "SetLookAtWeightInternal", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weight, bodyWeight, headWeight, eyesWeight, clampWeight);
}
inline void UnityEngine::Animator::SetBoneLocalRotation(::UnityEngine::HumanBodyBones humanBoneId, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "SetBoneLocalRotation", {}, { ::i2c::type_of<::UnityEngine::HumanBodyBones>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, humanBoneId, rotation);
}
inline void UnityEngine::Animator::SetBoneLocalRotationInternal(int32_t humanBoneId, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetBoneLocalRotationInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, humanBoneId, rotation);
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::Animator::GetBehaviour(/* [NotNull] */ ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBehaviour", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>>(this, ___internal_method, type);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::StateMachineBehaviour*>)
inline T UnityEngine::Animator::GetBehaviour() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBehaviour", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::StateMachineBehaviour*>)
inline ::ArrayW<T> UnityEngine::Animator::ConvertStateMachineBehaviour(::ArrayW<::UnityEngine::ScriptableObject*> rawObjects) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "ConvertStateMachineBehaviour", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<::UnityEngine::ScriptableObject*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, rawObjects);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::StateMachineBehaviour*>)
inline ::ArrayW<T> UnityEngine::Animator::GetBehaviours() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBehaviours", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> UnityEngine::Animator::InternalGetBehaviours(/* [NotNull] */ ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "InternalGetBehaviours", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::ScriptableObject>>>(this, ___internal_method, type);
}
inline ::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>> UnityEngine::Animator::GetBehaviours(int32_t fullPathHash, int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBehaviours", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>>>(this, ___internal_method, fullPathHash, layerIndex);
}
inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> UnityEngine::Animator::InternalGetBehavioursByKey(int32_t fullPathHash, int32_t layerIndex, /* [NotNull] */ ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "InternalGetBehavioursByKey", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::ScriptableObject>>>(this, ___internal_method, fullPathHash, layerIndex, type);
}
inline bool UnityEngine::Animator::get_stabilizeFeet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_stabilizeFeet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_stabilizeFeet(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_stabilizeFeet", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Animator::get_layerCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_layerCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::Animator::GetLayerName(int32_t layerIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetLayerName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, layerIndex);
}
inline int32_t UnityEngine::Animator::GetLayerIndex(::StringW layerName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetLayerIndex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, layerName);
}
inline float_t UnityEngine::Animator::GetLayerWeight(int32_t layerIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetLayerWeight", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, layerIndex);
}
inline void UnityEngine::Animator::SetLayerWeight(int32_t layerIndex, float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLayerWeight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex, weight);
}
inline void UnityEngine::Animator::GetAnimatorStateInfo(int32_t layerIndex, ::UnityEngine::StateInfoIndex stateInfoIndex, ::by_ref<::UnityEngine::AnimatorStateInfo> info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Animator*>(),
                       { "GetAnimatorStateInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::StateInfoIndex>(), ::i2c::type_of<::by_ref<::UnityEngine::AnimatorStateInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex, stateInfoIndex, info);
}
inline ::UnityEngine::AnimatorStateInfo UnityEngine::Animator::GetCurrentAnimatorStateInfo(int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetCurrentAnimatorStateInfo", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorStateInfo>(this, ___internal_method, layerIndex);
}
inline ::UnityEngine::AnimatorStateInfo UnityEngine::Animator::GetNextAnimatorStateInfo(int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetNextAnimatorStateInfo", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorStateInfo>(this, ___internal_method, layerIndex);
}
inline void UnityEngine::Animator::GetAnimatorTransitionInfo(int32_t layerIndex, ::by_ref<::UnityEngine::AnimatorTransitionInfo> info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "GetAnimatorTransitionInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AnimatorTransitionInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex, info);
}
inline ::UnityEngine::AnimatorTransitionInfo UnityEngine::Animator::GetAnimatorTransitionInfo(int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetAnimatorTransitionInfo", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorTransitionInfo>(this, ___internal_method, layerIndex);
}
inline int32_t UnityEngine::Animator::GetAnimatorClipInfoCount(int32_t layerIndex, bool current) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetAnimatorClipInfoCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, layerIndex, current);
}
inline int32_t UnityEngine::Animator::GetCurrentAnimatorClipInfoCount(int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetCurrentAnimatorClipInfoCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, layerIndex);
}
inline int32_t UnityEngine::Animator::GetNextAnimatorClipInfoCount(int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetNextAnimatorClipInfoCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, layerIndex);
}
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> UnityEngine::Animator::GetCurrentAnimatorClipInfo(int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetCurrentAnimatorClipInfo", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorClipInfo>>(this, ___internal_method, layerIndex);
}
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> UnityEngine::Animator::GetNextAnimatorClipInfo(int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetNextAnimatorClipInfo", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorClipInfo>>(this, ___internal_method, layerIndex);
}
inline void UnityEngine::Animator::GetCurrentAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                          { "GetCurrentAnimatorClipInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex, clips);
}
inline void UnityEngine::Animator::GetAnimatorClipInfoInternal(int32_t layerIndex, bool isCurrent, ::System::Object* clips) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "GetAnimatorClipInfoInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex, isCurrent, clips);
}
inline void UnityEngine::Animator::GetNextAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                       { "GetNextAnimatorClipInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex, clips);
}
inline bool UnityEngine::Animator::IsInTransition(int32_t layerIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsInTransition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layerIndex);
}
inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> UnityEngine::Animator::get_parameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_parameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorControllerParameter*>>(this, ___internal_method);
}
inline int32_t UnityEngine::Animator::get_parameterCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_parameterCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::AnimatorControllerParameter* UnityEngine::Animator::GetParameterInternal(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetParameterInternal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorControllerParameter*>(this, ___internal_method, index);
}
inline ::UnityEngine::AnimatorControllerParameter* UnityEngine::Animator::GetParameter(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetParameter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorControllerParameter*>(this, ___internal_method, index);
}
inline float_t UnityEngine::Animator::get_feetPivotActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_feetPivotActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_feetPivotActive(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_feetPivotActive", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Animator::get_pivotWeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_pivotWeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::get_pivotPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_pivotPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Animator::MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, int32_t targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                                               float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "MatchTarget",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MatchTargetWeightMask>(),
                                                                                                            ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matchPosition, matchRotation, targetBodyPart, weightMask, startNormalizedTime, targetNormalizedTime, completeMatch);
}
inline void UnityEngine::Animator::MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart,
                                               ::UnityEngine::MatchTargetWeightMask weightMask, float_t startNormalizedTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "MatchTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::AvatarTarget>(),
                                                               ::i2c::type_of<::UnityEngine::MatchTargetWeightMask>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matchPosition, matchRotation, targetBodyPart, weightMask, startNormalizedTime);
}
inline void UnityEngine::Animator::MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart,
                                               ::UnityEngine::MatchTargetWeightMask weightMask, float_t startNormalizedTime, /* [DefaultValue("1")] */ float_t targetNormalizedTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "MatchTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::AvatarTarget>(),
                                                               ::i2c::type_of<::UnityEngine::MatchTargetWeightMask>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matchPosition, matchRotation, targetBodyPart, weightMask, startNormalizedTime, targetNormalizedTime);
}
inline void UnityEngine::Animator::MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart,
                                               ::UnityEngine::MatchTargetWeightMask weightMask, float_t startNormalizedTime, /* [DefaultValue("1")] */ float_t targetNormalizedTime,
                                               /* [DefaultValue("true")] */ bool completeMatch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "MatchTarget",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::AvatarTarget>(),
                                                  ::i2c::type_of<::UnityEngine::MatchTargetWeightMask>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matchPosition, matchRotation, targetBodyPart, weightMask, startNormalizedTime, targetNormalizedTime, completeMatch);
}
inline void UnityEngine::Animator::InterruptMatchTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "InterruptMatchTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animator::InterruptMatchTarget(/* [DefaultValue("true")] */ bool completeMatch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "InterruptMatchTarget", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completeMatch);
}
inline bool UnityEngine::Animator::get_isMatchingTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isMatchingTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Animator::get_speed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_speed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_speed(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_speed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Animator::ForceStateNormalizedTime(float_t normalizedTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ForceStateNormalizedTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normalizedTime);
}
inline void UnityEngine::Animator::CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFadeInFixedTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, fixedTransitionDuration);
}
inline void UnityEngine::Animator::CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFadeInFixedTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, fixedTransitionDuration, layer);
}
inline void UnityEngine::Animator::CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "CrossFadeInFixedTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, fixedTransitionDuration, layer, fixedTimeOffset);
}
inline void UnityEngine::Animator::CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, /* [DefaultValue("-1")] */ int32_t layer,
                                                        /* [DefaultValue("0.0f")] */ float_t fixedTimeOffset, /* [DefaultValue("0.0f")] */ float_t normalizedTransitionTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Animator*>(),
                       { "CrossFadeInFixedTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, fixedTransitionDuration, layer, fixedTimeOffset, normalizedTransitionTime);
}
inline void UnityEngine::Animator::CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "CrossFadeInFixedTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHashName, fixedTransitionDuration, layer, fixedTimeOffset);
}
inline void UnityEngine::Animator::CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFadeInFixedTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHashName, fixedTransitionDuration, layer);
}
inline void UnityEngine::Animator::CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFadeInFixedTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHashName, fixedTransitionDuration);
}
inline void UnityEngine::Animator::CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, /* [DefaultValue("-1")] */ int32_t layer,
                                                        /* [DefaultValue("0.0f")] */ float_t fixedTimeOffset, /* [DefaultValue("0.0f")] */ float_t normalizedTransitionTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                          { "CrossFadeInFixedTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHashName, fixedTransitionDuration, layer, fixedTimeOffset, normalizedTransitionTime);
}
inline void UnityEngine::Animator::WriteDefaultValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "WriteDefaultValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animator::CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "CrossFade", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, normalizedTransitionDuration, layer, normalizedTimeOffset);
}
inline void UnityEngine::Animator::CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFade", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, normalizedTransitionDuration, layer);
}
inline void UnityEngine::Animator::CrossFade(::StringW stateName, float_t normalizedTransitionDuration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFade", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, normalizedTransitionDuration);
}
inline void UnityEngine::Animator::CrossFade(::StringW stateName, float_t normalizedTransitionDuration, /* [DefaultValue("-1")] */ int32_t layer,
                                             /* [DefaultValue("float.NegativeInfinity")] */ float_t normalizedTimeOffset, /* [DefaultValue("0.0f")] */ float_t normalizedTransitionTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                          { "CrossFade", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, normalizedTransitionDuration, layer, normalizedTimeOffset, normalizedTransitionTime);
}
inline void UnityEngine::Animator::CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, /* [DefaultValue("-1")] */ int32_t layer,
                                             /* [DefaultValue("0.0f")] */ float_t normalizedTimeOffset, /* [DefaultValue("0.0f")] */ float_t normalizedTransitionTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                          { "CrossFade", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHashName, normalizedTransitionDuration, layer, normalizedTimeOffset, normalizedTransitionTime);
}
inline void UnityEngine::Animator::CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "CrossFade", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHashName, normalizedTransitionDuration, layer, normalizedTimeOffset);
}
inline void UnityEngine::Animator::CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFade", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHashName, normalizedTransitionDuration, layer);
}
inline void UnityEngine::Animator::CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFade", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHashName, normalizedTransitionDuration);
}
inline void UnityEngine::Animator::PlayInFixedTime(::StringW stateName, int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "PlayInFixedTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, layer);
}
inline void UnityEngine::Animator::PlayInFixedTime(::StringW stateName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "PlayInFixedTime", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName);
}
inline void UnityEngine::Animator::PlayInFixedTime(::StringW stateName, /* [DefaultValue("-1")] */ int32_t layer, /* [DefaultValue("float.NegativeInfinity")] */ float_t fixedTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "PlayInFixedTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, layer, fixedTime);
}
inline void UnityEngine::Animator::PlayInFixedTime(int32_t stateNameHash, /* [DefaultValue("-1")] */ int32_t layer, /* [DefaultValue("float.NegativeInfinity")] */ float_t fixedTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "PlayInFixedTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash, layer, fixedTime);
}
inline void UnityEngine::Animator::PlayInFixedTime(int32_t stateNameHash, int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "PlayInFixedTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash, layer);
}
inline void UnityEngine::Animator::PlayInFixedTime(int32_t stateNameHash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "PlayInFixedTime", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash);
}
inline void UnityEngine::Animator::Play(::StringW stateName, int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Play", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, layer);
}
inline void UnityEngine::Animator::Play(::StringW stateName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Play", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName);
}
inline void UnityEngine::Animator::Play(::StringW stateName, /* [DefaultValue("-1")] */ int32_t layer, /* [DefaultValue("float.NegativeInfinity")] */ float_t normalizedTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Play", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, layer, normalizedTime);
}
inline void UnityEngine::Animator::Play(int32_t stateNameHash, /* [DefaultValue("-1")] */ int32_t layer, /* [DefaultValue("float.NegativeInfinity")] */ float_t normalizedTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Play", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash, layer, normalizedTime);
}
inline void UnityEngine::Animator::Play(int32_t stateNameHash, int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Play", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash, layer);
}
inline void UnityEngine::Animator::Play(int32_t stateNameHash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Play", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash);
}
inline void UnityEngine::Animator::ResetControllerState(/* [DefaultValue("true")] */ bool resetParameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetControllerState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resetParameters);
}
inline void UnityEngine::Animator::SetTarget(::UnityEngine::AvatarTarget targetIndex, float_t targetNormalizedTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetTarget", {}, { ::i2c::type_of<::UnityEngine::AvatarTarget>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetIndex, targetNormalizedTime);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::get_targetPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_targetPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion UnityEngine::Animator::get_targetRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_targetRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline bool UnityEngine::Animator::IsControlled(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsControlled", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, transform);
}
inline bool UnityEngine::Animator::IsBoneTransform(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsBoneTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, transform);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Animator::get_avatarRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_avatarRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Animator::GetBoneTransform(::UnityEngine::HumanBodyBones humanBoneId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBoneTransform", {}, { ::i2c::type_of<::UnityEngine::HumanBodyBones>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, humanBoneId);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Animator::GetBoneTransformInternal(int32_t humanBoneId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBoneTransformInternal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, humanBoneId);
}
inline ::UnityEngine::AnimatorCullingMode UnityEngine::Animator::get_cullingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_cullingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorCullingMode>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_cullingMode(::UnityEngine::AnimatorCullingMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_cullingMode", {}, { ::i2c::type_of<::UnityEngine::AnimatorCullingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Animator::StartPlayback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StartPlayback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animator::StopPlayback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StopPlayback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Animator::get_playbackTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_playbackTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_playbackTime(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_playbackTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Animator::StartRecording(int32_t frameCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StartRecording", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameCount);
}
inline void UnityEngine::Animator::StopRecording() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StopRecording", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Animator::get_recorderStartTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_recorderStartTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_recorderStartTime(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_recorderStartTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Animator::GetRecorderStartTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetRecorderStartTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Animator::get_recorderStopTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_recorderStopTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_recorderStopTime(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_recorderStopTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Animator::GetRecorderStopTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetRecorderStopTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::AnimatorRecorderMode UnityEngine::Animator::get_recorderMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_recorderMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorRecorderMode>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RuntimeAnimatorController> UnityEngine::Animator::get_runtimeAnimatorController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_runtimeAnimatorController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RuntimeAnimatorController>>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_runtimeAnimatorController", {}, { ::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Animator::get_hasBoundPlayables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_hasBoundPlayables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::ClearInternalControllerPlayable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ClearInternalControllerPlayable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Animator::HasState(int32_t layerIndex, int32_t stateID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "HasState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layerIndex, stateID);
}
inline int32_t UnityEngine::Animator::StringToHash(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StringToHash", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Avatar> UnityEngine::Animator::get_avatar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_avatar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Avatar>>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_avatar(::UnityEngine::Avatar* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_avatar", {}, { ::i2c::type_of<::UnityEngine::Avatar*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Animator::GetStats() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetStats", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Animator::get_playableGraph() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_playableGraph", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(this, ___internal_method);
}
inline void UnityEngine::Animator::GetCurrentGraph(::by_ref<::UnityEngine::Playables::PlayableGraph> graph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetCurrentGraph", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph);
}
inline void UnityEngine::Animator::CheckIfInIKPass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CheckIfInIKPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Animator::IsInIKPass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsInIKPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::SetFloatString(::StringW name, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetFloatString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Animator::SetFloatID(int32_t id, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetFloatID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline float_t UnityEngine::Animator::GetFloatString(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetFloatString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, name);
}
inline float_t UnityEngine::Animator::GetFloatID(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetFloatID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, id);
}
inline void UnityEngine::Animator::SetBoolString(::StringW name, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetBoolString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Animator::SetBoolID(int32_t id, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetBoolID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline bool UnityEngine::Animator::GetBoolString(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBoolString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool UnityEngine::Animator::GetBoolID(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBoolID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void UnityEngine::Animator::SetIntegerString(::StringW name, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIntegerString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Animator::SetIntegerID(int32_t id, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIntegerID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline int32_t UnityEngine::Animator::GetIntegerString(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIntegerString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline int32_t UnityEngine::Animator::GetIntegerID(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIntegerID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline void UnityEngine::Animator::SetTriggerString(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetTriggerString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::Animator::SetTriggerID(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetTriggerID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void UnityEngine::Animator::ResetTriggerString(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetTriggerString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::Animator::ResetTriggerID(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetTriggerID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline bool UnityEngine::Animator::IsParameterControlledByCurveString(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsParameterControlledByCurveString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool UnityEngine::Animator::IsParameterControlledByCurveID(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsParameterControlledByCurveID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void UnityEngine::Animator::SetFloatStringDamp(::StringW name, float_t value, float_t dampTime, float_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "SetFloatStringDamp", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, dampTime, deltaTime);
}
inline void UnityEngine::Animator::SetFloatIDDamp(int32_t id, float_t value, float_t dampTime, float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "SetFloatIDDamp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value, dampTime, deltaTime);
}
inline bool UnityEngine::Animator::get_layersAffectMassCenter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_layersAffectMassCenter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_layersAffectMassCenter(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_layersAffectMassCenter", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Animator::get_leftFeetBottomHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_leftFeetBottomHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Animator::get_rightFeetBottomHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_rightFeetBottomHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::Animator::get_supportsOnAnimatorMove() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_supportsOnAnimatorMove", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::OnUpdateModeChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "OnUpdateModeChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animator::OnCullingModeChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "OnCullingModeChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animator::WriteDefaultPose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "WriteDefaultPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animator::Update(float_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Update", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void UnityEngine::Animator::Rebind() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Rebind", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animator::Rebind(bool writeDefaultValues) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Rebind", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writeDefaultValues);
}
inline void UnityEngine::Animator::ApplyBuiltinRootMotion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ApplyBuiltinRootMotion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animator::EvaluateController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "EvaluateController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animator::EvaluateController(float_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "EvaluateController", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline ::StringW UnityEngine::Animator::GetCurrentStateName(int32_t layerIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetCurrentStateName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, layerIndex);
}
inline ::StringW UnityEngine::Animator::GetNextStateName(int32_t layerIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetNextStateName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, layerIndex);
}
inline ::StringW UnityEngine::Animator::GetAnimatorStateName(int32_t layerIndex, bool current) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetAnimatorStateName", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, layerIndex, current);
}
inline ::StringW UnityEngine::Animator::ResolveHash(int32_t hash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResolveHash", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, hash);
}
inline bool UnityEngine::Animator::get_logWarnings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_logWarnings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_logWarnings(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_logWarnings", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Animator::get_fireEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_fireEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_fireEvents(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_fireEvents", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Animator::get_keepAnimatorControllerStateOnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_keepAnimatorControllerStateOnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_keepAnimatorControllerStateOnDisable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_keepAnimatorControllerStateOnDisable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Animator::get_keepAnimatorStateOnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_keepAnimatorStateOnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_keepAnimatorStateOnDisable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_keepAnimatorStateOnDisable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Animator::get_writeDefaultValuesOnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_writeDefaultValuesOnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animator::set_writeDefaultValuesOnDisable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_writeDefaultValuesOnDisable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::GetVector(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetVector", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, name);
}
inline ::UnityEngine::Vector3 UnityEngine::Animator::GetVector(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetVector", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, id);
}
inline void UnityEngine::Animator::SetVector(::StringW name, ::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetVector", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Animator::SetVector(int32_t id, ::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetVector", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline ::UnityEngine::Quaternion UnityEngine::Animator::GetQuaternion(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetQuaternion", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, name);
}
inline ::UnityEngine::Quaternion UnityEngine::Animator::GetQuaternion(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetQuaternion", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, id);
}
inline void UnityEngine::Animator::SetQuaternion(::StringW name, ::UnityEngine::Quaternion value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetQuaternion", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Animator::SetQuaternion(int32_t id, ::UnityEngine::Quaternion value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetQuaternion", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline void UnityEngine::Animator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Animator::get_isOptimizable_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isOptimizable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Animator::get_isHuman_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isHuman_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Animator::get_hasRootMotion_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_hasRootMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Animator::get_isRootPositionOrRotationControlledByCurves_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isRootPositionOrRotationControlledByCurves_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Animator::get_humanScale_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_humanScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Animator::get_isInitialized_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isInitialized_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::get_deltaPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "get_deltaPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Animator::get_deltaRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "get_deltaRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Animator::get_velocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_velocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Animator::get_angularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "get_angularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Animator::get_rootPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "get_rootPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Animator::set_rootPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "set_rootPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Animator::get_rootRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "get_rootRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Animator::set_rootRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "set_rootRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Animator::get_applyRootMotion_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_applyRootMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_applyRootMotion_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_applyRootMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Animator::get_linearVelocityBlending_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_linearVelocityBlending_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_linearVelocityBlending_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_linearVelocityBlending_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Animator::get_animatePhysics_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_animatePhysics_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_animatePhysics_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_animatePhysics_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::AnimatorUpdateMode UnityEngine::Animator::get_updateMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_updateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorUpdateMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_updateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AnimatorUpdateMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "set_updateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AnimatorUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Animator::get_hasTransformHierarchy_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_hasTransformHierarchy_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Animator::get_allowConstantClipSamplingOptimization_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_allowConstantClipSamplingOptimization_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_allowConstantClipSamplingOptimization_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_allowConstantClipSamplingOptimization_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Animator::get_gravityWeight_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_gravityWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::get_bodyPositionInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "get_bodyPositionInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Animator::set_bodyPositionInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "set_bodyPositionInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Animator::get_bodyRotationInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "get_bodyRotationInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Animator::set_bodyRotationInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "set_bodyRotationInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Animator::GetGoalPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Animator*>(),
                       { "GetGoalPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, goal, ret);
}
inline void UnityEngine::Animator::SetGoalPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Vector3> goalPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Animator*>(),
                       { "SetGoalPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, goal, goalPosition);
}
inline void UnityEngine::Animator::GetGoalRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Animator*>(),
          { "GetGoalRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, goal, ret);
}
inline void UnityEngine::Animator::SetGoalRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Quaternion> goalRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Animator*>(),
          { "SetGoalRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, goal, goalRotation);
}
inline float_t UnityEngine::Animator::GetGoalWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "GetGoalWeightPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, goal);
}
inline void UnityEngine::Animator::SetGoalWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                       { "SetGoalWeightPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, goal, value);
}
inline float_t UnityEngine::Animator::GetGoalWeightRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "GetGoalWeightRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, goal);
}
inline void UnityEngine::Animator::SetGoalWeightRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                       { "SetGoalWeightRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, goal, value);
}
inline void UnityEngine::Animator::GetHintPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Animator*>(),
                       { "GetHintPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, hint, ret);
}
inline void UnityEngine::Animator::SetHintPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint, ::by_ref<::UnityEngine::Vector3> hintPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Animator*>(),
                       { "SetHintPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, hint, hintPosition);
}
inline float_t UnityEngine::Animator::GetHintWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "GetHintWeightPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKHint>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, hint);
}
inline void UnityEngine::Animator::SetHintWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                       { "SetHintWeightPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarIKHint>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, hint, value);
}
inline void UnityEngine::Animator::SetLookAtPositionInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> lookAtPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "SetLookAtPositionInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, lookAtPosition);
}
inline void UnityEngine::Animator::SetLookAtWeightInternal_Injected(::System::IntPtr _unity_self, float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetLookAtWeightInternal_Injected",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, weight, bodyWeight, headWeight, eyesWeight, clampWeight);
}
inline void UnityEngine::Animator::SetBoneLocalRotationInternal_Injected(::System::IntPtr _unity_self, int32_t humanBoneId, ::by_ref<::UnityEngine::Quaternion> rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                          { "SetBoneLocalRotationInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, humanBoneId, rotation);
}
inline ::System::IntPtr UnityEngine::Animator::GetBehaviour_Injected(::System::IntPtr _unity_self, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBehaviour_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, type);
}
inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> UnityEngine::Animator::InternalGetBehaviours_Injected(::System::IntPtr _unity_self, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "InternalGetBehaviours_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::ScriptableObject>>>(nullptr, ___internal_method, _unity_self, type);
}
inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> UnityEngine::Animator::InternalGetBehavioursByKey_Injected(::System::IntPtr _unity_self, int32_t fullPathHash, int32_t layerIndex,
                                                                                                                      ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Animator*>(),
          { "InternalGetBehavioursByKey_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::ScriptableObject>>>(nullptr, ___internal_method, _unity_self, fullPathHash, layerIndex, type);
}
inline bool UnityEngine::Animator::get_stabilizeFeet_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_stabilizeFeet_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_stabilizeFeet_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_stabilizeFeet_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Animator::get_layerCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_layerCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::GetLayerName_Injected(::System::IntPtr _unity_self, int32_t layerIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Animator*>(),
                       { "GetLayerName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, layerIndex, ret);
}
inline int32_t UnityEngine::Animator::GetLayerIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> layerName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "GetLayerIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, layerName);
}
inline float_t UnityEngine::Animator::GetLayerWeight_Injected(::System::IntPtr _unity_self, int32_t layerIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetLayerWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, layerIndex);
}
inline void UnityEngine::Animator::SetLayerWeight_Injected(::System::IntPtr _unity_self, int32_t layerIndex, float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "SetLayerWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, layerIndex, weight);
}
inline void UnityEngine::Animator::GetAnimatorStateInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex, ::UnityEngine::StateInfoIndex stateInfoIndex,
                                                                 ::by_ref<::UnityEngine::AnimatorStateInfo> info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetAnimatorStateInfo_Injected",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::StateInfoIndex>(),
                                                                                        ::i2c::type_of<::by_ref<::UnityEngine::AnimatorStateInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, layerIndex, stateInfoIndex, info);
}
inline void UnityEngine::Animator::GetAnimatorTransitionInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex, ::by_ref<::UnityEngine::AnimatorTransitionInfo> info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Animator*>(),
          { "GetAnimatorTransitionInfo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AnimatorTransitionInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, layerIndex, info);
}
inline int32_t UnityEngine::Animator::GetAnimatorClipInfoCount_Injected(::System::IntPtr _unity_self, int32_t layerIndex, bool current) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "GetAnimatorClipInfoCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, layerIndex, current);
}
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> UnityEngine::Animator::GetCurrentAnimatorClipInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetCurrentAnimatorClipInfo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorClipInfo>>(nullptr, ___internal_method, _unity_self, layerIndex);
}
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> UnityEngine::Animator::GetNextAnimatorClipInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetNextAnimatorClipInfo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorClipInfo>>(nullptr, ___internal_method, _unity_self, layerIndex);
}
inline void UnityEngine::Animator::GetAnimatorClipInfoInternal_Injected(::System::IntPtr _unity_self, int32_t layerIndex, bool isCurrent, ::System::Object* clips) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Animator*>(),
          { "GetAnimatorClipInfoInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, layerIndex, isCurrent, clips);
}
inline bool UnityEngine::Animator::IsInTransition_Injected(::System::IntPtr _unity_self, int32_t layerIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsInTransition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, layerIndex);
}
inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> UnityEngine::Animator::get_parameters_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_parameters_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorControllerParameter*>>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Animator::get_parameterCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_parameterCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AnimatorControllerParameter* UnityEngine::Animator::GetParameterInternal_Injected(::System::IntPtr _unity_self, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetParameterInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorControllerParameter*>(nullptr, ___internal_method, _unity_self, index);
}
inline float_t UnityEngine::Animator::get_feetPivotActive_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_feetPivotActive_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_feetPivotActive_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_feetPivotActive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Animator::get_pivotWeight_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_pivotWeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::get_pivotPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "get_pivotPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Animator::MatchTarget_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> matchPosition, ::by_ref<::UnityEngine::Quaternion> matchRotation,
                                                        int32_t targetBodyPart, ::by_ref<::UnityEngine::MatchTargetWeightMask> weightMask, float_t startNormalizedTime, float_t targetNormalizedTime,
                                                        bool completeMatch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                          { "MatchTarget_Injected",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::MatchTargetWeightMask>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, matchPosition, matchRotation, targetBodyPart, weightMask, startNormalizedTime, targetNormalizedTime,
                                                   completeMatch);
}
inline void UnityEngine::Animator::InterruptMatchTarget_Injected(::System::IntPtr _unity_self, /* [DefaultValue("true")] */ bool completeMatch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "InterruptMatchTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, completeMatch);
}
inline bool UnityEngine::Animator::get_isMatchingTarget_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_isMatchingTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Animator::get_speed_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_speed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_speed_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_speed_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Animator::CrossFadeInFixedTime_Injected(::System::IntPtr _unity_self, int32_t stateHashName, float_t fixedTransitionDuration, /* [DefaultValue("-1")] */ int32_t layer,
                                                                 /* [DefaultValue("0.0f")] */ float_t fixedTimeOffset, /* [DefaultValue("0.0f")] */ float_t normalizedTransitionTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFadeInFixedTime_Injected",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, stateHashName, fixedTransitionDuration, layer, fixedTimeOffset, normalizedTransitionTime);
}
inline void UnityEngine::Animator::WriteDefaultValues_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "WriteDefaultValues_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::CrossFade_Injected(::System::IntPtr _unity_self, int32_t stateHashName, float_t normalizedTransitionDuration, /* [DefaultValue("-1")] */ int32_t layer,
                                                      /* [DefaultValue("0.0f")] */ float_t normalizedTimeOffset, /* [DefaultValue("0.0f")] */ float_t normalizedTransitionTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "CrossFade_Injected",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, stateHashName, normalizedTransitionDuration, layer, normalizedTimeOffset, normalizedTransitionTime);
}
inline void UnityEngine::Animator::PlayInFixedTime_Injected(::System::IntPtr _unity_self, int32_t stateNameHash, /* [DefaultValue("-1")] */ int32_t layer,
                                                            /* [DefaultValue("float.NegativeInfinity")] */ float_t fixedTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                       { "PlayInFixedTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, stateNameHash, layer, fixedTime);
}
inline void UnityEngine::Animator::Play_Injected(::System::IntPtr _unity_self, int32_t stateNameHash, /* [DefaultValue("-1")] */ int32_t layer,
                                                 /* [DefaultValue("float.NegativeInfinity")] */ float_t normalizedTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "Play_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, stateNameHash, layer, normalizedTime);
}
inline void UnityEngine::Animator::ResetControllerState_Injected(::System::IntPtr _unity_self, /* [DefaultValue("true")] */ bool resetParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetControllerState_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, resetParameters);
}
inline void UnityEngine::Animator::SetTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarTarget targetIndex, float_t targetNormalizedTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "SetTarget_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AvatarTarget>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, targetIndex, targetNormalizedTime);
}
inline void UnityEngine::Animator::get_targetPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "get_targetPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Animator::get_targetRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "get_targetRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline bool UnityEngine::Animator::IsBoneTransform_Injected(::System::IntPtr _unity_self, ::System::IntPtr transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsBoneTransform_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, transform);
}
inline ::System::IntPtr UnityEngine::Animator::get_avatarRoot_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_avatarRoot_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Animator::GetBoneTransformInternal_Injected(::System::IntPtr _unity_self, int32_t humanBoneId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBoneTransformInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, humanBoneId);
}
inline ::UnityEngine::AnimatorCullingMode UnityEngine::Animator::get_cullingMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_cullingMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorCullingMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_cullingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AnimatorCullingMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                                           { "set_cullingMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AnimatorCullingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Animator::StartPlayback_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StartPlayback_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::StopPlayback_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StopPlayback_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Animator::get_playbackTime_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_playbackTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_playbackTime_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_playbackTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Animator::StartRecording_Injected(::System::IntPtr _unity_self, int32_t frameCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StartRecording_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, frameCount);
}
inline void UnityEngine::Animator::StopRecording_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StopRecording_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Animator::GetRecorderStartTime_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetRecorderStartTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Animator::GetRecorderStopTime_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetRecorderStopTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AnimatorRecorderMode UnityEngine::Animator::get_recorderMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_recorderMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorRecorderMode>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Animator::get_runtimeAnimatorController_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_runtimeAnimatorController_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_runtimeAnimatorController_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_runtimeAnimatorController_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Animator::get_hasBoundPlayables_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_hasBoundPlayables_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::ClearInternalControllerPlayable_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ClearInternalControllerPlayable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Animator::HasState_Injected(::System::IntPtr _unity_self, int32_t layerIndex, int32_t stateID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "HasState_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, layerIndex, stateID);
}
inline int32_t UnityEngine::Animator::StringToHash_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "StringToHash_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline ::System::IntPtr UnityEngine::Animator::get_avatar_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_avatar_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_avatar_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_avatar_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Animator::GetStats_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "GetStats_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Animator::GetCurrentGraph_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Playables::PlayableGraph> graph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "GetCurrentGraph_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, graph);
}
inline bool UnityEngine::Animator::IsInIKPass_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsInIKPass_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::SetFloatString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Animator*>(),
                       { "SetFloatString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value);
}
inline void UnityEngine::Animator::SetFloatID_Injected(::System::IntPtr _unity_self, int32_t id, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetFloatID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, id, value);
}
inline float_t UnityEngine::Animator::GetFloatString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "GetFloatString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, name);
}
inline float_t UnityEngine::Animator::GetFloatID_Injected(::System::IntPtr _unity_self, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetFloatID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, id);
}
inline void UnityEngine::Animator::SetBoolString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                          { "SetBoolString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value);
}
inline void UnityEngine::Animator::SetBoolID_Injected(::System::IntPtr _unity_self, int32_t id, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetBoolID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, id, value);
}
inline bool UnityEngine::Animator::GetBoolString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "GetBoolString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, name);
}
inline bool UnityEngine::Animator::GetBoolID_Injected(::System::IntPtr _unity_self, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetBoolID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, id);
}
inline void UnityEngine::Animator::SetIntegerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Animator*>(),
          { "SetIntegerString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value);
}
inline void UnityEngine::Animator::SetIntegerID_Injected(::System::IntPtr _unity_self, int32_t id, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetIntegerID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, id, value);
}
inline int32_t UnityEngine::Animator::GetIntegerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "GetIntegerString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, name);
}
inline int32_t UnityEngine::Animator::GetIntegerID_Injected(::System::IntPtr _unity_self, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetIntegerID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, id);
}
inline void UnityEngine::Animator::SetTriggerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "SetTriggerString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name);
}
inline void UnityEngine::Animator::SetTriggerID_Injected(::System::IntPtr _unity_self, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetTriggerID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, id);
}
inline void UnityEngine::Animator::ResetTriggerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                                              { "ResetTriggerString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name);
}
inline void UnityEngine::Animator::ResetTriggerID_Injected(::System::IntPtr _unity_self, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ResetTriggerID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, id);
}
inline bool UnityEngine::Animator::IsParameterControlledByCurveString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                          { "IsParameterControlledByCurveString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, name);
}
inline bool UnityEngine::Animator::IsParameterControlledByCurveID_Injected(::System::IntPtr _unity_self, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "IsParameterControlledByCurveID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, id);
}
inline void UnityEngine::Animator::SetFloatStringDamp_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, float_t value, float_t dampTime,
                                                               float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "SetFloatStringDamp_Injected",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                        ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, value, dampTime, deltaTime);
}
inline void UnityEngine::Animator::SetFloatIDDamp_Injected(::System::IntPtr _unity_self, int32_t id, float_t value, float_t dampTime, float_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Animator*>(),
          { "SetFloatIDDamp_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, id, value, dampTime, deltaTime);
}
inline bool UnityEngine::Animator::get_layersAffectMassCenter_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_layersAffectMassCenter_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_layersAffectMassCenter_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_layersAffectMassCenter_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Animator::get_leftFeetBottomHeight_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_leftFeetBottomHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Animator::get_rightFeetBottomHeight_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_rightFeetBottomHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Animator::get_supportsOnAnimatorMove_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_supportsOnAnimatorMove_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::OnUpdateModeChanged_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "OnUpdateModeChanged_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::OnCullingModeChanged_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "OnCullingModeChanged_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::WriteDefaultPose_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "WriteDefaultPose_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::Update_Injected(::System::IntPtr _unity_self, float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Update_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, deltaTime);
}
inline void UnityEngine::Animator::Rebind_Injected(::System::IntPtr _unity_self, bool writeDefaultValues) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "Rebind_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, writeDefaultValues);
}
inline void UnityEngine::Animator::ApplyBuiltinRootMotion_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "ApplyBuiltinRootMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::EvaluateController_Injected(::System::IntPtr _unity_self, float_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "EvaluateController_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, deltaTime);
}
inline void UnityEngine::Animator::GetAnimatorStateName_Injected(::System::IntPtr _unity_self, int32_t layerIndex, bool current, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "GetAnimatorStateName_Injected",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, layerIndex, current, ret);
}
inline void UnityEngine::Animator::ResolveHash_Injected(::System::IntPtr _unity_self, int32_t hash, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(),
                          { "ResolveHash_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, hash, ret);
}
inline bool UnityEngine::Animator::get_logWarnings_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_logWarnings_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_logWarnings_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_logWarnings_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Animator::get_fireEvents_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_fireEvents_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_fireEvents_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_fireEvents_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Animator::get_keepAnimatorStateOnDisable_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_keepAnimatorStateOnDisable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_keepAnimatorStateOnDisable_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_keepAnimatorStateOnDisable_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Animator::get_writeDefaultValuesOnDisable_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "get_writeDefaultValuesOnDisable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Animator::set_writeDefaultValuesOnDisable_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Animator*>(), { "set_writeDefaultValuesOnDisable_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Animator* UnityEngine::Animator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Animator*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Animator::Animator() {}

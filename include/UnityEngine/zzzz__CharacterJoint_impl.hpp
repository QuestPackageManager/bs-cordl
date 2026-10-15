#pragma once
// IWYU pragma private; include "UnityEngine/CharacterJoint.hpp"
#include "UnityEngine/zzzz__Joint_impl.hpp"
#include "UnityEngine/zzzz__CharacterJoint_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__SoftJointLimitSpring_def.hpp"
#include "UnityEngine/zzzz__SoftJointLimit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_swingAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::CharacterJoint::*)()>(&::UnityEngine::CharacterJoint::get_swingAxis)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x7025d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_swingAxis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_swingAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CharacterJoint::*)(::UnityEngine::Vector3)>(&::UnityEngine::CharacterJoint::set_swingAxis)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7025e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_swingAxis", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_twistLimitSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimitSpring (::UnityEngine::CharacterJoint::*)()>(&::UnityEngine::CharacterJoint::get_twistLimitSpring)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7025ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_twistLimitSpring", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_twistLimitSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CharacterJoint::*)(::UnityEngine::SoftJointLimitSpring)>(&::UnityEngine::CharacterJoint::set_twistLimitSpring)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7025fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_twistLimitSpring", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimitSpring>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_swingLimitSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimitSpring (::UnityEngine::CharacterJoint::*)()>(&::UnityEngine::CharacterJoint::get_swingLimitSpring)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x70260a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_swingLimitSpring", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_swingLimitSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CharacterJoint::*)(::UnityEngine::SoftJointLimitSpring)>(&::UnityEngine::CharacterJoint::set_swingLimitSpring)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7026184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_swingLimitSpring", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimitSpring>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_lowTwistLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimit (::UnityEngine::CharacterJoint::*)()>(&::UnityEngine::CharacterJoint::get_lowTwistLimit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x702625c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_lowTwistLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_lowTwistLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CharacterJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::CharacterJoint::set_lowTwistLimit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7026340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_lowTwistLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_highTwistLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimit (::UnityEngine::CharacterJoint::*)()>(&::UnityEngine::CharacterJoint::get_highTwistLimit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x702641c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_highTwistLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_highTwistLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CharacterJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::CharacterJoint::set_highTwistLimit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7026500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_highTwistLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_swing1Limit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimit (::UnityEngine::CharacterJoint::*)()>(&::UnityEngine::CharacterJoint::get_swing1Limit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x70265dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_swing1Limit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_swing1Limit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CharacterJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::CharacterJoint::set_swing1Limit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x70266c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_swing1Limit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_swing2Limit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimit (::UnityEngine::CharacterJoint::*)()>(&::UnityEngine::CharacterJoint::get_swing2Limit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x702679c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_swing2Limit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_swing2Limit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CharacterJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::CharacterJoint::set_swing2Limit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7026880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_swing2Limit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_enableProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::CharacterJoint::*)()>(&::UnityEngine::CharacterJoint::get_enableProjection)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x702695c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_enableProjection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_enableProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CharacterJoint::*)(bool)>(&::UnityEngine::CharacterJoint::set_enableProjection)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7026a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_enableProjection", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_projectionDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::CharacterJoint::*)()>(&::UnityEngine::CharacterJoint::get_projectionDistance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7026aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_projectionDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_projectionDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CharacterJoint::*)(float_t)>(&::UnityEngine::CharacterJoint::set_projectionDistance)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7026ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_projectionDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_projectionAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::CharacterJoint::*)()>(&::UnityEngine::CharacterJoint::get_projectionAngle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7026c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_projectionAngle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_projectionAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CharacterJoint::*)(float_t)>(&::UnityEngine::CharacterJoint::set_projectionAngle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7026d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_projectionAngle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CharacterJoint::*)()>(&::UnityEngine::CharacterJoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7026e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_swingAxis_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::CharacterJoint::get_swingAxis_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7025dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                             { "get_swingAxis_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_swingAxis_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3 const>)>(&::UnityEngine::CharacterJoint::set_swingAxis_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7025eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                             { "set_swingAxis_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_twistLimitSpring_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimitSpring>)>(&::UnityEngine::CharacterJoint::get_twistLimitSpring_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7025f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                { "get_twistLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_twistLimitSpring_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimitSpring const>)>(
    &::UnityEngine::CharacterJoint::set_twistLimitSpring_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7026064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                         { "set_twistLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_swingLimitSpring_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimitSpring>)>(&::UnityEngine::CharacterJoint::get_swingLimitSpring_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7026140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                { "get_swingLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_swingLimitSpring_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimitSpring const>)>(
    &::UnityEngine::CharacterJoint::set_swingLimitSpring_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7026218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                         { "set_swingLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_lowTwistLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::CharacterJoint::get_lowTwistLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x70262fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                             { "get_lowTwistLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_lowTwistLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit const>)>(&::UnityEngine::CharacterJoint::set_lowTwistLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x70263d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                { "set_lowTwistLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_highTwistLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::CharacterJoint::get_highTwistLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x70264bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                { "get_highTwistLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_highTwistLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit const>)>(&::UnityEngine::CharacterJoint::set_highTwistLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7026598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                { "set_highTwistLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_swing1Limit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::CharacterJoint::get_swing1Limit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x702667c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                             { "get_swing1Limit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_swing1Limit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit const>)>(&::UnityEngine::CharacterJoint::set_swing1Limit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7026758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                { "set_swing1Limit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_swing2Limit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::CharacterJoint::get_swing2Limit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x702683c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                             { "get_swing2Limit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_swing2Limit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit const>)>(&::UnityEngine::CharacterJoint::set_swing2Limit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7026918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                { "set_swing2Limit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_enableProjection_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::CharacterJoint::get_enableProjection_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x70269dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_enableProjection_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_enableProjection_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::CharacterJoint::set_enableProjection_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7026aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_enableProjection_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_projectionDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::CharacterJoint::get_projectionDistance_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7026b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_projectionDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_projectionDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::CharacterJoint::set_projectionDistance_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7026c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_projectionDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.get_projectionAngle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::CharacterJoint::get_projectionAngle_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7026d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_projectionAngle_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CharacterJoint.set_projectionAngle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::CharacterJoint::set_projectionAngle_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x7026dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                                                           { "set_projectionAngle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::CharacterJoint::get_swingAxis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_swingAxis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::CharacterJoint::set_swingAxis(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_swingAxis", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimitSpring UnityEngine::CharacterJoint::get_twistLimitSpring() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_twistLimitSpring", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimitSpring>(this, ___internal_method);
}
inline void UnityEngine::CharacterJoint::set_twistLimitSpring(::UnityEngine::SoftJointLimitSpring value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_twistLimitSpring", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimitSpring>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimitSpring UnityEngine::CharacterJoint::get_swingLimitSpring() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_swingLimitSpring", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimitSpring>(this, ___internal_method);
}
inline void UnityEngine::CharacterJoint::set_swingLimitSpring(::UnityEngine::SoftJointLimitSpring value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_swingLimitSpring", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimitSpring>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimit UnityEngine::CharacterJoint::get_lowTwistLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_lowTwistLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimit>(this, ___internal_method);
}
inline void UnityEngine::CharacterJoint::set_lowTwistLimit(::UnityEngine::SoftJointLimit value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_lowTwistLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimit UnityEngine::CharacterJoint::get_highTwistLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_highTwistLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimit>(this, ___internal_method);
}
inline void UnityEngine::CharacterJoint::set_highTwistLimit(::UnityEngine::SoftJointLimit value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_highTwistLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimit UnityEngine::CharacterJoint::get_swing1Limit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_swing1Limit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimit>(this, ___internal_method);
}
inline void UnityEngine::CharacterJoint::set_swing1Limit(::UnityEngine::SoftJointLimit value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_swing1Limit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimit UnityEngine::CharacterJoint::get_swing2Limit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_swing2Limit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimit>(this, ___internal_method);
}
inline void UnityEngine::CharacterJoint::set_swing2Limit(::UnityEngine::SoftJointLimit value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_swing2Limit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::CharacterJoint::get_enableProjection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_enableProjection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::CharacterJoint::set_enableProjection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_enableProjection", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::CharacterJoint::get_projectionDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_projectionDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::CharacterJoint::set_projectionDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_projectionDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::CharacterJoint::get_projectionAngle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_projectionAngle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::CharacterJoint::set_projectionAngle(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_projectionAngle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::CharacterJoint::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::CharacterJoint::get_swingAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                           { "get_swingAxis_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::CharacterJoint::set_swingAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                           { "set_swingAxis_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::CharacterJoint::get_twistLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                              { "get_twistLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::CharacterJoint::set_twistLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring const> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                              { "set_twistLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::CharacterJoint::get_swingLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                              { "get_swingLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::CharacterJoint::set_swingLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring const> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                              { "set_swingLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::CharacterJoint::get_lowTwistLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                           { "get_lowTwistLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::CharacterJoint::set_lowTwistLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit const> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                              { "set_lowTwistLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::CharacterJoint::get_highTwistLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                           { "get_highTwistLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::CharacterJoint::set_highTwistLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit const> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                              { "set_highTwistLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::CharacterJoint::get_swing1Limit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                           { "get_swing1Limit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::CharacterJoint::set_swing1Limit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit const> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                              { "set_swing1Limit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::CharacterJoint::get_swing2Limit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                                           { "get_swing2Limit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::CharacterJoint::set_swing2Limit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit const> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(),
                                              { "set_swing2Limit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::CharacterJoint::get_enableProjection_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_enableProjection_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::CharacterJoint::set_enableProjection_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_enableProjection_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::CharacterJoint::get_projectionDistance_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_projectionDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::CharacterJoint::set_projectionDistance_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_projectionDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::CharacterJoint::get_projectionAngle_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "get_projectionAngle_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::CharacterJoint::set_projectionAngle_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::CharacterJoint*>(), { "set_projectionAngle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::CharacterJoint* UnityEngine::CharacterJoint::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CharacterJoint*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::CharacterJoint::CharacterJoint() {}

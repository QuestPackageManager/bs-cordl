#pragma once
// IWYU pragma private; include "UnityEngine\ConfigurableJoint.hpp"
#include "UnityEngine/zzzz__Joint_impl.hpp"
#include "UnityEngine/zzzz__ConfigurableJoint_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__ConfigurableJointMotion_def.hpp"
#include "UnityEngine/zzzz__JointDrive_def.hpp"
#include "UnityEngine/zzzz__JointProjectionMode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RotationDriveMode_def.hpp"
#include "UnityEngine/zzzz__SoftJointLimitSpring_def.hpp"
#include "UnityEngine/zzzz__SoftJointLimit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_secondaryAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_secondaryAxis)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b7ff64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_secondaryAxis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_secondaryAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::Vector3)>(&::UnityEngine::ConfigurableJoint::set_secondaryAxis)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b80048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_secondaryAxis", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_xMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ConfigurableJointMotion (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_xMotion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b80124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_xMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_xMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_xMotion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b801e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_xMotion", {}, { ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_yMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ConfigurableJointMotion (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_yMotion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b802b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_yMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_yMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_yMotion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b80370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_yMotion", {}, { ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_zMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ConfigurableJointMotion (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_zMotion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b80444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_zMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_zMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_zMotion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b80500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_zMotion", {}, { ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularXMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ConfigurableJointMotion (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_angularXMotion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b805d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularXMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularXMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_angularXMotion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b80690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularXMotion", {}, { ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularYMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ConfigurableJointMotion (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_angularYMotion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b80764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularYMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_angularYMotion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b80820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularYMotion", {}, { ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularZMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ConfigurableJointMotion (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_angularZMotion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b808f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularZMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularZMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_angularZMotion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b809b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularZMotion", {}, { ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_linearLimitSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimitSpring (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_linearLimitSpring)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b80a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_linearLimitSpring", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_linearLimitSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimitSpring)>(&::UnityEngine::ConfigurableJoint::set_linearLimitSpring)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b80b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_linearLimitSpring", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimitSpring>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularXLimitSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimitSpring (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_angularXLimitSpring)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b80c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularXLimitSpring", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularXLimitSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimitSpring)>(&::UnityEngine::ConfigurableJoint::set_angularXLimitSpring)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b80d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularXLimitSpring", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimitSpring>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularYZLimitSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimitSpring (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_angularYZLimitSpring)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b80dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYZLimitSpring", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularYZLimitSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimitSpring)>(&::UnityEngine::ConfigurableJoint::set_angularYZLimitSpring)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b80ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularYZLimitSpring", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimitSpring>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_linearLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimit (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_linearLimit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b80fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_linearLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_linearLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::ConfigurableJoint::set_linearLimit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b81084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_linearLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_lowAngularXLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimit (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_lowAngularXLimit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b81160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_lowAngularXLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_lowAngularXLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::ConfigurableJoint::set_lowAngularXLimit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b81244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_lowAngularXLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_highAngularXLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimit (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_highAngularXLimit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b81320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_highAngularXLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_highAngularXLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::ConfigurableJoint::set_highAngularXLimit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b81404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_highAngularXLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularYLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimit (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_angularYLimit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b814e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularYLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::ConfigurableJoint::set_angularYLimit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b815c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularYLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularZLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SoftJointLimit (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_angularZLimit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b816a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularZLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularZLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::ConfigurableJoint::set_angularZLimit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b81784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularZLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_targetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_targetPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b81860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_targetPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_targetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::Vector3)>(&::UnityEngine::ConfigurableJoint::set_targetPosition)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b81944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_targetPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_targetVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_targetVelocity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b81a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_targetVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_targetVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::Vector3)>(&::UnityEngine::ConfigurableJoint::set_targetVelocity)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b81b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_targetVelocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_xDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::JointDrive (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_xDrive)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b81be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_xDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_xDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointDrive)>(&::UnityEngine::ConfigurableJoint::set_xDrive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b81cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_xDrive", {}, { ::i2c::type_of<::UnityEngine::JointDrive>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_yDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::JointDrive (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_yDrive)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b81d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_yDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_yDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointDrive)>(&::UnityEngine::ConfigurableJoint::set_yDrive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b81e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_yDrive", {}, { ::i2c::type_of<::UnityEngine::JointDrive>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_zDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::JointDrive (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_zDrive)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b81f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_zDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_zDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointDrive)>(&::UnityEngine::ConfigurableJoint::set_zDrive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b82024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_zDrive", {}, { ::i2c::type_of<::UnityEngine::JointDrive>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_targetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_targetRotation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b820fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_targetRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_targetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::Quaternion)>(&::UnityEngine::ConfigurableJoint::set_targetRotation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b821dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_targetRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_targetAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_targetAngularVelocity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b822b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_targetAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_targetAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::Vector3)>(&::UnityEngine::ConfigurableJoint::set_targetAngularVelocity)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b8239c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_targetAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_rotationDriveMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RotationDriveMode (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_rotationDriveMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b82478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_rotationDriveMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_rotationDriveMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::RotationDriveMode)>(&::UnityEngine::ConfigurableJoint::set_rotationDriveMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b82534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_rotationDriveMode", {}, { ::i2c::type_of<::UnityEngine::RotationDriveMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularXDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::JointDrive (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_angularXDrive)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b82608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularXDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularXDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointDrive)>(&::UnityEngine::ConfigurableJoint::set_angularXDrive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b826e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularXDrive", {}, { ::i2c::type_of<::UnityEngine::JointDrive>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularYZDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::JointDrive (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_angularYZDrive)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b827bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYZDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularYZDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointDrive)>(&::UnityEngine::ConfigurableJoint::set_angularYZDrive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b82898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularYZDrive", {}, { ::i2c::type_of<::UnityEngine::JointDrive>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_slerpDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::JointDrive (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_slerpDrive)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b82970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_slerpDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_slerpDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointDrive)>(&::UnityEngine::ConfigurableJoint::set_slerpDrive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b82a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_slerpDrive", {}, { ::i2c::type_of<::UnityEngine::JointDrive>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_projectionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::JointProjectionMode (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_projectionMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b82b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_projectionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointProjectionMode)>(&::UnityEngine::ConfigurableJoint::set_projectionMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b82be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_projectionMode", {}, { ::i2c::type_of<::UnityEngine::JointProjectionMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_projectionDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_projectionDistance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b82cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_projectionDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(float_t)>(&::UnityEngine::ConfigurableJoint::set_projectionDistance)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b82d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_projectionDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_projectionAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_projectionAngle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b82e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionAngle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_projectionAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(float_t)>(&::UnityEngine::ConfigurableJoint::set_projectionAngle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b82f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_projectionAngle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_configuredInWorldSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_configuredInWorldSpace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b82fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_configuredInWorldSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_configuredInWorldSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(bool)>(&::UnityEngine::ConfigurableJoint::set_configuredInWorldSpace)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b830a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_configuredInWorldSpace", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_swapBodies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::get_swapBodies)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b83174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_swapBodies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_swapBodies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(bool)>(&::UnityEngine::ConfigurableJoint::set_swapBodies)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b83230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_swapBodies", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b83304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_secondaryAxis_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ConfigurableJoint::get_secondaryAxis_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b80004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "get_secondaryAxis_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_secondaryAxis_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ConfigurableJoint::set_secondaryAxis_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b800e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_secondaryAxis_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_xMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ConfigurableJointMotion (*)(::System::IntPtr)>(&::UnityEngine::ConfigurableJoint::get_xMotion_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b801a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_xMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_xMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_xMotion_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b80270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_xMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_yMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ConfigurableJointMotion (*)(::System::IntPtr)>(&::UnityEngine::ConfigurableJoint::get_yMotion_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b80334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_yMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_yMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_yMotion_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b80400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_yMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_zMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ConfigurableJointMotion (*)(::System::IntPtr)>(&::UnityEngine::ConfigurableJoint::get_zMotion_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b804c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_zMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_zMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_zMotion_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b80590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_zMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularXMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ConfigurableJointMotion (*)(::System::IntPtr)>(&::UnityEngine::ConfigurableJoint::get_angularXMotion_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b80654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularXMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularXMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_angularXMotion_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b80720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_angularXMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularYMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ConfigurableJointMotion (*)(::System::IntPtr)>(&::UnityEngine::ConfigurableJoint::get_angularYMotion_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b807e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularYMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_angularYMotion_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b808b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_angularYMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularZMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ConfigurableJointMotion (*)(::System::IntPtr)>(&::UnityEngine::ConfigurableJoint::get_angularZMotion_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b80974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularZMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularZMotion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_angularZMotion_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b80a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_angularZMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_linearLimitSpring_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimitSpring>)>(&::UnityEngine::ConfigurableJoint::get_linearLimitSpring_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b80b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                { "get_linearLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_linearLimitSpring_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimitSpring>)>(&::UnityEngine::ConfigurableJoint::set_linearLimitSpring_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b80bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                { "set_linearLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularXLimitSpring_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimitSpring>)>(
    &::UnityEngine::ConfigurableJoint::get_angularXLimitSpring_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b80cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                { "get_angularXLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularXLimitSpring_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimitSpring>)>(
    &::UnityEngine::ConfigurableJoint::set_angularXLimitSpring_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b80da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                { "set_angularXLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularYZLimitSpring_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimitSpring>)>(
    &::UnityEngine::ConfigurableJoint::get_angularYZLimitSpring_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b80e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                { "get_angularYZLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularYZLimitSpring_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimitSpring>)>(
    &::UnityEngine::ConfigurableJoint::set_angularYZLimitSpring_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b80f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                { "set_angularYZLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_linearLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::ConfigurableJoint::get_linearLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b81040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "get_linearLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_linearLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::ConfigurableJoint::set_linearLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b8111c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_linearLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_lowAngularXLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::ConfigurableJoint::get_lowAngularXLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b81200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                { "get_lowAngularXLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_lowAngularXLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::ConfigurableJoint::set_lowAngularXLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b812dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                { "set_lowAngularXLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_highAngularXLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::ConfigurableJoint::get_highAngularXLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b813c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                { "get_highAngularXLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_highAngularXLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::ConfigurableJoint::set_highAngularXLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b8149c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                { "set_highAngularXLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularYLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::ConfigurableJoint::get_angularYLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b81580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "get_angularYLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularYLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::ConfigurableJoint::set_angularYLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b8165c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_angularYLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularZLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::ConfigurableJoint::get_angularZLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b81740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "get_angularZLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularZLimit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SoftJointLimit>)>(&::UnityEngine::ConfigurableJoint::set_angularZLimit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b8181c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_angularZLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_targetPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ConfigurableJoint::get_targetPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b81900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "get_targetPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_targetPosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ConfigurableJoint::set_targetPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b819dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_targetPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_targetVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ConfigurableJoint::get_targetVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b81ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "get_targetVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_targetVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ConfigurableJoint::set_targetVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b81b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_targetVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_xDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::JointDrive>)>(&::UnityEngine::ConfigurableJoint::get_xDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b81c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "get_xDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_xDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::JointDrive>)>(&::UnityEngine::ConfigurableJoint::set_xDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b81d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_xDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_yDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::JointDrive>)>(&::UnityEngine::ConfigurableJoint::get_yDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b81e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "get_yDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_yDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::JointDrive>)>(&::UnityEngine::ConfigurableJoint::set_yDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b81f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_yDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_zDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::JointDrive>)>(&::UnityEngine::ConfigurableJoint::get_zDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b81fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "get_zDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_zDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::JointDrive>)>(&::UnityEngine::ConfigurableJoint::set_zDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b820b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_zDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_targetRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::ConfigurableJoint::get_targetRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b82198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "get_targetRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_targetRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::ConfigurableJoint::set_targetRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b82274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_targetRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_targetAngularVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ConfigurableJoint::get_targetAngularVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b82358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                { "get_targetAngularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_targetAngularVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ConfigurableJoint::set_targetAngularVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b82434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                { "set_targetAngularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_rotationDriveMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RotationDriveMode (*)(::System::IntPtr)>(&::UnityEngine::ConfigurableJoint::get_rotationDriveMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b824f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_rotationDriveMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_rotationDriveMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::RotationDriveMode)>(&::UnityEngine::ConfigurableJoint::set_rotationDriveMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b825c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_rotationDriveMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RotationDriveMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularXDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::JointDrive>)>(&::UnityEngine::ConfigurableJoint::get_angularXDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b826a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "get_angularXDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularXDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::JointDrive>)>(&::UnityEngine::ConfigurableJoint::set_angularXDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b82778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_angularXDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_angularYZDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::JointDrive>)>(&::UnityEngine::ConfigurableJoint::get_angularYZDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b82854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "get_angularYZDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularYZDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::JointDrive>)>(&::UnityEngine::ConfigurableJoint::set_angularYZDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b8292c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_angularYZDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_slerpDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::JointDrive>)>(&::UnityEngine::ConfigurableJoint::get_slerpDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b82a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "get_slerpDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_slerpDrive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::JointDrive>)>(&::UnityEngine::ConfigurableJoint::set_slerpDrive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b82ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_slerpDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_projectionMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::JointProjectionMode (*)(::System::IntPtr)>(&::UnityEngine::ConfigurableJoint::get_projectionMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b82ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_projectionMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::JointProjectionMode)>(&::UnityEngine::ConfigurableJoint::set_projectionMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b82c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                             { "set_projectionMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::JointProjectionMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_projectionDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ConfigurableJoint::get_projectionDistance_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b82d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_projectionDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ConfigurableJoint::set_projectionDistance_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b82e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_projectionDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_projectionAngle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ConfigurableJoint::get_projectionAngle_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b82ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionAngle_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_projectionAngle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ConfigurableJoint::set_projectionAngle_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b82f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                                                           { "set_projectionAngle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_configuredInWorldSpace_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ConfigurableJoint::get_configuredInWorldSpace_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b83064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_configuredInWorldSpace_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_configuredInWorldSpace_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ConfigurableJoint::set_configuredInWorldSpace_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b83130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_configuredInWorldSpace_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_swapBodies_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ConfigurableJoint::get_swapBodies_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b831f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_swapBodies_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_swapBodies_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ConfigurableJoint::set_swapBodies_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b832c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_swapBodies_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::ConfigurableJoint::get_secondaryAxis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_secondaryAxis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_secondaryAxis(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_secondaryAxis", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJoint::get_xMotion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_xMotion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ConfigurableJointMotion>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_xMotion(::UnityEngine::ConfigurableJointMotion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_xMotion", {}, { ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJoint::get_yMotion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_yMotion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ConfigurableJointMotion>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_yMotion(::UnityEngine::ConfigurableJointMotion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_yMotion", {}, { ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJoint::get_zMotion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_zMotion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ConfigurableJointMotion>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_zMotion(::UnityEngine::ConfigurableJointMotion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_zMotion", {}, { ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJoint::get_angularXMotion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularXMotion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ConfigurableJointMotion>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_angularXMotion(::UnityEngine::ConfigurableJointMotion value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularXMotion", {}, { ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJoint::get_angularYMotion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYMotion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ConfigurableJointMotion>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_angularYMotion(::UnityEngine::ConfigurableJointMotion value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularYMotion", {}, { ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJoint::get_angularZMotion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularZMotion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ConfigurableJointMotion>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_angularZMotion(::UnityEngine::ConfigurableJointMotion value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularZMotion", {}, { ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimitSpring UnityEngine::ConfigurableJoint::get_linearLimitSpring() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_linearLimitSpring", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimitSpring>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_linearLimitSpring(::UnityEngine::SoftJointLimitSpring value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_linearLimitSpring", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimitSpring>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimitSpring UnityEngine::ConfigurableJoint::get_angularXLimitSpring() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularXLimitSpring", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimitSpring>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_angularXLimitSpring(::UnityEngine::SoftJointLimitSpring value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularXLimitSpring", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimitSpring>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimitSpring UnityEngine::ConfigurableJoint::get_angularYZLimitSpring() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYZLimitSpring", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimitSpring>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_angularYZLimitSpring(::UnityEngine::SoftJointLimitSpring value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularYZLimitSpring", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimitSpring>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimit UnityEngine::ConfigurableJoint::get_linearLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_linearLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimit>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_linearLimit(::UnityEngine::SoftJointLimit value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_linearLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimit UnityEngine::ConfigurableJoint::get_lowAngularXLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_lowAngularXLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimit>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_lowAngularXLimit(::UnityEngine::SoftJointLimit value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_lowAngularXLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimit UnityEngine::ConfigurableJoint::get_highAngularXLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_highAngularXLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimit>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_highAngularXLimit(::UnityEngine::SoftJointLimit value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_highAngularXLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimit UnityEngine::ConfigurableJoint::get_angularYLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimit>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_angularYLimit(::UnityEngine::SoftJointLimit value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularYLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SoftJointLimit UnityEngine::ConfigurableJoint::get_angularZLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularZLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SoftJointLimit>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_angularZLimit(::UnityEngine::SoftJointLimit value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularZLimit", {}, { ::i2c::type_of<::UnityEngine::SoftJointLimit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ConfigurableJoint::get_targetPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_targetPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_targetPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_targetPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ConfigurableJoint::get_targetVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_targetVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_targetVelocity(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_targetVelocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::JointDrive UnityEngine::ConfigurableJoint::get_xDrive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_xDrive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::JointDrive>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_xDrive(::UnityEngine::JointDrive value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_xDrive", {}, { ::i2c::type_of<::UnityEngine::JointDrive>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::JointDrive UnityEngine::ConfigurableJoint::get_yDrive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_yDrive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::JointDrive>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_yDrive(::UnityEngine::JointDrive value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_yDrive", {}, { ::i2c::type_of<::UnityEngine::JointDrive>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::JointDrive UnityEngine::ConfigurableJoint::get_zDrive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_zDrive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::JointDrive>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_zDrive(::UnityEngine::JointDrive value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_zDrive", {}, { ::i2c::type_of<::UnityEngine::JointDrive>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::ConfigurableJoint::get_targetRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_targetRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_targetRotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_targetRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ConfigurableJoint::get_targetAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_targetAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_targetAngularVelocity(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_targetAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RotationDriveMode UnityEngine::ConfigurableJoint::get_rotationDriveMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_rotationDriveMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RotationDriveMode>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_rotationDriveMode(::UnityEngine::RotationDriveMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_rotationDriveMode", {}, { ::i2c::type_of<::UnityEngine::RotationDriveMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::JointDrive UnityEngine::ConfigurableJoint::get_angularXDrive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularXDrive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::JointDrive>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_angularXDrive(::UnityEngine::JointDrive value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularXDrive", {}, { ::i2c::type_of<::UnityEngine::JointDrive>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::JointDrive UnityEngine::ConfigurableJoint::get_angularYZDrive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYZDrive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::JointDrive>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_angularYZDrive(::UnityEngine::JointDrive value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_angularYZDrive", {}, { ::i2c::type_of<::UnityEngine::JointDrive>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::JointDrive UnityEngine::ConfigurableJoint::get_slerpDrive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_slerpDrive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::JointDrive>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_slerpDrive(::UnityEngine::JointDrive value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_slerpDrive", {}, { ::i2c::type_of<::UnityEngine::JointDrive>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::JointProjectionMode UnityEngine::ConfigurableJoint::get_projectionMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::JointProjectionMode>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_projectionMode(::UnityEngine::JointProjectionMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_projectionMode", {}, { ::i2c::type_of<::UnityEngine::JointProjectionMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ConfigurableJoint::get_projectionDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_projectionDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_projectionDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ConfigurableJoint::get_projectionAngle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionAngle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_projectionAngle(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_projectionAngle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ConfigurableJoint::get_configuredInWorldSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_configuredInWorldSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_configuredInWorldSpace(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_configuredInWorldSpace", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ConfigurableJoint::get_swapBodies() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_swapBodies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::set_swapBodies(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_swapBodies", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ConfigurableJoint::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ConfigurableJoint::get_secondaryAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_secondaryAxis_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_secondaryAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_secondaryAxis_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJoint::get_xMotion_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_xMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ConfigurableJointMotion>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ConfigurableJoint::set_xMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_xMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJoint::get_yMotion_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_yMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ConfigurableJointMotion>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ConfigurableJoint::set_yMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_yMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJoint::get_zMotion_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_zMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ConfigurableJointMotion>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ConfigurableJoint::set_zMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_zMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJoint::get_angularXMotion_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularXMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ConfigurableJointMotion>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ConfigurableJoint::set_angularXMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_angularXMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJoint::get_angularYMotion_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ConfigurableJointMotion>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ConfigurableJoint::set_angularYMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_angularYMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJoint::get_angularZMotion_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularZMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ConfigurableJointMotion>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ConfigurableJoint::set_angularZMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_angularZMotion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ConfigurableJointMotion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_linearLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                              { "get_linearLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_linearLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                              { "set_linearLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_angularXLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                              { "get_angularXLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_angularXLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                              { "set_angularXLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_angularYZLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                              { "get_angularYZLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_angularYZLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                              { "set_angularYZLimitSpring_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimitSpring>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_linearLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_linearLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_linearLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_linearLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_lowAngularXLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                              { "get_lowAngularXLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_lowAngularXLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                              { "set_lowAngularXLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_highAngularXLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                              { "get_highAngularXLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_highAngularXLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                              { "set_highAngularXLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_angularYLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_angularYLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_angularYLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_angularYLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_angularZLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_angularZLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_angularZLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_angularZLimit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SoftJointLimit>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_targetPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_targetPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_targetPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_targetPosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_targetVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_targetVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_targetVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_targetVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_xDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_xDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_xDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_xDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_yDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_yDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_yDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_yDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_zDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_zDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_zDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_zDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_targetRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_targetRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_targetRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_targetRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_targetAngularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_targetAngularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_targetAngularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_targetAngularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::RotationDriveMode UnityEngine::ConfigurableJoint::get_rotationDriveMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_rotationDriveMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RotationDriveMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ConfigurableJoint::set_rotationDriveMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::RotationDriveMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_rotationDriveMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RotationDriveMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_angularXDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_angularXDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_angularXDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_angularXDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_angularYZDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_angularYZDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_angularYZDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_angularYZDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ConfigurableJoint::get_slerpDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "get_slerpDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ConfigurableJoint::set_slerpDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_slerpDrive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::JointDrive>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::JointProjectionMode UnityEngine::ConfigurableJoint::get_projectionMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::JointProjectionMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ConfigurableJoint::set_projectionMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::JointProjectionMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                           { "set_projectionMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::JointProjectionMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ConfigurableJoint::get_projectionDistance_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ConfigurableJoint::set_projectionDistance_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_projectionDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ConfigurableJoint::get_projectionAngle_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionAngle_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ConfigurableJoint::set_projectionAngle_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                                                                                         { "set_projectionAngle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ConfigurableJoint::get_configuredInWorldSpace_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_configuredInWorldSpace_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ConfigurableJoint::set_configuredInWorldSpace_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_configuredInWorldSpace_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ConfigurableJoint::get_swapBodies_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_swapBodies_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ConfigurableJoint::set_swapBodies_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "set_swapBodies_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ConfigurableJoint* UnityEngine::ConfigurableJoint::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ConfigurableJoint*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ConfigurableJoint::ConfigurableJoint() {}

#pragma once
// IWYU pragma private; include "UnityEngine/ConfigurableJoint.hpp"
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
  constexpr static std::size_t addrs = 0x6feb89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_secondaryAxis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_secondaryAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::Vector3)>(&::UnityEngine::ConfigurableJoint::set_secondaryAxis)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6feb980;

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
  constexpr static std::size_t addrs = 0x6feba5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_xMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_xMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_xMotion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6febb18;

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
  constexpr static std::size_t addrs = 0x6febbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_yMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_yMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_yMotion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6febca8;

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
  constexpr static std::size_t addrs = 0x6febd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_zMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_zMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_zMotion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6febe38;

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
  constexpr static std::size_t addrs = 0x6febf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularXMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularXMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_angularXMotion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6febfc8;

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
  constexpr static std::size_t addrs = 0x6fec09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularYMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_angularYMotion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fec158;

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
  constexpr static std::size_t addrs = 0x6fec22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularZMotion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularZMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::ConfigurableJointMotion)>(&::UnityEngine::ConfigurableJoint::set_angularZMotion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fec2e8;

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
  constexpr static std::size_t addrs = 0x6fec3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_linearLimitSpring", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_linearLimitSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimitSpring)>(&::UnityEngine::ConfigurableJoint::set_linearLimitSpring)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fec498;

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
  constexpr static std::size_t addrs = 0x6fec570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularXLimitSpring", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularXLimitSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimitSpring)>(&::UnityEngine::ConfigurableJoint::set_angularXLimitSpring)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fec64c;

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
  constexpr static std::size_t addrs = 0x6fec724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYZLimitSpring", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularYZLimitSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimitSpring)>(&::UnityEngine::ConfigurableJoint::set_angularYZLimitSpring)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fec800;

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
  constexpr static std::size_t addrs = 0x6fec8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_linearLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_linearLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::ConfigurableJoint::set_linearLimit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6fec9bc;

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
  constexpr static std::size_t addrs = 0x6feca98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_lowAngularXLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_lowAngularXLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::ConfigurableJoint::set_lowAngularXLimit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6fecb7c;

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
  constexpr static std::size_t addrs = 0x6fecc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_highAngularXLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_highAngularXLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::ConfigurableJoint::set_highAngularXLimit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6fecd3c;

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
  constexpr static std::size_t addrs = 0x6fece18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularYLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::ConfigurableJoint::set_angularYLimit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6fecefc;

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
  constexpr static std::size_t addrs = 0x6fecfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularZLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularZLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::SoftJointLimit)>(&::UnityEngine::ConfigurableJoint::set_angularZLimit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6fed0bc;

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
  constexpr static std::size_t addrs = 0x6fed198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_targetPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_targetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::Vector3)>(&::UnityEngine::ConfigurableJoint::set_targetPosition)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6fed27c;

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
  constexpr static std::size_t addrs = 0x6fed358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_targetVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_targetVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::Vector3)>(&::UnityEngine::ConfigurableJoint::set_targetVelocity)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6fed43c;

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
  constexpr static std::size_t addrs = 0x6fed518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_xDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_xDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointDrive)>(&::UnityEngine::ConfigurableJoint::set_xDrive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fed5f4;

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
  constexpr static std::size_t addrs = 0x6fed6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_yDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_yDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointDrive)>(&::UnityEngine::ConfigurableJoint::set_yDrive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fed7a8;

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
  constexpr static std::size_t addrs = 0x6fed880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_zDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_zDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointDrive)>(&::UnityEngine::ConfigurableJoint::set_zDrive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fed95c;

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
  constexpr static std::size_t addrs = 0x6feda34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_targetRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_targetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::Quaternion)>(&::UnityEngine::ConfigurableJoint::set_targetRotation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6fedb14;

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
  constexpr static std::size_t addrs = 0x6fedbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_targetAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_targetAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::Vector3)>(&::UnityEngine::ConfigurableJoint::set_targetAngularVelocity)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6fedcd4;

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
  constexpr static std::size_t addrs = 0x6feddb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_rotationDriveMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_rotationDriveMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::RotationDriveMode)>(&::UnityEngine::ConfigurableJoint::set_rotationDriveMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fede6c;

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
  constexpr static std::size_t addrs = 0x6fedf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularXDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularXDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointDrive)>(&::UnityEngine::ConfigurableJoint::set_angularXDrive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fee01c;

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
  constexpr static std::size_t addrs = 0x6fee0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_angularYZDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_angularYZDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointDrive)>(&::UnityEngine::ConfigurableJoint::set_angularYZDrive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fee1d0;

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
  constexpr static std::size_t addrs = 0x6fee2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_slerpDrive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_slerpDrive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointDrive)>(&::UnityEngine::ConfigurableJoint::set_slerpDrive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fee384;

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
  constexpr static std::size_t addrs = 0x6fee45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_projectionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(::UnityEngine::JointProjectionMode)>(&::UnityEngine::ConfigurableJoint::set_projectionMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fee518;

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
  constexpr static std::size_t addrs = 0x6fee5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_projectionDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(float_t)>(&::UnityEngine::ConfigurableJoint::set_projectionDistance)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fee6a8;

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
  constexpr static std::size_t addrs = 0x6fee784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_projectionAngle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_projectionAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(float_t)>(&::UnityEngine::ConfigurableJoint::set_projectionAngle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fee840;

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
  constexpr static std::size_t addrs = 0x6fee91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_configuredInWorldSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_configuredInWorldSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(bool)>(&::UnityEngine::ConfigurableJoint::set_configuredInWorldSpace)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fee9d8;

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
  constexpr static std::size_t addrs = 0x6feeaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { "get_swapBodies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.set_swapBodies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)(bool)>(&::UnityEngine::ConfigurableJoint::set_swapBodies)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6feeb68;

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
  constexpr static std::size_t addrs = 0x6feec3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ConfigurableJoint*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint.get_secondaryAxis_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ConfigurableJoint::get_secondaryAxis_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6feb93c;

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
  constexpr static std::size_t addrs = 0x6feba18;

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
  constexpr static std::size_t addrs = 0x6febadc;

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
  constexpr static std::size_t addrs = 0x6febba8;

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
  constexpr static std::size_t addrs = 0x6febc6c;

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
  constexpr static std::size_t addrs = 0x6febd38;

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
  constexpr static std::size_t addrs = 0x6febdfc;

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
  constexpr static std::size_t addrs = 0x6febec8;

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
  constexpr static std::size_t addrs = 0x6febf8c;

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
  constexpr static std::size_t addrs = 0x6fec058;

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
  constexpr static std::size_t addrs = 0x6fec11c;

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
  constexpr static std::size_t addrs = 0x6fec1e8;

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
  constexpr static std::size_t addrs = 0x6fec2ac;

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
  constexpr static std::size_t addrs = 0x6fec378;

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
  constexpr static std::size_t addrs = 0x6fec454;

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
  constexpr static std::size_t addrs = 0x6fec52c;

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
  constexpr static std::size_t addrs = 0x6fec608;

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
  constexpr static std::size_t addrs = 0x6fec6e0;

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
  constexpr static std::size_t addrs = 0x6fec7bc;

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
  constexpr static std::size_t addrs = 0x6fec894;

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
  constexpr static std::size_t addrs = 0x6fec978;

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
  constexpr static std::size_t addrs = 0x6feca54;

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
  constexpr static std::size_t addrs = 0x6fecb38;

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
  constexpr static std::size_t addrs = 0x6fecc14;

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
  constexpr static std::size_t addrs = 0x6feccf8;

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
  constexpr static std::size_t addrs = 0x6fecdd4;

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
  constexpr static std::size_t addrs = 0x6feceb8;

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
  constexpr static std::size_t addrs = 0x6fecf94;

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
  constexpr static std::size_t addrs = 0x6fed078;

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
  constexpr static std::size_t addrs = 0x6fed154;

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
  constexpr static std::size_t addrs = 0x6fed238;

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
  constexpr static std::size_t addrs = 0x6fed314;

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
  constexpr static std::size_t addrs = 0x6fed3f8;

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
  constexpr static std::size_t addrs = 0x6fed4d4;

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
  constexpr static std::size_t addrs = 0x6fed5b0;

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
  constexpr static std::size_t addrs = 0x6fed688;

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
  constexpr static std::size_t addrs = 0x6fed764;

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
  constexpr static std::size_t addrs = 0x6fed83c;

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
  constexpr static std::size_t addrs = 0x6fed918;

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
  constexpr static std::size_t addrs = 0x6fed9f0;

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
  constexpr static std::size_t addrs = 0x6fedad0;

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
  constexpr static std::size_t addrs = 0x6fedbac;

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
  constexpr static std::size_t addrs = 0x6fedc90;

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
  constexpr static std::size_t addrs = 0x6fedd6c;

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
  constexpr static std::size_t addrs = 0x6fede30;

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
  constexpr static std::size_t addrs = 0x6fedefc;

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
  constexpr static std::size_t addrs = 0x6fedfd8;

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
  constexpr static std::size_t addrs = 0x6fee0b0;

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
  constexpr static std::size_t addrs = 0x6fee18c;

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
  constexpr static std::size_t addrs = 0x6fee264;

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
  constexpr static std::size_t addrs = 0x6fee340;

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
  constexpr static std::size_t addrs = 0x6fee418;

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
  constexpr static std::size_t addrs = 0x6fee4dc;

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
  constexpr static std::size_t addrs = 0x6fee5a8;

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
  constexpr static std::size_t addrs = 0x6fee66c;

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
  constexpr static std::size_t addrs = 0x6fee738;

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
  constexpr static std::size_t addrs = 0x6fee804;

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
  constexpr static std::size_t addrs = 0x6fee8d0;

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
  constexpr static std::size_t addrs = 0x6fee99c;

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
  constexpr static std::size_t addrs = 0x6feea68;

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
  constexpr static std::size_t addrs = 0x6feeb2c;

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
  constexpr static std::size_t addrs = 0x6feebf8;

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

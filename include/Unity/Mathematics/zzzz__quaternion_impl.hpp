#pragma once
// IWYU pragma private; include "Unity\Mathematics\quaternion.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__math_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::quaternion.op_Implicit___UnityEngine__Quaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::Unity::Mathematics::quaternion)>(&::Unity::Mathematics::quaternion::op_Implicit___UnityEngine__Quaternion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6674a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.op_Implicit___Unity__Mathematics__quaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::UnityEngine::Quaternion)>(
    &::Unity::Mathematics::quaternion::op_Implicit___Unity__Mathematics__quaternion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6674a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::quaternion::*)(float_t, float_t, float_t, float_t)>(&::Unity::Mathematics::quaternion::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6674a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::quaternion::*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::quaternion::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6674a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.op_Implicit___Unity__Mathematics__quaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float4)>(
    &::Unity::Mathematics::quaternion::op_Implicit___Unity__Mathematics__quaternion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6674a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::quaternion::*)(::Unity::Mathematics::float3x3)>(&::Unity::Mathematics::quaternion::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6674a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::quaternion::*)(::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::quaternion::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6674c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.AxisAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::quaternion::AxisAngle)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6674dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "AxisAngle", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.EulerXYZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::quaternion::EulerXYZ)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6674edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerXYZ", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.EulerXZY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::quaternion::EulerXZY)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6674f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerXZY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.EulerYXZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::quaternion::EulerYXZ)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6675044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerYXZ", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.EulerYZX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::quaternion::EulerYZX)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66750f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerYZX", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.EulerZXY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::quaternion::EulerZXY)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66751ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerZXY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.EulerZYX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::quaternion::EulerZYX)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6675260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerZYX", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.EulerXYZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::quaternion::EulerXYZ)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6675314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                                                           { "EulerXYZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.EulerXZY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::quaternion::EulerXZY)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66753c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                                                           { "EulerXZY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.EulerYXZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::quaternion::EulerYXZ)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x667547c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                                                           { "EulerYXZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.EulerYZX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::quaternion::EulerYZX)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6675530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                                                           { "EulerYZX", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.EulerZXY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::quaternion::EulerZXY)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66755e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                                                           { "EulerZXY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.EulerZYX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::quaternion::EulerZYX)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6675698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                                                           { "EulerZYX", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.Euler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::math_RotationOrder)>(
    &::Unity::Mathematics::quaternion::Euler)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x667574c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                             { "Euler", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::math_RotationOrder>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.Euler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(float_t, float_t, float_t, ::Unity::Mathematics::math_RotationOrder)>(
    &::Unity::Mathematics::quaternion::Euler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6675b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                            { "Euler", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::math_RotationOrder>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.RotateX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(float_t)>(&::Unity::Mathematics::quaternion::RotateX)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6675b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "RotateX", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.RotateY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(float_t)>(&::Unity::Mathematics::quaternion::RotateY)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6675c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "RotateY", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.RotateZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(float_t)>(&::Unity::Mathematics::quaternion::RotateZ)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6675d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "RotateZ", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.LookRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::quaternion::LookRotation)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6675dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                             { "LookRotation", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.LookRotationSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::quaternion::LookRotationSafe)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x6675ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                             { "LookRotationSafe", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::quaternion::*)(::Unity::Mathematics::quaternion)>(&::Unity::Mathematics::quaternion::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x66761a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::quaternion::*)(::System::Object*)>(&::Unity::Mathematics::quaternion::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x66761e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { ::i2c::class_of<::Unity::Mathematics::quaternion>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::quaternion::*)()>(&::Unity::Mathematics::quaternion::GetHashCode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x667628c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { ::i2c::class_of<::Unity::Mathematics::quaternion>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::quaternion::*)()>(&::Unity::Mathematics::quaternion::ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x66762e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { ::i2c::class_of<::Unity::Mathematics::quaternion>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::quaternion.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::quaternion::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::quaternion::ToString)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6676488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::quaternion::setStaticF_identity(::Unity::Mathematics::quaternion value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::quaternion, "identity", ::Unity::Mathematics::quaternion>(std::forward<::Unity::Mathematics::quaternion>(value));
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::getStaticF_identity() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::quaternion, "identity", ::Unity::Mathematics::quaternion>();
}
inline ::UnityEngine::Quaternion Unity::Mathematics::quaternion::op_Implicit___UnityEngine__Quaternion(::Unity::Mathematics::quaternion q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::op_Implicit___Unity__Mathematics__quaternion(::UnityEngine::Quaternion q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, q);
}
inline void Unity::Mathematics::quaternion::_ctor(float_t x, float_t y, float_t z, float_t w) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z, w);
}
inline void Unity::Mathematics::quaternion::_ctor(::Unity::Mathematics::float4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::op_Implicit___Unity__Mathematics__quaternion(::Unity::Mathematics::float4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, v);
}
inline void Unity::Mathematics::quaternion::_ctor(::Unity::Mathematics::float3x3 m) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m);
}
inline void Unity::Mathematics::quaternion::_ctor(::Unity::Mathematics::float4x4 m) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::AxisAngle(::Unity::Mathematics::float3 axis, float_t angle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "AxisAngle", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, axis, angle);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::EulerXYZ(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerXYZ", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::EulerXZY(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerXZY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::EulerYXZ(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerYXZ", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::EulerYZX(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerYZX", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::EulerZXY(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerZXY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::EulerZYX(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerZYX", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::EulerXYZ(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerXYZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::EulerXZY(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerXZY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::EulerYXZ(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerYXZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::EulerYZX(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerYZX", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::EulerZXY(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerZXY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::EulerZYX(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "EulerZYX", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::Euler(::Unity::Mathematics::float3 xyz, ::Unity::Mathematics::math_RotationOrder order) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                           { "Euler", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::math_RotationOrder>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, xyz, order);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::Euler(float_t x, float_t y, float_t z, ::Unity::Mathematics::math_RotationOrder order) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                          { "Euler", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::math_RotationOrder>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, x, y, z, order);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::RotateX(float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "RotateX", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::RotateY(float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "RotateY", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::RotateZ(float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "RotateZ", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::LookRotation(::Unity::Mathematics::float3 forward, ::Unity::Mathematics::float3 up) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                           { "LookRotation", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, forward, up);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::quaternion::LookRotationSafe(::Unity::Mathematics::float3 forward, ::Unity::Mathematics::float3 up) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(),
                                                           { "LookRotationSafe", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, forward, up);
}
inline bool Unity::Mathematics::quaternion::Equals(::Unity::Mathematics::quaternion x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, x);
}
inline bool Unity::Mathematics::quaternion::Equals(::System::Object* x) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::quaternion>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, x);
}
inline int32_t Unity::Mathematics::quaternion::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::quaternion>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::quaternion::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::quaternion>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::quaternion::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::quaternion>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::quaternion>"
constexpr Unity::Mathematics::quaternion::operator ::System::IEquatable_1<::Unity::Mathematics::quaternion>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::quaternion>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::quaternion>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::quaternion>* Unity::Mathematics::quaternion::i___System__IEquatable_1___Unity__Mathematics__quaternion_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::quaternion>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::Mathematics::quaternion::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::quaternion::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Mathematics::quaternion::quaternion(::Unity::Mathematics::float4 value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::quaternion::quaternion() {}

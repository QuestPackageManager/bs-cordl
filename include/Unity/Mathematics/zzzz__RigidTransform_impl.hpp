#pragma once
// IWYU pragma private; include "Unity/Mathematics/RigidTransform.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "Unity/Mathematics/zzzz__RigidTransform_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__math_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::RigidTransform::*)(::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::RigidTransform::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x46d4874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::quaternion>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::RigidTransform::*)(::Unity::Mathematics::float3x3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::RigidTransform::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x46d4888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::RigidTransform::*)(::Unity::Mathematics::float4x4)>(
    &::Unity::Mathematics::RigidTransform::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x46d48f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.AxisAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3, float_t)>(
    &::Unity::Mathematics::RigidTransform::AxisAngle)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x46d4950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "AxisAngle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerXYZ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::RigidTransform::EulerXYZ)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x46d4a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerXYZ", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerXZY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::RigidTransform::EulerXZY)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x46d4b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerXZY", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerYXZ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::RigidTransform::EulerYXZ)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x46d4c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerYXZ", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerYZX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::RigidTransform::EulerYZX)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x46d4db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerYZX", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerZXY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::RigidTransform::EulerZXY)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x46d4ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerZXY", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerZYX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::RigidTransform::EulerZYX)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x46d4fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerZYX", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerXYZ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t)>(
    &::Unity::Mathematics::RigidTransform::EulerXYZ)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x46d50ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerXYZ", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerXZY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t)>(
    &::Unity::Mathematics::RigidTransform::EulerXZY)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x46d5200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerXZY", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerYXZ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t)>(
    &::Unity::Mathematics::RigidTransform::EulerYXZ)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x46d5314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerYXZ", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerYZX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t)>(
    &::Unity::Mathematics::RigidTransform::EulerYZX)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x46d5428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerYZX", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerZXY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t)>(
    &::Unity::Mathematics::RigidTransform::EulerZXY)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x46d553c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerZXY", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerZYX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t)>(
    &::Unity::Mathematics::RigidTransform::EulerZYX)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x46d5650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerZYX", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.Euler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::math_RotationOrder)>(
    &::Unity::Mathematics::RigidTransform::Euler)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x46d5764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "Euler", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::math_RotationOrder>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.Euler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t, ::Unity::Mathematics::math_RotationOrder)>(
    &::Unity::Mathematics::RigidTransform::Euler)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x46d5cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "Euler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::math_RotationOrder>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.RotateX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t)>(&::Unity::Mathematics::RigidTransform::RotateX)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x46d5ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "RotateX", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.RotateY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t)>(&::Unity::Mathematics::RigidTransform::RotateY)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x46d5de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "RotateY", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.RotateZ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t)>(&::Unity::Mathematics::RigidTransform::RotateZ)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x46d5ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "RotateZ", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.Translate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::RigidTransform::Translate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x46d5ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "Translate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Mathematics::RigidTransform::*)(::Unity::Mathematics::RigidTransform)>(
    &::Unity::Mathematics::RigidTransform::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x46d606c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::RigidTransform>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Mathematics::RigidTransform::*)(::System::Object*)>(&::Unity::Mathematics::RigidTransform::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x46d60e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Mathematics::RigidTransform::*)()>(&::Unity::Mathematics::RigidTransform::GetHashCode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x46d61c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Mathematics::RigidTransform::*)()>(&::Unity::Mathematics::RigidTransform::ToString)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x46d6258;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Mathematics::RigidTransform::*)(::StringW, ::System::IFormatProvider*)>(
    &::Unity::Mathematics::RigidTransform::ToString)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x46d64c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::RigidTransform::setStaticF_identity(::Unity::Mathematics::RigidTransform value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::RigidTransform, "identity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get>(
      std::forward<::Unity::Mathematics::RigidTransform>(value));
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::getStaticF_identity() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::RigidTransform, "identity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get>();
}
inline void Unity::Mathematics::RigidTransform::_ctor(::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 translation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rotation, translation);
}
inline void Unity::Mathematics::RigidTransform::_ctor(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rotation, translation);
}
inline void Unity::Mathematics::RigidTransform::_ctor(::Unity::Mathematics::float4x4 transform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::AxisAngle(::Unity::Mathematics::float3 axis, float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "AxisAngle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, axis, angle);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerXYZ(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerXYZ", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerXZY(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerXZY", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerYXZ(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerYXZ", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerYZX(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerYZX", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerZXY(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerZXY", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerZYX(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerZYX", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerXYZ(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerXYZ", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerXZY(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerXZY", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerYXZ(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerYXZ", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerYZX(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerYZX", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerZXY(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerZXY", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerZYX(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "EulerZYX", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::Euler(::Unity::Mathematics::float3 xyz, ::Unity::Mathematics::math_RotationOrder order) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "Euler", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::math_RotationOrder>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, xyz, order);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::Euler(float_t x, float_t y, float_t z, ::Unity::Mathematics::math_RotationOrder order) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "Euler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::math_RotationOrder>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, x, y, z, order);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::RotateX(float_t angle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "RotateX", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::RotateY(float_t angle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "RotateY", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::RotateZ(float_t angle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "RotateZ", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::Translate(::Unity::Mathematics::float3 vector) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "Translate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform, false>(nullptr, ___internal_method, vector);
}
inline bool Unity::Mathematics::RigidTransform::Equals(::Unity::Mathematics::RigidTransform x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::RigidTransform>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline bool Unity::Mathematics::RigidTransform::Equals(::System::Object* x) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline int32_t Unity::Mathematics::RigidTransform::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Unity::Mathematics::RigidTransform::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Mathematics::RigidTransform::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::RigidTransform>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, format, formatProvider);
}
// Ctor Parameters [CppParam { name: "rot", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "pos", ty: "::Unity::Mathematics::float3", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Mathematics::RigidTransform::RigidTransform(::Unity::Mathematics::quaternion rot, ::Unity::Mathematics::float3 pos) noexcept {
  this->rot = rot;
  this->pos = pos;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::RigidTransform::RigidTransform() {}

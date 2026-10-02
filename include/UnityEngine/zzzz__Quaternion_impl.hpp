#pragma once
// IWYU pragma private; include "UnityEngine/Quaternion.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_FromToRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Quaternion::Internal_FromToRotation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6f29d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                { "Internal_FromToRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.FromToRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Quaternion::FromToRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6f29e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "FromToRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_Inverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Quaternion::Internal_Inverse)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6f29e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_Inverse", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Inverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&::UnityEngine::Quaternion::Inverse)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f29f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Inverse", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_Slerp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>, float_t)>(
    &::UnityEngine::Quaternion::Internal_Slerp)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6f29f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                            { "Internal_Slerp", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_SlerpUnclamped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>, float_t)>(
    &::UnityEngine::Quaternion::Internal_SlerpUnclamped)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6f29ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Quaternion>(),
            { "Internal_SlerpUnclamped", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_Lerp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>, float_t)>(
    &::UnityEngine::Quaternion::Internal_Lerp)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6f2a0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                            { "Internal_Lerp", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Slerp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float_t)>(&::UnityEngine::Quaternion::Slerp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6f2a1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                { "Slerp", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.SlerpUnclamped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float_t)>(&::UnityEngine::Quaternion::SlerpUnclamped)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6f2a1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                { "SlerpUnclamped", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Lerp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float_t)>(&::UnityEngine::Quaternion::Lerp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6f2a214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                             { "Lerp", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.SlerpUnclamped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>, float_t)>(
    &::UnityEngine::Quaternion::SlerpUnclamped)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f2a24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                            { "SlerpUnclamped", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_FromEulerRad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Quaternion::Internal_FromEulerRad)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6f2a250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_FromEulerRad", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_ToEulerRad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Quaternion::Internal_ToEulerRad)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f2a2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_ToEulerRad", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_ToAxisAngleRad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(
    &::UnityEngine::Quaternion::Internal_ToAxisAngleRad)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f2a38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Quaternion>(),
            { "Internal_ToAxisAngleRad", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_AngleAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(float_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Quaternion::Internal_AngleAxis)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f2a3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_AngleAxis", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.AngleAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(float_t, ::UnityEngine::Vector3)>(&::UnityEngine::Quaternion::AngleAxis)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f2a49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "AngleAxis", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_LookRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Quaternion::Internal_LookRotation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6f2a4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                { "Internal_LookRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.LookRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Quaternion::LookRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6f2a574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "LookRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.LookRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Quaternion::LookRotation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f2a5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                             { "LookRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.LookRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3)>(&::UnityEngine::Quaternion::LookRotation)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6f2a5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "LookRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Quaternion::*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::Quaternion::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f2a624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.get_identity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)()>(&::UnityEngine::Quaternion::get_identity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f2a630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "get_identity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::UnityEngine::Quaternion::op_Multiply)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6f2a680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::UnityEngine::Quaternion::op_Multiply)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6f2a6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::UnityEngine::Quaternion::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6f2a798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::UnityEngine::Quaternion::op_Inequality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6f2a7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.IsEqualUsingDot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::UnityEngine::Quaternion::IsEqualUsingDot)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f2a7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "IsEqualUsingDot", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Dot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Quaternion::Dot)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f2a80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                             { "Dot", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.SetLookRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Quaternion::*)(::UnityEngine::Vector3)>(&::UnityEngine::Quaternion::SetLookRotation)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6f2a834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "SetLookRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.SetLookRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Quaternion::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Quaternion::SetLookRotation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f2a8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "SetLookRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.SetLookRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Quaternion::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Quaternion::SetLookRotation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f2a8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                             { "SetLookRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Angle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Quaternion::Angle)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f2a91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                             { "Angle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_MakePositive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::UnityEngine::Quaternion::Internal_MakePositive)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6f2a984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_MakePositive", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.get_eulerAngles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Quaternion::*)()>(&::UnityEngine::Quaternion::get_eulerAngles)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f2aa0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "get_eulerAngles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.set_eulerAngles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Quaternion::*)(::UnityEngine::Vector3)>(&::UnityEngine::Quaternion::set_eulerAngles)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f2aa30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "set_eulerAngles", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Euler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(float_t, float_t, float_t)>(&::UnityEngine::Quaternion::Euler)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f2aa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Euler", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Euler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3)>(&::UnityEngine::Quaternion::Euler)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f2aac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Euler", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.ToAngleAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Quaternion::*)(::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Quaternion::ToAngleAxis)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f2ab08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "ToAngleAxis", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.RotateTowards
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float_t)>(&::UnityEngine::Quaternion::RotateTowards)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6f2ab74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                { "RotateTowards", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Normalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Quaternion::Normalize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6f2ac50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Normalize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Normalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Quaternion::*)()>(&::UnityEngine::Quaternion::Normalize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6f2ad20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Normalize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.get_normalized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Quaternion::*)()>(&::UnityEngine::Quaternion::get_normalized)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6f2ade4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "get_normalized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Quaternion::*)()>(&::UnityEngine::Quaternion::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f2aeb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { ::i2c::class_of<::UnityEngine::Quaternion>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Quaternion::*)(::System::Object*)>(&::UnityEngine::Quaternion::Equals)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6f2af20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { ::i2c::class_of<::UnityEngine::Quaternion>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Quaternion::*)(::UnityEngine::Quaternion)>(&::UnityEngine::Quaternion::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6f2b080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Quaternion::*)(::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Quaternion::Equals)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6f2b174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Equals", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Quaternion::*)()>(&::UnityEngine::Quaternion::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6f2b278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { ::i2c::class_of<::UnityEngine::Quaternion>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Quaternion::*)(::StringW, ::System::IFormatProvider*)>(&::UnityEngine::Quaternion::ToString)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6f2b288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_FromToRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Quaternion::Internal_FromToRotation_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f29de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                            { "Internal_FromToRotation_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_Inverse_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Quaternion::Internal_Inverse_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f29ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                         { "Internal_Inverse_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_Slerp_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>, float_t, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Quaternion::Internal_Slerp_Injected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f29f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_Slerp_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                                                           ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_SlerpUnclamped_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>, float_t, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Quaternion::Internal_SlerpUnclamped_Injected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f2a06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_SlerpUnclamped_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                                                           ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_Lerp_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>, float_t, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Quaternion::Internal_Lerp_Injected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f2a140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_Lerp_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                                                           ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_FromEulerRad_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Quaternion::Internal_FromEulerRad_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f2a2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                         { "Internal_FromEulerRad_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_ToEulerRad_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Quaternion::Internal_ToEulerRad_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f2a348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                         { "Internal_ToEulerRad_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_AngleAxis_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Quaternion::Internal_AngleAxis_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f2a448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Quaternion>(),
            { "Internal_AngleAxis_Injected", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Quaternion.Internal_LookRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Quaternion::Internal_LookRotation_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f2a520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                            { "Internal_LookRotation_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Quaternion::setStaticF_identityQuaternion(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "identityQuaternion", ::UnityEngine::Quaternion>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::getStaticF_identityQuaternion() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "identityQuaternion", ::UnityEngine::Quaternion>();
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Internal_FromToRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> fromDirection,
                                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> toDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                              { "Internal_FromToRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, fromDirection, toDirection);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::FromToRotation(::UnityEngine::Vector3 fromDirection, ::UnityEngine::Vector3 toDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "FromToRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, fromDirection, toDirection);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Internal_Inverse(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_Inverse", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, rotation);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Inverse(::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Inverse", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, rotation);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Internal_Slerp(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> b,
                                                                         float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                          { "Internal_Slerp", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Internal_SlerpUnclamped(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> b,
                                                                                  float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Quaternion>(),
          { "Internal_SlerpUnclamped", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Internal_Lerp(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                          { "Internal_Lerp", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Slerp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                           { "Slerp", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::SlerpUnclamped(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                              { "SlerpUnclamped", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Lerp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                           { "Lerp", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::SlerpUnclamped(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> b,
                                                                         float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                          { "SlerpUnclamped", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Internal_FromEulerRad(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> euler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_FromEulerRad", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, euler);
}
inline ::UnityEngine::Vector3 UnityEngine::Quaternion::Internal_ToEulerRad(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_ToEulerRad", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, rotation);
}
inline void UnityEngine::Quaternion::Internal_ToAxisAngleRad(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> q, ::by_ref<::UnityEngine::Vector3> axis, ::by_ref<float_t> angle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Quaternion>(),
          { "Internal_ToAxisAngleRad", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, q, axis, angle);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Internal_AngleAxis(float_t angle, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> axis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_AngleAxis", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, angle, axis);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::AngleAxis(float_t angle, ::UnityEngine::Vector3 axis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "AngleAxis", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, angle, axis);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Internal_LookRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> forward,
                                                                                /* [IsReadOnly] [DefaultValue("Vector3.up")] */ ::by_ref<::UnityEngine::Vector3> upwards) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                              { "Internal_LookRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, forward, upwards);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::LookRotation(::UnityEngine::Vector3 forward, /* [DefaultValue("Vector3.up")] */ ::UnityEngine::Vector3 upwards) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "LookRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, forward, upwards);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::LookRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> forward,
                                                                       /* [DefaultValue("Vector3.up")] [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> upwards) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                           { "LookRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, forward, upwards);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::LookRotation(::UnityEngine::Vector3 forward) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "LookRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, forward);
}
inline void UnityEngine::Quaternion::_ctor(float_t x, float_t y, float_t z, float_t w) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z, w);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::get_identity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "get_identity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::op_Multiply(::UnityEngine::Quaternion lhs, ::UnityEngine::Quaternion rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::Vector3 UnityEngine::Quaternion::op_Multiply(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 point) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, rotation, point);
}
inline bool UnityEngine::Quaternion::op_Equality(::UnityEngine::Quaternion lhs, ::UnityEngine::Quaternion rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Quaternion::op_Inequality(::UnityEngine::Quaternion lhs, ::UnityEngine::Quaternion rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Quaternion::IsEqualUsingDot(float_t dot) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "IsEqualUsingDot", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dot);
}
inline float_t UnityEngine::Quaternion::Dot(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                           { "Dot", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::Quaternion::SetLookRotation(::UnityEngine::Vector3 view) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "SetLookRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, view);
}
inline void UnityEngine::Quaternion::SetLookRotation(::UnityEngine::Vector3 view, /* [DefaultValue("Vector3.up")] */ ::UnityEngine::Vector3 up) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "SetLookRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, view, up);
}
inline void UnityEngine::Quaternion::SetLookRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> view, /* [IsReadOnly] [DefaultValue("Vector3.up")] */ ::by_ref<::UnityEngine::Vector3> up) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                           { "SetLookRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, view, up);
}
inline float_t UnityEngine::Quaternion::Angle(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                                           { "Angle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector3 UnityEngine::Quaternion::Internal_MakePositive(::UnityEngine::Vector3 euler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_MakePositive", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, euler);
}
inline ::UnityEngine::Vector3 UnityEngine::Quaternion::get_eulerAngles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "get_eulerAngles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::Quaternion::set_eulerAngles(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "set_eulerAngles", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Euler(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Euler", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, x, y, z);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Euler(::UnityEngine::Vector3 euler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Euler", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, euler);
}
inline void UnityEngine::Quaternion::ToAngleAxis(::by_ref<float_t> angle, ::by_ref<::UnityEngine::Vector3> axis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "ToAngleAxis", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, angle, axis);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::RotateTowards(::UnityEngine::Quaternion from, ::UnityEngine::Quaternion to, float_t maxDegreesDelta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                              { "RotateTowards", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, from, to, maxDegreesDelta);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::Normalize(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Normalize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q);
}
inline void UnityEngine::Quaternion::Normalize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Normalize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::Quaternion UnityEngine::Quaternion::get_normalized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "get_normalized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline int32_t UnityEngine::Quaternion::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Quaternion>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Quaternion::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Quaternion>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Quaternion::Equals(::UnityEngine::Quaternion other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Quaternion::Equals(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Equals", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW UnityEngine::Quaternion::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Quaternion>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Quaternion::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline void UnityEngine::Quaternion::Internal_FromToRotation_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> fromDirection,
                                                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> toDirection, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_FromToRotation_Injected",
                                                                                              {},
                                                                                              { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                                ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fromDirection, toDirection, ret);
}
inline void UnityEngine::Quaternion::Internal_Inverse_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> rotation, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                              { "Internal_Inverse_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rotation, ret);
}
inline void UnityEngine::Quaternion::Internal_Slerp_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> b, float_t t,
                                                             ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_Slerp_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                                                         ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, t, ret);
}
inline void UnityEngine::Quaternion::Internal_SlerpUnclamped_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> b, float_t t,
                                                                      ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_SlerpUnclamped_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                                                         ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, t, ret);
}
inline void UnityEngine::Quaternion::Internal_Lerp_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> b, float_t t,
                                                            ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_Lerp_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                                                         ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, t, ret);
}
inline void UnityEngine::Quaternion::Internal_FromEulerRad_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> euler, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                       { "Internal_FromEulerRad_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, euler, ret);
}
inline void UnityEngine::Quaternion::Internal_ToEulerRad_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion> rotation, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(),
                                              { "Internal_ToEulerRad_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rotation, ret);
}
inline void UnityEngine::Quaternion::Internal_AngleAxis_Injected(float_t angle, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> axis, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Quaternion>(),
          { "Internal_AngleAxis_Injected", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, angle, axis, ret);
}
inline void UnityEngine::Quaternion::Internal_LookRotation_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> forward,
                                                                    /* [IsReadOnly] [DefaultValue("Vector3.up")] */ ::by_ref<::UnityEngine::Vector3> upwards, ::by_ref<::UnityEngine::Quaternion> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Quaternion>(), { "Internal_LookRotation_Injected",
                                                                                              {},
                                                                                              { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                                ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, forward, upwards, ret);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Quaternion>"
constexpr UnityEngine::Quaternion::operator ::System::IEquatable_1<::UnityEngine::Quaternion>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Quaternion>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Quaternion>"
constexpr ::System::IEquatable_1<::UnityEngine::Quaternion>* UnityEngine::Quaternion::i___System__IEquatable_1___UnityEngine__Quaternion_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Quaternion>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr UnityEngine::Quaternion::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* UnityEngine::Quaternion::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Quaternion::Quaternion(float_t x, float_t y, float_t z, float_t w) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
  this->w = w;
}
// Ctor Parameters []
constexpr ::UnityEngine::Quaternion::Quaternion() {}

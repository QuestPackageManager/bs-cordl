#pragma once
// IWYU pragma private; include "Unity/Mathematics/float4x4.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__RigidTransform_def.hpp"
#include "Unity/Mathematics/zzzz__bool4x4_def.hpp"
#include "Unity/Mathematics/zzzz__double4x4_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__int4x4_def.hpp"
#include "Unity/Mathematics/zzzz__math_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "Unity/Mathematics/zzzz__uint4x4_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4, ::Unity::Mathematics::float4,
                                                                                                ::Unity::Mathematics::float4)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a88bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor",
                                                                                              {},
                                                                                              { ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(),
                                                                                                ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t,
                                                                                                float_t, float_t, float_t, float_t, float_t)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a88be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(float_t)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a88c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(bool)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6a88c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(::Unity::Mathematics::bool4x4)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a88c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(int32_t)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a88d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(::Unity::Mathematics::int4x4)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a88d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(uint32_t)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a88dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(::Unity::Mathematics::uint4x4)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a88dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(double_t)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a88e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(::Unity::Mathematics::double4x4)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a88e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Implicit___Unity__Mathematics__float4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t)>(&::Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a88eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Explicit___Unity__Mathematics__float4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(bool)>(&::Unity::Mathematics::float4x4::op_Explicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6a88ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Explicit___Unity__Mathematics__float4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::bool4x4)>(
    &::Unity::Mathematics::float4x4::op_Explicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a88ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Implicit___Unity__Mathematics__float4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(int32_t)>(&::Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a88f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Implicit___Unity__Mathematics__float4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::int4x4)>(&::Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a88fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::int4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Implicit___Unity__Mathematics__float4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(uint32_t)>(&::Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a89034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Implicit___Unity__Mathematics__float4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::uint4x4)>(
    &::Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a89048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Explicit___Unity__Mathematics__float4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(double_t)>(&::Unity::Mathematics::float4x4::op_Explicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a890cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Explicit___Unity__Mathematics__float4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::double4x4)>(
    &::Unity::Mathematics::float4x4::op_Explicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a890e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4)>(
    &::Unity::Mathematics::float4x4::op_Multiply)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6a89120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4, float_t)>(&::Unity::Mathematics::float4x4::op_Multiply)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a8914c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, ::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_Multiply)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a89170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Multiply", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4)>(
    &::Unity::Mathematics::float4x4::op_Addition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6a89194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4, float_t)>(&::Unity::Mathematics::float4x4::op_Addition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a891c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, ::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_Addition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a891e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Addition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4)>(
    &::Unity::Mathematics::float4x4::op_Subtraction)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6a89210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4, float_t)>(&::Unity::Mathematics::float4x4::op_Subtraction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8923c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                                                           { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, ::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_Subtraction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a89264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                                                           { "op_Subtraction", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4)>(
    &::Unity::Mathematics::float4x4::op_Division)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6a8928c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4, float_t)>(&::Unity::Mathematics::float4x4::op_Division)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a892b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, ::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_Division)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a892e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Division", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4)>(
    &::Unity::Mathematics::float4x4::op_Modulus)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6a89308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4, float_t)>(&::Unity::Mathematics::float4x4::op_Modulus)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6a894b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, ::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_Modulus)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6a89644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Modulus", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_Increment)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6a897c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Decrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_Decrement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6a897f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4)>(
    &::Unity::Mathematics::float4x4::op_LessThan)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6a89828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(::Unity::Mathematics::float4x4, float_t)>(&::Unity::Mathematics::float4x4::op_LessThan)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6a89934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(float_t, ::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_LessThan)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6a89a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_LessThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4)>(
    &::Unity::Mathematics::float4x4::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6a89b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(::Unity::Mathematics::float4x4, float_t)>(&::Unity::Mathematics::float4x4::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6a89c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(float_t, ::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6a89d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4)>(
    &::Unity::Mathematics::float4x4::op_GreaterThan)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6a89e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(::Unity::Mathematics::float4x4, float_t)>(&::Unity::Mathematics::float4x4::op_GreaterThan)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6a89f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                                                           { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(float_t, ::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_GreaterThan)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6a8a04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                                                           { "op_GreaterThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4)>(
    &::Unity::Mathematics::float4x4::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6a8a14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(::Unity::Mathematics::float4x4, float_t)>(&::Unity::Mathematics::float4x4::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6a8a258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(float_t, ::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6a8a358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a8a458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_UnaryPlus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_UnaryPlus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a8a47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4)>(
    &::Unity::Mathematics::float4x4::op_Equality)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6a8a490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(::Unity::Mathematics::float4x4, float_t)>(&::Unity::Mathematics::float4x4::op_Equality)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6a8a59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(float_t, ::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_Equality)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6a8a69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Equality", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4)>(
    &::Unity::Mathematics::float4x4::op_Inequality)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6a8a79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(::Unity::Mathematics::float4x4, float_t)>(&::Unity::Mathematics::float4x4::op_Inequality)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6a8a8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(float_t, ::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_Inequality)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6a8a9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Inequality", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Mathematics::float4> (::Unity::Mathematics::float4x4::*)(int32_t)>(&::Unity::Mathematics::float4x4::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a8aae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::float4x4::*)(::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::Equals)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6a8aaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::float4x4::*)(::System::Object*)>(&::Unity::Mathematics::float4x4::Equals)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6a8abfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ::i2c::class_of<::Unity::Mathematics::float4x4>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::float4x4::*)()>(&::Unity::Mathematics::float4x4::GetHashCode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6a8ad68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ::i2c::class_of<::Unity::Mathematics::float4x4>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::float4x4::*)()>(&::Unity::Mathematics::float4x4::ToString)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x6a8ae88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ::i2c::class_of<::Unity::Mathematics::float4x4>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::float4x4::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::float4x4::ToString)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x6a8b328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Implicit___Unity__Mathematics__float4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::UnityEngine::Matrix4x4)>(&::Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a8b7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Implicit___UnityEngine__Matrix4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_Implicit___UnityEngine__Matrix4x4)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a8b7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(::Unity::Mathematics::float3x3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a8b7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a8b83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(::Unity::Mathematics::RigidTransform)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a8b8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::RigidTransform>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.AxisAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float4x4::AxisAngle)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6a8b96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "AxisAngle", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.EulerXYZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float4x4::EulerXYZ)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6a8badc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerXYZ", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.EulerXZY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float4x4::EulerXZY)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6a8bbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerXZY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.EulerYXZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float4x4::EulerYXZ)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6a8bc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerYXZ", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.EulerYZX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float4x4::EulerYZX)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6a8bd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerYZX", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.EulerZXY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float4x4::EulerZXY)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6a8be28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerZXY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.EulerZYX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float4x4::EulerZYX)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6a8bf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerZYX", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.EulerXYZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::float4x4::EulerXYZ)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6a8bfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerXYZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.EulerXZY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::float4x4::EulerXZY)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6a8c0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerXZY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.EulerYXZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::float4x4::EulerYXZ)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6a8c17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerYXZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.EulerYZX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::float4x4::EulerYZX)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6a8c254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerYZX", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.EulerZXY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::float4x4::EulerZXY)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6a8c324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerZXY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.EulerZYX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::float4x4::EulerZYX)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6a8c400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerZYX", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.Euler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::math_RotationOrder)>(
    &::Unity::Mathematics::float4x4::Euler)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x6a8c4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { "Euler", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::math_RotationOrder>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.Euler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, float_t, float_t, ::Unity::Mathematics::math_RotationOrder)>(
    &::Unity::Mathematics::float4x4::Euler)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6a8c9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                            { "Euler", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::math_RotationOrder>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.RotateX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t)>(&::Unity::Mathematics::float4x4::RotateX)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6a8c9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "RotateX", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.RotateY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t)>(&::Unity::Mathematics::float4x4::RotateY)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6a8cadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "RotateY", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.RotateZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t)>(&::Unity::Mathematics::float4x4::RotateZ)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6a8cbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "RotateZ", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.Scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t)>(&::Unity::Mathematics::float4x4::Scale)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6a8ccc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "Scale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.Scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::float4x4::Scale)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6a8ccf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "Scale", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.Scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float4x4::Scale)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6a8cd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "Scale", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.Translate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float4x4::Translate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6a8cd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "Translate", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.LookAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float4x4::LookAt)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6a8cd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                            { "LookAt", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.Ortho
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, float_t, float_t, float_t)>(&::Unity::Mathematics::float4x4::Ortho)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a8cf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                             { "Ortho", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.OrthoOffCenter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, float_t, float_t, float_t, float_t, float_t)>(&::Unity::Mathematics::float4x4::OrthoOffCenter)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a8cf8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "OrthoOffCenter",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                       ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.PerspectiveFov
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, float_t, float_t, float_t)>(&::Unity::Mathematics::float4x4::PerspectiveFov)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6a8d004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                { "PerspectiveFov", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.PerspectiveOffCenter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t, float_t, float_t, float_t, float_t, float_t)>(
    &::Unity::Mathematics::float4x4::PerspectiveOffCenter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a8d0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "PerspectiveOffCenter",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                       ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.TRS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float4x4::TRS)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6a8d160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                            { "TRS", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::float4x4::setStaticF_identity(::Unity::Mathematics::float4x4 value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::float4x4, "identity", ::Unity::Mathematics::float4x4>(std::forward<::Unity::Mathematics::float4x4>(value));
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::getStaticF_identity() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::float4x4, "identity", ::Unity::Mathematics::float4x4>();
}
inline void Unity::Mathematics::float4x4::setStaticF_zero(::Unity::Mathematics::float4x4 value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::float4x4, "zero", ::Unity::Mathematics::float4x4>(std::forward<::Unity::Mathematics::float4x4>(value));
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::float4x4, "zero", ::Unity::Mathematics::float4x4>();
}
inline void Unity::Mathematics::float4x4::_ctor(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2, ::Unity::Mathematics::float4 c3) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor",
                                                                                            {},
                                                                                            { ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(),
                                                                                              ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, c0, c1, c2, c3);
}
inline void Unity::Mathematics::float4x4::_ctor(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22,
                                                float_t m23, float_t m30, float_t m31, float_t m32, float_t m33) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
}
inline void Unity::Mathematics::float4x4::_ctor(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float4x4::_ctor(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float4x4::_ctor(::Unity::Mathematics::bool4x4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float4x4::_ctor(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float4x4::_ctor(::Unity::Mathematics::int4x4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float4x4::_ctor(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float4x4::_ctor(::Unity::Mathematics::uint4x4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float4x4::_ctor(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float4x4::_ctor(::Unity::Mathematics::double4x4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Explicit___Unity__Mathematics__float4x4(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Explicit___Unity__Mathematics__float4x4(::Unity::Mathematics::bool4x4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4(::Unity::Mathematics::int4x4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::int4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4(::Unity::Mathematics::uint4x4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Explicit___Unity__Mathematics__float4x4(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Explicit___Unity__Mathematics__float4x4(::Unity::Mathematics::double4x4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Multiply(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Multiply(::Unity::Mathematics::float4x4 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Multiply(float_t lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Multiply", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Addition(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Addition(::Unity::Mathematics::float4x4 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Addition(float_t lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Addition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Subtraction(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Subtraction(::Unity::Mathematics::float4x4 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Subtraction(float_t lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Subtraction", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Division(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Division(::Unity::Mathematics::float4x4 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Division(float_t lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Division", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Modulus(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Modulus(::Unity::Mathematics::float4x4 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Modulus(float_t lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Modulus", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Increment(::Unity::Mathematics::float4x4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Decrement(::Unity::Mathematics::float4x4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_LessThan(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_LessThan(::Unity::Mathematics::float4x4 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_LessThan(float_t lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_LessThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_LessThanOrEqual(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_LessThanOrEqual(::Unity::Mathematics::float4x4 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_GreaterThan(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_GreaterThan(::Unity::Mathematics::float4x4 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_GreaterThan(float_t lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_GreaterThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_GreaterThanOrEqual(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_GreaterThanOrEqual(::Unity::Mathematics::float4x4 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_UnaryNegation(::Unity::Mathematics::float4x4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_UnaryPlus(::Unity::Mathematics::float4x4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_Equality(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_Equality(::Unity::Mathematics::float4x4 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_Equality(float_t lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Equality", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_Inequality(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_Inequality(::Unity::Mathematics::float4x4 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_Inequality(float_t lhs, ::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Inequality", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::by_ref<::Unity::Mathematics::float4> Unity::Mathematics::float4x4::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Mathematics::float4>>(*this, ___internal_method, index);
}
inline bool Unity::Mathematics::float4x4::Equals(::Unity::Mathematics::float4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::float4x4::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::float4x4>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::float4x4::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::float4x4>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float4x4::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::float4x4>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float4x4::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4(::UnityEngine::Matrix4x4 m) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, m);
}
inline ::UnityEngine::Matrix4x4 Unity::Mathematics::float4x4::op_Implicit___UnityEngine__Matrix4x4(::Unity::Mathematics::float4x4 m) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, m);
}
inline void Unity::Mathematics::float4x4::_ctor(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rotation, translation);
}
inline void Unity::Mathematics::float4x4::_ctor(::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 translation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rotation, translation);
}
inline void Unity::Mathematics::float4x4::_ctor(::Unity::Mathematics::RigidTransform transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::RigidTransform>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, transform);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::AxisAngle(::Unity::Mathematics::float3 axis, float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "AxisAngle", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, axis, angle);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::EulerXYZ(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerXYZ", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::EulerXZY(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerXZY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::EulerYXZ(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerYXZ", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::EulerYZX(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerYZX", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::EulerZXY(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerZXY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::EulerZYX(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerZYX", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::EulerXYZ(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerXYZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::EulerXZY(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerXZY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::EulerYXZ(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerYXZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::EulerYZX(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerYZX", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::EulerZXY(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerZXY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::EulerZYX(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "EulerZYX", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::Euler(::Unity::Mathematics::float3 xyz, ::Unity::Mathematics::math_RotationOrder order) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "Euler", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::math_RotationOrder>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, xyz, order);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::Euler(float_t x, float_t y, float_t z, ::Unity::Mathematics::math_RotationOrder order) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                          { "Euler", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::math_RotationOrder>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, x, y, z, order);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::RotateX(float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "RotateX", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::RotateY(float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "RotateY", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::RotateZ(float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "RotateZ", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::Scale(float_t s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "Scale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, s);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::Scale(float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "Scale", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::Scale(::Unity::Mathematics::float3 scales) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "Scale", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, scales);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::Translate(::Unity::Mathematics::float3 vector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "Translate", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, vector);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::LookAt(::Unity::Mathematics::float3 eye, ::Unity::Mathematics::float3 target, ::Unity::Mathematics::float3 up) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                          { "LookAt", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, eye, target, up);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::Ortho(float_t width, float_t height, float_t near, float_t far) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "Ortho", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, width, height, near, far);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::OrthoOffCenter(float_t left, float_t right, float_t bottom, float_t top, float_t near, float_t far) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "OrthoOffCenter",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                     ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, left, right, bottom, top, near, far);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::PerspectiveFov(float_t verticalFov, float_t aspect, float_t near, float_t far) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                                                           { "PerspectiveFov", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, verticalFov, aspect, near, far);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::PerspectiveOffCenter(float_t left, float_t right, float_t bottom, float_t top, float_t near, float_t far) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(), { "PerspectiveOffCenter",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                     ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, left, right, bottom, top, near, far);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::TRS(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 scale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float4x4>(),
                          { "TRS", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, translation, rotation, scale);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float4x4>"
constexpr Unity::Mathematics::float4x4::operator ::System::IEquatable_1<::Unity::Mathematics::float4x4>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::float4x4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float4x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float4x4>* Unity::Mathematics::float4x4::i___System__IEquatable_1___Unity__Mathematics__float4x4_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::float4x4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::Mathematics::float4x4::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::float4x4::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float4",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c3", ty:
// "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::float4x4::float4x4(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2, ::Unity::Mathematics::float4 c3) noexcept {
  this->c0 = c0;
  this->c1 = c1;
  this->c2 = c2;
  this->c3 = c3;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::float4x4::float4x4() {}

#pragma once
// IWYU pragma private; include "Unity/Mathematics/int3x2.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "Unity/Mathematics/zzzz__int3x2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool3x2_def.hpp"
#include "Unity/Mathematics/zzzz__double3x2_def.hpp"
#include "Unity/Mathematics/zzzz__float3x2_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Unity/Mathematics/zzzz__uint3x2_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::int3x2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3x2::*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int3x2::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ad90d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3x2::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::Unity::Mathematics::int3x2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ad90e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Mathematics::int3x2>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3x2::*)(int32_t)>(&::Unity::Mathematics::int3x2::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ad90f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3x2::*)(bool)>(&::Unity::Mathematics::int3x2::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ad9110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3x2::*)(::Unity::Mathematics::bool3x2)>(&::Unity::Mathematics::int3x2::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ad9130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3x2::*)(uint32_t)>(&::Unity::Mathematics::int3x2::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ad9160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3x2::*)(::Unity::Mathematics::uint3x2)>(&::Unity::Mathematics::int3x2::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ad917c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3x2::*)(float_t)>(&::Unity::Mathematics::int3x2::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ad91a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3x2::*)(::Unity::Mathematics::float3x2)>(&::Unity::Mathematics::int3x2::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6ad91d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3x2::*)(double_t)>(&::Unity::Mathematics::int3x2::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ad925c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int3x2::*)(::Unity::Mathematics::double3x2)>(&::Unity::Mathematics::int3x2::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6ad928c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Implicit___Unity__Mathematics__int3x2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(int32_t)>(&::Unity::Mathematics::int3x2::op_Implicit___Unity__Mathematics__int3x2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ad9318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Explicit___Unity__Mathematics__int3x2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(bool)>(&::Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ad9334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Explicit___Unity__Mathematics__int3x2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::bool3x2)>(&::Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ad9354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Explicit___Unity__Mathematics__int3x2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(uint32_t)>(&::Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ad9384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Explicit___Unity__Mathematics__int3x2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::uint3x2)>(&::Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ad93a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Explicit___Unity__Mathematics__int3x2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(float_t)>(&::Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ad93c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Explicit___Unity__Mathematics__int3x2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::float3x2)>(&::Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6ad93f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::float3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Explicit___Unity__Mathematics__int3x2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(double_t)>(&::Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ad947c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Explicit___Unity__Mathematics__int3x2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::double3x2)>(&::Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6ad94ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Multiply)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6ad9534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_Multiply)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ad9598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Multiply)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ad95d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Multiply", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Addition)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6ad9618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_Addition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ad967c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Addition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ad96bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Addition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Subtraction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6ad96fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_Subtraction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ad9760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Subtraction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ad97a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Subtraction", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Division)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6ad97e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_Division)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ad9830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Division)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ad9870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Division", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Modulus)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6ad98b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_Modulus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ad991c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Modulus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ad9974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Modulus", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Increment)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6ad99cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Decrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Decrement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6ad9a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_LessThan)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6ad9a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_LessThan)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ad9aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_LessThan)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ad9b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_LessThan", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(
    &::Unity::Mathematics::int3x2::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6ad9b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ad9bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ad9c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_GreaterThan)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6ad9cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_GreaterThan)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ad9d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_GreaterThan)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ad9d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_GreaterThan", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(
    &::Unity::Mathematics::int3x2::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6ad9db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ad9e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ad9e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ad9ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_UnaryPlus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_UnaryPlus)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ad9f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_LeftShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_LeftShift)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ad9f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_LeftShift", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_RightShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_RightShift)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ad9f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_RightShift", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Equality)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ad9fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_Equality)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ada034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Equality)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ada088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Equality", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Inequality)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ada0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_Inequality)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ada15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_Inequality)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ada1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Inequality", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_OnesComplement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_OnesComplement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6ada20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_OnesComplement", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ada240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ada284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ada2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ada304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ada348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ada388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_BitwiseOr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ada3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                             { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(::Unity::Mathematics::int3x2, int32_t)>(&::Unity::Mathematics::int3x2::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ada40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3x2 (*)(int32_t, ::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ada44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Mathematics::int3> (::Unity::Mathematics::int3x2::*)(int32_t)>(&::Unity::Mathematics::int3x2::get_Item)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ada48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::int3x2::*)(::Unity::Mathematics::int3x2)>(&::Unity::Mathematics::int3x2::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6ada498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::int3x2::*)(::System::Object*)>(&::Unity::Mathematics::int3x2::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6ada504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ::i2c::class_of<::Unity::Mathematics::int3x2>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::int3x2::*)()>(&::Unity::Mathematics::int3x2::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6ada5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ::i2c::class_of<::Unity::Mathematics::int3x2>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::int3x2::*)()>(&::Unity::Mathematics::int3x2::ToString)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6ada64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ::i2c::class_of<::Unity::Mathematics::int3x2>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int3x2.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::int3x2::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::int3x2::ToString)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6ada86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::int3x2::setStaticF_zero(::Unity::Mathematics::int3x2 value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::int3x2, "zero", ::Unity::Mathematics::int3x2>(std::forward<::Unity::Mathematics::int3x2>(value));
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::int3x2, "zero", ::Unity::Mathematics::int3x2>();
}
inline void Unity::Mathematics::int3x2::_ctor(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, c0, c1);
}
inline void Unity::Mathematics::int3x2::_ctor(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Mathematics::int3x2>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m00, m01, m10, m11, m20, m21);
}
inline void Unity::Mathematics::int3x2::_ctor(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3x2::_ctor(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3x2::_ctor(::Unity::Mathematics::bool3x2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3x2::_ctor(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3x2::_ctor(::Unity::Mathematics::uint3x2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3x2::_ctor(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3x2::_ctor(::Unity::Mathematics::float3x2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3x2::_ctor(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int3x2::_ctor(::Unity::Mathematics::double3x2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Implicit___Unity__Mathematics__int3x2(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2(::Unity::Mathematics::bool3x2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2(::Unity::Mathematics::uint3x2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2(::Unity::Mathematics::float3x2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::float3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Explicit___Unity__Mathematics__int3x2(::Unity::Mathematics::double3x2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Multiply(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Multiply(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Multiply(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Multiply", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Addition(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Addition(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Addition(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Addition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Subtraction(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Subtraction(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Subtraction(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Subtraction", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Division(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Division(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Division(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Division", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Modulus(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Modulus(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Modulus(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Modulus", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Increment(::Unity::Mathematics::int3x2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_Decrement(::Unity::Mathematics::int3x2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_LessThan(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_LessThan(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_LessThan(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_LessThan", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_LessThanOrEqual(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                           { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_LessThanOrEqual(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_GreaterThan(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                           { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_GreaterThan(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_GreaterThan", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_GreaterThanOrEqual(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                           { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_GreaterThanOrEqual(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_UnaryNegation(::Unity::Mathematics::int3x2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_UnaryPlus(::Unity::Mathematics::int3x2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_LeftShift(::Unity::Mathematics::int3x2 x, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_LeftShift", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, x, n);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_RightShift(::Unity::Mathematics::int3x2 x, int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_RightShift", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, x, n);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_Equality(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_Equality(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_Equality(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Equality", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_Inequality(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_Inequality(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3x2 Unity::Mathematics::int3x2::op_Inequality(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_Inequality", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_OnesComplement(::Unity::Mathematics::int3x2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_OnesComplement", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_BitwiseAnd(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                           { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_BitwiseAnd(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_BitwiseOr(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                           { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_BitwiseOr(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_BitwiseOr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_ExclusiveOr(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(),
                                                           { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_ExclusiveOr(::Unity::Mathematics::int3x2 lhs, int32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int3x2 Unity::Mathematics::int3x2::op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3x2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::by_ref<::Unity::Mathematics::int3> Unity::Mathematics::int3x2::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Mathematics::int3>>(*this, ___internal_method, index);
}
inline bool Unity::Mathematics::int3x2::Equals(::Unity::Mathematics::int3x2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::int3x2>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::int3x2::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::int3x2>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::int3x2::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::int3x2>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::int3x2::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::int3x2>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::int3x2::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int3x2>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3x2>"
constexpr Unity::Mathematics::int3x2::operator ::System::IEquatable_1<::Unity::Mathematics::int3x2>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::int3x2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3x2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int3x2>* Unity::Mathematics::int3x2::i___System__IEquatable_1___Unity__Mathematics__int3x2_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::int3x2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::Mathematics::int3x2::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::int3x2::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int3", modifiers:
// "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::int3x2::int3x2(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1) noexcept {
  this->c0 = c0;
  this->c1 = c1;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::int3x2::int3x2() {}

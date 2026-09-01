#pragma once
// IWYU pragma private; include "Unity\Mathematics\uint2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool2_def.hpp"
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::uint2_DebuggerProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2_DebuggerProxy::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2_DebuggerProxy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66881b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
constexpr uint32_t& Unity::Mathematics::uint2_DebuggerProxy::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr uint32_t const& Unity::Mathematics::uint2_DebuggerProxy::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Unity::Mathematics::uint2_DebuggerProxy::__cordl_internal_set_x(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr uint32_t& Unity::Mathematics::uint2_DebuggerProxy::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr uint32_t const& Unity::Mathematics::uint2_DebuggerProxy::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Unity::Mathematics::uint2_DebuggerProxy::__cordl_internal_set_y(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
inline void Unity::Mathematics::uint2_DebuggerProxy::_ctor(::Unity::Mathematics::uint2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::Unity::Mathematics::uint2_DebuggerProxy* Unity::Mathematics::uint2_DebuggerProxy::New_ctor(::Unity::Mathematics::uint2 v) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Mathematics::uint2_DebuggerProxy*>(v));
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::uint2_DebuggerProxy::uint2_DebuggerProxy() {}
//  Writing Method size for method: ::Unity::Mathematics::uint2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(uint32_t, uint32_t)>(&::Unity::Mathematics::uint2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66877b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66877bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(uint32_t)>(&::Unity::Mathematics::uint2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66877c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(bool)>(&::Unity::Mathematics::uint2::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66877cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(::Unity::Mathematics::bool2)>(&::Unity::Mathematics::uint2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66877d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(int32_t)>(&::Unity::Mathematics::uint2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66877e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::uint2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66877f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(float_t)>(&::Unity::Mathematics::uint2::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66877f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::uint2::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(double_t)>(&::Unity::Mathematics::uint2::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668782c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::uint2::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6687844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Implicit___Unity__Mathematics__uint2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(uint32_t)>(&::Unity::Mathematics::uint2::op_Implicit___Unity__Mathematics__uint2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Explicit___Unity__Mathematics__uint2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(bool)>(&::Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6687880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Explicit___Unity__Mathematics__uint2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::bool2)>(&::Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6687898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Explicit___Unity__Mathematics__uint2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(int32_t)>(&::Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66878a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Explicit___Unity__Mathematics__uint2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66878b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Explicit___Unity__Mathematics__uint2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(float_t)>(&::Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66878b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Explicit___Unity__Mathematics__uint2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66878d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Explicit___Unity__Mathematics__uint2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(double_t)>(&::Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66878f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Explicit___Unity__Mathematics__uint2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6687910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Multiply)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6687938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_Multiply)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Multiply)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Multiply", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Addition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6687978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_Addition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Addition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66879a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Addition", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Subtraction)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66879b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(),
                                                             { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_Subtraction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66879d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Subtraction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66879e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Subtraction", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Division)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66879f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_Division)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Division)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Division", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Modulus)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6687a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_Modulus)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Modulus)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Modulus", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Increment)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6687a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Decrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Decrement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6687aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_LessThan)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_LessThan)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_LessThan)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_LessThan", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(),
                                                             { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_GreaterThan)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(),
                                                             { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_GreaterThan)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_GreaterThan)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_GreaterThan", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(
    &::Unity::Mathematics::uint2::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(),
                                                             { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6687c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_UnaryPlus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_UnaryPlus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6687c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_LeftShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, int32_t)>(&::Unity::Mathematics::uint2::op_LeftShift)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_LeftShift", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_RightShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, int32_t)>(&::Unity::Mathematics::uint2::op_RightShift)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_RightShift", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6687c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_Equality)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Equality)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Equality", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Inequality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6687ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_Inequality)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_Inequality)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Inequality", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_OnesComplement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_OnesComplement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6687cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_OnesComplement", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6687d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(),
                                                             { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6687d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_BitwiseOr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6687d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(),
                                                             { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint2::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xxxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6687d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6687da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6687db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xxyy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6687de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xyxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6687dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6687e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yxxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6687e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yxxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6687e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6687e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yyxx)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6687e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6687e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6687e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6687e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6687f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.set_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::set_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6687f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.set_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::set_yx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_yy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::get_yy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6687f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Mathematics::uint2::*)(int32_t)>(&::Unity::Mathematics::uint2::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6687f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint2::*)(int32_t, uint32_t)>(&::Unity::Mathematics::uint2::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6687f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::uint2::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint2::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6687f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::uint2::*)(::System::Object*)>(&::Unity::Mathematics::uint2::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6687f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ::i2c::class_of<::Unity::Mathematics::uint2>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::GetHashCode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x668800c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ::i2c::class_of<::Unity::Mathematics::uint2>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::uint2::*)()>(&::Unity::Mathematics::uint2::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6688040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ::i2c::class_of<::Unity::Mathematics::uint2>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint2.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::uint2::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::uint2::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x66880f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::uint2::setStaticF_zero(::Unity::Mathematics::uint2 value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::uint2, "zero", ::Unity::Mathematics::uint2>(std::forward<::Unity::Mathematics::uint2>(value));
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::uint2, "zero", ::Unity::Mathematics::uint2>();
}
inline void Unity::Mathematics::uint2::_ctor(uint32_t x, uint32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
inline void Unity::Mathematics::uint2::_ctor(::Unity::Mathematics::uint2 xy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xy);
}
inline void Unity::Mathematics::uint2::_ctor(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint2::_ctor(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint2::_ctor(::Unity::Mathematics::bool2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint2::_ctor(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint2::_ctor(::Unity::Mathematics::int2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint2::_ctor(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint2::_ctor(::Unity::Mathematics::float2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint2::_ctor(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint2::_ctor(::Unity::Mathematics::double2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Implicit___Unity__Mathematics__uint2(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::bool2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::int2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::float2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::double2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Multiply(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Multiply(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Multiply", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Addition(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Addition(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Addition(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Addition", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Subtraction(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Subtraction(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Subtraction", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Division(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Division(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Division(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Division", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Modulus(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Modulus(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Modulus", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Increment(::Unity::Mathematics::uint2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_Decrement(::Unity::Mathematics::uint2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_LessThan(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_LessThan(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_LessThan", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_LessThanOrEqual(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(),
                                                           { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_LessThanOrEqual(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_GreaterThan(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_GreaterThan(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_GreaterThan", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_GreaterThanOrEqual(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(),
                                                           { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_GreaterThanOrEqual(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_UnaryNegation(::Unity::Mathematics::uint2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_UnaryPlus(::Unity::Mathematics::uint2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_LeftShift(::Unity::Mathematics::uint2 x, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_LeftShift", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, x, n);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_RightShift(::Unity::Mathematics::uint2 x, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_RightShift", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, x, n);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_Equality(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_Equality(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_Equality(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Equality", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_Inequality(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_Inequality(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::uint2::op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_Inequality", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_OnesComplement(::Unity::Mathematics::uint2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_OnesComplement", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_BitwiseAnd(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_BitwiseAnd(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_BitwiseOr(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_BitwiseOr(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_BitwiseOr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_ExclusiveOr(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_ExclusiveOr(::Unity::Mathematics::uint2 lhs, uint32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_xxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_xxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_xxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_xxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_xyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_xyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_xyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_xyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_yxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_yxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_yxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_yxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_yyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_yyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_yyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint2::get_yyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint2::get_xxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint2::get_xxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint2::get_xyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint2::get_xyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint2::get_yxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint2::get_yxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint2::get_yyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint2::get_yyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::get_xx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::get_xy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_xy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint2::set_xy(::Unity::Mathematics::uint2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::get_yx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint2::set_yx(::Unity::Mathematics::uint2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint2::get_yy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_yy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline uint32_t Unity::Mathematics::uint2::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, index);
}
inline void Unity::Mathematics::uint2::set_Item(int32_t index, uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline bool Unity::Mathematics::uint2::Equals(::Unity::Mathematics::uint2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::uint2::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::uint2>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::uint2::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::uint2>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::uint2::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::uint2>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::uint2::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint2>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2>"
constexpr Unity::Mathematics::uint2::operator ::System::IEquatable_1<::Unity::Mathematics::uint2>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::uint2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2>* Unity::Mathematics::uint2::i___System__IEquatable_1___Unity__Mathematics__uint2_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::uint2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::Mathematics::uint2::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::uint2::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Mathematics::uint2::uint2(uint32_t x, uint32_t y) noexcept {
  this->x = x;
  this->y = y;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::uint2::uint2() {}

#pragma once
// IWYU pragma private; include "Unity\Mathematics\int4.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool4_def.hpp"
#include "Unity/Mathematics/zzzz__double4_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::int4_DebuggerProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4_DebuggerProxy::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4_DebuggerProxy::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666c854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Mathematics::int4_DebuggerProxy::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr int32_t const& Unity::Mathematics::int4_DebuggerProxy::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Unity::Mathematics::int4_DebuggerProxy::__cordl_internal_set_x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr int32_t& Unity::Mathematics::int4_DebuggerProxy::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr int32_t const& Unity::Mathematics::int4_DebuggerProxy::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Unity::Mathematics::int4_DebuggerProxy::__cordl_internal_set_y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr int32_t& Unity::Mathematics::int4_DebuggerProxy::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr int32_t const& Unity::Mathematics::int4_DebuggerProxy::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Unity::Mathematics::int4_DebuggerProxy::__cordl_internal_set_z(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
constexpr int32_t& Unity::Mathematics::int4_DebuggerProxy::__cordl_internal_get_w() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr int32_t const& Unity::Mathematics::int4_DebuggerProxy::__cordl_internal_get_w() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr void Unity::Mathematics::int4_DebuggerProxy::__cordl_internal_set_w(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w = value;
}
inline void Unity::Mathematics::int4_DebuggerProxy::_ctor(::Unity::Mathematics::int4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::Unity::Mathematics::int4_DebuggerProxy* Unity::Mathematics::int4_DebuggerProxy::New_ctor(::Unity::Mathematics::int4 v) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Mathematics::int4_DebuggerProxy*>(v));
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::int4_DebuggerProxy::int4_DebuggerProxy() {}
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(int32_t, int32_t, int32_t, int32_t)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66682e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(int32_t, int32_t, ::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66682f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(int32_t, ::Unity::Mathematics::int2, int32_t)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2, int32_t, int32_t)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2, ::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3, int32_t)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(int32_t)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6668368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(bool)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::bool4)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6668384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(uint32_t)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66683b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::uint4)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66683c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(float_t)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66683d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x66683f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(double_t)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6668448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Implicit___Unity__Mathematics__int4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(int32_t)>(&::Unity::Mathematics::int4::op_Implicit___Unity__Mathematics__int4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Explicit___Unity__Mathematics__int4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(bool)>(&::Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6668490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Explicit___Unity__Mathematics__int4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::bool4)>(&::Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66684a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Explicit___Unity__Mathematics__int4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(uint32_t)>(&::Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66684c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Explicit___Unity__Mathematics__int4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::uint4)>(&::Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66684d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Explicit___Unity__Mathematics__int4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(float_t)>(&::Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66684dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Explicit___Unity__Mathematics__int4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6668500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Explicit___Unity__Mathematics__int4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(double_t)>(&::Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Explicit___Unity__Mathematics__int4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x666857c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Multiply)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x66685d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_Multiply)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66685fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Multiply)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Multiply", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Addition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6668644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_Addition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Addition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Addition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Subtraction)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x66686b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_Subtraction)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66686e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Subtraction)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Subtraction", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Division)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x666872c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_Division)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Division)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x666877c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Division", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Modulus)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x66687a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_Modulus)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66687dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Modulus)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6668810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Modulus", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Increment)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6668844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Decrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Decrement)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x666886c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_LessThan)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6668894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_LessThan)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x66688d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_LessThan)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x666890c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_LessThan", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6668944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(),
                                                             { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6668984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x66689bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_GreaterThan)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x66689f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_GreaterThan)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6668a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_GreaterThan)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6668a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_GreaterThan", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6668aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(),
                                                             { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6668ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6668b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6668b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_UnaryPlus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_UnaryPlus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6668b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_LeftShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_LeftShift)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_LeftShift", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_RightShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_RightShift)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_RightShift", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Equality)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6668bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_Equality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6668c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Equality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6668c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Equality", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Inequality)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6668c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_Inequality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6668cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_Inequality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6668cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Inequality", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_OnesComplement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_OnesComplement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6668d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_OnesComplement", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6668d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_BitwiseOr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6668d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_BitwiseOr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6668dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, int32_t)>(&::Unity::Mathematics::int4::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(int32_t, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6668e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxyy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6668e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxwz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6668f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6668fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6668fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6669024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xyzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_xyzw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xyzw", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xywx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xywx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xywy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xywy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xywy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xywz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666906c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xywz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_xywz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666907c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xywz", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66690a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66690b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66690c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66690dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66690f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzyw)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x666912c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xzyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_xzyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xzyw", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666915c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzzw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66691ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66691c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xzwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_xzwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66691d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xzwy", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzwz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66691e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66691fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666924c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xwyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_xwyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666929c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xwyz", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66692b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66692c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66692d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xwzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_xwzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66692ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xwzy", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwzw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666933c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwwz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666938c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66693ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66693c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66693d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66693e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66693f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxzx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6669408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_yxzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_yxzw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yxzw", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxwx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x666946c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxwz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_yxwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_yxwz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66694ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yxwz", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66694c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyxx)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66694d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66694f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666956c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyzz)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6669590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66695ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yywx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66695bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yywx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yywy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yywy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66695d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yywy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yywz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66695e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yywz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66695f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666960c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666961c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_yzxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_yzxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yzxw", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666966c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6669690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666969c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66696b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66696c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66696d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzzw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66696e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66696f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_yzwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_yzwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666970c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yzwx", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzwz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666976c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywxz)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6669780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_ywxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_ywxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666979c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_ywxz", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66697b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66697c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66697d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66697ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_ywzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_ywzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_ywzx", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666983c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywzw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666988c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywwz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66698a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66698b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxxx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66698c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66698e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66698f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxyx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x666991c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666995c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zxyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_zxyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zxyw", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66699ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxzw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66699c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxwx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66699d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxwy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66699ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zxwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_zxwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zxwy", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxwz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zyxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_zyxw)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6669a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zyxw", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6669ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyzw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zywx)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6669b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zywx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_zywx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zywx", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zywy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zywy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zywy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zywz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zywz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzyy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6669c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzww)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6669cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6669cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zwxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_zwxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zwxy", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zwyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_zwyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zwyx", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6669dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6669e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxxx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6669e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxyx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6669e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_wxyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wxyz", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxzx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6669ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxzy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6669eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_wxzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wxzy", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxzw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxwz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_wyxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wyxz", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6669ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyzx)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x666a04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_wyzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wyzx", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyzw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wywx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wywx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wywy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wywy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wywy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wywz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wywz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_wzxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wzxy", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::set_wzyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wzyx", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwzz)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x666a318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x666a358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_xyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xyz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_xyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xyw", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_xzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xzy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_xzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xzw", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_xwy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xwy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_xwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xwz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_yxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_yxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yxz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_yxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_yxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yxw", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_yzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_yzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yzx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_yzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_yzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yzw", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_ywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_ywx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_ywx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ywz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_ywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_ywz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_ywz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_zxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zxy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_zxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zxw", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_zyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zyx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_zyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zyw", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_zwx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zwx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_zwy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zwy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zwz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zww)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_wxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wxy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_wxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wxz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_wyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wyx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_wyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wyz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_wzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wzx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::set_wzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wzy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wwz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_www
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_www)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_www", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x666a8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::set_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x666a8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::set_xz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xz", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_xw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::set_xw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xw", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::set_yx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x666a928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_yz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::set_yz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x666a930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yz", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_yw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_yw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_yw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::set_yw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yw", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::set_zx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zx", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::set_zy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zy", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x666a99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_zw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::set_zw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x666a9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zw", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::set_wx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wx", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::set_wy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x666a9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wy", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_wz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_wz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_wz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::int4::set_wz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666a9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wz", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_ww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_ww)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x666aa04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::int4::*)(int32_t)>(&::Unity::Mathematics::int4::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x666aa10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(int32_t, int32_t)>(&::Unity::Mathematics::int4::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x666aa18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::Equals)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x666aa20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::int4::*)(::System::Object*)>(&::Unity::Mathematics::int4::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x666aa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ::i2c::class_of<::Unity::Mathematics::int4>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::GetHashCode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x666ab10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ::i2c::class_of<::Unity::Mathematics::int4>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x666ab6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ::i2c::class_of<::Unity::Mathematics::int4>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::int4::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::int4::ToString)> {
  constexpr static std::size_t size = 0x1b48;
  constexpr static std::size_t addrs = 0x666ad0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::int4::setStaticF_zero(::Unity::Mathematics::int4 value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::int4, "zero", ::Unity::Mathematics::int4>(std::forward<::Unity::Mathematics::int4>(value));
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::int4, "zero", ::Unity::Mathematics::int4>();
}
inline void Unity::Mathematics::int4::_ctor(int32_t x, int32_t y, int32_t z, int32_t w) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z, w);
}
inline void Unity::Mathematics::int4::_ctor(int32_t x, int32_t y, ::Unity::Mathematics::int2 zw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, zw);
}
inline void Unity::Mathematics::int4::_ctor(int32_t x, ::Unity::Mathematics::int2 yz, int32_t w) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, yz, w);
}
inline void Unity::Mathematics::int4::_ctor(int32_t x, ::Unity::Mathematics::int3 yzw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, yzw);
}
inline void Unity::Mathematics::int4::_ctor(::Unity::Mathematics::int2 xy, int32_t z, int32_t w) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xy, z, w);
}
inline void Unity::Mathematics::int4::_ctor(::Unity::Mathematics::int2 xy, ::Unity::Mathematics::int2 zw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xy, zw);
}
inline void Unity::Mathematics::int4::_ctor(::Unity::Mathematics::int3 xyz, int32_t w) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xyz, w);
}
inline void Unity::Mathematics::int4::_ctor(::Unity::Mathematics::int4 xyzw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xyzw);
}
inline void Unity::Mathematics::int4::_ctor(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int4::_ctor(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int4::_ctor(::Unity::Mathematics::bool4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int4::_ctor(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int4::_ctor(::Unity::Mathematics::uint4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int4::_ctor(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int4::_ctor(::Unity::Mathematics::float4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int4::_ctor(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::int4::_ctor(::Unity::Mathematics::double4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Implicit___Unity__Mathematics__int4(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::bool4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::uint4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::float4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::double4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Multiply(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Multiply(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Multiply(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Multiply", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Addition(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Addition(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Addition(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Addition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Subtraction(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Subtraction(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Subtraction(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Subtraction", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Division(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Division(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Division(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Division", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Modulus(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Modulus(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Modulus(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Modulus", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Increment(::Unity::Mathematics::int4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Decrement(::Unity::Mathematics::int4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_LessThan(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_LessThan(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_LessThan(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_LessThan", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_LessThanOrEqual(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(),
                                                           { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_LessThanOrEqual(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_GreaterThan(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_GreaterThan(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_GreaterThan", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_GreaterThanOrEqual(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(),
                                                           { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_GreaterThanOrEqual(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_UnaryNegation(::Unity::Mathematics::int4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_UnaryPlus(::Unity::Mathematics::int4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_LeftShift(::Unity::Mathematics::int4 x, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_LeftShift", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, x, n);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_RightShift(::Unity::Mathematics::int4 x, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_RightShift", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, x, n);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_Equality(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_Equality(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_Equality(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Equality", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_Inequality(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_Inequality(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::int4::op_Inequality(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_Inequality", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_OnesComplement(::Unity::Mathematics::int4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_OnesComplement", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_BitwiseAnd(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_BitwiseAnd(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_BitwiseOr(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_BitwiseOr(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_BitwiseOr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_ExclusiveOr(::Unity::Mathematics::int4 lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_ExclusiveOr(::Unity::Mathematics::int4 lhs, int32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xxww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xyxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xyyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xyzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xyzw(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xyzw", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xywx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xywx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xywy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xywy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xywz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xywz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xywz(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xywz", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xyww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xzyw(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xzyw", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xzwy(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xzwy", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xzww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xwyz(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xwyz", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xwzy(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xwzy", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_xwww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_yxzw(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yxzw", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_yxwz(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yxwz", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yxww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yyxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yyyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yyzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yywx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yywx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yywy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yywy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yywz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yywz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yyww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_yzxw(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yzxw", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_yzwx(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yzwx", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_yzww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_ywxz(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_ywxz", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_ywzx(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_ywzx", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_ywww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zxyw(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zxyw", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zxwy(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zxwy", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zxww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zyxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zyxw(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zyxw", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zyyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zyzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zywx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zywx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zywx(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zywx", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zywy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zywy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zywz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zywz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zyww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zzww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zwxy(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zwxy", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zwyx(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zwyx", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_zwww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wxyz(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wxyz", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wxzy(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wxzy", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wxww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wyxz(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wyxz", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wyxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wyyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wyzx(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wyzx", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wyzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wywx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wywx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wywy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wywy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wywz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wywz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wyww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wzxy(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wzxy", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wzyx(::Unity::Mathematics::int4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wzyx", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wzww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::get_wwww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xyz(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xyz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xyw(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xyw", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xzy(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xzy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xzw(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xzw", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xwy(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xwy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xwz(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xwz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_yxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_yxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_yxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_yxz(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yxz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_yxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_yxw(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yxw", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_yyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_yyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_yyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_yyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_yzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_yzx(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yzx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_yzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_yzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_yzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_yzw(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yzw", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_ywx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_ywx(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_ywx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_ywy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_ywz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ywz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_ywz(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_ywz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_yww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zxy(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zxy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zxw(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zxw", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zyx(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zyx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zyw(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zyw", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zwx(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zwx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zwy(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zwy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_zww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wxy(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wxy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wxz(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wxz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wyx(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wyx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wyz(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wyz", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wzx(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wzx", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wzy(::Unity::Mathematics::int3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wzy", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_wwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_www() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_www", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_xx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_xy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xy(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_xz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xz(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xz", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_xw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_xw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_xw(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_xw", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_yx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_yx(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_yy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_yz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_yz(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yz", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_yw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_yw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_yw(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_yw", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_zx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zx(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zx", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_zy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zy(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zy", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_zz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_zw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_zw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_zw(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_zw", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_wx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wx(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wx", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_wy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wy(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wy", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_wz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_wz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline void Unity::Mathematics::int4::set_wz(::Unity::Mathematics::int2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_wz", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_ww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_ww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline int32_t Unity::Mathematics::int4::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, index);
}
inline void Unity::Mathematics::int4::set_Item(int32_t index, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline bool Unity::Mathematics::int4::Equals(::Unity::Mathematics::int4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::int4::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::int4>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::int4::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::int4>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::int4::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::int4>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::int4::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::int4>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int4>"
constexpr Unity::Mathematics::int4::operator ::System::IEquatable_1<::Unity::Mathematics::int4>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::int4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int4>* Unity::Mathematics::int4::i___System__IEquatable_1___Unity__Mathematics__int4_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::int4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::Mathematics::int4::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::int4::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Mathematics::int4::int4(int32_t x, int32_t y, int32_t z, int32_t w) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
  this->w = w;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::int4::int4() {}

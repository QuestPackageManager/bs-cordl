#pragma once
// IWYU pragma private; include "Unity/Mathematics/double4.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__double4_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool4_def.hpp"
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "Unity/Mathematics/zzzz__double4_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__half4_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::double4_DebuggerProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4_DebuggerProxy::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4_DebuggerProxy::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
constexpr double_t& Unity::Mathematics::double4_DebuggerProxy::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr double_t const& Unity::Mathematics::double4_DebuggerProxy::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Unity::Mathematics::double4_DebuggerProxy::__cordl_internal_set_x(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr double_t& Unity::Mathematics::double4_DebuggerProxy::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr double_t const& Unity::Mathematics::double4_DebuggerProxy::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Unity::Mathematics::double4_DebuggerProxy::__cordl_internal_set_y(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr double_t& Unity::Mathematics::double4_DebuggerProxy::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr double_t const& Unity::Mathematics::double4_DebuggerProxy::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Unity::Mathematics::double4_DebuggerProxy::__cordl_internal_set_z(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
constexpr double_t& Unity::Mathematics::double4_DebuggerProxy::__cordl_internal_get_w() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr double_t const& Unity::Mathematics::double4_DebuggerProxy::__cordl_internal_get_w() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr void Unity::Mathematics::double4_DebuggerProxy::__cordl_internal_set_w(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w = value;
}
inline void Unity::Mathematics::double4_DebuggerProxy::_ctor(::Unity::Mathematics::double4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::Unity::Mathematics::double4_DebuggerProxy* Unity::Mathematics::double4_DebuggerProxy::New_ctor(::Unity::Mathematics::double4 v) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Mathematics::double4_DebuggerProxy*>(v));
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::double4_DebuggerProxy::double4_DebuggerProxy() {}
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(double_t, double_t, double_t, double_t)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa7f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(double_t, double_t, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa7f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(double_t, ::Unity::Mathematics::double2, double_t)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa7f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(double_t, ::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa7f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2, double_t, double_t)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa7f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa7f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3, double_t)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa7f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double3>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa7f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(double_t)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa7fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(bool)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6aa7fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::bool4)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6aa7fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(int32_t)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6aa8014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(uint32_t)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::uint4)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6aa8048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::half)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6aa806c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::half4)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6aa80d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(float_t)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa81a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::double4::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6aa81b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Implicit___Unity__Mathematics__double4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(double_t)>(&::Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa81d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Explicit___Unity__Mathematics__double4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(bool)>(&::Unity::Mathematics::double4::op_Explicit___Unity__Mathematics__double4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6aa81e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Explicit___Unity__Mathematics__double4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::bool4)>(&::Unity::Mathematics::double4::op_Explicit___Unity__Mathematics__double4)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6aa8200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Implicit___Unity__Mathematics__double4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(int32_t)>(&::Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa822c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Implicit___Unity__Mathematics__double4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6aa8240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Implicit___Unity__Mathematics__double4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(uint32_t)>(&::Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa825c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Implicit___Unity__Mathematics__double4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::uint4)>(&::Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6aa8270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Implicit___Unity__Mathematics__double4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::half)>(&::Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6aa828c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Implicit___Unity__Mathematics__double4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::half4)>(&::Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6aa82f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Implicit___Unity__Mathematics__double4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(float_t)>(&::Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Implicit___Unity__Mathematics__double4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Multiply)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4, double_t)>(&::Unity::Mathematics::double4::op_Multiply)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa846c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(double_t, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Multiply)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6aa8480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Multiply", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Addition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4, double_t)>(&::Unity::Mathematics::double4::op_Addition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa84ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(double_t, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Addition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6aa84c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Addition", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4, ::Unity::Mathematics::double4)>(
    &::Unity::Mathematics::double4::op_Subtraction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa84d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4, double_t)>(&::Unity::Mathematics::double4::op_Subtraction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa84ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(double_t, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Subtraction)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6aa8500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Subtraction", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Division)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4, double_t)>(&::Unity::Mathematics::double4::op_Division)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa852c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(double_t, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Division)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6aa8540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Division", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Modulus)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6aa8558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4, double_t)>(&::Unity::Mathematics::double4::op_Modulus)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6aa85e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(double_t, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Modulus)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6aa8660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Modulus", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Increment)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6aa86d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Decrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Decrement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6aa86f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::double4, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_LessThan)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa8708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::double4, double_t)>(&::Unity::Mathematics::double4::op_LessThan)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa873c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(double_t, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_LessThan)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa8770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_LessThan", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::double4, ::Unity::Mathematics::double4)>(
    &::Unity::Mathematics::double4::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa87a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::double4, double_t)>(&::Unity::Mathematics::double4::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa87d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(double_t, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa880c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::double4, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_GreaterThan)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa8840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::double4, double_t)>(&::Unity::Mathematics::double4::op_GreaterThan)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa8874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(double_t, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_GreaterThan)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa88a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_GreaterThan", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::double4, ::Unity::Mathematics::double4)>(
    &::Unity::Mathematics::double4::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa88dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::double4, double_t)>(&::Unity::Mathematics::double4::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa8910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(double_t, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa8944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_UnaryPlus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_UnaryPlus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6aa898c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::double4, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa8990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::double4, double_t)>(&::Unity::Mathematics::double4::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa89c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(double_t, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa89f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Equality", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::double4, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa8a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::double4, double_t)>(&::Unity::Mathematics::double4::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa8a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(double_t, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6aa8a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Inequality", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxwy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xyzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_xyzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xyzw", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xywx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xywx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xywy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xywy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xywy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xywz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xywz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_xywz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xywz", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzyw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xzyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_xzyw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xzyw", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzwx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzwy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xzwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_xzwy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xzwy", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xwyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_xwyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xwyz", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xwzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_xwzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xwzy", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwwy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa8f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_yxzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_yxzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa8ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yxzw", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxwx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa8ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxwy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa900c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxwz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa901c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_yxwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_yxwz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yxwz", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa90a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa90b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa90cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa90dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa90ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa90fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yywx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa910c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yywx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yywy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yywy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa911c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yywy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yywz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yywz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzxw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_yzxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_yzxw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yzxw", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa919c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa91ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa91bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa91cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa91dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa91ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa91fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa920c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzwx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa921c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_yzwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_yzwx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa922c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yzwx", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzwy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywxz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_ywxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_ywxz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_ywxz", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa92a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa92b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa92c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa92d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa92e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa92f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_ywzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_ywzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_ywzx", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywwx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa938c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa93a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa93b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa93c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa93d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa93e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa93f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zxyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_zxyw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zxyw", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxwx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxwy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zxwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_zxwy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zxwy", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa94a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa94b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa94c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa94d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa94e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zyxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_zyxw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa94f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zyxw", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa94fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa950c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa951c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa952c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa953c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa954c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa955c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa956c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zywx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa957c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zywx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_zywx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zywx", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zywy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zywy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zywy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zywz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa95a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zywz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa95b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa95c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa95d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa95e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa95fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa960c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa961c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa962c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa963c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa964c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzwx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzwy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa96a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa96b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa96c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa96d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa96e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zwxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_zwxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa96f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zwxy", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa96fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa970c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa971c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zwyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_zwyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zwyx", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwwx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa97a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwwy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa97b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa97c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa97d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa97e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa97f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa982c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa983c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa984c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_wxyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wxyz", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_wxzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wxzy", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa989c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa98ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa98bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxwy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa98d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa98e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa98f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyxz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_wyxz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wyxz", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa993c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa994c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa995c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_wyzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa99a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wyzx", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa99ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa99bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa99cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wywx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa99dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wywx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wywy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wywy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa99ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wywy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wywz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wywz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_wzxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wzxy", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::set_wzyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wzyx", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzwx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzwy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwxw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwyw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwwx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwwy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwwz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwww)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa9c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_xyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xyz", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xyw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_xyw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xyw", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_xzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xzy", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_xzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xzw", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_xwy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xwy", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xwz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_xwz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xwz", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_yxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_yxz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yxz", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yxw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_yxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_yxw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yxw", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_yzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_yzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yzx", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_yzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_yzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yzw", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_ywx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_ywx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_ywx", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ywz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_ywz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_ywz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_ywz", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_zxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zxy", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zxw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_zxw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zxw", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_zyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zyx", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zyw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_zyw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zyw", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_zwx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zwx", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_zwy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zwy", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zwz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zww)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_wxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wxy", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_wxz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wxz", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wxw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wxw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa9fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aa9ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_wyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wyx", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aaa00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_wyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wyz", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wyw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wyw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aaa034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_wzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wzx", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::double4::set_wzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wzy", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wzw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aaa08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aaa09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wwz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wwz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_www
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_www)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aaa0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_www", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::set_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::set_xz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xz", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_xw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_xw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_xw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::set_xw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xw", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::set_yx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_yz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::set_yz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yz", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_yw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_yw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_yw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::set_yw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yw", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::set_zx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zx", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::set_zy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zy", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_zw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_zw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_zw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::set_zw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zw", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::set_wx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wx", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::set_wy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wy", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_wz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_wz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_wz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double4::set_wz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wz", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_ww
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::get_ww)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aaa1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ww", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Mathematics::double4::*)(int32_t)>(&::Unity::Mathematics::double4::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double4::*)(int32_t, double_t)>(&::Unity::Mathematics::double4::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aaa1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::double4::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::double4::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aaa1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::double4::*)(::System::Object*)>(&::Unity::Mathematics::double4::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6aaa234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ::i2c::class_of<::Unity::Mathematics::double4>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::GetHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6aaa2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ::i2c::class_of<::Unity::Mathematics::double4>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::double4::*)()>(&::Unity::Mathematics::double4::ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6aaa358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ::i2c::class_of<::Unity::Mathematics::double4>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double4.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::double4::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::double4::ToString)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6aaa4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::double4::setStaticF_zero(::Unity::Mathematics::double4 value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::double4, "zero", ::Unity::Mathematics::double4>(std::forward<::Unity::Mathematics::double4>(value));
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::double4, "zero", ::Unity::Mathematics::double4>();
}
inline void Unity::Mathematics::double4::_ctor(double_t x, double_t y, double_t z, double_t w) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z, w);
}
inline void Unity::Mathematics::double4::_ctor(double_t x, double_t y, ::Unity::Mathematics::double2 zw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, zw);
}
inline void Unity::Mathematics::double4::_ctor(double_t x, ::Unity::Mathematics::double2 yz, double_t w) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, yz, w);
}
inline void Unity::Mathematics::double4::_ctor(double_t x, ::Unity::Mathematics::double3 yzw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, yzw);
}
inline void Unity::Mathematics::double4::_ctor(::Unity::Mathematics::double2 xy, double_t z, double_t w) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xy, z, w);
}
inline void Unity::Mathematics::double4::_ctor(::Unity::Mathematics::double2 xy, ::Unity::Mathematics::double2 zw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xy, zw);
}
inline void Unity::Mathematics::double4::_ctor(::Unity::Mathematics::double3 xyz, double_t w) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double3>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xyz, w);
}
inline void Unity::Mathematics::double4::_ctor(::Unity::Mathematics::double4 xyzw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xyzw);
}
inline void Unity::Mathematics::double4::_ctor(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double4::_ctor(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double4::_ctor(::Unity::Mathematics::bool4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double4::_ctor(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double4::_ctor(::Unity::Mathematics::int4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double4::_ctor(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double4::_ctor(::Unity::Mathematics::uint4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double4::_ctor(::Unity::Mathematics::half v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double4::_ctor(::Unity::Mathematics::half4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double4::_ctor(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double4::_ctor(::Unity::Mathematics::float4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Explicit___Unity__Mathematics__double4(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Explicit___Unity__Mathematics__double4(::Unity::Mathematics::bool4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4(::Unity::Mathematics::int4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::int4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4(::Unity::Mathematics::uint4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4(::Unity::Mathematics::half v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4(::Unity::Mathematics::half4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Implicit___Unity__Mathematics__double4(::Unity::Mathematics::float4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Multiply(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Multiply(::Unity::Mathematics::double4 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Multiply(double_t lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Multiply", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Addition(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Addition(::Unity::Mathematics::double4 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Addition(double_t lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Addition", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Subtraction(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Subtraction(::Unity::Mathematics::double4 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Subtraction(double_t lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Subtraction", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Division(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Division(::Unity::Mathematics::double4 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Division(double_t lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Division", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Modulus(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Modulus(::Unity::Mathematics::double4 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Modulus(double_t lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Modulus", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Increment(::Unity::Mathematics::double4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_Decrement(::Unity::Mathematics::double4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_LessThan(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_LessThan(::Unity::Mathematics::double4 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_LessThan(double_t lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_LessThan", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_LessThanOrEqual(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_LessThanOrEqual(::Unity::Mathematics::double4 lhs, double_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_GreaterThan(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_GreaterThan(::Unity::Mathematics::double4 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_GreaterThan(double_t lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_GreaterThan", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_GreaterThanOrEqual(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_GreaterThanOrEqual(::Unity::Mathematics::double4 lhs, double_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_UnaryNegation(::Unity::Mathematics::double4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::op_UnaryPlus(::Unity::Mathematics::double4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_Equality(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_Equality(::Unity::Mathematics::double4 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_Equality(double_t lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Equality", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_Inequality(::Unity::Mathematics::double4 lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_Inequality(::Unity::Mathematics::double4 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::double4::op_Inequality(double_t lhs, ::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "op_Inequality", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xxww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xyxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xyyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xyzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xyzw(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xyzw", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xywx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xywx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xywy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xywy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xywz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xywz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xywz(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xywz", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xyww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xzyw(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xzyw", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xzwy(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xzwy", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xzww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xwyz(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xwyz", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xwzy(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xwzy", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_xwww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_yxzw(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yxzw", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_yxwz(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yxwz", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yxww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yyxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yyyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yyzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yywx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yywx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yywy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yywy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yywz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yywz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yyww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_yzxw(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yzxw", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_yzwx(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yzwx", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_yzww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_ywxz(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_ywxz", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_ywzx(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_ywzx", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_ywww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zxyw(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zxyw", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zxwy(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zxwy", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zxww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zyxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zyxw(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zyxw", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zyyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zyzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zywx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zywx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zywx(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zywx", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zywy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zywy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zywz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zywz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zyww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zzww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zwxy(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zwxy", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zwyx(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zwyx", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_zwww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wxyz(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wxyz", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wxzy(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wxzy", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wxww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wyxz(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wyxz", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wyxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wyyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wyzx(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wyzx", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wyzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wywx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wywx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wywy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wywy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wywz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wywz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wyww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wzxy(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wzxy", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wzyx(::Unity::Mathematics::double4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wzyx", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wzww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double4::get_wwww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xyz(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xyz", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xyw(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xyw", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xzy(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xzy", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xzw(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xzw", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xwy(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xwy", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xwz(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xwz", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_xww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_yxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_yxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_yxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_yxz(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yxz", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_yxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_yxw(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yxw", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_yyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_yyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_yyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_yyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_yzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_yzx(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yzx", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_yzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_yzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_yzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_yzw(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yzw", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_ywx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_ywx(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_ywx", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_ywy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_ywz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ywz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_ywz(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_ywz", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_yww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zxy(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zxy", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zxw(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zxw", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zyx(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zyx", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zyw(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zyw", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zwx(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zwx", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zwy(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zwy", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_zww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wxy(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wxy", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wxz(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wxz", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wxw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wxw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wyx(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wyx", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wyz(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wyz", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wyw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wyw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wzx(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wzx", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wzy(::Unity::Mathematics::double3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wzy", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wzw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wzw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wwx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wwy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_wwz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wwz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double4::get_www() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_www", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_xx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_xy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xy(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_xz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xz(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xz", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_xw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_xw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_xw(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_xw", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_yx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_yx(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_yy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_yz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_yz(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yz", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_yw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_yw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_yw(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_yw", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_zx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zx(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zx", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_zy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zy(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zy", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_zz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_zw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_zw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_zw(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_zw", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_wx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wx(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wx", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_wy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wy(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wy", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_wz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_wz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double4::set_wz(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_wz", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double4::get_ww() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_ww", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline double_t Unity::Mathematics::double4::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, index);
}
inline void Unity::Mathematics::double4::set_Item(int32_t index, double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline bool Unity::Mathematics::double4::Equals(::Unity::Mathematics::double4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::double4>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::double4::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::double4>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::double4::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::double4>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::double4::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::double4>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::double4::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double4>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double4>"
constexpr Unity::Mathematics::double4::operator ::System::IEquatable_1<::Unity::Mathematics::double4>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::double4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::double4>* Unity::Mathematics::double4::i___System__IEquatable_1___Unity__Mathematics__double4_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::double4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::Mathematics::double4::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::double4::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "z", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "w", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::double4::double4(double_t x, double_t y, double_t z, double_t w) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
  this->w = w;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::double4::double4() {}

#pragma once
// IWYU pragma private; include "Unity\Mathematics\uint3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::uint3_DebuggerProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3_DebuggerProxy::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3_DebuggerProxy::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668dec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
constexpr uint32_t& Unity::Mathematics::uint3_DebuggerProxy::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr uint32_t const& Unity::Mathematics::uint3_DebuggerProxy::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Unity::Mathematics::uint3_DebuggerProxy::__cordl_internal_set_x(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr uint32_t& Unity::Mathematics::uint3_DebuggerProxy::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr uint32_t const& Unity::Mathematics::uint3_DebuggerProxy::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Unity::Mathematics::uint3_DebuggerProxy::__cordl_internal_set_y(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr uint32_t& Unity::Mathematics::uint3_DebuggerProxy::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr uint32_t const& Unity::Mathematics::uint3_DebuggerProxy::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Unity::Mathematics::uint3_DebuggerProxy::__cordl_internal_set_z(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
inline void Unity::Mathematics::uint3_DebuggerProxy::_ctor(::Unity::Mathematics::uint3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::Unity::Mathematics::uint3_DebuggerProxy* Unity::Mathematics::uint3_DebuggerProxy::New_ctor(::Unity::Mathematics::uint3 v) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Mathematics::uint3_DebuggerProxy*>(v));
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::uint3_DebuggerProxy::uint3_DebuggerProxy() {}
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(uint32_t, uint32_t, uint32_t)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668cb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(uint32_t, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668cb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint2, uint32_t)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668cb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668cb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(uint32_t)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668cb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(bool)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668cb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::bool3)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668cb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(int32_t)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668cbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668cbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(float_t)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668cbe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x668cbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(double_t)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668cc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x668cc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Implicit___Unity__Mathematics__uint3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(uint32_t)>(&::Unity::Mathematics::uint3::op_Implicit___Unity__Mathematics__uint3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668cc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Explicit___Unity__Mathematics__uint3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(bool)>(&::Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668cc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Explicit___Unity__Mathematics__uint3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::bool3)>(&::Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668ccb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Explicit___Unity__Mathematics__uint3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(int32_t)>(&::Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668cccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Explicit___Unity__Mathematics__uint3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668ccd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Explicit___Unity__Mathematics__uint3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(float_t)>(&::Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668cce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Explicit___Unity__Mathematics__uint3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x668ccf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Explicit___Unity__Mathematics__uint3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(double_t)>(&::Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668cd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Explicit___Unity__Mathematics__uint3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x668cd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Multiply)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668cd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_Multiply)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668cd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Multiply)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668cdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Multiply", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Addition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668cdcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_Addition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668cde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Addition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668ce00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Addition", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Subtraction)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668ce1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(),
                                                             { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_Subtraction)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668ce38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Subtraction)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668ce50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Subtraction", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Division)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668ce6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_Division)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668ce88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Division)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668cea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Division", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Modulus)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668ceb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_Modulus)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x668cee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Modulus)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x668cf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Modulus", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Increment)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668cf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Decrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Decrement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668cf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_LessThan)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x668cf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_LessThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668cf8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_LessThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668cfb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_LessThan", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x668cfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(),
                                                             { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668d008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668d030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_GreaterThan)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x668d058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(),
                                                             { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_GreaterThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668d084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_GreaterThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668d0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_GreaterThan", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(
    &::Unity::Mathematics::uint3::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x668d0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(),
                                                             { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668d100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668d128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_UnaryPlus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_UnaryPlus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668d164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_LeftShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, int32_t)>(&::Unity::Mathematics::uint3::op_LeftShift)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668d16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_LeftShift", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_RightShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, int32_t)>(&::Unity::Mathematics::uint3::op_RightShift)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668d184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_RightShift", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x668d19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668d1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668d1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Equality", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Inequality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x668d21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_Inequality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668d24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Inequality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668d274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Inequality", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_OnesComplement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_OnesComplement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668d29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_OnesComplement", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668d2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(),
                                                             { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668d2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668d2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_BitwiseOr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668d2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668d2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668d30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_BitwiseOr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668d328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(),
                                                             { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668d334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(uint32_t, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668d34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xxxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xxyy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668d3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xxzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xxzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xyxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668d424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xyxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xyyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xyzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xyzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xzxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xzxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xzyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xzyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xzyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xzzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xzzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yxxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yxxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668d578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yxyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yxzx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668d5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yxzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yyxx)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668d60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yyxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yyzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yyzz)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668d6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yzxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yzxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yzyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yzyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yzyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668d718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zxxx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668d758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zxxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zxyx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x668d798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zxyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zxyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zxzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zxzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zyxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zyxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zyxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zyyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zyyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668d874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zyzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zzxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zzxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zzyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zzyy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x668d900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zzyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668d92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668d960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668d96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668d988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668d994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.set_xyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::set_xyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_xyz", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.set_xzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::set_xzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_xzy", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668d9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668da00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668da0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668da18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.set_yxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::set_yxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668da28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_yxz", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668da38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668da44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668da50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668da5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.set_yzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::set_yzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668da6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_yzx", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668da78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668da84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668da90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668daa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.set_zxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::set_zxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668dab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_zxy", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668dac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668dad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.set_zyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::set_zyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668dae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_zyx", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668daf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668dafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668db08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668db18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668db24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668db30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668db3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.set_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint3::set_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668db44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_xz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_xz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668db4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.set_xz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint3::set_xz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668db5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_xz", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668db6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.set_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint3::set_yx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668db78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668db84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_yz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_yz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668db90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.set_yz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint3::set_yz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668db98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_yz", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668dba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.set_zx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint3::set_zx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x668dbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_zx", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668dbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.set_zy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::uint3::set_zy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668dbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_zy", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_zz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::get_zz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668dbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Mathematics::uint3::*)(int32_t)>(&::Unity::Mathematics::uint3::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(int32_t, uint32_t)>(&::Unity::Mathematics::uint3::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x668dbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::uint3::*)(::System::Object*)>(&::Unity::Mathematics::uint3::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x668dc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ::i2c::class_of<::Unity::Mathematics::uint3>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x668dcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ::i2c::class_of<::Unity::Mathematics::uint3>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x668dd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ::i2c::class_of<::Unity::Mathematics::uint3>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::uint3::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::uint3::ToString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x668dde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::uint3::setStaticF_zero(::Unity::Mathematics::uint3 value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::uint3, "zero", ::Unity::Mathematics::uint3>(std::forward<::Unity::Mathematics::uint3>(value));
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::uint3, "zero", ::Unity::Mathematics::uint3>();
}
inline void Unity::Mathematics::uint3::_ctor(uint32_t x, uint32_t y, uint32_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z);
}
inline void Unity::Mathematics::uint3::_ctor(uint32_t x, ::Unity::Mathematics::uint2 yz) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, yz);
}
inline void Unity::Mathematics::uint3::_ctor(::Unity::Mathematics::uint2 xy, uint32_t z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xy, z);
}
inline void Unity::Mathematics::uint3::_ctor(::Unity::Mathematics::uint3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xyz);
}
inline void Unity::Mathematics::uint3::_ctor(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint3::_ctor(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint3::_ctor(::Unity::Mathematics::bool3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint3::_ctor(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint3::_ctor(::Unity::Mathematics::int3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint3::_ctor(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint3::_ctor(::Unity::Mathematics::float3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint3::_ctor(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::uint3::_ctor(::Unity::Mathematics::double3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Implicit___Unity__Mathematics__uint3(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3(::Unity::Mathematics::bool3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3(::Unity::Mathematics::int3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3(::Unity::Mathematics::float3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Explicit___Unity__Mathematics__uint3(::Unity::Mathematics::double3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Multiply(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Multiply(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Multiply", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Addition(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Addition(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Addition(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Addition", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Subtraction(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Subtraction(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Subtraction", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Division(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Division(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Division(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Division", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Modulus(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Modulus(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Modulus", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Increment(::Unity::Mathematics::uint3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Decrement(::Unity::Mathematics::uint3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_LessThan(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_LessThan(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_LessThan", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_LessThanOrEqual(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(),
                                                           { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_LessThanOrEqual(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_GreaterThan(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_GreaterThan(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_GreaterThan", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_GreaterThanOrEqual(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(),
                                                           { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_GreaterThanOrEqual(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_UnaryNegation(::Unity::Mathematics::uint3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_UnaryPlus(::Unity::Mathematics::uint3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_LeftShift(::Unity::Mathematics::uint3 x, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_LeftShift", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, x, n);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_RightShift(::Unity::Mathematics::uint3 x, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_RightShift", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, x, n);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_Equality(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_Equality(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_Equality(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Equality", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_Inequality(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_Inequality(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_Inequality", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_OnesComplement(::Unity::Mathematics::uint3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_OnesComplement", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_BitwiseAnd(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_BitwiseAnd(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_BitwiseAnd", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_BitwiseOr(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_BitwiseOr(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_BitwiseOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_BitwiseOr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_ExclusiveOr(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_ExclusiveOr(::Unity::Mathematics::uint3 lhs, uint32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "op_ExclusiveOr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_xzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_yzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::uint3::get_zzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_xxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_xxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_xxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_xyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_xyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_xyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint3::set_xyz(::Unity::Mathematics::uint3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_xyz", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_xzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_xzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint3::set_xzy(::Unity::Mathematics::uint3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_xzy", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_xzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_yxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_yxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_yxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint3::set_yxz(::Unity::Mathematics::uint3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_yxz", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_yyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_yyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_yyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_yzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint3::set_yzx(::Unity::Mathematics::uint3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_yzx", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_yzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_yzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_zxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_zxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint3::set_zxy(::Unity::Mathematics::uint3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_zxy", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_zxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_zyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint3::set_zyx(::Unity::Mathematics::uint3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_zyx", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_zyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_zyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_zzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_zzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::get_zzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint3::get_xx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint3::get_xy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint3::set_xy(::Unity::Mathematics::uint2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint3::get_xz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_xz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint3::set_xz(::Unity::Mathematics::uint2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_xz", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint3::get_yx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint3::set_yx(::Unity::Mathematics::uint2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint3::get_yy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint3::get_yz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_yz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint3::set_yz(::Unity::Mathematics::uint2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_yz", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint3::get_zx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint3::set_zx(::Unity::Mathematics::uint2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_zx", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint3::get_zy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline void Unity::Mathematics::uint3::set_zy(::Unity::Mathematics::uint2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_zy", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::uint3::get_zz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_zz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline uint32_t Unity::Mathematics::uint3::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, index);
}
inline void Unity::Mathematics::uint3::set_Item(int32_t index, uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline bool Unity::Mathematics::uint3::Equals(::Unity::Mathematics::uint3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::uint3::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::uint3>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::uint3::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::uint3>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::uint3::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::uint3>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::uint3::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::uint3>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint3>"
constexpr Unity::Mathematics::uint3::operator ::System::IEquatable_1<::Unity::Mathematics::uint3>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::uint3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::uint3>* Unity::Mathematics::uint3::i___System__IEquatable_1___Unity__Mathematics__uint3_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::uint3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::Mathematics::uint3::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::uint3::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z",
// ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Mathematics::uint3::uint3(uint32_t x, uint32_t y, uint32_t z) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::uint3::uint3() {}

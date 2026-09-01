#pragma once
// IWYU pragma private; include "Unity\Mathematics\float3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__half3_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::float3_DebuggerProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3_DebuggerProxy::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3_DebuggerProxy::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663ed80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Mathematics::float3_DebuggerProxy::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr float_t const& Unity::Mathematics::float3_DebuggerProxy::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Unity::Mathematics::float3_DebuggerProxy::__cordl_internal_set_x(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr float_t& Unity::Mathematics::float3_DebuggerProxy::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr float_t const& Unity::Mathematics::float3_DebuggerProxy::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Unity::Mathematics::float3_DebuggerProxy::__cordl_internal_set_y(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr float_t& Unity::Mathematics::float3_DebuggerProxy::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr float_t const& Unity::Mathematics::float3_DebuggerProxy::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Unity::Mathematics::float3_DebuggerProxy::__cordl_internal_set_z(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
inline void Unity::Mathematics::float3_DebuggerProxy::_ctor(::Unity::Mathematics::float3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::Unity::Mathematics::float3_DebuggerProxy* Unity::Mathematics::float3_DebuggerProxy::New_ctor(::Unity::Mathematics::float3 v) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Mathematics::float3_DebuggerProxy*>(v));
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::float3_DebuggerProxy::float3_DebuggerProxy() {}
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(float_t, float_t, float_t)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663d9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(float_t, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663d9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663da00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663da0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(float_t)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663da18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(bool)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x663da24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::bool3)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x663da40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(int32_t)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663da7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x663da8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(uint32_t)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663daa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x663dab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::half)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x663dad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::half3)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x663db34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(double_t)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663dc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x663dc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(float_t)>(&::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663dc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Explicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(bool)>(&::Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x663dc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Explicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::bool3)>(&::Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x663dc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(int32_t)>(&::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663dc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663dc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(uint32_t)>(&::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663dc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663dcac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::half)>(&::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x663dcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::half3)>(&::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x663dd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Explicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(double_t)>(&::Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663ddf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Explicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663de04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Multiply)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663de14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_Multiply)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663de24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Multiply)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663de34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Multiply", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Addition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663de48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_Addition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663de58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Addition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663de68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Addition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Subtraction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663de7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                             { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_Subtraction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663de8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Subtraction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663de9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Subtraction", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Division)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663deb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                             { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_Division)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663dec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Division)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663ded0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Division", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Modulus)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x663dee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                             { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_Modulus)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x663df4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Modulus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x663dfa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Modulus", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Increment)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Decrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Decrement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_LessThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                             { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_LessThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_LessThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_LessThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                             { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_GreaterThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                             { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_GreaterThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_GreaterThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_GreaterThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                             { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_UnaryPlus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_UnaryPlus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x663e218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Equality", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Inequality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_Inequality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Inequality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x663e2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Inequality", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e3cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x663e84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_xyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::set_xyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_xyz", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_xzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::set_xzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_xzy", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_yxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::set_yxz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_yxz", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_yzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::set_yzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_yzx", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_zxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::set_zxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_zxy", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_zyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::set_zyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_zyx", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663e9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663e9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x663ea00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663ea10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x663ea1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float3::set_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x663ea24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663ea2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_xz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float3::set_xz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663ea38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_xz", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x663ea44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float3::set_yx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x663ea4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663ea54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x663ea60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_yz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float3::set_yz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x663ea68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_yz", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663ea70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_zx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float3::set_zx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663ea7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_zx", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x663ea88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_zy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float3::set_zy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x663ea90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_zy", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x663ea98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Mathematics::float3::*)(int32_t)>(&::Unity::Mathematics::float3::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x663eaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3::*)(int32_t, float_t)>(&::Unity::Mathematics::float3::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x663eaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x663eab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::float3::*)(::System::Object*)>(&::Unity::Mathematics::float3::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x663eae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ::i2c::class_of<::Unity::Mathematics::float3>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::GetHashCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x663eb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ::i2c::class_of<::Unity::Mathematics::float3>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x663ebc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ::i2c::class_of<::Unity::Mathematics::float3>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::float3::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::float3::ToString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x663ec9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___UnityEngine__Vector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x663ed78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::UnityEngine::Vector3)>(&::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x663ed7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::float3::setStaticF_zero(::Unity::Mathematics::float3 value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::float3, "zero", ::Unity::Mathematics::float3>(std::forward<::Unity::Mathematics::float3>(value));
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::float3, "zero", ::Unity::Mathematics::float3>();
}
inline void Unity::Mathematics::float3::_ctor(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z);
}
inline void Unity::Mathematics::float3::_ctor(float_t x, ::Unity::Mathematics::float2 yz) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, yz);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::float2 xy, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xy, z);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xyz);
}
inline void Unity::Mathematics::float3::_ctor(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::bool3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::int3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::uint3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::half v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::half3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::double3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3(::Unity::Mathematics::bool3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::int3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::uint3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::half v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::half3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3(::Unity::Mathematics::double3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::double3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Multiply(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Multiply(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Multiply(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Multiply", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Addition(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Addition(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Addition(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Addition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Subtraction(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Subtraction(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Subtraction(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Subtraction", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Division(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Division(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Division(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Division", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Modulus(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Modulus(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Modulus(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Modulus", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Increment(::Unity::Mathematics::float3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Decrement(::Unity::Mathematics::float3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_LessThan(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_LessThan(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_LessThan(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_LessThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_LessThanOrEqual(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                           { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_LessThanOrEqual(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_GreaterThan(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                           { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_GreaterThan(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_GreaterThan(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_GreaterThan", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_GreaterThanOrEqual(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                           { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_GreaterThanOrEqual(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_UnaryNegation(::Unity::Mathematics::float3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_UnaryPlus(::Unity::Mathematics::float3 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_Equality(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_Equality(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_Equality(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Equality", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_Inequality(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_Inequality(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_Inequality(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Inequality", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_xyz(::Unity::Mathematics::float3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_xyz", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_xzy(::Unity::Mathematics::float3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_xzy", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_yxz(::Unity::Mathematics::float3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_yxz", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_yzx(::Unity::Mathematics::float3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_yzx", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_zxy(::Unity::Mathematics::float3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_zxy", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zxz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zxz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_zyx(::Unity::Mathematics::float3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_zyx", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zyz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zyz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zzx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zzy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zzz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zzz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_xx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_xy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_xy(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_xz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_xz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_xz(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_xz", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_yx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_yx(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_yy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_yz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_yz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_yz(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_yz", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_zx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_zx(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_zx", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_zy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_zy(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_zy", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_zz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_zz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline float_t Unity::Mathematics::float3::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, index);
}
inline void Unity::Mathematics::float3::set_Item(int32_t index, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline bool Unity::Mathematics::float3::Equals(::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::float3::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::float3>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::float3::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::float3>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float3::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::float3>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float3::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline ::UnityEngine::Vector3 Unity::Mathematics::float3::op_Implicit___UnityEngine__Vector3(::Unity::Mathematics::float3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(::UnityEngine::Vector3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::float3>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3>"
constexpr Unity::Mathematics::float3::operator ::System::IEquatable_1<::Unity::Mathematics::float3>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::float3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float3>* Unity::Mathematics::float3::i___System__IEquatable_1___Unity__Mathematics__float3_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::float3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::Mathematics::float3::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::float3::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty:
// "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Mathematics::float3::float3(float_t x, float_t y, float_t z) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::float3::float3() {}

#pragma once
// IWYU pragma private; include "Unity\Mathematics\double2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool2_def.hpp"
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "Unity/Mathematics/zzzz__double4_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__half2_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::double2_DebuggerProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2_DebuggerProxy::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2_DebuggerProxy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6622064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
constexpr double_t& Unity::Mathematics::double2_DebuggerProxy::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr double_t const& Unity::Mathematics::double2_DebuggerProxy::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Unity::Mathematics::double2_DebuggerProxy::__cordl_internal_set_x(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr double_t& Unity::Mathematics::double2_DebuggerProxy::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr double_t const& Unity::Mathematics::double2_DebuggerProxy::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Unity::Mathematics::double2_DebuggerProxy::__cordl_internal_set_y(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
inline void Unity::Mathematics::double2_DebuggerProxy::_ctor(::Unity::Mathematics::double2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2_DebuggerProxy*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::Unity::Mathematics::double2_DebuggerProxy* Unity::Mathematics::double2_DebuggerProxy::New_ctor(::Unity::Mathematics::double2 v) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Mathematics::double2_DebuggerProxy*>(v));
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::double2_DebuggerProxy::double2_DebuggerProxy() {}
//  Writing Method size for method: ::Unity::Mathematics::double2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(double_t, double_t)>(&::Unity::Mathematics::double2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66215f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66215fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(double_t)>(&::Unity::Mathematics::double2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6621604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(bool)>(&::Unity::Mathematics::double2::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x662160c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(::Unity::Mathematics::bool2)>(&::Unity::Mathematics::double2::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6621624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(int32_t)>(&::Unity::Mathematics::double2::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::double2::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6621654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(uint32_t)>(&::Unity::Mathematics::double2::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::double2::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6621674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(::Unity::Mathematics::half)>(&::Unity::Mathematics::double2::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6621688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(::Unity::Mathematics::half2)>(&::Unity::Mathematics::double2::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x66216ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(float_t)>(&::Unity::Mathematics::double2::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::double2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x662177c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Implicit___Unity__Mathematics__double2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(double_t)>(&::Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662178c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Explicit___Unity__Mathematics__double2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(bool)>(&::Unity::Mathematics::double2::op_Explicit___Unity__Mathematics__double2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Explicit___Unity__Mathematics__double2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::bool2)>(&::Unity::Mathematics::double2::op_Explicit___Unity__Mathematics__double2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66217ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Implicit___Unity__Mathematics__double2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(int32_t)>(&::Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66217c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Implicit___Unity__Mathematics__double2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66217d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Implicit___Unity__Mathematics__double2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(uint32_t)>(&::Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66217e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Implicit___Unity__Mathematics__double2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66217f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Implicit___Unity__Mathematics__double2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::half)>(&::Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6621800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Implicit___Unity__Mathematics__double2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::half2)>(&::Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6621864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Implicit___Unity__Mathematics__double2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(float_t)>(&::Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66218e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Implicit___Unity__Mathematics__double2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66218f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Multiply)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2, double_t)>(&::Unity::Mathematics::double2::op_Multiply)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x662190c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(double_t, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Multiply)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Multiply", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Addition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2, double_t)>(&::Unity::Mathematics::double2::op_Addition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(double_t, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Addition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Addition", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(
    &::Unity::Mathematics::double2::op_Subtraction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                             { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2, double_t)>(&::Unity::Mathematics::double2::op_Subtraction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x662195c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(double_t, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Subtraction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Subtraction", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Division)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                             { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2, double_t)>(&::Unity::Mathematics::double2::op_Division)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(double_t, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Division)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Division", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Modulus)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66219a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                             { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2, double_t)>(&::Unity::Mathematics::double2::op_Modulus)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66219e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(double_t, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Modulus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6621a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Modulus", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Increment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Decrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Decrement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_LessThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                             { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::double2, double_t)>(&::Unity::Mathematics::double2::op_LessThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(double_t, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_LessThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_LessThan", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(
    &::Unity::Mathematics::double2::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                             { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::double2, double_t)>(&::Unity::Mathematics::double2::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(double_t, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_GreaterThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                             { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::double2, double_t)>(&::Unity::Mathematics::double2::op_GreaterThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(double_t, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_GreaterThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_GreaterThan", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(
    &::Unity::Mathematics::double2::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                             { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::double2, double_t)>(&::Unity::Mathematics::double2::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(double_t, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_UnaryNegation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_UnaryPlus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_UnaryPlus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6621bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Equality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::double2, double_t)>(&::Unity::Mathematics::double2::op_Equality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(double_t, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Equality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Equality", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::double2, double_t)>(&::Unity::Mathematics::double2::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(double_t, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6621c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Inequality", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xxxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6621c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yxxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yxxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yxxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yxxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yxxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yxyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yxyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yxyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yxyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yyxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yyxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yyxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yyxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yyyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yyyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yyyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yyyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6621d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yyyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yxx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yxx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yyx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yyx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yyy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6621da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yyy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6621dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.set_xy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::set_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6621dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6621dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.set_yx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::set_yx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6621ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_yy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::get_yy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6621de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Mathematics::double2::*)(int32_t)>(&::Unity::Mathematics::double2::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6621df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::double2::*)(int32_t, double_t)>(&::Unity::Mathematics::double2::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6621df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::double2::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::double2::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6621e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::double2::*)(::System::Object*)>(&::Unity::Mathematics::double2::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6621e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ::i2c::class_of<::Unity::Mathematics::double2>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6621eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ::i2c::class_of<::Unity::Mathematics::double2>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::double2::*)()>(&::Unity::Mathematics::double2::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6621ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ::i2c::class_of<::Unity::Mathematics::double2>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::double2.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::double2::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::double2::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6621fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::double2::setStaticF_zero(::Unity::Mathematics::double2 value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::double2, "zero", ::Unity::Mathematics::double2>(std::forward<::Unity::Mathematics::double2>(value));
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::double2, "zero", ::Unity::Mathematics::double2>();
}
inline void Unity::Mathematics::double2::_ctor(double_t x, double_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
inline void Unity::Mathematics::double2::_ctor(::Unity::Mathematics::double2 xy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xy);
}
inline void Unity::Mathematics::double2::_ctor(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double2::_ctor(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double2::_ctor(::Unity::Mathematics::bool2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::bool2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double2::_ctor(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double2::_ctor(::Unity::Mathematics::int2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double2::_ctor(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double2::_ctor(::Unity::Mathematics::uint2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double2::_ctor(::Unity::Mathematics::half v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double2::_ctor(::Unity::Mathematics::half2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::half2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double2::_ctor(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::Mathematics::double2::_ctor(::Unity::Mathematics::float2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Explicit___Unity__Mathematics__double2(bool v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Explicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Explicit___Unity__Mathematics__double2(::Unity::Mathematics::bool2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::Mathematics::bool2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::int2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::int2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2(uint32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::uint2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::half v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::half2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::half2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::float2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Multiply(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Multiply(::Unity::Mathematics::double2 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Multiply", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Multiply(double_t lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Multiply", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Addition(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Addition(::Unity::Mathematics::double2 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Addition", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Addition(double_t lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Addition", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Subtraction(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Subtraction(::Unity::Mathematics::double2 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Subtraction", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Subtraction(double_t lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Subtraction", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Division(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                           { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Division(::Unity::Mathematics::double2 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Division", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Division(double_t lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Division", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Modulus(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                           { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Modulus(::Unity::Mathematics::double2 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Modulus", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Modulus(double_t lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Modulus", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Increment(::Unity::Mathematics::double2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Increment", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_Decrement(::Unity::Mathematics::double2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Decrement", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_LessThan(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                           { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_LessThan(::Unity::Mathematics::double2 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_LessThan", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_LessThan(double_t lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_LessThan", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_LessThanOrEqual(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                           { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_LessThanOrEqual(::Unity::Mathematics::double2 lhs, double_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_GreaterThan(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                           { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_GreaterThan(::Unity::Mathematics::double2 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_GreaterThan(double_t lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_GreaterThan", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_GreaterThanOrEqual(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                           { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_GreaterThanOrEqual(::Unity::Mathematics::double2 lhs, double_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_UnaryNegation(::Unity::Mathematics::double2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::op_UnaryPlus(::Unity::Mathematics::double2 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_UnaryPlus", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_Equality(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_Equality(::Unity::Mathematics::double2 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Equality", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_Equality(double_t lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Equality", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_Inequality(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_Inequality(::Unity::Mathematics::double2 lhs, double_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Inequality", {}, { ::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::double2::op_Inequality(double_t lhs, ::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "op_Inequality", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_xxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_xxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_xxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_xxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_xyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_xyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_xyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_xyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_yxxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yxxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_yxxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yxxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_yxyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yxyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_yxyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yxyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_yyxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yyxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_yyxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yyxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_yyyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yyyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::double2::get_yyyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yyyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double2::get_xxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double2::get_xxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double2::get_xyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double2::get_xyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double2::get_yxx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yxx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double2::get_yxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double2::get_yyx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yyx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::double2::get_yyy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yyy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::get_xx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::get_xy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_xy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double2::set_xy(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "set_xy", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::get_yx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline void Unity::Mathematics::double2::set_yx(::Unity::Mathematics::double2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "set_yx", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::double2::get_yy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_yy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline double_t Unity::Mathematics::double2::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, index);
}
inline void Unity::Mathematics::double2::set_Item(int32_t index, double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline bool Unity::Mathematics::double2::Equals(::Unity::Mathematics::double2 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::double2>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::double2::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::double2>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::double2::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::double2>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::double2::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::double2>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::double2::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::double2>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2>"
constexpr Unity::Mathematics::double2::operator ::System::IEquatable_1<::Unity::Mathematics::double2>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::double2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::double2>* Unity::Mathematics::double2::i___System__IEquatable_1___Unity__Mathematics__double2_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::double2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::Mathematics::double2::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::double2::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Mathematics::double2::double2(double_t x, double_t y) noexcept {
  this->x = x;
  this->y = y;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::double2::double2() {}

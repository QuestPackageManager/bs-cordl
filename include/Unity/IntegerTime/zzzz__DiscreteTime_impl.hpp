#pragma once
// IWYU pragma private; include "Unity/IntegerTime/DiscreteTime.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::IntegerTime::DiscreteTime::*)(float_t)>(&::Unity::IntegerTime::DiscreteTime::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6a56c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::IntegerTime::DiscreteTime::*)(double_t)>(&::Unity::IntegerTime::DiscreteTime::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6a56cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::IntegerTime::DiscreteTime::*)(int64_t, int32_t)>(&::Unity::IntegerTime::DiscreteTime::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a56de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.FromTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IntegerTime::DiscreteTime (*)(int64_t)>(&::Unity::IntegerTime::DiscreteTime::FromTicks)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a56dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { "FromTicks", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.op_Explicit_float_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::IntegerTime::DiscreteTime)>(&::Unity::IntegerTime::DiscreteTime::op_Explicit_float_t)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6a56df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.op_Explicit_double_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Unity::IntegerTime::DiscreteTime)>(&::Unity::IntegerTime::DiscreteTime::op_Explicit_double_t)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a56e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::IntegerTime::DiscreteTime, ::Unity::IntegerTime::DiscreteTime)>(&::Unity::IntegerTime::DiscreteTime::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a56e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::IntegerTime::DiscreteTime, ::Unity::IntegerTime::DiscreteTime)>(&::Unity::IntegerTime::DiscreteTime::op_GreaterThan)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a56e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(),
                                                { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::IntegerTime::DiscreteTime, ::Unity::IntegerTime::DiscreteTime)>(&::Unity::IntegerTime::DiscreteTime::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a56e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(),
                                                { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IntegerTime::DiscreteTime (*)(::Unity::IntegerTime::DiscreteTime, ::Unity::IntegerTime::DiscreteTime)>(
    &::Unity::IntegerTime::DiscreteTime::op_Addition)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a56e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IntegerTime::DiscreteTime (*)(::Unity::IntegerTime::DiscreteTime, ::Unity::IntegerTime::DiscreteTime)>(
    &::Unity::IntegerTime::DiscreteTime::op_Subtraction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a56ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(),
                                                { "op_Subtraction", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::IntegerTime::DiscreteTime::*)(::Unity::IntegerTime::DiscreteTime)>(&::Unity::IntegerTime::DiscreteTime::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a56f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { "Equals", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::IntegerTime::DiscreteTime::*)(::System::Object*)>(&::Unity::IntegerTime::DiscreteTime::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6a56f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { ::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::IntegerTime::DiscreteTime::*)()>(&::Unity::IntegerTime::DiscreteTime::GetHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a56fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { ::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::IntegerTime::DiscreteTime::*)()>(&::Unity::IntegerTime::DiscreteTime::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a56fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { ::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::IntegerTime::DiscreteTime::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::IntegerTime::DiscreteTime::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a57040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::DiscreteTime.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::IntegerTime::DiscreteTime::*)(::Unity::IntegerTime::DiscreteTime)>(&::Unity::IntegerTime::DiscreteTime::CompareTo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a570d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
    return ___internal_method;
  }
};
inline void Unity::IntegerTime::DiscreteTime::setStaticF_Zero(::Unity::IntegerTime::DiscreteTime value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::DiscreteTime, "Zero", ::Unity::IntegerTime::DiscreteTime>(std::forward<::Unity::IntegerTime::DiscreteTime>(value));
}
inline ::Unity::IntegerTime::DiscreteTime Unity::IntegerTime::DiscreteTime::getStaticF_Zero() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::DiscreteTime, "Zero", ::Unity::IntegerTime::DiscreteTime>();
}
inline void Unity::IntegerTime::DiscreteTime::setStaticF_MinValue(::Unity::IntegerTime::DiscreteTime value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::DiscreteTime, "MinValue", ::Unity::IntegerTime::DiscreteTime>(std::forward<::Unity::IntegerTime::DiscreteTime>(value));
}
inline ::Unity::IntegerTime::DiscreteTime Unity::IntegerTime::DiscreteTime::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::DiscreteTime, "MinValue", ::Unity::IntegerTime::DiscreteTime>();
}
inline void Unity::IntegerTime::DiscreteTime::setStaticF_MaxValue(::Unity::IntegerTime::DiscreteTime value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::DiscreteTime, "MaxValue", ::Unity::IntegerTime::DiscreteTime>(std::forward<::Unity::IntegerTime::DiscreteTime>(value));
}
inline ::Unity::IntegerTime::DiscreteTime Unity::IntegerTime::DiscreteTime::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::DiscreteTime, "MaxValue", ::Unity::IntegerTime::DiscreteTime>();
}
inline void Unity::IntegerTime::DiscreteTime::setStaticF_TicksPerSecondBits(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "TicksPerSecondBits", ::Unity::IntegerTime::DiscreteTime>(std::forward<int32_t>(value));
}
inline int32_t Unity::IntegerTime::DiscreteTime::getStaticF_TicksPerSecondBits() {
  return ::cordl_internals::getStaticField<int32_t, "TicksPerSecondBits", ::Unity::IntegerTime::DiscreteTime>();
}
inline void Unity::IntegerTime::DiscreteTime::setStaticF_NonPow2TpsBits(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "NonPow2TpsBits", ::Unity::IntegerTime::DiscreteTime>(std::forward<int32_t>(value));
}
inline int32_t Unity::IntegerTime::DiscreteTime::getStaticF_NonPow2TpsBits() {
  return ::cordl_internals::getStaticField<int32_t, "NonPow2TpsBits", ::Unity::IntegerTime::DiscreteTime>();
}
inline void Unity::IntegerTime::DiscreteTime::_ctor(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::IntegerTime::DiscreteTime::_ctor(double_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void Unity::IntegerTime::DiscreteTime::_ctor(int64_t v, int32_t _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v, _);
}
inline ::Unity::IntegerTime::DiscreteTime Unity::IntegerTime::DiscreteTime::FromTicks(int64_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { "FromTicks", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::DiscreteTime>(nullptr, ___internal_method, v);
}
inline float_t Unity::IntegerTime::DiscreteTime::op_Explicit_float_t(::Unity::IntegerTime::DiscreteTime d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, d);
}
inline double_t Unity::IntegerTime::DiscreteTime::op_Explicit_double_t(::Unity::IntegerTime::DiscreteTime d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { "op_Explicit", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
inline bool Unity::IntegerTime::DiscreteTime::op_Inequality(::Unity::IntegerTime::DiscreteTime lhs, ::Unity::IntegerTime::DiscreteTime rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::IntegerTime::DiscreteTime::op_GreaterThan(::Unity::IntegerTime::DiscreteTime lhs, ::Unity::IntegerTime::DiscreteTime rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(),
                                                           { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::IntegerTime::DiscreteTime::op_GreaterThanOrEqual(::Unity::IntegerTime::DiscreteTime lhs, ::Unity::IntegerTime::DiscreteTime rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(),
                                              { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::IntegerTime::DiscreteTime Unity::IntegerTime::DiscreteTime::op_Addition(::Unity::IntegerTime::DiscreteTime lhs, ::Unity::IntegerTime::DiscreteTime rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::DiscreteTime>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::IntegerTime::DiscreteTime Unity::IntegerTime::DiscreteTime::op_Subtraction(::Unity::IntegerTime::DiscreteTime lhs, ::Unity::IntegerTime::DiscreteTime rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::DiscreteTime>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::IntegerTime::DiscreteTime::Equals(::Unity::IntegerTime::DiscreteTime rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { "Equals", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::IntegerTime::DiscreteTime::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::IntegerTime::DiscreteTime::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::IntegerTime::DiscreteTime::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::IntegerTime::DiscreteTime::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline int32_t Unity::IntegerTime::DiscreteTime::CompareTo(::Unity::IntegerTime::DiscreteTime other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::DiscreteTime>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::IntegerTime::DiscreteTime>"
constexpr Unity::IntegerTime::DiscreteTime::operator ::System::IEquatable_1<::Unity::IntegerTime::DiscreteTime>*() {
  return static_cast<::System::IEquatable_1<::Unity::IntegerTime::DiscreteTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::IntegerTime::DiscreteTime>"
constexpr ::System::IEquatable_1<::Unity::IntegerTime::DiscreteTime>* Unity::IntegerTime::DiscreteTime::i___System__IEquatable_1___Unity__IntegerTime__DiscreteTime_() {
  return static_cast<::System::IEquatable_1<::Unity::IntegerTime::DiscreteTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::IntegerTime::DiscreteTime::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::IntegerTime::DiscreteTime::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::IntegerTime::DiscreteTime>"
constexpr Unity::IntegerTime::DiscreteTime::operator ::System::IComparable_1<::Unity::IntegerTime::DiscreteTime>*() {
  return static_cast<::System::IComparable_1<::Unity::IntegerTime::DiscreteTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::IntegerTime::DiscreteTime>"
constexpr ::System::IComparable_1<::Unity::IntegerTime::DiscreteTime>* Unity::IntegerTime::DiscreteTime::i___System__IComparable_1___Unity__IntegerTime__DiscreteTime_() {
  return static_cast<::System::IComparable_1<::Unity::IntegerTime::DiscreteTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Value", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IntegerTime::DiscreteTime::DiscreteTime(int64_t Value) noexcept {
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::Unity::IntegerTime::DiscreteTime::DiscreteTime() {}

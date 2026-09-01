#pragma once
// IWYU pragma private; include "System\Decimal.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "System/zzzz__MidpointRounding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DecCalc_Decimal_RoundingMode::DecCalc_Decimal_RoundingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::DecCalc_Decimal_RoundingMode::DecCalc_Decimal_RoundingMode() {}
constexpr ::System::DecCalc_Decimal_RoundingMode System::DecCalc_Decimal_RoundingMode::ToEven{ static_cast<int32_t>(0x0) };
constexpr ::System::DecCalc_Decimal_RoundingMode System::DecCalc_Decimal_RoundingMode::AwayFromZero{ static_cast<int32_t>(0x1) };
constexpr ::System::DecCalc_Decimal_RoundingMode System::DecCalc_Decimal_RoundingMode::Truncate{ static_cast<int32_t>(0x2) };
constexpr ::System::DecCalc_Decimal_RoundingMode System::DecCalc_Decimal_RoundingMode::Floor{ static_cast<int32_t>(0x3) };
constexpr ::System::DecCalc_Decimal_RoundingMode System::DecCalc_Decimal_RoundingMode::Ceiling{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::System::DecCalc_Decimal_PowerOvfl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DecCalc_Decimal_PowerOvfl::*)(uint32_t, uint32_t, uint32_t)>(&::System::DecCalc_Decimal_PowerOvfl::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ca8a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_PowerOvfl>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void System::DecCalc_Decimal_PowerOvfl::_ctor(uint32_t hi, uint32_t mid, uint32_t lo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_PowerOvfl>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hi, mid, lo);
}
// Ctor Parameters [CppParam { name: "Hi", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MidLo", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DecCalc_Decimal_PowerOvfl::DecCalc_Decimal_PowerOvfl(uint32_t Hi, uint64_t MidLo) noexcept {
  this->Hi = Hi;
  this->MidLo = MidLo;
}
// Ctor Parameters []
constexpr ::System::DecCalc_Decimal_PowerOvfl::DecCalc_Decimal_PowerOvfl() {}
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf12.get_Low64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::DecCalc_Decimal_Buf12::*)()>(&::System::DecCalc_Decimal_Buf12::get_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf12>(), { "get_Low64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf12.set_Low64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DecCalc_Decimal_Buf12::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf12::set_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca7004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf12>(), { "set_Low64", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf12.get_High64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::DecCalc_Decimal_Buf12::*)()>(&::System::DecCalc_Decimal_Buf12::get_High64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf12>(), { "get_High64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf12.set_High64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DecCalc_Decimal_Buf12::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf12::set_High64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf12>(), { "set_High64", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
constexpr uint32_t& System::DecCalc_Decimal_Buf12::__cordl_internal_get_U0() {
  return this->___U0;
}
constexpr uint32_t const& System::DecCalc_Decimal_Buf12::__cordl_internal_get_U0() const {
  return this->___U0;
}
constexpr void System::DecCalc_Decimal_Buf12::__cordl_internal_set_U0(uint32_t value) {
  this->___U0 = value;
}
constexpr uint32_t& System::DecCalc_Decimal_Buf12::__cordl_internal_get_U1() {
  return this->___U1;
}
constexpr uint32_t const& System::DecCalc_Decimal_Buf12::__cordl_internal_get_U1() const {
  return this->___U1;
}
constexpr void System::DecCalc_Decimal_Buf12::__cordl_internal_set_U1(uint32_t value) {
  this->___U1 = value;
}
constexpr uint32_t& System::DecCalc_Decimal_Buf12::__cordl_internal_get_U2() {
  return this->___U2;
}
constexpr uint32_t const& System::DecCalc_Decimal_Buf12::__cordl_internal_get_U2() const {
  return this->___U2;
}
constexpr void System::DecCalc_Decimal_Buf12::__cordl_internal_set_U2(uint32_t value) {
  this->___U2 = value;
}
constexpr uint64_t& System::DecCalc_Decimal_Buf12::__cordl_internal_get_ulo64LE() {
  return this->___ulo64LE;
}
constexpr uint64_t const& System::DecCalc_Decimal_Buf12::__cordl_internal_get_ulo64LE() const {
  return this->___ulo64LE;
}
constexpr void System::DecCalc_Decimal_Buf12::__cordl_internal_set_ulo64LE(uint64_t value) {
  this->___ulo64LE = value;
}
constexpr uint64_t& System::DecCalc_Decimal_Buf12::__cordl_internal_get_uhigh64LE() {
  return this->___uhigh64LE;
}
constexpr uint64_t const& System::DecCalc_Decimal_Buf12::__cordl_internal_get_uhigh64LE() const {
  return this->___uhigh64LE;
}
constexpr void System::DecCalc_Decimal_Buf12::__cordl_internal_set_uhigh64LE(uint64_t value) {
  this->___uhigh64LE = value;
}
inline uint64_t System::DecCalc_Decimal_Buf12::get_Low64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf12>(), { "get_Low64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void System::DecCalc_Decimal_Buf12::set_Low64(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf12>(), { "set_Low64", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint64_t System::DecCalc_Decimal_Buf12::get_High64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf12>(), { "get_High64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void System::DecCalc_Decimal_Buf12::set_High64(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf12>(), { "set_High64", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "U0", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U1", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U2",
// ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulo64LE", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uhigh64LE", ty: "uint64_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::System::DecCalc_Decimal_Buf12::DecCalc_Decimal_Buf12(uint32_t U0, uint32_t U1, uint32_t U2, uint64_t ulo64LE, uint64_t uhigh64LE) noexcept {
  this->U0 = U0;
  this->U1 = U1;
  this->U2 = U2;
  this->ulo64LE = ulo64LE;
  this->uhigh64LE = uhigh64LE;
}
// Ctor Parameters []
constexpr ::System::DecCalc_Decimal_Buf12::DecCalc_Decimal_Buf12() {}
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf16.get_Low64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::DecCalc_Decimal_Buf16::*)()>(&::System::DecCalc_Decimal_Buf16::get_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca74e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf16>(), { "get_Low64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf16.set_Low64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DecCalc_Decimal_Buf16::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf16::set_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca74f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf16>(), { "set_Low64", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf16.get_High64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::DecCalc_Decimal_Buf16::*)()>(&::System::DecCalc_Decimal_Buf16::get_High64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca74e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf16>(), { "get_High64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf16.set_High64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DecCalc_Decimal_Buf16::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf16::set_High64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca87f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf16>(), { "set_High64", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
constexpr uint32_t& System::DecCalc_Decimal_Buf16::__cordl_internal_get_U0() {
  return this->___U0;
}
constexpr uint32_t const& System::DecCalc_Decimal_Buf16::__cordl_internal_get_U0() const {
  return this->___U0;
}
constexpr void System::DecCalc_Decimal_Buf16::__cordl_internal_set_U0(uint32_t value) {
  this->___U0 = value;
}
constexpr uint32_t& System::DecCalc_Decimal_Buf16::__cordl_internal_get_U1() {
  return this->___U1;
}
constexpr uint32_t const& System::DecCalc_Decimal_Buf16::__cordl_internal_get_U1() const {
  return this->___U1;
}
constexpr void System::DecCalc_Decimal_Buf16::__cordl_internal_set_U1(uint32_t value) {
  this->___U1 = value;
}
constexpr uint32_t& System::DecCalc_Decimal_Buf16::__cordl_internal_get_U2() {
  return this->___U2;
}
constexpr uint32_t const& System::DecCalc_Decimal_Buf16::__cordl_internal_get_U2() const {
  return this->___U2;
}
constexpr void System::DecCalc_Decimal_Buf16::__cordl_internal_set_U2(uint32_t value) {
  this->___U2 = value;
}
constexpr uint32_t& System::DecCalc_Decimal_Buf16::__cordl_internal_get_U3() {
  return this->___U3;
}
constexpr uint32_t const& System::DecCalc_Decimal_Buf16::__cordl_internal_get_U3() const {
  return this->___U3;
}
constexpr void System::DecCalc_Decimal_Buf16::__cordl_internal_set_U3(uint32_t value) {
  this->___U3 = value;
}
constexpr uint64_t& System::DecCalc_Decimal_Buf16::__cordl_internal_get_ulo64LE() {
  return this->___ulo64LE;
}
constexpr uint64_t const& System::DecCalc_Decimal_Buf16::__cordl_internal_get_ulo64LE() const {
  return this->___ulo64LE;
}
constexpr void System::DecCalc_Decimal_Buf16::__cordl_internal_set_ulo64LE(uint64_t value) {
  this->___ulo64LE = value;
}
constexpr uint64_t& System::DecCalc_Decimal_Buf16::__cordl_internal_get_uhigh64LE() {
  return this->___uhigh64LE;
}
constexpr uint64_t const& System::DecCalc_Decimal_Buf16::__cordl_internal_get_uhigh64LE() const {
  return this->___uhigh64LE;
}
constexpr void System::DecCalc_Decimal_Buf16::__cordl_internal_set_uhigh64LE(uint64_t value) {
  this->___uhigh64LE = value;
}
inline uint64_t System::DecCalc_Decimal_Buf16::get_Low64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf16>(), { "get_Low64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void System::DecCalc_Decimal_Buf16::set_Low64(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf16>(), { "set_Low64", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint64_t System::DecCalc_Decimal_Buf16::get_High64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf16>(), { "get_High64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void System::DecCalc_Decimal_Buf16::set_High64(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf16>(), { "set_High64", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "U0", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U1", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U2",
// ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U3", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulo64LE", ty: "uint64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "uhigh64LE", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DecCalc_Decimal_Buf16::DecCalc_Decimal_Buf16(uint32_t U0, uint32_t U1, uint32_t U2, uint32_t U3, uint64_t ulo64LE, uint64_t uhigh64LE) noexcept {
  this->U0 = U0;
  this->U1 = U1;
  this->U2 = U2;
  this->U3 = U3;
  this->ulo64LE = ulo64LE;
  this->uhigh64LE = uhigh64LE;
}
// Ctor Parameters []
constexpr ::System::DecCalc_Decimal_Buf16::DecCalc_Decimal_Buf16() {}
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf24.get_Low64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::DecCalc_Decimal_Buf24::*)()>(&::System::DecCalc_Decimal_Buf24::get_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca8614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf24>(), { "get_Low64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf24.set_Low64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DecCalc_Decimal_Buf24::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf24::set_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca8604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf24>(), { "set_Low64", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf24.set_Mid64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DecCalc_Decimal_Buf24::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf24::set_Mid64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca860c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf24>(), { "set_Mid64", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf24.set_High64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DecCalc_Decimal_Buf24::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf24::set_High64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca87f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf24>(), { "set_High64", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
constexpr uint32_t& System::DecCalc_Decimal_Buf24::__cordl_internal_get_U0() {
  return this->___U0;
}
constexpr uint32_t const& System::DecCalc_Decimal_Buf24::__cordl_internal_get_U0() const {
  return this->___U0;
}
constexpr void System::DecCalc_Decimal_Buf24::__cordl_internal_set_U0(uint32_t value) {
  this->___U0 = value;
}
constexpr uint32_t& System::DecCalc_Decimal_Buf24::__cordl_internal_get_U1() {
  return this->___U1;
}
constexpr uint32_t const& System::DecCalc_Decimal_Buf24::__cordl_internal_get_U1() const {
  return this->___U1;
}
constexpr void System::DecCalc_Decimal_Buf24::__cordl_internal_set_U1(uint32_t value) {
  this->___U1 = value;
}
constexpr uint32_t& System::DecCalc_Decimal_Buf24::__cordl_internal_get_U2() {
  return this->___U2;
}
constexpr uint32_t const& System::DecCalc_Decimal_Buf24::__cordl_internal_get_U2() const {
  return this->___U2;
}
constexpr void System::DecCalc_Decimal_Buf24::__cordl_internal_set_U2(uint32_t value) {
  this->___U2 = value;
}
constexpr uint32_t& System::DecCalc_Decimal_Buf24::__cordl_internal_get_U3() {
  return this->___U3;
}
constexpr uint32_t const& System::DecCalc_Decimal_Buf24::__cordl_internal_get_U3() const {
  return this->___U3;
}
constexpr void System::DecCalc_Decimal_Buf24::__cordl_internal_set_U3(uint32_t value) {
  this->___U3 = value;
}
constexpr uint32_t& System::DecCalc_Decimal_Buf24::__cordl_internal_get_U4() {
  return this->___U4;
}
constexpr uint32_t const& System::DecCalc_Decimal_Buf24::__cordl_internal_get_U4() const {
  return this->___U4;
}
constexpr void System::DecCalc_Decimal_Buf24::__cordl_internal_set_U4(uint32_t value) {
  this->___U4 = value;
}
constexpr uint32_t& System::DecCalc_Decimal_Buf24::__cordl_internal_get_U5() {
  return this->___U5;
}
constexpr uint32_t const& System::DecCalc_Decimal_Buf24::__cordl_internal_get_U5() const {
  return this->___U5;
}
constexpr void System::DecCalc_Decimal_Buf24::__cordl_internal_set_U5(uint32_t value) {
  this->___U5 = value;
}
constexpr uint64_t& System::DecCalc_Decimal_Buf24::__cordl_internal_get_ulo64LE() {
  return this->___ulo64LE;
}
constexpr uint64_t const& System::DecCalc_Decimal_Buf24::__cordl_internal_get_ulo64LE() const {
  return this->___ulo64LE;
}
constexpr void System::DecCalc_Decimal_Buf24::__cordl_internal_set_ulo64LE(uint64_t value) {
  this->___ulo64LE = value;
}
constexpr uint64_t& System::DecCalc_Decimal_Buf24::__cordl_internal_get_umid64LE() {
  return this->___umid64LE;
}
constexpr uint64_t const& System::DecCalc_Decimal_Buf24::__cordl_internal_get_umid64LE() const {
  return this->___umid64LE;
}
constexpr void System::DecCalc_Decimal_Buf24::__cordl_internal_set_umid64LE(uint64_t value) {
  this->___umid64LE = value;
}
constexpr uint64_t& System::DecCalc_Decimal_Buf24::__cordl_internal_get_uhigh64LE() {
  return this->___uhigh64LE;
}
constexpr uint64_t const& System::DecCalc_Decimal_Buf24::__cordl_internal_get_uhigh64LE() const {
  return this->___uhigh64LE;
}
constexpr void System::DecCalc_Decimal_Buf24::__cordl_internal_set_uhigh64LE(uint64_t value) {
  this->___uhigh64LE = value;
}
inline uint64_t System::DecCalc_Decimal_Buf24::get_Low64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf24>(), { "get_Low64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void System::DecCalc_Decimal_Buf24::set_Low64(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf24>(), { "set_Low64", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::DecCalc_Decimal_Buf24::set_Mid64(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf24>(), { "set_Mid64", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::DecCalc_Decimal_Buf24::set_High64(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DecCalc_Decimal_Buf24>(), { "set_High64", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "U0", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U1", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U2",
// ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U3", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U4", ty: "uint32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "U5", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulo64LE", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "umid64LE", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uhigh64LE", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DecCalc_Decimal_Buf24::DecCalc_Decimal_Buf24(uint32_t U0, uint32_t U1, uint32_t U2, uint32_t U3, uint32_t U4, uint32_t U5, uint64_t ulo64LE, uint64_t umid64LE,
                                                                 uint64_t uhigh64LE) noexcept {
  this->U0 = U0;
  this->U1 = U1;
  this->U2 = U2;
  this->U3 = U3;
  this->U4 = U4;
  this->U5 = U5;
  this->ulo64LE = ulo64LE;
  this->umid64LE = umid64LE;
  this->uhigh64LE = uhigh64LE;
}
// Ctor Parameters []
constexpr ::System::DecCalc_Decimal_Buf24::DecCalc_Decimal_Buf24() {}
//  Writing Method size for method: ::System::Decimal_DecCalc.get_High
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Decimal_DecCalc::*)()>(&::System::Decimal_DecCalc::get_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "get_High", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.set_High
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal_DecCalc::*)(uint32_t)>(&::System::Decimal_DecCalc::set_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "set_High", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.get_Low
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Decimal_DecCalc::*)()>(&::System::Decimal_DecCalc::get_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "get_Low", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.set_Low
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal_DecCalc::*)(uint32_t)>(&::System::Decimal_DecCalc::set_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "set_Low", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.get_Mid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Decimal_DecCalc::*)()>(&::System::Decimal_DecCalc::get_Mid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "get_Mid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.set_Mid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal_DecCalc::*)(uint32_t)>(&::System::Decimal_DecCalc::set_Mid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "set_Mid", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.get_IsNegative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Decimal_DecCalc::*)()>(&::System::Decimal_DecCalc::get_IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca6e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "get_IsNegative", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.get_Low64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::Decimal_DecCalc::*)()>(&::System::Decimal_DecCalc::get_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "get_Low64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.set_Low64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal_DecCalc::*)(uint64_t)>(&::System::Decimal_DecCalc::set_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "set_Low64", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.GetExponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(float_t)>(&::System::Decimal_DecCalc::GetExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca6e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "GetExponent", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.GetExponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(double_t)>(&::System::Decimal_DecCalc::GetExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca6e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "GetExponent", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.UInt32x32To64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t, uint32_t)>(&::System::Decimal_DecCalc::UInt32x32To64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "UInt32x32To64", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.UInt64x64To128
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, uint64_t, ::by_ref<::System::Decimal_DecCalc>)>(&::System::Decimal_DecCalc::UInt64x64To128)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5ca6e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                                { "UInt64x64To128", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.Div96By32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::System::DecCalc_Decimal_Buf12>, uint32_t)>(&::System::Decimal_DecCalc::Div96By32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ca6f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "Div96By32", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.Div96ByConst
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint64_t>, ::by_ref<uint32_t>, uint32_t)>(&::System::Decimal_DecCalc::Div96ByConst)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ca700c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                                             { "Div96ByConst", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.Unscale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>, ::by_ref<uint64_t>, ::by_ref<int32_t>)>(&::System::Decimal_DecCalc::Unscale)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5ca7048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                                             { "Unscale", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.Div96By64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::System::DecCalc_Decimal_Buf12>, uint64_t)>(&::System::Decimal_DecCalc::Div96By64)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ca72cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "Div96By64", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.Div128By96
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::System::DecCalc_Decimal_Buf16>, ::by_ref<::System::DecCalc_Decimal_Buf12>)>(&::System::Decimal_DecCalc::Div128By96)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ca73cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                                { "Div128By96", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf16>>(), ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.IncreaseScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::System::DecCalc_Decimal_Buf12>, uint32_t)>(&::System::Decimal_DecCalc::IncreaseScale)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ca74f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "IncreaseScale", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.IncreaseScale64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::DecCalc_Decimal_Buf12>, uint32_t)>(&::System::Decimal_DecCalc::IncreaseScale64)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ca7584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "IncreaseScale64", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.ScaleResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::DecCalc_Decimal_Buf24*, uint32_t, int32_t)>(&::System::Decimal_DecCalc::ScaleResult)> {
  constexpr static std::size_t size = 0xc00;
  constexpr static std::size_t addrs = 0x5ca7600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                                             { "ScaleResult", {}, { ::i2c::type_of<::System::DecCalc_Decimal_Buf24*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.DivByConst
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t*, uint32_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>, uint32_t)>(&::System::Decimal_DecCalc::DivByConst)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ca8200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "DivByConst",
                                                                                                {},
                                                                                                { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                                                                  ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.LeadingZeroCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::System::Decimal_DecCalc::LeadingZeroCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ca8250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "LeadingZeroCount", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.OverflowUnscale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::DecCalc_Decimal_Buf12>, int32_t, bool)>(&::System::Decimal_DecCalc::OverflowUnscale)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5ca82b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                                { "OverflowUnscale", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.SearchScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::DecCalc_Decimal_Buf12>, int32_t)>(&::System::Decimal_DecCalc::SearchScale)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5ca8410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "SearchScale", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.Add32To96
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DecCalc_Decimal_Buf12>, uint32_t)>(&::System::Decimal_DecCalc::Add32To96)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ca83e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "Add32To96", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.DecAddSub
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Decimal_DecCalc>, ::by_ref<::System::Decimal_DecCalc>, bool)>(&::System::Decimal_DecCalc::DecAddSub)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x5ca2398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                            { "DecAddSub", {}, { ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarDecCmp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::Decimal>, ::by_ref<::System::Decimal>)>(&::System::Decimal_DecCalc::VarDecCmp)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5ca2af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "VarDecCmp", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarDecCmpSub
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::Decimal>, ::by_ref<::System::Decimal>)>(&::System::Decimal_DecCalc::VarDecCmpSub)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5ca861c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "VarDecCmpSub", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarDecMul
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Decimal_DecCalc>, ::by_ref<::System::Decimal_DecCalc>)>(&::System::Decimal_DecCalc::VarDecMul)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x5ca41c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                                             { "VarDecMul", {}, { ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarDecFromR4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::by_ref<::System::Decimal_DecCalc>)>(&::System::Decimal_DecCalc::VarDecFromR4)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5ca1764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "VarDecFromR4", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarDecFromR8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(double_t, ::by_ref<::System::Decimal_DecCalc>)>(&::System::Decimal_DecCalc::VarDecFromR8)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5ca1bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "VarDecFromR8", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarR4FromDec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::System::Decimal>)>(&::System::Decimal_DecCalc::VarR4FromDec)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ca5b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "VarR4FromDec", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarR8FromDec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::by_ref<::System::Decimal>)>(&::System::Decimal_DecCalc::VarR8FromDec)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ca5484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "VarR8FromDec", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::Decimal>)>(&::System::Decimal_DecCalc::GetHashCode)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5ca3894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "GetHashCode", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarDecDiv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Decimal_DecCalc>, ::by_ref<::System::Decimal_DecCalc>)>(&::System::Decimal_DecCalc::VarDecDiv)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x5ca2eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                                             { "VarDecDiv", {}, { ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.InternalRound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Decimal_DecCalc>, uint32_t, ::System::DecCalc_Decimal_RoundingMode)>(&::System::Decimal_DecCalc::InternalRound)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5ca4938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                            { "InternalRound", {}, { ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::DecCalc_Decimal_RoundingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.DecDivMod1E9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::System::Decimal_DecCalc>)>(&::System::Decimal_DecCalc::DecDivMod1E9)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ca162c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "DecDivMod1E9", {}, { ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>() } })));
    return ___internal_method;
  }
};
constexpr uint32_t& System::Decimal_DecCalc::__cordl_internal_get_uflags() {
  return this->___uflags;
}
constexpr uint32_t const& System::Decimal_DecCalc::__cordl_internal_get_uflags() const {
  return this->___uflags;
}
constexpr void System::Decimal_DecCalc::__cordl_internal_set_uflags(uint32_t value) {
  this->___uflags = value;
}
constexpr uint32_t& System::Decimal_DecCalc::__cordl_internal_get_uhi() {
  return this->___uhi;
}
constexpr uint32_t const& System::Decimal_DecCalc::__cordl_internal_get_uhi() const {
  return this->___uhi;
}
constexpr void System::Decimal_DecCalc::__cordl_internal_set_uhi(uint32_t value) {
  this->___uhi = value;
}
constexpr uint32_t& System::Decimal_DecCalc::__cordl_internal_get_ulo() {
  return this->___ulo;
}
constexpr uint32_t const& System::Decimal_DecCalc::__cordl_internal_get_ulo() const {
  return this->___ulo;
}
constexpr void System::Decimal_DecCalc::__cordl_internal_set_ulo(uint32_t value) {
  this->___ulo = value;
}
constexpr uint32_t& System::Decimal_DecCalc::__cordl_internal_get_umid() {
  return this->___umid;
}
constexpr uint32_t const& System::Decimal_DecCalc::__cordl_internal_get_umid() const {
  return this->___umid;
}
constexpr void System::Decimal_DecCalc::__cordl_internal_set_umid(uint32_t value) {
  this->___umid = value;
}
constexpr uint64_t& System::Decimal_DecCalc::__cordl_internal_get_ulomidLE() {
  return this->___ulomidLE;
}
constexpr uint64_t const& System::Decimal_DecCalc::__cordl_internal_get_ulomidLE() const {
  return this->___ulomidLE;
}
constexpr void System::Decimal_DecCalc::__cordl_internal_set_ulomidLE(uint64_t value) {
  this->___ulomidLE = value;
}
inline void System::Decimal_DecCalc::setStaticF_s_powers10(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "s_powers10", ::System::Decimal_DecCalc>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Decimal_DecCalc::getStaticF_s_powers10() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "s_powers10", ::System::Decimal_DecCalc>();
}
inline void System::Decimal_DecCalc::setStaticF_s_ulongPowers10(::ArrayW<uint64_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint64_t>, "s_ulongPowers10", ::System::Decimal_DecCalc>(std::forward<::ArrayW<uint64_t>>(value));
}
inline ::ArrayW<uint64_t> System::Decimal_DecCalc::getStaticF_s_ulongPowers10() {
  return ::cordl_internals::getStaticField<::ArrayW<uint64_t>, "s_ulongPowers10", ::System::Decimal_DecCalc>();
}
inline void System::Decimal_DecCalc::setStaticF_s_doublePowers10(::ArrayW<double_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<double_t>, "s_doublePowers10", ::System::Decimal_DecCalc>(std::forward<::ArrayW<double_t>>(value));
}
inline ::ArrayW<double_t> System::Decimal_DecCalc::getStaticF_s_doublePowers10() {
  return ::cordl_internals::getStaticField<::ArrayW<double_t>, "s_doublePowers10", ::System::Decimal_DecCalc>();
}
inline void System::Decimal_DecCalc::setStaticF_PowerOvflValues(::ArrayW<::System::DecCalc_Decimal_PowerOvfl> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::DecCalc_Decimal_PowerOvfl>, "PowerOvflValues", ::System::Decimal_DecCalc>(std::forward<::ArrayW<::System::DecCalc_Decimal_PowerOvfl>>(value));
}
inline ::ArrayW<::System::DecCalc_Decimal_PowerOvfl> System::Decimal_DecCalc::getStaticF_PowerOvflValues() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::DecCalc_Decimal_PowerOvfl>, "PowerOvflValues", ::System::Decimal_DecCalc>();
}
inline uint32_t System::Decimal_DecCalc::get_High() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "get_High", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void System::Decimal_DecCalc::set_High(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "set_High", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t System::Decimal_DecCalc::get_Low() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "get_Low", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void System::Decimal_DecCalc::set_Low(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "set_Low", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t System::Decimal_DecCalc::get_Mid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "get_Mid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void System::Decimal_DecCalc::set_Mid(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "set_Mid", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool System::Decimal_DecCalc::get_IsNegative() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "get_IsNegative", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline uint64_t System::Decimal_DecCalc::get_Low64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "get_Low64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void System::Decimal_DecCalc::set_Low64(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "set_Low64", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t System::Decimal_DecCalc::GetExponent(float_t f) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "GetExponent", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, f);
}
inline uint32_t System::Decimal_DecCalc::GetExponent(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "GetExponent", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, d);
}
inline uint64_t System::Decimal_DecCalc::UInt32x32To64(uint32_t a, uint32_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "UInt32x32To64", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, a, b);
}
inline void System::Decimal_DecCalc::UInt64x64To128(uint64_t a, uint64_t b, ::by_ref<::System::Decimal_DecCalc> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                              { "UInt64x64To128", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, result);
}
inline uint32_t System::Decimal_DecCalc::Div96By32(::by_ref<::System::DecCalc_Decimal_Buf12> bufNum, uint32_t den) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "Div96By32", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bufNum, den);
}
inline bool System::Decimal_DecCalc::Div96ByConst(::by_ref<uint64_t> high64, ::by_ref<uint32_t> low, uint32_t pow) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                                           { "Div96ByConst", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, high64, low, pow);
}
inline void System::Decimal_DecCalc::Unscale(::by_ref<uint32_t> low, ::by_ref<uint64_t> high64, ::by_ref<int32_t> scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                                           { "Unscale", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, low, high64, scale);
}
inline uint32_t System::Decimal_DecCalc::Div96By64(::by_ref<::System::DecCalc_Decimal_Buf12> bufNum, uint64_t den) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "Div96By64", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bufNum, den);
}
inline uint32_t System::Decimal_DecCalc::Div128By96(::by_ref<::System::DecCalc_Decimal_Buf16> bufNum, ::by_ref<::System::DecCalc_Decimal_Buf12> bufDen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                              { "Div128By96", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf16>>(), ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bufNum, bufDen);
}
inline uint32_t System::Decimal_DecCalc::IncreaseScale(::by_ref<::System::DecCalc_Decimal_Buf12> bufNum, uint32_t power) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "IncreaseScale", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bufNum, power);
}
inline void System::Decimal_DecCalc::IncreaseScale64(::by_ref<::System::DecCalc_Decimal_Buf12> bufNum, uint32_t power) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "IncreaseScale64", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bufNum, power);
}
inline int32_t System::Decimal_DecCalc::ScaleResult(::System::DecCalc_Decimal_Buf24* bufRes, uint32_t hiRes, int32_t scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                                           { "ScaleResult", {}, { ::i2c::type_of<::System::DecCalc_Decimal_Buf24*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bufRes, hiRes, scale);
}
inline uint32_t System::Decimal_DecCalc::DivByConst(uint32_t* result, uint32_t hiRes, ::by_ref<uint32_t> quotient, ::by_ref<uint32_t> remainder, uint32_t power) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Decimal_DecCalc>(),
          { "DivByConst", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, result, hiRes, quotient, remainder, power);
}
inline int32_t System::Decimal_DecCalc::LeadingZeroCount(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "LeadingZeroCount", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Decimal_DecCalc::OverflowUnscale(::by_ref<::System::DecCalc_Decimal_Buf12> bufQuo, int32_t scale, bool sticky) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                              { "OverflowUnscale", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bufQuo, scale, sticky);
}
inline int32_t System::Decimal_DecCalc::SearchScale(::by_ref<::System::DecCalc_Decimal_Buf12> bufQuo, int32_t scale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "SearchScale", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bufQuo, scale);
}
inline bool System::Decimal_DecCalc::Add32To96(::by_ref<::System::DecCalc_Decimal_Buf12> bufNum, uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "Add32To96", {}, { ::i2c::type_of<::by_ref<::System::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bufNum, value);
}
inline void System::Decimal_DecCalc::DecAddSub(::by_ref<::System::Decimal_DecCalc> d1, ::by_ref<::System::Decimal_DecCalc> d2, bool sign) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                       { "DecAddSub", {}, { ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d1, d2, sign);
}
inline int32_t System::Decimal_DecCalc::VarDecCmp(::by_ref<::System::Decimal> d1, ::by_ref<::System::Decimal> d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "VarDecCmp", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, d1, d2);
}
inline int32_t System::Decimal_DecCalc::VarDecCmpSub(::by_ref<::System::Decimal> d1, ::by_ref<::System::Decimal> d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "VarDecCmpSub", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, d1, d2);
}
inline void System::Decimal_DecCalc::VarDecMul(::by_ref<::System::Decimal_DecCalc> d1, ::by_ref<::System::Decimal_DecCalc> d2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                                           { "VarDecMul", {}, { ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d1, d2);
}
inline void System::Decimal_DecCalc::VarDecFromR4(float_t input, ::by_ref<::System::Decimal_DecCalc> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "VarDecFromR4", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, result);
}
inline void System::Decimal_DecCalc::VarDecFromR8(double_t input, ::by_ref<::System::Decimal_DecCalc> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "VarDecFromR8", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, result);
}
inline float_t System::Decimal_DecCalc::VarR4FromDec(::by_ref<::System::Decimal> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "VarR4FromDec", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline double_t System::Decimal_DecCalc::VarR8FromDec(::by_ref<::System::Decimal> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "VarR8FromDec", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Decimal_DecCalc::GetHashCode(::by_ref<::System::Decimal> d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "GetHashCode", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, d);
}
inline void System::Decimal_DecCalc::VarDecDiv(::by_ref<::System::Decimal_DecCalc> d1, ::by_ref<::System::Decimal_DecCalc> d2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                                                           { "VarDecDiv", {}, { ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d1, d2);
}
inline void System::Decimal_DecCalc::InternalRound(::by_ref<::System::Decimal_DecCalc> d, uint32_t scale, ::System::DecCalc_Decimal_RoundingMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(),
                          { "InternalRound", {}, { ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::DecCalc_Decimal_RoundingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d, scale, mode);
}
inline uint32_t System::Decimal_DecCalc::DecDivMod1E9(::by_ref<::System::Decimal_DecCalc> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal_DecCalc>(), { "DecDivMod1E9", {}, { ::i2c::type_of<::by_ref<::System::Decimal_DecCalc>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "uflags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uhi", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "ulo", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "umid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulomidLE", ty: "uint64_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::System::Decimal_DecCalc::Decimal_DecCalc(uint32_t uflags, uint32_t uhi, uint32_t ulo, uint32_t umid, uint64_t ulomidLE) noexcept {
  this->uflags = uflags;
  this->uhi = uhi;
  this->ulo = ulo;
  this->umid = umid;
  this->ulomidLE = ulomidLE;
}
// Ctor Parameters []
constexpr ::System::Decimal_DecCalc::Decimal_DecCalc() {}
//  Writing Method size for method: ::System::Decimal.get_High
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Decimal::*)()>(&::System::Decimal::get_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca14e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "get_High", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Low
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Decimal::*)()>(&::System::Decimal::get_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca14f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "get_Low", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Mid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Decimal::*)()>(&::System::Decimal::get_Mid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca14f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "get_Mid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_IsNegative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Decimal::*)()>(&::System::Decimal::get_IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca1500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "get_IsNegative", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Decimal::*)()>(&::System::Decimal::get_Scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca150c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "get_Scale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Low64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::Decimal::*)()>(&::System::Decimal::get_Low64)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ca1514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "get_Low64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.AsMutable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::System::Decimal_DecCalc> (*)(::by_ref<::System::Decimal>)>(&::System::Decimal::AsMutable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca1558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "AsMutable", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.DecDivMod1E9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::System::Decimal>)>(&::System::Decimal::DecDivMod1E9)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ca155c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "DecDivMod1E9", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(int32_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ca1688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(uint32_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca16a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(int64_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ca16ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(uint64_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca16cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(float_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ca16d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(double_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ca1b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Decimal::IsValid)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ca2010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "IsValid", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(::ArrayW<int32_t>)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5ca202c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(int32_t, int32_t, int32_t, bool, uint8_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ca2170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Decimal>(),
                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(::System::Object*)>(&::System::Decimal::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ca2200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(::by_ref<::System::Decimal>, int32_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ca22b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Abs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::by_ref<::System::Decimal>)>(&::System::Decimal::Abs)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ca22c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Abs", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::Add)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5ca22dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Add", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::Compare)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ca2a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Compare", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Decimal::*)(::System::Object*)>(&::System::Decimal::CompareTo)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ca2c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Decimal::*)(::System::Decimal)>(&::System::Decimal::CompareTo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ca2d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "CompareTo", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Divide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::Divide)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ca2df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Divide", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Decimal::*)(::System::Object*)>(&::System::Decimal::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ca36c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ::i2c::class_of<::System::Decimal>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Decimal::*)(::System::Decimal)>(&::System::Decimal::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ca37a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Equals", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Decimal::*)()>(&::System::Decimal::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ca383c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ::i2c::class_of<::System::Decimal>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Decimal::*)()>(&::System::Decimal::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ca39e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ::i2c::class_of<::System::Decimal>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ca3a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Decimal::*)(::StringW, ::System::IFormatProvider*)>(&::System::Decimal::ToString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ca3b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.TryFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Decimal::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(
    &::System::Decimal::TryFormat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ca3c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "TryFormat",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                          ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::StringW, ::System::IFormatProvider*)>(&::System::Decimal::Parse)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ca3cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*)>(&::System::Decimal::Parse)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ca3dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Decimal>(),
                                         { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*, ::by_ref<::System::Decimal>)>(
    &::System::Decimal::TryParse)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5ca3e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "TryParse",
                                                                                        {},
                                                                                        { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.GetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::System::Decimal)>(&::System::Decimal::GetBits)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ca3f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "GetBits", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::System::Decimal> (*)(::by_ref<::System::Decimal>, ::by_ref<::System::Decimal>)>(&::System::Decimal::Max)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ca4028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Max", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::System::Decimal> (*)(::by_ref<::System::Decimal>, ::by_ref<::System::Decimal>)>(&::System::Decimal::Min)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ca409c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Min", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::Multiply)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ca4110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Multiply", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Negate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::Negate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca46c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Negate", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Round
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, int32_t)>(&::System::Decimal::Round)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ca46d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Round", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Round
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::by_ref<::System::Decimal>, int32_t, ::System::MidpointRounding)>(&::System::Decimal::Round)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5ca4768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(),
                                                { "Round", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::MidpointRounding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::Decimal)>(&::System::Decimal::ToByte)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ca4c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToByte", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::Decimal)>(&::System::Decimal::ToSByte)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ca4f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToSByte", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::Decimal)>(&::System::Decimal::ToInt16)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ca5280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToInt16", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Decimal)>(&::System::Decimal::ToDouble)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ca5400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToDouble", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Decimal)>(&::System::Decimal::ToInt32)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5ca50d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToInt32", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Decimal)>(&::System::Decimal::ToInt64)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5ca5594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToInt64", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::Decimal)>(&::System::Decimal::ToUInt16)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ca5754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToUInt16", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Decimal)>(&::System::Decimal::ToUInt32)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5ca4db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToUInt32", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Decimal)>(&::System::Decimal::ToUInt64)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5ca58d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToUInt64", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Decimal)>(&::System::Decimal::ToSingle)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ca5a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToSingle", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Truncate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::Truncate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ca5b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Truncate", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Truncate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Decimal>)>(&::System::Decimal::Truncate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ca5c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Truncate", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint8_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ca5d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int8_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ca5d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int16_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ca5d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint16_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ca5d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(char16_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ca5d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int32_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ca5d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint32_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ca5d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int64_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ca5da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint64_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca5db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit___System__Decimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(float_t)>(&::System::Decimal::op_Explicit___System__Decimal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ca5dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit___System__Decimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(double_t)>(&::System::Decimal::op_Explicit___System__Decimal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ca5e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_int32_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ca5e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_int64_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_int64_t)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ca5eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_uint64_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ca5f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_float_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_float_t)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ca5f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_double_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_double_t)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ca5fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::op_Increment)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ca6058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Increment", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Addition)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5ca60cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Addition", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Subtraction)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5ca6188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Subtraction", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Multiply)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ca6244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Multiply", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Division)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ca62fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Division", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Equality)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ca63b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Equality", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Inequality)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ca6448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Inequality", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_LessThan)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ca64dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_LessThan", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ca656c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_GreaterThan)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ca6600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_GreaterThan", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ca6694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.GetTypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (::System::Decimal::*)()>(&::System::Decimal::GetTypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "GetTypeCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToBoolean)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ca6730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToBoolean", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToChar)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ca6794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToChar", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToSByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ca6818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToSByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ca687c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ca68e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToUInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ca6944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToUInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToInt32)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ca69a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToUInt32)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ca6a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToUInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToInt64)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ca6a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToUInt64)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ca6ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToUInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToSingle)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ca6b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToSingle", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToDouble)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ca6b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToDouble", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToDecimal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca6c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToDecimal", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToDateTime)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ca6c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToDateTime", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Decimal::*)(::System::Type*, ::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ca6c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Decimal::__cordl_internal_get_flags() {
  return this->___flags;
}
constexpr int32_t const& System::Decimal::__cordl_internal_get_flags() const {
  return this->___flags;
}
constexpr void System::Decimal::__cordl_internal_set_flags(int32_t value) {
  this->___flags = value;
}
constexpr int32_t& System::Decimal::__cordl_internal_get_hi() {
  return this->___hi;
}
constexpr int32_t const& System::Decimal::__cordl_internal_get_hi() const {
  return this->___hi;
}
constexpr void System::Decimal::__cordl_internal_set_hi(int32_t value) {
  this->___hi = value;
}
constexpr int32_t& System::Decimal::__cordl_internal_get_lo() {
  return this->___lo;
}
constexpr int32_t const& System::Decimal::__cordl_internal_get_lo() const {
  return this->___lo;
}
constexpr void System::Decimal::__cordl_internal_set_lo(int32_t value) {
  this->___lo = value;
}
constexpr int32_t& System::Decimal::__cordl_internal_get_mid() {
  return this->___mid;
}
constexpr int32_t const& System::Decimal::__cordl_internal_get_mid() const {
  return this->___mid;
}
constexpr void System::Decimal::__cordl_internal_set_mid(int32_t value) {
  this->___mid = value;
}
constexpr uint64_t& System::Decimal::__cordl_internal_get_ulomidLE() {
  return this->___ulomidLE;
}
constexpr uint64_t const& System::Decimal::__cordl_internal_get_ulomidLE() const {
  return this->___ulomidLE;
}
constexpr void System::Decimal::__cordl_internal_set_ulomidLE(uint64_t value) {
  this->___ulomidLE = value;
}
inline void System::Decimal::setStaticF_Zero(::System::Decimal value) {
  ::cordl_internals::setStaticField<::System::Decimal, "Zero", ::System::Decimal>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_Zero() {
  return ::cordl_internals::getStaticField<::System::Decimal, "Zero", ::System::Decimal>();
}
inline void System::Decimal::setStaticF_One(::System::Decimal value) {
  ::cordl_internals::setStaticField<::System::Decimal, "One", ::System::Decimal>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_One() {
  return ::cordl_internals::getStaticField<::System::Decimal, "One", ::System::Decimal>();
}
inline void System::Decimal::setStaticF_MinusOne(::System::Decimal value) {
  ::cordl_internals::setStaticField<::System::Decimal, "MinusOne", ::System::Decimal>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_MinusOne() {
  return ::cordl_internals::getStaticField<::System::Decimal, "MinusOne", ::System::Decimal>();
}
inline void System::Decimal::setStaticF_MaxValue(::System::Decimal value) {
  ::cordl_internals::setStaticField<::System::Decimal, "MaxValue", ::System::Decimal>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::Decimal, "MaxValue", ::System::Decimal>();
}
inline void System::Decimal::setStaticF_MinValue(::System::Decimal value) {
  ::cordl_internals::setStaticField<::System::Decimal, "MinValue", ::System::Decimal>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::Decimal, "MinValue", ::System::Decimal>();
}
inline uint32_t System::Decimal::get_High() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "get_High", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t System::Decimal::get_Low() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "get_Low", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t System::Decimal::get_Mid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "get_Mid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline bool System::Decimal::get_IsNegative() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "get_IsNegative", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t System::Decimal::get_Scale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "get_Scale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint64_t System::Decimal::get_Low64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "get_Low64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::by_ref<::System::Decimal_DecCalc> System::Decimal::AsMutable(::by_ref<::System::Decimal> d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "AsMutable", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::System::Decimal_DecCalc>>(nullptr, ___internal_method, d);
}
inline uint32_t System::Decimal::DecDivMod1E9(::by_ref<::System::Decimal> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "DecDivMod1E9", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline void System::Decimal::_ctor(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Decimal::_ctor(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Decimal::_ctor(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Decimal::_ctor(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Decimal::_ctor(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Decimal::_ctor(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool System::Decimal::IsValid(int32_t flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "IsValid", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags);
}
inline void System::Decimal::_ctor(::ArrayW<int32_t> bits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bits);
}
inline void System::Decimal::_ctor(int32_t lo, int32_t mid, int32_t hi, bool isNegative, uint8_t scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Decimal>(),
                                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lo, mid, hi, isNegative, scale);
}
inline void System::Decimal::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sender);
}
inline void System::Decimal::_ctor(::by_ref<::System::Decimal> d, int32_t flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, d, flags);
}
inline ::System::Decimal System::Decimal::Abs(::by_ref<::System::Decimal> d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Abs", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::Add(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Add", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline int32_t System::Decimal::Compare(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Compare", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, d1, d2);
}
inline int32_t System::Decimal::CompareTo(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Decimal::CompareTo(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "CompareTo", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::Divide(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Divide", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Decimal>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool System::Decimal::Equals(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Equals", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline int32_t System::Decimal::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Decimal>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Decimal::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Decimal>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Decimal::ToString(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, provider);
}
inline ::StringW System::Decimal::ToString(::StringW format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, provider);
}
inline bool System::Decimal::TryFormat(::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "TryFormat",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                        ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination, charsWritten, format, provider);
}
inline ::System::Decimal System::Decimal::Parse(::StringW s, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, s, provider);
}
inline ::System::Decimal System::Decimal::Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Decimal>(),
                                       { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, s, style, provider);
}
inline bool System::Decimal::TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ::by_ref<::System::Decimal> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "TryParse",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                                     ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, style, provider, result);
}
inline ::ArrayW<int32_t> System::Decimal::GetBits(::System::Decimal d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "GetBits", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, d);
}
inline ::by_ref<::System::Decimal> System::Decimal::Max(::by_ref<::System::Decimal> d1, ::by_ref<::System::Decimal> d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Max", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::System::Decimal>>(nullptr, ___internal_method, d1, d2);
}
inline ::by_ref<::System::Decimal> System::Decimal::Min(::by_ref<::System::Decimal> d1, ::by_ref<::System::Decimal> d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Min", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::System::Decimal>>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::Multiply(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Multiply", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::Negate(::System::Decimal d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Negate", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::Round(::System::Decimal d, int32_t decimals) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Round", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d, decimals);
}
inline ::System::Decimal System::Decimal::Round(::by_ref<::System::Decimal> d, int32_t decimals, ::System::MidpointRounding mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(),
                                              { "Round", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::MidpointRounding>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d, decimals, mode);
}
inline uint8_t System::Decimal::ToByte(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToByte", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Decimal::ToSByte(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToSByte", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Decimal::ToInt16(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToInt16", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline double_t System::Decimal::ToDouble(::System::Decimal d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToDouble", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
inline int32_t System::Decimal::ToInt32(::System::Decimal d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToInt32", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, d);
}
inline int64_t System::Decimal::ToInt64(::System::Decimal d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToInt64", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, d);
}
inline uint16_t System::Decimal::ToUInt16(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToUInt16", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Decimal::ToUInt32(::System::Decimal d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToUInt32", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, d);
}
inline uint64_t System::Decimal::ToUInt64(::System::Decimal d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToUInt64", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, d);
}
inline float_t System::Decimal::ToSingle(::System::Decimal d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "ToSingle", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::Truncate(::System::Decimal d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Truncate", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d);
}
inline void System::Decimal::Truncate(::by_ref<::System::Decimal> d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "Truncate", {}, { ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Implicit", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Explicit___System__Decimal(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Explicit___System__Decimal(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline int32_t System::Decimal::op_Explicit_int32_t(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Decimal::op_Explicit_int64_t(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Decimal::op_Explicit_uint64_t(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline float_t System::Decimal::op_Explicit_float_t(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline double_t System::Decimal::op_Explicit_double_t(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_UnaryNegation(::System::Decimal d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::op_Increment(::System::Decimal d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Increment", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::op_Addition(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Addition", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::op_Subtraction(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Subtraction", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::op_Multiply(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Multiply", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::op_Division(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Division", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_Equality(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Equality", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_Inequality(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_Inequality", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_LessThan(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_LessThan", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_LessThanOrEqual(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_GreaterThan(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_GreaterThan", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_GreaterThanOrEqual(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline ::System::TypeCode System::Decimal::GetTypeCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "GetTypeCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(*this, ___internal_method);
}
inline bool System::Decimal::System_IConvertible_ToBoolean(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToBoolean", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, provider);
}
inline char16_t System::Decimal::System_IConvertible_ToChar(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToChar", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method, provider);
}
inline int8_t System::Decimal::System_IConvertible_ToSByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToSByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(*this, ___internal_method, provider);
}
inline uint8_t System::Decimal::System_IConvertible_ToByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, provider);
}
inline int16_t System::Decimal::System_IConvertible_ToInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method, provider);
}
inline uint16_t System::Decimal::System_IConvertible_ToUInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToUInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method, provider);
}
inline int32_t System::Decimal::System_IConvertible_ToInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, provider);
}
inline uint32_t System::Decimal::System_IConvertible_ToUInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToUInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, provider);
}
inline int64_t System::Decimal::System_IConvertible_ToInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, provider);
}
inline uint64_t System::Decimal::System_IConvertible_ToUInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToUInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, provider);
}
inline float_t System::Decimal::System_IConvertible_ToSingle(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToSingle", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, provider);
}
inline double_t System::Decimal::System_IConvertible_ToDouble(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToDouble", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, provider);
}
inline ::System::Decimal System::Decimal::System_IConvertible_ToDecimal(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToDecimal", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(*this, ___internal_method, provider);
}
inline ::System::DateTime System::Decimal::System_IConvertible_ToDateTime(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToDateTime", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, provider);
}
inline ::System::Object* System::Decimal::System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Decimal>(), { "System.IConvertible.ToType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, type, provider);
}
/// @brief Convert operator to "::System::IFormattable"
constexpr System::Decimal::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* System::Decimal::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Decimal::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Decimal::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IConvertible"
constexpr System::Decimal::operator ::System::IConvertible*() {
  return static_cast<::System::IConvertible*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* System::Decimal::i___System__IConvertible() {
  return static_cast<::System::IConvertible*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::Decimal>"
constexpr System::Decimal::operator ::System::IComparable_1<::System::Decimal>*() {
  return static_cast<::System::IComparable_1<::System::Decimal>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::System::Decimal>"
constexpr ::System::IComparable_1<::System::Decimal>* System::Decimal::i___System__IComparable_1___System__Decimal_() {
  return static_cast<::System::IComparable_1<::System::Decimal>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Decimal>"
constexpr System::Decimal::operator ::System::IEquatable_1<::System::Decimal>*() {
  return static_cast<::System::IEquatable_1<::System::Decimal>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Decimal>"
constexpr ::System::IEquatable_1<::System::Decimal>* System::Decimal::i___System__IEquatable_1___System__Decimal_() {
  return static_cast<::System::IEquatable_1<::System::Decimal>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::Decimal::operator ::System::Runtime::Serialization::IDeserializationCallback*() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Decimal::i___System__Runtime__Serialization__IDeserializationCallback() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::ISpanFormattable"
constexpr System::Decimal::operator ::System::ISpanFormattable*() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* System::Decimal::i___System__ISpanFormattable() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hi", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "lo", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mid", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::System::Decimal::Decimal(int32_t flags, int32_t hi, int32_t lo, int32_t mid, uint64_t ulomidLE) noexcept {
  this->flags = flags;
  this->hi = hi;
  this->lo = lo;
  this->mid = mid;
  this->ulomidLE = ulomidLE;
}
// Ctor Parameters []
constexpr ::System::Decimal::Decimal() {}

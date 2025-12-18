#pragma once
// IWYU pragma private; include "System/Decimal.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DecCalc_Decimal_PowerOvfl::*)(uint32_t, uint32_t, uint32_t)>(
    &::System::DecCalc_Decimal_PowerOvfl::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5af8ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_PowerOvfl>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::DecCalc_Decimal_PowerOvfl::_ctor(uint32_t hi, uint32_t mid, uint32_t lo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_PowerOvfl>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hi, mid, lo);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::DecCalc_Decimal_Buf12::*)()>(&::System::DecCalc_Decimal_Buf12::get_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af7090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf12>::get(), "get_Low64",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf12.set_Low64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DecCalc_Decimal_Buf12::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf12::set_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af7098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf12>::get(), "set_Low64", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf12.get_High64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::DecCalc_Decimal_Buf12::*)()>(&::System::DecCalc_Decimal_Buf12::get_High64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af7080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf12>::get(), "get_High64",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf12.set_High64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DecCalc_Decimal_Buf12::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf12::set_High64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af7088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf12>::get(), "set_High64", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf12>::get(), "get_Low64",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void System::DecCalc_Decimal_Buf12::set_Low64(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf12>::get(), "set_Low64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint64_t System::DecCalc_Decimal_Buf12::get_High64() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf12>::get(), "get_High64",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void System::DecCalc_Decimal_Buf12::set_High64(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf12>::get(), "set_High64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::DecCalc_Decimal_Buf16::*)()>(&::System::DecCalc_Decimal_Buf16::get_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af757c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf16>::get(), "get_Low64",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf16.set_Low64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DecCalc_Decimal_Buf16::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf16::set_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af7584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf16>::get(), "set_Low64", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf16.get_High64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::DecCalc_Decimal_Buf16::*)()>(&::System::DecCalc_Decimal_Buf16::get_High64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af7574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf16>::get(), "get_High64",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf16.set_High64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DecCalc_Decimal_Buf16::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf16::set_High64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af888c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf16>::get(), "set_High64", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf16>::get(), "get_Low64",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void System::DecCalc_Decimal_Buf16::set_Low64(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf16>::get(), "set_Low64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint64_t System::DecCalc_Decimal_Buf16::get_High64() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf16>::get(), "get_High64",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void System::DecCalc_Decimal_Buf16::set_High64(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf16>::get(), "set_High64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::DecCalc_Decimal_Buf24::*)()>(&::System::DecCalc_Decimal_Buf24::get_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af86a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf24>::get(), "get_Low64",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf24.set_Low64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DecCalc_Decimal_Buf24::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf24::set_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af8698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf24>::get(), "set_Low64", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf24.set_Mid64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DecCalc_Decimal_Buf24::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf24::set_Mid64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af86a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf24>::get(), "set_Mid64", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecCalc_Decimal_Buf24.set_High64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DecCalc_Decimal_Buf24::*)(uint64_t)>(&::System::DecCalc_Decimal_Buf24::set_High64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af8884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf24>::get(), "set_High64", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf24>::get(), "get_Low64",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void System::DecCalc_Decimal_Buf24::set_Low64(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf24>::get(), "set_Low64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::DecCalc_Decimal_Buf24::set_Mid64(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf24>::get(), "set_Mid64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::DecCalc_Decimal_Buf24::set_High64(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DecCalc_Decimal_Buf24>::get(), "set_High64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Decimal_DecCalc::*)()>(&::System::Decimal_DecCalc::get_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af6e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "get_High",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.set_High
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal_DecCalc::*)(uint32_t)>(&::System::Decimal_DecCalc::set_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af6e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "set_High", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.get_Low
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Decimal_DecCalc::*)()>(&::System::Decimal_DecCalc::get_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af6e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "get_Low",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.set_Low
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal_DecCalc::*)(uint32_t)>(&::System::Decimal_DecCalc::set_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af6ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "set_Low", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.get_Mid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Decimal_DecCalc::*)()>(&::System::Decimal_DecCalc::get_Mid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af6ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "get_Mid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.set_Mid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal_DecCalc::*)(uint32_t)>(&::System::Decimal_DecCalc::set_Mid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af6eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "set_Mid", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.get_IsNegative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Decimal_DecCalc::*)()>(&::System::Decimal_DecCalc::get_IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5af6eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "get_IsNegative",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.get_Low64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::Decimal_DecCalc::*)()>(&::System::Decimal_DecCalc::get_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af6ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "get_Low64",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.set_Low64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal_DecCalc::*)(uint64_t)>(&::System::Decimal_DecCalc::set_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af6ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "set_Low64", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.GetExponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(float_t)>(&::System::Decimal_DecCalc::GetExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5af6ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "GetExponent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.GetExponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(double_t)>(&::System::Decimal_DecCalc::GetExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5af6ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "GetExponent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.UInt32x32To64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint32_t, uint32_t)>(&::System::Decimal_DecCalc::UInt32x32To64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af6eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "UInt32x32To64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.UInt64x64To128
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, uint64_t, ::ByRef<::System::Decimal_DecCalc>)>(&::System::Decimal_DecCalc::UInt64x64To128)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5af6ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "UInt64x64To128", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.Div96By32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ByRef<::System::DecCalc_Decimal_Buf12>, uint32_t)>(&::System::Decimal_DecCalc::Div96By32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5af7020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "Div96By32", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.Div96ByConst
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<uint64_t>, ::ByRef<uint32_t>, uint32_t)>(&::System::Decimal_DecCalc::Div96ByConst)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5af70a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "Div96ByConst", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.Unscale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<uint32_t>, ::ByRef<uint64_t>, ::ByRef<int32_t>)>(&::System::Decimal_DecCalc::Unscale)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5af70dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "Unscale", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.Div96By64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ByRef<::System::DecCalc_Decimal_Buf12>, uint64_t)>(&::System::Decimal_DecCalc::Div96By64)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5af7360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "Div96By64", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.Div128By96
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ByRef<::System::DecCalc_Decimal_Buf16>, ::ByRef<::System::DecCalc_Decimal_Buf12>)>(
    &::System::Decimal_DecCalc::Div128By96)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5af7460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "Div128By96", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf16>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.IncreaseScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ByRef<::System::DecCalc_Decimal_Buf12>, uint32_t)>(&::System::Decimal_DecCalc::IncreaseScale)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5af758c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "IncreaseScale", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.IncreaseScale64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::DecCalc_Decimal_Buf12>, uint32_t)>(&::System::Decimal_DecCalc::IncreaseScale64)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5af7618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "IncreaseScale64", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.ScaleResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::DecCalc_Decimal_Buf24*, uint32_t, int32_t)>(&::System::Decimal_DecCalc::ScaleResult)> {
  constexpr static std::size_t size = 0xc00;
  constexpr static std::size_t addrs = 0x5af7694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "ScaleResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DecCalc_Decimal_Buf24*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.DivByConst
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t*, uint32_t, ::ByRef<uint32_t>, ::ByRef<uint32_t>, uint32_t)>(
    &::System::Decimal_DecCalc::DivByConst)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5af8294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "DivByConst", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.LeadingZeroCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint32_t)>(&::System::Decimal_DecCalc::LeadingZeroCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5af82e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "LeadingZeroCount", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.OverflowUnscale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::System::DecCalc_Decimal_Buf12>, int32_t, bool)>(&::System::Decimal_DecCalc::OverflowUnscale)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5af8348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "OverflowUnscale", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.SearchScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::System::DecCalc_Decimal_Buf12>, int32_t)>(&::System::Decimal_DecCalc::SearchScale)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5af84a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "SearchScale", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.Add32To96
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::System::DecCalc_Decimal_Buf12>, uint32_t)>(&::System::Decimal_DecCalc::Add32To96)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5af8474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "Add32To96", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.DecAddSub
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::Decimal_DecCalc>, ::ByRef<::System::Decimal_DecCalc>, bool)>(
    &::System::Decimal_DecCalc::DecAddSub)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x5af242c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "DecAddSub", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarDecCmp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::System::Decimal>, ::ByRef<::System::Decimal>)>(&::System::Decimal_DecCalc::VarDecCmp)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5af2b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarDecCmp", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarDecCmpSub
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::System::Decimal>, ::ByRef<::System::Decimal>)>(&::System::Decimal_DecCalc::VarDecCmpSub)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5af86b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarDecCmpSub", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarDecMul
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::Decimal_DecCalc>, ::ByRef<::System::Decimal_DecCalc>)>(
    &::System::Decimal_DecCalc::VarDecMul)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x5af425c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarDecMul", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarDecFromR4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, ::ByRef<::System::Decimal_DecCalc>)>(&::System::Decimal_DecCalc::VarDecFromR4)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5af17f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarDecFromR4", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarDecFromR8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(double_t, ::ByRef<::System::Decimal_DecCalc>)>(&::System::Decimal_DecCalc::VarDecFromR8)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5af1c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarDecFromR8", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarR4FromDec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::ByRef<::System::Decimal>)>(&::System::Decimal_DecCalc::VarR4FromDec)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5af5ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarR4FromDec", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarR8FromDec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::ByRef<::System::Decimal>)>(&::System::Decimal_DecCalc::VarR8FromDec)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5af5518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarR8FromDec", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::System::Decimal>)>(&::System::Decimal_DecCalc::GetHashCode)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5af3928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.VarDecDiv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::Decimal_DecCalc>, ::ByRef<::System::Decimal_DecCalc>)>(
    &::System::Decimal_DecCalc::VarDecDiv)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x5af2f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarDecDiv", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.InternalRound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::Decimal_DecCalc>, uint32_t, ::System::DecCalc_Decimal_RoundingMode)>(
    &::System::Decimal_DecCalc::InternalRound)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5af49cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "InternalRound", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DecCalc_Decimal_RoundingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal_DecCalc.DecDivMod1E9
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ByRef<::System::Decimal_DecCalc>)>(&::System::Decimal_DecCalc::DecDivMod1E9)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5af16c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "DecDivMod1E9", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get() })));
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
inline void System::Decimal_DecCalc::setStaticF_s_powers10(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "s_powers10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> System::Decimal_DecCalc::getStaticF_s_powers10() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "s_powers10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get>();
}
inline void System::Decimal_DecCalc::setStaticF_s_ulongPowers10(::ArrayW<uint64_t, ::Array<uint64_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint64_t, ::Array<uint64_t>*>, "s_ulongPowers10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get>(
      std::forward<::ArrayW<uint64_t, ::Array<uint64_t>*>>(value));
}
inline ::ArrayW<uint64_t, ::Array<uint64_t>*> System::Decimal_DecCalc::getStaticF_s_ulongPowers10() {
  return ::cordl_internals::getStaticField<::ArrayW<uint64_t, ::Array<uint64_t>*>, "s_ulongPowers10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get>();
}
inline void System::Decimal_DecCalc::setStaticF_s_doublePowers10(::ArrayW<double_t, ::Array<double_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<double_t, ::Array<double_t>*>, "s_doublePowers10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get>(
      std::forward<::ArrayW<double_t, ::Array<double_t>*>>(value));
}
inline ::ArrayW<double_t, ::Array<double_t>*> System::Decimal_DecCalc::getStaticF_s_doublePowers10() {
  return ::cordl_internals::getStaticField<::ArrayW<double_t, ::Array<double_t>*>, "s_doublePowers10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get>();
}
inline void System::Decimal_DecCalc::setStaticF_PowerOvflValues(::ArrayW<::System::DecCalc_Decimal_PowerOvfl, ::Array<::System::DecCalc_Decimal_PowerOvfl>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::DecCalc_Decimal_PowerOvfl, ::Array<::System::DecCalc_Decimal_PowerOvfl>*>, "PowerOvflValues",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get>(
      std::forward<::ArrayW<::System::DecCalc_Decimal_PowerOvfl, ::Array<::System::DecCalc_Decimal_PowerOvfl>*>>(value));
}
inline ::ArrayW<::System::DecCalc_Decimal_PowerOvfl, ::Array<::System::DecCalc_Decimal_PowerOvfl>*> System::Decimal_DecCalc::getStaticF_PowerOvflValues() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::DecCalc_Decimal_PowerOvfl, ::Array<::System::DecCalc_Decimal_PowerOvfl>*>, "PowerOvflValues",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get>();
}
inline uint32_t System::Decimal_DecCalc::get_High() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "get_High",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void System::Decimal_DecCalc::set_High(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "set_High", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t System::Decimal_DecCalc::get_Low() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "get_Low",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void System::Decimal_DecCalc::set_Low(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "set_Low", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t System::Decimal_DecCalc::get_Mid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "get_Mid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void System::Decimal_DecCalc::set_Mid(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "set_Mid", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Decimal_DecCalc::get_IsNegative() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "get_IsNegative",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint64_t System::Decimal_DecCalc::get_Low64() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "get_Low64",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void System::Decimal_DecCalc::set_Low64(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "set_Low64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t System::Decimal_DecCalc::GetExponent(float_t f) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "GetExponent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, f);
}
inline uint32_t System::Decimal_DecCalc::GetExponent(double_t d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "GetExponent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, d);
}
inline uint64_t System::Decimal_DecCalc::UInt32x32To64(uint32_t a, uint32_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "UInt32x32To64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, a, b);
}
inline void System::Decimal_DecCalc::UInt64x64To128(uint64_t a, uint64_t b, ::ByRef<::System::Decimal_DecCalc> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "UInt64x64To128", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, a, b, result);
}
inline uint32_t System::Decimal_DecCalc::Div96By32(::ByRef<::System::DecCalc_Decimal_Buf12> bufNum, uint32_t den) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "Div96By32", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bufNum, den);
}
inline bool System::Decimal_DecCalc::Div96ByConst(::ByRef<uint64_t> high64, ::ByRef<uint32_t> low, uint32_t pow) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "Div96ByConst", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, high64, low, pow);
}
inline void System::Decimal_DecCalc::Unscale(::ByRef<uint32_t> low, ::ByRef<uint64_t> high64, ::ByRef<int32_t> scale) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "Unscale", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, low, high64, scale);
}
inline uint32_t System::Decimal_DecCalc::Div96By64(::ByRef<::System::DecCalc_Decimal_Buf12> bufNum, uint64_t den) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "Div96By64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bufNum, den);
}
inline uint32_t System::Decimal_DecCalc::Div128By96(::ByRef<::System::DecCalc_Decimal_Buf16> bufNum, ::ByRef<::System::DecCalc_Decimal_Buf12> bufDen) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "Div128By96", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf16>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bufNum, bufDen);
}
inline uint32_t System::Decimal_DecCalc::IncreaseScale(::ByRef<::System::DecCalc_Decimal_Buf12> bufNum, uint32_t power) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "IncreaseScale", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bufNum, power);
}
inline void System::Decimal_DecCalc::IncreaseScale64(::ByRef<::System::DecCalc_Decimal_Buf12> bufNum, uint32_t power) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "IncreaseScale64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bufNum, power);
}
inline int32_t System::Decimal_DecCalc::ScaleResult(::System::DecCalc_Decimal_Buf24* bufRes, uint32_t hiRes, int32_t scale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "ScaleResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DecCalc_Decimal_Buf24*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bufRes, hiRes, scale);
}
inline uint32_t System::Decimal_DecCalc::DivByConst(uint32_t* result, uint32_t hiRes, ::ByRef<uint32_t> quotient, ::ByRef<uint32_t> remainder, uint32_t power) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "DivByConst", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, result, hiRes, quotient, remainder, power);
}
inline int32_t System::Decimal_DecCalc::LeadingZeroCount(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "LeadingZeroCount", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
inline int32_t System::Decimal_DecCalc::OverflowUnscale(::ByRef<::System::DecCalc_Decimal_Buf12> bufQuo, int32_t scale, bool sticky) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "OverflowUnscale", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bufQuo, scale, sticky);
}
inline int32_t System::Decimal_DecCalc::SearchScale(::ByRef<::System::DecCalc_Decimal_Buf12> bufQuo, int32_t scale) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "SearchScale", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bufQuo, scale);
}
inline bool System::Decimal_DecCalc::Add32To96(::ByRef<::System::DecCalc_Decimal_Buf12> bufNum, uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "Add32To96", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DecCalc_Decimal_Buf12>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bufNum, value);
}
inline void System::Decimal_DecCalc::DecAddSub(::ByRef<::System::Decimal_DecCalc> d1, ::ByRef<::System::Decimal_DecCalc> d2, bool sign) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "DecAddSub", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d1, d2, sign);
}
inline int32_t System::Decimal_DecCalc::VarDecCmp(::ByRef<::System::Decimal> d1, ::ByRef<::System::Decimal> d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarDecCmp", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d1, d2);
}
inline int32_t System::Decimal_DecCalc::VarDecCmpSub(::ByRef<::System::Decimal> d1, ::ByRef<::System::Decimal> d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarDecCmpSub", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d1, d2);
}
inline void System::Decimal_DecCalc::VarDecMul(::ByRef<::System::Decimal_DecCalc> d1, ::ByRef<::System::Decimal_DecCalc> d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarDecMul", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d1, d2);
}
inline void System::Decimal_DecCalc::VarDecFromR4(float_t input, ::ByRef<::System::Decimal_DecCalc> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarDecFromR4", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, result);
}
inline void System::Decimal_DecCalc::VarDecFromR8(double_t input, ::ByRef<::System::Decimal_DecCalc> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarDecFromR8", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, result);
}
inline float_t System::Decimal_DecCalc::VarR4FromDec(::ByRef<::System::Decimal> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarR4FromDec", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
inline double_t System::Decimal_DecCalc::VarR8FromDec(::ByRef<::System::Decimal> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarR8FromDec", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
inline int32_t System::Decimal_DecCalc::GetHashCode(::ByRef<::System::Decimal> d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d);
}
inline void System::Decimal_DecCalc::VarDecDiv(::ByRef<::System::Decimal_DecCalc> d1, ::ByRef<::System::Decimal_DecCalc> d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "VarDecDiv", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d1, d2);
}
inline void System::Decimal_DecCalc::InternalRound(::ByRef<::System::Decimal_DecCalc> d, uint32_t scale, ::System::DecCalc_Decimal_RoundingMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "InternalRound", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DecCalc_Decimal_RoundingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d, scale, mode);
}
inline uint32_t System::Decimal_DecCalc::DecDivMod1E9(::ByRef<::System::Decimal_DecCalc> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal_DecCalc>::get(), "DecDivMod1E9", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal_DecCalc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Decimal::*)()>(&::System::Decimal::get_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af157c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "get_High",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Low
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Decimal::*)()>(&::System::Decimal::get_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af1584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "get_Low",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Mid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Decimal::*)()>(&::System::Decimal::get_Mid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af158c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "get_Mid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_IsNegative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Decimal::*)()>(&::System::Decimal::get_IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5af1594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "get_IsNegative",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Scale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Decimal::*)()>(&::System::Decimal::get_Scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af15a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "get_Scale",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Low64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::Decimal::*)()>(&::System::Decimal::get_Low64)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5af15a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "get_Low64",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.AsMutable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::System::Decimal_DecCalc> (*)(::ByRef<::System::Decimal>)>(&::System::Decimal::AsMutable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af15ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "AsMutable", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.DecDivMod1E9
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ByRef<::System::Decimal>)>(&::System::Decimal::DecDivMod1E9)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5af15f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "DecDivMod1E9", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(int32_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5af171c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(uint32_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5af1734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(int64_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5af1740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(uint64_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af1760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(float_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5af1768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(double_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5af1c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::System::Decimal::IsValid)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5af20a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5af20c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(int32_t, int32_t, int32_t, bool, uint8_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5af2204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(::System::Object*)>(
    &::System::Decimal::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5af2294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(::ByRef<::System::Decimal>, int32_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5af234c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Abs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::ByRef<::System::Decimal>)>(&::System::Decimal::Abs)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5af235c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Abs", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::Add)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5af2370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::Compare)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5af2af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Decimal::*)(::System::Object*)>(&::System::Decimal::CompareTo)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5af2ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Decimal::*)(::System::Decimal)>(&::System::Decimal::CompareTo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5af2df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Divide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::Divide)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5af2e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Divide", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Decimal::*)(::System::Object*)>(&::System::Decimal::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5af375c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Decimal::*)(::System::Decimal)>(&::System::Decimal::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5af3834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Decimal::*)()>(&::System::Decimal::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5af38d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Decimal::*)()>(&::System::Decimal::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5af3a74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5af3b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Decimal::*)(::StringW, ::System::IFormatProvider*)>(&::System::Decimal::ToString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5af3be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.TryFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::Decimal::*)(::System::Span_1<char16_t>, ::ByRef<int32_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Decimal::TryFormat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5af3cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "TryFormat", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::StringW, ::System::IFormatProvider*)>(&::System::Decimal::Parse)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5af3d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*)>(
    &::System::Decimal::Parse)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5af3e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*, ::ByRef<::System::Decimal>)>(
    &::System::Decimal::TryParse)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5af3f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.GetBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(::System::Decimal)>(&::System::Decimal::GetBits)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5af401c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "GetBits", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Max
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::System::Decimal> (*)(::ByRef<::System::Decimal>, ::ByRef<::System::Decimal>)>(&::System::Decimal::Max)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5af40bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Max", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Min
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::System::Decimal> (*)(::ByRef<::System::Decimal>, ::ByRef<::System::Decimal>)>(&::System::Decimal::Min)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5af4130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Min", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Multiply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::Multiply)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5af41a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Multiply", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Negate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::Negate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af475c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Negate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Round
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal, int32_t)>(&::System::Decimal::Round)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5af4764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Round", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Round
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::ByRef<::System::Decimal>, int32_t, ::System::MidpointRounding)>(&::System::Decimal::Round)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5af47fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Round", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MidpointRounding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::System::Decimal)>(&::System::Decimal::ToByte)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5af4cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToByte", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToSByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::System::Decimal)>(&::System::Decimal::ToSByte)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5af4fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToSByte", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::System::Decimal)>(&::System::Decimal::ToInt16)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5af5314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToInt16", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::Decimal)>(&::System::Decimal::ToDouble)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5af5494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToDouble", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Decimal)>(&::System::Decimal::ToInt32)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5af5164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToInt32", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::Decimal)>(&::System::Decimal::ToInt64)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5af5628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToInt64", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToUInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::System::Decimal)>(&::System::Decimal::ToUInt16)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5af57e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToUInt16", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToUInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::System::Decimal)>(&::System::Decimal::ToUInt32)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5af4e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToUInt32", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToUInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::System::Decimal)>(&::System::Decimal::ToUInt64)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5af5968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToUInt64", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToSingle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::Decimal)>(&::System::Decimal::ToSingle)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5af5b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToSingle", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Truncate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::Truncate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5af5c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Truncate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Truncate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::Decimal>)>(&::System::Decimal::Truncate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5af5d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Truncate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(uint8_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5af5db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(int8_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5af5dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(int16_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5af5ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(uint16_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5af5df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(char16_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5af5e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(int32_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5af5e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(uint32_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5af5e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(int64_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5af5e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(uint64_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5af5e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit___System__Decimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(float_t)>(&::System::Decimal::op_Explicit___System__Decimal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5af5e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit___System__Decimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(double_t)>(&::System::Decimal::op_Explicit___System__Decimal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5af5e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_int32_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5af5edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_int64_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_int64_t)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5af5f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_uint64_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5af5fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_float_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_float_t)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5af6014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_double_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_double_t)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5af607c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af60e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_UnaryNegation", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Increment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::op_Increment)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5af60ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Increment", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Addition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Addition)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5af6160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Subtraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Subtraction)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5af621c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Subtraction", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Multiply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Multiply)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5af62d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Multiply", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Division
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Division)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5af6390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Division", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Equality)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5af6448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Inequality)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5af64dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_LessThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_LessThan)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5af6570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_LessThan", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5af6600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_LessThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_GreaterThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_GreaterThan)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5af6694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_GreaterThan", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5af6728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_GreaterThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.GetTypeCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (::System::Decimal::*)()>(&::System::Decimal::GetTypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af67bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "GetTypeCode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToBoolean)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5af67c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToBoolean", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToChar)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5af6828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToChar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToSByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToSByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5af68ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToSByte", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5af6910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToByte", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5af6974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToInt16", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToUInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToUInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5af69d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToUInt16", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToInt32)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5af6a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToInt32", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToUInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToUInt32)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5af6aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToUInt32", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToInt64)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5af6b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToInt64", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToUInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToUInt64)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5af6b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToUInt64", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToSingle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToSingle)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5af6bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToSingle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToDouble)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5af6c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToDouble", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Decimal::*)(::System::IFormatProvider*)>(
    &::System::Decimal::System_IConvertible_ToDecimal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5af6c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToDecimal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Decimal::*)(::System::IFormatProvider*)>(
    &::System::Decimal::System_IConvertible_ToDateTime)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5af6ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToDateTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Decimal::*)(::System::Type*, ::System::IFormatProvider*)>(
    &::System::Decimal::System_IConvertible_ToType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5af6d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
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
  ::cordl_internals::setStaticField<::System::Decimal, "Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_Zero() {
  return ::cordl_internals::getStaticField<::System::Decimal, "Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>();
}
inline void System::Decimal::setStaticF_One(::System::Decimal value) {
  ::cordl_internals::setStaticField<::System::Decimal, "One", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_One() {
  return ::cordl_internals::getStaticField<::System::Decimal, "One", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>();
}
inline void System::Decimal::setStaticF_MinusOne(::System::Decimal value) {
  ::cordl_internals::setStaticField<::System::Decimal, "MinusOne", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_MinusOne() {
  return ::cordl_internals::getStaticField<::System::Decimal, "MinusOne", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>();
}
inline void System::Decimal::setStaticF_MaxValue(::System::Decimal value) {
  ::cordl_internals::setStaticField<::System::Decimal, "MaxValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::Decimal, "MaxValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>();
}
inline void System::Decimal::setStaticF_MinValue(::System::Decimal value) {
  ::cordl_internals::setStaticField<::System::Decimal, "MinValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::Decimal, "MinValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>();
}
inline uint32_t System::Decimal::get_High() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "get_High",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t System::Decimal::get_Low() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "get_Low",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t System::Decimal::get_Mid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "get_Mid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline bool System::Decimal::get_IsNegative() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "get_IsNegative",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Decimal::get_Scale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "get_Scale",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline uint64_t System::Decimal::get_Low64() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "get_Low64",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::ByRef<::System::Decimal_DecCalc> System::Decimal::AsMutable(::ByRef<::System::Decimal> d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "AsMutable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::System::Decimal_DecCalc>, false>(nullptr, ___internal_method, d);
}
inline uint32_t System::Decimal::DecDivMod1E9(::ByRef<::System::Decimal> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "DecDivMod1E9", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
inline void System::Decimal::_ctor(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Decimal::_ctor(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Decimal::_ctor(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Decimal::_ctor(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Decimal::_ctor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Decimal::_ctor(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Decimal::IsValid(int32_t flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, flags);
}
inline void System::Decimal::_ctor(::ArrayW<int32_t, ::Array<int32_t>*> bits) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bits);
}
inline void System::Decimal::_ctor(int32_t lo, int32_t mid, int32_t hi, bool isNegative, uint8_t scale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lo, mid, hi, isNegative, scale);
}
inline void System::Decimal::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
inline void System::Decimal::_ctor(::ByRef<::System::Decimal> d, int32_t flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d, flags);
}
inline ::System::Decimal System::Decimal::Abs(::ByRef<::System::Decimal> d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Abs", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::Add(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d1, d2);
}
inline int32_t System::Decimal::Compare(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d1, d2);
}
inline int32_t System::Decimal::CompareTo(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline int32_t System::Decimal::CompareTo(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::Divide(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Divide", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool System::Decimal::Equals(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline int32_t System::Decimal::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Decimal::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Decimal::ToString(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, provider);
}
inline ::StringW System::Decimal::ToString(::StringW format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, format, provider);
}
inline bool System::Decimal::TryFormat(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "TryFormat", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, destination, charsWritten, format, provider);
}
inline ::System::Decimal System::Decimal::Parse(::StringW s, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, s, provider);
}
inline ::System::Decimal System::Decimal::Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, s, style, provider);
}
inline bool System::Decimal::TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ::ByRef<::System::Decimal> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, style, provider, result);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Decimal::GetBits(::System::Decimal d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "GetBits", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, d);
}
inline ::ByRef<::System::Decimal> System::Decimal::Max(::ByRef<::System::Decimal> d1, ::ByRef<::System::Decimal> d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Max", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::System::Decimal>, false>(nullptr, ___internal_method, d1, d2);
}
inline ::ByRef<::System::Decimal> System::Decimal::Min(::ByRef<::System::Decimal> d1, ::ByRef<::System::Decimal> d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Min", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::System::Decimal>, false>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::Multiply(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Multiply", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::Negate(::System::Decimal d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Negate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::Round(::System::Decimal d, int32_t decimals) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Round", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d, decimals);
}
inline ::System::Decimal System::Decimal::Round(::ByRef<::System::Decimal> d, int32_t decimals, ::System::MidpointRounding mode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Round", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MidpointRounding>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d, decimals, mode);
}
inline uint8_t System::Decimal::ToByte(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToByte", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
inline int8_t System::Decimal::ToSByte(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToSByte", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
inline int16_t System::Decimal::ToInt16(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToInt16", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
inline double_t System::Decimal::ToDouble(::System::Decimal d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToDouble", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, d);
}
inline int32_t System::Decimal::ToInt32(::System::Decimal d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToInt32", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d);
}
inline int64_t System::Decimal::ToInt64(::System::Decimal d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToInt64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, d);
}
inline uint16_t System::Decimal::ToUInt16(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToUInt16", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
inline uint32_t System::Decimal::ToUInt32(::System::Decimal d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToUInt32", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, d);
}
inline uint64_t System::Decimal::ToUInt64(::System::Decimal d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToUInt64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, d);
}
inline float_t System::Decimal::ToSingle(::System::Decimal d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "ToSingle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::Truncate(::System::Decimal d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Truncate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d);
}
inline void System::Decimal::Truncate(::ByRef<::System::Decimal> d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "Truncate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(int8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(uint16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Explicit___System__Decimal(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Explicit___System__Decimal(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
inline int32_t System::Decimal::op_Explicit_int32_t(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
inline int64_t System::Decimal::op_Explicit_int64_t(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
inline uint64_t System::Decimal::op_Explicit_uint64_t(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
inline float_t System::Decimal::op_Explicit_float_t(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
inline double_t System::Decimal::op_Explicit_double_t(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_UnaryNegation(::System::Decimal d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_UnaryNegation", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::op_Increment(::System::Decimal d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Increment", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::op_Addition(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::op_Subtraction(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Subtraction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::op_Multiply(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Multiply", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::op_Division(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Division", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_Equality(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_Inequality(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_LessThan(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_LessThan", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_LessThanOrEqual(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_LessThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_GreaterThan(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_GreaterThan", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_GreaterThanOrEqual(::System::Decimal d1, ::System::Decimal d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "op_GreaterThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
inline ::System::TypeCode System::Decimal::GetTypeCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "GetTypeCode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode, false>(this, ___internal_method);
}
inline bool System::Decimal::System_IConvertible_ToBoolean(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToBoolean", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, provider);
}
inline char16_t System::Decimal::System_IConvertible_ToChar(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToChar", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, provider);
}
inline int8_t System::Decimal::System_IConvertible_ToSByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToSByte", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int8_t, false>(this, ___internal_method, provider);
}
inline uint8_t System::Decimal::System_IConvertible_ToByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToByte", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, provider);
}
inline int16_t System::Decimal::System_IConvertible_ToInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToInt16", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method, provider);
}
inline uint16_t System::Decimal::System_IConvertible_ToUInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToUInt16", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method, provider);
}
inline int32_t System::Decimal::System_IConvertible_ToInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToInt32", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, provider);
}
inline uint32_t System::Decimal::System_IConvertible_ToUInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToUInt32", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, provider);
}
inline int64_t System::Decimal::System_IConvertible_ToInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToInt64", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, provider);
}
inline uint64_t System::Decimal::System_IConvertible_ToUInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToUInt64", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, provider);
}
inline float_t System::Decimal::System_IConvertible_ToSingle(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToSingle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, provider);
}
inline double_t System::Decimal::System_IConvertible_ToDouble(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToDouble", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, provider);
}
inline ::System::Decimal System::Decimal::System_IConvertible_ToDecimal(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToDecimal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method, provider);
}
inline ::System::DateTime System::Decimal::System_IConvertible_ToDateTime(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToDateTime", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, provider);
}
inline ::System::Object* System::Decimal::System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(), "System.IConvertible.ToType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type, provider);
}
/// @brief Convert operator to "::System::IFormattable"
constexpr System::Decimal::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* System::Decimal::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Decimal::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Decimal::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IConvertible"
constexpr System::Decimal::operator ::System::IConvertible*() {
  return static_cast<::System::IConvertible*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* System::Decimal::i___System__IConvertible() {
  return static_cast<::System::IConvertible*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::Decimal>"
constexpr System::Decimal::operator ::System::IComparable_1<::System::Decimal>*() {
  return static_cast<::System::IComparable_1<::System::Decimal>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::System::Decimal>"
constexpr ::System::IComparable_1<::System::Decimal>* System::Decimal::i___System__IComparable_1___System__Decimal_() {
  return static_cast<::System::IComparable_1<::System::Decimal>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Decimal>"
constexpr System::Decimal::operator ::System::IEquatable_1<::System::Decimal>*() {
  return static_cast<::System::IEquatable_1<::System::Decimal>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Decimal>"
constexpr ::System::IEquatable_1<::System::Decimal>* System::Decimal::i___System__IEquatable_1___System__Decimal_() {
  return static_cast<::System::IEquatable_1<::System::Decimal>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::Decimal::operator ::System::Runtime::Serialization::IDeserializationCallback*() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Decimal::i___System__Runtime__Serialization__IDeserializationCallback() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::ISpanFormattable"
constexpr System::Decimal::operator ::System::ISpanFormattable*() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* System::Decimal::i___System__ISpanFormattable() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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

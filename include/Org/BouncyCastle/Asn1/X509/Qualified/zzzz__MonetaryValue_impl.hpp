#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/Qualified/MonetaryValue.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/Qualified/zzzz__MonetaryValue_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/Qualified/zzzz__Iso4217CurrencyCode_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::GetInstance)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2506b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(), "GetInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2506ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::*)(
    ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*, int32_t, int32_t)>(&::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2506ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue.get_Currency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* (
    ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::*)()>(&::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::get_Currency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2506e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(), "get_Currency",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue.get_Amount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::get_Amount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2506e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(), "get_Amount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue.get_Exponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::get_Exponent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2506ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(), "get_Exponent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::ToAsn1Object)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2506ec0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*& Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__cordl_internal_get_currency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currency;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* const& Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__cordl_internal_get_currency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currency;
}
constexpr void Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__cordl_internal_set_currency(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__cordl_internal_get_amount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___amount;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__cordl_internal_get_amount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___amount;
}
constexpr void Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__cordl_internal_set_amount(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___amount)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__cordl_internal_get_exponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exponent;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__cordl_internal_get_exponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exponent;
}
constexpr void Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__cordl_internal_set_exponent(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exponent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue* Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(), "GetInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*, false>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::_ctor(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* currency, int32_t amount, int32_t exponent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currency, amount, exponent);
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::get_Currency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(),
                                                                             "get_Currency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::get_Amount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(),
                                                                             "get_Amount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::get_Exponent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(),
                                                                             "get_Exponent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue* Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*
Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::New_ctor(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* currency, int32_t amount, int32_t exponent) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*>(currency, amount, exponent));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::MonetaryValue() {}

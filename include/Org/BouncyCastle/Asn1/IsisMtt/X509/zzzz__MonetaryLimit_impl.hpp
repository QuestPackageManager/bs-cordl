#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/X509/MonetaryLimit.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__MonetaryLimit_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerPrintableString_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::GetInstance)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3450764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x34508c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::*)(::StringW, int32_t, int32_t)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x34509e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit.get_Currency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::get_Currency)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3450ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit.get_Amount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::get_Amount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3450ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit.get_Exponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::get_Exponent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3450aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::ToAsn1Object)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3450b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerPrintableString*& Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::__cordl_internal_get_currency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currency;
}
constexpr ::Org::BouncyCastle::Asn1::DerPrintableString* const& Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::__cordl_internal_get_currency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currency;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::__cordl_internal_set_currency(::Org::BouncyCastle::Asn1::DerPrintableString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currency = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::__cordl_internal_get_amount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___amount;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::__cordl_internal_get_amount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___amount;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::__cordl_internal_set_amount(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___amount = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::__cordl_internal_get_exponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exponent;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::__cordl_internal_get_exponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exponent;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::__cordl_internal_set_exponent(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exponent = value;
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit* Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::_ctor(::StringW currency, int32_t amount, int32_t exponent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currency, amount, exponent);
}
inline ::StringW Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::get_Currency() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::get_Amount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::get_Exponent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit* Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(seq));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit* Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::New_ctor(::StringW currency, int32_t amount, int32_t exponent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*>(currency, amount, exponent));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit::MonetaryLimit() {}

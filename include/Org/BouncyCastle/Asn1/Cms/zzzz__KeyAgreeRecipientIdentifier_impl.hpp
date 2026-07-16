#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/KeyAgreeRecipientIdentifier.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KeyAgreeRecipientIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__IssuerAndSerialNumber_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientKeyIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3359818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x335982c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::*)(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*)>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33599fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::*)(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*)>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3359a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier.get_IssuerAndSerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* (::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::get_IssuerAndSerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3359a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(), { "get_IssuerAndSerialNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier.get_RKeyID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* (::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::get_RKeyID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3359a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(), { "get_RKeyID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::ToAsn1Object)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3359a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::__cordl_internal_get_issuerSerial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerSerial;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* const& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::__cordl_internal_get_issuerSerial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerSerial;
}
constexpr void Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::__cordl_internal_set_issuerSerial(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuerSerial = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::__cordl_internal_get_rKeyID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rKeyID;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* const& Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::__cordl_internal_get_rKeyID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rKeyID;
}
constexpr void Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::__cordl_internal_set_rKeyID(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rKeyID = value;
}
inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj,
                                                                                                                                           bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(nullptr, ___internal_method, obj, isExplicit);
}
inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issuerSerial) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issuerSerial);
}
inline void Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::_ctor(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* rKeyID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rKeyID);
}
inline ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::get_IssuerAndSerialNumber() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(), { "get_IssuerAndSerialNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::get_RKeyID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(), { "get_RKeyID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*
Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issuerSerial) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(issuerSerial));
}
inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*
Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* rKeyID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*>(rKeyID));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier::KeyAgreeRecipientIdentifier() {}

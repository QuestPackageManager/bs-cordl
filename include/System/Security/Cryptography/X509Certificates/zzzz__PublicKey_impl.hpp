#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\PublicKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__PublicKey_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnEncodedData_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/zzzz__Oid_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::PublicKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::PublicKey::*)(
    ::System::Security::Cryptography::Oid*, ::System::Security::Cryptography::AsnEncodedData*, ::System::Security::Cryptography::AsnEncodedData*)>(
    &::System::Security::Cryptography::X509Certificates::PublicKey::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x63a3be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Security::Cryptography::Oid*>(), ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>(),
                                                                 ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::PublicKey.get_EncodedKeyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsnEncodedData* (::System::Security::Cryptography::X509Certificates::PublicKey::*)()>(
    &::System::Security::Cryptography::X509Certificates::PublicKey::get_EncodedKeyValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63a3d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), { "get_EncodedKeyValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::PublicKey.get_EncodedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsnEncodedData* (::System::Security::Cryptography::X509Certificates::PublicKey::*)()>(
    &::System::Security::Cryptography::X509Certificates::PublicKey::get_EncodedParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63a3d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), { "get_EncodedParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::PublicKey.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsymmetricAlgorithm* (::System::Security::Cryptography::X509Certificates::PublicKey::*)()>(
    &::System::Security::Cryptography::X509Certificates::PublicKey::get_Key)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x63a3d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), { "get_Key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::PublicKey.get_Oid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::Oid* (::System::Security::Cryptography::X509Certificates::PublicKey::*)()>(
    &::System::Security::Cryptography::X509Certificates::PublicKey::get_Oid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63a475c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), { "get_Oid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::PublicKey.GetUnsignedBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::X509Certificates::PublicKey::GetUnsignedBigInteger)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x63a4764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), { "GetUnsignedBigInteger", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::PublicKey.DecodeDSA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSA* (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::X509Certificates::PublicKey::DecodeDSA)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x63a42a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(),
                                                                                           { "DecodeDSA", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::PublicKey.DecodeRSA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::X509Certificates::PublicKey::DecodeRSA)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x63a3ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), { "DecodeRSA", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::AsnEncodedData*& System::Security::Cryptography::X509Certificates::PublicKey::__cordl_internal_get__keyValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyValue;
}
constexpr ::System::Security::Cryptography::AsnEncodedData* const& System::Security::Cryptography::X509Certificates::PublicKey::__cordl_internal_get__keyValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyValue;
}
constexpr void System::Security::Cryptography::X509Certificates::PublicKey::__cordl_internal_set__keyValue(::System::Security::Cryptography::AsnEncodedData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyValue = value;
}
constexpr ::System::Security::Cryptography::AsnEncodedData*& System::Security::Cryptography::X509Certificates::PublicKey::__cordl_internal_get__params() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr ::System::Security::Cryptography::AsnEncodedData* const& System::Security::Cryptography::X509Certificates::PublicKey::__cordl_internal_get__params() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr void System::Security::Cryptography::X509Certificates::PublicKey::__cordl_internal_set__params(::System::Security::Cryptography::AsnEncodedData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____params = value;
}
constexpr ::System::Security::Cryptography::Oid*& System::Security::Cryptography::X509Certificates::PublicKey::__cordl_internal_get__oid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr ::System::Security::Cryptography::Oid* const& System::Security::Cryptography::X509Certificates::PublicKey::__cordl_internal_get__oid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr void System::Security::Cryptography::X509Certificates::PublicKey::__cordl_internal_set__oid(::System::Security::Cryptography::Oid* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oid = value;
}
inline void System::Security::Cryptography::X509Certificates::PublicKey::setStaticF_Empty(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Empty", ::System::Security::Cryptography::X509Certificates::PublicKey*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::PublicKey::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Empty", ::System::Security::Cryptography::X509Certificates::PublicKey*>();
}
inline void System::Security::Cryptography::X509Certificates::PublicKey::_ctor(::System::Security::Cryptography::Oid* oid, ::System::Security::Cryptography::AsnEncodedData* parameters,
                                                                               ::System::Security::Cryptography::AsnEncodedData* keyValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Security::Cryptography::Oid*>(), ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>(),
                                                               ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, parameters, keyValue);
}
inline ::System::Security::Cryptography::AsnEncodedData* System::Security::Cryptography::X509Certificates::PublicKey::get_EncodedKeyValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), { "get_EncodedKeyValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsnEncodedData*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::AsnEncodedData* System::Security::Cryptography::X509Certificates::PublicKey::get_EncodedParameters() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), { "get_EncodedParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsnEncodedData*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::AsymmetricAlgorithm* System::Security::Cryptography::X509Certificates::PublicKey::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsymmetricAlgorithm*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::Oid* System::Security::Cryptography::X509Certificates::PublicKey::get_Oid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), { "get_Oid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::Oid*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::PublicKey::GetUnsignedBigInteger(::ArrayW<uint8_t> integer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), { "GetUnsignedBigInteger", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, integer);
}
inline ::System::Security::Cryptography::DSA* System::Security::Cryptography::X509Certificates::PublicKey::DecodeDSA(::ArrayW<uint8_t> rawPublicKey, ::ArrayW<uint8_t> rawParameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(),
                                                                                         { "DecodeDSA", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSA*>(nullptr, ___internal_method, rawPublicKey, rawParameters);
}
inline ::System::Security::Cryptography::RSA* System::Security::Cryptography::X509Certificates::PublicKey::DecodeRSA(::ArrayW<uint8_t> rawPublicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), { "DecodeRSA", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, rawPublicKey);
}
inline ::System::Security::Cryptography::X509Certificates::PublicKey*
System::Security::Cryptography::X509Certificates::PublicKey::New_ctor(::System::Security::Cryptography::Oid* oid, ::System::Security::Cryptography::AsnEncodedData* parameters,
                                                                      ::System::Security::Cryptography::AsnEncodedData* keyValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::PublicKey*>(oid, parameters, keyValue));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::PublicKey::PublicKey() {}

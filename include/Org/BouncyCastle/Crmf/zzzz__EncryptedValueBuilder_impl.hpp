#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crmf\EncryptedValueBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__EncryptedValueBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__EncryptedValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IEncryptedValuePadder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(
    ::Org::BouncyCastle::Crypto::IKeyWrapper*, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*)>(&::Org::BouncyCastle::Crmf::EncryptedValueBuilder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36da568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IKeyWrapper*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(
    ::Org::BouncyCastle::Crypto::IKeyWrapper*, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*, ::Org::BouncyCastle::Crmf::IEncryptedValuePadder*)>(
    &::Org::BouncyCastle::Crmf::EncryptedValueBuilder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36da574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::IKeyWrapper*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crmf::IEncryptedValuePadder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* (::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(::ArrayW<char16_t>)>(
    &::Org::BouncyCastle::Crmf::EncryptedValueBuilder::Build)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36da580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(), { "Build", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* (
    ::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Crmf::EncryptedValueBuilder::Build)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x36dadc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(), { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* (
    ::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*)>(&::Org::BouncyCastle::Crmf::EncryptedValueBuilder::Build)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x36daf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(),
                                                                                           { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder.EncryptData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* (::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crmf::EncryptedValueBuilder::EncryptData)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x36da674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(), { "EncryptData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::EncryptedValueBuilder.PadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crmf::EncryptedValueBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crmf::EncryptedValueBuilder::PadData)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x36da5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(), { "PadData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper*& Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_get_wrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapper;
}
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper* const& Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_get_wrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapper;
}
constexpr void Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_set_wrapper(::Org::BouncyCastle::Crypto::IKeyWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wrapper = value;
}
constexpr ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*& Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_get_encryptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptor;
}
constexpr ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* const& Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_get_encryptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptor;
}
constexpr void Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_set_encryptor(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptor = value;
}
constexpr ::Org::BouncyCastle::Crmf::IEncryptedValuePadder*& Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_get_padder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padder;
}
constexpr ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* const& Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_get_padder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padder;
}
constexpr void Org::BouncyCastle::Crmf::EncryptedValueBuilder::__cordl_internal_set_padder(::Org::BouncyCastle::Crmf::IEncryptedValuePadder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___padder = value;
}
inline void Org::BouncyCastle::Crmf::EncryptedValueBuilder::_ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IKeyWrapper*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper, encryptor);
}
inline void Org::BouncyCastle::Crmf::EncryptedValueBuilder::_ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor,
                                                                  ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* padder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IKeyWrapper*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crmf::IEncryptedValuePadder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper, encryptor, padder);
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Org::BouncyCastle::Crmf::EncryptedValueBuilder::Build(::ArrayW<char16_t> revocationPassphrase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(), { "Build", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(this, ___internal_method, revocationPassphrase);
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Org::BouncyCastle::Crmf::EncryptedValueBuilder::Build(::Org::BouncyCastle::X509::X509Certificate* holder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(), { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(this, ___internal_method, holder);
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Org::BouncyCastle::Crmf::EncryptedValueBuilder::Build(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(), { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(this, ___internal_method, privateKeyInfo);
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Org::BouncyCastle::Crmf::EncryptedValueBuilder::EncryptData(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(), { "EncryptData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crmf::EncryptedValueBuilder::PadData(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(), { "PadData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data);
}
inline ::Org::BouncyCastle::Crmf::EncryptedValueBuilder* Org::BouncyCastle::Crmf::EncryptedValueBuilder::New_ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper,
                                                                                                                  ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(wrapper, encryptor));
}
inline ::Org::BouncyCastle::Crmf::EncryptedValueBuilder* Org::BouncyCastle::Crmf::EncryptedValueBuilder::New_ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper,
                                                                                                                  ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor,
                                                                                                                  ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* padder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::EncryptedValueBuilder*>(wrapper, encryptor, padder));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::EncryptedValueBuilder::EncryptedValueBuilder() {}

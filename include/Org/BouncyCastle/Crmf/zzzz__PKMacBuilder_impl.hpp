#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/PKMacBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PbmParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IPKMacPrimitivesProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMacFactory_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::PKMacBuilder::*)()>(&::Org::BouncyCastle::Crmf::PKMacBuilder::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x36d9c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::PKMacBuilder::*)(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*)>(
    &::Org::BouncyCastle::Crmf::PKMacBuilder::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x36d9df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::PKMacBuilder::*)(
    ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::Crmf::PKMacBuilder::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36d9f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::PKMacBuilder::*)(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*, int32_t)>(
    &::Org::BouncyCastle::Crmf::PKMacBuilder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x36d9f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::PKMacBuilder::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, int32_t, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*)>(
    &::Org::BouncyCastle::Crmf::PKMacBuilder::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x36d9ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacBuilder.SetSaltLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crmf::PKMacBuilder* (::Org::BouncyCastle::Crmf::PKMacBuilder::*)(int32_t)>(
    &::Org::BouncyCastle::Crmf::PKMacBuilder::SetSaltLength)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36d9f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { "SetSaltLength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacBuilder.SetIterationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crmf::PKMacBuilder* (::Org::BouncyCastle::Crmf::PKMacBuilder::*)(int32_t)>(
    &::Org::BouncyCastle::Crmf::PKMacBuilder::SetIterationCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x36d9f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { "SetIterationCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacBuilder.SetParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crmf::PKMacBuilder* (::Org::BouncyCastle::Crmf::PKMacBuilder::*)(::Org::BouncyCastle::Asn1::Cmp::PbmParameter*)>(
    &::Org::BouncyCastle::Crmf::PKMacBuilder::SetParameters)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x36da1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { "SetParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacBuilder.SetSecureRandom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crmf::PKMacBuilder* (::Org::BouncyCastle::Crmf::PKMacBuilder::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crmf::PKMacBuilder::SetSecureRandom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36da204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { "SetSecureRandom", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IMacFactory* (::Org::BouncyCastle::Crmf::PKMacBuilder::*)(::ArrayW<char16_t>)>(
    &::Org::BouncyCastle::Crmf::PKMacBuilder::Build)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x36da20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { "Build", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacBuilder.CheckIterationCountCeiling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::PKMacBuilder::*)(int32_t)>(&::Org::BouncyCastle::Crmf::PKMacBuilder::CheckIterationCountCeiling)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x36da014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { "CheckIterationCountCeiling", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacBuilder.GenCalculator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IMacFactory* (
    ::Org::BouncyCastle::Crmf::PKMacBuilder::*)(::Org::BouncyCastle::Asn1::Cmp::PbmParameter*, ::ArrayW<char16_t>)>(&::Org::BouncyCastle::Crmf::PKMacBuilder::GenCalculator)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x36da328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(),
                                                             { "GenCalculator", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_owf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owf;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_owf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owf;
}
constexpr void Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_set_owf(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___owf = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_set_mac(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mac = value;
}
constexpr ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___provider;
}
constexpr ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* const& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___provider;
}
constexpr void Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_set_provider(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___provider = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PbmParameter*& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* const& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_set_parameters(::Org::BouncyCastle::Asn1::Cmp::PbmParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameters = value;
}
constexpr int32_t& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_iterationCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iterationCount;
}
constexpr int32_t const& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_iterationCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iterationCount;
}
constexpr void Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_set_iterationCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iterationCount = value;
}
constexpr int32_t& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_saltLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saltLength;
}
constexpr int32_t const& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_saltLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saltLength;
}
constexpr void Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_set_saltLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saltLength = value;
}
constexpr int32_t& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_maxIterations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxIterations;
}
constexpr int32_t const& Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_get_maxIterations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxIterations;
}
constexpr void Org::BouncyCastle::Crmf::PKMacBuilder::__cordl_internal_set_maxIterations(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxIterations = value;
}
inline void Org::BouncyCastle::Crmf::PKMacBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crmf::PKMacBuilder::_ctor(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline void Org::BouncyCastle::Crmf::PKMacBuilder::_ctor(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier,
                                                         ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgorithmIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider, digestAlgorithmIdentifier, macAlgorithmIdentifier);
}
inline void Org::BouncyCastle::Crmf::PKMacBuilder::_ctor(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider, int32_t maxIterations) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider, maxIterations);
}
inline void Org::BouncyCastle::Crmf::PKMacBuilder::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier, int32_t iterationCount,
                                                         ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgorithmIdentifier, ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digestAlgorithmIdentifier, iterationCount, macAlgorithmIdentifier, provider);
}
inline ::Org::BouncyCastle::Crmf::PKMacBuilder* Org::BouncyCastle::Crmf::PKMacBuilder::SetSaltLength(int32_t saltLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { "SetSaltLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::PKMacBuilder*>(this, ___internal_method, saltLength);
}
inline ::Org::BouncyCastle::Crmf::PKMacBuilder* Org::BouncyCastle::Crmf::PKMacBuilder::SetIterationCount(int32_t iterationCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { "SetIterationCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::PKMacBuilder*>(this, ___internal_method, iterationCount);
}
inline ::Org::BouncyCastle::Crmf::PKMacBuilder* Org::BouncyCastle::Crmf::PKMacBuilder::SetParameters(::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { "SetParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::PKMacBuilder*>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Crmf::PKMacBuilder* Org::BouncyCastle::Crmf::PKMacBuilder::SetSecureRandom(::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { "SetSecureRandom", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::PKMacBuilder*>(this, ___internal_method, random);
}
inline ::Org::BouncyCastle::Crypto::IMacFactory* Org::BouncyCastle::Crmf::PKMacBuilder::Build(::ArrayW<char16_t> password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { "Build", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMacFactory*>(this, ___internal_method, password);
}
inline void Org::BouncyCastle::Crmf::PKMacBuilder::CheckIterationCountCeiling(int32_t iterationCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), { "CheckIterationCountCeiling", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iterationCount);
}
inline ::Org::BouncyCastle::Crypto::IMacFactory* Org::BouncyCastle::Crmf::PKMacBuilder::GenCalculator(::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters, ::ArrayW<char16_t> password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(),
                                                           { "GenCalculator", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMacFactory*>(this, ___internal_method, parameters, password);
}
inline ::Org::BouncyCastle::Crmf::PKMacBuilder* Org::BouncyCastle::Crmf::PKMacBuilder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::PKMacBuilder*>());
}
inline ::Org::BouncyCastle::Crmf::PKMacBuilder* Org::BouncyCastle::Crmf::PKMacBuilder::New_ctor(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::PKMacBuilder*>(provider));
}
inline ::Org::BouncyCastle::Crmf::PKMacBuilder* Org::BouncyCastle::Crmf::PKMacBuilder::New_ctor(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider,
                                                                                                ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier,
                                                                                                ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgorithmIdentifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::PKMacBuilder*>(provider, digestAlgorithmIdentifier, macAlgorithmIdentifier));
}
inline ::Org::BouncyCastle::Crmf::PKMacBuilder* Org::BouncyCastle::Crmf::PKMacBuilder::New_ctor(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider, int32_t maxIterations) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::PKMacBuilder*>(provider, maxIterations));
}
inline ::Org::BouncyCastle::Crmf::PKMacBuilder* Org::BouncyCastle::Crmf::PKMacBuilder::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier, int32_t iterationCount,
                                                                                                ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgorithmIdentifier,
                                                                                                ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::PKMacBuilder*>(digestAlgorithmIdentifier, iterationCount, macAlgorithmIdentifier, provider));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::PKMacBuilder::PKMacBuilder() {}

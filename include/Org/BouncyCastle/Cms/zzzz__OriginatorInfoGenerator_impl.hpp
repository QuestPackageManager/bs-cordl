#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/OriginatorInfoGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__OriginatorInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorInfoGenerator::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x36cf4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorInfoGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36cf608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorInfoGenerator::*)(
    ::Org::BouncyCastle::X509::Store::IX509Store*, ::Org::BouncyCastle::X509::Store::IX509Store*)>(&::Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x36cf624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInfoGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* (::Org::BouncyCastle::Cms::OriginatorInfoGenerator::*)()>(
    &::Org::BouncyCastle::Cms::OriginatorInfoGenerator::Generate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x36cf664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::OriginatorInfoGenerator::__cordl_internal_get_origCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origCerts;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cms::OriginatorInfoGenerator::__cordl_internal_get_origCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origCerts;
}
constexpr void Org::BouncyCastle::Cms::OriginatorInfoGenerator::__cordl_internal_set_origCerts(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___origCerts = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::OriginatorInfoGenerator::__cordl_internal_get_origCrls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origCrls;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cms::OriginatorInfoGenerator::__cordl_internal_get_origCrls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origCrls;
}
constexpr void Org::BouncyCastle::Cms::OriginatorInfoGenerator::__cordl_internal_set_origCrls(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___origCrls = value;
}
inline void Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor(::Org::BouncyCastle::X509::X509Certificate* origCert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origCert);
}
inline void Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor(::Org::BouncyCastle::X509::Store::IX509Store* origCerts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origCerts);
}
inline void Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor(::Org::BouncyCastle::X509::Store::IX509Store* origCerts, ::Org::BouncyCastle::X509::Store::IX509Store* origCrls) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origCerts, origCrls);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Cms::OriginatorInfoGenerator::Generate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* Org::BouncyCastle::Cms::OriginatorInfoGenerator::New_ctor(::Org::BouncyCastle::X509::X509Certificate* origCert) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(origCert));
}
inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* Org::BouncyCastle::Cms::OriginatorInfoGenerator::New_ctor(::Org::BouncyCastle::X509::Store::IX509Store* origCerts) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(origCerts));
}
inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* Org::BouncyCastle::Cms::OriginatorInfoGenerator::New_ctor(::Org::BouncyCastle::X509::Store::IX509Store* origCerts,
                                                                                                                    ::Org::BouncyCastle::X509::Store::IX509Store* origCrls) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(origCerts, origCrls));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::OriginatorInfoGenerator::OriginatorInfoGenerator() {}

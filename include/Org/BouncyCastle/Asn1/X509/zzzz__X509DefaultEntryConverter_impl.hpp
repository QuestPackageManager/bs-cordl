#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\X509DefaultEntryConverter.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509NameEntryConverter_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509DefaultEntryConverter_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter.GetConvertedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW)>(
        &::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::GetConvertedValue)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x366c24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::*)()>(&::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x366c5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::GetConvertedValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method, oid, value);
}
inline void Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter* Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter::X509DefaultEntryConverter() {}

#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Misc\NetscapeRevocationUrl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_impl.hpp"
#include "Org/BouncyCastle/Asn1/Misc/zzzz__NetscapeRevocationUrl_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::*)(::Org::BouncyCastle::Asn1::DerIA5String*)>(
    &::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x34579c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerIA5String*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::*)()>(&::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::ToString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3457a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*>(), 3 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::_ctor(::Org::BouncyCastle::Asn1::DerIA5String* str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerIA5String*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline ::StringW Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl* Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::New_ctor(::Org::BouncyCastle::Asn1::DerIA5String* str) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*>(str));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::NetscapeRevocationUrl() {}

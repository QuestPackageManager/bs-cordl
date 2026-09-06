#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IAsn1String.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1String_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IAsn1String.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::IAsn1String::*)()>(&::Org::BouncyCastle::Asn1::IAsn1String::GetString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IAsn1String*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::IAsn1String*>(), 0 }));
    return ___internal_method;
  }
};
inline ::StringW Org::BouncyCastle::Asn1::IAsn1String::GetString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IAsn1String*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}

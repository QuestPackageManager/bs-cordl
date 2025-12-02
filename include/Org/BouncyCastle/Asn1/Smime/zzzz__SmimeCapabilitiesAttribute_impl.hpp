#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Smime/SmimeCapabilitiesAttribute.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeX509_impl.hpp"
#include "Org/BouncyCastle/Asn1/Smime/zzzz__SmimeCapabilitiesAttribute_def.hpp"
#include "Org/BouncyCastle/Asn1/Smime/zzzz__SmimeCapabilityVector_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::*)(
    ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*)>(&::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3425b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::_ctor(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector* capabilities) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capabilities);
}
inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute*
Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::New_ctor(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector* capabilities) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute*>(capabilities));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::SmimeCapabilitiesAttribute() {}

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Anssi/AnssiObjectIdentifiers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Anssi/zzzz__AnssiObjectIdentifiers_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::*)()>(
    &::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f20d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::setStaticF_FRP256v1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "FRP256v1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::getStaticF_FRP256v1() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "FRP256v1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers*>::get>();
}
inline void Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers* Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::AnssiObjectIdentifiers() {}

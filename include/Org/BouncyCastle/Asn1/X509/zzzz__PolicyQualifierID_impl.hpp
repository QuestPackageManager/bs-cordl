#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/PolicyQualifierID.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__PolicyQualifierID_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::PolicyQualifierID::*)(::StringW)>(
    &::Org::BouncyCastle::Asn1::X509::PolicyQualifierID::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x353d538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X509::PolicyQualifierID::setStaticF_IdQtCps(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*, "IdQtCps",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* Org::BouncyCastle::Asn1::X509::PolicyQualifierID::getStaticF_IdQtCps() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*, "IdQtCps",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>::get>();
}
inline void Org::BouncyCastle::Asn1::X509::PolicyQualifierID::setStaticF_IdQtUnotice(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*, "IdQtUnotice",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* Org::BouncyCastle::Asn1::X509::PolicyQualifierID::getStaticF_IdQtUnotice() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*, "IdQtUnotice",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>::get>();
}
inline void Org::BouncyCastle::Asn1::X509::PolicyQualifierID::_ctor(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* Org::BouncyCastle::Asn1::X509::PolicyQualifierID::New_ctor(::StringW id) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>(id));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID::PolicyQualifierID() {}

#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ExporterLabel_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ExporterLabel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ExporterLabel::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::ExporterLabel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf913f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ExporterLabel*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::ExporterLabel::setStaticF_extended_master_secret(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "extended_master_secret", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ExporterLabel*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::ExporterLabel::getStaticF_extended_master_secret() {
  return ::cordl_internals::getStaticField<::StringW, "extended_master_secret", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ExporterLabel*>::get>();
}
inline ::Org::BouncyCastle::Crypto::Tls::ExporterLabel* Org::BouncyCastle::Crypto::Tls::ExporterLabel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::ExporterLabel*>());
}
inline void Org::BouncyCastle::Crypto::Tls::ExporterLabel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ExporterLabel*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::ExporterLabel::ExporterLabel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

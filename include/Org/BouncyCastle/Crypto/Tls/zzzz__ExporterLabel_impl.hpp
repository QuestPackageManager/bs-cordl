#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ExporterLabel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ExporterLabel_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ExporterLabel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ExporterLabel::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::ExporterLabel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241af70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ExporterLabel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
inline void Org::BouncyCastle::Crypto::Tls::ExporterLabel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ExporterLabel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::ExporterLabel* Org::BouncyCastle::Crypto::Tls::ExporterLabel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::ExporterLabel*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::ExporterLabel::ExporterLabel() {}

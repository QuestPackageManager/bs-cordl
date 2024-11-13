#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/UnknownStatus.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__UnknownStatus_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::UnknownStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::UnknownStatus::*)()>(&::Org::BouncyCastle::Ocsp::UnknownStatus::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24ef8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::UnknownStatus*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Ocsp::UnknownStatus* Org::BouncyCastle::Ocsp::UnknownStatus::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Ocsp::UnknownStatus*>());
}
inline void Org::BouncyCastle::Ocsp::UnknownStatus::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::UnknownStatus*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::UnknownStatus::UnknownStatus() {}

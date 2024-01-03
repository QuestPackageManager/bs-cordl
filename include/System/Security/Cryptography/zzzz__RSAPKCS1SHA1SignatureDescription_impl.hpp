#pragma once
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDescription_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SHA1SignatureDescription_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::*)()>(
    &::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x246a104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription* System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription*>());
}
inline void System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::RSAPKCS1SHA1SignatureDescription() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

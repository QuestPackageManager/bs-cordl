#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DSASignatureDescription.hpp"
#include "System/Security/Cryptography/zzzz__SignatureDescription_impl.hpp"
#include "System/Security/Cryptography/zzzz__DSASignatureDescription_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSASignatureDescription::*)()>(
    &::System::Security::Cryptography::DSASignatureDescription::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3ca7f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDescription*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::DSASignatureDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDescription*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DSASignatureDescription* System::Security::Cryptography::DSASignatureDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::DSASignatureDescription*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DSASignatureDescription::DSASignatureDescription() {}

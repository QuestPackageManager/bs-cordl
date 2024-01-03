#pragma once
#include "System/Security/Cryptography/zzzz__SignatureDescription_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDescription_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureDescription::*)(::StringW, ::StringW)>(
    &::System::Security::Cryptography::RSAPKCS1SignatureDescription::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x246a060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDescription*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Cryptography::RSAPKCS1SignatureDescription::__get__hashAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashAlgorithm;
}
constexpr ::StringW const& System::Security::Cryptography::RSAPKCS1SignatureDescription::__get__hashAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashAlgorithm;
}
constexpr void System::Security::Cryptography::RSAPKCS1SignatureDescription::__set__hashAlgorithm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hashAlgorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Cryptography::RSAPKCS1SignatureDescription* System::Security::Cryptography::RSAPKCS1SignatureDescription::New_ctor(::StringW hashAlgorithm, ::StringW digestAlgorithm) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::RSAPKCS1SignatureDescription*>(hashAlgorithm, digestAlgorithm));
}
inline void System::Security::Cryptography::RSAPKCS1SignatureDescription::_ctor(::StringW hashAlgorithm, ::StringW digestAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDescription*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashAlgorithm, digestAlgorithm);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSAPKCS1SignatureDescription::RSAPKCS1SignatureDescription() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

#pragma once
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_impl.hpp"
#include "System/Security/Cryptography/zzzz__DSASignatureFormatter_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureFormatter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSASignatureFormatter::*)()>(
    &::System::Security::Cryptography::DSASignatureFormatter::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x25b46f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureFormatter*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Cryptography::DSASignatureFormatter::__cordl_internal_get__oid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr ::StringW const& System::Security::Cryptography::DSASignatureFormatter::__cordl_internal_get__oid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr void System::Security::Cryptography::DSASignatureFormatter::__cordl_internal_set__oid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Cryptography::DSASignatureFormatter* System::Security::Cryptography::DSASignatureFormatter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::DSASignatureFormatter*>());
}
inline void System::Security::Cryptography::DSASignatureFormatter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureFormatter*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DSASignatureFormatter::DSASignatureFormatter() {}

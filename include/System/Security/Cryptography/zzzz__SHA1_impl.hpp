#pragma once
#include "System/Security/Cryptography/zzzz__HashAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__SHA1_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::SHA1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::SHA1::*)()>(&::System::Security::Cryptography::SHA1::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x255a914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::SHA1* (*)()>(&::System::Security::Cryptography::SHA1::Create)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x255a934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1*>::get(), "Create",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::SHA1* System::Security::Cryptography::SHA1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::SHA1*>());
}
inline void System::Security::Cryptography::SHA1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::SHA1* System::Security::Cryptography::SHA1::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1*>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::SHA1*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::SHA1::SHA1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

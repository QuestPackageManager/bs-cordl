#pragma once
#include "System/Security/Cryptography/zzzz__HashAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__SHA512_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::SHA512._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::SHA512::*)()>(&::System::Security::Cryptography::SHA512::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x255cf6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA512*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::SHA512* (*)()>(&::System::Security::Cryptography::SHA512::Create)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x255cf8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA512*>::get(), "Create",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::SHA512* System::Security::Cryptography::SHA512::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::SHA512*>());
}
inline void System::Security::Cryptography::SHA512::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA512*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::SHA512* System::Security::Cryptography::SHA512::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA512*>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::SHA512*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::SHA512::SHA512() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

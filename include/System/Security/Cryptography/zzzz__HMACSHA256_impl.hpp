#pragma once
// IWYU pragma private; include "System/Security/Cryptography/HMACSHA256.hpp"
#include "System/Security/Cryptography/zzzz__HMAC_impl.hpp"
#include "System/Security/Cryptography/zzzz__HMACSHA256_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA256._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMACSHA256::*)()>(&::System::Security::Cryptography::HMACSHA256::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3ca16cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA256*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA256._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMACSHA256::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::HMACSHA256::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3ca16f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA256*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::HMACSHA256::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA256*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMACSHA256::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA256*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline ::System::Security::Cryptography::HMACSHA256* System::Security::Cryptography::HMACSHA256::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::HMACSHA256*>());
}
inline ::System::Security::Cryptography::HMACSHA256* System::Security::Cryptography::HMACSHA256::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::HMACSHA256*>(key));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::HMACSHA256::HMACSHA256() {}

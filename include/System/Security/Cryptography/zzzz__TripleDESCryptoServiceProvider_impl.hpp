#pragma once
// IWYU pragma private; include "System/Security/Cryptography/TripleDESCryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__TripleDES_impl.hpp"
#include "System/Security/Cryptography/zzzz__TripleDESCryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::TripleDESCryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3cb24f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider.CreateEncryptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateEncryptor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3cb28f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider.CreateDecryptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateDecryptor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3cb2a00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider.GenerateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateKey)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3cb2b0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider.GenerateIV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateIV)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3cb2c70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(), 25));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::TripleDESCryptoServiceProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey,
                                                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*, false>(this, ___internal_method, rgbKey, rgbIV);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey,
                                                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*, false>(this, ___internal_method, rgbKey, rgbIV);
}
inline void System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateKey() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateIV() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::TripleDESCryptoServiceProvider* System::Security::Cryptography::TripleDESCryptoServiceProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::TripleDESCryptoServiceProvider::TripleDESCryptoServiceProvider() {}

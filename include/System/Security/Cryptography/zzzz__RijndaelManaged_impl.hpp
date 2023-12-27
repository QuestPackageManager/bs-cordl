#pragma once
#include "System/Security/Cryptography/zzzz__Rijndael_impl.hpp"
#include "System/Security/Cryptography/zzzz__RijndaelManaged_def.hpp"
#include "System/Security/Cryptography/zzzz__RijndaelManagedTransformMode_def.hpp"
#include "System/Security/Cryptography/zzzz__CipherMode_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManaged._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RijndaelManaged::*)()>(
    &::System::Security::Cryptography::RijndaelManaged::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2460954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManaged.CreateEncryptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::ICryptoTransform* (::System::Security::Cryptography::RijndaelManaged::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::System::Security::Cryptography::RijndaelManaged::CreateEncryptor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2460a34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManaged.CreateDecryptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::ICryptoTransform* (::System::Security::Cryptography::RijndaelManaged::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::System::Security::Cryptography::RijndaelManaged::CreateDecryptor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2460b44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManaged.GenerateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RijndaelManaged::*)()>(
    &::System::Security::Cryptography::RijndaelManaged::GenerateKey)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2460b58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManaged.GenerateIV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RijndaelManaged::*)()>(
    &::System::Security::Cryptography::RijndaelManaged::GenerateIV)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2460b88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManaged.NewEncryptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::RijndaelManaged::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Security::Cryptography::CipherMode, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                                                          ::System::Security::Cryptography::RijndaelManagedTransformMode)>(&::System::Security::Cryptography::RijndaelManaged::NewEncryptor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2460a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(), "NewEncryptor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CipherMode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RijndaelManagedTransformMode>::get() })));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::RijndaelManaged* System::Security::Cryptography::RijndaelManaged::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::RijndaelManaged*>());
}
inline void System::Security::Cryptography::RijndaelManaged::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::RijndaelManaged::CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey,
                                                                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(), "CreateEncryptor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*, false>(this, ___internal_method, rgbKey, rgbIV);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::RijndaelManaged::CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey,
                                                                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(), "CreateDecryptor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*, false>(this, ___internal_method, rgbKey, rgbIV);
}
inline void System::Security::Cryptography::RijndaelManaged::GenerateKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(),
                                                                             "GenerateKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::RijndaelManaged::GenerateIV() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(),
                                                                             "GenerateIV", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::RijndaelManaged::NewEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey,
                                                                                                                         ::System::Security::Cryptography::CipherMode mode,
                                                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV, int32_t feedbackSize,
                                                                                                                         ::System::Security::Cryptography::RijndaelManagedTransformMode encryptMode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManaged*>::get(), "NewEncryptor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CipherMode>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RijndaelManagedTransformMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*, false>(this, ___internal_method, rgbKey, mode, rgbIV, feedbackSize, encryptMode);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RijndaelManaged::RijndaelManaged() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

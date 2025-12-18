#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsymmetricSignatureDeformatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricSignatureDeformatter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::AsymmetricSignatureDeformatter::*)()>(
    &::System::Security::Cryptography::AsymmetricSignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x594922c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricSignatureDeformatter.SetKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::AsymmetricSignatureDeformatter::*)(
    ::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::AsymmetricSignatureDeformatter::SetKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricSignatureDeformatter.SetHashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::AsymmetricSignatureDeformatter::*)(::StringW)>(
    &::System::Security::Cryptography::AsymmetricSignatureDeformatter::SetHashAlgorithm)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricSignatureDeformatter.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::AsymmetricSignatureDeformatter::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::Cryptography::AsymmetricSignatureDeformatter::VerifySignature)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>::get(), 6));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::AsymmetricSignatureDeformatter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricSignatureDeformatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::AsymmetricSignatureDeformatter::SetHashAlgorithm(::StringW strName) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, strName);
}
inline bool System::Security::Cryptography::AsymmetricSignatureDeformatter::VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rgbHash, rgbSignature);
}
inline ::System::Security::Cryptography::AsymmetricSignatureDeformatter* System::Security::Cryptography::AsymmetricSignatureDeformatter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AsymmetricSignatureDeformatter::AsymmetricSignatureDeformatter() {}

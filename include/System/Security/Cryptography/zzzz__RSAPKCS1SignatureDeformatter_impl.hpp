#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1SignatureDeformatter.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDeformatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)()>(
    &::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cb527c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(
    ::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3cb5284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter.SetHashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(::StringW)>(
    &::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetHashAlgorithm)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3cb52b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter.SetKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(
    ::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetKey)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3cb5314;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::VerifySignature)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3cb53fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::RSA*& System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__cordl_internal_get_rsa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rsa;
}
constexpr ::System::Security::Cryptography::RSA* const& System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__cordl_internal_get_rsa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rsa;
}
constexpr void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__cordl_internal_set_rsa(::System::Security::Cryptography::RSA* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rsa)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__cordl_internal_get_hashName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashName;
}
constexpr ::StringW const& System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__cordl_internal_get_hashName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashName;
}
constexpr void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__cordl_internal_set_hashName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hashName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetHashAlgorithm(::StringW strName) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, strName);
}
inline void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline bool System::Security::Cryptography::RSAPKCS1SignatureDeformatter::VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rgbHash, rgbSignature);
}
inline ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter* System::Security::Cryptography::RSAPKCS1SignatureDeformatter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>());
}
inline ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*
System::Security::Cryptography::RSAPKCS1SignatureDeformatter::New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(key));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::RSAPKCS1SignatureDeformatter() {}

#pragma once
// IWYU pragma private; include "Mono/Security/Authenticode/PrivateKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Authenticode/zzzz__PrivateKey_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Authenticode::PrivateKey::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW)>(
    &::Mono::Security::Authenticode::PrivateKey::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5892784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.get_RSA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (::Mono::Security::Authenticode::PrivateKey::*)()>(
    &::Mono::Security::Authenticode::PrivateKey::get_RSA)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(), "get_RSA",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.DeriveKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Authenticode::PrivateKey::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW)>(&::Mono::Security::Authenticode::PrivateKey::DeriveKey)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5892c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(), "DeriveKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Authenticode::PrivateKey::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW)>(
    &::Mono::Security::Authenticode::PrivateKey::Decode)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x5892834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(), "Decode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.CreateFromFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Authenticode::PrivateKey* (*)(::StringW)>(
    &::Mono::Security::Authenticode::PrivateKey::CreateFromFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(), "CreateFromFile",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.CreateFromFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Authenticode::PrivateKey* (*)(::StringW, ::StringW)>(
    &::Mono::Security::Authenticode::PrivateKey::CreateFromFile)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5892dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(), "CreateFromFile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_encrypted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypted;
}
constexpr bool const& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_encrypted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypted;
}
constexpr void Mono::Security::Authenticode::PrivateKey::__cordl_internal_set_encrypted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encrypted = value;
}
constexpr ::System::Security::Cryptography::RSA*& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_rsa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rsa;
}
constexpr ::System::Security::Cryptography::RSA* const& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_rsa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rsa;
}
constexpr void Mono::Security::Authenticode::PrivateKey::__cordl_internal_set_rsa(::System::Security::Cryptography::RSA* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rsa)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_weak() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weak;
}
constexpr bool const& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_weak() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weak;
}
constexpr void Mono::Security::Authenticode::PrivateKey::__cordl_internal_set_weak(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___weak = value;
}
constexpr int32_t& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_keyType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyType;
}
constexpr int32_t const& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_keyType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyType;
}
constexpr void Mono::Security::Authenticode::PrivateKey::__cordl_internal_set_keyType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyType = value;
}
inline void Mono::Security::Authenticode::PrivateKey::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, password);
}
inline ::System::Security::Cryptography::RSA* Mono::Security::Authenticode::PrivateKey::get_RSA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(), "get_RSA",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Authenticode::PrivateKey::DeriveKey(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(), "DeriveKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, salt, password);
}
inline bool Mono::Security::Authenticode::PrivateKey::Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> pvk, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(), "Decode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pvk, password);
}
inline ::Mono::Security::Authenticode::PrivateKey* Mono::Security::Authenticode::PrivateKey::CreateFromFile(::StringW filename) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(), "CreateFromFile",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Authenticode::PrivateKey*, false>(nullptr, ___internal_method, filename);
}
inline ::Mono::Security::Authenticode::PrivateKey* Mono::Security::Authenticode::PrivateKey::CreateFromFile(::StringW filename, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::PrivateKey*>::get(), "CreateFromFile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Authenticode::PrivateKey*, false>(nullptr, ___internal_method, filename, password);
}
inline ::Mono::Security::Authenticode::PrivateKey* Mono::Security::Authenticode::PrivateKey::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW password) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Authenticode::PrivateKey*>(data, password));
}
// Ctor Parameters []
constexpr ::Mono::Security::Authenticode::PrivateKey::PrivateKey() {}

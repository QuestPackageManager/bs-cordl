#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__MiscPemGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObjectGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::MiscPemGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::OpenSsl::MiscPemGenerator::*)(::System::Object*)>(
    &::Org::BouncyCastle::OpenSsl::MiscPemGenerator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x10cfe14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::MiscPemGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::OpenSsl::MiscPemGenerator::*)(
    ::System::Object*, ::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::OpenSsl::MiscPemGenerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x10cfe3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::MiscPemGenerator.CreatePemObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::IO::Pem::PemObject* (*)(::System::Object*)>(
    &::Org::BouncyCastle::OpenSsl::MiscPemGenerator::CreatePemObject)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x10cfe7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>::get(), "CreatePemObject",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::MiscPemGenerator.CreatePemObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Utilities::IO::Pem::PemObject* (*)(::System::Object*, ::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::OpenSsl::MiscPemGenerator::CreatePemObject)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x10d09d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>::get(), "CreatePemObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::MiscPemGenerator.EncodePrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ByRef<::StringW>)>(
    &::Org::BouncyCastle::OpenSsl::MiscPemGenerator::EncodePrivateKey)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x10d04e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>::get(), "EncodePrivateKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::MiscPemGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::IO::Pem::PemObject* (::Org::BouncyCastle::OpenSsl::MiscPemGenerator::*)()>(
    &::Org::BouncyCastle::OpenSsl::MiscPemGenerator::Generate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x10d1490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>::get(),
                                                                               "Generate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator"
constexpr Org::BouncyCastle::OpenSsl::MiscPemGenerator::operator ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*>(static_cast<void*>(this));
}
constexpr ::System::Object*& Org::BouncyCastle::OpenSsl::MiscPemGenerator::__get_obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Org::BouncyCastle::OpenSsl::MiscPemGenerator::__get_obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr void Org::BouncyCastle::OpenSsl::MiscPemGenerator::__set_obj(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::OpenSsl::MiscPemGenerator::__get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::StringW const& Org::BouncyCastle::OpenSsl::MiscPemGenerator::__get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::OpenSsl::MiscPemGenerator::__set_algorithm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___algorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& Org::BouncyCastle::OpenSsl::MiscPemGenerator::__get_password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___password;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& Org::BouncyCastle::OpenSsl::MiscPemGenerator::__get_password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___password;
}
constexpr void Org::BouncyCastle::OpenSsl::MiscPemGenerator::__set_password(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::OpenSsl::MiscPemGenerator::__get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& Org::BouncyCastle::OpenSsl::MiscPemGenerator::__get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::OpenSsl::MiscPemGenerator::__set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::OpenSsl::MiscPemGenerator* Org::BouncyCastle::OpenSsl::MiscPemGenerator::New_ctor(::System::Object* obj) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>(obj));
}
inline void Org::BouncyCastle::OpenSsl::MiscPemGenerator::_ctor(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline ::Org::BouncyCastle::OpenSsl::MiscPemGenerator* Org::BouncyCastle::OpenSsl::MiscPemGenerator::New_ctor(::System::Object* obj, ::StringW algorithm,
                                                                                                              ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                                                              ::Org::BouncyCastle::Security::SecureRandom* random) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>(obj, algorithm, password, random));
}
inline void Org::BouncyCastle::OpenSsl::MiscPemGenerator::_ctor(::System::Object* obj, ::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, algorithm, password, random);
}
inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Org::BouncyCastle::OpenSsl::MiscPemGenerator::CreatePemObject(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>::get(), "CreatePemObject",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Org::BouncyCastle::OpenSsl::MiscPemGenerator::CreatePemObject(::System::Object* obj, ::StringW algorithm,
                                                                                                                         ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                                                                         ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>::get(), "CreatePemObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, false>(nullptr, ___internal_method, obj, algorithm, password, random);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::OpenSsl::MiscPemGenerator::EncodePrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* akp, ByRef<::StringW> keyType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>::get(), "EncodePrivateKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, akp, keyType);
}
inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Org::BouncyCastle::OpenSsl::MiscPemGenerator::Generate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::MiscPemGenerator*>::get(), "Generate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::OpenSsl::MiscPemGenerator::MiscPemGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

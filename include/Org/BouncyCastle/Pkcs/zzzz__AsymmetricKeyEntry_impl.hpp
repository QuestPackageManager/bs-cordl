#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkcs\AsymmetricKeyEntry.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs12Entry_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__AsymmetricKeyEntry_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x35ab820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::Collections::Hashtable*)>(&::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x35ab898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x35ab8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::*)()>(
    &::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ab8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(), { "get_Key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::*)(::System::Object*)>(&::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x35ab8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::*)()>(&::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x35ab99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::__cordl_internal_set_key(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
inline void Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::System::Collections::Hashtable* attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, attributes);
}
inline void Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::System::Collections::IDictionary* attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, attributes);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(key));
}
inline ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key,
                                                                                                            ::System::Collections::Hashtable* attributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(key, attributes));
}
inline ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key,
                                                                                                            ::System::Collections::IDictionary* attributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(key, attributes));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry::AsymmetricKeyEntry() {}

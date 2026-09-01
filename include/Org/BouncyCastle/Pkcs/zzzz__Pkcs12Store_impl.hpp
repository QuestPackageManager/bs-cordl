#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkcs\Pkcs12Store.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs12Store_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__EncryptedPrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectKeyIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__AsymmetricKeyEntry_def.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs12Store_def.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__X509CertificateEntry_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x35b9648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b9678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::*)()>(&::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b9680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::*)()>(&::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x35b9688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::*)(::System::Object*)>(&::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x35b96e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(), 0 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::__cordl_internal_set_id(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKey);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::_ctor(::ArrayW<uint8_t> id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId* Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(pubKey));
}
inline ::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId* Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::New_ctor(::ArrayW<uint8_t> id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId*>(id));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::Pkcs12Store_CertId::Pkcs12Store_CertId() {}
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::*)()>(&::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::Clear)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x35b97c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::*)()>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::GetEnumerator)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x35b98d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable.get_Keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::*)()>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::get_Keys)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x35b997c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "get_Keys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::*)(::StringW)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::Remove)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x35b9a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::*)(::StringW)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::get_Item)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x35b9c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::*)(::StringW, ::System::Object*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::set_Item)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x35b9e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(),
                                                                                           { "set_Item", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::*)()>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::get_Values)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x35ba05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "get_Values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::*)()>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::get_Count)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x35ba104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::*)()>(&::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35ba1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::__cordl_internal_get_orig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orig;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::__cordl_internal_get_orig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orig;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::__cordl_internal_set_orig(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___orig = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::__cordl_internal_set_keys(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keys = value;
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::Remove(::StringW alias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, alias);
}
inline ::System::Object* Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::get_Item(::StringW alias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, alias);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::set_Item(::StringW alias, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alias, value);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable* Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*>());
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable::Pkcs12Store_IgnoresCaseHashtable() {}
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.CreateSubjectKeyID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* (*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store::CreateSubjectKeyID)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x35b0f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                                                                                           { "CreateSubjectKeyID", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, bool)>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x35b0f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*,
    bool)>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x35b1088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)()>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35b118c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::System::IO::Stream*, ::ArrayW<char16_t>)>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x35b11f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.LoadKeyBag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store::LoadKeyBag)> {
  constexpr static std::size_t size = 0x86c;
  constexpr static std::size_t addrs = 0x35b2b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.LoadPkcs8ShroudedKeyBag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*, ::Org::BouncyCastle::Asn1::Asn1Set*,
                                                                                                        ::ArrayW<char16_t>, bool)>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::LoadPkcs8ShroudedKeyBag)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x35b33ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::System::IO::Stream*, ::ArrayW<char16_t>)>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::Load)> {
  constexpr static std::size_t size = 0x1958;
  constexpr static std::size_t addrs = 0x35b1228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                                                                                           { "Load", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.GetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::StringW)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store::GetKey)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x35b381c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "GetKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.IsCertificateEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::StringW)>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::IsCertificateEntry)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x35b3904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "IsCertificateEntry", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.IsKeyEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::StringW)>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::IsKeyEntry)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x35b39a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "IsKeyEntry", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.GetAliasesTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)()>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::GetAliasesTable)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x35b3a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "GetAliasesTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.get_Aliases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)()>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::get_Aliases)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x35b4124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "get_Aliases", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.ContainsAlias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::StringW)>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::ContainsAlias)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x35b4214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "ContainsAlias", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.GetCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkcs::X509CertificateEntry* (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::StringW)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store::GetCertificate)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x35b426c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "GetCertificate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.GetCertificateAlias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store::GetCertificateAlias)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x35b44c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                                                                                           { "GetCertificateAlias", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.GetCertificateChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Pkcs::X509CertificateEntry*> (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::StringW)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store::GetCertificateChain)> {
  constexpr static std::size_t size = 0xa9c;
  constexpr static std::size_t addrs = 0x35b4ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "GetCertificateChain", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.SetCertificateEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::StringW, ::Org::BouncyCastle::Pkcs::X509CertificateEntry*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store::SetCertificateEntry)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x35b563c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                                                             { "SetCertificateEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.SetKeyEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(
    ::StringW, ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*, ::ArrayW<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>)>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::SetKeyEntry)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x35b5858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "SetKeyEntry",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(),
                                                                                                         ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.DeleteEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::StringW)>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::DeleteEntry)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x35b5adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "DeleteEntry", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.IsEntryOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::StringW, ::System::Type*)>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::IsEntryOfType)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x35b603c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "IsEntryOfType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)()>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::Size)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b6140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "Size", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)()>(&::Org::BouncyCastle::Pkcs::Pkcs12Store::get_Count)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x35b6144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Store::*)(::System::IO::Stream*, ::ArrayW<char16_t>, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store::Save)> {
  constexpr static std::size_t size = 0x3454;
  constexpr static std::size_t addrs = 0x35b61f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                            { "Save", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.CalculatePbeMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<uint8_t>, int32_t, ::ArrayW<char16_t>, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store::CalculatePbeMac)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x35b3438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                                                             { "CalculatePbeMac",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Store.CryptPbeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(bool, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<char16_t>, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkcs::Pkcs12Store::CryptPbeData)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x35b35c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                                                                                           { "CryptPbeData",
                                                                                             {},
                                                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                                                               ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable* const& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_set_keys(::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keys = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_localIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localIds;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_localIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localIds;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_set_localIds(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localIds = value;
}
constexpr ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable*& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_certs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr ::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable* const& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_certs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_set_certs(::Org::BouncyCastle::Pkcs::Pkcs12Store_IgnoresCaseHashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certs = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_chainCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chainCerts;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_chainCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chainCerts;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_set_chainCerts(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chainCerts = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_keyCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyCerts;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_keyCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyCerts;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_set_keyCerts(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyCerts = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_keyAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_keyAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAlgorithm;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_set_keyAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_keyPrfAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyPrfAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_keyPrfAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyPrfAlgorithm;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_set_keyPrfAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyPrfAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_certAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_certAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certAlgorithm;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_set_certAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_certPrfAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPrfAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_certPrfAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPrfAlgorithm;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_set_certPrfAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certPrfAlgorithm = value;
}
constexpr bool& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_useDerEncoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useDerEncoding;
}
constexpr bool const& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_useDerEncoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useDerEncoding;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_set_useDerEncoding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useDerEncoding = value;
}
constexpr ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_unmarkedKeyEntry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unmarkedKeyEntry;
}
constexpr ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* const& Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_get_unmarkedKeyEntry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unmarkedKeyEntry;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs12Store::__cordl_internal_set_unmarkedKeyEntry(::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unmarkedKeyEntry = value;
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* Org::BouncyCastle::Pkcs::Pkcs12Store::CreateSubjectKeyID(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                                                                                         { "CreateSubjectKeyID", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*>(nullptr, ___internal_method, pubKey);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm,
                                                        bool useDerEncoding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyAlgorithm, certAlgorithm, useDerEncoding);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyPrfAlgorithm,
                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certPrfAlgorithm,
                                                        bool useDerEncoding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                              ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyAlgorithm, keyPrfAlgorithm, certAlgorithm, certPrfAlgorithm, useDerEncoding);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store::_ctor(::System::IO::Stream* input, ::ArrayW<char16_t> password) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, password);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store::LoadKeyBag(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo, ::Org::BouncyCastle::Asn1::Asn1Set* bagAttributes) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privKeyInfo, bagAttributes);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store::LoadPkcs8ShroudedKeyBag(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encPrivKeyInfo, ::Org::BouncyCastle::Asn1::Asn1Set* bagAttributes,
                                                                          ::ArrayW<char16_t> password, bool wrongPkcs12Zero) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encPrivKeyInfo, bagAttributes, password, wrongPkcs12Zero);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store::Load(::System::IO::Stream* input, ::ArrayW<char16_t> password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "Load", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, password);
}
inline ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* Org::BouncyCastle::Pkcs::Pkcs12Store::GetKey(::StringW alias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "GetKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(this, ___internal_method, alias);
}
inline bool Org::BouncyCastle::Pkcs::Pkcs12Store::IsCertificateEntry(::StringW alias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "IsCertificateEntry", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, alias);
}
inline bool Org::BouncyCastle::Pkcs::Pkcs12Store::IsKeyEntry(::StringW alias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "IsKeyEntry", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, alias);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Pkcs::Pkcs12Store::GetAliasesTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "GetAliasesTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Pkcs::Pkcs12Store::get_Aliases() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "get_Aliases", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Pkcs::Pkcs12Store::ContainsAlias(::StringW alias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "ContainsAlias", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, alias);
}
inline ::Org::BouncyCastle::Pkcs::X509CertificateEntry* Org::BouncyCastle::Pkcs::Pkcs12Store::GetCertificate(::StringW alias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "GetCertificate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>(this, ___internal_method, alias);
}
inline ::StringW Org::BouncyCastle::Pkcs::Pkcs12Store::GetCertificateAlias(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "GetCertificateAlias", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, cert);
}
inline ::ArrayW<::Org::BouncyCastle::Pkcs::X509CertificateEntry*> Org::BouncyCastle::Pkcs::Pkcs12Store::GetCertificateChain(::StringW alias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "GetCertificateChain", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>>(this, ___internal_method, alias);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store::SetCertificateEntry(::StringW alias, ::Org::BouncyCastle::Pkcs::X509CertificateEntry* certEntry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                                                           { "SetCertificateEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alias, certEntry);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store::SetKeyEntry(::StringW alias, ::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* keyEntry,
                                                              ::ArrayW<::Org::BouncyCastle::Pkcs::X509CertificateEntry*> chain) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "SetKeyEntry",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*>(),
                                                                                                       ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Pkcs::X509CertificateEntry*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alias, keyEntry, chain);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store::DeleteEntry(::StringW alias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "DeleteEntry", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alias);
}
inline bool Org::BouncyCastle::Pkcs::Pkcs12Store::IsEntryOfType(::StringW alias, ::System::Type* entryType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "IsEntryOfType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, alias, entryType);
}
inline int32_t Org::BouncyCastle::Pkcs::Pkcs12Store::Size() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "Size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Pkcs::Pkcs12Store::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Store::Save(::System::IO::Stream* stream, ::ArrayW<char16_t> password, ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                          { "Save", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, password, random);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Pkcs::Pkcs12Store::CalculatePbeMac(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::ArrayW<uint8_t> salt, int32_t itCount,
                                                                               ::ArrayW<char16_t> password, bool wrongPkcs12Zero, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                                                           { "CalculatePbeMac",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, oid, salt, itCount, password, wrongPkcs12Zero, data);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Pkcs::Pkcs12Store::CryptPbeData(bool forEncryption, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<char16_t> password,
                                                                            bool wrongPkcs12Zero, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(),
                                                                                         { "CryptPbeData",
                                                                                           {},
                                                                                           { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                                                             ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, forEncryption, algId, password, wrongPkcs12Zero, data);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs12Store* Org::BouncyCastle::Pkcs::Pkcs12Store::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm,
                                                                                              ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm, bool useDerEncoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(keyAlgorithm, certAlgorithm, useDerEncoding));
}
inline ::Org::BouncyCastle::Pkcs::Pkcs12Store* Org::BouncyCastle::Pkcs::Pkcs12Store::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm,
                                                                                              ::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyPrfAlgorithm,
                                                                                              ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm,
                                                                                              ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certPrfAlgorithm, bool useDerEncoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(keyAlgorithm, keyPrfAlgorithm, certAlgorithm, certPrfAlgorithm, useDerEncoding));
}
inline ::Org::BouncyCastle::Pkcs::Pkcs12Store* Org::BouncyCastle::Pkcs::Pkcs12Store::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs12Store*>());
}
inline ::Org::BouncyCastle::Pkcs::Pkcs12Store* Org::BouncyCastle::Pkcs::Pkcs12Store::New_ctor(::System::IO::Stream* input, ::ArrayW<char16_t> password) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs12Store*>(input, password));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::Pkcs12Store::Pkcs12Store() {}

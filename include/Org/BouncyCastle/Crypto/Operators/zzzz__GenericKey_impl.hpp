#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Operators\GenericKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__GenericKey_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::GenericKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::GenericKey::*)(::System::Object*)>(&::Org::BouncyCastle::Crypto::Operators::GenericKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340b588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::GenericKey*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::GenericKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::GenericKey::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Operators::GenericKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340b590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::GenericKey*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::GenericKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::GenericKey::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Operators::GenericKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340b598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::GenericKey*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::GenericKey.get_AlgorithmIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Crypto::Operators::GenericKey::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::GenericKey::get_AlgorithmIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340b5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::GenericKey*>(), { "get_AlgorithmIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::GenericKey.get_Representation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Operators::GenericKey::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::GenericKey::get_Representation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340b5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::GenericKey*>(), { "get_Representation", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Crypto::Operators::GenericKey::__cordl_internal_get_algorithmIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithmIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Crypto::Operators::GenericKey::__cordl_internal_get_algorithmIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithmIdentifier;
}
constexpr void Org::BouncyCastle::Crypto::Operators::GenericKey::__cordl_internal_set_algorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algorithmIdentifier = value;
}
constexpr ::System::Object*& Org::BouncyCastle::Crypto::Operators::GenericKey::__cordl_internal_get_representation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___representation;
}
constexpr ::System::Object* const& Org::BouncyCastle::Crypto::Operators::GenericKey::__cordl_internal_get_representation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___representation;
}
constexpr void Org::BouncyCastle::Crypto::Operators::GenericKey::__cordl_internal_set_representation(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___representation = value;
}
inline void Org::BouncyCastle::Crypto::Operators::GenericKey::_ctor(::System::Object* representation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::GenericKey*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, representation);
}
inline void Org::BouncyCastle::Crypto::Operators::GenericKey::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier, ::ArrayW<uint8_t> representation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::GenericKey*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithmIdentifier, representation);
}
inline void Org::BouncyCastle::Crypto::Operators::GenericKey::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier, ::System::Object* representation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::GenericKey*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithmIdentifier, representation);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Crypto::Operators::GenericKey::get_AlgorithmIdentifier() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::GenericKey*>(), { "get_AlgorithmIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Operators::GenericKey::get_Representation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::GenericKey*>(), { "get_Representation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Operators::GenericKey* Org::BouncyCastle::Crypto::Operators::GenericKey::New_ctor(::System::Object* representation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Operators::GenericKey*>(representation));
}
inline ::Org::BouncyCastle::Crypto::Operators::GenericKey* Org::BouncyCastle::Crypto::Operators::GenericKey::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier,
                                                                                                                      ::ArrayW<uint8_t> representation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Operators::GenericKey*>(algorithmIdentifier, representation));
}
inline ::Org::BouncyCastle::Crypto::Operators::GenericKey* Org::BouncyCastle::Crypto::Operators::GenericKey::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier,
                                                                                                                      ::System::Object* representation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Operators::GenericKey*>(algorithmIdentifier, representation));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::GenericKey::GenericKey() {}

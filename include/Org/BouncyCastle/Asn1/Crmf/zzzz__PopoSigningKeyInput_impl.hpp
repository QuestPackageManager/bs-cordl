#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/PopoSigningKeyInput.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__PopoSigningKeyInput_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__PKMacValue_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3367000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3366bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::*)(
    ::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(&::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3367170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::*)(
    ::Org::BouncyCastle::Asn1::Crmf::PKMacValue*, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(&::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336717c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::PKMacValue*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput.get_Sender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::get_Sender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3367184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput.get_PublicKeyMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::PKMacValue* (::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::get_PublicKeyMac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336718c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput.get_PublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* (::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::get_PublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3367194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::ToAsn1Object)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x336719c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::__cordl_internal_get_sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sender;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::__cordl_internal_get_sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sender;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::__cordl_internal_set_sender(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sender = value;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue*& Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::__cordl_internal_get_publicKeyMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKeyMac;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* const& Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::__cordl_internal_get_publicKeyMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKeyMac;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::__cordl_internal_set_publicKeyMac(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicKeyMac = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::__cordl_internal_get_publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* const& Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::__cordl_internal_get_publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::__cordl_internal_set_publicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicKey = value;
}
inline void Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, spki);
}
inline void Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::_ctor(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* pkmac, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::PKMacValue*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pkmac, spki);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::get_Sender() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::get_PublicKeyMac() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::PKMacValue*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::get_PublicKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                                                                          ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(sender, spki));
}
inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::New_ctor(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* pkmac,
                                                                                                                          ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*>(pkmac, spki));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput::PopoSigningKeyInput() {}

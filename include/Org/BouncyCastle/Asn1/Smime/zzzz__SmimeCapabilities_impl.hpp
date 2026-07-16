#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Smime/SmimeCapabilities.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Smime/zzzz__SmimeCapabilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::GetInstance)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x354899c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3548b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities.GetCapabilities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::GetCapabilities)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3548b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(),
                                                                                           { "GetCapabilities", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities.GetCapabilitiesForOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::GetCapabilitiesForOid)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x35491d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(),
                                                                                           { "GetCapabilitiesForOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities.DoGetCapabilitiesForOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::DoGetCapabilitiesForOid)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x3548c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(),
                                         { "DoGetCapabilitiesForOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::*)()>(
    &::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354939c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::__cordl_internal_get_capabilities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capabilities;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::__cordl_internal_get_capabilities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capabilities;
}
constexpr void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::__cordl_internal_set_capabilities(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___capabilities = value;
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::setStaticF_PreferSignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PreferSignedData", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::getStaticF_PreferSignedData() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PreferSignedData", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>();
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::setStaticF_CannotDecryptAny(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CannotDecryptAny", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::getStaticF_CannotDecryptAny() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CannotDecryptAny", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>();
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::setStaticF_SmimeCapabilitesVersions(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SmimeCapabilitesVersions", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::getStaticF_SmimeCapabilitesVersions() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SmimeCapabilitesVersions", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>();
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::setStaticF_Aes256Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Aes256Cbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::getStaticF_Aes256Cbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Aes256Cbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>();
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::setStaticF_Aes192Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Aes192Cbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::getStaticF_Aes192Cbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Aes192Cbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>();
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::setStaticF_Aes128Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Aes128Cbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::getStaticF_Aes128Cbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Aes128Cbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>();
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::setStaticF_IdeaCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdeaCbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::getStaticF_IdeaCbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdeaCbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>();
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::setStaticF_Cast5Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Cast5Cbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::getStaticF_Cast5Cbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Cast5Cbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>();
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::setStaticF_DesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DesCbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::getStaticF_DesCbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DesCbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>();
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::setStaticF_DesEde3Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DesEde3Cbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::getStaticF_DesEde3Cbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DesEde3Cbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>();
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::setStaticF_RC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "RC2Cbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::getStaticF_RC2Cbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "RC2Cbc", ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>();
}
inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::System::Collections::ArrayList* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::GetCapabilities(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(),
                                                                                         { "GetCapabilities", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, capability);
}
inline ::System::Collections::IList* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::GetCapabilitiesForOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(),
                                                                                         { "GetCapabilitiesForOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method, capability);
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::DoGetCapabilitiesForOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability, ::System::Collections::IList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(),
                                       { "DoGetCapabilitiesForOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capability, list);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities* Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities::SmimeCapabilities() {}

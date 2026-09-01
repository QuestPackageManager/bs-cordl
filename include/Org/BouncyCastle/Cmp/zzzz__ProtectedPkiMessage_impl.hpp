#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cmp\ProtectedPkiMessage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__ProtectedPkiMessage_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiBody_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeader_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiMessage_def.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__GeneralPkiMessage_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Cmp::GeneralPkiMessage*)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x36a2744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Asn1::Cmp::PkiMessage*)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36a27d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.get_Header
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeader* (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_Header)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36a2864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "get_Header", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.get_Body
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiBody* (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_Body)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36a2880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "get_Body", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.ToAsn1Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiMessage* (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::ToAsn1Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a289c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "ToAsn1Message", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.get_HasPasswordBasedMacProtected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_HasPasswordBasedMacProtected)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x36a28a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "get_HasPasswordBasedMacProtected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.GetCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*> (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::GetCertificates)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x36a2950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "GetCertificates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Crypto::IVerifierFactory*)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::Verify)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x36a2ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "Verify", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IVerifierFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Crypto::IStreamCalculator*)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::Process)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x36a2c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "Process", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IStreamCalculator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Crmf::PKMacBuilder*, ::ArrayW<char16_t>)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::Verify)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x36a2f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(),
                                                             { "Verify", {}, { ::i2c::type_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage*& Org::BouncyCastle::Cmp::ProtectedPkiMessage::__cordl_internal_get_pkiMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkiMessage;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* const& Org::BouncyCastle::Cmp::ProtectedPkiMessage::__cordl_internal_get_pkiMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkiMessage;
}
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessage::__cordl_internal_set_pkiMessage(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pkiMessage = value;
}
inline void Org::BouncyCastle::Cmp::ProtectedPkiMessage::_ctor(::Org::BouncyCastle::Cmp::GeneralPkiMessage* pkiMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pkiMessage);
}
inline void Org::BouncyCastle::Cmp::ProtectedPkiMessage::_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pkiMessage);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_Header() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "get_Header", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_Body() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "get_Body", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* Org::BouncyCastle::Cmp::ProtectedPkiMessage::ToAsn1Message() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "ToAsn1Message", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_HasPasswordBasedMacProtected() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "get_HasPasswordBasedMacProtected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*> Org::BouncyCastle::Cmp::ProtectedPkiMessage::GetCertificates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "GetCertificates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cmp::ProtectedPkiMessage::Verify(::Org::BouncyCastle::Crypto::IVerifierFactory* verifierFactory) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "Verify", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IVerifierFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, verifierFactory);
}
inline ::System::Object* Org::BouncyCastle::Cmp::ProtectedPkiMessage::Process(::Org::BouncyCastle::Crypto::IStreamCalculator* streamCalculator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(), { "Process", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IStreamCalculator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, streamCalculator);
}
inline bool Org::BouncyCastle::Cmp::ProtectedPkiMessage::Verify(::Org::BouncyCastle::Crmf::PKMacBuilder* pkMacBuilder, ::ArrayW<char16_t> password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(),
                                                           { "Verify", {}, { ::i2c::type_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pkMacBuilder, password);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Org::BouncyCastle::Cmp::ProtectedPkiMessage::New_ctor(::Org::BouncyCastle::Cmp::GeneralPkiMessage* pkiMessage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(pkiMessage));
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Org::BouncyCastle::Cmp::ProtectedPkiMessage::New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(pkiMessage));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::ProtectedPkiMessage() {}

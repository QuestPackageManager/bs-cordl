#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\PkiHeader.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeader_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__InfoTypeAndValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiFreeText_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeader::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x334e3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeader* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeader::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x334e6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)(
    int32_t, ::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeader::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x334e854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)(
    ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x334e8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.get_Pvno
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)()>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_Pvno)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334e8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.get_Sender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_Sender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334e8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.get_Recipient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_Recipient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334e8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.get_MessageTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_MessageTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334e8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.get_ProtectionAlg
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_ProtectionAlg)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334e900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.get_SenderKID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_SenderKID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334e908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.get_RecipKID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_RecipKID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334e910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.get_TransactionID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_TransactionID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334e918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.get_SenderNonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_SenderNonce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334e920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.get_RecipNonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_RecipNonce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334e928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.get_FreeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_FreeText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334e930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.GetGeneralInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*> (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeader::GetGeneralInfo)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x334e938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeader.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::PkiHeader::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeader::ToAsn1Object)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x334ea3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_pvno() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pvno;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_pvno() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pvno;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_set_pvno(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pvno = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sender;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sender;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_set_sender(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sender = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_recipient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipient;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_recipient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipient;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_set_recipient(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recipient = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_messageTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageTime;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_messageTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageTime;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_set_messageTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageTime = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_protectionAlg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protectionAlg;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_protectionAlg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protectionAlg;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_set_protectionAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___protectionAlg = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_senderKID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderKID;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_senderKID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderKID;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_set_senderKID(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___senderKID = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_recipKID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipKID;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_recipKID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipKID;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_set_recipKID(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recipKID = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_transactionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transactionID;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_transactionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transactionID;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_set_transactionID(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transactionID = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_senderNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderNonce;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_senderNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderNonce;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_set_senderNonce(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___senderNonce = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_recipNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipNonce;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_recipNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipNonce;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_set_recipNonce(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recipNonce = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_freeText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freeText;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* const& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_freeText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freeText;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_set_freeText(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___freeText = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_generalInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_get_generalInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeader::__cordl_internal_set_generalInfo(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generalInfo = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiHeader::setStaticF_NULL_NAME(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::GeneralName*, "NULL_NAME", ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::GeneralName*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::Cmp::PkiHeader::getStaticF_NULL_NAME() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::GeneralName*, "NULL_NAME", ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>();
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiHeader::setStaticF_CMP_1999(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "CMP_1999", ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Asn1::Cmp::PkiHeader::getStaticF_CMP_1999() {
  return ::cordl_internals::getStaticField<int32_t, "CMP_1999", ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>();
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiHeader::setStaticF_CMP_2000(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "CMP_2000", ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Asn1::Cmp::PkiHeader::getStaticF_CMP_2000() {
  return ::cordl_internals::getStaticField<int32_t, "CMP_2000", ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>();
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiHeader::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Org::BouncyCastle::Asn1::Cmp::PkiHeader::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiHeader::_ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pvno, sender, recipient);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiHeader::_ctor(::Org::BouncyCastle::Asn1::DerInteger* pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                           ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pvno, sender, recipient);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_Pvno() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_Sender() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_Recipient() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_MessageTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_ProtectionAlg() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_SenderKID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_RecipKID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_TransactionID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_SenderNonce() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_RecipNonce() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* Org::BouncyCastle::Asn1::Cmp::PkiHeader::get_FreeText() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*> Org::BouncyCastle::Asn1::Cmp::PkiHeader::GetGeneralInfo() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::PkiHeader::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Org::BouncyCastle::Asn1::Cmp::PkiHeader::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Org::BouncyCastle::Asn1::Cmp::PkiHeader::New_ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                                                    ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(pvno, sender, recipient));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Org::BouncyCastle::Asn1::Cmp::PkiHeader::New_ctor(::Org::BouncyCastle::Asn1::DerInteger* pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                                                    ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(pvno, sender, recipient));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeader::PkiHeader() {}

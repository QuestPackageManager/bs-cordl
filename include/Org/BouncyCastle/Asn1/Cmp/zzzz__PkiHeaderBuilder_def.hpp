#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/PkiHeaderBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkiHeaderBuilder)
namespace Org::BouncyCastle::Asn1::Cmp {
class InfoTypeAndValue;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeaderBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder);
// Type: Org.BouncyCastle.Asn1.Cmp::PkiHeaderBuilder
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PkiHeaderBuilder*
class CORDL_TYPE PkiHeaderBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field freeText, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_freeText, put = __cordl_internal_set_freeText))::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* freeText;

  /// @brief Field generalInfo, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_generalInfo, put = __cordl_internal_set_generalInfo))::Org::BouncyCastle::Asn1::Asn1Sequence* generalInfo;

  /// @brief Field messageTime, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_messageTime, put = __cordl_internal_set_messageTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* messageTime;

  /// @brief Field protectionAlg, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_protectionAlg, put = __cordl_internal_set_protectionAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* protectionAlg;

  /// @brief Field pvno, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pvno, put = __cordl_internal_set_pvno))::Org::BouncyCastle::Asn1::DerInteger* pvno;

  /// @brief Field recipKID, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_recipKID, put = __cordl_internal_set_recipKID))::Org::BouncyCastle::Asn1::Asn1OctetString* recipKID;

  /// @brief Field recipNonce, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_recipNonce, put = __cordl_internal_set_recipNonce))::Org::BouncyCastle::Asn1::Asn1OctetString* recipNonce;

  /// @brief Field recipient, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_recipient, put = __cordl_internal_set_recipient))::Org::BouncyCastle::Asn1::X509::GeneralName* recipient;

  /// @brief Field sender, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sender, put = __cordl_internal_set_sender))::Org::BouncyCastle::Asn1::X509::GeneralName* sender;

  /// @brief Field senderKID, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_senderKID, put = __cordl_internal_set_senderKID))::Org::BouncyCastle::Asn1::Asn1OctetString* senderKID;

  /// @brief Field senderNonce, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_senderNonce, put = __cordl_internal_set_senderNonce))::Org::BouncyCastle::Asn1::Asn1OctetString* senderNonce;

  /// @brief Field transactionID, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_transactionID, put = __cordl_internal_set_transactionID))::Org::BouncyCastle::Asn1::Asn1OctetString* transactionID;

  /// @brief Method AddOptional, addr 0x10cb1bc, size 0x9c, virtual false, abstract: false, final false
  inline void AddOptional(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method Build, addr 0x10caf9c, size 0x220, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Build();

  /// @brief Method MakeGeneralInfoSeq, addr 0x10cae24, size 0x64, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* MakeGeneralInfoSeq(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* generalInfo);

  /// @brief Method MakeGeneralInfoSeq, addr 0x10caeb4, size 0xe0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence*
  MakeGeneralInfoSeq(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>*> generalInfos);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                           ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* New_ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  /// @brief Method SetFreeText, addr 0x10cadf0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetFreeText(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* text);

  /// @brief Method SetGeneralInfo, addr 0x10cadf8, size 0x2c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetGeneralInfo(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* genInfo);

  /// @brief Method SetGeneralInfo, addr 0x10cae88, size 0x2c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*
  SetGeneralInfo(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>*> genInfos);

  /// @brief Method SetGeneralInfo, addr 0x10caf94, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetGeneralInfo(::Org::BouncyCastle::Asn1::Asn1Sequence* seqOfInfoTypeAndValue);

  /// @brief Method SetMessageTime, addr 0x10cab1c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetMessageTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* time);

  /// @brief Method SetProtectionAlg, addr 0x10cab24, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetProtectionAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* aid);

  /// @brief Method SetRecipKID, addr 0x10cabb8, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetRecipKID(::ArrayW<uint8_t, ::Array<uint8_t>*> kid);

  /// @brief Method SetRecipKID, addr 0x10cac3c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetRecipKID(::Org::BouncyCastle::Asn1::Asn1OctetString* kid);

  /// @brief Method SetRecipNonce, addr 0x10cad60, size 0x88, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetRecipNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method SetRecipNonce, addr 0x10cade8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetRecipNonce(::Org::BouncyCastle::Asn1::Asn1OctetString* nonce);

  /// @brief Method SetSenderKID, addr 0x10cab2c, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetSenderKID(::ArrayW<uint8_t, ::Array<uint8_t>*> kid);

  /// @brief Method SetSenderKID, addr 0x10cabb0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetSenderKID(::Org::BouncyCastle::Asn1::Asn1OctetString* kid);

  /// @brief Method SetSenderNonce, addr 0x10cacd0, size 0x88, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetSenderNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method SetSenderNonce, addr 0x10cad58, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetSenderNonce(::Org::BouncyCastle::Asn1::Asn1OctetString* nonce);

  /// @brief Method SetTransactionID, addr 0x10cac44, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetTransactionID(::ArrayW<uint8_t, ::Array<uint8_t>*> tid);

  /// @brief Method SetTransactionID, addr 0x10cacc8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetTransactionID(::Org::BouncyCastle::Asn1::Asn1OctetString* tid);

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*& __cordl_internal_get_freeText();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*> const& __cordl_internal_get_freeText() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_generalInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_generalInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_messageTime();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __cordl_internal_get_messageTime() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_protectionAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_protectionAlg() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_pvno();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_pvno() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_recipKID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_recipKID() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_recipNonce();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_recipNonce() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_recipient();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __cordl_internal_get_recipient() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_sender();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __cordl_internal_get_sender() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_senderKID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_senderKID() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_senderNonce();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_senderNonce() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_transactionID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_transactionID() const;

  constexpr void __cordl_internal_set_freeText(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* value);

  constexpr void __cordl_internal_set_generalInfo(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_messageTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr void __cordl_internal_set_protectionAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_pvno(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_recipKID(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_recipNonce(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_recipient(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set_sender(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set_senderKID(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_senderNonce(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_transactionID(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x10caae0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  /// @brief Method .ctor, addr 0x10caa50, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiHeaderBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkiHeaderBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiHeaderBuilder(PkiHeaderBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiHeaderBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiHeaderBuilder(PkiHeaderBuilder const&) = delete;

  /// @brief Field pvno, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___pvno;

  /// @brief Field sender, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___sender;

  /// @brief Field recipient, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___recipient;

  /// @brief Field messageTime, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___messageTime;

  /// @brief Field protectionAlg, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___protectionAlg;

  /// @brief Field senderKID, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___senderKID;

  /// @brief Field recipKID, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___recipKID;

  /// @brief Field transactionID, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___transactionID;

  /// @brief Field senderNonce, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___senderNonce;

  /// @brief Field recipNonce, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___recipNonce;

  /// @brief Field freeText, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* ___freeText;

  /// @brief Field generalInfo, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___generalInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, 0x70>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, ___pvno) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, ___sender) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, ___recipient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, ___messageTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, ___protectionAlg) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, ___senderKID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, ___recipKID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, ___transactionID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, ___senderNonce) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, ___recipNonce) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, ___freeText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, ___generalInfo) == 0x68, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*, "Org.BouncyCastle.Asn1.Cmp", "PkiHeaderBuilder");

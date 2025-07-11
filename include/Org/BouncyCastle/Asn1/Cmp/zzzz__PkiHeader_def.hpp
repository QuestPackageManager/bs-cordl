#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/PkiHeader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkiHeader)
namespace Org::BouncyCastle::Asn1::Cmp {
class InfoTypeAndValue;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PkiHeader);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiHeader
class CORDL_TYPE PkiHeader : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field CMP_1999, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_CMP_1999, put = setStaticF_CMP_1999)) int32_t CMP_1999;

  /// @brief Field CMP_2000, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_CMP_2000, put = setStaticF_CMP_2000)) int32_t CMP_2000;

  __declspec(property(get = get_FreeText)) ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* FreeText;

  __declspec(property(get = get_MessageTime)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* MessageTime;

  /// @brief Field NULL_NAME, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NULL_NAME, put = setStaticF_NULL_NAME)) ::Org::BouncyCastle::Asn1::X509::GeneralName* NULL_NAME;

  __declspec(property(get = get_ProtectionAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ProtectionAlg;

  __declspec(property(get = get_Pvno)) ::Org::BouncyCastle::Asn1::DerInteger* Pvno;

  __declspec(property(get = get_RecipKID)) ::Org::BouncyCastle::Asn1::Asn1OctetString* RecipKID;

  __declspec(property(get = get_RecipNonce)) ::Org::BouncyCastle::Asn1::Asn1OctetString* RecipNonce;

  __declspec(property(get = get_Recipient)) ::Org::BouncyCastle::Asn1::X509::GeneralName* Recipient;

  __declspec(property(get = get_Sender)) ::Org::BouncyCastle::Asn1::X509::GeneralName* Sender;

  __declspec(property(get = get_SenderKID)) ::Org::BouncyCastle::Asn1::Asn1OctetString* SenderKID;

  __declspec(property(get = get_SenderNonce)) ::Org::BouncyCastle::Asn1::Asn1OctetString* SenderNonce;

  __declspec(property(get = get_TransactionID)) ::Org::BouncyCastle::Asn1::Asn1OctetString* TransactionID;

  /// @brief Field freeText, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_freeText, put = __cordl_internal_set_freeText)) ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* freeText;

  /// @brief Field generalInfo, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_generalInfo, put = __cordl_internal_set_generalInfo)) ::Org::BouncyCastle::Asn1::Asn1Sequence* generalInfo;

  /// @brief Field messageTime, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_messageTime, put = __cordl_internal_set_messageTime)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* messageTime;

  /// @brief Field protectionAlg, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_protectionAlg, put = __cordl_internal_set_protectionAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* protectionAlg;

  /// @brief Field pvno, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pvno, put = __cordl_internal_set_pvno)) ::Org::BouncyCastle::Asn1::DerInteger* pvno;

  /// @brief Field recipKID, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_recipKID, put = __cordl_internal_set_recipKID)) ::Org::BouncyCastle::Asn1::Asn1OctetString* recipKID;

  /// @brief Field recipNonce, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_recipNonce, put = __cordl_internal_set_recipNonce)) ::Org::BouncyCastle::Asn1::Asn1OctetString* recipNonce;

  /// @brief Field recipient, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_recipient, put = __cordl_internal_set_recipient)) ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient;

  /// @brief Field sender, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sender, put = __cordl_internal_set_sender)) ::Org::BouncyCastle::Asn1::X509::GeneralName* sender;

  /// @brief Field senderKID, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_senderKID, put = __cordl_internal_set_senderKID)) ::Org::BouncyCastle::Asn1::Asn1OctetString* senderKID;

  /// @brief Field senderNonce, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_senderNonce, put = __cordl_internal_set_senderNonce)) ::Org::BouncyCastle::Asn1::Asn1OctetString* senderNonce;

  /// @brief Field transactionID, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_transactionID, put = __cordl_internal_set_transactionID)) ::Org::BouncyCastle::Asn1::Asn1OctetString* transactionID;

  /// @brief Method GetGeneralInfo, addr 0x22fb21c, size 0x100, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>*> GetGeneralInfo();

  /// @brief Method GetInstance, addr 0x22faf84, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                    ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* New_ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22fb31c, size 0x220, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* const& __cordl_internal_get_freeText() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*& __cordl_internal_get_freeText();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_generalInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_generalInfo();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& __cordl_internal_get_messageTime() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_messageTime();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_protectionAlg() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_protectionAlg();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_pvno() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_pvno();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_recipKID() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_recipKID();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_recipNonce() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_recipNonce();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get_recipient() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_recipient();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get_sender() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_sender();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_senderKID() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_senderKID();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_senderNonce() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_senderNonce();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_transactionID() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_transactionID();

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

  /// @brief Method .ctor, addr 0x22fb188, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  /// @brief Method .ctor, addr 0x22fb100, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  /// @brief Method .ctor, addr 0x22faccc, size 0x2b8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline int32_t getStaticF_CMP_1999();

  static inline int32_t getStaticF_CMP_2000();

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* getStaticF_NULL_NAME();

  /// @brief Method get_FreeText, addr 0x22fb214, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* get_FreeText();

  /// @brief Method get_MessageTime, addr 0x22fb1dc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_MessageTime();

  /// @brief Method get_ProtectionAlg, addr 0x22fb1e4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_ProtectionAlg();

  /// @brief Method get_Pvno, addr 0x22fb1c4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Pvno();

  /// @brief Method get_RecipKID, addr 0x22fb1f4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_RecipKID();

  /// @brief Method get_RecipNonce, addr 0x22fb20c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_RecipNonce();

  /// @brief Method get_Recipient, addr 0x22fb1d4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Recipient();

  /// @brief Method get_Sender, addr 0x22fb1cc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Sender();

  /// @brief Method get_SenderKID, addr 0x22fb1ec, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_SenderKID();

  /// @brief Method get_SenderNonce, addr 0x22fb204, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_SenderNonce();

  /// @brief Method get_TransactionID, addr 0x22fb1fc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_TransactionID();

  static inline void setStaticF_CMP_1999(int32_t value);

  static inline void setStaticF_CMP_2000(int32_t value);

  static inline void setStaticF_NULL_NAME(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiHeader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkiHeader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiHeader(PkiHeader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiHeader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiHeader(PkiHeader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 37 };

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
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeader, ___pvno) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeader, ___sender) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeader, ___recipient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeader, ___messageTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeader, ___protectionAlg) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeader, ___senderKID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeader, ___recipKID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeader, ___transactionID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeader, ___senderNonce) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeader, ___recipNonce) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeader, ___freeText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiHeader, ___generalInfo) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiHeader, 0x70>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiHeader);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiHeader*, "Org.BouncyCastle.Asn1.Cmp", "PkiHeader");

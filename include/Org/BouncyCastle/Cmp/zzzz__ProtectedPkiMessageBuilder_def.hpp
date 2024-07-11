#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cmp/ProtectedPkiMessageBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProtectedPkiMessageBuilder)
namespace Org::BouncyCastle::Asn1::Cmp {
class InfoTypeAndValue;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeaderBuilder;
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
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Cmp {
class ProtectedPkiMessage;
}
namespace Org::BouncyCastle::Crypto {
class IMacFactory;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class ProtectedPkiMessageBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder);
// Type: Org.BouncyCastle.Cmp::ProtectedPkiMessageBuilder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cmp::ProtectedPkiMessageBuilder*
class CORDL_TYPE ProtectedPkiMessageBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field body, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_body, put = __cordl_internal_set_body))::Org::BouncyCastle::Asn1::Cmp::PkiBody* body;

  /// @brief Field extraCerts, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_extraCerts, put = __cordl_internal_set_extraCerts))::System::Collections::IList* extraCerts;

  /// @brief Field generalInfos, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_generalInfos, put = __cordl_internal_set_generalInfos))::System::Collections::IList* generalInfos;

  /// @brief Field hdrBuilBuilder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hdrBuilBuilder, put = __cordl_internal_set_hdrBuilBuilder))::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* hdrBuilBuilder;

  /// @brief Method AddCmpCertificate, addr 0x144a290, size 0xb4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* AddCmpCertificate(::Org::BouncyCastle::X509::X509Certificate* certificate);

  /// @brief Method AddGeneralInfo, addr 0x144a0f4, size 0xb4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* AddGeneralInfo(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* genInfo);

  /// @brief Method Build, addr 0x144afec, size 0x22c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Build(::Org::BouncyCastle::Crypto::IMacFactory* factory);

  /// @brief Method Build, addr 0x144a344, size 0x2ec, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Build(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory);

  /// @brief Method CalculateSignature, addr 0x144a910, size 0x378, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateSignature(::Org::BouncyCastle::Crypto::IStreamCalculator* signer, ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header,
                                                                 ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body);

  /// @brief Method FinalizeHeader, addr 0x144a630, size 0x2e0, virtual false, abstract: false, final false
  inline void FinalizeHeader(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier);

  /// @brief Method FinalizeMessage, addr 0x144ac88, size 0x364, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* FinalizeMessage(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::DerBitString* protection);

  static inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* New_ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                               ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  static inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  /// @brief Method SetBody, addr 0x144a288, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetBody(::Org::BouncyCastle::Asn1::Cmp::PkiBody* body);

  /// @brief Method SetFreeText, addr 0x144a0c4, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetFreeText(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* freeText);

  /// @brief Method SetMessageTime, addr 0x144a1a8, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetMessageTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* generalizedTime);

  /// @brief Method SetRecipKID, addr 0x144a1d4, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetRecipKID(::ArrayW<uint8_t, ::Array<uint8_t>*> id);

  /// @brief Method SetRecipNonce, addr 0x144a200, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetRecipNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method SetSenderKID, addr 0x144a230, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetSenderKID(::ArrayW<uint8_t, ::Array<uint8_t>*> id);

  /// @brief Method SetSenderNonce, addr 0x144a25c, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetSenderNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method SetTransactionId, addr 0x144a098, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetTransactionId(::ArrayW<uint8_t, ::Array<uint8_t>*> tid);

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiBody*& __cordl_internal_get_body();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiBody*> const& __cordl_internal_get_body() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_extraCerts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_extraCerts() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_generalInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_generalInfos() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*& __cordl_internal_get_hdrBuilBuilder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*> const& __cordl_internal_get_hdrBuilBuilder() const;

  constexpr void __cordl_internal_set_body(::Org::BouncyCastle::Asn1::Cmp::PkiBody* value);

  constexpr void __cordl_internal_set_extraCerts(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_generalInfos(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_hdrBuilBuilder(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* value);

  /// @brief Method .ctor, addr 0x1449fc8, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  /// @brief Method .ctor, addr 0x1449f50, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProtectedPkiMessageBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProtectedPkiMessageBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProtectedPkiMessageBuilder(ProtectedPkiMessageBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProtectedPkiMessageBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProtectedPkiMessageBuilder(ProtectedPkiMessageBuilder const&) = delete;

  /// @brief Field hdrBuilBuilder, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* ___hdrBuilBuilder;

  /// @brief Field body, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiBody* ___body;

  /// @brief Field generalInfos, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IList* ___generalInfos;

  /// @brief Field extraCerts, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IList* ___extraCerts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, ___hdrBuilBuilder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, ___body) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, ___generalInfos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, ___extraCerts) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*, "Org.BouncyCastle.Cmp", "ProtectedPkiMessageBuilder");

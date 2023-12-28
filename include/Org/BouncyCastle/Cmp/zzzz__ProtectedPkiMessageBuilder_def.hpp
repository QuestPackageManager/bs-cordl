#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProtectedPkiMessageBuilder)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class InfoTypeAndValue;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeaderBuilder;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::Cmp {
class ProtectedPkiMessage;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Crypto {
class IMacFactory;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(607))
// CS Name: ::Org.BouncyCastle.Cmp::ProtectedPkiMessageBuilder*
class CORDL_TYPE ProtectedPkiMessageBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field hdrBuilBuilder, offset 0x10, size 0x8
  __declspec(property(get = __get_hdrBuilBuilder, put = __set_hdrBuilBuilder))::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* hdrBuilBuilder;

  /// @brief Field body, offset 0x18, size 0x8
  __declspec(property(get = __get_body, put = __set_body))::Org::BouncyCastle::Asn1::Cmp::PkiBody* body;

  /// @brief Field generalInfos, offset 0x20, size 0x8
  __declspec(property(get = __get_generalInfos, put = __set_generalInfos))::System::Collections::IList* generalInfos;

  /// @brief Field extraCerts, offset 0x28, size 0x8
  __declspec(property(get = __get_extraCerts, put = __set_extraCerts))::System::Collections::IList* extraCerts;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*& __get_hdrBuilBuilder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*> const& __get_hdrBuilBuilder() const;

  constexpr void __set_hdrBuilBuilder(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* value);

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiBody*& __get_body();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiBody*> const& __get_body() const;

  constexpr void __set_body(::Org::BouncyCastle::Asn1::Cmp::PkiBody* value);

  constexpr ::System::Collections::IList*& __get_generalInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_generalInfos() const;

  constexpr void __set_generalInfos(::System::Collections::IList* value);

  constexpr ::System::Collections::IList*& __get_extraCerts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_extraCerts() const;

  constexpr void __set_extraCerts(::System::Collections::IList* value);

  static inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  /// @brief Method .ctor addr 0x11d6bdc size 0x78 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  static inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* New_ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                               ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  /// @brief Method .ctor addr 0x11d6c54 size 0xd0 virtual false final false
  inline void _ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  /// @brief Method SetTransactionId addr 0x11d6d24 size 0x2c virtual false final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetTransactionId(::ArrayW<uint8_t, ::Array<uint8_t>*> tid);

  /// @brief Method SetFreeText addr 0x11d6d50 size 0x30 virtual false final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetFreeText(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* freeText);

  /// @brief Method AddGeneralInfo addr 0x11d6d80 size 0xb4 virtual false final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* AddGeneralInfo(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* genInfo);

  /// @brief Method SetMessageTime addr 0x11d6e34 size 0x2c virtual false final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetMessageTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* generalizedTime);

  /// @brief Method SetRecipKID addr 0x11d6e60 size 0x2c virtual false final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetRecipKID(::ArrayW<uint8_t, ::Array<uint8_t>*> id);

  /// @brief Method SetRecipNonce addr 0x11d6e8c size 0x30 virtual false final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetRecipNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method SetSenderKID addr 0x11d6ebc size 0x2c virtual false final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetSenderKID(::ArrayW<uint8_t, ::Array<uint8_t>*> id);

  /// @brief Method SetSenderNonce addr 0x11d6ee8 size 0x2c virtual false final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetSenderNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method SetBody addr 0x11d6f14 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* SetBody(::Org::BouncyCastle::Asn1::Cmp::PkiBody* body);

  /// @brief Method AddCmpCertificate addr 0x11d6f1c size 0xb4 virtual false final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* AddCmpCertificate(::Org::BouncyCastle::X509::X509Certificate* certificate);

  /// @brief Method Build addr 0x11d6fd0 size 0x2ec virtual false final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Build(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory);

  /// @brief Method Build addr 0x11d7c78 size 0x22c virtual false final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Build(::Org::BouncyCastle::Crypto::IMacFactory* factory);

  /// @brief Method FinalizeHeader addr 0x11d72bc size 0x2e0 virtual false final false
  inline void FinalizeHeader(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier);

  /// @brief Method FinalizeMessage addr 0x11d7914 size 0x364 virtual false final false
  inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* FinalizeMessage(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::DerBitString* protection);

  /// @brief Method CalculateSignature addr 0x11d759c size 0x378 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateSignature(::Org::BouncyCastle::Crypto::IStreamCalculator* signer, ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header,
                                                                 ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body);

  // Ctor Parameters [CppParam { name: "", ty: "ProtectedPkiMessageBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProtectedPkiMessageBuilder(ProtectedPkiMessageBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProtectedPkiMessageBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProtectedPkiMessageBuilder(ProtectedPkiMessageBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProtectedPkiMessageBuilder();

public:
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

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*, "Org.BouncyCastle.Cmp", "ProtectedPkiMessageBuilder");

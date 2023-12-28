#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SignedData)
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class SignedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::SignedData);
// Type: Org.BouncyCastle.Asn1.Pkcs::SignedData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(252))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::SignedData*
class CORDL_TYPE SignedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field digestAlgorithms, offset 0x18, size 0x8
  __declspec(property(get = __get_digestAlgorithms, put = __set_digestAlgorithms))::Org::BouncyCastle::Asn1::Asn1Set* digestAlgorithms;

  /// @brief Field contentInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_contentInfo, put = __set_contentInfo))::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* contentInfo;

  /// @brief Field certificates, offset 0x28, size 0x8
  __declspec(property(get = __get_certificates, put = __set_certificates))::Org::BouncyCastle::Asn1::Asn1Set* certificates;

  /// @brief Field crls, offset 0x30, size 0x8
  __declspec(property(get = __get_crls, put = __set_crls))::Org::BouncyCastle::Asn1::Asn1Set* crls;

  /// @brief Field signerInfos, offset 0x38, size 0x8
  __declspec(property(get = __get_signerInfos, put = __set_signerInfos))::Org::BouncyCastle::Asn1::Asn1Set* signerInfos;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_DigestAlgorithms))::Org::BouncyCastle::Asn1::Asn1Set* DigestAlgorithms;

  __declspec(property(get = get_ContentInfo))::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* ContentInfo;

  __declspec(property(get = get_Certificates))::Org::BouncyCastle::Asn1::Asn1Set* Certificates;

  __declspec(property(get = get_Crls))::Org::BouncyCastle::Asn1::Asn1Set* Crls;

  __declspec(property(get = get_SignerInfos))::Org::BouncyCastle::Asn1::Asn1Set* SignerInfos;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_digestAlgorithms();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_digestAlgorithms() const;

  constexpr void __set_digestAlgorithms(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*& __get_contentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*> const& __get_contentInfo() const;

  constexpr void __set_contentInfo(::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_certificates();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_certificates() const;

  constexpr void __set_certificates(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_crls();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_crls() const;

  constexpr void __set_crls(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_signerInfos();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_signerInfos() const;

  constexpr void __set_signerInfos(::Org::BouncyCastle::Asn1::Asn1Set* value);

  /// @brief Method GetInstance addr 0xf8f854 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::SignedData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::SignedData* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* _version, ::Org::BouncyCastle::Asn1::Asn1Set* _digestAlgorithms,
                                                                      ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* _contentInfo, ::Org::BouncyCastle::Asn1::Asn1Set* _certificates,
                                                                      ::Org::BouncyCastle::Asn1::Asn1Set* _crls, ::Org::BouncyCastle::Asn1::Asn1Set* _signerInfos);

  /// @brief Method .ctor addr 0xf8fee4 size 0x54 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* _version, ::Org::BouncyCastle::Asn1::Asn1Set* _digestAlgorithms, ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* _contentInfo,
                    ::Org::BouncyCastle::Asn1::Asn1Set* _certificates, ::Org::BouncyCastle::Asn1::Asn1Set* _crls, ::Org::BouncyCastle::Asn1::Asn1Set* _signerInfos);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::SignedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf8f8f8 size 0x5ec virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Version addr 0xf8ff38 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_DigestAlgorithms addr 0xf8ff40 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_DigestAlgorithms();

  /// @brief Method get_ContentInfo addr 0xf8ff48 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* get_ContentInfo();

  /// @brief Method get_Certificates addr 0xf8ff50 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_Certificates();

  /// @brief Method get_Crls addr 0xf8ff58 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_Crls();

  /// @brief Method get_SignerInfos addr 0xf8ff60 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_SignerInfos();

  /// @brief Method ToAsn1Object addr 0xf8ff68 size 0x194 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "SignedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignedData(SignedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignedData(SignedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignedData();

public:
  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field digestAlgorithms, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___digestAlgorithms;

  /// @brief Field contentInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* ___contentInfo;

  /// @brief Field certificates, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___certificates;

  /// @brief Field crls, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___crls;

  /// @brief Field signerInfos, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___signerInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::SignedData, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::SignedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::SignedData*, "Org.BouncyCastle.Asn1.Pkcs", "SignedData");

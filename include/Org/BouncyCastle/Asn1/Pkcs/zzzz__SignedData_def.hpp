#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SignedData)
namespace Org::BouncyCastle::Asn1::Pkcs {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
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
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::SignedData*
class CORDL_TYPE SignedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Certificates))::Org::BouncyCastle::Asn1::Asn1Set* Certificates;

  __declspec(property(get = get_ContentInfo))::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* ContentInfo;

  __declspec(property(get = get_Crls))::Org::BouncyCastle::Asn1::Asn1Set* Crls;

  __declspec(property(get = get_DigestAlgorithms))::Org::BouncyCastle::Asn1::Asn1Set* DigestAlgorithms;

  __declspec(property(get = get_SignerInfos))::Org::BouncyCastle::Asn1::Asn1Set* SignerInfos;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field certificates, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_certificates, put = __cordl_internal_set_certificates))::Org::BouncyCastle::Asn1::Asn1Set* certificates;

  /// @brief Field contentInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_contentInfo, put = __cordl_internal_set_contentInfo))::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* contentInfo;

  /// @brief Field crls, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_crls, put = __cordl_internal_set_crls))::Org::BouncyCastle::Asn1::Asn1Set* crls;

  /// @brief Field digestAlgorithms, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_digestAlgorithms, put = __cordl_internal_set_digestAlgorithms))::Org::BouncyCastle::Asn1::Asn1Set* digestAlgorithms;

  /// @brief Field signerInfos, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_signerInfos, put = __cordl_internal_set_signerInfos))::Org::BouncyCastle::Asn1::Asn1Set* signerInfos;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetInstance, addr 0x11ee060, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::SignedData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::SignedData* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* _version, ::Org::BouncyCastle::Asn1::Asn1Set* _digestAlgorithms,
                                                                      ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* _contentInfo, ::Org::BouncyCastle::Asn1::Asn1Set* _certificates,
                                                                      ::Org::BouncyCastle::Asn1::Asn1Set* _crls, ::Org::BouncyCastle::Asn1::Asn1Set* _signerInfos);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::SignedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x11ee774, size 0x194, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_certificates();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_certificates() const;

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*& __cordl_internal_get_contentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*> const& __cordl_internal_get_contentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_crls();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_crls() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_digestAlgorithms();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_digestAlgorithms() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_signerInfos();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_signerInfos() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_version() const;

  constexpr void __cordl_internal_set_certificates(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* value);

  constexpr void __cordl_internal_set_crls(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_digestAlgorithms(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_signerInfos(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x11ee6f0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* _version, ::Org::BouncyCastle::Asn1::Asn1Set* _digestAlgorithms, ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* _contentInfo,
                    ::Org::BouncyCastle::Asn1::Asn1Set* _certificates, ::Org::BouncyCastle::Asn1::Asn1Set* _crls, ::Org::BouncyCastle::Asn1::Asn1Set* _signerInfos);

  /// @brief Method .ctor, addr 0x11ee104, size 0x5ec, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Certificates, addr 0x11ee75c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_Certificates();

  /// @brief Method get_ContentInfo, addr 0x11ee754, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* get_ContentInfo();

  /// @brief Method get_Crls, addr 0x11ee764, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_Crls();

  /// @brief Method get_DigestAlgorithms, addr 0x11ee74c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_DigestAlgorithms();

  /// @brief Method get_SignerInfos, addr 0x11ee76c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_SignerInfos();

  /// @brief Method get_Version, addr 0x11ee744, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignedData(SignedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignedData(SignedData const&) = delete;

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

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SignedData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SignedData, ___digestAlgorithms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SignedData, ___contentInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SignedData, ___certificates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SignedData, ___crls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::SignedData, ___signerInfos) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::SignedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::SignedData*, "Org.BouncyCastle.Asn1.Pkcs", "SignedData");

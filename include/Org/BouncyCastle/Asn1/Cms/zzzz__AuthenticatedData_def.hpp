#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/AuthenticatedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticatedData)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
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
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class AuthenticatedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData);
// Type: Org.BouncyCastle.Asn1.Cms::AuthenticatedData
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cms::AuthenticatedData*
class CORDL_TYPE AuthenticatedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AuthAttrs))::Org::BouncyCastle::Asn1::Asn1Set* AuthAttrs;

  __declspec(property(get = get_DigestAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DigestAlgorithm;

  __declspec(property(get = get_EncapsulatedContentInfo))::Org::BouncyCastle::Asn1::Cms::ContentInfo* EncapsulatedContentInfo;

  __declspec(property(get = get_Mac))::Org::BouncyCastle::Asn1::Asn1OctetString* Mac;

  __declspec(property(get = get_MacAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* MacAlgorithm;

  __declspec(property(get = get_OriginatorInfo))::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* OriginatorInfo;

  __declspec(property(get = get_RecipientInfos))::Org::BouncyCastle::Asn1::Asn1Set* RecipientInfos;

  __declspec(property(get = get_UnauthAttrs))::Org::BouncyCastle::Asn1::Asn1Set* UnauthAttrs;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field authAttrs, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_authAttrs, put = __cordl_internal_set_authAttrs))::Org::BouncyCastle::Asn1::Asn1Set* authAttrs;

  /// @brief Field digestAlgorithm, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_digestAlgorithm, put = __cordl_internal_set_digestAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm;

  /// @brief Field encapsulatedContentInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_encapsulatedContentInfo, put = __cordl_internal_set_encapsulatedContentInfo))::Org::BouncyCastle::Asn1::Cms::ContentInfo* encapsulatedContentInfo;

  /// @brief Field mac, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mac, put = __cordl_internal_set_mac))::Org::BouncyCastle::Asn1::Asn1OctetString* mac;

  /// @brief Field macAlgorithm, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_macAlgorithm, put = __cordl_internal_set_macAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgorithm;

  /// @brief Field originatorInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_originatorInfo, put = __cordl_internal_set_originatorInfo))::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo;

  /// @brief Field recipientInfos, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_recipientInfos, put = __cordl_internal_set_recipientInfos))::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos;

  /// @brief Field unauthAttrs, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_unauthAttrs, put = __cordl_internal_set_unauthAttrs))::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method CalculateVersion, addr 0x10d7070, size 0x568, virtual false, abstract: false, final false
  static inline int32_t CalculateVersion(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* origInfo);

  /// @brief Method GetInstance, addr 0x10d7a6c, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::AuthenticatedData* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x10d7a84, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::AuthenticatedData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::AuthenticatedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                                                                            ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgorithm,
                                                                            ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm,
                                                                            ::Org::BouncyCastle::Asn1::Cms::ContentInfo* encapsulatedContent, ::Org::BouncyCastle::Asn1::Asn1Set* authAttrs,
                                                                            ::Org::BouncyCastle::Asn1::Asn1OctetString* mac, ::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs);

  static inline ::Org::BouncyCastle::Asn1::Cms::AuthenticatedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x10d7c44, size 0x1f4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_authAttrs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_authAttrs() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_digestAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_digestAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __cordl_internal_get_encapsulatedContentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> const& __cordl_internal_get_encapsulatedContentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_mac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_mac() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_macAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_macAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*& __cordl_internal_get_originatorInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*> const& __cordl_internal_get_originatorInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_recipientInfos();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_recipientInfos() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_unauthAttrs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_unauthAttrs() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_version() const;

  constexpr void __cordl_internal_set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_digestAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_encapsulatedContentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  constexpr void __cordl_internal_set_mac(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_macAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* value);

  constexpr void __cordl_internal_set_recipientInfos(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x10d6f3c, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgorithm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm,
                    ::Org::BouncyCastle::Asn1::Cms::ContentInfo* encapsulatedContent, ::Org::BouncyCastle::Asn1::Asn1Set* authAttrs, ::Org::BouncyCastle::Asn1::Asn1OctetString* mac,
                    ::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs);

  /// @brief Method .ctor, addr 0x10d75d8, size 0x304, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_AuthAttrs, addr 0x10d7c2c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_AuthAttrs();

  /// @brief Method get_DigestAlgorithm, addr 0x10d7c1c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithm();

  /// @brief Method get_EncapsulatedContentInfo, addr 0x10d7c24, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_EncapsulatedContentInfo();

  /// @brief Method get_Mac, addr 0x10d7c34, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Mac();

  /// @brief Method get_MacAlgorithm, addr 0x10d7c14, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_MacAlgorithm();

  /// @brief Method get_OriginatorInfo, addr 0x10d7c04, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* get_OriginatorInfo();

  /// @brief Method get_RecipientInfos, addr 0x10d7c0c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_RecipientInfos();

  /// @brief Method get_UnauthAttrs, addr 0x10d7c3c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_UnauthAttrs();

  /// @brief Method get_Version, addr 0x10d7bfc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticatedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthenticatedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticatedData(AuthenticatedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticatedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticatedData(AuthenticatedData const&) = delete;

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field originatorInfo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* ___originatorInfo;

  /// @brief Field recipientInfos, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___recipientInfos;

  /// @brief Field macAlgorithm, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___macAlgorithm;

  /// @brief Field digestAlgorithm, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___digestAlgorithm;

  /// @brief Field encapsulatedContentInfo, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___encapsulatedContentInfo;

  /// @brief Field authAttrs, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___authAttrs;

  /// @brief Field mac, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___mac;

  /// @brief Field unauthAttrs, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___unauthAttrs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::AuthenticatedData, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData, ___originatorInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData, ___recipientInfos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData, ___macAlgorithm) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData, ___digestAlgorithm) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData, ___encapsulatedContentInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData, ___authAttrs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData, ___mac) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData, ___unauthAttrs) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData*, "Org.BouncyCastle.Asn1.Cms", "AuthenticatedData");

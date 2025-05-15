#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/AuthEnvelopedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(AuthEnvelopedData)
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
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
class AuthEnvelopedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.AuthEnvelopedData
class CORDL_TYPE AuthEnvelopedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AuthAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set* AuthAttrs;

  __declspec(property(get = get_AuthEncryptedContentInfo)) ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* AuthEncryptedContentInfo;

  __declspec(property(get = get_Mac)) ::Org::BouncyCastle::Asn1::Asn1OctetString* Mac;

  __declspec(property(get = get_OriginatorInfo)) ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* OriginatorInfo;

  __declspec(property(get = get_RecipientInfos)) ::Org::BouncyCastle::Asn1::Asn1Set* RecipientInfos;

  __declspec(property(get = get_UnauthAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set* UnauthAttrs;

  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field authAttrs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_authAttrs, put = __cordl_internal_set_authAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set* authAttrs;

  /// @brief Field authEncryptedContentInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_authEncryptedContentInfo,
                      put = __cordl_internal_set_authEncryptedContentInfo)) ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* authEncryptedContentInfo;

  /// @brief Field mac, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mac, put = __cordl_internal_set_mac)) ::Org::BouncyCastle::Asn1::Asn1OctetString* mac;

  /// @brief Field originatorInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_originatorInfo, put = __cordl_internal_set_originatorInfo)) ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo;

  /// @brief Field recipientInfos, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_recipientInfos, put = __cordl_internal_set_recipientInfos)) ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos;

  /// @brief Field unauthAttrs, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_unauthAttrs, put = __cordl_internal_set_unauthAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetInstance, addr 0x23035c4, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x23035dc, size 0x168, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                                                                            ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* authEncryptedContentInfo,
                                                                            ::Org::BouncyCastle::Asn1::Asn1Set* authAttrs, ::Org::BouncyCastle::Asn1::Asn1OctetString* mac,
                                                                            ::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs);

  static inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x230377c, size 0x1c8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_authAttrs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_authAttrs();

  constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* const& __cordl_internal_get_authEncryptedContentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*& __cordl_internal_get_authEncryptedContentInfo();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_mac() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_mac();

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* const& __cordl_internal_get_originatorInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*& __cordl_internal_get_originatorInfo();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_recipientInfos() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_recipientInfos();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_unauthAttrs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_unauthAttrs();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_authEncryptedContentInfo(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* value);

  constexpr void __cordl_internal_set_mac(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* value);

  constexpr void __cordl_internal_set_recipientInfos(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x23030d0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                    ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* authEncryptedContentInfo, ::Org::BouncyCastle::Asn1::Asn1Set* authAttrs, ::Org::BouncyCastle::Asn1::Asn1OctetString* mac,
                    ::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs);

  /// @brief Method .ctor, addr 0x2303174, size 0x2e8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_AuthAttrs, addr 0x2303764, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_AuthAttrs();

  /// @brief Method get_AuthEncryptedContentInfo, addr 0x230375c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* get_AuthEncryptedContentInfo();

  /// @brief Method get_Mac, addr 0x230376c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Mac();

  /// @brief Method get_OriginatorInfo, addr 0x230374c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* get_OriginatorInfo();

  /// @brief Method get_RecipientInfos, addr 0x2303754, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_RecipientInfos();

  /// @brief Method get_UnauthAttrs, addr 0x2303774, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_UnauthAttrs();

  /// @brief Method get_Version, addr 0x2303744, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthEnvelopedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthEnvelopedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthEnvelopedData(AuthEnvelopedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthEnvelopedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthEnvelopedData(AuthEnvelopedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 60 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field originatorInfo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* ___originatorInfo;

  /// @brief Field recipientInfos, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___recipientInfos;

  /// @brief Field authEncryptedContentInfo, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* ___authEncryptedContentInfo;

  /// @brief Field authAttrs, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___authAttrs;

  /// @brief Field mac, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___mac;

  /// @brief Field unauthAttrs, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___unauthAttrs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___originatorInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___recipientInfos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___authEncryptedContentInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___authAttrs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___mac) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___unauthAttrs) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*, "Org.BouncyCastle.Asn1.Cms", "AuthEnvelopedData");

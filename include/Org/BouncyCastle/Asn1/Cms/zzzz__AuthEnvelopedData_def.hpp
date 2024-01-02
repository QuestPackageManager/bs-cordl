#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(AuthEnvelopedData)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class AuthEnvelopedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData);
// Type: Org.BouncyCastle.Asn1.Cms::AuthEnvelopedData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(60))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::AuthEnvelopedData*
class CORDL_TYPE AuthEnvelopedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field originatorInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_originatorInfo, put = __set_originatorInfo))::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo;

  /// @brief Field recipientInfos, offset 0x20, size 0x8
  __declspec(property(get = __get_recipientInfos, put = __set_recipientInfos))::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos;

  /// @brief Field authEncryptedContentInfo, offset 0x28, size 0x8
  __declspec(property(get = __get_authEncryptedContentInfo, put = __set_authEncryptedContentInfo))::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* authEncryptedContentInfo;

  /// @brief Field authAttrs, offset 0x30, size 0x8
  __declspec(property(get = __get_authAttrs, put = __set_authAttrs))::Org::BouncyCastle::Asn1::Asn1Set* authAttrs;

  /// @brief Field mac, offset 0x38, size 0x8
  __declspec(property(get = __get_mac, put = __set_mac))::Org::BouncyCastle::Asn1::Asn1OctetString* mac;

  /// @brief Field unauthAttrs, offset 0x40, size 0x8
  __declspec(property(get = __get_unauthAttrs, put = __set_unauthAttrs))::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_OriginatorInfo))::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* OriginatorInfo;

  __declspec(property(get = get_RecipientInfos))::Org::BouncyCastle::Asn1::Asn1Set* RecipientInfos;

  __declspec(property(get = get_AuthEncryptedContentInfo))::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* AuthEncryptedContentInfo;

  __declspec(property(get = get_AuthAttrs))::Org::BouncyCastle::Asn1::Asn1Set* AuthAttrs;

  __declspec(property(get = get_Mac))::Org::BouncyCastle::Asn1::Asn1OctetString* Mac;

  __declspec(property(get = get_UnauthAttrs))::Org::BouncyCastle::Asn1::Asn1Set* UnauthAttrs;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*& __get_originatorInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*> const& __get_originatorInfo() const;

  constexpr void __set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_recipientInfos();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_recipientInfos() const;

  constexpr void __set_recipientInfos(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*& __get_authEncryptedContentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*> const& __get_authEncryptedContentInfo() const;

  constexpr void __set_authEncryptedContentInfo(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_authAttrs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_authAttrs() const;

  constexpr void __set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_mac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_mac() const;

  constexpr void __set_mac(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_unauthAttrs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_unauthAttrs() const;

  constexpr void __set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                                                                            ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* authEncryptedContentInfo,
                                                                            ::Org::BouncyCastle::Asn1::Asn1Set* authAttrs, ::Org::BouncyCastle::Asn1::Asn1OctetString* mac,
                                                                            ::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs);

  /// @brief Method .ctor, addr 0xe73ed8, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                    ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* authEncryptedContentInfo, ::Org::BouncyCastle::Asn1::Asn1Set* authAttrs, ::Org::BouncyCastle::Asn1::Asn1OctetString* mac,
                    ::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs);

  static inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe73f84, size 0x2e8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe743e4, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0xe743fc, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* GetInstance(::System::Object* obj);

  /// @brief Method get_Version, addr 0xe74574, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_OriginatorInfo, addr 0xe7457c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* get_OriginatorInfo();

  /// @brief Method get_RecipientInfos, addr 0xe74584, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_RecipientInfos();

  /// @brief Method get_AuthEncryptedContentInfo, addr 0xe7458c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* get_AuthEncryptedContentInfo();

  /// @brief Method get_AuthAttrs, addr 0xe74594, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_AuthAttrs();

  /// @brief Method get_Mac, addr 0xe7459c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Mac();

  /// @brief Method get_UnauthAttrs, addr 0xe745a4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_UnauthAttrs();

  /// @brief Method ToAsn1Object, addr 0xe745ac, size 0x1cc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "AuthEnvelopedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthEnvelopedData(AuthEnvelopedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthEnvelopedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthEnvelopedData(AuthEnvelopedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthEnvelopedData();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___originatorInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___recipientInfos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___authEncryptedContentInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___authAttrs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___mac) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, ___unauthAttrs) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*, "Org.BouncyCastle.Asn1.Cms", "AuthEnvelopedData");

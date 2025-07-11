#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/KeyAgreeRecipientInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(KeyAgreeRecipientInfo)
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorIdentifierOrKey;
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
class KeyAgreeRecipientInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.KeyAgreeRecipientInfo
class CORDL_TYPE KeyAgreeRecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_KeyEncryptionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* KeyEncryptionAlgorithm;

  __declspec(property(get = get_Originator)) ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* Originator;

  __declspec(property(get = get_RecipientEncryptedKeys)) ::Org::BouncyCastle::Asn1::Asn1Sequence* RecipientEncryptedKeys;

  __declspec(property(get = get_UserKeyingMaterial)) ::Org::BouncyCastle::Asn1::Asn1OctetString* UserKeyingMaterial;

  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field keyEncryptionAlgorithm, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_keyEncryptionAlgorithm,
                      put = __cordl_internal_set_keyEncryptionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm;

  /// @brief Field originator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_originator, put = __cordl_internal_set_originator)) ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* originator;

  /// @brief Field recipientEncryptedKeys, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_recipientEncryptedKeys, put = __cordl_internal_set_recipientEncryptedKeys)) ::Org::BouncyCastle::Asn1::Asn1Sequence* recipientEncryptedKeys;

  /// @brief Field ukm, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ukm, put = __cordl_internal_set_ukm)) ::Org::BouncyCastle::Asn1::Asn1OctetString* ukm;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetInstance, addr 0x2308be0, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2308bf8, size 0x168, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* originator, ::Org::BouncyCastle::Asn1::Asn1OctetString* ukm,
                                                                                ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm,
                                                                                ::Org::BouncyCastle::Asn1::Asn1Sequence* recipientEncryptedKeys);

  static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2308d88, size 0x1e8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_keyEncryptionAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_keyEncryptionAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* const& __cordl_internal_get_originator() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*& __cordl_internal_get_originator();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_recipientEncryptedKeys() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_recipientEncryptedKeys();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_ukm() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_ukm();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_originator(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* value);

  constexpr void __cordl_internal_set_recipientEncryptedKeys(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_ukm(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x2308860, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* originator, ::Org::BouncyCastle::Asn1::Asn1OctetString* ukm,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Sequence* recipientEncryptedKeys);

  /// @brief Method .ctor, addr 0x23088f0, size 0x288, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_KeyEncryptionAlgorithm, addr 0x2308d78, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyEncryptionAlgorithm();

  /// @brief Method get_Originator, addr 0x2308d68, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* get_Originator();

  /// @brief Method get_RecipientEncryptedKeys, addr 0x2308d80, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_RecipientEncryptedKeys();

  /// @brief Method get_UserKeyingMaterial, addr 0x2308d70, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_UserKeyingMaterial();

  /// @brief Method get_Version, addr 0x2308d60, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyAgreeRecipientInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyAgreeRecipientInfo(KeyAgreeRecipientInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyAgreeRecipientInfo(KeyAgreeRecipientInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 78 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field originator, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* ___originator;

  /// @brief Field ukm, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___ukm;

  /// @brief Field keyEncryptionAlgorithm, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___keyEncryptionAlgorithm;

  /// @brief Field recipientEncryptedKeys, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___recipientEncryptedKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, ___originator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, ___ukm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, ___keyEncryptionAlgorithm) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, ___recipientEncryptedKeys) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*, "Org.BouncyCastle.Asn1.Cms", "KeyAgreeRecipientInfo");

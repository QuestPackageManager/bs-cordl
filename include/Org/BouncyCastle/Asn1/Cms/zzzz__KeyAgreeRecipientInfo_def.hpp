#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(KeyAgreeRecipientInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorIdentifierOrKey;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class KeyAgreeRecipientInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo);
// Type: Org.BouncyCastle.Asn1.Cms::KeyAgreeRecipientInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(78))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::KeyAgreeRecipientInfo*
class CORDL_TYPE KeyAgreeRecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field originator, offset 0x18, size 0x8
  __declspec(property(get = __get_originator, put = __set_originator))::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* originator;

  /// @brief Field ukm, offset 0x20, size 0x8
  __declspec(property(get = __get_ukm, put = __set_ukm))::Org::BouncyCastle::Asn1::Asn1OctetString* ukm;

  /// @brief Field keyEncryptionAlgorithm, offset 0x28, size 0x8
  __declspec(property(get = __get_keyEncryptionAlgorithm, put = __set_keyEncryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm;

  /// @brief Field recipientEncryptedKeys, offset 0x30, size 0x8
  __declspec(property(get = __get_recipientEncryptedKeys, put = __set_recipientEncryptedKeys))::Org::BouncyCastle::Asn1::Asn1Sequence* recipientEncryptedKeys;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_Originator))::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* Originator;

  __declspec(property(get = get_UserKeyingMaterial))::Org::BouncyCastle::Asn1::Asn1OctetString* UserKeyingMaterial;

  __declspec(property(get = get_KeyEncryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* KeyEncryptionAlgorithm;

  __declspec(property(get = get_RecipientEncryptedKeys))::Org::BouncyCastle::Asn1::Asn1Sequence* RecipientEncryptedKeys;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*& __get_originator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*> const& __get_originator() const;

  constexpr void __set_originator(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_ukm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_ukm() const;

  constexpr void __set_ukm(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_keyEncryptionAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_keyEncryptionAlgorithm() const;

  constexpr void __set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_recipientEncryptedKeys();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_recipientEncryptedKeys() const;

  constexpr void __set_recipientEncryptedKeys(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* originator, ::Org::BouncyCastle::Asn1::Asn1OctetString* ukm,
                                                                                ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm,
                                                                                ::Org::BouncyCastle::Asn1::Asn1Sequence* recipientEncryptedKeys);

  /// @brief Method .ctor, addr 0xe79770, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* originator, ::Org::BouncyCastle::Asn1::Asn1OctetString* ukm,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Sequence* recipientEncryptedKeys);

  static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe79808, size 0x288, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe79afc, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0xe79b14, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* GetInstance(::System::Object* obj);

  /// @brief Method get_Version, addr 0xe79c8c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_Originator, addr 0xe79c94, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* get_Originator();

  /// @brief Method get_UserKeyingMaterial, addr 0xe79c9c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_UserKeyingMaterial();

  /// @brief Method get_KeyEncryptionAlgorithm, addr 0xe79ca4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyEncryptionAlgorithm();

  /// @brief Method get_RecipientEncryptedKeys, addr 0xe79cac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_RecipientEncryptedKeys();

  /// @brief Method ToAsn1Object, addr 0xe79cb4, size 0x1ec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyAgreeRecipientInfo(KeyAgreeRecipientInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyAgreeRecipientInfo(KeyAgreeRecipientInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyAgreeRecipientInfo();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, ___originator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, ___ukm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, ___keyEncryptionAlgorithm) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, ___recipientEncryptedKeys) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*, "Org.BouncyCastle.Asn1.Cms", "KeyAgreeRecipientInfo");

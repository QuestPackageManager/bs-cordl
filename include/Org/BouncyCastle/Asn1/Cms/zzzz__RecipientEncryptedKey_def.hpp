#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RecipientEncryptedKey)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KeyAgreeRecipientIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientEncryptedKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey);
// Type: Org.BouncyCastle.Asn1.Cms::RecipientEncryptedKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(88))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::RecipientEncryptedKey*
class CORDL_TYPE RecipientEncryptedKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field identifier, offset 0x10, size 0x8
  __declspec(property(get = __get_identifier, put = __set_identifier))::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* identifier;

  /// @brief Field encryptedKey, offset 0x18, size 0x8
  __declspec(property(get = __get_encryptedKey, put = __set_encryptedKey))::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey;

  __declspec(property(get = get_Identifier))::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* Identifier;

  __declspec(property(get = get_EncryptedKey))::Org::BouncyCastle::Asn1::Asn1OctetString* EncryptedKey;

  constexpr ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*& __get_identifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*> const& __get_identifier() const;

  constexpr void __set_identifier(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_encryptedKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_encryptedKey() const;

  constexpr void __set_encryptedKey(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe7c520, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe7c604, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0xe7c61c, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey* New_ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* id,
                                                                                ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey);

  /// @brief Method .ctor, addr 0xe7c7a4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* id, ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey);

  /// @brief Method get_Identifier, addr 0xe7c7d0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* get_Identifier();

  /// @brief Method get_EncryptedKey, addr 0xe7c7d8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_EncryptedKey();

  /// @brief Method ToAsn1Object, addr 0xe7c7e0, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "RecipientEncryptedKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecipientEncryptedKey(RecipientEncryptedKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecipientEncryptedKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecipientEncryptedKey(RecipientEncryptedKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecipientEncryptedKey();

public:
  /// @brief Field identifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* ___identifier;

  /// @brief Field encryptedKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___encryptedKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey, ___identifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey, ___encryptedKey) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey*, "Org.BouncyCastle.Asn1.Cms", "RecipientEncryptedKey");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/SignerUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SignerUtilities)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class SignerUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::SignerUtilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.SignerUtilities
class CORDL_TYPE SignerUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms)) ::System::Collections::IDictionary* algorithms;

  /// @brief Field oids, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_oids, put = setStaticF_oids)) ::System::Collections::IDictionary* oids;

  /// @brief Method GetDefaultX509Parameters, addr 0x25c6e30, size 0x2a4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetDefaultX509Parameters(::StringW algorithm);

  /// @brief Method GetDefaultX509Parameters, addr 0x25c6dd0, size 0x60, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetDefaultX509Parameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id);

  /// @brief Method GetEncodingName, addr 0x25c83c8, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW GetEncodingName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetObjectIdentifier, addr 0x25c6aac, size 0x258, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetObjectIdentifier(::StringW mechanism);

  /// @brief Method GetPssX509Parameters, addr 0x25c70d4, size 0x230, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetPssX509Parameters(::StringW digestName);

  /// @brief Method GetSigner, addr 0x25c7364, size 0x1064, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::ISigner* GetSigner(::StringW algorithm);

  /// @brief Method GetSigner, addr 0x25c7304, size 0x60, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::ISigner* GetSigner(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id);

  /// @brief Method InitSigner, addr 0x25c8550, size 0x138, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::ISigner* InitSigner(::StringW algorithm, bool forSigning, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                 ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method InitSigner, addr 0x25c84d0, size 0x80, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::ISigner* InitSigner(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid, bool forSigning,
                                                                 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Security::SignerUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x25bb9a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline ::System::Collections::IDictionary* getStaticF_oids();

  /// @brief Method get_Algorithms, addr 0x25c6d04, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* get_Algorithms();

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

  static inline void setStaticF_oids(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignerUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerUtilities(SignerUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerUtilities(SignerUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1759 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::SignerUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::SignerUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::SignerUtilities*, "Org.BouncyCastle.Security", "SignerUtilities");

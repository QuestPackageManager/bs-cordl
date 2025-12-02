#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/EncryptionScheme.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
CORDL_MODULE_EXPORT(EncryptionScheme)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptionScheme;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme);
// Dependencies Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Pkcs.EncryptionScheme
class CORDL_TYPE EncryptionScheme : public ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier {
public:
  // Declarations
  __declspec(property(get = get_Asn1Object)) ::Org::BouncyCastle::Asn1::Asn1Object* Asn1Object;

  /// @brief Method GetInstance, addr 0x333c5d0, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* objectID);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* objectID, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x333c77c, size 0x110, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method .ctor, addr 0x333c500, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* objectID);

  /// @brief Method .ctor, addr 0x333c508, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* objectID, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor, addr 0x333c510, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Asn1Object, addr 0x333c754, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_Asn1Object();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptionScheme();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptionScheme", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptionScheme(EncryptionScheme&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptionScheme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptionScheme(EncryptionScheme const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 236 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*, "Org.BouncyCastle.Asn1.Pkcs", "EncryptionScheme");

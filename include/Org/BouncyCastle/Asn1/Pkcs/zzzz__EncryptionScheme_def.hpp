#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
CORDL_MODULE_EXPORT(EncryptionScheme)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
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
// Type: Org.BouncyCastle.Asn1.Pkcs::EncryptionScheme
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(235))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(236))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::EncryptionScheme*
class CORDL_TYPE EncryptionScheme : public ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier {
public:
  // Declarations
  __declspec(property(get = get_Asn1Object))::Org::BouncyCastle::Asn1::Asn1Object* Asn1Object;

  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* objectID);

  /// @brief Method .ctor addr 0xf88670 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* objectID);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* objectID, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor addr 0xf88698 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* objectID, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf886c4 size 0xc4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xf88788 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* GetInstance(::System::Object* obj);

  /// @brief Method get_Asn1Object addr 0xf88910 size 0x28 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_Asn1Object();

  /// @brief Method ToAsn1Object addr 0xf88938 size 0x110 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "EncryptionScheme", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptionScheme(EncryptionScheme&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptionScheme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptionScheme(EncryptionScheme const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptionScheme();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*, "Org.BouncyCastle.Asn1.Pkcs", "EncryptionScheme");

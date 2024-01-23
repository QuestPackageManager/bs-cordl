#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AlgorithmIdentifierFactory)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Utilities {
class AlgorithmIdentifierFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory);
// Type: Org.BouncyCastle.Crypto.Utilities::AlgorithmIdentifierFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Utilities {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1336))
// CS Name: ::Org.BouncyCastle.Crypto.Utilities::AlgorithmIdentifierFactory*
class CORDL_TYPE AlgorithmIdentifierFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field IDEA_CBC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IDEA_CBC, put = setStaticF_IDEA_CBC))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IDEA_CBC;

  /// @brief Field CAST5_CBC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CAST5_CBC, put = setStaticF_CAST5_CBC))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CAST5_CBC;

  /// @brief Field rc2Table, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rc2Table, put = setStaticF_rc2Table))::ArrayW<int16_t, ::Array<int16_t>*> rc2Table;

  static inline void setStaticF_IDEA_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IDEA_CBC();

  static inline void setStaticF_CAST5_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CAST5_CBC();

  static inline void setStaticF_rc2Table(::ArrayW<int16_t, ::Array<int16_t>*> value);

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_rc2Table();

  /// @brief Method GenerateEncryptionAlgID, addr 0xfc0108, size 0x55c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GenerateEncryptionAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize,
                                                                                              ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory* New_ctor();

  /// @brief Method .ctor, addr 0xfc0788, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AlgorithmIdentifierFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlgorithmIdentifierFactory(AlgorithmIdentifierFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlgorithmIdentifierFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlgorithmIdentifierFactory(AlgorithmIdentifierFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlgorithmIdentifierFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*, "Org.BouncyCastle.Crypto.Utilities", "AlgorithmIdentifierFactory");

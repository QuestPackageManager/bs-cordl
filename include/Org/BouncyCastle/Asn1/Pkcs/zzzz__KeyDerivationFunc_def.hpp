#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/KeyDerivationFunc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
CORDL_MODULE_EXPORT(KeyDerivationFunc)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class KeyDerivationFunc;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc);
// Dependencies Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Pkcs.KeyDerivationFunc
class CORDL_TYPE KeyDerivationFunc : public ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x240e90c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor, addr 0x240e908, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyDerivationFunc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyDerivationFunc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyDerivationFunc(KeyDerivationFunc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyDerivationFunc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyDerivationFunc(KeyDerivationFunc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 238 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*, "Org.BouncyCastle.Asn1.Pkcs", "KeyDerivationFunc");

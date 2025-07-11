#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/ECDHWithKdfBasicAgreement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECDHBasicAgreement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECDHWithKdfBasicAgreement)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class ECDHWithKdfBasicAgreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement);
// Dependencies Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Agreement.ECDHWithKdfBasicAgreement
class CORDL_TYPE ECDHWithKdfBasicAgreement : public ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement {
public:
  // Declarations
  /// @brief Field algorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm)) ::StringW algorithm;

  /// @brief Field kdf, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_kdf, put = __cordl_internal_set_kdf)) ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf;

  /// @brief Method BigIntToBytes, addr 0x268f04c, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BigIntToBytes(::Org::BouncyCastle::Math::BigInteger* r);

  /// @brief Method CalculateAgreement, addr 0x268edec, size 0x260, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey);

  static inline ::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf);

  constexpr ::StringW const& __cordl_internal_get_algorithm() const;

  constexpr ::StringW& __cordl_internal_get_algorithm();

  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* const& __cordl_internal_get_kdf() const;

  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction*& __cordl_internal_get_kdf();

  constexpr void __cordl_internal_set_algorithm(::StringW value);

  constexpr void __cordl_internal_set_kdf(::Org::BouncyCastle::Crypto::IDerivationFunction* value);

  /// @brief Method .ctor, addr 0x268ed50, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECDHWithKdfBasicAgreement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECDHWithKdfBasicAgreement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECDHWithKdfBasicAgreement(ECDHWithKdfBasicAgreement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECDHWithKdfBasicAgreement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECDHWithKdfBasicAgreement(ECDHWithKdfBasicAgreement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 738 };

  /// @brief Field algorithm, offset: 0x18, size: 0x8, def value: None
  ::StringW ___algorithm;

  /// @brief Field kdf, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDerivationFunction* ___kdf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement, ___algorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement, ___kdf) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "ECDHWithKdfBasicAgreement");

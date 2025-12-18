#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/ECMqvWithKdfBasicAgreement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECMqvBasicAgreement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECMqvWithKdfBasicAgreement)
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
class ECMqvWithKdfBasicAgreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement);
// Dependencies Org.BouncyCastle.Crypto.Agreement.ECMqvBasicAgreement
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Agreement.ECMqvWithKdfBasicAgreement
class CORDL_TYPE ECMqvWithKdfBasicAgreement : public ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement {
public:
  // Declarations
  /// @brief Field algorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm)) ::StringW algorithm;

  /// @brief Field kdf, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_kdf, put = __cordl_internal_set_kdf)) ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf;

  /// @brief Method BigIntToBytes, addr 0x35e9634, size 0x68, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BigIntToBytes(::Org::BouncyCastle::Math::BigInteger* r);

  /// @brief Method CalculateAgreement, addr 0x35e93c0, size 0x274, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey);

  static inline ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf);

  constexpr ::StringW const& __cordl_internal_get_algorithm() const;

  constexpr ::StringW& __cordl_internal_get_algorithm();

  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* const& __cordl_internal_get_kdf() const;

  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction*& __cordl_internal_get_kdf();

  constexpr void __cordl_internal_set_algorithm(::StringW value);

  constexpr void __cordl_internal_set_kdf(::Org::BouncyCastle::Crypto::IDerivationFunction* value);

  /// @brief Method .ctor, addr 0x35e9340, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECMqvWithKdfBasicAgreement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECMqvWithKdfBasicAgreement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECMqvWithKdfBasicAgreement(ECMqvWithKdfBasicAgreement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECMqvWithKdfBasicAgreement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECMqvWithKdfBasicAgreement(ECMqvWithKdfBasicAgreement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 740 };

  /// @brief Field algorithm, offset: 0x18, size: 0x8, def value: None
  ::StringW ___algorithm;

  /// @brief Field kdf, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDerivationFunction* ___kdf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement, ___algorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement, ___kdf) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "ECMqvWithKdfBasicAgreement");

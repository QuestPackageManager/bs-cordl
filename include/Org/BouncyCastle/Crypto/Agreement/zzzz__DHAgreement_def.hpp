#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/DHAgreement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DHAgreement)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class DHAgreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::DHAgreement);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Agreement.DHAgreement
class CORDL_TYPE DHAgreement : public ::System::Object {
public:
  // Declarations
  /// @brief Field dhParams, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dhParams, put = __cordl_internal_set_dhParams)) ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams;

  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* key;

  /// @brief Field privateValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_privateValue, put = __cordl_internal_set_privateValue)) ::Org::BouncyCastle::Math::BigInteger* privateValue;

  /// @brief Field random, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Method CalculateAgreement, addr 0x268c548, size 0x284, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* pub, ::Org::BouncyCastle::Math::BigInteger* message);

  /// @brief Method CalculateMessage, addr 0x268c3e0, size 0x168, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateMessage();

  /// @brief Method Init, addr 0x268c234, size 0x1ac, virtual false, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Agreement::DHAgreement* New_ctor();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters* const& __cordl_internal_get_dhParams() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters*& __cordl_internal_get_dhParams();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* const& __cordl_internal_get_key() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*& __cordl_internal_get_key();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_privateValue() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_privateValue();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_random() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr void __cordl_internal_set_dhParams(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* value);

  constexpr void __cordl_internal_set_privateValue(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x268c7cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHAgreement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DHAgreement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHAgreement(DHAgreement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHAgreement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHAgreement(DHAgreement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 732 };

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* ___key;

  /// @brief Field dhParams, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHParameters* ___dhParams;

  /// @brief Field privateValue, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___privateValue;

  /// @brief Field random, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::DHAgreement, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::DHAgreement, ___dhParams) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::DHAgreement, ___privateValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::DHAgreement, ___random) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::DHAgreement, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::DHAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::DHAgreement*, "Org.BouncyCastle.Crypto.Agreement", "DHAgreement");

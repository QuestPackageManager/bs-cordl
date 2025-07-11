#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/DHBasicAgreement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHBasicAgreement)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class DHBasicAgreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement);
// Dependencies Org.BouncyCastle.Crypto.IBasicAgreement, System.Object
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Agreement.DHBasicAgreement
class CORDL_TYPE DHBasicAgreement : public ::System::Object {
public:
  // Declarations
  /// @brief Field dhParams, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dhParams, put = __cordl_internal_set_dhParams)) ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams;

  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* key;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBasicAgreement"
  constexpr operator ::Org::BouncyCastle::Crypto::IBasicAgreement*() noexcept;

  /// @brief Method CalculateAgreement, addr 0x268dd14, size 0x26c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey);

  /// @brief Method GetFieldSize, addr 0x268dcd0, size 0x44, virtual true, abstract: false, final false
  inline int32_t GetFieldSize();

  /// @brief Method Init, addr 0x268db98, size 0x138, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* New_ctor();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters* const& __cordl_internal_get_dhParams() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters*& __cordl_internal_get_dhParams();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* const& __cordl_internal_get_key() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*& __cordl_internal_get_key();

  constexpr void __cordl_internal_set_dhParams(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* value);

  /// @brief Method .ctor, addr 0x268df80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBasicAgreement"
  constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement* i___Org__BouncyCastle__Crypto__IBasicAgreement() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHBasicAgreement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DHBasicAgreement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHBasicAgreement(DHBasicAgreement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHBasicAgreement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHBasicAgreement(DHBasicAgreement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 734 };

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* ___key;

  /// @brief Field dhParams, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHParameters* ___dhParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement, ___dhParams) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "DHBasicAgreement");

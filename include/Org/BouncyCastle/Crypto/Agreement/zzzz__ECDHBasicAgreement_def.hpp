#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/ECDHBasicAgreement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECDHBasicAgreement)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class ECDHBasicAgreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement);
// Dependencies Org.BouncyCastle.Crypto.IBasicAgreement, System.Object
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement
class CORDL_TYPE ECDHBasicAgreement : public ::System::Object {
public:
  // Declarations
  /// @brief Field privKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_privKey, put = __cordl_internal_set_privKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBasicAgreement"
  constexpr operator ::Org::BouncyCastle::Crypto::IBasicAgreement*() noexcept;

  /// @brief Method CalculateAgreement, addr 0x268e7c0, size 0x260, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey);

  /// @brief Method GetFieldSize, addr 0x268e778, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetFieldSize();

  /// @brief Method Init, addr 0x268e68c, size 0xec, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* New_ctor();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* const& __cordl_internal_get_privKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __cordl_internal_get_privKey();

  constexpr void __cordl_internal_set_privKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  /// @brief Method .ctor, addr 0x268ea20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBasicAgreement"
  constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement* i___Org__BouncyCastle__Crypto__IBasicAgreement() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECDHBasicAgreement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECDHBasicAgreement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECDHBasicAgreement(ECDHBasicAgreement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECDHBasicAgreement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECDHBasicAgreement(ECDHBasicAgreement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 736 };

  /// @brief Field privKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ___privKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement, ___privKey) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "ECDHBasicAgreement");

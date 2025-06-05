#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/RsaBlindingParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RsaBlindingParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaBlindingParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters);
// Dependencies Org.BouncyCastle.Crypto.ICipherParameters, System.Object
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters
class CORDL_TYPE RsaBlindingParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BlindingFactor)) ::Org::BouncyCastle::Math::BigInteger* BlindingFactor;

  __declspec(property(get = get_PublicKey)) ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* PublicKey;

  /// @brief Field blindingFactor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_blindingFactor, put = __cordl_internal_set_blindingFactor)) ::Org::BouncyCastle::Math::BigInteger* blindingFactor;

  /// @brief Field publicKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKey, put = __cordl_internal_set_publicKey)) ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* publicKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  static inline ::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* publicKey,
                                                                                         ::Org::BouncyCastle::Math::BigInteger* blindingFactor);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_blindingFactor() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_blindingFactor();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* const& __cordl_internal_get_publicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& __cordl_internal_get_publicKey();

  constexpr void __cordl_internal_set_blindingFactor(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_publicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value);

  /// @brief Method .ctor, addr 0x23c10b8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* publicKey, ::Org::BouncyCastle::Math::BigInteger* blindingFactor);

  /// @brief Method get_BlindingFactor, addr 0x23c1144, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_BlindingFactor();

  /// @brief Method get_PublicKey, addr 0x23c113c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* get_PublicKey();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaBlindingParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindingParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaBlindingParameters(RsaBlindingParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindingParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaBlindingParameters(RsaBlindingParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1078 };

  /// @brief Field publicKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ___publicKey;

  /// @brief Field blindingFactor, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___blindingFactor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters, ___publicKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters, ___blindingFactor) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*, "Org.BouncyCastle.Crypto.Parameters", "RsaBlindingParameters");

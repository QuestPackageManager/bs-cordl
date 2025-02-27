#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/NaccacheSternKeyParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NaccacheSternKeyParameters)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class NaccacheSternKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters);
// Dependencies Org.BouncyCastle.Crypto.AsymmetricKeyParameter
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.NaccacheSternKeyParameters
class CORDL_TYPE NaccacheSternKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
  // Declarations
  __declspec(property(get = get_G)) ::Org::BouncyCastle::Math::BigInteger* G;

  __declspec(property(get = get_LowerSigmaBound)) int32_t LowerSigmaBound;

  __declspec(property(get = get_Modulus)) ::Org::BouncyCastle::Math::BigInteger* Modulus;

  /// @brief Field g, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g)) ::Org::BouncyCastle::Math::BigInteger* g;

  /// @brief Field lowerSigmaBound, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_lowerSigmaBound, put = __cordl_internal_set_lowerSigmaBound)) int32_t lowerSigmaBound;

  /// @brief Field n, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_n, put = __cordl_internal_set_n)) ::Org::BouncyCastle::Math::BigInteger* n;

  static inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters* New_ctor(bool privateKey, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n,
                                                                                              int32_t lowerSigmaBound);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_g() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_g();

  constexpr int32_t const& __cordl_internal_get_lowerSigmaBound() const;

  constexpr int32_t& __cordl_internal_get_lowerSigmaBound();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_n() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_n();

  constexpr void __cordl_internal_set_g(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_lowerSigmaBound(int32_t value);

  constexpr void __cordl_internal_set_n(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x23c4d18, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool privateKey, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n, int32_t lowerSigmaBound);

  /// @brief Method get_G, addr 0x23c4d58, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G();

  /// @brief Method get_LowerSigmaBound, addr 0x23c4d60, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LowerSigmaBound();

  /// @brief Method get_Modulus, addr 0x23c4d68, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Modulus();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NaccacheSternKeyParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NaccacheSternKeyParameters(NaccacheSternKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NaccacheSternKeyParameters(NaccacheSternKeyParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1069 };

  /// @brief Field g, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___g;

  /// @brief Field n, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___n;

  /// @brief Field lowerSigmaBound, offset: 0x28, size: 0x4, def value: None
  int32_t ___lowerSigmaBound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters, ___g) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters, ___n) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters, ___lowerSigmaBound) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "NaccacheSternKeyParameters");

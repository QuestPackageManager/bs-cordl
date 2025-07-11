#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/RsaKeyParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaKeyParameters)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters);
// Dependencies Org.BouncyCastle.Crypto.AsymmetricKeyParameter
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
class CORDL_TYPE RsaKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
  // Declarations
  __declspec(property(get = get_Exponent)) ::Org::BouncyCastle::Math::BigInteger* Exponent;

  __declspec(property(get = get_Modulus)) ::Org::BouncyCastle::Math::BigInteger* Modulus;

  /// @brief Field SmallPrimesProduct, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SmallPrimesProduct, put = setStaticF_SmallPrimesProduct)) ::Org::BouncyCastle::Math::BigInteger* SmallPrimesProduct;

  /// @brief Field exponent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_exponent, put = __cordl_internal_set_exponent)) ::Org::BouncyCastle::Math::BigInteger* exponent;

  /// @brief Field modulus, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_modulus, put = __cordl_internal_set_modulus)) ::Org::BouncyCastle::Math::BigInteger* modulus;

  /// @brief Method Equals, addr 0x23c1650, size 0xe0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x23c1730, size 0xb0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* New_ctor(bool isPrivate, ::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* exponent);

  /// @brief Method Validate, addr 0x23c1328, size 0x164, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* Validate(::Org::BouncyCastle::Math::BigInteger* modulus);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_exponent() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_exponent();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_modulus() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_modulus();

  constexpr void __cordl_internal_set_exponent(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_modulus(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x23c148c, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(bool isPrivate, ::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* exponent);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_SmallPrimesProduct();

  /// @brief Method get_Exponent, addr 0x23c1648, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Exponent();

  /// @brief Method get_Modulus, addr 0x23c1640, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Modulus();

  static inline void setStaticF_SmallPrimesProduct(::Org::BouncyCastle::Math::BigInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaKeyParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaKeyParameters(RsaKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaKeyParameters(RsaKeyParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1080 };

  /// @brief Field modulus, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___modulus;

  /// @brief Field exponent, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___exponent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, ___modulus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, ___exponent) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "RsaKeyParameters");

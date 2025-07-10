#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/RsaKeyPairGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaKeyPairGenerator)
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class RsaKeyPairGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator);
// Dependencies Org.BouncyCastle.Crypto.IAsymmetricCipherKeyPairGenerator, System.Object
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Generators.RsaKeyPairGenerator
class CORDL_TYPE RsaKeyPairGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field DefaultPublicExponent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultPublicExponent, put = setStaticF_DefaultPublicExponent)) ::Org::BouncyCastle::Math::BigInteger* DefaultPublicExponent;

  /// @brief Field One, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_One, put = setStaticF_One)) ::Org::BouncyCastle::Math::BigInteger* One;

  /// @brief Field SPECIAL_E_BITS, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_SPECIAL_E_BITS, put = setStaticF_SPECIAL_E_BITS)) int32_t SPECIAL_E_BITS;

  /// @brief Field SPECIAL_E_HIGHEST, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_SPECIAL_E_HIGHEST, put = setStaticF_SPECIAL_E_HIGHEST)) int32_t SPECIAL_E_HIGHEST;

  /// @brief Field SPECIAL_E_VALUES, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SPECIAL_E_VALUES, put = setStaticF_SPECIAL_E_VALUES)) ::ArrayW<int32_t, ::Array<int32_t>*> SPECIAL_E_VALUES;

  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters)) ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters* parameters;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept;

  /// @brief Method ChooseRandomPrime, addr 0x2390540, size 0x228, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ChooseRandomPrime(int32_t bitlength, ::Org::BouncyCastle::Math::BigInteger* e);

  /// @brief Method GenerateKeyPair, addr 0x23901e0, size 0x360, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair();

  /// @brief Method Init, addr 0x23900d0, size 0x110, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator* New_ctor();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters* const& __cordl_internal_get_parameters() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*& __cordl_internal_get_parameters();

  constexpr void __cordl_internal_set_parameters(::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters* value);

  /// @brief Method .ctor, addr 0x23908a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_DefaultPublicExponent();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_One();

  static inline int32_t getStaticF_SPECIAL_E_BITS();

  static inline int32_t getStaticF_SPECIAL_E_HIGHEST();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_SPECIAL_E_VALUES();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* i___Org__BouncyCastle__Crypto__IAsymmetricCipherKeyPairGenerator() noexcept;

  static inline void setStaticF_DefaultPublicExponent(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_One(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_SPECIAL_E_BITS(int32_t value);

  static inline void setStaticF_SPECIAL_E_HIGHEST(int32_t value);

  static inline void setStaticF_SPECIAL_E_VALUES(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaKeyPairGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaKeyPairGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaKeyPairGenerator(RsaKeyPairGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaKeyPairGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaKeyPairGenerator(RsaKeyPairGenerator const&) = delete;

  /// @brief Field DefaultTests offset 0xffffffff size 0x4
  static constexpr int32_t DefaultTests{ static_cast<int32_t>(0x64) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 923 };

  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator, ___parameters) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "RsaKeyPairGenerator");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaKeyPairGenerator)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class RsaKeyPairGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::RsaKeyPairGenerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(923))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::RsaKeyPairGenerator*
class CORDL_TYPE RsaKeyPairGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __get_parameters, put = __set_parameters))::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters* parameters;

  /// @brief Field SPECIAL_E_VALUES, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SPECIAL_E_VALUES, put = setStaticF_SPECIAL_E_VALUES))::ArrayW<int32_t, ::Array<int32_t>*> SPECIAL_E_VALUES;

  /// @brief Field SPECIAL_E_HIGHEST, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SPECIAL_E_HIGHEST, put = setStaticF_SPECIAL_E_HIGHEST)) int32_t SPECIAL_E_HIGHEST;

  /// @brief Field SPECIAL_E_BITS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SPECIAL_E_BITS, put = setStaticF_SPECIAL_E_BITS)) int32_t SPECIAL_E_BITS;

  /// @brief Field One, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_One, put = setStaticF_One))::Org::BouncyCastle::Math::BigInteger* One;

  /// @brief Field DefaultPublicExponent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultPublicExponent, put = setStaticF_DefaultPublicExponent))::Org::BouncyCastle::Math::BigInteger* DefaultPublicExponent;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*& __get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*> const& __get_parameters() const;

  constexpr void __set_parameters(::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters* value);

  static inline void setStaticF_SPECIAL_E_VALUES(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_SPECIAL_E_VALUES();

  static inline void setStaticF_SPECIAL_E_HIGHEST(int32_t value);

  static inline int32_t getStaticF_SPECIAL_E_HIGHEST();

  static inline void setStaticF_SPECIAL_E_BITS(int32_t value);

  static inline int32_t getStaticF_SPECIAL_E_BITS();

  static inline void setStaticF_One(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_One();

  static inline void setStaticF_DefaultPublicExponent(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_DefaultPublicExponent();

  /// @brief Method Init addr 0xe90958 size 0x114 virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);

  /// @brief Method GenerateKeyPair addr 0xe90a6c size 0x36c virtual true final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair();

  /// @brief Method ChooseRandomPrime addr 0xe90dd8 size 0x230 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* ChooseRandomPrime(int32_t bitlength, ::Org::BouncyCastle::Math::BigInteger* e);

  static inline ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator* New_ctor();

  /// @brief Method .ctor addr 0xe91140 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RsaKeyPairGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaKeyPairGenerator(RsaKeyPairGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaKeyPairGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaKeyPairGenerator(RsaKeyPairGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaKeyPairGenerator();

public:
  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters* ___parameters;

  /// @brief Field DefaultTests offset 0xffffffff size 0x4
  static constexpr int32_t DefaultTests{ static_cast<int32_t>(0x64) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator, ___parameters) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "RsaKeyPairGenerator");

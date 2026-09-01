#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\DHParametersHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHParametersHelper)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DHParametersHelper;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*, "Org.BouncyCastle.Crypto.Generators", "DHParametersHelper");
// Dependencies Org.BouncyCastle.Math.BigInteger, System.Object
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Generators.DHParametersHelper
class CORDL_TYPE DHParametersHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field BigPrimeProducts, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BigPrimeProducts, put = setStaticF_BigPrimeProducts)) ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> BigPrimeProducts;

  /// @brief Field Six, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Six, put = setStaticF_Six)) ::Org::BouncyCastle::Math::BigInteger* Six;

  /// @brief Field primeLists, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_primeLists, put = setStaticF_primeLists)) ::ArrayW<::ArrayW<int32_t>> primeLists;

  /// @brief Field primeProducts, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_primeProducts, put = setStaticF_primeProducts)) ::ArrayW<int32_t> primeProducts;

  /// @brief Method ConstructBigPrimeProducts, addr 0x33d65d8, size 0x118, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> ConstructBigPrimeProducts(::ArrayW<int32_t> primeProducts);

  /// @brief Method GenerateSafePrimes, addr 0x33d6018, size 0x4c8, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> GenerateSafePrimes(int32_t size, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper* New_ctor();

  /// @brief Method SelectGenerator, addr 0x33d64e0, size 0xf4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* SelectGenerator(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                       ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor, addr 0x33d6798, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> getStaticF_BigPrimeProducts();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Six();

  static inline ::ArrayW<::ArrayW<int32_t>> getStaticF_primeLists();

  static inline ::ArrayW<int32_t> getStaticF_primeProducts();

  static inline void setStaticF_BigPrimeProducts(::ArrayW<::Org::BouncyCastle::Math::BigInteger*> value);

  static inline void setStaticF_Six(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_primeLists(::ArrayW<::ArrayW<int32_t>> value);

  static inline void setStaticF_primeProducts(::ArrayW<int32_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHParametersHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DHParametersHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHParametersHelper(DHParametersHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHParametersHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHParametersHelper(DHParametersHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 896 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Crypto::Generators::DHParametersHelper) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators

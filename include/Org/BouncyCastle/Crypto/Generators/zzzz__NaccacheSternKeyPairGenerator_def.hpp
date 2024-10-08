#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/NaccacheSternKeyPairGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NaccacheSternKeyPairGenerator)
namespace Org::BouncyCastle::Crypto::Parameters {
class NaccacheSternKeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class NaccacheSternKeyPairGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::NaccacheSternKeyPairGenerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Generators::NaccacheSternKeyPairGenerator*
class CORDL_TYPE NaccacheSternKeyPairGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field param, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_param, put = __cordl_internal_set_param)) ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters* param;

  /// @brief Field smallPrimes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_smallPrimes, put = setStaticF_smallPrimes)) ::ArrayW<int32_t, ::Array<int32_t>*> smallPrimes;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept;

  /// @brief Method GenerateKeyPair, addr 0x2349a84, size 0xf5c, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair();

  /// @brief Method Init, addr 0x23499e0, size 0xa4, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator* New_ctor();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*& __cordl_internal_get_param();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*> const& __cordl_internal_get_param() const;

  constexpr void __cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters* value);

  /// @brief Method .ctor, addr 0x234b110, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method findFirstPrimes, addr 0x234a9e0, size 0x184, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* findFirstPrimes(int32_t count);

  /// @brief Method generatePrime, addr 0x234b008, size 0x74, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* generatePrime(int32_t bitLength, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_smallPrimes();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* i___Org__BouncyCastle__Crypto__IAsymmetricCipherKeyPairGenerator() noexcept;

  /// @brief Method permuteList, addr 0x234ab64, size 0x4a4, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* permuteList(::System::Collections::IList* arr, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline void setStaticF_smallPrimes(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NaccacheSternKeyPairGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyPairGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NaccacheSternKeyPairGenerator(NaccacheSternKeyPairGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyPairGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NaccacheSternKeyPairGenerator(NaccacheSternKeyPairGenerator const&) = delete;

  /// @brief Field param, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters* ___param;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 914 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator, ___param) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "NaccacheSternKeyPairGenerator");

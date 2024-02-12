#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DsaKeyPairGenerator)
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaKeyGenerationParameters;
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
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DsaKeyPairGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::DsaKeyPairGenerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(897))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::DsaKeyPairGenerator*
class CORDL_TYPE DsaKeyPairGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field param, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_param, put = __cordl_internal_set_param))::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters* param;

  /// @brief Field One, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_One, put = setStaticF_One))::Org::BouncyCastle::Math::BigInteger* One;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* i___Org__BouncyCastle__Crypto__IAsymmetricCipherKeyPairGenerator() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters*& __cordl_internal_get_param();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters*> const& __cordl_internal_get_param() const;

  constexpr void __cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters* value);

  static inline void setStaticF_One(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_One();

  /// @brief Method Init, addr 0xf22fc8, size 0xec, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);

  /// @brief Method GenerateKeyPair, addr 0xf230b4, size 0x148, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair();

  /// @brief Method GeneratePrivateKey, addr 0xf231fc, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* GeneratePrivateKey(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method CalculatePublicKey, addr 0xf232ec, size 0x24, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculatePublicKey(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator* New_ctor();

  /// @brief Method .ctor, addr 0xf23388, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DsaKeyPairGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaKeyPairGenerator(DsaKeyPairGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaKeyPairGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaKeyPairGenerator(DsaKeyPairGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaKeyPairGenerator();

public:
  /// @brief Field param, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters* ___param;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator, ___param) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "DsaKeyPairGenerator");

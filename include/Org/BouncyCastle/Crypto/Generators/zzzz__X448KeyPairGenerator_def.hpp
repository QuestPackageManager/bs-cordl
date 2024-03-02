#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X448KeyPairGenerator)
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class X448KeyPairGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::X448KeyPairGenerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Generators::X448KeyPairGenerator*
class CORDL_TYPE X448KeyPairGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field random, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept;

  /// @brief Method GenerateKeyPair, addr 0xf77ea0, size 0xb0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair();

  /// @brief Method Init, addr 0xf77e84, size 0x1c, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator* New_ctor();

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_random() const;

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0xf77f50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* i___Org__BouncyCastle__Crypto__IAsymmetricCipherKeyPairGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X448KeyPairGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X448KeyPairGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X448KeyPairGenerator(X448KeyPairGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X448KeyPairGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X448KeyPairGenerator(X448KeyPairGenerator const&) = delete;

  /// @brief Field random, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator, ___random) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "X448KeyPairGenerator");

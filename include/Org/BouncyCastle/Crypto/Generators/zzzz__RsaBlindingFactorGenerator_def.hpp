#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RsaBlindingFactorGenerator)
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class RsaBlindingFactorGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::RsaBlindingFactorGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::RsaBlindingFactorGenerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Generators::RsaBlindingFactorGenerator*
class CORDL_TYPE RsaBlindingFactorGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key;

  /// @brief Field random, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Method GenerateBlindingFactor, addr 0xf767fc, size 0x188, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* GenerateBlindingFactor();

  /// @brief Method Init, addr 0xf76624, size 0x1d8, virtual false, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* param);

  static inline ::Org::BouncyCastle::Crypto::Generators::RsaBlindingFactorGenerator* New_ctor();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*> const& __cordl_internal_get_key() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_random() const;

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0xf76984, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaBlindingFactorGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindingFactorGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaBlindingFactorGenerator(RsaBlindingFactorGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindingFactorGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaBlindingFactorGenerator(RsaBlindingFactorGenerator const&) = delete;

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ___key;

  /// @brief Field random, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::RsaBlindingFactorGenerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::RsaBlindingFactorGenerator, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::RsaBlindingFactorGenerator, ___random) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::RsaBlindingFactorGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::RsaBlindingFactorGenerator*, "Org.BouncyCastle.Crypto.Generators", "RsaBlindingFactorGenerator");

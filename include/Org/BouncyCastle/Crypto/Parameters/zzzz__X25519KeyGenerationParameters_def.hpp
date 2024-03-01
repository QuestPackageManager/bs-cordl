#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
CORDL_MODULE_EXPORT(X25519KeyGenerationParameters)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class X25519KeyGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::X25519KeyGenerationParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::X25519KeyGenerationParameters*
class CORDL_TYPE X25519KeyGenerationParameters : public ::Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor, addr 0xfab768, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X25519KeyGenerationParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X25519KeyGenerationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X25519KeyGenerationParameters(X25519KeyGenerationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X25519KeyGenerationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X25519KeyGenerationParameters(X25519KeyGenerationParameters const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "X25519KeyGenerationParameters");

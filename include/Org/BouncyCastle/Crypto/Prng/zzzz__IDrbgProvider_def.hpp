#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDrbgProvider)
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class IDrbgProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::IDrbgProvider);
// Type: Org.BouncyCastle.Crypto.Prng::IDrbgProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Prng::IDrbgProvider*
class CORDL_TYPE IDrbgProvider {
public:
  // Declarations
  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource);

  // Ctor Parameters [CppParam { name: "", ty: "IDrbgProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDrbgProvider(IDrbgProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDrbgProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDrbgProvider(IDrbgProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::IDrbgProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*, "Org.BouncyCastle.Crypto.Prng", "IDrbgProvider");

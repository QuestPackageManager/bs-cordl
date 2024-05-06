#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsDHVerifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(TlsDHVerifier)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier);
// Type: Org.BouncyCastle.Crypto.Tls::TlsDHVerifier
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsDHVerifier*
class CORDL_TYPE TlsDHVerifier {
public:
  // Declarations
  /// @brief Method Accept, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Accept(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  // Ctor Parameters [CppParam { name: "", ty: "TlsDHVerifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsDHVerifier(TlsDHVerifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsDHVerifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsDHVerifier(TlsDHVerifier const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*, "Org.BouncyCastle.Crypto.Tls", "TlsDHVerifier");

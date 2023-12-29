#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(TlsCipherFactory)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory);
// Type: Org.BouncyCastle.Crypto.Tls::TlsCipherFactory
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1160))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsCipherFactory*
class CORDL_TYPE TlsCipherFactory {
public:
  // Declarations
  /// @brief Method CreateCipher addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* CreateCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t encryptionAlgorithm, int32_t macAlgorithm);

  // Ctor Parameters [CppParam { name: "", ty: "TlsCipherFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsCipherFactory(TlsCipherFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsCipherFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsCipherFactory(TlsCipherFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*, "Org.BouncyCastle.Crypto.Tls", "TlsCipherFactory");

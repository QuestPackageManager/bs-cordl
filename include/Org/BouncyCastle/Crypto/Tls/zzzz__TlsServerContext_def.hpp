#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsServerContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(TlsServerContext)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContext;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsServerContext);
// Type: Org.BouncyCastle.Crypto.Tls::TlsServerContext
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsServerContext*
class CORDL_TYPE TlsServerContext {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsContext*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* i___Org__BouncyCastle__Crypto__Tls__TlsContext() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "TlsServerContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsServerContext(TlsServerContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsServerContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsServerContext(TlsServerContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1321 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsServerContext);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsServerContext*, "Org.BouncyCastle.Crypto.Tls", "TlsServerContext");

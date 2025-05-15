#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/AbstractTlsCipherFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractTlsCipherFactory)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsCipherFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory);
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsCipherFactory, System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsCipherFactory
class CORDL_TYPE AbstractTlsCipherFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*() noexcept;

  /// @brief Method CreateCipher, addr 0x23e09b0, size 0x3c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* CreateCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t encryptionAlgorithm, int32_t macAlgorithm);

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory* New_ctor();

  /// @brief Method .ctor, addr 0x23e09ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* i___Org__BouncyCastle__Crypto__Tls__TlsCipherFactory() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractTlsCipherFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsCipherFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractTlsCipherFactory(AbstractTlsCipherFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsCipherFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractTlsCipherFactory(AbstractTlsCipherFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1161 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsCipherFactory");

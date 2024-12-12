#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsPskIdentityManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(TlsPskIdentityManager)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentityManager;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager);
// Dependencies
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsPskIdentityManager
class CORDL_TYPE TlsPskIdentityManager {
public:
  // Declarations
  /// @brief Method GetHint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetHint();

  /// @brief Method GetPsk, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPsk(::ArrayW<uint8_t, ::Array<uint8_t>*> identity);

  // Ctor Parameters [CppParam { name: "", ty: "TlsPskIdentityManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsPskIdentityManager(TlsPskIdentityManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1316 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*, "Org.BouncyCastle.Crypto.Tls", "TlsPskIdentityManager");

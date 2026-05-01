#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsPskIdentity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(TlsPskIdentity)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentity;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity);
// Dependencies
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsPskIdentity
class CORDL_TYPE TlsPskIdentity {
public:
  // Declarations
  /// @brief Method GetPsk, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPsk();

  /// @brief Method GetPskIdentity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPskIdentity();

  /// @brief Method NotifyIdentityHint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void NotifyIdentityHint(::ArrayW<uint8_t, ::Array<uint8_t>*> psk_identity_hint);

  /// @brief Method SkipIdentityHint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SkipIdentityHint();

  // Ctor Parameters [CppParam { name: "", ty: "TlsPskIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsPskIdentity(TlsPskIdentity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1180 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*, "Org.BouncyCastle.Crypto.Tls", "TlsPskIdentity");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsFatalAlertReceived.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsException_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsFatalAlertReceived)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsFatalAlertReceived;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived);
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsException
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsFatalAlertReceived
class CORDL_TYPE TlsFatalAlertReceived : public ::Org::BouncyCastle::Crypto::Tls::TlsException {
public:
  // Declarations
  __declspec(property(get = get_AlertDescription)) uint8_t AlertDescription;

  /// @brief Field alertDescription, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get_alertDescription, put = __cordl_internal_set_alertDescription)) uint8_t alertDescription;

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived* New_ctor(uint8_t alertDescription);

  constexpr uint8_t const& __cordl_internal_get_alertDescription() const;

  constexpr uint8_t& __cordl_internal_get_alertDescription();

  constexpr void __cordl_internal_set_alertDescription(uint8_t value);

  /// @brief Method .ctor, addr 0x2432e3c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(uint8_t alertDescription);

  /// @brief Method get_AlertDescription, addr 0x2432e7c, size 0x8, virtual true, abstract: false, final false
  inline uint8_t get_AlertDescription();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsFatalAlertReceived();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsFatalAlertReceived", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsFatalAlertReceived(TlsFatalAlertReceived&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsFatalAlertReceived", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsFatalAlertReceived(TlsFatalAlertReceived const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1310 };

  /// @brief Field alertDescription, offset: 0x8c, size: 0x1, def value: None
  uint8_t ___alertDescription;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived, ___alertDescription) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*, "Org.BouncyCastle.Crypto.Tls", "TlsFatalAlertReceived");

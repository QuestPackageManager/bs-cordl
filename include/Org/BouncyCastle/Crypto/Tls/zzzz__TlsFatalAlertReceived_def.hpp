#pragma once
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
// Type: Org.BouncyCastle.Crypto.Tls::TlsFatalAlertReceived
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 141, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1307))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1310))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsFatalAlertReceived*
class CORDL_TYPE TlsFatalAlertReceived : public ::Org::BouncyCastle::Crypto::Tls::TlsException {
public:
  // Declarations
  /// @brief Field alertDescription, offset 0x8c, size 0x1
  __declspec(property(get = __get_alertDescription, put = __set_alertDescription)) uint8_t alertDescription;

  __declspec(property(get = get_AlertDescription)) uint8_t AlertDescription;

  constexpr uint8_t& __get_alertDescription();

  constexpr uint8_t const& __get_alertDescription() const;

  constexpr void __set_alertDescription(uint8_t value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived* New_ctor(uint8_t alertDescription);

  /// @brief Method .ctor addr 0xfae00c size 0x40 virtual false final false
  inline void _ctor(uint8_t alertDescription);

  /// @brief Method get_AlertDescription addr 0xfae04c size 0x8 virtual true final false
  inline uint8_t get_AlertDescription();

  // Ctor Parameters [CppParam { name: "", ty: "TlsFatalAlertReceived", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsFatalAlertReceived(TlsFatalAlertReceived&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsFatalAlertReceived", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsFatalAlertReceived(TlsFatalAlertReceived const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsFatalAlertReceived();

public:
  /// @brief Field alertDescription, offset: 0x8c, size: 0x1, def value: None
  uint8_t ___alertDescription;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*, "Org.BouncyCastle.Crypto.Tls", "TlsFatalAlertReceived");

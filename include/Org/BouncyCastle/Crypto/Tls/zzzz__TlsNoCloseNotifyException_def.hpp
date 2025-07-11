#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsNoCloseNotifyException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__EndOfStreamException_def.hpp"
CORDL_MODULE_EXPORT(TlsNoCloseNotifyException)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsNoCloseNotifyException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException);
// Dependencies System.IO.EndOfStreamException
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsNoCloseNotifyException
class CORDL_TYPE TlsNoCloseNotifyException : public ::System::IO::EndOfStreamException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException* New_ctor();

  /// @brief Method .ctor, addr 0x2433b20, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsNoCloseNotifyException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsNoCloseNotifyException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsNoCloseNotifyException(TlsNoCloseNotifyException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsNoCloseNotifyException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsNoCloseNotifyException(TlsNoCloseNotifyException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1312 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException*, "Org.BouncyCastle.Crypto.Tls", "TlsNoCloseNotifyException");

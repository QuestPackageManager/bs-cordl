#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TlsException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsException);
// Dependencies System.IO.IOException
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsException
class CORDL_TYPE TlsException : public ::System::IO::IOException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsException* New_ctor(::StringW message, ::System::Exception* cause);

  /// @brief Method .ctor, addr 0x242ea44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* cause);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsException(TlsException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsException(TlsException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1307 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsException*, "Org.BouncyCastle.Crypto.Tls", "TlsException");

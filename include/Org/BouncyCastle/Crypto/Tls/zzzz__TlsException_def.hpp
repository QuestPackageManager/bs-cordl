#pragma once
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
// Type: Org.BouncyCastle.Crypto.Tls::TlsException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3565))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1307))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsException*
class CORDL_TYPE TlsException : public ::System::IO::IOException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsException* New_ctor(::StringW message, ::System::Exception* cause);

  /// @brief Method .ctor addr 0xfabf98 size 0x8 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* cause);

  // Ctor Parameters [CppParam { name: "", ty: "TlsException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsException(TlsException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsException(TlsException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsException*, "Org.BouncyCastle.Crypto.Tls", "TlsException");

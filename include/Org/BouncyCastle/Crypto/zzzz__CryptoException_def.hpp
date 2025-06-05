#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/CryptoException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CryptoException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class CryptoException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::CryptoException);
// Dependencies System.Exception
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.CryptoException
class CORDL_TYPE CryptoException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::CryptoException* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::CryptoException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Crypto::CryptoException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x244a138, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x244a190, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x244a1f8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CryptoException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoException(CryptoException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoException(CryptoException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1347 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::CryptoException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::CryptoException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::CryptoException*, "Org.BouncyCastle.Crypto", "CryptoException");

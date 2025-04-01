#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/PkcsIOException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PkcsIOException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class PkcsIOException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::PkcsIOException);
// Dependencies System.IO.IOException
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkcs.PkcsIOException
class CORDL_TYPE PkcsIOException : public ::System::IO::IOException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Pkcs::PkcsIOException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Pkcs::PkcsIOException* New_ctor(::StringW message, ::System::Exception* underlying);

  /// @brief Method .ctor, addr 0x2561928, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2560fb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* underlying);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkcsIOException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkcsIOException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkcsIOException(PkcsIOException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkcsIOException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkcsIOException(PkcsIOException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1706 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::PkcsIOException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::PkcsIOException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::PkcsIOException*, "Org.BouncyCastle.Pkcs", "PkcsIOException");

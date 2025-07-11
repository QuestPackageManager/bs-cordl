#pragma once
// IWYU pragma private; include "Org/BouncyCastle/OpenSsl/PemException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PemException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class PemException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::OpenSsl::PemException);
// Dependencies System.IO.IOException
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// CS Name: Org.BouncyCastle.OpenSsl.PemException
class CORDL_TYPE PemException : public ::System::IO::IOException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::OpenSsl::PemException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::OpenSsl::PemException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x2550c20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2550c28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PemException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemException(PemException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemException(PemException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1684 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::PemException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::PemException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::PemException*, "Org.BouncyCastle.OpenSsl", "PemException");

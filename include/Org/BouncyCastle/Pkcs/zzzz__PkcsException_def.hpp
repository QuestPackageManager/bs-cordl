#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/PkcsException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PkcsException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class PkcsException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::PkcsException);
// Dependencies System.Exception
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkcs.PkcsException
class CORDL_TYPE PkcsException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Pkcs::PkcsException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Pkcs::PkcsException* New_ctor(::StringW message, ::System::Exception* underlying);

  /// @brief Method .ctor, addr 0x2563ffc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2563b44, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* underlying);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkcsException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkcsException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkcsException(PkcsException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkcsException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkcsException(PkcsException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1705 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::PkcsException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::PkcsException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::PkcsException*, "Org.BouncyCastle.Pkcs", "PkcsException");

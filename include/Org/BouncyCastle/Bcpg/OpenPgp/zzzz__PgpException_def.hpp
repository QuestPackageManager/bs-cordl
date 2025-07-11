#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PgpException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpException);
// Dependencies System.Exception
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpException
class CORDL_TYPE PgpException : public ::System::Exception {
public:
  // Declarations
  __declspec(property(get = get_UnderlyingException)) ::System::Exception* UnderlyingException;

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpException* New_ctor();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x25292e0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2525390, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2529338, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method get_UnderlyingException, addr 0x25293a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Exception* get_UnderlyingException();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpException(PgpException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpException(PgpException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1635 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpException*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpException");

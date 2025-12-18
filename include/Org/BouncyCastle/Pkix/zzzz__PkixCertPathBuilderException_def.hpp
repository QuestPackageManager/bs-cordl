#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixCertPathBuilderException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PkixCertPathBuilderException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilderException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPathBuilderException);
// Dependencies Org.BouncyCastle.Security.GeneralSecurityException
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkix.PkixCertPathBuilderException
class CORDL_TYPE PkixCertPathBuilderException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException* New_ctor();

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x34cbfbc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x34c19e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x34c21b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixCertPathBuilderException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixCertPathBuilderException(PkixCertPathBuilderException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixCertPathBuilderException(PkixCertPathBuilderException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1718 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPathBuilderException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathBuilderException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathBuilderException*, "Org.BouncyCastle.Pkix", "PkixCertPathBuilderException");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixNameConstraintValidatorException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PkixNameConstraintValidatorException)
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixNameConstraintValidatorException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException);
// Dependencies System.Exception
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkix.PkixNameConstraintValidatorException
class CORDL_TYPE PkixNameConstraintValidatorException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException* New_ctor(::StringW msg);

  /// @brief Method .ctor, addr 0x2588c38, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixNameConstraintValidatorException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkixNameConstraintValidatorException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixNameConstraintValidatorException(PkixNameConstraintValidatorException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixNameConstraintValidatorException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixNameConstraintValidatorException(PkixNameConstraintValidatorException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1727 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException*, "Org.BouncyCastle.Pkix", "PkixNameConstraintValidatorException");

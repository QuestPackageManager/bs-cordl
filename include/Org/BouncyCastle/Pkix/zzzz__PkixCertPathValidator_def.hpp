#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkixCertPathValidator)
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorResult;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPathValidator);
// Type: Org.BouncyCastle.Pkix::PkixCertPathValidator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkix::PkixCertPathValidator*
class CORDL_TYPE PkixCertPathValidator : public ::System::Object {
public:
  // Declarations
  /// @brief Method CheckCertificate, addr 0x1167888, size 0x108, virtual false, abstract: false, final false
  static inline void CheckCertificate(::Org::BouncyCastle::X509::X509Certificate* cert);

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathValidator* New_ctor();

  /// @brief Method Validate, addr 0x116527c, size 0x1eec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* Validate(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix);

  /// @brief Method .ctor, addr 0x1164cc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixCertPathValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixCertPathValidator(PkixCertPathValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixCertPathValidator(PkixCertPathValidator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPathValidator, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathValidator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathValidator*, "Org.BouncyCastle.Pkix", "PkixCertPathValidator");

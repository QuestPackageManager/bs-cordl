#pragma once
// IWYU pragma private; include "Mono/Security/Interface/ICertificateValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICertificateValidator)
// Forward declare root types
namespace Mono::Security::Interface {
class ICertificateValidator;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Interface::ICertificateValidator);
// Type: Mono.Security.Interface::ICertificateValidator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Security::Interface {
// Is value type: false
// CS Name: ::Mono.Security.Interface::ICertificateValidator*
class CORDL_TYPE ICertificateValidator {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ICertificateValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICertificateValidator(ICertificateValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICertificateValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICertificateValidator(ICertificateValidator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::ICertificateValidator);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::ICertificateValidator*, "Mono.Security.Interface", "ICertificateValidator");

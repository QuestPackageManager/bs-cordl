#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ValidationUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ValidationUtils)
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ValidationUtils;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ValidationUtils);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ValidationUtils
class CORDL_TYPE ValidationUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method ArgumentNotNull, addr 0x3ee5220, size 0x4c, virtual false, abstract: false, final false
  static inline void ArgumentNotNull(::System::Object* value, ::StringW parameterName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidationUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidationUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidationUtils(ValidationUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidationUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidationUtils(ValidationUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10283 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ValidationUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ValidationUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ValidationUtils*, "Newtonsoft.Json.Utilities", "ValidationUtils");

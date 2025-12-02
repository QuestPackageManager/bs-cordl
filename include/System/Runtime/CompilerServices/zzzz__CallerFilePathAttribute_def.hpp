#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CallerFilePathAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CallerFilePathAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class CallerFilePathAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::CallerFilePathAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.CallerFilePathAttribute
class CORDL_TYPE CallerFilePathAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::CallerFilePathAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x59593b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallerFilePathAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallerFilePathAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallerFilePathAttribute(CallerFilePathAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallerFilePathAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallerFilePathAttribute(CallerFilePathAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3372 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::CallerFilePathAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::CallerFilePathAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CallerFilePathAttribute*, "System.Runtime.CompilerServices", "CallerFilePathAttribute");

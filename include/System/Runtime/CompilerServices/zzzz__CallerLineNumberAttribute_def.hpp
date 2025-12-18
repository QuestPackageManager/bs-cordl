#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CallerLineNumberAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CallerLineNumberAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class CallerLineNumberAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::CallerLineNumberAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.CallerLineNumberAttribute
class CORDL_TYPE CallerLineNumberAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::CallerLineNumberAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x59bfd08, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallerLineNumberAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallerLineNumberAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallerLineNumberAttribute(CallerLineNumberAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallerLineNumberAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallerLineNumberAttribute(CallerLineNumberAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3373 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::CallerLineNumberAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::CallerLineNumberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CallerLineNumberAttribute*, "System.Runtime.CompilerServices", "CallerLineNumberAttribute");

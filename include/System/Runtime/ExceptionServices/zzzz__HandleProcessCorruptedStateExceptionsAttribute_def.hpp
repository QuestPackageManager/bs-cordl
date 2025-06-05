#pragma once
// IWYU pragma private; include "System/Runtime/ExceptionServices/HandleProcessCorruptedStateExceptionsAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(HandleProcessCorruptedStateExceptionsAttribute)
// Forward declare root types
namespace System::Runtime::ExceptionServices {
class HandleProcessCorruptedStateExceptionsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute);
// Dependencies System.Attribute
namespace System::Runtime::ExceptionServices {
// Is value type: false
// CS Name: System.Runtime.ExceptionServices.HandleProcessCorruptedStateExceptionsAttribute
class CORDL_TYPE HandleProcessCorruptedStateExceptionsAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3d17ea8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandleProcessCorruptedStateExceptionsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandleProcessCorruptedStateExceptionsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandleProcessCorruptedStateExceptionsAttribute(HandleProcessCorruptedStateExceptionsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandleProcessCorruptedStateExceptionsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandleProcessCorruptedStateExceptionsAttribute(HandleProcessCorruptedStateExceptionsAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3348 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::ExceptionServices
NEED_NO_BOX(::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute*, "System.Runtime.ExceptionServices", "HandleProcessCorruptedStateExceptionsAttribute");

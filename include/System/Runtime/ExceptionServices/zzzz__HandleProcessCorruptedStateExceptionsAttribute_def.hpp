#pragma once
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
// Type: System.Runtime.ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::ExceptionServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3348))
// CS Name: ::System.Runtime.ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute*
class CORDL_TYPE HandleProcessCorruptedStateExceptionsAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x24da588, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HandleProcessCorruptedStateExceptionsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandleProcessCorruptedStateExceptionsAttribute(HandleProcessCorruptedStateExceptionsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandleProcessCorruptedStateExceptionsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandleProcessCorruptedStateExceptionsAttribute(HandleProcessCorruptedStateExceptionsAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandleProcessCorruptedStateExceptionsAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::ExceptionServices
NEED_NO_BOX(::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute*, "System.Runtime.ExceptionServices", "HandleProcessCorruptedStateExceptionsAttribute");

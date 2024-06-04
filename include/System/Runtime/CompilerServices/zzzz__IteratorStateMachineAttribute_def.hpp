#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/IteratorStateMachineAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__StateMachineAttribute_def.hpp"
CORDL_MODULE_EXPORT(IteratorStateMachineAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IteratorStateMachineAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::IteratorStateMachineAttribute);
// Type: System.Runtime.CompilerServices::IteratorStateMachineAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::IteratorStateMachineAttribute*
class CORDL_TYPE IteratorStateMachineAttribute : public ::System::Runtime::CompilerServices::StateMachineAttribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::IteratorStateMachineAttribute* New_ctor(::System::Type* stateMachineType);

  /// @brief Method .ctor, addr 0x2875720, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* stateMachineType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IteratorStateMachineAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IteratorStateMachineAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IteratorStateMachineAttribute(IteratorStateMachineAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IteratorStateMachineAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IteratorStateMachineAttribute(IteratorStateMachineAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::IteratorStateMachineAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IteratorStateMachineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IteratorStateMachineAttribute*, "System.Runtime.CompilerServices", "IteratorStateMachineAttribute");

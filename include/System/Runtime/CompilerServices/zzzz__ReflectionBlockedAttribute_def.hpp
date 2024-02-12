#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ReflectionBlockedAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class ReflectionBlockedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::ReflectionBlockedAttribute);
// Type: System.Runtime.CompilerServices::ReflectionBlockedAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3395))
// CS Name: ::System.Runtime.CompilerServices::ReflectionBlockedAttribute*
class CORDL_TYPE ReflectionBlockedAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::ReflectionBlockedAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x24fc57c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionBlockedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionBlockedAttribute(ReflectionBlockedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionBlockedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionBlockedAttribute(ReflectionBlockedAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionBlockedAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::ReflectionBlockedAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::ReflectionBlockedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ReflectionBlockedAttribute*, "System.Runtime.CompilerServices", "ReflectionBlockedAttribute");

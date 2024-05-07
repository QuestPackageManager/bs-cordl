#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/UnsafeValueTypeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(UnsafeValueTypeAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class UnsafeValueTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::UnsafeValueTypeAttribute);
// Type: System.Runtime.CompilerServices::UnsafeValueTypeAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::UnsafeValueTypeAttribute*
class CORDL_TYPE UnsafeValueTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::UnsafeValueTypeAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x285c498, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeValueTypeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeValueTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeValueTypeAttribute(UnsafeValueTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeValueTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeValueTypeAttribute(UnsafeValueTypeAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::UnsafeValueTypeAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::UnsafeValueTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::UnsafeValueTypeAttribute*, "System.Runtime.CompilerServices", "UnsafeValueTypeAttribute");

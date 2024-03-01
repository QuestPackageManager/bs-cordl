#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(IsReadOnlyAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IsReadOnlyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::IsReadOnlyAttribute);
// Type: System.Runtime.CompilerServices::IsReadOnlyAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::IsReadOnlyAttribute*
class CORDL_TYPE IsReadOnlyAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::IsReadOnlyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2eae0d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IsReadOnlyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IsReadOnlyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IsReadOnlyAttribute(IsReadOnlyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IsReadOnlyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IsReadOnlyAttribute(IsReadOnlyAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::IsReadOnlyAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IsReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IsReadOnlyAttribute*, "System.Runtime.CompilerServices", "IsReadOnlyAttribute");

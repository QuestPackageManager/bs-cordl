#pragma once
// IWYU pragma private; include "System/Runtime/Versioning/NonVersionableAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NonVersionableAttribute)
// Forward declare root types
namespace System::Runtime::Versioning {
class NonVersionableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Versioning::NonVersionableAttribute);
// Type: System.Runtime.Versioning::NonVersionableAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Versioning {
// Is value type: false
// CS Name: ::System.Runtime.Versioning::NonVersionableAttribute*
class CORDL_TYPE NonVersionableAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::Versioning::NonVersionableAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x44c4f6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NonVersionableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NonVersionableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NonVersionableAttribute(NonVersionableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NonVersionableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NonVersionableAttribute(NonVersionableAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19153 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Versioning::NonVersionableAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Versioning
NEED_NO_BOX(::System::Runtime::Versioning::NonVersionableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Versioning::NonVersionableAttribute*, "System.Runtime.Versioning", "NonVersionableAttribute");

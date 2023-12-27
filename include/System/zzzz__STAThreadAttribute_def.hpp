#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(STAThreadAttribute)
// Forward declare root types
namespace System {
class STAThreadAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::STAThreadAttribute);
// Type: System::STAThreadAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2482))
// CS Name: ::System::STAThreadAttribute*
class CORDL_TYPE STAThreadAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::STAThreadAttribute* New_ctor();

  /// @brief Method .ctor addr 0x25c5f64 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "STAThreadAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  STAThreadAttribute(STAThreadAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "STAThreadAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  STAThreadAttribute(STAThreadAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr STAThreadAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::STAThreadAttribute, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::STAThreadAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::STAThreadAttribute*, "System", "STAThreadAttribute");

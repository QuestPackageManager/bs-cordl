#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PreserveSigAttribute)
// Forward declare root types
namespace System::Runtime::InteropServices {
class PreserveSigAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::PreserveSigAttribute);
// Type: System.Runtime.InteropServices::PreserveSigAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3324))
// CS Name: ::System.Runtime.InteropServices::PreserveSigAttribute*
class CORDL_TYPE PreserveSigAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::InteropServices::PreserveSigAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x24d72c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PreserveSigAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreserveSigAttribute(PreserveSigAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreserveSigAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreserveSigAttribute(PreserveSigAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreserveSigAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::PreserveSigAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::PreserveSigAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::PreserveSigAttribute*, "System.Runtime.InteropServices", "PreserveSigAttribute");

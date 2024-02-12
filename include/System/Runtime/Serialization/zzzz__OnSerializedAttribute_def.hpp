#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnSerializedAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class OnSerializedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::OnSerializedAttribute);
// Type: System.Runtime.Serialization::OnSerializedAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3230))
// CS Name: ::System.Runtime.Serialization::OnSerializedAttribute*
class CORDL_TYPE OnSerializedAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::OnSerializedAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x24def4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OnSerializedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnSerializedAttribute(OnSerializedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnSerializedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnSerializedAttribute(OnSerializedAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnSerializedAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::OnSerializedAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::OnSerializedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::OnSerializedAttribute*, "System.Runtime.Serialization", "OnSerializedAttribute");

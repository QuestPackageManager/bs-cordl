#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ITypedList)
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
// Forward declare root types
namespace System::ComponentModel {
class ITypedList;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ITypedList);
// Type: System.ComponentModel::ITypedList
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9435))
// CS Name: ::System.ComponentModel::ITypedList*
class CORDL_TYPE ITypedList {
public:
  // Declarations
  /// @brief Method GetListName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetListName(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> listAccessors);

  /// @brief Method GetItemProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection*
  GetItemProperties(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> listAccessors);

  // Ctor Parameters [CppParam { name: "", ty: "ITypedList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITypedList(ITypedList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITypedList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITypedList(ITypedList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ITypedList);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ITypedList*, "System.ComponentModel", "ITypedList");

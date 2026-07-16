#pragma once
// IWYU pragma private; include "System/ComponentModel/ITypedList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::ComponentModel::ITypedList*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ITypedList*, "System.ComponentModel", "ITypedList");
// Dependencies
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ITypedList
class CORDL_TYPE ITypedList {
public:
  // Declarations
  /// @brief Method GetItemProperties, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetItemProperties(::ArrayW<::System::ComponentModel::PropertyDescriptor*> listAccessors);

  /// @brief Method GetListName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetListName(::ArrayW<::System::ComponentModel::PropertyDescriptor*> listAccessors);

  // Ctor Parameters [CppParam { name: "", ty: "ITypedList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITypedList(ITypedList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11247 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel

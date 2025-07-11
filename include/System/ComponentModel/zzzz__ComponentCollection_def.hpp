#pragma once
// IWYU pragma private; include "System/ComponentModel/ComponentCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ComponentCollection)
namespace System::ComponentModel {
class IComponent;
}
// Forward declare root types
namespace System::ComponentModel {
class ComponentCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ComponentCollection);
// Dependencies System.Collections.ReadOnlyCollectionBase
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ComponentCollection
class CORDL_TYPE ComponentCollection : public ::System::Collections::ReadOnlyCollectionBase {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::System::ComponentModel::IComponent* Item[];

  /// @brief Method get_Item, addr 0x4446828, size 0x574, virtual true, abstract: false, final false
  inline ::System::ComponentModel::IComponent* get_Item(::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComponentCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComponentCollection(ComponentCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComponentCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComponentCollection(ComponentCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9343 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ComponentCollection, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ComponentCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ComponentCollection*, "System.ComponentModel", "ComponentCollection");

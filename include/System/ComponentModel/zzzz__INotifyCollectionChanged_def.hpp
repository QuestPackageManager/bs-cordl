#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INotifyCollectionChanged)
namespace System::ComponentModel {
class NotifyCollectionChangedEventHandler;
}
// Forward declare root types
namespace System::ComponentModel {
class INotifyCollectionChanged;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::INotifyCollectionChanged);
// Type: System.ComponentModel::INotifyCollectionChanged
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11787))
// CS Name: ::System.ComponentModel::INotifyCollectionChanged*
class CORDL_TYPE INotifyCollectionChanged {
public:
  // Declarations
  /// @brief Method add_CollectionChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_CollectionChanged(::System::ComponentModel::NotifyCollectionChangedEventHandler* value);

  /// @brief Method remove_CollectionChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_CollectionChanged(::System::ComponentModel::NotifyCollectionChangedEventHandler* value);

  // Ctor Parameters [CppParam { name: "", ty: "INotifyCollectionChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INotifyCollectionChanged(INotifyCollectionChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INotifyCollectionChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotifyCollectionChanged(INotifyCollectionChanged const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::INotifyCollectionChanged);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::INotifyCollectionChanged*, "System.ComponentModel", "INotifyCollectionChanged");

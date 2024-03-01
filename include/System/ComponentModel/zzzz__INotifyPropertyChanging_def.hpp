#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INotifyPropertyChanging)
namespace System::ComponentModel {
class PropertyChangingEventHandler;
}
// Forward declare root types
namespace System::ComponentModel {
class INotifyPropertyChanging;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::INotifyPropertyChanging);
// Type: System.ComponentModel::INotifyPropertyChanging
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::INotifyPropertyChanging*
class CORDL_TYPE INotifyPropertyChanging {
public:
  // Declarations
  /// @brief Method add_PropertyChanging, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* value);

  /// @brief Method remove_PropertyChanging, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* value);

  // Ctor Parameters [CppParam { name: "", ty: "INotifyPropertyChanging", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INotifyPropertyChanging(INotifyPropertyChanging&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INotifyPropertyChanging", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotifyPropertyChanging(INotifyPropertyChanging const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::INotifyPropertyChanging);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::INotifyPropertyChanging*, "System.ComponentModel", "INotifyPropertyChanging");

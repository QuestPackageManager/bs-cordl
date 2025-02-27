#pragma once
// IWYU pragma private; include "System/ComponentModel/INotifyPropertyChanged.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INotifyPropertyChanged)
// Forward declare root types
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::INotifyPropertyChanged);
// Dependencies
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.INotifyPropertyChanged
class CORDL_TYPE INotifyPropertyChanged {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "INotifyPropertyChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotifyPropertyChanged(INotifyPropertyChanged const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9433 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::INotifyPropertyChanged);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::INotifyPropertyChanged*, "System.ComponentModel", "INotifyPropertyChanged");

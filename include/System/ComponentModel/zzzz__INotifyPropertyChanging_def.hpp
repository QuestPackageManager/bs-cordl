#pragma once
// IWYU pragma private; include "System/ComponentModel/INotifyPropertyChanging.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INotifyPropertyChanging)
// Forward declare root types
namespace System::ComponentModel {
class INotifyPropertyChanging;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::INotifyPropertyChanging);
// Dependencies
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.INotifyPropertyChanging
class CORDL_TYPE INotifyPropertyChanging {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "INotifyPropertyChanging", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotifyPropertyChanging(INotifyPropertyChanging const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11286 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::INotifyPropertyChanging);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::INotifyPropertyChanging*, "System.ComponentModel", "INotifyPropertyChanging");

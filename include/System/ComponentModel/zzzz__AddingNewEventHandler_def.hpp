#pragma once
// IWYU pragma private; include "System/ComponentModel/AddingNewEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(AddingNewEventHandler)
namespace System::ComponentModel {
class AddingNewEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class AddingNewEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::AddingNewEventHandler);
// Dependencies System.MulticastDelegate
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.AddingNewEventHandler
class CORDL_TYPE AddingNewEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6197a5c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::ComponentModel::AddingNewEventArgs* e);

  static inline ::System::ComponentModel::AddingNewEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6197914, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddingNewEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddingNewEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddingNewEventHandler(AddingNewEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddingNewEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddingNewEventHandler(AddingNewEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11206 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AddingNewEventHandler, 0x80>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AddingNewEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AddingNewEventHandler*, "System.ComponentModel", "AddingNewEventHandler");

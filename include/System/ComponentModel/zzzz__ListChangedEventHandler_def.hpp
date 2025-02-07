#pragma once
// IWYU pragma private; include "System/ComponentModel/ListChangedEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ListChangedEventHandler)
namespace System::ComponentModel {
class ListChangedEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ListChangedEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ListChangedEventHandler);
// Dependencies System.MulticastDelegate
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ListChangedEventHandler
class CORDL_TYPE ListChangedEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4459620, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::ComponentModel::ListChangedEventArgs* e);

  static inline ::System::ComponentModel::ListChangedEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x445951c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListChangedEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListChangedEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListChangedEventHandler(ListChangedEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListChangedEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListChangedEventHandler(ListChangedEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9402 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ListChangedEventHandler, 0x80>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ListChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListChangedEventHandler*, "System.ComponentModel", "ListChangedEventHandler");

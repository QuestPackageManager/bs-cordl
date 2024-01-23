#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AddingNewEventHandler)
namespace System::ComponentModel {
class AddingNewEventArgs;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
// Type: System.ComponentModel::AddingNewEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11786))
// CS Name: ::System.ComponentModel::AddingNewEventHandler*
class CORDL_TYPE AddingNewEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::ComponentModel::AddingNewEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x263da8c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x263dbbc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::ComponentModel::AddingNewEventArgs* e);

  /// @brief Method BeginInvoke, addr 0x263dbd0, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::AddingNewEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x263dbf8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "AddingNewEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddingNewEventHandler(AddingNewEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddingNewEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddingNewEventHandler(AddingNewEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddingNewEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AddingNewEventHandler, 0x80>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AddingNewEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AddingNewEventHandler*, "System.ComponentModel", "AddingNewEventHandler");

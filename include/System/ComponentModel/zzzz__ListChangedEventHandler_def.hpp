#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListChangedEventHandler)
namespace System::ComponentModel {
class ListChangedEventArgs;
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
// Type: System.ComponentModel::ListChangedEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9440))
// CS Name: ::System.ComponentModel::ListChangedEventHandler*
class CORDL_TYPE ListChangedEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::ComponentModel::ListChangedEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2911554, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2911684, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::ComponentModel::ListChangedEventArgs* e);

  // Ctor Parameters [CppParam { name: "", ty: "ListChangedEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListChangedEventHandler(ListChangedEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListChangedEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListChangedEventHandler(ListChangedEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListChangedEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ListChangedEventHandler, 0x80>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ListChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListChangedEventHandler*, "System.ComponentModel", "ListChangedEventHandler");

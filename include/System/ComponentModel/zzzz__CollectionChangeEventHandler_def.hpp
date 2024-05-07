#pragma once
// IWYU pragma private; include "System/ComponentModel/CollectionChangeEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionChangeEventHandler)
namespace System::ComponentModel {
class CollectionChangeEventArgs;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class CollectionChangeEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::CollectionChangeEventHandler);
// Type: System.ComponentModel::CollectionChangeEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::CollectionChangeEventHandler*
class CORDL_TYPE CollectionChangeEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2f35efc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e);

  static inline ::System::ComponentModel::CollectionChangeEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2f35dcc, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionChangeEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionChangeEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionChangeEventHandler(CollectionChangeEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionChangeEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionChangeEventHandler(CollectionChangeEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::CollectionChangeEventHandler, 0x80>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::CollectionChangeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CollectionChangeEventHandler*, "System.ComponentModel", "CollectionChangeEventHandler");

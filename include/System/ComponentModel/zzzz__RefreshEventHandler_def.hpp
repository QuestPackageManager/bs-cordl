#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RefreshEventHandler)
namespace System::ComponentModel {
class RefreshEventArgs;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class RefreshEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::RefreshEventHandler);
// Type: System.ComponentModel::RefreshEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8289))
// CS Name: ::System.ComponentModel::RefreshEventHandler*
class CORDL_TYPE RefreshEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::ComponentModel::RefreshEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2799e78 size 0x12c virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2799fa4 size 0x14 virtual true final false
  inline void Invoke(::System::ComponentModel::RefreshEventArgs* e);

  // Ctor Parameters [CppParam { name: "", ty: "RefreshEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RefreshEventHandler(RefreshEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RefreshEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RefreshEventHandler(RefreshEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RefreshEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::RefreshEventHandler, 0x80>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::RefreshEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::RefreshEventHandler*, "System.ComponentModel", "RefreshEventHandler");

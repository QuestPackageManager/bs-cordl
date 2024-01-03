#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyChangedEventHandler)
namespace System {
class Object;
}
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
// Forward declare root types
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::PropertyChangedEventHandler);
// Type: System.ComponentModel::PropertyChangedEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9467))
// CS Name: ::System.ComponentModel::PropertyChangedEventHandler*
class CORDL_TYPE PropertyChangedEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::ComponentModel::PropertyChangedEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2919a1c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2919b4c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e);

  // Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyChangedEventHandler(PropertyChangedEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyChangedEventHandler(PropertyChangedEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyChangedEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::PropertyChangedEventHandler, 0x80>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::PropertyChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyChangedEventHandler*, "System.ComponentModel", "PropertyChangedEventHandler");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IComponentChangeService)
namespace System {
class Object;
}
namespace System::ComponentModel {
class MemberDescriptor;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class IComponentChangeService;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::IComponentChangeService);
// Type: System.ComponentModel.Design::IComponentChangeService
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9497))
// CS Name: ::System.ComponentModel.Design::IComponentChangeService*
class CORDL_TYPE IComponentChangeService {
public:
  // Declarations
  /// @brief Method OnComponentChanged addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnComponentChanged(::System::Object* component, ::System::ComponentModel::MemberDescriptor* member, ::System::Object* oldValue, ::System::Object* newValue);

  /// @brief Method OnComponentChanging addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnComponentChanging(::System::Object* component, ::System::ComponentModel::MemberDescriptor* member);

  // Ctor Parameters [CppParam { name: "", ty: "IComponentChangeService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IComponentChangeService(IComponentChangeService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IComponentChangeService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComponentChangeService(IComponentChangeService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::IComponentChangeService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IComponentChangeService*, "System.ComponentModel.Design", "IComponentChangeService");

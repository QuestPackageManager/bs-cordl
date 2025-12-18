#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/IComponentChangeService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IComponentChangeService)
namespace System::ComponentModel {
class MemberDescriptor;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class IComponentChangeService;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::IComponentChangeService);
// Dependencies
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.IComponentChangeService
class CORDL_TYPE IComponentChangeService {
public:
  // Declarations
  /// @brief Method OnComponentChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnComponentChanged(::System::Object* component, ::System::ComponentModel::MemberDescriptor* member, ::System::Object* oldValue, ::System::Object* newValue);

  /// @brief Method OnComponentChanging, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnComponentChanging(::System::Object* component, ::System::ComponentModel::MemberDescriptor* member);

  // Ctor Parameters [CppParam { name: "", ty: "IComponentChangeService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComponentChangeService(IComponentChangeService const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11323 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::IComponentChangeService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IComponentChangeService*, "System.ComponentModel.Design", "IComponentChangeService");

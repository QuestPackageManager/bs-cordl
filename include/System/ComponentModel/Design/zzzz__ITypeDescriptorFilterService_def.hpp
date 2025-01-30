#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/ITypeDescriptorFilterService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITypeDescriptorFilterService)
namespace System::Collections {
class IDictionary;
}
namespace System::ComponentModel {
class IComponent;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class ITypeDescriptorFilterService;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::ITypeDescriptorFilterService);
// Dependencies
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.ITypeDescriptorFilterService
class CORDL_TYPE ITypeDescriptorFilterService {
public:
  // Declarations
  /// @brief Method FilterAttributes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool FilterAttributes(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* attributes);

  /// @brief Method FilterEvents, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool FilterEvents(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* events);

  /// @brief Method FilterProperties, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool FilterProperties(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* properties);

  // Ctor Parameters [CppParam { name: "", ty: "ITypeDescriptorFilterService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITypeDescriptorFilterService(ITypeDescriptorFilterService const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9474 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::ITypeDescriptorFilterService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::ITypeDescriptorFilterService*, "System.ComponentModel.Design", "ITypeDescriptorFilterService");

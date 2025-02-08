#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/IExtenderListService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExtenderListService)
namespace System::ComponentModel {
class IExtenderProvider;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class IExtenderListService;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::IExtenderListService);
// Dependencies
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.IExtenderListService
class CORDL_TYPE IExtenderListService {
public:
  // Declarations
  /// @brief Method GetExtenderProviders, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders();

  // Ctor Parameters [CppParam { name: "", ty: "IExtenderListService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExtenderListService(IExtenderListService const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9473 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::IExtenderListService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IExtenderListService*, "System.ComponentModel.Design", "IExtenderListService");

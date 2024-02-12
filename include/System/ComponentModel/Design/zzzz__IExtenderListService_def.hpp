#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.ComponentModel.Design::IExtenderListService
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7511))
// CS Name: ::System.ComponentModel.Design::IExtenderListService*
class CORDL_TYPE IExtenderListService {
public:
  // Declarations
  /// @brief Method GetExtenderProviders, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders();

  // Ctor Parameters [CppParam { name: "", ty: "IExtenderListService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IExtenderListService(IExtenderListService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IExtenderListService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExtenderListService(IExtenderListService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::IExtenderListService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IExtenderListService*, "System.ComponentModel.Design", "IExtenderListService");

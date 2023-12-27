#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PS5LevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
CORDL_MODULE_EXPORT(PS5PlatformAdditionalContentModel)
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
namespace GlobalNamespace {
class ISonyCommerceHelper;
}
namespace GlobalNamespace {
class PS5LevelProductsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5PlatformAdditionalContentModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5PlatformAdditionalContentModel);
// Type: ::PS5PlatformAdditionalContentModel
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4563)), TypeDefinitionIndex(TypeDefinitionIndex(4601)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4601), inst: 4983
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4564)) CS Name: ::PS5PlatformAdditionalContentModel*
class CORDL_TYPE PS5PlatformAdditionalContentModel : public ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<::GlobalNamespace::PS5LevelProductsModelSO*> {
public:
  // Declarations
  static inline ::GlobalNamespace::PS5PlatformAdditionalContentModel* New_ctor(::GlobalNamespace::PS5LevelProductsModelSO* ps5LevelProductsModel,
                                                                               ::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                                               ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer);

  /// @brief Method .ctor addr 0x23682c4 size 0x70 virtual false final false
  inline void _ctor(::GlobalNamespace::PS5LevelProductsModelSO* ps5LevelProductsModel, ::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                    ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer);

  // Ctor Parameters [CppParam { name: "", ty: "PS5PlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5PlatformAdditionalContentModel(PS5PlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5PlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5PlatformAdditionalContentModel(PS5PlatformAdditionalContentModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5PlatformAdditionalContentModel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5PlatformAdditionalContentModel, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5PlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5PlatformAdditionalContentModel*, "", "PS5PlatformAdditionalContentModel");

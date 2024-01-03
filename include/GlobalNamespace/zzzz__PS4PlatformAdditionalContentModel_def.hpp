#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PS4LevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
CORDL_MODULE_EXPORT(PS4PlatformAdditionalContentModel)
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
namespace GlobalNamespace {
class ISonyCommerceHelper;
}
namespace GlobalNamespace {
class PS4LevelProductsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4PlatformAdditionalContentModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4PlatformAdditionalContentModel);
// Type: ::PS4PlatformAdditionalContentModel
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4601)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4601), inst: 4982 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4552))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4553)) CS Name: ::PS4PlatformAdditionalContentModel*
class CORDL_TYPE PS4PlatformAdditionalContentModel : public ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<::GlobalNamespace::PS4LevelProductsModelSO*> {
public:
  // Declarations
  static inline ::GlobalNamespace::PS4PlatformAdditionalContentModel* New_ctor(::GlobalNamespace::PS4LevelProductsModelSO* ps4LevelProductsModel,
                                                                               ::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                                               ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer);

  /// @brief Method .ctor, addr 0x23681a0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PS4LevelProductsModelSO* ps4LevelProductsModel, ::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                    ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer);

  // Ctor Parameters [CppParam { name: "", ty: "PS4PlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4PlatformAdditionalContentModel(PS4PlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4PlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4PlatformAdditionalContentModel(PS4PlatformAdditionalContentModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4PlatformAdditionalContentModel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4PlatformAdditionalContentModel, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4PlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4PlatformAdditionalContentModel*, "", "PS4PlatformAdditionalContentModel");

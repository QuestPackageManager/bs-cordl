#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PS4LevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
CORDL_MODULE_EXPORT(PS4PlatformAdditionalContentModel)
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
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4640)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4690), inst: 4876 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4690))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4642)) CS Name: ::PS4PlatformAdditionalContentModel*
class CORDL_TYPE PS4PlatformAdditionalContentModel : public ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<::GlobalNamespace::PS4LevelProductsModelSO*> {
public:
  // Declarations
  /// @brief Field _ps4LevelProductsModel, offset 0x48, size 0x8
  __declspec(property(get = __get__ps4LevelProductsModel, put = __set__ps4LevelProductsModel))::GlobalNamespace::PS4LevelProductsModelSO* _ps4LevelProductsModel;

  constexpr ::GlobalNamespace::PS4LevelProductsModelSO*& __get__ps4LevelProductsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4LevelProductsModelSO*> const& __get__ps4LevelProductsModel() const;

  constexpr void __set__ps4LevelProductsModel(::GlobalNamespace::PS4LevelProductsModelSO* value);

  /// @brief Method GetLevelProductsModel addr 0x222e294 size 0x8 virtual true final false
  inline ::GlobalNamespace::PS4LevelProductsModelSO* GetLevelProductsModel();

  static inline ::GlobalNamespace::PS4PlatformAdditionalContentModel* New_ctor();

  /// @brief Method .ctor addr 0x222e29c size 0x48 virtual false final false
  inline void _ctor();

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
  /// @brief Field _ps4LevelProductsModel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PS4LevelProductsModelSO* ____ps4LevelProductsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4PlatformAdditionalContentModel, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4PlatformAdditionalContentModel, ____ps4LevelProductsModel) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4PlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4PlatformAdditionalContentModel*, "", "PS4PlatformAdditionalContentModel");

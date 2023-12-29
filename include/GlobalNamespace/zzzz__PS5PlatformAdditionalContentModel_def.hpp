#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PS5LevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
CORDL_MODULE_EXPORT(PS5PlatformAdditionalContentModel)
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
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4690), inst: 4877 }), TypeDefinitionIndex(TypeDefinitionIndex(4690)),
// TypeDefinitionIndex(TypeDefinitionIndex(4652))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4654)) CS Name: ::PS5PlatformAdditionalContentModel*
class CORDL_TYPE PS5PlatformAdditionalContentModel : public ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<::GlobalNamespace::PS5LevelProductsModelSO*> {
public:
  // Declarations
  /// @brief Field _ps5LevelProductsModel, offset 0x48, size 0x8
  __declspec(property(get = __get__ps5LevelProductsModel, put = __set__ps5LevelProductsModel))::GlobalNamespace::PS5LevelProductsModelSO* _ps5LevelProductsModel;

  constexpr ::GlobalNamespace::PS5LevelProductsModelSO*& __get__ps5LevelProductsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5LevelProductsModelSO*> const& __get__ps5LevelProductsModel() const;

  constexpr void __set__ps5LevelProductsModel(::GlobalNamespace::PS5LevelProductsModelSO* value);

  /// @brief Method GetLevelProductsModel addr 0x222e3a4 size 0x8 virtual true final false
  inline ::GlobalNamespace::PS5LevelProductsModelSO* GetLevelProductsModel();

  static inline ::GlobalNamespace::PS5PlatformAdditionalContentModel* New_ctor();

  /// @brief Method .ctor addr 0x222e3ac size 0x48 virtual false final false
  inline void _ctor();

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
  /// @brief Field _ps5LevelProductsModel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PS5LevelProductsModelSO* ____ps5LevelProductsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5PlatformAdditionalContentModel, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5PlatformAdditionalContentModel, ____ps5LevelProductsModel) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5PlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5PlatformAdditionalContentModel*, "", "PS5PlatformAdditionalContentModel");

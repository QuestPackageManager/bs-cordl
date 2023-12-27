#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SonyLevelProductModelSO_def.hpp"
CORDL_MODULE_EXPORT(PS5LevelProductsModelSO)
// Forward declare root types
namespace GlobalNamespace {
class PS5LevelProductsModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5LevelProductsModelSO);
// Type: ::PS5LevelProductsModelSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4591))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4563))
// CS Name: ::PS5LevelProductsModelSO*
class CORDL_TYPE PS5LevelProductsModelSO : public ::GlobalNamespace::SonyLevelProductModelSO {
public:
  // Declarations
  static inline ::GlobalNamespace::PS5LevelProductsModelSO* New_ctor();

  /// @brief Method .ctor addr 0x23682bc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS5LevelProductsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5LevelProductsModelSO(PS5LevelProductsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5LevelProductsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5LevelProductsModelSO(PS5LevelProductsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5LevelProductsModelSO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5LevelProductsModelSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5LevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5LevelProductsModelSO*, "", "PS5LevelProductsModelSO");

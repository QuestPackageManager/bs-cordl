#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SonyLevelProductModelSO_def.hpp"
CORDL_MODULE_EXPORT(PS4LevelProductsModelSO)
// Forward declare root types
namespace GlobalNamespace {
class PS4LevelProductsModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4LevelProductsModelSO);
// Type: ::PS4LevelProductsModelSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4591))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4552))
// CS Name: ::PS4LevelProductsModelSO*
class CORDL_TYPE PS4LevelProductsModelSO : public ::GlobalNamespace::SonyLevelProductModelSO {
public:
  // Declarations
  static inline ::GlobalNamespace::PS4LevelProductsModelSO* New_ctor();

  /// @brief Method .ctor, addr 0x2368190, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS4LevelProductsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4LevelProductsModelSO(PS4LevelProductsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4LevelProductsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4LevelProductsModelSO(PS4LevelProductsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4LevelProductsModelSO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4LevelProductsModelSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4LevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4LevelProductsModelSO*, "", "PS4LevelProductsModelSO");

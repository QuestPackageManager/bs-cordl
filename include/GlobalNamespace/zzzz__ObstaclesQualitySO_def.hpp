#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include "GlobalNamespace/zzzz__ObstaclesQuality_def.hpp"
CORDL_MODULE_EXPORT(ObstaclesQualitySO)
// Forward declare root types
namespace GlobalNamespace {
class ObstaclesQualitySO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstaclesQualitySO);
// Type: ::ObstaclesQualitySO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 3856 }), TypeDefinitionIndex(TypeDefinitionIndex(15869)),
// TypeDefinitionIndex(TypeDefinitionIndex(4442))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5943)) CS Name: ::ObstaclesQualitySO*
class CORDL_TYPE ObstaclesQualitySO : public ::GlobalNamespace::ObservableVariableSO_1<::GlobalNamespace::ObstaclesQuality> {
public:
  // Declarations
  static inline ::GlobalNamespace::ObstaclesQualitySO* New_ctor();

  /// @brief Method .ctor addr 0x2303f70 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ObstaclesQualitySO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstaclesQualitySO(ObstaclesQualitySO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstaclesQualitySO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstaclesQualitySO(ObstaclesQualitySO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstaclesQualitySO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstaclesQualitySO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstaclesQualitySO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstaclesQualitySO*, "", "ObstaclesQualitySO");

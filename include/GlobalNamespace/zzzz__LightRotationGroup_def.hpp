#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroupRotationXTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationYTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationZTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightTransformGroup_3_def.hpp"
CORDL_MODULE_EXPORT(LightRotationGroup)
// Forward declare root types
namespace GlobalNamespace {
class LightRotationGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationGroup);
// Type: ::LightRotationGroup
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4932)), TypeDefinitionIndex(TypeDefinitionIndex(4943)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4943), inst: 3959
// }), TypeDefinitionIndex(TypeDefinitionIndex(4934)), TypeDefinitionIndex(TypeDefinitionIndex(4933))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4939)) CS Name: ::LightRotationGroup*
class CORDL_TYPE LightRotationGroup : public ::GlobalNamespace::LightTransformGroup_3<::GlobalNamespace::LightGroupRotationXTransform*, ::GlobalNamespace::LightGroupRotationYTransform*,
                                                                                      ::GlobalNamespace::LightGroupRotationZTransform*> {
public:
  // Declarations
  static inline ::GlobalNamespace::LightRotationGroup* New_ctor();

  /// @brief Method .ctor, addr 0x23a9a28, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationGroup(LightRotationGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationGroup(LightRotationGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationGroup();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationGroup, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationGroup*, "", "LightRotationGroup");

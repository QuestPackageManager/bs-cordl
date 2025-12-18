#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightTransformGroup_3_def.hpp"
CORDL_MODULE_EXPORT(LightRotationGroup)
namespace GlobalNamespace {
class LightGroupRotationXTransform;
}
namespace GlobalNamespace {
class LightGroupRotationYTransform;
}
namespace GlobalNamespace {
class LightGroupRotationZTransform;
}
namespace GlobalNamespace {
struct LightTransformGroupType;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationGroup);
// Dependencies LightTransformGroup`3<TX, TY, TZ>
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightRotationGroup
class CORDL_TYPE LightRotationGroup
    : public ::GlobalNamespace::LightTransformGroup_3<::UnityW<::GlobalNamespace::LightGroupRotationXTransform>, ::UnityW<::GlobalNamespace::LightGroupRotationYTransform>,
                                                      ::UnityW<::GlobalNamespace::LightGroupRotationZTransform>> {
public:
  // Declarations
  __declspec(property(get = get_transformGroupType)) ::GlobalNamespace::LightTransformGroupType transformGroupType;

  static inline ::GlobalNamespace::LightRotationGroup* New_ctor();

  /// @brief Method .ctor, addr 0x57e66bc, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transformGroupType, addr 0x57e66b4, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::LightTransformGroupType get_transformGroupType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationGroup(LightRotationGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationGroup(LightRotationGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5888 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationGroup, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationGroup*, "", "LightRotationGroup");

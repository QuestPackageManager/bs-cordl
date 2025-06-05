#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLayerAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(OVRLayerAttribute)
// Forward declare root types
namespace GlobalNamespace {
class OVRLayerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRLayerAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRLayerAttribute
class CORDL_TYPE OVRLayerAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRLayerAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3fc3cbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRLayerAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRLayerAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRLayerAttribute(OVRLayerAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRLayerAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRLayerAttribute(OVRLayerAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7943 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRLayerAttribute, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRLayerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLayerAttribute*, "", "OVRLayerAttribute");

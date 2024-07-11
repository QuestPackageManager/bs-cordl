#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRReadOnlyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(OVRReadOnlyAttribute)
// Forward declare root types
namespace GlobalNamespace {
class OVRReadOnlyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRReadOnlyAttribute);
// Type: ::OVRReadOnlyAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRReadOnlyAttribute*
class CORDL_TYPE OVRReadOnlyAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRReadOnlyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2bc3ab4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRReadOnlyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRReadOnlyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRReadOnlyAttribute(OVRReadOnlyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRReadOnlyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRReadOnlyAttribute(OVRReadOnlyAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRReadOnlyAttribute, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRReadOnlyAttribute*, "", "OVRReadOnlyAttribute");

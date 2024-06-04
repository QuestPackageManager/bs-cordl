#pragma once
// IWYU pragma private; include "GlobalNamespace/HierarchyIgnorePrefabOverrides.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HierarchyIgnorePrefabOverrides)
// Forward declare root types
namespace GlobalNamespace {
class HierarchyIgnorePrefabOverrides;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HierarchyIgnorePrefabOverrides);
// Type: ::HierarchyIgnorePrefabOverrides
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HierarchyIgnorePrefabOverrides*
class CORDL_TYPE HierarchyIgnorePrefabOverrides : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::HierarchyIgnorePrefabOverrides* New_ctor();

  /// @brief Method .ctor, addr 0x14a8210, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyIgnorePrefabOverrides();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyIgnorePrefabOverrides", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyIgnorePrefabOverrides(HierarchyIgnorePrefabOverrides&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyIgnorePrefabOverrides", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyIgnorePrefabOverrides(HierarchyIgnorePrefabOverrides const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HierarchyIgnorePrefabOverrides, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HierarchyIgnorePrefabOverrides);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HierarchyIgnorePrefabOverrides*, "", "HierarchyIgnorePrefabOverrides");

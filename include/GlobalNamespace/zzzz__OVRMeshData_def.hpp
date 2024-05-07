#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRMeshAttributes_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRMeshData)
namespace GlobalNamespace {
struct OVRMeshAttributes;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMeshData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMeshData);
// Type: ::OVRMeshData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRMeshData
struct CORDL_TYPE OVRMeshData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMeshData();

  // Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers:
  // "", def_value: None }, CppParam { name: "baseAttributes", ty: "::GlobalNamespace::OVRMeshAttributes", modifiers: "", def_value: None }, CppParam { name: "morphTargets", ty:
  // "::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>", modifiers: "", def_value: None }]
  constexpr OVRMeshData(::UnityW<::UnityEngine::Mesh> mesh, ::UnityW<::UnityEngine::Material> material, ::GlobalNamespace::OVRMeshAttributes baseAttributes,
                        ::ArrayW<::GlobalNamespace::OVRMeshAttributes, ::Array<::GlobalNamespace::OVRMeshAttributes>*> morphTargets) noexcept;

  /// @brief Field mesh, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Field material, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field baseAttributes, offset: 0x10, size: 0x30, def value: None
  ::GlobalNamespace::OVRMeshAttributes baseAttributes;

  /// @brief Field morphTargets, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRMeshAttributes, ::Array<::GlobalNamespace::OVRMeshAttributes>*> morphTargets;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMeshData, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshData, mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshData, material) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshData, baseAttributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshData, morphTargets) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshData, "", "OVRMeshData");

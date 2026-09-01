#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRMeshData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRMeshAttributes_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMeshData, "", "OVRMeshData");
// Dependencies OVRMeshAttributes
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMeshData
struct CORDL_TYPE OVRMeshData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMeshData();

  // Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers:
  // "", def_value: None }, CppParam { name: "baseAttributes", ty: "::GlobalNamespace::OVRMeshAttributes", modifiers: "", def_value: None }, CppParam { name: "morphTargets", ty:
  // "::ArrayW<::GlobalNamespace::OVRMeshAttributes>", modifiers: "", def_value: None }]
  constexpr OVRMeshData(::UnityW<::UnityEngine::Mesh> mesh, ::UnityW<::UnityEngine::Material> material, ::GlobalNamespace::OVRMeshAttributes baseAttributes,
                        ::ArrayW<::GlobalNamespace::OVRMeshAttributes> morphTargets) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7165 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field mesh, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Field material, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field baseAttributes, offset: 0x10, size: 0x30, def value: None
  ::GlobalNamespace::OVRMeshAttributes baseAttributes;

  /// @brief Field morphTargets, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRMeshAttributes> morphTargets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMeshData, mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshData, material) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshData, baseAttributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshData, morphTargets) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRMeshData) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace

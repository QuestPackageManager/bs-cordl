#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/MeshTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshTransform)
namespace UnityEngine::ProBuilder {
struct PivotLocation;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshTransform;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MeshTransform);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshTransform
class CORDL_TYPE MeshTransform : public ::System::Object {
public:
  // Declarations
  /// @brief Method CenterPivot, addr 0x477a034, size 0x2d8, virtual false, abstract: false, final false
  static inline void CenterPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t, ::Array<int32_t>*> indexes);

  /// @brief Method FreezeScaleTransform, addr 0x477e968, size 0x160, virtual false, abstract: false, final false
  static inline void FreezeScaleTransform(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method SetPivot, addr 0x477e73c, size 0x98, virtual false, abstract: false, final false
  static inline void SetPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::PivotLocation pivotLocation);

  /// @brief Method SetPivot, addr 0x477e7d4, size 0x194, virtual false, abstract: false, final false
  static inline void SetPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 worldPosition);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshTransform(MeshTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshTransform(MeshTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14391 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshTransform, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshTransform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshTransform*, "UnityEngine.ProBuilder.MeshOperations", "MeshTransform");

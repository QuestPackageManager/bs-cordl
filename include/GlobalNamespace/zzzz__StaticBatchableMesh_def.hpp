#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticBatchableMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StaticBatchableMesh)
// Forward declare root types
namespace GlobalNamespace {
class StaticBatchableMesh;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticBatchableMesh);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticBatchableMesh
class CORDL_TYPE StaticBatchableMesh : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::StaticBatchableMesh* New_ctor();

  /// @brief Method .ctor, addr 0x22a27b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticBatchableMesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StaticBatchableMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticBatchableMesh(StaticBatchableMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticBatchableMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticBatchableMesh(StaticBatchableMesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19246 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticBatchableMesh, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticBatchableMesh);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticBatchableMesh*, "", "StaticBatchableMesh");

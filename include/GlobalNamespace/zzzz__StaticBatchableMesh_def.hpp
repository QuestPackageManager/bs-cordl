#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticBatchableMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StaticBatchableMesh)
// Forward declare root types
namespace GlobalNamespace {
class StaticBatchableMesh;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StaticBatchableMesh*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StaticBatchableMesh*, "", "StaticBatchableMesh");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticBatchableMesh
class CORDL_TYPE StaticBatchableMesh : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::StaticBatchableMesh* New_ctor();

  /// @brief Method .ctor, addr 0x3309bdc, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23680 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::StaticBatchableMesh) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace

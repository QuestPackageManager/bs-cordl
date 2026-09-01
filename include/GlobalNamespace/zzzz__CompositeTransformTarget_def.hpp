#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeTransformTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CompositeTransformTarget)
// Forward declare root types
namespace GlobalNamespace {
class CompositeTransformTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeTransformTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeTransformTarget*, "", "CompositeTransformTarget");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeTransformTarget
class CORDL_TYPE CompositeTransformTarget : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::CompositeTransformTarget* New_ctor();

  /// @brief Method .ctor, addr 0x59933a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeTransformTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeTransformTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeTransformTarget(CompositeTransformTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeTransformTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeTransformTarget(CompositeTransformTarget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5834 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CompositeTransformTarget) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace

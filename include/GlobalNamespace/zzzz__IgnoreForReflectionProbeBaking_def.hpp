#pragma once
// IWYU pragma private; include "GlobalNamespace/IgnoreForReflectionProbeBaking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(IgnoreForReflectionProbeBaking)
// Forward declare root types
namespace GlobalNamespace {
class IgnoreForReflectionProbeBaking;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IgnoreForReflectionProbeBaking*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IgnoreForReflectionProbeBaking*, "", "IgnoreForReflectionProbeBaking");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: IgnoreForReflectionProbeBaking
class CORDL_TYPE IgnoreForReflectionProbeBaking : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::IgnoreForReflectionProbeBaking* New_ctor();

  /// @brief Method .ctor, addr 0x58e2928, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoreForReflectionProbeBaking();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IgnoreForReflectionProbeBaking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IgnoreForReflectionProbeBaking(IgnoreForReflectionProbeBaking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IgnoreForReflectionProbeBaking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IgnoreForReflectionProbeBaking(IgnoreForReflectionProbeBaking const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6511 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::IgnoreForReflectionProbeBaking) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace

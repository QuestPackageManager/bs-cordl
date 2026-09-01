#pragma once
// IWYU pragma private; include "GlobalNamespace\DuplicateMirrorForReflectionProbe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DuplicateMirrorForReflectionProbe)
// Forward declare root types
namespace GlobalNamespace {
class DuplicateMirrorForReflectionProbe;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DuplicateMirrorForReflectionProbe*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DuplicateMirrorForReflectionProbe*, "", "DuplicateMirrorForReflectionProbe");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DuplicateMirrorForReflectionProbe
class CORDL_TYPE DuplicateMirrorForReflectionProbe : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::DuplicateMirrorForReflectionProbe* New_ctor();

  /// @brief Method .ctor, addr 0x58e44a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DuplicateMirrorForReflectionProbe();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DuplicateMirrorForReflectionProbe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DuplicateMirrorForReflectionProbe(DuplicateMirrorForReflectionProbe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DuplicateMirrorForReflectionProbe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DuplicateMirrorForReflectionProbe(DuplicateMirrorForReflectionProbe const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6533 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DuplicateMirrorForReflectionProbe) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace

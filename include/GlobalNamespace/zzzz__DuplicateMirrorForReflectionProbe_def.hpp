#pragma once
// IWYU pragma private; include "GlobalNamespace/DuplicateMirrorForReflectionProbe.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DuplicateMirrorForReflectionProbe)
// Forward declare root types
namespace GlobalNamespace {
class DuplicateMirrorForReflectionProbe;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DuplicateMirrorForReflectionProbe);
// Type: ::DuplicateMirrorForReflectionProbe
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DuplicateMirrorForReflectionProbe*
class CORDL_TYPE DuplicateMirrorForReflectionProbe : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::DuplicateMirrorForReflectionProbe* New_ctor();

  /// @brief Method .ctor, addr 0x3aa3fc0, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5032 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DuplicateMirrorForReflectionProbe, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DuplicateMirrorForReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DuplicateMirrorForReflectionProbe*, "", "DuplicateMirrorForReflectionProbe");

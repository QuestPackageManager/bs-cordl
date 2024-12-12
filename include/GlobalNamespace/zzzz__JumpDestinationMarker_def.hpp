#pragma once
// IWYU pragma private; include "GlobalNamespace/JumpDestinationMarker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__Marker_def.hpp"
CORDL_MODULE_EXPORT(JumpDestinationMarker)
// Forward declare root types
namespace GlobalNamespace {
class JumpDestinationMarker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::JumpDestinationMarker);
// Dependencies UnityEngine.Timeline.Marker
namespace GlobalNamespace {
// Is value type: false
// CS Name: JumpDestinationMarker
class CORDL_TYPE JumpDestinationMarker : public ::UnityEngine::Timeline::Marker {
public:
  // Declarations
  static inline ::GlobalNamespace::JumpDestinationMarker* New_ctor();

  /// @brief Method .ctor, addr 0x39c5a30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JumpDestinationMarker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JumpDestinationMarker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JumpDestinationMarker(JumpDestinationMarker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JumpDestinationMarker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JumpDestinationMarker(JumpDestinationMarker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16448 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::JumpDestinationMarker, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::JumpDestinationMarker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JumpDestinationMarker*, "", "JumpDestinationMarker");

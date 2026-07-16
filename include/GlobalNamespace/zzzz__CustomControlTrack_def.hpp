#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomControlTrack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__ControlTrack_def.hpp"
CORDL_MODULE_EXPORT(CustomControlTrack)
// Forward declare root types
namespace GlobalNamespace {
class CustomControlTrack;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomControlTrack*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomControlTrack*, "", "CustomControlTrack");
// Dependencies UnityEngine.Timeline.ControlTrack
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomControlTrack
class CORDL_TYPE CustomControlTrack : public ::UnityEngine::Timeline::ControlTrack {
public:
  // Declarations
  static inline ::GlobalNamespace::CustomControlTrack* New_ctor();

  /// @brief Method .ctor, addr 0x5905df4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomControlTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomControlTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomControlTrack(CustomControlTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomControlTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomControlTrack(CustomControlTrack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6666 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CustomControlTrack) == 0xa0, "Size mismatch!");

} // namespace GlobalNamespace

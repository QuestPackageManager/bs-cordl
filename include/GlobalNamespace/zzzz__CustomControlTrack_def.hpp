#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomControlTrack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__ControlTrack_def.hpp"
CORDL_MODULE_EXPORT(CustomControlTrack)
// Forward declare root types
namespace GlobalNamespace {
class CustomControlTrack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomControlTrack);
// Dependencies UnityEngine.Timeline.ControlTrack
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomControlTrack
class CORDL_TYPE CustomControlTrack : public ::UnityEngine::Timeline::ControlTrack {
public:
  // Declarations
  static inline ::GlobalNamespace::CustomControlTrack* New_ctor();

  /// @brief Method .ctor, addr 0x3b33f90, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5199 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomControlTrack, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomControlTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomControlTrack*, "", "CustomControlTrack");

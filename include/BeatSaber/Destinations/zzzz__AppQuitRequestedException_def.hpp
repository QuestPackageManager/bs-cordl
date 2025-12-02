#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/AppQuitRequestedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Destinations/zzzz__InitialDestinationException_def.hpp"
CORDL_MODULE_EXPORT(AppQuitRequestedException)
// Forward declare root types
namespace BeatSaber::Destinations {
class AppQuitRequestedException;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Destinations::AppQuitRequestedException);
// Dependencies BeatSaber.Destinations.InitialDestinationException
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.AppQuitRequestedException
class CORDL_TYPE AppQuitRequestedException : public ::BeatSaber::Destinations::InitialDestinationException {
public:
  // Declarations
  static inline ::BeatSaber::Destinations::AppQuitRequestedException* New_ctor();

  /// @brief Method .ctor, addr 0x3182344, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppQuitRequestedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppQuitRequestedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppQuitRequestedException(AppQuitRequestedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppQuitRequestedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppQuitRequestedException(AppQuitRequestedException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22664 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::AppQuitRequestedException, 0x90>, "Size mismatch!");

} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::AppQuitRequestedException);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::AppQuitRequestedException*, "BeatSaber.Destinations", "AppQuitRequestedException");

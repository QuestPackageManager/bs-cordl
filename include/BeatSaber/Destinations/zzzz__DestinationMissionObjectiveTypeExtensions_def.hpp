#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/DestinationMissionObjectiveTypeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DestinationMissionObjectiveTypeExtensions)
namespace BeatSaber::Destinations {
struct MissionObjectiveType;
}
// Forward declare root types
namespace BeatSaber::Destinations {
class DestinationMissionObjectiveTypeExtensions;
}
// Write type traits
MARK_REF_T(::BeatSaber::Destinations::DestinationMissionObjectiveTypeExtensions*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::DestinationMissionObjectiveTypeExtensions*, "BeatSaber.Destinations", "DestinationMissionObjectiveTypeExtensions");
// Dependencies System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.DestinationMissionObjectiveTypeExtensions
class CORDL_TYPE DestinationMissionObjectiveTypeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToObjectiveName, addr 0x327feb8, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW ToObjectiveName(::BeatSaber::Destinations::MissionObjectiveType missionObjectiveType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DestinationMissionObjectiveTypeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DestinationMissionObjectiveTypeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DestinationMissionObjectiveTypeExtensions(DestinationMissionObjectiveTypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DestinationMissionObjectiveTypeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DestinationMissionObjectiveTypeExtensions(DestinationMissionObjectiveTypeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23058 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Destinations::DestinationMissionObjectiveTypeExtensions) == 0x10, "Size mismatch!");

} // namespace BeatSaber::Destinations

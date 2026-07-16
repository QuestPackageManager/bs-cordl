#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/MissionDestinationParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Destinations/zzzz__SimpleMissionObjective_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MissionDestinationParameters)
namespace BeatSaber::Destinations {
class SimpleMissionObjective;
}
// Forward declare root types
namespace BeatSaber::Destinations {
class MissionDestinationParameters;
}
// Write type traits
MARK_REF_T(::BeatSaber::Destinations::MissionDestinationParameters*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::MissionDestinationParameters*, "BeatSaber.Destinations", "MissionDestinationParameters");
// Dependencies BeatSaber.Destinations.SimpleMissionObjective, System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.MissionDestinationParameters
class CORDL_TYPE MissionDestinationParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field objectives, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_objectives, put = __cordl_internal_set_objectives)) ::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*> objectives;

  static inline ::BeatSaber::Destinations::MissionDestinationParameters* New_ctor(::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*> objectives);

  constexpr ::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*> const& __cordl_internal_get_objectives() const;

  constexpr ::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*>& __cordl_internal_get_objectives();

  constexpr void __cordl_internal_set_objectives(::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*> value);

  /// @brief Method .ctor, addr 0x32803bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*> objectives);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionDestinationParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionDestinationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionDestinationParameters(MissionDestinationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionDestinationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionDestinationParameters(MissionDestinationParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23064 };

  /// @brief Field objectives, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*> ___objectives;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::MissionDestinationParameters, ___objectives) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Destinations::MissionDestinationParameters) == 0x18, "Size mismatch!");

} // namespace BeatSaber::Destinations

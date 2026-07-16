#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/Destination.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Destinations/zzzz__DestinationFlags_def.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationTarget_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Destination)
namespace BeatSaber::Destinations {
struct DestinationFlags;
}
namespace BeatSaber::Destinations {
struct DestinationTarget;
}
namespace BeatSaber::Destinations {
class LevelStartDestinationParameters;
}
namespace BeatSaber::Destinations {
class MissionDestinationParameters;
}
namespace GlobalNamespace {
class GameplayAdditionalInformation;
}
// Forward declare root types
namespace BeatSaber::Destinations {
class Destination;
}
// Write type traits
MARK_REF_T(::BeatSaber::Destinations::Destination*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::Destination*, "BeatSaber.Destinations", "Destination");
// Dependencies BeatSaber.Destinations.DestinationFlags, BeatSaber.Destinations.DestinationTarget, System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.Destination
class CORDL_TYPE Destination : public ::System::Object {
public:
  // Declarations
  /// @brief Field _destinationFlags, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__destinationFlags, put = __cordl_internal_set__destinationFlags)) ::BeatSaber::Destinations::DestinationFlags _destinationFlags;

  /// @brief Field arguments, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_arguments, put = __cordl_internal_set_arguments)) ::ArrayW<::StringW> arguments;

  /// @brief Field gameplayAdditionalInformation, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayAdditionalInformation,
                      put = __cordl_internal_set_gameplayAdditionalInformation)) ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation;

  /// @brief Field levelStartParameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_levelStartParameters,
                      put = __cordl_internal_set_levelStartParameters)) ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartParameters;

  /// @brief Field missionDestinationParameters, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_missionDestinationParameters,
                      put = __cordl_internal_set_missionDestinationParameters)) ::BeatSaber::Destinations::MissionDestinationParameters* missionDestinationParameters;

  __declspec(property(get = get_shouldLoadHealthWarning)) bool shouldLoadHealthWarning;

  __declspec(property(get = get_shouldLoadMenu)) bool shouldLoadMenu;

  /// @brief Field stage, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_stage, put = __cordl_internal_set_stage)) ::BeatSaber::Destinations::DestinationTarget stage;

  static inline ::BeatSaber::Destinations::Destination* New_ctor(::BeatSaber::Destinations::DestinationTarget stage, ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination,
                                                                 ::ArrayW<::StringW> arguments, ::BeatSaber::Destinations::DestinationFlags destinationFlags,
                                                                 ::BeatSaber::Destinations::MissionDestinationParameters* missionDestinationParameters,
                                                                 ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation);

  constexpr ::BeatSaber::Destinations::DestinationFlags const& __cordl_internal_get__destinationFlags() const;

  constexpr ::BeatSaber::Destinations::DestinationFlags& __cordl_internal_get__destinationFlags();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get_arguments() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get_arguments();

  constexpr ::GlobalNamespace::GameplayAdditionalInformation* const& __cordl_internal_get_gameplayAdditionalInformation() const;

  constexpr ::GlobalNamespace::GameplayAdditionalInformation*& __cordl_internal_get_gameplayAdditionalInformation();

  constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters* const& __cordl_internal_get_levelStartParameters() const;

  constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters*& __cordl_internal_get_levelStartParameters();

  constexpr ::BeatSaber::Destinations::MissionDestinationParameters* const& __cordl_internal_get_missionDestinationParameters() const;

  constexpr ::BeatSaber::Destinations::MissionDestinationParameters*& __cordl_internal_get_missionDestinationParameters();

  constexpr ::BeatSaber::Destinations::DestinationTarget const& __cordl_internal_get_stage() const;

  constexpr ::BeatSaber::Destinations::DestinationTarget& __cordl_internal_get_stage();

  constexpr void __cordl_internal_set__destinationFlags(::BeatSaber::Destinations::DestinationFlags value);

  constexpr void __cordl_internal_set_arguments(::ArrayW<::StringW> value);

  constexpr void __cordl_internal_set_gameplayAdditionalInformation(::GlobalNamespace::GameplayAdditionalInformation* value);

  constexpr void __cordl_internal_set_levelStartParameters(::BeatSaber::Destinations::LevelStartDestinationParameters* value);

  constexpr void __cordl_internal_set_missionDestinationParameters(::BeatSaber::Destinations::MissionDestinationParameters* value);

  constexpr void __cordl_internal_set_stage(::BeatSaber::Destinations::DestinationTarget value);

  /// @brief Method .ctor, addr 0x3280294, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Destinations::DestinationTarget stage, ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination, ::ArrayW<::StringW> arguments,
                    ::BeatSaber::Destinations::DestinationFlags destinationFlags, ::BeatSaber::Destinations::MissionDestinationParameters* missionDestinationParameters,
                    ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation);

  /// @brief Method get_shouldLoadHealthWarning, addr 0x32803b0, size 0xc, virtual false, abstract: false, final false
  inline bool get_shouldLoadHealthWarning();

  /// @brief Method get_shouldLoadMenu, addr 0x32803a4, size 0xc, virtual false, abstract: false, final false
  inline bool get_shouldLoadMenu();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Destination();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Destination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Destination(Destination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Destination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Destination(Destination const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23063 };

  /// @brief Field stage, offset: 0x10, size: 0x4, def value: None
  ::BeatSaber::Destinations::DestinationTarget ___stage;

  /// @brief Field levelStartParameters, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Destinations::LevelStartDestinationParameters* ___levelStartParameters;

  /// @brief Field arguments, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW> ___arguments;

  /// @brief Field _destinationFlags, offset: 0x28, size: 0x4, def value: None
  ::BeatSaber::Destinations::DestinationFlags ____destinationFlags;

  /// @brief Field gameplayAdditionalInformation, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayAdditionalInformation* ___gameplayAdditionalInformation;

  /// @brief Field missionDestinationParameters, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::Destinations::MissionDestinationParameters* ___missionDestinationParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::Destination, ___stage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::Destination, ___levelStartParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::Destination, ___arguments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::Destination, ____destinationFlags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::Destination, ___gameplayAdditionalInformation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::Destination, ___missionDestinationParameters) == 0x38, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Destinations::Destination) == 0x40, "Size mismatch!");

} // namespace BeatSaber::Destinations

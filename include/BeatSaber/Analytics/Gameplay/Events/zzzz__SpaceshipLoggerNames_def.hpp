#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipLoggerNames.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SpaceshipLoggerNames)
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipLoggerNames;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::Events::SpaceshipLoggerNames);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::Events {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.Events.SpaceshipLoggerNames
class CORDL_TYPE SpaceshipLoggerNames : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpaceshipLoggerNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpaceshipLoggerNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpaceshipLoggerNames(SpaceshipLoggerNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpaceshipLoggerNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpaceshipLoggerNames(SpaceshipLoggerNames const&) = delete;

  /// @brief Field Custom offset 0xffffffff size 0x8
  static constexpr ::ConstString Custom{ u"OCSpaceshipFirstPartyCustomEventsFunctionalLogger" };

  /// @brief Field Metric offset 0xffffffff size 0x8
  static constexpr ::ConstString Metric{ u"OCSpaceshipFirstPartyMetricEventsFunctionalLogger" };

  /// @brief Field Segment offset 0xffffffff size 0x8
  static constexpr ::ConstString Segment{ u"OCSpaceshipFirstPartySegmentEventsFunctionalLogger" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22105 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::Events::SpaceshipLoggerNames, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay::Events
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::Events::SpaceshipLoggerNames);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::Events::SpaceshipLoggerNames*, "BeatSaber.Analytics.Gameplay.Events", "SpaceshipLoggerNames");

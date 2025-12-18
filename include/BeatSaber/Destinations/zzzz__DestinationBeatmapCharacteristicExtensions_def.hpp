#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/DestinationBeatmapCharacteristicExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DestinationBeatmapCharacteristicExtensions)
namespace BeatSaber::Destinations {
struct BeatmapCharacteristic;
}
// Forward declare root types
namespace BeatSaber::Destinations {
class DestinationBeatmapCharacteristicExtensions;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions);
// Dependencies System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.DestinationBeatmapCharacteristicExtensions
class CORDL_TYPE DestinationBeatmapCharacteristicExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method FromSerializedName, addr 0x31b1424, size 0x198, virtual false, abstract: false, final false
  static inline ::BeatSaber::Destinations::BeatmapCharacteristic FromSerializedName(::StringW serializedName);

  /// @brief Method ToSerializedName, addr 0x31b12f4, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW ToSerializedName(::BeatSaber::Destinations::BeatmapCharacteristic characteristic);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DestinationBeatmapCharacteristicExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DestinationBeatmapCharacteristicExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DestinationBeatmapCharacteristicExtensions(DestinationBeatmapCharacteristicExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DestinationBeatmapCharacteristicExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DestinationBeatmapCharacteristicExtensions(DestinationBeatmapCharacteristicExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22743 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions*, "BeatSaber.Destinations", "DestinationBeatmapCharacteristicExtensions");

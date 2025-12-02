#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/BeatmapCharacteristicExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapCharacteristicExtensions)
namespace BeatSaber::Destinations {
struct BeatmapCharacteristic;
}
// Forward declare root types
namespace BeatSaber::Destinations {
class BeatmapCharacteristicExtensions;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Destinations::BeatmapCharacteristicExtensions);
// Dependencies System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.BeatmapCharacteristicExtensions
class CORDL_TYPE BeatmapCharacteristicExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToSerializedName, addr 0x3181600, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW ToSerializedName(::BeatSaber::Destinations::BeatmapCharacteristic characteristic);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicExtensions(BeatmapCharacteristicExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicExtensions(BeatmapCharacteristicExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22653 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::BeatmapCharacteristicExtensions, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::BeatmapCharacteristicExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::BeatmapCharacteristicExtensions*, "BeatSaber.Destinations", "BeatmapCharacteristicExtensions");

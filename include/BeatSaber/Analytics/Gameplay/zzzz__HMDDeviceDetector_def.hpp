#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/HMDDeviceDetector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HMDDeviceDetector)
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay {
class HMDDeviceDetector;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*, "BeatSaber.Analytics.Gameplay", "HMDDeviceDetector");
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.HMDDeviceDetector
class CORDL_TYPE HMDDeviceDetector : public ::System::Object {
public:
  // Declarations
  /// @brief Method DetectHMDPlatform, addr 0x32634f4, size 0xa0, virtual false, abstract: false, final false
  static inline ::StringW DetectHMDPlatform();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMDDeviceDetector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HMDDeviceDetector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMDDeviceDetector(HMDDeviceDetector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMDDeviceDetector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMDDeviceDetector(HMDDeviceDetector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22244 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Analytics::Gameplay::HMDDeviceDetector) == 0x10, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay

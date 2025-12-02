#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/Telemetry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Telemetry)
namespace GlobalNamespace {
struct OVRTelemetryMarker;
}
namespace Meta::XR::BuildingBlocks {
class BuildingBlock;
}
namespace Meta::XR::BuildingBlocks {
class InstallationRoutineCheckpoint;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
class Telemetry;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::Telemetry);
// Dependencies System.Object
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.Telemetry
class CORDL_TYPE Telemetry : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddBlockInfo, addr 0x581d93c, size 0x18c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTelemetryMarker AddBlockInfo(::GlobalNamespace::OVRTelemetryMarker marker, ::Meta::XR::BuildingBlocks::BuildingBlock* block);

  /// @brief Method AddBlockVariantInfo, addr 0x5825f94, size 0xc0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTelemetryMarker AddBlockVariantInfo(::GlobalNamespace::OVRTelemetryMarker marker, ::Meta::XR::BuildingBlocks::BuildingBlock* block);

  /// @brief Method AddInstallationRoutineInfo, addr 0x5826054, size 0x32c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTelemetryMarker AddInstallationRoutineInfo(::GlobalNamespace::OVRTelemetryMarker marker, ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint* checkpoint);

  /// @brief Method AddSceneInfo, addr 0x5826380, size 0x10c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTelemetryMarker AddSceneInfo(::GlobalNamespace::OVRTelemetryMarker marker, ::UnityEngine::SceneManagement::Scene scene);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Telemetry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Telemetry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Telemetry(Telemetry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Telemetry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Telemetry(Telemetry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21160 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::Telemetry, 0x10>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
NEED_NO_BOX(::Meta::XR::BuildingBlocks::Telemetry);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::Telemetry*, "Meta.XR.BuildingBlocks", "Telemetry");

#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_InputActionManifestLoad_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_InputActionManifestLoad_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_InputActionManifestLoad_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_InputActionManifestLoad_t);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VREvent_InputActionManifestLoad_t
struct CORDL_TYPE VREvent_InputActionManifestLoad_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_InputActionManifestLoad_t();

  // Ctor Parameters [CppParam { name: "pathAppKey", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathMessage", ty: "uint64_t", modifiers: "", def_value: None }, CppParam {
  // name: "pathMessageParam", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathManifestPath", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr VREvent_InputActionManifestLoad_t(uint64_t pathAppKey, uint64_t pathMessage, uint64_t pathMessageParam, uint64_t pathManifestPath) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8489 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field pathAppKey, offset: 0x0, size: 0x8, def value: None
  uint64_t pathAppKey;

  /// @brief Field pathMessage, offset: 0x8, size: 0x8, def value: None
  uint64_t pathMessage;

  /// @brief Field pathMessageParam, offset: 0x10, size: 0x8, def value: None
  uint64_t pathMessageParam;

  /// @brief Field pathManifestPath, offset: 0x18, size: 0x8, def value: None
  uint64_t pathManifestPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VREvent_InputActionManifestLoad_t, pathAppKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_InputActionManifestLoad_t, pathMessage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_InputActionManifestLoad_t, pathMessageParam) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_InputActionManifestLoad_t, pathManifestPath) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_InputActionManifestLoad_t, 0x20>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_InputActionManifestLoad_t, "OVR.OpenVR", "VREvent_InputActionManifestLoad_t");

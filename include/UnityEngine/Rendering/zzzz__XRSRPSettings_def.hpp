#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/XRSRPSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSRPSettings)
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class XRSRPSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::XRSRPSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::XRSRPSettings*, "UnityEngine.Rendering", "XRSRPSettings");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.XRSRPSettings
class CORDL_TYPE XRSRPSettings : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::XRSRPSettings* New_ctor();

  /// @brief Method .ctor, addr 0x6c2e8e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enabled, addr 0x6c2e1b0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_enabled();

  /// @brief Method get_eyeTextureDesc, addr 0x6c2e33c, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureDescriptor get_eyeTextureDesc();

  /// @brief Method get_eyeTextureHeight, addr 0x6c2e468, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_eyeTextureHeight();

  /// @brief Method get_eyeTextureWidth, addr 0x6c2e410, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_eyeTextureWidth();

  /// @brief Method get_isDeviceActive, addr 0x6c2e1d8, size 0x58, virtual false, abstract: false, final false
  static inline bool get_isDeviceActive();

  /// @brief Method get_loadedDeviceName, addr 0x6c2e230, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_loadedDeviceName();

  /// @brief Method get_mirrorViewMode, addr 0x6c2e7d0, size 0x88, virtual false, abstract: false, final false
  static inline int32_t get_mirrorViewMode();

  /// @brief Method get_occlusionMeshScale, addr 0x6c2e4c0, size 0xbc, virtual false, abstract: false, final false
  static inline float_t get_occlusionMeshScale();

  /// @brief Method get_supportedDevices, addr 0x6c2e2a8, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> get_supportedDevices();

  /// @brief Method get_useVisibilityMesh, addr 0x6c2e640, size 0xc8, virtual false, abstract: false, final false
  static inline bool get_useVisibilityMesh();

  /// @brief Method set_mirrorViewMode, addr 0x6c2e858, size 0x8c, virtual false, abstract: false, final false
  static inline void set_mirrorViewMode(int32_t value);

  /// @brief Method set_occlusionMeshScale, addr 0x6c2e57c, size 0xc4, virtual false, abstract: false, final false
  static inline void set_occlusionMeshScale(float_t value);

  /// @brief Method set_useVisibilityMesh, addr 0x6c2e708, size 0xc8, virtual false, abstract: false, final false
  static inline void set_useVisibilityMesh(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSRPSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSRPSettings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSRPSettings(XRSRPSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSRPSettings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSRPSettings(XRSRPSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9276 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::XRSRPSettings) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering

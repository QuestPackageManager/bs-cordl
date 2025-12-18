#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/XRSRPSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::Rendering::XRSRPSettings);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.XRSRPSettings
class CORDL_TYPE XRSRPSettings : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::XRSRPSettings* New_ctor();

  /// @brief Method .ctor, addr 0x6618f80, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enabled, addr 0x66189dc, size 0x28, virtual false, abstract: false, final false
  static inline bool get_enabled();

  /// @brief Method get_eyeTextureDesc, addr 0x6618b68, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureDescriptor get_eyeTextureDesc();

  /// @brief Method get_eyeTextureHeight, addr 0x6618c94, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_eyeTextureHeight();

  /// @brief Method get_eyeTextureWidth, addr 0x6618c3c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_eyeTextureWidth();

  /// @brief Method get_isDeviceActive, addr 0x6618a04, size 0x58, virtual false, abstract: false, final false
  static inline bool get_isDeviceActive();

  /// @brief Method get_loadedDeviceName, addr 0x6618a5c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_loadedDeviceName();

  /// @brief Method get_mirrorViewMode, addr 0x6618e6c, size 0x88, virtual false, abstract: false, final false
  static inline int32_t get_mirrorViewMode();

  /// @brief Method get_occlusionMeshScale, addr 0x6618cec, size 0xbc, virtual false, abstract: false, final false
  static inline float_t get_occlusionMeshScale();

  /// @brief Method get_supportedDevices, addr 0x6618ad4, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> get_supportedDevices();

  /// @brief Method set_mirrorViewMode, addr 0x6618ef4, size 0x8c, virtual false, abstract: false, final false
  static inline void set_mirrorViewMode(int32_t value);

  /// @brief Method set_occlusionMeshScale, addr 0x6618da8, size 0xc4, virtual false, abstract: false, final false
  static inline void set_occlusionMeshScale(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSRPSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSRPSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSRPSettings(XRSRPSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSRPSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSRPSettings(XRSRPSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12354 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::XRSRPSettings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::XRSRPSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::XRSRPSettings*, "UnityEngine.Rendering", "XRSRPSettings");

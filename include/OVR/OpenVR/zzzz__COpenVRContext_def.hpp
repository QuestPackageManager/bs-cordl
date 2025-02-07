#pragma once
// IWYU pragma private; include "OVR/OpenVR/COpenVRContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(COpenVRContext)
// Forward declare root types
namespace OVR::OpenVR {
struct COpenVRContext;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::COpenVRContext);
// Dependencies System.IntPtr
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.COpenVRContext
struct CORDL_TYPE COpenVRContext {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr COpenVRContext();

  // Ctor Parameters [CppParam { name: "m_pVRSystem", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_pVRChaperone", ty: "::System::IntPtr", modifiers: "", def_value:
  // None }, CppParam { name: "m_pVRChaperoneSetup", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_pVRCompositor", ty: "::System::IntPtr", modifiers: "", def_value:
  // None }, CppParam { name: "m_pVROverlay", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_pVRResources", ty: "::System::IntPtr", modifiers: "", def_value: None },
  // CppParam { name: "m_pVRRenderModels", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_pVRExtendedDisplay", ty: "::System::IntPtr", modifiers: "", def_value: None },
  // CppParam { name: "m_pVRSettings", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_pVRApplications", ty: "::System::IntPtr", modifiers: "", def_value: None },
  // CppParam { name: "m_pVRTrackedCamera", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_pVRScreenshots", ty: "::System::IntPtr", modifiers: "", def_value: None },
  // CppParam { name: "m_pVRDriverManager", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_pVRInput", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam
  // { name: "m_pVRIOBuffer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_pVRSpatialAnchors", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr COpenVRContext(::System::IntPtr m_pVRSystem, ::System::IntPtr m_pVRChaperone, ::System::IntPtr m_pVRChaperoneSetup, ::System::IntPtr m_pVRCompositor, ::System::IntPtr m_pVROverlay,
                           ::System::IntPtr m_pVRResources, ::System::IntPtr m_pVRRenderModels, ::System::IntPtr m_pVRExtendedDisplay, ::System::IntPtr m_pVRSettings,
                           ::System::IntPtr m_pVRApplications, ::System::IntPtr m_pVRTrackedCamera, ::System::IntPtr m_pVRScreenshots, ::System::IntPtr m_pVRDriverManager, ::System::IntPtr m_pVRInput,
                           ::System::IntPtr m_pVRIOBuffer, ::System::IntPtr m_pVRSpatialAnchors) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9044 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field m_pVRSystem, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_pVRSystem;

  /// @brief Field m_pVRChaperone, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr m_pVRChaperone;

  /// @brief Field m_pVRChaperoneSetup, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr m_pVRChaperoneSetup;

  /// @brief Field m_pVRCompositor, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr m_pVRCompositor;

  /// @brief Field m_pVROverlay, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr m_pVROverlay;

  /// @brief Field m_pVRResources, offset: 0x28, size: 0x8, def value: None
  ::System::IntPtr m_pVRResources;

  /// @brief Field m_pVRRenderModels, offset: 0x30, size: 0x8, def value: None
  ::System::IntPtr m_pVRRenderModels;

  /// @brief Field m_pVRExtendedDisplay, offset: 0x38, size: 0x8, def value: None
  ::System::IntPtr m_pVRExtendedDisplay;

  /// @brief Field m_pVRSettings, offset: 0x40, size: 0x8, def value: None
  ::System::IntPtr m_pVRSettings;

  /// @brief Field m_pVRApplications, offset: 0x48, size: 0x8, def value: None
  ::System::IntPtr m_pVRApplications;

  /// @brief Field m_pVRTrackedCamera, offset: 0x50, size: 0x8, def value: None
  ::System::IntPtr m_pVRTrackedCamera;

  /// @brief Field m_pVRScreenshots, offset: 0x58, size: 0x8, def value: None
  ::System::IntPtr m_pVRScreenshots;

  /// @brief Field m_pVRDriverManager, offset: 0x60, size: 0x8, def value: None
  ::System::IntPtr m_pVRDriverManager;

  /// @brief Field m_pVRInput, offset: 0x68, size: 0x8, def value: None
  ::System::IntPtr m_pVRInput;

  /// @brief Field m_pVRIOBuffer, offset: 0x70, size: 0x8, def value: None
  ::System::IntPtr m_pVRIOBuffer;

  /// @brief Field m_pVRSpatialAnchors, offset: 0x78, size: 0x8, def value: None
  ::System::IntPtr m_pVRSpatialAnchors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRSystem) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRChaperone) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRChaperoneSetup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRCompositor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVROverlay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRResources) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRRenderModels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRExtendedDisplay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRApplications) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRTrackedCamera) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRScreenshots) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRDriverManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRInput) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRIOBuffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::COpenVRContext, m_pVRSpatialAnchors) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::COpenVRContext, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::COpenVRContext, "OVR.OpenVR", "COpenVRContext");

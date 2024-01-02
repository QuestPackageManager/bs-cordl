#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(COpenVRContext)
// Forward declare root types
namespace OVR::OpenVR {
struct COpenVRContext;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::COpenVRContext);
// Type: OVR.OpenVR::COpenVRContext
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8727))
// CS Name: ::OVR.OpenVR::COpenVRContext
struct CORDL_TYPE COpenVRContext {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_pVRSystem", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_pVRChaperone", ty: "void*", modifiers: "", def_value: None }, CppParam { name:
  // "m_pVRChaperoneSetup", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_pVRCompositor", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_pVROverlay", ty:
  // "void*", modifiers: "", def_value: None }, CppParam { name: "m_pVRResources", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_pVRRenderModels", ty: "void*", modifiers: "",
  // def_value: None }, CppParam { name: "m_pVRExtendedDisplay", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_pVRSettings", ty: "void*", modifiers: "", def_value: None },
  // CppParam { name: "m_pVRApplications", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_pVRTrackedCamera", ty: "void*", modifiers: "", def_value: None }, CppParam { name:
  // "m_pVRScreenshots", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_pVRDriverManager", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_pVRInput", ty:
  // "void*", modifiers: "", def_value: None }, CppParam { name: "m_pVRIOBuffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_pVRSpatialAnchors", ty: "void*", modifiers: "",
  // def_value: None }]
  constexpr COpenVRContext(void* m_pVRSystem, void* m_pVRChaperone, void* m_pVRChaperoneSetup, void* m_pVRCompositor, void* m_pVROverlay, void* m_pVRResources, void* m_pVRRenderModels,
                           void* m_pVRExtendedDisplay, void* m_pVRSettings, void* m_pVRApplications, void* m_pVRTrackedCamera, void* m_pVRScreenshots, void* m_pVRDriverManager, void* m_pVRInput,
                           void* m_pVRIOBuffer, void* m_pVRSpatialAnchors) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr COpenVRContext();

  /// @brief Field m_pVRSystem, offset: 0x0, size: 0x8, def value: None
  void* m_pVRSystem;

  /// @brief Field m_pVRChaperone, offset: 0x8, size: 0x8, def value: None
  void* m_pVRChaperone;

  /// @brief Field m_pVRChaperoneSetup, offset: 0x10, size: 0x8, def value: None
  void* m_pVRChaperoneSetup;

  /// @brief Field m_pVRCompositor, offset: 0x18, size: 0x8, def value: None
  void* m_pVRCompositor;

  /// @brief Field m_pVROverlay, offset: 0x20, size: 0x8, def value: None
  void* m_pVROverlay;

  /// @brief Field m_pVRResources, offset: 0x28, size: 0x8, def value: None
  void* m_pVRResources;

  /// @brief Field m_pVRRenderModels, offset: 0x30, size: 0x8, def value: None
  void* m_pVRRenderModels;

  /// @brief Field m_pVRExtendedDisplay, offset: 0x38, size: 0x8, def value: None
  void* m_pVRExtendedDisplay;

  /// @brief Field m_pVRSettings, offset: 0x40, size: 0x8, def value: None
  void* m_pVRSettings;

  /// @brief Field m_pVRApplications, offset: 0x48, size: 0x8, def value: None
  void* m_pVRApplications;

  /// @brief Field m_pVRTrackedCamera, offset: 0x50, size: 0x8, def value: None
  void* m_pVRTrackedCamera;

  /// @brief Field m_pVRScreenshots, offset: 0x58, size: 0x8, def value: None
  void* m_pVRScreenshots;

  /// @brief Field m_pVRDriverManager, offset: 0x60, size: 0x8, def value: None
  void* m_pVRDriverManager;

  /// @brief Field m_pVRInput, offset: 0x68, size: 0x8, def value: None
  void* m_pVRInput;

  /// @brief Field m_pVRIOBuffer, offset: 0x70, size: 0x8, def value: None
  void* m_pVRIOBuffer;

  /// @brief Field m_pVRSpatialAnchors, offset: 0x78, size: 0x8, def value: None
  void* m_pVRSpatialAnchors;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::COpenVRContext, 0x80>, "Size mismatch!");

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

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::COpenVRContext, "OVR.OpenVR", "COpenVRContext");

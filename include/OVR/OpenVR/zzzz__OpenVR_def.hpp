#pragma once
// IWYU pragma private; include "OVR/OpenVR/OpenVR.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenVR)
namespace OVR::OpenVR {
class CVRApplications;
}
namespace OVR::OpenVR {
class CVRChaperoneSetup;
}
namespace OVR::OpenVR {
class CVRChaperone;
}
namespace OVR::OpenVR {
class CVRCompositor;
}
namespace OVR::OpenVR {
class CVRExtendedDisplay;
}
namespace OVR::OpenVR {
class CVRInput;
}
namespace OVR::OpenVR {
class CVROverlay;
}
namespace OVR::OpenVR {
class CVRRenderModels;
}
namespace OVR::OpenVR {
class CVRScreenshots;
}
namespace OVR::OpenVR {
class CVRSettings;
}
namespace OVR::OpenVR {
class CVRSpatialAnchors;
}
namespace OVR::OpenVR {
class CVRSystem;
}
namespace OVR::OpenVR {
class CVRTrackedCamera;
}
namespace OVR::OpenVR {
struct EVRApplicationType;
}
namespace OVR::OpenVR {
struct EVRInitError;
}
namespace OVR::OpenVR {
class OpenVR_COpenVRContext;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class OpenVR;
}
namespace OVR::OpenVR {
class OpenVR_COpenVRContext;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::OpenVR);
MARK_REF_PTR_T(::OVR::OpenVR::OpenVR_COpenVRContext);
// Dependencies System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.OpenVR/COpenVRContext
class CORDL_TYPE OpenVR_COpenVRContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_pVRApplications, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pVRApplications, put = __cordl_internal_set_m_pVRApplications)) ::OVR::OpenVR::CVRApplications* m_pVRApplications;

  /// @brief Field m_pVRChaperone, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pVRChaperone, put = __cordl_internal_set_m_pVRChaperone)) ::OVR::OpenVR::CVRChaperone* m_pVRChaperone;

  /// @brief Field m_pVRChaperoneSetup, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pVRChaperoneSetup, put = __cordl_internal_set_m_pVRChaperoneSetup)) ::OVR::OpenVR::CVRChaperoneSetup* m_pVRChaperoneSetup;

  /// @brief Field m_pVRCompositor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pVRCompositor, put = __cordl_internal_set_m_pVRCompositor)) ::OVR::OpenVR::CVRCompositor* m_pVRCompositor;

  /// @brief Field m_pVRExtendedDisplay, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pVRExtendedDisplay, put = __cordl_internal_set_m_pVRExtendedDisplay)) ::OVR::OpenVR::CVRExtendedDisplay* m_pVRExtendedDisplay;

  /// @brief Field m_pVRInput, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pVRInput, put = __cordl_internal_set_m_pVRInput)) ::OVR::OpenVR::CVRInput* m_pVRInput;

  /// @brief Field m_pVROverlay, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pVROverlay, put = __cordl_internal_set_m_pVROverlay)) ::OVR::OpenVR::CVROverlay* m_pVROverlay;

  /// @brief Field m_pVRRenderModels, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pVRRenderModels, put = __cordl_internal_set_m_pVRRenderModels)) ::OVR::OpenVR::CVRRenderModels* m_pVRRenderModels;

  /// @brief Field m_pVRScreenshots, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pVRScreenshots, put = __cordl_internal_set_m_pVRScreenshots)) ::OVR::OpenVR::CVRScreenshots* m_pVRScreenshots;

  /// @brief Field m_pVRSettings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pVRSettings, put = __cordl_internal_set_m_pVRSettings)) ::OVR::OpenVR::CVRSettings* m_pVRSettings;

  /// @brief Field m_pVRSpatialAnchors, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pVRSpatialAnchors, put = __cordl_internal_set_m_pVRSpatialAnchors)) ::OVR::OpenVR::CVRSpatialAnchors* m_pVRSpatialAnchors;

  /// @brief Field m_pVRSystem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pVRSystem, put = __cordl_internal_set_m_pVRSystem)) ::OVR::OpenVR::CVRSystem* m_pVRSystem;

  /// @brief Field m_pVRTrackedCamera, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pVRTrackedCamera, put = __cordl_internal_set_m_pVRTrackedCamera)) ::OVR::OpenVR::CVRTrackedCamera* m_pVRTrackedCamera;

  /// @brief Method CheckClear, addr 0x4076f84, size 0xa0, virtual false, abstract: false, final false
  inline void CheckClear();

  /// @brief Method Clear, addr 0x4076f60, size 0x18, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::OVR::OpenVR::OpenVR_COpenVRContext* New_ctor();

  /// @brief Method VRApplications, addr 0x40769c8, size 0xbc, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::CVRApplications* VRApplications();

  /// @brief Method VRChaperone, addr 0x40763fc, size 0xbc, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::CVRChaperone* VRChaperone();

  /// @brief Method VRChaperoneSetup, addr 0x40764d0, size 0xbc, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::CVRChaperoneSetup* VRChaperoneSetup();

  /// @brief Method VRCompositor, addr 0x40765a4, size 0xbc, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::CVRCompositor* VRCompositor();

  /// @brief Method VRExtendedDisplay, addr 0x4076820, size 0xbc, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::CVRExtendedDisplay* VRExtendedDisplay();

  /// @brief Method VRInput, addr 0x4076c44, size 0xbc, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::CVRInput* VRInput();

  /// @brief Method VROverlay, addr 0x4076678, size 0xbc, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::CVROverlay* VROverlay();

  /// @brief Method VRRenderModels, addr 0x407674c, size 0xbc, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::CVRRenderModels* VRRenderModels();

  /// @brief Method VRScreenshots, addr 0x4076a9c, size 0xbc, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::CVRScreenshots* VRScreenshots();

  /// @brief Method VRSettings, addr 0x40768f4, size 0xbc, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::CVRSettings* VRSettings();

  /// @brief Method VRSpatialAnchors, addr 0x4076d18, size 0xbc, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::CVRSpatialAnchors* VRSpatialAnchors();

  /// @brief Method VRSystem, addr 0x4076328, size 0xbc, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::CVRSystem* VRSystem();

  /// @brief Method VRTrackedCamera, addr 0x4076b70, size 0xbc, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::CVRTrackedCamera* VRTrackedCamera();

  constexpr ::OVR::OpenVR::CVRApplications* const& __cordl_internal_get_m_pVRApplications() const;

  constexpr ::OVR::OpenVR::CVRApplications*& __cordl_internal_get_m_pVRApplications();

  constexpr ::OVR::OpenVR::CVRChaperone* const& __cordl_internal_get_m_pVRChaperone() const;

  constexpr ::OVR::OpenVR::CVRChaperone*& __cordl_internal_get_m_pVRChaperone();

  constexpr ::OVR::OpenVR::CVRChaperoneSetup* const& __cordl_internal_get_m_pVRChaperoneSetup() const;

  constexpr ::OVR::OpenVR::CVRChaperoneSetup*& __cordl_internal_get_m_pVRChaperoneSetup();

  constexpr ::OVR::OpenVR::CVRCompositor* const& __cordl_internal_get_m_pVRCompositor() const;

  constexpr ::OVR::OpenVR::CVRCompositor*& __cordl_internal_get_m_pVRCompositor();

  constexpr ::OVR::OpenVR::CVRExtendedDisplay* const& __cordl_internal_get_m_pVRExtendedDisplay() const;

  constexpr ::OVR::OpenVR::CVRExtendedDisplay*& __cordl_internal_get_m_pVRExtendedDisplay();

  constexpr ::OVR::OpenVR::CVRInput* const& __cordl_internal_get_m_pVRInput() const;

  constexpr ::OVR::OpenVR::CVRInput*& __cordl_internal_get_m_pVRInput();

  constexpr ::OVR::OpenVR::CVROverlay* const& __cordl_internal_get_m_pVROverlay() const;

  constexpr ::OVR::OpenVR::CVROverlay*& __cordl_internal_get_m_pVROverlay();

  constexpr ::OVR::OpenVR::CVRRenderModels* const& __cordl_internal_get_m_pVRRenderModels() const;

  constexpr ::OVR::OpenVR::CVRRenderModels*& __cordl_internal_get_m_pVRRenderModels();

  constexpr ::OVR::OpenVR::CVRScreenshots* const& __cordl_internal_get_m_pVRScreenshots() const;

  constexpr ::OVR::OpenVR::CVRScreenshots*& __cordl_internal_get_m_pVRScreenshots();

  constexpr ::OVR::OpenVR::CVRSettings* const& __cordl_internal_get_m_pVRSettings() const;

  constexpr ::OVR::OpenVR::CVRSettings*& __cordl_internal_get_m_pVRSettings();

  constexpr ::OVR::OpenVR::CVRSpatialAnchors* const& __cordl_internal_get_m_pVRSpatialAnchors() const;

  constexpr ::OVR::OpenVR::CVRSpatialAnchors*& __cordl_internal_get_m_pVRSpatialAnchors();

  constexpr ::OVR::OpenVR::CVRSystem* const& __cordl_internal_get_m_pVRSystem() const;

  constexpr ::OVR::OpenVR::CVRSystem*& __cordl_internal_get_m_pVRSystem();

  constexpr ::OVR::OpenVR::CVRTrackedCamera* const& __cordl_internal_get_m_pVRTrackedCamera() const;

  constexpr ::OVR::OpenVR::CVRTrackedCamera*& __cordl_internal_get_m_pVRTrackedCamera();

  constexpr void __cordl_internal_set_m_pVRApplications(::OVR::OpenVR::CVRApplications* value);

  constexpr void __cordl_internal_set_m_pVRChaperone(::OVR::OpenVR::CVRChaperone* value);

  constexpr void __cordl_internal_set_m_pVRChaperoneSetup(::OVR::OpenVR::CVRChaperoneSetup* value);

  constexpr void __cordl_internal_set_m_pVRCompositor(::OVR::OpenVR::CVRCompositor* value);

  constexpr void __cordl_internal_set_m_pVRExtendedDisplay(::OVR::OpenVR::CVRExtendedDisplay* value);

  constexpr void __cordl_internal_set_m_pVRInput(::OVR::OpenVR::CVRInput* value);

  constexpr void __cordl_internal_set_m_pVROverlay(::OVR::OpenVR::CVROverlay* value);

  constexpr void __cordl_internal_set_m_pVRRenderModels(::OVR::OpenVR::CVRRenderModels* value);

  constexpr void __cordl_internal_set_m_pVRScreenshots(::OVR::OpenVR::CVRScreenshots* value);

  constexpr void __cordl_internal_set_m_pVRSettings(::OVR::OpenVR::CVRSettings* value);

  constexpr void __cordl_internal_set_m_pVRSpatialAnchors(::OVR::OpenVR::CVRSpatialAnchors* value);

  constexpr void __cordl_internal_set_m_pVRSystem(::OVR::OpenVR::CVRSystem* value);

  constexpr void __cordl_internal_set_m_pVRTrackedCamera(::OVR::OpenVR::CVRTrackedCamera* value);

  /// @brief Method .ctor, addr 0x40762e4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenVR_COpenVRContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenVR_COpenVRContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenVR_COpenVRContext(OpenVR_COpenVRContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenVR_COpenVRContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenVR_COpenVRContext(OpenVR_COpenVRContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9041 };

  /// @brief Field m_pVRSystem, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::CVRSystem* ___m_pVRSystem;

  /// @brief Field m_pVRChaperone, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::CVRChaperone* ___m_pVRChaperone;

  /// @brief Field m_pVRChaperoneSetup, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::CVRChaperoneSetup* ___m_pVRChaperoneSetup;

  /// @brief Field m_pVRCompositor, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::CVRCompositor* ___m_pVRCompositor;

  /// @brief Field m_pVROverlay, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::CVROverlay* ___m_pVROverlay;

  /// @brief Field m_pVRRenderModels, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::CVRRenderModels* ___m_pVRRenderModels;

  /// @brief Field m_pVRExtendedDisplay, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::CVRExtendedDisplay* ___m_pVRExtendedDisplay;

  /// @brief Field m_pVRSettings, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::CVRSettings* ___m_pVRSettings;

  /// @brief Field m_pVRApplications, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::CVRApplications* ___m_pVRApplications;

  /// @brief Field m_pVRScreenshots, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::CVRScreenshots* ___m_pVRScreenshots;

  /// @brief Field m_pVRTrackedCamera, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::CVRTrackedCamera* ___m_pVRTrackedCamera;

  /// @brief Field m_pVRInput, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::CVRInput* ___m_pVRInput;

  /// @brief Field m_pVRSpatialAnchors, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::CVRSpatialAnchors* ___m_pVRSpatialAnchors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::OpenVR_COpenVRContext, ___m_pVRSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::OpenVR_COpenVRContext, ___m_pVRChaperone) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::OpenVR_COpenVRContext, ___m_pVRChaperoneSetup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::OpenVR_COpenVRContext, ___m_pVRCompositor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::OpenVR_COpenVRContext, ___m_pVROverlay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::OpenVR_COpenVRContext, ___m_pVRRenderModels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::OpenVR_COpenVRContext, ___m_pVRExtendedDisplay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::OpenVR_COpenVRContext, ___m_pVRSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::OpenVR_COpenVRContext, ___m_pVRApplications) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::OpenVR_COpenVRContext, ___m_pVRScreenshots) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::OpenVR_COpenVRContext, ___m_pVRTrackedCamera) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::OpenVR_COpenVRContext, ___m_pVRInput) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::OpenVR_COpenVRContext, ___m_pVRSpatialAnchors) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::OpenVR_COpenVRContext, 0x78>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.OpenVR
class CORDL_TYPE OpenVR : public ::System::Object {
public:
  // Declarations
  using COpenVRContext = ::OVR::OpenVR::OpenVR_COpenVRContext;

  /// @brief Field _OpenVRInternal_ModuleContext, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__OpenVRInternal_ModuleContext, put = setStaticF__OpenVRInternal_ModuleContext)) ::OVR::OpenVR::OpenVR_COpenVRContext* _OpenVRInternal_ModuleContext;

  /// @brief Field <VRToken>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__VRToken_k__BackingField, put = setStaticF__VRToken_k__BackingField)) uint32_t _VRToken_k__BackingField;

  /// @brief Method GetGenericInterface, addr 0x40761ac, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetGenericInterface(::StringW pchInterfaceVersion, ::ByRef<::OVR::OpenVR::EVRInitError> peError);

  /// @brief Method GetInitToken, addr 0x40761b4, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t GetInitToken();

  /// @brief Method GetStringForHmdError, addr 0x4076144, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW GetStringForHmdError(::OVR::OpenVR::EVRInitError error);

  /// @brief Method Init, addr 0x4076dd4, size 0x18c, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVRSystem* Init(::ByRef<::OVR::OpenVR::EVRInitError> peError, ::OVR::OpenVR::EVRApplicationType eApplicationType, ::StringW pchStartupInfo);

  /// @brief Method InitInternal, addr 0x4076130, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t InitInternal(::ByRef<::OVR::OpenVR::EVRInitError> peError, ::OVR::OpenVR::EVRApplicationType eApplicationType);

  /// @brief Method InitInternal2, addr 0x4076134, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t InitInternal2(::ByRef<::OVR::OpenVR::EVRInitError> peError, ::OVR::OpenVR::EVRApplicationType eApplicationType, ::StringW pchStartupInfo);

  /// @brief Method IsHmdPresent, addr 0x407613c, size 0x4, virtual false, abstract: false, final false
  static inline bool IsHmdPresent();

  /// @brief Method IsInterfaceVersionValid, addr 0x40761b0, size 0x4, virtual false, abstract: false, final false
  static inline bool IsInterfaceVersionValid(::StringW pchInterfaceVersion);

  /// @brief Method IsRuntimeInstalled, addr 0x4076140, size 0x4, virtual false, abstract: false, final false
  static inline bool IsRuntimeInstalled();

  static inline ::OVR::OpenVR::OpenVR* New_ctor();

  /// @brief Method Shutdown, addr 0x4076f78, size 0x4, virtual false, abstract: false, final false
  static inline void Shutdown();

  /// @brief Method ShutdownInternal, addr 0x4076138, size 0x4, virtual false, abstract: false, final false
  static inline void ShutdownInternal();

  /// @brief Method .ctor, addr 0x4076f7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::OVR::OpenVR::OpenVR_COpenVRContext* getStaticF__OpenVRInternal_ModuleContext();

  static inline uint32_t getStaticF__VRToken_k__BackingField();

  /// @brief Method get_Applications, addr 0x40769b0, size 0x18, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVRApplications* get_Applications();

  /// @brief Method get_Chaperone, addr 0x40763e4, size 0x18, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVRChaperone* get_Chaperone();

  /// @brief Method get_ChaperoneSetup, addr 0x40764b8, size 0x18, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVRChaperoneSetup* get_ChaperoneSetup();

  /// @brief Method get_Compositor, addr 0x407658c, size 0x18, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVRCompositor* get_Compositor();

  /// @brief Method get_ExtendedDisplay, addr 0x4076808, size 0x18, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVRExtendedDisplay* get_ExtendedDisplay();

  /// @brief Method get_Input, addr 0x4076c2c, size 0x18, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVRInput* get_Input();

  /// @brief Method get_OpenVRInternal_ModuleContext, addr 0x407624c, size 0x98, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::OpenVR_COpenVRContext* get_OpenVRInternal_ModuleContext();

  /// @brief Method get_Overlay, addr 0x4076660, size 0x18, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVROverlay* get_Overlay();

  /// @brief Method get_RenderModels, addr 0x4076734, size 0x18, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVRRenderModels* get_RenderModels();

  /// @brief Method get_Screenshots, addr 0x4076a84, size 0x18, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVRScreenshots* get_Screenshots();

  /// @brief Method get_Settings, addr 0x40768dc, size 0x18, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVRSettings* get_Settings();

  /// @brief Method get_SpatialAnchors, addr 0x4076d00, size 0x18, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVRSpatialAnchors* get_SpatialAnchors();

  /// @brief Method get_System, addr 0x4076310, size 0x18, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVRSystem* get_System();

  /// @brief Method get_TrackedCamera, addr 0x4076b58, size 0x18, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::CVRTrackedCamera* get_TrackedCamera();

  /// @brief Method get_VRToken, addr 0x40761b8, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t get_VRToken();

  static inline void setStaticF__OpenVRInternal_ModuleContext(::OVR::OpenVR::OpenVR_COpenVRContext* value);

  static inline void setStaticF__VRToken_k__BackingField(uint32_t value);

  /// @brief Method set_VRToken, addr 0x4076200, size 0x4c, virtual false, abstract: false, final false
  static inline void set_VRToken(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenVR();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenVR", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenVR(OpenVR&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenVR", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenVR(OpenVR const&) = delete;

  /// @brief Field FnTable_Prefix offset 0xffffffff size 0x8
  static constexpr ::ConstString FnTable_Prefix{ u"FnTable:" };

  /// @brief Field IVRApplications_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRApplications_Version{ u"IVRApplications_006" };

  /// @brief Field IVRChaperoneSetup_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRChaperoneSetup_Version{ u"IVRChaperoneSetup_005" };

  /// @brief Field IVRChaperone_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRChaperone_Version{ u"IVRChaperone_003" };

  /// @brief Field IVRCompositor_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRCompositor_Version{ u"IVRCompositor_022" };

  /// @brief Field IVRDriverManager_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRDriverManager_Version{ u"IVRDriverManager_001" };

  /// @brief Field IVRExtendedDisplay_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRExtendedDisplay_Version{ u"IVRExtendedDisplay_001" };

  /// @brief Field IVRIOBuffer_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRIOBuffer_Version{ u"IVRIOBuffer_001" };

  /// @brief Field IVRInput_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRInput_Version{ u"IVRInput_004" };

  /// @brief Field IVRNotifications_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRNotifications_Version{ u"IVRNotifications_002" };

  /// @brief Field IVROverlay_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVROverlay_Version{ u"IVROverlay_018" };

  /// @brief Field IVRRenderModels_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRRenderModels_Version{ u"IVRRenderModels_006" };

  /// @brief Field IVRResources_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRResources_Version{ u"IVRResources_001" };

  /// @brief Field IVRScreenshots_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRScreenshots_Version{ u"IVRScreenshots_001" };

  /// @brief Field IVRSettings_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRSettings_Version{ u"IVRSettings_002" };

  /// @brief Field IVRSpatialAnchors_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRSpatialAnchors_Version{ u"IVRSpatialAnchors_001" };

  /// @brief Field IVRSystem_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRSystem_Version{ u"IVRSystem_019" };

  /// @brief Field IVRTrackedCamera_Version offset 0xffffffff size 0x8
  static constexpr ::ConstString IVRTrackedCamera_Version{ u"IVRTrackedCamera_003" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9042 };

  /// @brief Field k_nDriverNone offset 0xffffffff size 0x4
  static constexpr uint32_t k_nDriverNone{ static_cast<uint32_t>(0x8000c0ffu) };

  /// @brief Field k_pch_App_ActionManifestURL_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_App_ActionManifestURL_String{ u"ActionManifestURL" };

  /// @brief Field k_pch_App_BindingAutosaveURLSuffix_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_App_BindingAutosaveURLSuffix_String{ u"AutosaveURL" };

  /// @brief Field k_pch_App_BindingCurrentURLSuffix_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_App_BindingCurrentURLSuffix_String{ u"CurrentURL" };

  /// @brief Field k_pch_App_NeedToUpdateAutosaveSuffix_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_App_NeedToUpdateAutosaveSuffix_Bool{ u"NeedToUpdateAutosave" };

  /// @brief Field k_pch_Camera_BoundsColorGammaA_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Camera_BoundsColorGammaA_Int32{ u"cameraBoundsColorGammaA" };

  /// @brief Field k_pch_Camera_BoundsColorGammaB_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Camera_BoundsColorGammaB_Int32{ u"cameraBoundsColorGammaB" };

  /// @brief Field k_pch_Camera_BoundsColorGammaG_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Camera_BoundsColorGammaG_Int32{ u"cameraBoundsColorGammaG" };

  /// @brief Field k_pch_Camera_BoundsColorGammaR_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Camera_BoundsColorGammaR_Int32{ u"cameraBoundsColorGammaR" };

  /// @brief Field k_pch_Camera_BoundsStrength_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Camera_BoundsStrength_Int32{ u"cameraBoundsStrength" };

  /// @brief Field k_pch_Camera_EnableCameraForCollisionBounds_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Camera_EnableCameraForCollisionBounds_Bool{ u"enableCameraForCollisionBounds" };

  /// @brief Field k_pch_Camera_EnableCameraForRoomView_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Camera_EnableCameraForRoomView_Bool{ u"enableCameraForRoomView" };

  /// @brief Field k_pch_Camera_EnableCameraInDashboard_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Camera_EnableCameraInDashboard_Bool{ u"enableCameraInDashboard" };

  /// @brief Field k_pch_Camera_EnableCamera_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Camera_EnableCamera_Bool{ u"enableCamera" };

  /// @brief Field k_pch_Camera_RoomViewMode_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Camera_RoomViewMode_Int32{ u"cameraRoomViewMode" };

  /// @brief Field k_pch_Camera_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Camera_Section{ u"camera" };

  /// @brief Field k_pch_CollisionBounds_CenterMarkerOn_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_CollisionBounds_CenterMarkerOn_Bool{ u"CollisionBoundsCenterMarkerOn" };

  /// @brief Field k_pch_CollisionBounds_ColorGammaA_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_CollisionBounds_ColorGammaA_Int32{ u"CollisionBoundsColorGammaA" };

  /// @brief Field k_pch_CollisionBounds_ColorGammaB_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_CollisionBounds_ColorGammaB_Int32{ u"CollisionBoundsColorGammaB" };

  /// @brief Field k_pch_CollisionBounds_ColorGammaG_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_CollisionBounds_ColorGammaG_Int32{ u"CollisionBoundsColorGammaG" };

  /// @brief Field k_pch_CollisionBounds_ColorGammaR_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_CollisionBounds_ColorGammaR_Int32{ u"CollisionBoundsColorGammaR" };

  /// @brief Field k_pch_CollisionBounds_FadeDistance_Float offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_CollisionBounds_FadeDistance_Float{ u"CollisionBoundsFadeDistance" };

  /// @brief Field k_pch_CollisionBounds_GroundPerimeterOn_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_CollisionBounds_GroundPerimeterOn_Bool{ u"CollisionBoundsGroundPerimeterOn" };

  /// @brief Field k_pch_CollisionBounds_PlaySpaceOn_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_CollisionBounds_PlaySpaceOn_Bool{ u"CollisionBoundsPlaySpaceOn" };

  /// @brief Field k_pch_CollisionBounds_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_CollisionBounds_Section{ u"collisionBounds" };

  /// @brief Field k_pch_CollisionBounds_Style_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_CollisionBounds_Style_Int32{ u"CollisionBoundsStyle" };

  /// @brief Field k_pch_Controller_Component_Base offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Controller_Component_Base{ u"base" };

  /// @brief Field k_pch_Controller_Component_GDC2015 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Controller_Component_GDC2015{ u"gdc2015" };

  /// @brief Field k_pch_Controller_Component_HandGrip offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Controller_Component_HandGrip{ u"handgrip" };

  /// @brief Field k_pch_Controller_Component_Status offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Controller_Component_Status{ u"status" };

  /// @brief Field k_pch_Controller_Component_Tip offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Controller_Component_Tip{ u"tip" };

  /// @brief Field k_pch_Dashboard_ArcadeMode_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Dashboard_ArcadeMode_Bool{ u"arcadeMode" };

  /// @brief Field k_pch_Dashboard_EnableDashboard_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Dashboard_EnableDashboard_Bool{ u"enableDashboard" };

  /// @brief Field k_pch_Dashboard_EnableWebUI offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Dashboard_EnableWebUI{ u"webUI" };

  /// @brief Field k_pch_Dashboard_EnableWebUIDashboardReplacement offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Dashboard_EnableWebUIDashboardReplacement{ u"webUIDashboard" };

  /// @brief Field k_pch_Dashboard_EnableWebUIDevTools offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Dashboard_EnableWebUIDevTools{ u"webUIDevTools" };

  /// @brief Field k_pch_Dashboard_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Dashboard_Section{ u"dashboard" };

  /// @brief Field k_pch_Driver_Enable_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Driver_Enable_Bool{ u"enable" };

  /// @brief Field k_pch_Keyboard_OffsetLeftX offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Keyboard_OffsetLeftX{ u"OffsetLeftX" };

  /// @brief Field k_pch_Keyboard_OffsetRightX offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Keyboard_OffsetRightX{ u"OffsetRightX" };

  /// @brief Field k_pch_Keyboard_OffsetY offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Keyboard_OffsetY{ u"OffsetY" };

  /// @brief Field k_pch_Keyboard_ScaleX offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Keyboard_ScaleX{ u"ScaleX" };

  /// @brief Field k_pch_Keyboard_ScaleY offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Keyboard_ScaleY{ u"ScaleY" };

  /// @brief Field k_pch_Keyboard_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Keyboard_Section{ u"keyboard" };

  /// @brief Field k_pch_Keyboard_Smoothing offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Keyboard_Smoothing{ u"Smoothing" };

  /// @brief Field k_pch_Keyboard_TutorialCompletions offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Keyboard_TutorialCompletions{ u"TutorialCompletions" };

  /// @brief Field k_pch_Lighthouse_DBHistory_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Lighthouse_DBHistory_Bool{ u"dbhistory" };

  /// @brief Field k_pch_Lighthouse_DisableIMUExceptHMD_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Lighthouse_DisableIMUExceptHMD_Bool{ u"disableimuexcepthmd" };

  /// @brief Field k_pch_Lighthouse_DisableIMU_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Lighthouse_DisableIMU_Bool{ u"disableimu" };

  /// @brief Field k_pch_Lighthouse_DisambiguationDebug_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Lighthouse_DisambiguationDebug_Int32{ u"disambiguationdebug" };

  /// @brief Field k_pch_Lighthouse_EnableBluetooth_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Lighthouse_EnableBluetooth_Bool{ u"enableBluetooth" };

  /// @brief Field k_pch_Lighthouse_PowerManagedBaseStations_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Lighthouse_PowerManagedBaseStations_String{ u"PowerManagedBaseStations" };

  /// @brief Field k_pch_Lighthouse_PrimaryBasestation_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Lighthouse_PrimaryBasestation_Int32{ u"primarybasestation" };

  /// @brief Field k_pch_Lighthouse_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Lighthouse_Section{ u"driver_lighthouse" };

  /// @brief Field k_pch_Lighthouse_UseDisambiguation_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Lighthouse_UseDisambiguation_String{ u"usedisambiguation" };

  /// @brief Field k_pch_MimeType_GameTheater offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_MimeType_GameTheater{ u"vr/game_theater" };

  /// @brief Field k_pch_MimeType_HomeApp offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_MimeType_HomeApp{ u"vr/home" };

  /// @brief Field k_pch_Notifications_DoNotDisturb_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Notifications_DoNotDisturb_Bool{ u"DoNotDisturb" };

  /// @brief Field k_pch_Notifications_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Notifications_Section{ u"notifications" };

  /// @brief Field k_pch_Null_DisplayFrequency_Float offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Null_DisplayFrequency_Float{ u"displayFrequency" };

  /// @brief Field k_pch_Null_ModelNumber_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Null_ModelNumber_String{ u"modelNumber" };

  /// @brief Field k_pch_Null_RenderHeight_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Null_RenderHeight_Int32{ u"renderHeight" };

  /// @brief Field k_pch_Null_RenderWidth_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Null_RenderWidth_Int32{ u"renderWidth" };

  /// @brief Field k_pch_Null_SecondsFromVsyncToPhotons_Float offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Null_SecondsFromVsyncToPhotons_Float{ u"secondsFromVsyncToPhotons" };

  /// @brief Field k_pch_Null_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Null_Section{ u"driver_null" };

  /// @brief Field k_pch_Null_SerialNumber_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Null_SerialNumber_String{ u"serialNumber" };

  /// @brief Field k_pch_Null_WindowHeight_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Null_WindowHeight_Int32{ u"windowHeight" };

  /// @brief Field k_pch_Null_WindowWidth_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Null_WindowWidth_Int32{ u"windowWidth" };

  /// @brief Field k_pch_Null_WindowX_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Null_WindowX_Int32{ u"windowX" };

  /// @brief Field k_pch_Null_WindowY_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Null_WindowY_Int32{ u"windowY" };

  /// @brief Field k_pch_Perf_AllowTimingStore_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Perf_AllowTimingStore_Bool{ u"allowTimingStore" };

  /// @brief Field k_pch_Perf_HeuristicActive_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Perf_HeuristicActive_Bool{ u"heuristicActive" };

  /// @brief Field k_pch_Perf_LinuxGPUProfiling_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Perf_LinuxGPUProfiling_Bool{ u"linuxGPUProfiling" };

  /// @brief Field k_pch_Perf_NotifyInHMD_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Perf_NotifyInHMD_Bool{ u"warnInHMD" };

  /// @brief Field k_pch_Perf_NotifyOnlyOnce_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Perf_NotifyOnlyOnce_Bool{ u"warnOnlyOnce" };

  /// @brief Field k_pch_Perf_SaveTimingsOnExit_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Perf_SaveTimingsOnExit_Bool{ u"saveTimingsOnExit" };

  /// @brief Field k_pch_Perf_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Perf_Section{ u"perfcheck" };

  /// @brief Field k_pch_Perf_TestData_Float offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Perf_TestData_Float{ u"perfTestData" };

  /// @brief Field k_pch_Power_AutoLaunchSteamVROnButtonPress offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Power_AutoLaunchSteamVROnButtonPress{ u"autoLaunchSteamVROnButtonPress" };

  /// @brief Field k_pch_Power_PauseCompositorOnStandby_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Power_PauseCompositorOnStandby_Bool{ u"pauseCompositorOnStandby" };

  /// @brief Field k_pch_Power_PowerOffOnExit_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Power_PowerOffOnExit_Bool{ u"powerOffOnExit" };

  /// @brief Field k_pch_Power_ReturnToWatchdogTimeout_Float offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Power_ReturnToWatchdogTimeout_Float{ u"returnToWatchdogTimeout" };

  /// @brief Field k_pch_Power_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Power_Section{ u"power" };

  /// @brief Field k_pch_Power_TurnOffControllersTimeout_Float offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Power_TurnOffControllersTimeout_Float{ u"turnOffControllersTimeout" };

  /// @brief Field k_pch_Power_TurnOffScreensTimeout_Float offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Power_TurnOffScreensTimeout_Float{ u"turnOffScreensTimeout" };

  /// @brief Field k_pch_SteamVR_ActivateMultipleDrivers_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_ActivateMultipleDrivers_Bool{ u"activateMultipleDrivers" };

  /// @brief Field k_pch_SteamVR_AllowAsyncReprojection_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_AllowAsyncReprojection_Bool{ u"allowAsyncReprojection" };

  /// @brief Field k_pch_SteamVR_AllowDisplayLockedMode_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_AllowDisplayLockedMode_Bool{ u"allowDisplayLockedMode" };

  /// @brief Field k_pch_SteamVR_AllowReprojection_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_AllowReprojection_Bool{ u"allowInterleavedReprojection" };

  /// @brief Field k_pch_SteamVR_AllowSupersampleFiltering_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_AllowSupersampleFiltering_Bool{ u"allowSupersampleFiltering" };

  /// @brief Field k_pch_SteamVR_BackgroundCameraHeight_Float offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_BackgroundCameraHeight_Float{ u"backgroundCameraHeight" };

  /// @brief Field k_pch_SteamVR_BackgroundDomeRadius_Float offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_BackgroundDomeRadius_Float{ u"backgroundDomeRadius" };

  /// @brief Field k_pch_SteamVR_BackgroundUseDomeProjection_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_BackgroundUseDomeProjection_Bool{ u"backgroundUseDomeProjection" };

  /// @brief Field k_pch_SteamVR_Background_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_Background_String{ u"background" };

  /// @brief Field k_pch_SteamVR_BaseStationPowerManagement_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_BaseStationPowerManagement_Bool{ u"basestationPowerManagement" };

  /// @brief Field k_pch_SteamVR_CycleBackgroundImageTimeSec_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_CycleBackgroundImageTimeSec_Int32{ u"CycleBackgroundImageTimeSec" };

  /// @brief Field k_pch_SteamVR_DebugInput offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_DebugInput{ u"debugInput" };

  /// @brief Field k_pch_SteamVR_DebugInputBinding offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_DebugInputBinding{ u"debugInputBinding" };

  /// @brief Field k_pch_SteamVR_DebugProcessPipe_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_DebugProcessPipe_String{ u"debugProcessPipe" };

  /// @brief Field k_pch_SteamVR_DefaultMirrorView_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_DefaultMirrorView_Int32{ u"defaultMirrorView" };

  /// @brief Field k_pch_SteamVR_DirectModeEdidPid_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_DirectModeEdidPid_Int32{ u"directModeEdidPid" };

  /// @brief Field k_pch_SteamVR_DirectModeEdidVid_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_DirectModeEdidVid_Int32{ u"directModeEdidVid" };

  /// @brief Field k_pch_SteamVR_DirectMode_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_DirectMode_Bool{ u"directMode" };

  /// @brief Field k_pch_SteamVR_DisplayDebugX_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_DisplayDebugX_Int32{ u"displayDebugX" };

  /// @brief Field k_pch_SteamVR_DisplayDebugY_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_DisplayDebugY_Int32{ u"displayDebugY" };

  /// @brief Field k_pch_SteamVR_DisplayDebug_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_DisplayDebug_Bool{ u"displayDebug" };

  /// @brief Field k_pch_SteamVR_EnableHomeApp offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_EnableHomeApp{ u"enableHomeApp" };

  /// @brief Field k_pch_SteamVR_EnableLinuxVulkanAsync_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_EnableLinuxVulkanAsync_Bool{ u"enableLinuxVulkanAsync" };

  /// @brief Field k_pch_SteamVR_ForceFadeOnBadTracking_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_ForceFadeOnBadTracking_Bool{ u"forceFadeOnBadTracking" };

  /// @brief Field k_pch_SteamVR_ForceReprojection_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_ForceReprojection_Bool{ u"forceReprojection" };

  /// @brief Field k_pch_SteamVR_ForceWindows32bitVRMonitor offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_ForceWindows32bitVRMonitor{ u"forceWindows32BitVRMonitor" };

  /// @brief Field k_pch_SteamVR_ForcedDriverKey_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_ForcedDriverKey_String{ u"forcedDriver" };

  /// @brief Field k_pch_SteamVR_ForcedHmdKey_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_ForcedHmdKey_String{ u"forcedHmd" };

  /// @brief Field k_pch_SteamVR_GridColor_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_GridColor_String{ u"gridColor" };

  /// @brief Field k_pch_SteamVR_HaveStartedTutorialForNativeChaperoneDriver_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_HaveStartedTutorialForNativeChaperoneDriver_Bool{ u"haveStartedTutorialForNativeChaperoneDriver" };

  /// @brief Field k_pch_SteamVR_IPD_Float offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_IPD_Float{ u"ipd" };

  /// @brief Field k_pch_SteamVR_InputBindingUIBlock offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_InputBindingUIBlock{ u"inputBindingUI" };

  /// @brief Field k_pch_SteamVR_IpdOffset_Float offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_IpdOffset_Float{ u"ipdOffset" };

  /// @brief Field k_pch_SteamVR_LegacyInputRebinding offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_LegacyInputRebinding{ u"legacyInputRebinding" };

  /// @brief Field k_pch_SteamVR_LogLevel_Int32 offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_LogLevel_Int32{ u"loglevel" };

  /// @brief Field k_pch_SteamVR_MirrorViewGeometry_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_MirrorViewGeometry_String{ u"mirrorViewGeometry" };

  /// @brief Field k_pch_SteamVR_NeverKillProcesses_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_NeverKillProcesses_Bool{ u"neverKillProcesses" };

  /// @brief Field k_pch_SteamVR_PlayAreaColor_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_PlayAreaColor_String{ u"playAreaColor" };

  /// @brief Field k_pch_SteamVR_RenderCameraMode offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_RenderCameraMode{ u"renderCameraMode" };

  /// @brief Field k_pch_SteamVR_RequireHmd_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_RequireHmd_String{ u"requireHmd" };

  /// @brief Field k_pch_SteamVR_RetailDemo_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_RetailDemo_Bool{ u"retailDemo" };

  /// @brief Field k_pch_SteamVR_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_Section{ u"steamvr" };

  /// @brief Field k_pch_SteamVR_SendSystemButtonToAllApps_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_SendSystemButtonToAllApps_Bool{ u"sendSystemButtonToAllApps" };

  /// @brief Field k_pch_SteamVR_ShowMirrorView_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_ShowMirrorView_Bool{ u"showMirrorView" };

  /// @brief Field k_pch_SteamVR_ShowStage_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_ShowStage_Bool{ u"showStage" };

  /// @brief Field k_pch_SteamVR_SpeakersForwardYawOffsetDegrees_Float offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_SpeakersForwardYawOffsetDegrees_Float{ u"speakersForwardYawOffsetDegrees" };

  /// @brief Field k_pch_SteamVR_StartCompositorFromAppLaunch_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_StartCompositorFromAppLaunch_Bool{ u"startCompositorFromAppLaunch" };

  /// @brief Field k_pch_SteamVR_StartDashboardFromAppLaunch_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_StartDashboardFromAppLaunch_Bool{ u"startDashboardFromAppLaunch" };

  /// @brief Field k_pch_SteamVR_StartMonitorFromAppLaunch offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_StartMonitorFromAppLaunch{ u"startMonitorFromAppLaunch" };

  /// @brief Field k_pch_SteamVR_StartOverlayAppsFromDashboard_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_StartOverlayAppsFromDashboard_Bool{ u"startOverlayAppsFromDashboard" };

  /// @brief Field k_pch_SteamVR_SupersampleManualOverride_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_SupersampleManualOverride_Bool{ u"supersampleManualOverride" };

  /// @brief Field k_pch_SteamVR_SupersampleScale_Float offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_SupersampleScale_Float{ u"supersampleScale" };

  /// @brief Field k_pch_SteamVR_UsingSpeakers_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_SteamVR_UsingSpeakers_Bool{ u"usingSpeakers" };

  /// @brief Field k_pch_Trackers_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_Trackers_Section{ u"trackers" };

  /// @brief Field k_pch_TrackingOverride_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_TrackingOverride_Section{ u"TrackingOverrides" };

  /// @brief Field k_pch_UserInterface_MinimizeToTray_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_UserInterface_MinimizeToTray_Bool{ u"MinimizeToTray" };

  /// @brief Field k_pch_UserInterface_ScreenshotType_Int offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_UserInterface_ScreenshotType_Int{ u"screenshotType" };

  /// @brief Field k_pch_UserInterface_Screenshots_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_UserInterface_Screenshots_Bool{ u"screenshots" };

  /// @brief Field k_pch_UserInterface_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_UserInterface_Section{ u"userinterface" };

  /// @brief Field k_pch_UserInterface_StatusAlwaysOnTop_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_UserInterface_StatusAlwaysOnTop_Bool{ u"StatusAlwaysOnTop" };

  /// @brief Field k_pch_WebInterface_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_WebInterface_Section{ u"WebInterface" };

  /// @brief Field k_pch_WebInterface_WebEnable_Bool offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_WebInterface_WebEnable_Bool{ u"WebEnable" };

  /// @brief Field k_pch_WebInterface_WebPort_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_WebInterface_WebPort_String{ u"WebPort" };

  /// @brief Field k_pch_audio_OffPlaybackDevice_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_audio_OffPlaybackDevice_String{ u"offPlaybackDevice" };

  /// @brief Field k_pch_audio_OffRecordDevice_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_audio_OffRecordDevice_String{ u"offRecordDevice" };

  /// @brief Field k_pch_audio_OnPlaybackDevice_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_audio_OnPlaybackDevice_String{ u"onPlaybackDevice" };

  /// @brief Field k_pch_audio_OnPlaybackMirrorDevice_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_audio_OnPlaybackMirrorDevice_String{ u"onPlaybackMirrorDevice" };

  /// @brief Field k_pch_audio_OnRecordDevice_String offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_audio_OnRecordDevice_String{ u"onRecordDevice" };

  /// @brief Field k_pch_audio_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_audio_Section{ u"audio" };

  /// @brief Field k_pch_audio_VIVEHDMIGain offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_audio_VIVEHDMIGain{ u"viveHDMIGain" };

  /// @brief Field k_pch_modelskin_Section offset 0xffffffff size 0x8
  static constexpr ::ConstString k_pch_modelskin_Section{ u"modelskins" };

  /// @brief Field k_ulInvalidActionHandle offset 0xffffffff size 0x8
  static constexpr uint64_t k_ulInvalidActionHandle{ static_cast<uint64_t>(0x0u) };

  /// @brief Field k_ulInvalidActionSetHandle offset 0xffffffff size 0x8
  static constexpr uint64_t k_ulInvalidActionSetHandle{ static_cast<uint64_t>(0x0u) };

  /// @brief Field k_ulInvalidDriverHandle offset 0xffffffff size 0x8
  static constexpr uint64_t k_ulInvalidDriverHandle{ static_cast<uint64_t>(0x0u) };

  /// @brief Field k_ulInvalidIOBufferHandle offset 0xffffffff size 0x8
  static constexpr uint64_t k_ulInvalidIOBufferHandle{ static_cast<uint64_t>(0x0u) };

  /// @brief Field k_ulInvalidInputValueHandle offset 0xffffffff size 0x8
  static constexpr uint64_t k_ulInvalidInputValueHandle{ static_cast<uint64_t>(0x0u) };

  /// @brief Field k_ulInvalidPropertyContainer offset 0xffffffff size 0x8
  static constexpr uint64_t k_ulInvalidPropertyContainer{ static_cast<uint64_t>(0x0u) };

  /// @brief Field k_ulInvalidSpatialAnchorHandle offset 0xffffffff size 0x4
  static constexpr uint32_t k_ulInvalidSpatialAnchorHandle{ static_cast<uint32_t>(0x56492a00u) };

  /// @brief Field k_ulOverlayHandleInvalid offset 0xffffffff size 0x8
  static constexpr uint64_t k_ulOverlayHandleInvalid{ static_cast<uint64_t>(0x0u) };

  /// @brief Field k_unActionPropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unActionPropertyTag{ static_cast<uint32_t>(0x23222120u) };

  /// @brief Field k_unBoolPropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unBoolPropertyTag{ static_cast<uint32_t>(0x15140504u) };

  /// @brief Field k_unControllerStateAxisCount offset 0xffffffff size 0x4
  static constexpr uint32_t k_unControllerStateAxisCount{ static_cast<uint32_t>(0x5u) };

  /// @brief Field k_unFloatPropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unFloatPropertyTag{ static_cast<uint32_t>(0x4030201u) };

  /// @brief Field k_unHapticVibrationPropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unHapticVibrationPropertyTag{ static_cast<uint32_t>(0x83282423u) };

  /// @brief Field k_unHiddenAreaPropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unHiddenAreaPropertyTag{ static_cast<uint32_t>(0x21201f1eu) };

  /// @brief Field k_unHmdMatrix34PropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unHmdMatrix34PropertyTag{ static_cast<uint32_t>(0x17161514u) };

  /// @brief Field k_unHmdMatrix44PropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unHmdMatrix44PropertyTag{ static_cast<uint32_t>(0x1e171615u) };

  /// @brief Field k_unHmdVector3PropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unHmdVector3PropertyTag{ static_cast<uint32_t>(0x1f1e1716u) };

  /// @brief Field k_unHmdVector4PropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unHmdVector4PropertyTag{ static_cast<uint32_t>(0x201f1e17u) };

  /// @brief Field k_unInputValuePropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unInputValuePropertyTag{ static_cast<uint32_t>(0x24232221u) };

  /// @brief Field k_unInt32PropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unInt32PropertyTag{ static_cast<uint32_t>(0x5040302u) };

  /// @brief Field k_unInvalidPropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unInvalidPropertyTag{ static_cast<uint32_t>(0x0u) };

  /// @brief Field k_unMaxActionNameLength offset 0xffffffff size 0x4
  static constexpr uint32_t k_unMaxActionNameLength{ static_cast<uint32_t>(0x18104040u) };

  /// @brief Field k_unMaxActionOriginCount offset 0xffffffff size 0x4
  static constexpr uint32_t k_unMaxActionOriginCount{ static_cast<uint32_t>(0x56491810u) };

  /// @brief Field k_unMaxActionSetNameLength offset 0xffffffff size 0x4
  static constexpr uint32_t k_unMaxActionSetNameLength{ static_cast<uint32_t>(0x49181040u) };

  /// @brief Field k_unMaxApplicationKeyLength offset 0xffffffff size 0x4
  static constexpr uint32_t k_unMaxApplicationKeyLength{ static_cast<uint32_t>(0x760e8080u) };

  /// @brief Field k_unMaxDriverDebugResponseSize offset 0xffffffff size 0x4
  static constexpr uint32_t k_unMaxDriverDebugResponseSize{ static_cast<uint32_t>(0x8000c0u) };

  /// @brief Field k_unMaxOverlayCount offset 0xffffffff size 0x4
  static constexpr uint32_t k_unMaxOverlayCount{ static_cast<uint32_t>(0x491c2040u) };

  /// @brief Field k_unMaxOverlayIntersectionMaskPrimitivesCount offset 0xffffffff size 0x4
  static constexpr uint32_t k_unMaxOverlayIntersectionMaskPrimitivesCount{ static_cast<uint32_t>(0x56491c20u) };

  /// @brief Field k_unMaxPropertyStringSize offset 0xffffffff size 0x4
  static constexpr uint32_t k_unMaxPropertyStringSize{ static_cast<uint32_t>(0x8000c0u) };

  /// @brief Field k_unMaxSettingsKeyLength offset 0xffffffff size 0x4
  static constexpr uint32_t k_unMaxSettingsKeyLength{ static_cast<uint32_t>(0x491e8080u) };

  /// @brief Field k_unMaxTrackedDeviceCount offset 0xffffffff size 0x4
  static constexpr uint32_t k_unMaxTrackedDeviceCount{ static_cast<uint32_t>(0xfffe40u) };

  /// @brief Field k_unNotificationTextMaxSize offset 0xffffffff size 0x4
  static constexpr uint32_t k_unNotificationTextMaxSize{ static_cast<uint32_t>(0x49280081u) };

  /// @brief Field k_unOpenVRInternalReserved_End offset 0xffffffff size 0x4
  static constexpr uint32_t k_unOpenVRInternalReserved_End{ static_cast<uint32_t>(0xc010a7u) };

  /// @brief Field k_unOpenVRInternalReserved_Start offset 0xffffffff size 0x4
  static constexpr uint32_t k_unOpenVRInternalReserved_Start{ static_cast<uint32_t>(0x10a7e883u) };

  /// @brief Field k_unPathHandleInfoTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unPathHandleInfoTag{ static_cast<uint32_t>(0x2221201fu) };

  /// @brief Field k_unScreenshotHandleInvalid offset 0xffffffff size 0x4
  static constexpr uint32_t k_unScreenshotHandleInvalid{ static_cast<uint32_t>(0x56491a00u) };

  /// @brief Field k_unSkeletonPropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unSkeletonPropertyTag{ static_cast<uint32_t>(0xe8832824u) };

  /// @brief Field k_unSpatialAnchorPosePropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unSpatialAnchorPosePropertyTag{ static_cast<uint32_t>(0xa7e88328u) };

  /// @brief Field k_unStringPropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unStringPropertyTag{ static_cast<uint32_t>(0x16151405u) };

  /// @brief Field k_unTrackedDeviceIndexInvalid offset 0xffffffff size 0x4
  static constexpr uint32_t k_unTrackedDeviceIndexInvalid{ static_cast<uint32_t>(0xffu) };

  /// @brief Field k_unTrackedDeviceIndexOther offset 0xffffffff size 0x4
  static constexpr uint32_t k_unTrackedDeviceIndexOther{ static_cast<uint32_t>(0xfffeu) };

  /// @brief Field k_unTrackedDeviceIndex_Hmd offset 0xffffffff size 0x4
  static constexpr uint32_t k_unTrackedDeviceIndex_Hmd{ static_cast<uint32_t>(0xfffe4000u) };

  /// @brief Field k_unUint64PropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unUint64PropertyTag{ static_cast<uint32_t>(0x14050403u) };

  /// @brief Field k_unVROverlayMaxKeyLength offset 0xffffffff size 0x4
  static constexpr uint32_t k_unVROverlayMaxKeyLength{ static_cast<uint32_t>(0x80808080u) };

  /// @brief Field k_unVROverlayMaxNameLength offset 0xffffffff size 0x4
  static constexpr uint32_t k_unVROverlayMaxNameLength{ static_cast<uint32_t>(0x20408080u) };

  /// @brief Field k_unWildcardPropertyTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_unWildcardPropertyTag{ static_cast<uint32_t>(0x28242322u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::OpenVR, 0x10>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::OpenVR);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::OpenVR*, "OVR.OpenVR", "OpenVR");
NEED_NO_BOX(::OVR::OpenVR::OpenVR_COpenVRContext);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::OpenVR_COpenVRContext*, "OVR.OpenVR", "OpenVR/COpenVRContext");

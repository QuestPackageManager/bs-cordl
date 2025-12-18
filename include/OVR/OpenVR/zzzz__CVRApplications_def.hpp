#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRApplications.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRApplications_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRApplications)
namespace OVR::OpenVR {
struct AppOverrideKeys_t;
}
namespace OVR::OpenVR {
struct EVRApplicationError;
}
namespace OVR::OpenVR {
struct EVRApplicationProperty;
}
namespace OVR::OpenVR {
struct EVRApplicationTransitionState;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRApplications;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRApplications);
// Dependencies OVR.OpenVR.IVRApplications, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRApplications
class CORDL_TYPE CVRApplications : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0xf8
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRApplications FnTable;

  /// @brief Method AddApplicationManifest, addr 0x5c95e2c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError AddApplicationManifest(::StringW pchApplicationManifestFullPath, bool bTemporary);

  /// @brief Method CancelApplicationLaunch, addr 0x5c95f7c, size 0x20, virtual false, abstract: false, final false
  inline bool CancelApplicationLaunch(::StringW pchAppKey);

  /// @brief Method GetApplicationAutoLaunch, addr 0x5c960ec, size 0x20, virtual false, abstract: false, final false
  inline bool GetApplicationAutoLaunch(::StringW pchAppKey);

  /// @brief Method GetApplicationCount, addr 0x5c95e90, size 0x20, virtual false, abstract: false, final false
  inline uint32_t GetApplicationCount();

  /// @brief Method GetApplicationKeyByIndex, addr 0x5c95eb0, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError GetApplicationKeyByIndex(uint32_t unApplicationIndex, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  /// @brief Method GetApplicationKeyByProcessId, addr 0x5c95ed0, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError GetApplicationKeyByProcessId(uint32_t unProcessId, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  /// @brief Method GetApplicationLaunchArguments, addr 0x5c9618c, size 0x20, virtual false, abstract: false, final false
  inline uint32_t GetApplicationLaunchArguments(uint32_t unHandle, ::System::Text::StringBuilder* pchArgs, uint32_t unArgs);

  /// @brief Method GetApplicationProcessId, addr 0x5c95fbc, size 0x20, virtual false, abstract: false, final false
  inline uint32_t GetApplicationProcessId(::StringW pchAppKey);

  /// @brief Method GetApplicationPropertyBool, addr 0x5c96088, size 0x20, virtual false, abstract: false, final false
  inline bool GetApplicationPropertyBool(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::ByRef<::OVR::OpenVR::EVRApplicationError> peError);

  /// @brief Method GetApplicationPropertyString, addr 0x5c96068, size 0x20, virtual false, abstract: false, final false
  inline uint32_t GetApplicationPropertyString(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::System::Text::StringBuilder* pchPropertyValueBuffer,
                                               uint32_t unPropertyValueBufferLen, ::ByRef<::OVR::OpenVR::EVRApplicationError> peError);

  /// @brief Method GetApplicationPropertyUint64, addr 0x5c960a8, size 0x20, virtual false, abstract: false, final false
  inline uint64_t GetApplicationPropertyUint64(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::ByRef<::OVR::OpenVR::EVRApplicationError> peError);

  /// @brief Method GetApplicationSupportedMimeTypes, addr 0x5c9614c, size 0x20, virtual false, abstract: false, final false
  inline bool GetApplicationSupportedMimeTypes(::StringW pchAppKey, ::System::Text::StringBuilder* pchMimeTypesBuffer, uint32_t unMimeTypesBuffer);

  /// @brief Method GetApplicationsErrorNameFromEnum, addr 0x5c95fdc, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW GetApplicationsErrorNameFromEnum(::OVR::OpenVR::EVRApplicationError error);

  /// @brief Method GetApplicationsThatSupportMimeType, addr 0x5c9616c, size 0x20, virtual false, abstract: false, final false
  inline uint32_t GetApplicationsThatSupportMimeType(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer);

  /// @brief Method GetApplicationsTransitionStateNameFromEnum, addr 0x5c9620c, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW GetApplicationsTransitionStateNameFromEnum(::OVR::OpenVR::EVRApplicationTransitionState state);

  /// @brief Method GetCurrentSceneProcessId, addr 0x5c962d8, size 0x20, virtual false, abstract: false, final false
  inline uint32_t GetCurrentSceneProcessId();

  /// @brief Method GetDefaultApplicationForMimeType, addr 0x5c9612c, size 0x20, virtual false, abstract: false, final false
  inline bool GetDefaultApplicationForMimeType(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  /// @brief Method GetStartingApplication, addr 0x5c961ac, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError GetStartingApplication(::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  /// @brief Method GetTransitionState, addr 0x5c961cc, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationTransitionState GetTransitionState();

  /// @brief Method IdentifyApplication, addr 0x5c95f9c, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError IdentifyApplication(uint32_t unProcessId, ::StringW pchAppKey);

  /// @brief Method IsApplicationInstalled, addr 0x5c95e70, size 0x20, virtual false, abstract: false, final false
  inline bool IsApplicationInstalled(::StringW pchAppKey);

  /// @brief Method IsQuitUserPromptRequested, addr 0x5c96298, size 0x20, virtual false, abstract: false, final false
  inline bool IsQuitUserPromptRequested();

  /// @brief Method LaunchApplication, addr 0x5c95ef0, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError LaunchApplication(::StringW pchAppKey);

  /// @brief Method LaunchApplicationFromMimeType, addr 0x5c95f3c, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError LaunchApplicationFromMimeType(::StringW pchMimeType, ::StringW pchArgs);

  /// @brief Method LaunchDashboardOverlay, addr 0x5c95f5c, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError LaunchDashboardOverlay(::StringW pchAppKey);

  /// @brief Method LaunchInternalProcess, addr 0x5c962b8, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError LaunchInternalProcess(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory);

  /// @brief Method LaunchTemplateApplication, addr 0x5c95f10, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError LaunchTemplateApplication(::StringW pchTemplateAppKey, ::StringW pchNewAppKey,
                                                                      ::ArrayW<::OVR::OpenVR::AppOverrideKeys_t, ::Array<::OVR::OpenVR::AppOverrideKeys_t>*> pKeys);

  static inline ::OVR::OpenVR::CVRApplications* New_ctor(::System::IntPtr pInterface);

  /// @brief Method PerformApplicationPrelaunchCheck, addr 0x5c961ec, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError PerformApplicationPrelaunchCheck(::StringW pchAppKey);

  /// @brief Method RemoveApplicationManifest, addr 0x5c95e50, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError RemoveApplicationManifest(::StringW pchApplicationManifestFullPath);

  /// @brief Method SetApplicationAutoLaunch, addr 0x5c960c8, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError SetApplicationAutoLaunch(::StringW pchAppKey, bool bAutoLaunch);

  /// @brief Method SetDefaultApplicationForMimeType, addr 0x5c9610c, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError SetDefaultApplicationForMimeType(::StringW pchAppKey, ::StringW pchMimeType);

  constexpr ::OVR::OpenVR::IVRApplications const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRApplications& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRApplications value);

  /// @brief Method .ctor, addr 0x5c95d2c, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRApplications();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRApplications", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRApplications(CVRApplications&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRApplications", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRApplications(CVRApplications const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8360 };

  /// @brief Field FnTable, offset: 0x10, size: 0xf8, def value: None
  ::OVR::OpenVR::IVRApplications ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRApplications, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRApplications, 0x108>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRApplications);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRApplications*, "OVR.OpenVR", "CVRApplications");

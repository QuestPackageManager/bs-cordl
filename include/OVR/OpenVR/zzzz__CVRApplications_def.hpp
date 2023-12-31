#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRApplications_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Forward declare root types
namespace OVR::OpenVR {
class CVRApplications;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRApplications);
// Type: OVR.OpenVR::CVRApplications
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8313))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8561))
// CS Name: ::OVR.OpenVR::CVRApplications*
class CORDL_TYPE CVRApplications : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0xf8
  __declspec(property(get = __get_FnTable, put = __set_FnTable))::OVR::OpenVR::IVRApplications FnTable;

  constexpr ::OVR::OpenVR::IVRApplications& __get_FnTable();

  constexpr ::OVR::OpenVR::IVRApplications const& __get_FnTable() const;

  constexpr void __set_FnTable(::OVR::OpenVR::IVRApplications value);

  static inline ::OVR::OpenVR::CVRApplications* New_ctor(void* pInterface);

  /// @brief Method .ctor, addr 0x27f22c4, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(void* pInterface);

  /// @brief Method AddApplicationManifest, addr 0x27f23d8, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError AddApplicationManifest(::StringW pchApplicationManifestFullPath, bool bTemporary);

  /// @brief Method RemoveApplicationManifest, addr 0x27f2400, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError RemoveApplicationManifest(::StringW pchApplicationManifestFullPath);

  /// @brief Method IsApplicationInstalled, addr 0x27f2424, size 0x24, virtual false, abstract: false, final false
  inline bool IsApplicationInstalled(::StringW pchAppKey);

  /// @brief Method GetApplicationCount, addr 0x27f2448, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetApplicationCount();

  /// @brief Method GetApplicationKeyByIndex, addr 0x27f246c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError GetApplicationKeyByIndex(uint32_t unApplicationIndex, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  /// @brief Method GetApplicationKeyByProcessId, addr 0x27f2490, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError GetApplicationKeyByProcessId(uint32_t unProcessId, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  /// @brief Method LaunchApplication, addr 0x27f24b4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError LaunchApplication(::StringW pchAppKey);

  /// @brief Method LaunchTemplateApplication, addr 0x27f24d8, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError LaunchTemplateApplication(::StringW pchTemplateAppKey, ::StringW pchNewAppKey,
                                                                      ::ArrayW<::OVR::OpenVR::AppOverrideKeys_t, ::Array<::OVR::OpenVR::AppOverrideKeys_t>*> pKeys);

  /// @brief Method LaunchApplicationFromMimeType, addr 0x27f2504, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError LaunchApplicationFromMimeType(::StringW pchMimeType, ::StringW pchArgs);

  /// @brief Method LaunchDashboardOverlay, addr 0x27f2528, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError LaunchDashboardOverlay(::StringW pchAppKey);

  /// @brief Method CancelApplicationLaunch, addr 0x27f254c, size 0x24, virtual false, abstract: false, final false
  inline bool CancelApplicationLaunch(::StringW pchAppKey);

  /// @brief Method IdentifyApplication, addr 0x27f2570, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError IdentifyApplication(uint32_t unProcessId, ::StringW pchAppKey);

  /// @brief Method GetApplicationProcessId, addr 0x27f2594, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetApplicationProcessId(::StringW pchAppKey);

  /// @brief Method GetApplicationsErrorNameFromEnum, addr 0x27f25b8, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetApplicationsErrorNameFromEnum(::OVR::OpenVR::EVRApplicationError error);

  /// @brief Method GetApplicationPropertyString, addr 0x27f263c, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetApplicationPropertyString(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::System::Text::StringBuilder* pchPropertyValueBuffer,
                                               uint32_t unPropertyValueBufferLen, ByRef<::OVR::OpenVR::EVRApplicationError> peError);

  /// @brief Method GetApplicationPropertyBool, addr 0x27f2660, size 0x24, virtual false, abstract: false, final false
  inline bool GetApplicationPropertyBool(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<::OVR::OpenVR::EVRApplicationError> peError);

  /// @brief Method GetApplicationPropertyUint64, addr 0x27f2684, size 0x24, virtual false, abstract: false, final false
  inline uint64_t GetApplicationPropertyUint64(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<::OVR::OpenVR::EVRApplicationError> peError);

  /// @brief Method SetApplicationAutoLaunch, addr 0x27f26a8, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError SetApplicationAutoLaunch(::StringW pchAppKey, bool bAutoLaunch);

  /// @brief Method GetApplicationAutoLaunch, addr 0x27f26d0, size 0x24, virtual false, abstract: false, final false
  inline bool GetApplicationAutoLaunch(::StringW pchAppKey);

  /// @brief Method SetDefaultApplicationForMimeType, addr 0x27f26f4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError SetDefaultApplicationForMimeType(::StringW pchAppKey, ::StringW pchMimeType);

  /// @brief Method GetDefaultApplicationForMimeType, addr 0x27f2718, size 0x24, virtual false, abstract: false, final false
  inline bool GetDefaultApplicationForMimeType(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  /// @brief Method GetApplicationSupportedMimeTypes, addr 0x27f273c, size 0x24, virtual false, abstract: false, final false
  inline bool GetApplicationSupportedMimeTypes(::StringW pchAppKey, ::System::Text::StringBuilder* pchMimeTypesBuffer, uint32_t unMimeTypesBuffer);

  /// @brief Method GetApplicationsThatSupportMimeType, addr 0x27f2760, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetApplicationsThatSupportMimeType(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer);

  /// @brief Method GetApplicationLaunchArguments, addr 0x27f2784, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetApplicationLaunchArguments(uint32_t unHandle, ::System::Text::StringBuilder* pchArgs, uint32_t unArgs);

  /// @brief Method GetStartingApplication, addr 0x27f27a8, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError GetStartingApplication(::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  /// @brief Method GetTransitionState, addr 0x27f27cc, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationTransitionState GetTransitionState();

  /// @brief Method PerformApplicationPrelaunchCheck, addr 0x27f27f0, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError PerformApplicationPrelaunchCheck(::StringW pchAppKey);

  /// @brief Method GetApplicationsTransitionStateNameFromEnum, addr 0x27f2814, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetApplicationsTransitionStateNameFromEnum(::OVR::OpenVR::EVRApplicationTransitionState state);

  /// @brief Method IsQuitUserPromptRequested, addr 0x27f2898, size 0x24, virtual false, abstract: false, final false
  inline bool IsQuitUserPromptRequested();

  /// @brief Method LaunchInternalProcess, addr 0x27f28bc, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError LaunchInternalProcess(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory);

  /// @brief Method GetCurrentSceneProcessId, addr 0x27f28e0, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetCurrentSceneProcessId();

  // Ctor Parameters [CppParam { name: "", ty: "CVRApplications", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRApplications(CVRApplications&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRApplications", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRApplications(CVRApplications const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRApplications();

public:
  /// @brief Field FnTable, offset: 0x10, size: 0xf8, def value: None
  ::OVR::OpenVR::IVRApplications ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRApplications, 0x108>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::CVRApplications, ___FnTable) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRApplications);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRApplications*, "OVR.OpenVR", "CVRApplications");

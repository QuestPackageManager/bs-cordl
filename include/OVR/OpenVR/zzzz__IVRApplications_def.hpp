#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRApplications.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRApplications)
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
namespace OVR::OpenVR {
class IVRApplications__AddApplicationManifest;
}
namespace OVR::OpenVR {
class IVRApplications__CancelApplicationLaunch;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationCount;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationKeyByIndex;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationKeyByProcessId;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationLaunchArguments;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationProcessId;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationPropertyBool;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationPropertyString;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationPropertyUint64;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationSupportedMimeTypes;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationsThatSupportMimeType;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationsTransitionStateNameFromEnum;
}
namespace OVR::OpenVR {
class IVRApplications__GetCurrentSceneProcessId;
}
namespace OVR::OpenVR {
class IVRApplications__GetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
class IVRApplications__GetStartingApplication;
}
namespace OVR::OpenVR {
class IVRApplications__GetTransitionState;
}
namespace OVR::OpenVR {
class IVRApplications__IdentifyApplication;
}
namespace OVR::OpenVR {
class IVRApplications__IsApplicationInstalled;
}
namespace OVR::OpenVR {
class IVRApplications__IsQuitUserPromptRequested;
}
namespace OVR::OpenVR {
class IVRApplications__LaunchApplicationFromMimeType;
}
namespace OVR::OpenVR {
class IVRApplications__LaunchApplication;
}
namespace OVR::OpenVR {
class IVRApplications__LaunchDashboardOverlay;
}
namespace OVR::OpenVR {
class IVRApplications__LaunchInternalProcess;
}
namespace OVR::OpenVR {
class IVRApplications__LaunchTemplateApplication;
}
namespace OVR::OpenVR {
class IVRApplications__PerformApplicationPrelaunchCheck;
}
namespace OVR::OpenVR {
class IVRApplications__RemoveApplicationManifest;
}
namespace OVR::OpenVR {
class IVRApplications__SetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class IVRApplications__SetDefaultApplicationForMimeType;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class IVRApplications__AddApplicationManifest;
}
namespace OVR::OpenVR {
class IVRApplications__CancelApplicationLaunch;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationCount;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationKeyByIndex;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationKeyByProcessId;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationLaunchArguments;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationProcessId;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationPropertyBool;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationPropertyString;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationPropertyUint64;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationSupportedMimeTypes;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationsThatSupportMimeType;
}
namespace OVR::OpenVR {
class IVRApplications__GetApplicationsTransitionStateNameFromEnum;
}
namespace OVR::OpenVR {
class IVRApplications__GetCurrentSceneProcessId;
}
namespace OVR::OpenVR {
class IVRApplications__GetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
class IVRApplications__GetStartingApplication;
}
namespace OVR::OpenVR {
class IVRApplications__GetTransitionState;
}
namespace OVR::OpenVR {
class IVRApplications__IdentifyApplication;
}
namespace OVR::OpenVR {
class IVRApplications__IsApplicationInstalled;
}
namespace OVR::OpenVR {
class IVRApplications__IsQuitUserPromptRequested;
}
namespace OVR::OpenVR {
class IVRApplications__LaunchApplication;
}
namespace OVR::OpenVR {
class IVRApplications__LaunchApplicationFromMimeType;
}
namespace OVR::OpenVR {
class IVRApplications__LaunchDashboardOverlay;
}
namespace OVR::OpenVR {
class IVRApplications__LaunchInternalProcess;
}
namespace OVR::OpenVR {
class IVRApplications__LaunchTemplateApplication;
}
namespace OVR::OpenVR {
class IVRApplications__PerformApplicationPrelaunchCheck;
}
namespace OVR::OpenVR {
class IVRApplications__RemoveApplicationManifest;
}
namespace OVR::OpenVR {
class IVRApplications__SetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class IVRApplications__SetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
struct IVRApplications;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__AddApplicationManifest);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__CancelApplicationLaunch);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetApplicationCount);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetApplicationProcessId);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetApplicationPropertyString);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetStartingApplication);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__GetTransitionState);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__IdentifyApplication);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__IsApplicationInstalled);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__LaunchApplication);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__LaunchInternalProcess);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__LaunchTemplateApplication);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__RemoveApplicationManifest);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch);
MARK_REF_PTR_T(::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType);
MARK_VAL_T(::OVR::OpenVR::IVRApplications);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_AddApplicationManifest
class CORDL_TYPE IVRApplications__AddApplicationManifest : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4055c24, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchApplicationManifestFullPath, bool bTemporary, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055cbc, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4055c0c, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchApplicationManifestFullPath, bool bTemporary);

  static inline ::OVR::OpenVR::IVRApplications__AddApplicationManifest* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4055b6c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__AddApplicationManifest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__AddApplicationManifest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__AddApplicationManifest(IVRApplications__AddApplicationManifest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__AddApplicationManifest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__AddApplicationManifest(IVRApplications__AddApplicationManifest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8600 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__AddApplicationManifest, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_RemoveApplicationManifest
class CORDL_TYPE IVRApplications__RemoveApplicationManifest : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4055d94, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchApplicationManifestFullPath, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055db4, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4055d80, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchApplicationManifestFullPath);

  static inline ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4055ce4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__RemoveApplicationManifest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__RemoveApplicationManifest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__RemoveApplicationManifest(IVRApplications__RemoveApplicationManifest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__RemoveApplicationManifest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__RemoveApplicationManifest(IVRApplications__RemoveApplicationManifest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8601 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__RemoveApplicationManifest, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_IsApplicationInstalled
class CORDL_TYPE IVRApplications__IsApplicationInstalled : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4055e8c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055eac, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4055e78, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchAppKey);

  static inline ::OVR::OpenVR::IVRApplications__IsApplicationInstalled* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4055ddc, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__IsApplicationInstalled();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__IsApplicationInstalled", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__IsApplicationInstalled(IVRApplications__IsApplicationInstalled&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__IsApplicationInstalled", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__IsApplicationInstalled(IVRApplications__IsApplicationInstalled const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8602 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__IsApplicationInstalled, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetApplicationCount
class CORDL_TYPE IVRApplications__GetApplicationCount : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4055f70, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055f90, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4055f5c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  static inline ::OVR::OpenVR::IVRApplications__GetApplicationCount* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4055ed4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetApplicationCount();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationCount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetApplicationCount(IVRApplications__GetApplicationCount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationCount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetApplicationCount(IVRApplications__GetApplicationCount const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8603 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetApplicationCount, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetApplicationKeyByIndex
class CORDL_TYPE IVRApplications__GetApplicationKeyByIndex : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056058, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unApplicationIndex, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056100, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056044, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(uint32_t unApplicationIndex, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  static inline ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4055fb8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetApplicationKeyByIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationKeyByIndex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetApplicationKeyByIndex(IVRApplications__GetApplicationKeyByIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationKeyByIndex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetApplicationKeyByIndex(IVRApplications__GetApplicationKeyByIndex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8604 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetApplicationKeyByProcessId
class CORDL_TYPE IVRApplications__GetApplicationKeyByProcessId : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40561c8, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unProcessId, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056270, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40561b4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(uint32_t unProcessId, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  static inline ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056128, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetApplicationKeyByProcessId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationKeyByProcessId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetApplicationKeyByProcessId(IVRApplications__GetApplicationKeyByProcessId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationKeyByProcessId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetApplicationKeyByProcessId(IVRApplications__GetApplicationKeyByProcessId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8605 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_LaunchApplication
class CORDL_TYPE IVRApplications__LaunchApplication : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056348, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056368, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056334, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey);

  static inline ::OVR::OpenVR::IVRApplications__LaunchApplication* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056298, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__LaunchApplication();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__LaunchApplication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__LaunchApplication(IVRApplications__LaunchApplication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__LaunchApplication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__LaunchApplication(IVRApplications__LaunchApplication const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8606 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__LaunchApplication, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_LaunchTemplateApplication
class CORDL_TYPE IVRApplications__LaunchTemplateApplication : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056444, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey, ::ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t, ::Array<::OVR::OpenVR::AppOverrideKeys_t>*>> pKeys,
                                             uint32_t unKeys, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40564ec, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056430, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey,
                                                   ::ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t, ::Array<::OVR::OpenVR::AppOverrideKeys_t>*>> pKeys, uint32_t unKeys);

  static inline ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056390, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__LaunchTemplateApplication();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__LaunchTemplateApplication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__LaunchTemplateApplication(IVRApplications__LaunchTemplateApplication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__LaunchTemplateApplication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__LaunchTemplateApplication(IVRApplications__LaunchTemplateApplication const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8607 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__LaunchTemplateApplication, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_LaunchApplicationFromMimeType
class CORDL_TYPE IVRApplications__LaunchApplicationFromMimeType : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40565c8, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchMimeType, ::StringW pchArgs, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40565f0, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40565b4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchMimeType, ::StringW pchArgs);

  static inline ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056514, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__LaunchApplicationFromMimeType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__LaunchApplicationFromMimeType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__LaunchApplicationFromMimeType(IVRApplications__LaunchApplicationFromMimeType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__LaunchApplicationFromMimeType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__LaunchApplicationFromMimeType(IVRApplications__LaunchApplicationFromMimeType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8608 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_LaunchDashboardOverlay
class CORDL_TYPE IVRApplications__LaunchDashboardOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40566c8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40566e8, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40566b4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey);

  static inline ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056618, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__LaunchDashboardOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__LaunchDashboardOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__LaunchDashboardOverlay(IVRApplications__LaunchDashboardOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__LaunchDashboardOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__LaunchDashboardOverlay(IVRApplications__LaunchDashboardOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8609 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_CancelApplicationLaunch
class CORDL_TYPE IVRApplications__CancelApplicationLaunch : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40567c0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40567e0, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40567ac, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchAppKey);

  static inline ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056710, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__CancelApplicationLaunch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__CancelApplicationLaunch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__CancelApplicationLaunch(IVRApplications__CancelApplicationLaunch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__CancelApplicationLaunch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__CancelApplicationLaunch(IVRApplications__CancelApplicationLaunch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8610 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__CancelApplicationLaunch, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_IdentifyApplication
class CORDL_TYPE IVRApplications__IdentifyApplication : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40568a8, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unProcessId, ::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405693c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056894, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(uint32_t unProcessId, ::StringW pchAppKey);

  static inline ::OVR::OpenVR::IVRApplications__IdentifyApplication* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056808, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__IdentifyApplication();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__IdentifyApplication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__IdentifyApplication(IVRApplications__IdentifyApplication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__IdentifyApplication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__IdentifyApplication(IVRApplications__IdentifyApplication const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8611 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__IdentifyApplication, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetApplicationProcessId
class CORDL_TYPE IVRApplications__GetApplicationProcessId : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056a14, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056a34, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056a00, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchAppKey);

  static inline ::OVR::OpenVR::IVRApplications__GetApplicationProcessId* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056964, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetApplicationProcessId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationProcessId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetApplicationProcessId(IVRApplications__GetApplicationProcessId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationProcessId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetApplicationProcessId(IVRApplications__GetApplicationProcessId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetApplicationProcessId, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetApplicationsErrorNameFromEnum
class CORDL_TYPE IVRApplications__GetApplicationsErrorNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056afc, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRApplicationError error, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056b80, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056ae8, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVRApplicationError error);

  static inline ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056a5c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetApplicationsErrorNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationsErrorNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetApplicationsErrorNameFromEnum(IVRApplications__GetApplicationsErrorNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationsErrorNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetApplicationsErrorNameFromEnum(IVRApplications__GetApplicationsErrorNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8613 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetApplicationPropertyString
class CORDL_TYPE IVRApplications__GetApplicationPropertyString : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056c5c, size 0x108, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::System::Text::StringBuilder* pchPropertyValueBuffer,
                                             uint32_t unPropertyValueBufferLen, ::ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056d64, size 0x2c, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056c48, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::System::Text::StringBuilder* pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen,
                         ::ByRef<::OVR::OpenVR::EVRApplicationError> peError);

  static inline ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056ba8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetApplicationPropertyString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationPropertyString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetApplicationPropertyString(IVRApplications__GetApplicationPropertyString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationPropertyString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetApplicationPropertyString(IVRApplications__GetApplicationPropertyString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8614 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetApplicationPropertyString, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetApplicationPropertyBool
class CORDL_TYPE IVRApplications__GetApplicationPropertyBool : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056e44, size 0xc8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::ByRef<::OVR::OpenVR::EVRApplicationError> peError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056f0c, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056e30, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::ByRef<::OVR::OpenVR::EVRApplicationError> peError);

  static inline ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056d90, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetApplicationPropertyBool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationPropertyBool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetApplicationPropertyBool(IVRApplications__GetApplicationPropertyBool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationPropertyBool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetApplicationPropertyBool(IVRApplications__GetApplicationPropertyBool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8615 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetApplicationPropertyUint64
class CORDL_TYPE IVRApplications__GetApplicationPropertyUint64 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056fec, size 0xc8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::ByRef<::OVR::OpenVR::EVRApplicationError> peError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40570b4, size 0x2c, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056fd8, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::ByRef<::OVR::OpenVR::EVRApplicationError> peError);

  static inline ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056f38, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetApplicationPropertyUint64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationPropertyUint64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetApplicationPropertyUint64(IVRApplications__GetApplicationPropertyUint64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationPropertyUint64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetApplicationPropertyUint64(IVRApplications__GetApplicationPropertyUint64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8616 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_SetApplicationAutoLaunch
class CORDL_TYPE IVRApplications__SetApplicationAutoLaunch : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057198, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, bool bAutoLaunch, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057230, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057180, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey, bool bAutoLaunch);

  static inline ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40570e0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__SetApplicationAutoLaunch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__SetApplicationAutoLaunch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__SetApplicationAutoLaunch(IVRApplications__SetApplicationAutoLaunch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__SetApplicationAutoLaunch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__SetApplicationAutoLaunch(IVRApplications__SetApplicationAutoLaunch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8617 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetApplicationAutoLaunch
class CORDL_TYPE IVRApplications__GetApplicationAutoLaunch : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057308, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057328, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40572f4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchAppKey);

  static inline ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057258, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetApplicationAutoLaunch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationAutoLaunch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetApplicationAutoLaunch(IVRApplications__GetApplicationAutoLaunch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationAutoLaunch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetApplicationAutoLaunch(IVRApplications__GetApplicationAutoLaunch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8618 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_SetDefaultApplicationForMimeType
class CORDL_TYPE IVRApplications__SetDefaultApplicationForMimeType : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057404, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::StringW pchMimeType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405742c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40573f0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey, ::StringW pchMimeType);

  static inline ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057350, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__SetDefaultApplicationForMimeType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__SetDefaultApplicationForMimeType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__SetDefaultApplicationForMimeType(IVRApplications__SetDefaultApplicationForMimeType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__SetDefaultApplicationForMimeType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__SetDefaultApplicationForMimeType(IVRApplications__SetDefaultApplicationForMimeType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetDefaultApplicationForMimeType
class CORDL_TYPE IVRApplications__GetDefaultApplicationForMimeType : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057508, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40575a0, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40574f4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  static inline ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057454, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetDefaultApplicationForMimeType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetDefaultApplicationForMimeType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetDefaultApplicationForMimeType(IVRApplications__GetDefaultApplicationForMimeType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetDefaultApplicationForMimeType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetDefaultApplicationForMimeType(IVRApplications__GetDefaultApplicationForMimeType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8620 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetApplicationSupportedMimeTypes
class CORDL_TYPE IVRApplications__GetApplicationSupportedMimeTypes : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405767c, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::Text::StringBuilder* pchMimeTypesBuffer, uint32_t unMimeTypesBuffer, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057714, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057668, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchAppKey, ::System::Text::StringBuilder* pchMimeTypesBuffer, uint32_t unMimeTypesBuffer);

  static inline ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40575c8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetApplicationSupportedMimeTypes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationSupportedMimeTypes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetApplicationSupportedMimeTypes(IVRApplications__GetApplicationSupportedMimeTypes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationSupportedMimeTypes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetApplicationSupportedMimeTypes(IVRApplications__GetApplicationSupportedMimeTypes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8621 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetApplicationsThatSupportMimeType
class CORDL_TYPE IVRApplications__GetApplicationsThatSupportMimeType : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40577f0, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057888, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40577dc, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer);

  static inline ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405773c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetApplicationsThatSupportMimeType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationsThatSupportMimeType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetApplicationsThatSupportMimeType(IVRApplications__GetApplicationsThatSupportMimeType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationsThatSupportMimeType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetApplicationsThatSupportMimeType(IVRApplications__GetApplicationsThatSupportMimeType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8622 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetApplicationLaunchArguments
class CORDL_TYPE IVRApplications__GetApplicationLaunchArguments : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057950, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unHandle, ::System::Text::StringBuilder* pchArgs, uint32_t unArgs, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40579f8, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405793c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t unHandle, ::System::Text::StringBuilder* pchArgs, uint32_t unArgs);

  static inline ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40578b0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetApplicationLaunchArguments();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationLaunchArguments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetApplicationLaunchArguments(IVRApplications__GetApplicationLaunchArguments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationLaunchArguments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetApplicationLaunchArguments(IVRApplications__GetApplicationLaunchArguments const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8623 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetStartingApplication
class CORDL_TYPE IVRApplications__GetStartingApplication : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057ad4, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057b68, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057ac0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  static inline ::OVR::OpenVR::IVRApplications__GetStartingApplication* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057a20, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetStartingApplication();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetStartingApplication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetStartingApplication(IVRApplications__GetStartingApplication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetStartingApplication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetStartingApplication(IVRApplications__GetStartingApplication const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8624 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetStartingApplication, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetTransitionState
class CORDL_TYPE IVRApplications__GetTransitionState : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057c2c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057c4c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationTransitionState EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057c18, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationTransitionState Invoke();

  static inline ::OVR::OpenVR::IVRApplications__GetTransitionState* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057b90, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetTransitionState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetTransitionState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetTransitionState(IVRApplications__GetTransitionState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetTransitionState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetTransitionState(IVRApplications__GetTransitionState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8625 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetTransitionState, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_PerformApplicationPrelaunchCheck
class CORDL_TYPE IVRApplications__PerformApplicationPrelaunchCheck : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057d24, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057d44, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057d10, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey);

  static inline ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057c74, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__PerformApplicationPrelaunchCheck();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__PerformApplicationPrelaunchCheck", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__PerformApplicationPrelaunchCheck(IVRApplications__PerformApplicationPrelaunchCheck&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__PerformApplicationPrelaunchCheck", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__PerformApplicationPrelaunchCheck(IVRApplications__PerformApplicationPrelaunchCheck const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8626 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetApplicationsTransitionStateNameFromEnum
class CORDL_TYPE IVRApplications__GetApplicationsTransitionStateNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057e0c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRApplicationTransitionState state, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057e90, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057df8, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVRApplicationTransitionState state);

  static inline ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057d6c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetApplicationsTransitionStateNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationsTransitionStateNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetApplicationsTransitionStateNameFromEnum(IVRApplications__GetApplicationsTransitionStateNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetApplicationsTransitionStateNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetApplicationsTransitionStateNameFromEnum(IVRApplications__GetApplicationsTransitionStateNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8627 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_IsQuitUserPromptRequested
class CORDL_TYPE IVRApplications__IsQuitUserPromptRequested : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057f54, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057f74, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057f40, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057eb8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__IsQuitUserPromptRequested();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__IsQuitUserPromptRequested", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__IsQuitUserPromptRequested(IVRApplications__IsQuitUserPromptRequested&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__IsQuitUserPromptRequested", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__IsQuitUserPromptRequested(IVRApplications__IsQuitUserPromptRequested const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8628 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_LaunchInternalProcess
class CORDL_TYPE IVRApplications__LaunchInternalProcess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4058050, size 0x2c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405807c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405803c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory);

  static inline ::OVR::OpenVR::IVRApplications__LaunchInternalProcess* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057f9c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__LaunchInternalProcess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__LaunchInternalProcess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__LaunchInternalProcess(IVRApplications__LaunchInternalProcess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__LaunchInternalProcess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__LaunchInternalProcess(IVRApplications__LaunchInternalProcess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8629 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__LaunchInternalProcess, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRApplications/_GetCurrentSceneProcessId
class CORDL_TYPE IVRApplications__GetCurrentSceneProcessId : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4058140, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4058160, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405812c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  static inline ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40580a4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications__GetCurrentSceneProcessId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetCurrentSceneProcessId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRApplications__GetCurrentSceneProcessId(IVRApplications__GetCurrentSceneProcessId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRApplications__GetCurrentSceneProcessId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRApplications__GetCurrentSceneProcessId(IVRApplications__GetCurrentSceneProcessId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRApplications
struct CORDL_TYPE IVRApplications {
public:
  // Declarations
  using _AddApplicationManifest = ::OVR::OpenVR::IVRApplications__AddApplicationManifest;

  using _CancelApplicationLaunch = ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch;

  using _GetApplicationAutoLaunch = ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch;

  using _GetApplicationCount = ::OVR::OpenVR::IVRApplications__GetApplicationCount;

  using _GetApplicationKeyByIndex = ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex;

  using _GetApplicationKeyByProcessId = ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId;

  using _GetApplicationLaunchArguments = ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments;

  using _GetApplicationProcessId = ::OVR::OpenVR::IVRApplications__GetApplicationProcessId;

  using _GetApplicationPropertyBool = ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool;

  using _GetApplicationPropertyString = ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString;

  using _GetApplicationPropertyUint64 = ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64;

  using _GetApplicationSupportedMimeTypes = ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes;

  using _GetApplicationsErrorNameFromEnum = ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum;

  using _GetApplicationsThatSupportMimeType = ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType;

  using _GetApplicationsTransitionStateNameFromEnum = ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum;

  using _GetCurrentSceneProcessId = ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId;

  using _GetDefaultApplicationForMimeType = ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType;

  using _GetStartingApplication = ::OVR::OpenVR::IVRApplications__GetStartingApplication;

  using _GetTransitionState = ::OVR::OpenVR::IVRApplications__GetTransitionState;

  using _IdentifyApplication = ::OVR::OpenVR::IVRApplications__IdentifyApplication;

  using _IsApplicationInstalled = ::OVR::OpenVR::IVRApplications__IsApplicationInstalled;

  using _IsQuitUserPromptRequested = ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested;

  using _LaunchApplication = ::OVR::OpenVR::IVRApplications__LaunchApplication;

  using _LaunchApplicationFromMimeType = ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType;

  using _LaunchDashboardOverlay = ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay;

  using _LaunchInternalProcess = ::OVR::OpenVR::IVRApplications__LaunchInternalProcess;

  using _LaunchTemplateApplication = ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication;

  using _PerformApplicationPrelaunchCheck = ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck;

  using _RemoveApplicationManifest = ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest;

  using _SetApplicationAutoLaunch = ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch;

  using _SetDefaultApplicationForMimeType = ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications();

  // Ctor Parameters [CppParam { name: "AddApplicationManifest", ty: "::OVR::OpenVR::IVRApplications__AddApplicationManifest*", modifiers: "", def_value: None }, CppParam { name:
  // "RemoveApplicationManifest", ty: "::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*", modifiers: "", def_value: None }, CppParam { name: "IsApplicationInstalled", ty:
  // "::OVR::OpenVR::IVRApplications__IsApplicationInstalled*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationCount", ty: "::OVR::OpenVR::IVRApplications__GetApplicationCount*",
  // modifiers: "", def_value: None }, CppParam { name: "GetApplicationKeyByIndex", ty: "::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*", modifiers: "", def_value: None }, CppParam { name:
  // "GetApplicationKeyByProcessId", ty: "::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*", modifiers: "", def_value: None }, CppParam { name: "LaunchApplication", ty:
  // "::OVR::OpenVR::IVRApplications__LaunchApplication*", modifiers: "", def_value: None }, CppParam { name: "LaunchTemplateApplication", ty:
  // "::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*", modifiers: "", def_value: None }, CppParam { name: "LaunchApplicationFromMimeType", ty:
  // "::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*", modifiers: "", def_value: None }, CppParam { name: "LaunchDashboardOverlay", ty:
  // "::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*", modifiers: "", def_value: None }, CppParam { name: "CancelApplicationLaunch", ty:
  // "::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*", modifiers: "", def_value: None }, CppParam { name: "IdentifyApplication", ty: "::OVR::OpenVR::IVRApplications__IdentifyApplication*",
  // modifiers: "", def_value: None }, CppParam { name: "GetApplicationProcessId", ty: "::OVR::OpenVR::IVRApplications__GetApplicationProcessId*", modifiers: "", def_value: None }, CppParam { name:
  // "GetApplicationsErrorNameFromEnum", ty: "::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationPropertyString", ty:
  // "::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationPropertyBool", ty:
  // "::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationPropertyUint64", ty:
  // "::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*", modifiers: "", def_value: None }, CppParam { name: "SetApplicationAutoLaunch", ty:
  // "::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationAutoLaunch", ty:
  // "::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*", modifiers: "", def_value: None }, CppParam { name: "SetDefaultApplicationForMimeType", ty:
  // "::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*", modifiers: "", def_value: None }, CppParam { name: "GetDefaultApplicationForMimeType", ty:
  // "::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationSupportedMimeTypes", ty:
  // "::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationsThatSupportMimeType", ty:
  // "::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationLaunchArguments", ty:
  // "::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*", modifiers: "", def_value: None }, CppParam { name: "GetStartingApplication", ty:
  // "::OVR::OpenVR::IVRApplications__GetStartingApplication*", modifiers: "", def_value: None }, CppParam { name: "GetTransitionState", ty: "::OVR::OpenVR::IVRApplications__GetTransitionState*",
  // modifiers: "", def_value: None }, CppParam { name: "PerformApplicationPrelaunchCheck", ty: "::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*", modifiers: "", def_value: None },
  // CppParam { name: "GetApplicationsTransitionStateNameFromEnum", ty: "::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*", modifiers: "", def_value: None }, CppParam {
  // name: "IsQuitUserPromptRequested", ty: "::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*", modifiers: "", def_value: None }, CppParam { name: "LaunchInternalProcess", ty:
  // "::OVR::OpenVR::IVRApplications__LaunchInternalProcess*", modifiers: "", def_value: None }, CppParam { name: "GetCurrentSceneProcessId", ty:
  // "::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*", modifiers: "", def_value: None }]
  constexpr IVRApplications(
      ::OVR::OpenVR::IVRApplications__AddApplicationManifest* AddApplicationManifest, ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest* RemoveApplicationManifest,
      ::OVR::OpenVR::IVRApplications__IsApplicationInstalled* IsApplicationInstalled, ::OVR::OpenVR::IVRApplications__GetApplicationCount* GetApplicationCount,
      ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex* GetApplicationKeyByIndex, ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId* GetApplicationKeyByProcessId,
      ::OVR::OpenVR::IVRApplications__LaunchApplication* LaunchApplication, ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication* LaunchTemplateApplication,
      ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType* LaunchApplicationFromMimeType, ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay* LaunchDashboardOverlay,
      ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch* CancelApplicationLaunch, ::OVR::OpenVR::IVRApplications__IdentifyApplication* IdentifyApplication,
      ::OVR::OpenVR::IVRApplications__GetApplicationProcessId* GetApplicationProcessId, ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum* GetApplicationsErrorNameFromEnum,
      ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString* GetApplicationPropertyString, ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool* GetApplicationPropertyBool,
      ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64* GetApplicationPropertyUint64, ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch* SetApplicationAutoLaunch,
      ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch* GetApplicationAutoLaunch, ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType* SetDefaultApplicationForMimeType,
      ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType* GetDefaultApplicationForMimeType,
      ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes* GetApplicationSupportedMimeTypes,
      ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType* GetApplicationsThatSupportMimeType,
      ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments* GetApplicationLaunchArguments, ::OVR::OpenVR::IVRApplications__GetStartingApplication* GetStartingApplication,
      ::OVR::OpenVR::IVRApplications__GetTransitionState* GetTransitionState, ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck* PerformApplicationPrelaunchCheck,
      ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum* GetApplicationsTransitionStateNameFromEnum,
      ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested* IsQuitUserPromptRequested, ::OVR::OpenVR::IVRApplications__LaunchInternalProcess* LaunchInternalProcess,
      ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId* GetCurrentSceneProcessId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8631 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xf8 };

  /// @brief Field AddApplicationManifest, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__AddApplicationManifest* AddApplicationManifest;

  /// @brief Field RemoveApplicationManifest, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__RemoveApplicationManifest* RemoveApplicationManifest;

  /// @brief Field IsApplicationInstalled, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__IsApplicationInstalled* IsApplicationInstalled;

  /// @brief Field GetApplicationCount, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetApplicationCount* GetApplicationCount;

  /// @brief Field GetApplicationKeyByIndex, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex* GetApplicationKeyByIndex;

  /// @brief Field GetApplicationKeyByProcessId, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId* GetApplicationKeyByProcessId;

  /// @brief Field LaunchApplication, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__LaunchApplication* LaunchApplication;

  /// @brief Field LaunchTemplateApplication, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__LaunchTemplateApplication* LaunchTemplateApplication;

  /// @brief Field LaunchApplicationFromMimeType, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType* LaunchApplicationFromMimeType;

  /// @brief Field LaunchDashboardOverlay, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay* LaunchDashboardOverlay;

  /// @brief Field CancelApplicationLaunch, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__CancelApplicationLaunch* CancelApplicationLaunch;

  /// @brief Field IdentifyApplication, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__IdentifyApplication* IdentifyApplication;

  /// @brief Field GetApplicationProcessId, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetApplicationProcessId* GetApplicationProcessId;

  /// @brief Field GetApplicationsErrorNameFromEnum, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum* GetApplicationsErrorNameFromEnum;

  /// @brief Field GetApplicationPropertyString, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetApplicationPropertyString* GetApplicationPropertyString;

  /// @brief Field GetApplicationPropertyBool, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool* GetApplicationPropertyBool;

  /// @brief Field GetApplicationPropertyUint64, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64* GetApplicationPropertyUint64;

  /// @brief Field SetApplicationAutoLaunch, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch* SetApplicationAutoLaunch;

  /// @brief Field GetApplicationAutoLaunch, offset: 0x90, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch* GetApplicationAutoLaunch;

  /// @brief Field SetDefaultApplicationForMimeType, offset: 0x98, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType* SetDefaultApplicationForMimeType;

  /// @brief Field GetDefaultApplicationForMimeType, offset: 0xa0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType* GetDefaultApplicationForMimeType;

  /// @brief Field GetApplicationSupportedMimeTypes, offset: 0xa8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes* GetApplicationSupportedMimeTypes;

  /// @brief Field GetApplicationsThatSupportMimeType, offset: 0xb0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType* GetApplicationsThatSupportMimeType;

  /// @brief Field GetApplicationLaunchArguments, offset: 0xb8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments* GetApplicationLaunchArguments;

  /// @brief Field GetStartingApplication, offset: 0xc0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetStartingApplication* GetStartingApplication;

  /// @brief Field GetTransitionState, offset: 0xc8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetTransitionState* GetTransitionState;

  /// @brief Field PerformApplicationPrelaunchCheck, offset: 0xd0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck* PerformApplicationPrelaunchCheck;

  /// @brief Field GetApplicationsTransitionStateNameFromEnum, offset: 0xd8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum* GetApplicationsTransitionStateNameFromEnum;

  /// @brief Field IsQuitUserPromptRequested, offset: 0xe0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested* IsQuitUserPromptRequested;

  /// @brief Field LaunchInternalProcess, offset: 0xe8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__LaunchInternalProcess* LaunchInternalProcess;

  /// @brief Field GetCurrentSceneProcessId, offset: 0xf0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId* GetCurrentSceneProcessId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRApplications, AddApplicationManifest) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, RemoveApplicationManifest) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, IsApplicationInstalled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetApplicationCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetApplicationKeyByIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetApplicationKeyByProcessId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, LaunchApplication) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, LaunchTemplateApplication) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, LaunchApplicationFromMimeType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, LaunchDashboardOverlay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, CancelApplicationLaunch) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, IdentifyApplication) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetApplicationProcessId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetApplicationsErrorNameFromEnum) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetApplicationPropertyString) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetApplicationPropertyBool) == 0x78, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetApplicationPropertyUint64) == 0x80, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, SetApplicationAutoLaunch) == 0x88, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetApplicationAutoLaunch) == 0x90, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, SetDefaultApplicationForMimeType) == 0x98, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetDefaultApplicationForMimeType) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetApplicationSupportedMimeTypes) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetApplicationsThatSupportMimeType) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetApplicationLaunchArguments) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetStartingApplication) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetTransitionState) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, PerformApplicationPrelaunchCheck) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetApplicationsTransitionStateNameFromEnum) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, IsQuitUserPromptRequested) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, LaunchInternalProcess) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRApplications, GetCurrentSceneProcessId) == 0xf0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications, 0xf8>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__AddApplicationManifest);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__AddApplicationManifest*, "OVR.OpenVR", "IVRApplications/_AddApplicationManifest");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__CancelApplicationLaunch);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__CancelApplicationLaunch*, "OVR.OpenVR", "IVRApplications/_CancelApplicationLaunch");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetApplicationAutoLaunch*, "OVR.OpenVR", "IVRApplications/_GetApplicationAutoLaunch");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetApplicationCount);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetApplicationCount*, "OVR.OpenVR", "IVRApplications/_GetApplicationCount");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetApplicationKeyByIndex*, "OVR.OpenVR", "IVRApplications/_GetApplicationKeyByIndex");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetApplicationKeyByProcessId*, "OVR.OpenVR", "IVRApplications/_GetApplicationKeyByProcessId");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetApplicationLaunchArguments*, "OVR.OpenVR", "IVRApplications/_GetApplicationLaunchArguments");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetApplicationProcessId);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetApplicationProcessId*, "OVR.OpenVR", "IVRApplications/_GetApplicationProcessId");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetApplicationPropertyBool*, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyBool");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetApplicationPropertyString);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetApplicationPropertyString*, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyString");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetApplicationPropertyUint64*, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyUint64");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetApplicationSupportedMimeTypes*, "OVR.OpenVR", "IVRApplications/_GetApplicationSupportedMimeTypes");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetApplicationsErrorNameFromEnum*, "OVR.OpenVR", "IVRApplications/_GetApplicationsErrorNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetApplicationsThatSupportMimeType*, "OVR.OpenVR", "IVRApplications/_GetApplicationsThatSupportMimeType");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetApplicationsTransitionStateNameFromEnum*, "OVR.OpenVR", "IVRApplications/_GetApplicationsTransitionStateNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetCurrentSceneProcessId*, "OVR.OpenVR", "IVRApplications/_GetCurrentSceneProcessId");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetDefaultApplicationForMimeType*, "OVR.OpenVR", "IVRApplications/_GetDefaultApplicationForMimeType");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetStartingApplication);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetStartingApplication*, "OVR.OpenVR", "IVRApplications/_GetStartingApplication");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__GetTransitionState);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__GetTransitionState*, "OVR.OpenVR", "IVRApplications/_GetTransitionState");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__IdentifyApplication);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__IdentifyApplication*, "OVR.OpenVR", "IVRApplications/_IdentifyApplication");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__IsApplicationInstalled);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__IsApplicationInstalled*, "OVR.OpenVR", "IVRApplications/_IsApplicationInstalled");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__IsQuitUserPromptRequested*, "OVR.OpenVR", "IVRApplications/_IsQuitUserPromptRequested");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__LaunchApplication);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__LaunchApplication*, "OVR.OpenVR", "IVRApplications/_LaunchApplication");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__LaunchApplicationFromMimeType*, "OVR.OpenVR", "IVRApplications/_LaunchApplicationFromMimeType");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__LaunchDashboardOverlay*, "OVR.OpenVR", "IVRApplications/_LaunchDashboardOverlay");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__LaunchInternalProcess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__LaunchInternalProcess*, "OVR.OpenVR", "IVRApplications/_LaunchInternalProcess");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__LaunchTemplateApplication);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__LaunchTemplateApplication*, "OVR.OpenVR", "IVRApplications/_LaunchTemplateApplication");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__PerformApplicationPrelaunchCheck*, "OVR.OpenVR", "IVRApplications/_PerformApplicationPrelaunchCheck");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__RemoveApplicationManifest);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__RemoveApplicationManifest*, "OVR.OpenVR", "IVRApplications/_RemoveApplicationManifest");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__SetApplicationAutoLaunch*, "OVR.OpenVR", "IVRApplications/_SetApplicationAutoLaunch");
NEED_NO_BOX(::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications__SetDefaultApplicationForMimeType*, "OVR.OpenVR", "IVRApplications/_SetDefaultApplicationForMimeType");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications, "OVR.OpenVR", "IVRApplications");

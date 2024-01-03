#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRApplications)
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace OVR::OpenVR {
struct EVRApplicationError;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct EVRApplicationProperty;
}
namespace OVR::OpenVR {
struct EVRApplicationTransitionState;
}
namespace OVR::OpenVR {
struct AppOverrideKeys_t;
}
namespace OVR::OpenVR {
class __IVRApplications___CancelApplicationLaunch;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationKeyByIndex;
}
namespace OVR::OpenVR {
class __IVRApplications___IdentifyApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRApplications___GetCurrentSceneProcessId;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationKeyByProcessId;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationSupportedMimeTypes;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationCount;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationPropertyUint64;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationsTransitionStateNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchInternalProcess;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchTemplateApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___SetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___GetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___GetStartingApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationPropertyString;
}
namespace OVR::OpenVR {
class __IVRApplications___GetTransitionState;
}
namespace OVR::OpenVR {
class __IVRApplications___RemoveApplicationManifest;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationProcessId;
}
namespace OVR::OpenVR {
class __IVRApplications___PerformApplicationPrelaunchCheck;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationsThatSupportMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___AddApplicationManifest;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationLaunchArguments;
}
namespace OVR::OpenVR {
class __IVRApplications___IsApplicationInstalled;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchApplicationFromMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchDashboardOverlay;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationPropertyBool;
}
namespace OVR::OpenVR {
class __IVRApplications___SetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class __IVRApplications___IsQuitUserPromptRequested;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRApplications___AddApplicationManifest;
}
namespace OVR::OpenVR {
class __IVRApplications___CancelApplicationLaunch;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationCount;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationKeyByIndex;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationKeyByProcessId;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationLaunchArguments;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationProcessId;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationPropertyBool;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationPropertyString;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationPropertyUint64;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationSupportedMimeTypes;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationsThatSupportMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___GetApplicationsTransitionStateNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRApplications___GetCurrentSceneProcessId;
}
namespace OVR::OpenVR {
class __IVRApplications___GetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___GetStartingApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___GetTransitionState;
}
namespace OVR::OpenVR {
class __IVRApplications___IdentifyApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___IsApplicationInstalled;
}
namespace OVR::OpenVR {
class __IVRApplications___IsQuitUserPromptRequested;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchApplicationFromMimeType;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchDashboardOverlay;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchInternalProcess;
}
namespace OVR::OpenVR {
class __IVRApplications___LaunchTemplateApplication;
}
namespace OVR::OpenVR {
class __IVRApplications___PerformApplicationPrelaunchCheck;
}
namespace OVR::OpenVR {
class __IVRApplications___RemoveApplicationManifest;
}
namespace OVR::OpenVR {
class __IVRApplications___SetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class __IVRApplications___SetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
struct IVRApplications;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___AddApplicationManifest);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationCount);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationProcessId);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetStartingApplication);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___GetTransitionState);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___IdentifyApplication);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___IsApplicationInstalled);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___LaunchApplication);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___LaunchInternalProcess);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType);
MARK_VAL_T(::OVR::OpenVR::IVRApplications);
// Type: ::_AddApplicationManifest
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8282))
// CS Name: ::IVRApplications::_AddApplicationManifest*
class CORDL_TYPE __IVRApplications___AddApplicationManifest : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___AddApplicationManifest* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d6a48, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d6b20, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchApplicationManifestFullPath, bool bTemporary);

  /// @brief Method BeginInvoke, addr 0x27d6b38, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchApplicationManifestFullPath, bool bTemporary, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d6bd0, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___AddApplicationManifest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___AddApplicationManifest(__IVRApplications___AddApplicationManifest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___AddApplicationManifest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___AddApplicationManifest(__IVRApplications___AddApplicationManifest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___AddApplicationManifest();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___AddApplicationManifest, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_RemoveApplicationManifest
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8283))
// CS Name: ::IVRApplications::_RemoveApplicationManifest*
class CORDL_TYPE __IVRApplications___RemoveApplicationManifest : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d6bf8, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d6ccc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchApplicationManifestFullPath);

  /// @brief Method BeginInvoke, addr 0x27d6ce0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchApplicationManifestFullPath, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d6d00, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___RemoveApplicationManifest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___RemoveApplicationManifest(__IVRApplications___RemoveApplicationManifest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___RemoveApplicationManifest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___RemoveApplicationManifest(__IVRApplications___RemoveApplicationManifest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___RemoveApplicationManifest();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_IsApplicationInstalled
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8284))
// CS Name: ::IVRApplications::_IsApplicationInstalled*
class CORDL_TYPE __IVRApplications___IsApplicationInstalled : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___IsApplicationInstalled* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d6d28, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d6dfc, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchAppKey);

  /// @brief Method BeginInvoke, addr 0x27d6e10, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d6e30, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___IsApplicationInstalled", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___IsApplicationInstalled(__IVRApplications___IsApplicationInstalled&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___IsApplicationInstalled", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___IsApplicationInstalled(__IVRApplications___IsApplicationInstalled const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___IsApplicationInstalled();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___IsApplicationInstalled, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetApplicationCount
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8285))
// CS Name: ::IVRApplications::_GetApplicationCount*
class CORDL_TYPE __IVRApplications___GetApplicationCount : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetApplicationCount* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d6e58, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d6f14, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  /// @brief Method BeginInvoke, addr 0x27d6f28, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d6f48, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationCount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetApplicationCount(__IVRApplications___GetApplicationCount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationCount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetApplicationCount(__IVRApplications___GetApplicationCount const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetApplicationCount();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationCount, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetApplicationKeyByIndex
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8286))
// CS Name: ::IVRApplications::_GetApplicationKeyByIndex*
class CORDL_TYPE __IVRApplications___GetApplicationKeyByIndex : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d6f70, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d7034, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(uint32_t unApplicationIndex, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  /// @brief Method BeginInvoke, addr 0x27d7048, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unApplicationIndex, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d70ec, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationKeyByIndex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetApplicationKeyByIndex(__IVRApplications___GetApplicationKeyByIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationKeyByIndex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetApplicationKeyByIndex(__IVRApplications___GetApplicationKeyByIndex const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetApplicationKeyByIndex();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetApplicationKeyByProcessId
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8287))
// CS Name: ::IVRApplications::_GetApplicationKeyByProcessId*
class CORDL_TYPE __IVRApplications___GetApplicationKeyByProcessId : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d7114, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d71d8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(uint32_t unProcessId, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  /// @brief Method BeginInvoke, addr 0x27d71ec, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unProcessId, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d7290, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationKeyByProcessId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetApplicationKeyByProcessId(__IVRApplications___GetApplicationKeyByProcessId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationKeyByProcessId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetApplicationKeyByProcessId(__IVRApplications___GetApplicationKeyByProcessId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetApplicationKeyByProcessId();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_LaunchApplication
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8288))
// CS Name: ::IVRApplications::_LaunchApplication*
class CORDL_TYPE __IVRApplications___LaunchApplication : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___LaunchApplication* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d72b8, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d738c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey);

  /// @brief Method BeginInvoke, addr 0x27d73a0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d73c0, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchApplication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___LaunchApplication(__IVRApplications___LaunchApplication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchApplication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___LaunchApplication(__IVRApplications___LaunchApplication const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___LaunchApplication();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___LaunchApplication, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_LaunchTemplateApplication
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8289))
// CS Name: ::IVRApplications::_LaunchTemplateApplication*
class CORDL_TYPE __IVRApplications___LaunchTemplateApplication : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d73e8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d74c0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey,
                                                   ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t, ::Array<::OVR::OpenVR::AppOverrideKeys_t>*>> pKeys, uint32_t unKeys);

  /// @brief Method BeginInvoke, addr 0x27d74d4, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey, ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t, ::Array<::OVR::OpenVR::AppOverrideKeys_t>*>> pKeys,
                                             uint32_t unKeys, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d757c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchTemplateApplication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___LaunchTemplateApplication(__IVRApplications___LaunchTemplateApplication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchTemplateApplication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___LaunchTemplateApplication(__IVRApplications___LaunchTemplateApplication const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___LaunchTemplateApplication();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_LaunchApplicationFromMimeType
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8290))
// CS Name: ::IVRApplications::_LaunchApplicationFromMimeType*
class CORDL_TYPE __IVRApplications___LaunchApplicationFromMimeType : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d75a4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d767c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchMimeType, ::StringW pchArgs);

  /// @brief Method BeginInvoke, addr 0x27d7690, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchMimeType, ::StringW pchArgs, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d76b8, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchApplicationFromMimeType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___LaunchApplicationFromMimeType(__IVRApplications___LaunchApplicationFromMimeType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchApplicationFromMimeType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___LaunchApplicationFromMimeType(__IVRApplications___LaunchApplicationFromMimeType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___LaunchApplicationFromMimeType();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_LaunchDashboardOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8291))
// CS Name: ::IVRApplications::_LaunchDashboardOverlay*
class CORDL_TYPE __IVRApplications___LaunchDashboardOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d76e0, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d77b4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey);

  /// @brief Method BeginInvoke, addr 0x27d77c8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d77e8, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchDashboardOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___LaunchDashboardOverlay(__IVRApplications___LaunchDashboardOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchDashboardOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___LaunchDashboardOverlay(__IVRApplications___LaunchDashboardOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___LaunchDashboardOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_CancelApplicationLaunch
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8292))
// CS Name: ::IVRApplications::_CancelApplicationLaunch*
class CORDL_TYPE __IVRApplications___CancelApplicationLaunch : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d7810, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d78e4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchAppKey);

  /// @brief Method BeginInvoke, addr 0x27d78f8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d7918, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___CancelApplicationLaunch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___CancelApplicationLaunch(__IVRApplications___CancelApplicationLaunch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___CancelApplicationLaunch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___CancelApplicationLaunch(__IVRApplications___CancelApplicationLaunch const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___CancelApplicationLaunch();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_IdentifyApplication
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8293))
// CS Name: ::IVRApplications::_IdentifyApplication*
class CORDL_TYPE __IVRApplications___IdentifyApplication : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___IdentifyApplication* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d7940, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d7a04, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(uint32_t unProcessId, ::StringW pchAppKey);

  /// @brief Method BeginInvoke, addr 0x27d7a18, size 0x90, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unProcessId, ::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d7aa8, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___IdentifyApplication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___IdentifyApplication(__IVRApplications___IdentifyApplication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___IdentifyApplication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___IdentifyApplication(__IVRApplications___IdentifyApplication const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___IdentifyApplication();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___IdentifyApplication, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetApplicationProcessId
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8294))
// CS Name: ::IVRApplications::_GetApplicationProcessId*
class CORDL_TYPE __IVRApplications___GetApplicationProcessId : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetApplicationProcessId* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d7ad0, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d7ba4, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchAppKey);

  /// @brief Method BeginInvoke, addr 0x27d7bb8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d7bd8, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationProcessId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetApplicationProcessId(__IVRApplications___GetApplicationProcessId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationProcessId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetApplicationProcessId(__IVRApplications___GetApplicationProcessId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetApplicationProcessId();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationProcessId, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetApplicationsErrorNameFromEnum
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8295))
// CS Name: ::IVRApplications::_GetApplicationsErrorNameFromEnum*
class CORDL_TYPE __IVRApplications___GetApplicationsErrorNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d7c00, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d7cc4, size 0x14, virtual true, abstract: false, final false
  inline void* Invoke(::OVR::OpenVR::EVRApplicationError error);

  /// @brief Method BeginInvoke, addr 0x27d7cd8, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRApplicationError error, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d7d5c, size 0x28, virtual true, abstract: false, final false
  inline void* EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationsErrorNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetApplicationsErrorNameFromEnum(__IVRApplications___GetApplicationsErrorNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationsErrorNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetApplicationsErrorNameFromEnum(__IVRApplications___GetApplicationsErrorNameFromEnum const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetApplicationsErrorNameFromEnum();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetApplicationPropertyString
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8296))
// CS Name: ::IVRApplications::_GetApplicationPropertyString*
class CORDL_TYPE __IVRApplications___GetApplicationPropertyString : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d7d84, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d7e5c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::System::Text::StringBuilder* pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen,
                         ByRef<::OVR::OpenVR::EVRApplicationError> peError);

  /// @brief Method BeginInvoke, addr 0x27d7e70, size 0xfc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::System::Text::StringBuilder* pchPropertyValueBuffer,
                                             uint32_t unPropertyValueBufferLen, ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d7f6c, size 0x2c, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationPropertyString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetApplicationPropertyString(__IVRApplications___GetApplicationPropertyString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationPropertyString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetApplicationPropertyString(__IVRApplications___GetApplicationPropertyString const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetApplicationPropertyString();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetApplicationPropertyBool
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8297))
// CS Name: ::IVRApplications::_GetApplicationPropertyBool*
class CORDL_TYPE __IVRApplications___GetApplicationPropertyBool : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d7f98, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d8070, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<::OVR::OpenVR::EVRApplicationError> peError);

  /// @brief Method BeginInvoke, addr 0x27d8084, size 0xc8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d814c, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationPropertyBool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetApplicationPropertyBool(__IVRApplications___GetApplicationPropertyBool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationPropertyBool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetApplicationPropertyBool(__IVRApplications___GetApplicationPropertyBool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetApplicationPropertyBool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetApplicationPropertyUint64
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8298))
// CS Name: ::IVRApplications::_GetApplicationPropertyUint64*
class CORDL_TYPE __IVRApplications___GetApplicationPropertyUint64 : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d8178, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d8250, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<::OVR::OpenVR::EVRApplicationError> peError);

  /// @brief Method BeginInvoke, addr 0x27d8264, size 0xc8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d832c, size 0x2c, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationPropertyUint64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetApplicationPropertyUint64(__IVRApplications___GetApplicationPropertyUint64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationPropertyUint64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetApplicationPropertyUint64(__IVRApplications___GetApplicationPropertyUint64 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetApplicationPropertyUint64();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetApplicationAutoLaunch
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8299))
// CS Name: ::IVRApplications::_SetApplicationAutoLaunch*
class CORDL_TYPE __IVRApplications___SetApplicationAutoLaunch : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d8358, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d8430, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey, bool bAutoLaunch);

  /// @brief Method BeginInvoke, addr 0x27d8448, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, bool bAutoLaunch, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d84e0, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___SetApplicationAutoLaunch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___SetApplicationAutoLaunch(__IVRApplications___SetApplicationAutoLaunch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___SetApplicationAutoLaunch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___SetApplicationAutoLaunch(__IVRApplications___SetApplicationAutoLaunch const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___SetApplicationAutoLaunch();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetApplicationAutoLaunch
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8300))
// CS Name: ::IVRApplications::_GetApplicationAutoLaunch*
class CORDL_TYPE __IVRApplications___GetApplicationAutoLaunch : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d8508, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d85dc, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchAppKey);

  /// @brief Method BeginInvoke, addr 0x27d85f0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d8610, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationAutoLaunch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetApplicationAutoLaunch(__IVRApplications___GetApplicationAutoLaunch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationAutoLaunch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetApplicationAutoLaunch(__IVRApplications___GetApplicationAutoLaunch const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetApplicationAutoLaunch();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetDefaultApplicationForMimeType
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8301))
// CS Name: ::IVRApplications::_SetDefaultApplicationForMimeType*
class CORDL_TYPE __IVRApplications___SetDefaultApplicationForMimeType : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d8638, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d8710, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey, ::StringW pchMimeType);

  /// @brief Method BeginInvoke, addr 0x27d8724, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::StringW pchMimeType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d874c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___SetDefaultApplicationForMimeType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___SetDefaultApplicationForMimeType(__IVRApplications___SetDefaultApplicationForMimeType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___SetDefaultApplicationForMimeType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___SetDefaultApplicationForMimeType(__IVRApplications___SetDefaultApplicationForMimeType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___SetDefaultApplicationForMimeType();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetDefaultApplicationForMimeType
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8302))
// CS Name: ::IVRApplications::_GetDefaultApplicationForMimeType*
class CORDL_TYPE __IVRApplications___GetDefaultApplicationForMimeType : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d8774, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d884c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  /// @brief Method BeginInvoke, addr 0x27d8860, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d88f8, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetDefaultApplicationForMimeType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetDefaultApplicationForMimeType(__IVRApplications___GetDefaultApplicationForMimeType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetDefaultApplicationForMimeType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetDefaultApplicationForMimeType(__IVRApplications___GetDefaultApplicationForMimeType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetDefaultApplicationForMimeType();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetApplicationSupportedMimeTypes
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8303))
// CS Name: ::IVRApplications::_GetApplicationSupportedMimeTypes*
class CORDL_TYPE __IVRApplications___GetApplicationSupportedMimeTypes : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d8920, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d89f8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchAppKey, ::System::Text::StringBuilder* pchMimeTypesBuffer, uint32_t unMimeTypesBuffer);

  /// @brief Method BeginInvoke, addr 0x27d8a0c, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::Text::StringBuilder* pchMimeTypesBuffer, uint32_t unMimeTypesBuffer, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d8aa4, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationSupportedMimeTypes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetApplicationSupportedMimeTypes(__IVRApplications___GetApplicationSupportedMimeTypes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationSupportedMimeTypes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetApplicationSupportedMimeTypes(__IVRApplications___GetApplicationSupportedMimeTypes const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetApplicationSupportedMimeTypes();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetApplicationsThatSupportMimeType
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8304))
// CS Name: ::IVRApplications::_GetApplicationsThatSupportMimeType*
class CORDL_TYPE __IVRApplications___GetApplicationsThatSupportMimeType : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d8acc, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d8ba4, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer);

  /// @brief Method BeginInvoke, addr 0x27d8bb8, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchMimeType, ::System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d8c50, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationsThatSupportMimeType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetApplicationsThatSupportMimeType(__IVRApplications___GetApplicationsThatSupportMimeType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationsThatSupportMimeType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetApplicationsThatSupportMimeType(__IVRApplications___GetApplicationsThatSupportMimeType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetApplicationsThatSupportMimeType();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetApplicationLaunchArguments
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8305))
// CS Name: ::IVRApplications::_GetApplicationLaunchArguments*
class CORDL_TYPE __IVRApplications___GetApplicationLaunchArguments : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d8c78, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d8d3c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t unHandle, ::System::Text::StringBuilder* pchArgs, uint32_t unArgs);

  /// @brief Method BeginInvoke, addr 0x27d8d50, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unHandle, ::System::Text::StringBuilder* pchArgs, uint32_t unArgs, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d8df4, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationLaunchArguments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetApplicationLaunchArguments(__IVRApplications___GetApplicationLaunchArguments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationLaunchArguments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetApplicationLaunchArguments(__IVRApplications___GetApplicationLaunchArguments const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetApplicationLaunchArguments();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetStartingApplication
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8306))
// CS Name: ::IVRApplications::_GetStartingApplication*
class CORDL_TYPE __IVRApplications___GetStartingApplication : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetStartingApplication* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d8e1c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d8ef4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);

  /// @brief Method BeginInvoke, addr 0x27d8f08, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* pchAppKeyBuffer, uint32_t unAppKeyBufferLen, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d8f9c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetStartingApplication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetStartingApplication(__IVRApplications___GetStartingApplication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetStartingApplication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetStartingApplication(__IVRApplications___GetStartingApplication const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetStartingApplication();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetStartingApplication, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetTransitionState
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8307))
// CS Name: ::IVRApplications::_GetTransitionState*
class CORDL_TYPE __IVRApplications___GetTransitionState : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetTransitionState* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d8fc4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d9080, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationTransitionState Invoke();

  /// @brief Method BeginInvoke, addr 0x27d9094, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d90b4, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationTransitionState EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetTransitionState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetTransitionState(__IVRApplications___GetTransitionState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetTransitionState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetTransitionState(__IVRApplications___GetTransitionState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetTransitionState();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetTransitionState, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_PerformApplicationPrelaunchCheck
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8308))
// CS Name: ::IVRApplications::_PerformApplicationPrelaunchCheck*
class CORDL_TYPE __IVRApplications___PerformApplicationPrelaunchCheck : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d90dc, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d91b0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey);

  /// @brief Method BeginInvoke, addr 0x27d91c4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d91e4, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___PerformApplicationPrelaunchCheck", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___PerformApplicationPrelaunchCheck(__IVRApplications___PerformApplicationPrelaunchCheck&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___PerformApplicationPrelaunchCheck", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___PerformApplicationPrelaunchCheck(__IVRApplications___PerformApplicationPrelaunchCheck const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___PerformApplicationPrelaunchCheck();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetApplicationsTransitionStateNameFromEnum
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8309))
// CS Name: ::IVRApplications::_GetApplicationsTransitionStateNameFromEnum*
class CORDL_TYPE __IVRApplications___GetApplicationsTransitionStateNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d920c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d92d0, size 0x14, virtual true, abstract: false, final false
  inline void* Invoke(::OVR::OpenVR::EVRApplicationTransitionState state);

  /// @brief Method BeginInvoke, addr 0x27d92e4, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRApplicationTransitionState state, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d9368, size 0x28, virtual true, abstract: false, final false
  inline void* EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationsTransitionStateNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetApplicationsTransitionStateNameFromEnum(__IVRApplications___GetApplicationsTransitionStateNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetApplicationsTransitionStateNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetApplicationsTransitionStateNameFromEnum(__IVRApplications___GetApplicationsTransitionStateNameFromEnum const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetApplicationsTransitionStateNameFromEnum();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_IsQuitUserPromptRequested
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8310))
// CS Name: ::IVRApplications::_IsQuitUserPromptRequested*
class CORDL_TYPE __IVRApplications___IsQuitUserPromptRequested : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d9390, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d944c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  /// @brief Method BeginInvoke, addr 0x27d9460, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d9480, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___IsQuitUserPromptRequested", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___IsQuitUserPromptRequested(__IVRApplications___IsQuitUserPromptRequested&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___IsQuitUserPromptRequested", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___IsQuitUserPromptRequested(__IVRApplications___IsQuitUserPromptRequested const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___IsQuitUserPromptRequested();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_LaunchInternalProcess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8311))
// CS Name: ::IVRApplications::_LaunchInternalProcess*
class CORDL_TYPE __IVRApplications___LaunchInternalProcess : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___LaunchInternalProcess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d94a8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d9580, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory);

  /// @brief Method BeginInvoke, addr 0x27d9594, size 0x2c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d95c0, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchInternalProcess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___LaunchInternalProcess(__IVRApplications___LaunchInternalProcess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___LaunchInternalProcess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___LaunchInternalProcess(__IVRApplications___LaunchInternalProcess const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___LaunchInternalProcess();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___LaunchInternalProcess, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetCurrentSceneProcessId
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8312))
// CS Name: ::IVRApplications::_GetCurrentSceneProcessId*
class CORDL_TYPE __IVRApplications___GetCurrentSceneProcessId : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27d95e8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27d96a4, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  /// @brief Method BeginInvoke, addr 0x27d96b8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27d96d8, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetCurrentSceneProcessId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRApplications___GetCurrentSceneProcessId(__IVRApplications___GetCurrentSceneProcessId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRApplications___GetCurrentSceneProcessId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRApplications___GetCurrentSceneProcessId(__IVRApplications___GetCurrentSceneProcessId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRApplications___GetCurrentSceneProcessId();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVRApplications
// SizeInfo { instance_size: 248, native_size: 248, calculated_instance_size: 248, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8313))
// CS Name: ::OVR.OpenVR::IVRApplications
struct CORDL_TYPE IVRApplications {
public:
  // Declarations
  using _GetCurrentSceneProcessId = ::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId;

  using _LaunchInternalProcess = ::OVR::OpenVR::__IVRApplications___LaunchInternalProcess;

  using _IsQuitUserPromptRequested = ::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested;

  using _GetApplicationsTransitionStateNameFromEnum = ::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum;

  using _PerformApplicationPrelaunchCheck = ::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck;

  using _GetTransitionState = ::OVR::OpenVR::__IVRApplications___GetTransitionState;

  using _GetStartingApplication = ::OVR::OpenVR::__IVRApplications___GetStartingApplication;

  using _GetApplicationLaunchArguments = ::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments;

  using _GetApplicationsThatSupportMimeType = ::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType;

  using _GetApplicationSupportedMimeTypes = ::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes;

  using _GetDefaultApplicationForMimeType = ::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType;

  using _SetDefaultApplicationForMimeType = ::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType;

  using _GetApplicationAutoLaunch = ::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch;

  using _SetApplicationAutoLaunch = ::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch;

  using _GetApplicationPropertyUint64 = ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64;

  using _GetApplicationPropertyBool = ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool;

  using _GetApplicationPropertyString = ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString;

  using _GetApplicationsErrorNameFromEnum = ::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum;

  using _GetApplicationProcessId = ::OVR::OpenVR::__IVRApplications___GetApplicationProcessId;

  using _IdentifyApplication = ::OVR::OpenVR::__IVRApplications___IdentifyApplication;

  using _CancelApplicationLaunch = ::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch;

  using _LaunchDashboardOverlay = ::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay;

  using _LaunchApplicationFromMimeType = ::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType;

  using _LaunchTemplateApplication = ::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication;

  using _LaunchApplication = ::OVR::OpenVR::__IVRApplications___LaunchApplication;

  using _GetApplicationKeyByProcessId = ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId;

  using _GetApplicationKeyByIndex = ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex;

  using _GetApplicationCount = ::OVR::OpenVR::__IVRApplications___GetApplicationCount;

  using _IsApplicationInstalled = ::OVR::OpenVR::__IVRApplications___IsApplicationInstalled;

  using _RemoveApplicationManifest = ::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest;

  using _AddApplicationManifest = ::OVR::OpenVR::__IVRApplications___AddApplicationManifest;

  // Ctor Parameters [CppParam { name: "AddApplicationManifest", ty: "::OVR::OpenVR::__IVRApplications___AddApplicationManifest*", modifiers: "", def_value: None }, CppParam { name:
  // "RemoveApplicationManifest", ty: "::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest*", modifiers: "", def_value: None }, CppParam { name: "IsApplicationInstalled", ty:
  // "::OVR::OpenVR::__IVRApplications___IsApplicationInstalled*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationCount", ty:
  // "::OVR::OpenVR::__IVRApplications___GetApplicationCount*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationKeyByIndex", ty:
  // "::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationKeyByProcessId", ty:
  // "::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId*", modifiers: "", def_value: None }, CppParam { name: "LaunchApplication", ty:
  // "::OVR::OpenVR::__IVRApplications___LaunchApplication*", modifiers: "", def_value: None }, CppParam { name: "LaunchTemplateApplication", ty:
  // "::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication*", modifiers: "", def_value: None }, CppParam { name: "LaunchApplicationFromMimeType", ty:
  // "::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType*", modifiers: "", def_value: None }, CppParam { name: "LaunchDashboardOverlay", ty:
  // "::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay*", modifiers: "", def_value: None }, CppParam { name: "CancelApplicationLaunch", ty:
  // "::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch*", modifiers: "", def_value: None }, CppParam { name: "IdentifyApplication", ty:
  // "::OVR::OpenVR::__IVRApplications___IdentifyApplication*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationProcessId", ty:
  // "::OVR::OpenVR::__IVRApplications___GetApplicationProcessId*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationsErrorNameFromEnum", ty:
  // "::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationPropertyString", ty:
  // "::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationPropertyBool", ty:
  // "::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationPropertyUint64", ty:
  // "::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64*", modifiers: "", def_value: None }, CppParam { name: "SetApplicationAutoLaunch", ty:
  // "::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationAutoLaunch", ty:
  // "::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch*", modifiers: "", def_value: None }, CppParam { name: "SetDefaultApplicationForMimeType", ty:
  // "::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType*", modifiers: "", def_value: None }, CppParam { name: "GetDefaultApplicationForMimeType", ty:
  // "::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationSupportedMimeTypes", ty:
  // "::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationsThatSupportMimeType", ty:
  // "::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationLaunchArguments", ty:
  // "::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments*", modifiers: "", def_value: None }, CppParam { name: "GetStartingApplication", ty:
  // "::OVR::OpenVR::__IVRApplications___GetStartingApplication*", modifiers: "", def_value: None }, CppParam { name: "GetTransitionState", ty:
  // "::OVR::OpenVR::__IVRApplications___GetTransitionState*", modifiers: "", def_value: None }, CppParam { name: "PerformApplicationPrelaunchCheck", ty:
  // "::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck*", modifiers: "", def_value: None }, CppParam { name: "GetApplicationsTransitionStateNameFromEnum", ty:
  // "::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "IsQuitUserPromptRequested", ty:
  // "::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested*", modifiers: "", def_value: None }, CppParam { name: "LaunchInternalProcess", ty:
  // "::OVR::OpenVR::__IVRApplications___LaunchInternalProcess*", modifiers: "", def_value: None }, CppParam { name: "GetCurrentSceneProcessId", ty:
  // "::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId*", modifiers: "", def_value: None }]
  constexpr IVRApplications(
      ::OVR::OpenVR::__IVRApplications___AddApplicationManifest* AddApplicationManifest, ::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest* RemoveApplicationManifest,
      ::OVR::OpenVR::__IVRApplications___IsApplicationInstalled* IsApplicationInstalled, ::OVR::OpenVR::__IVRApplications___GetApplicationCount* GetApplicationCount,
      ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex* GetApplicationKeyByIndex, ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId* GetApplicationKeyByProcessId,
      ::OVR::OpenVR::__IVRApplications___LaunchApplication* LaunchApplication, ::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication* LaunchTemplateApplication,
      ::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType* LaunchApplicationFromMimeType, ::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay* LaunchDashboardOverlay,
      ::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch* CancelApplicationLaunch, ::OVR::OpenVR::__IVRApplications___IdentifyApplication* IdentifyApplication,
      ::OVR::OpenVR::__IVRApplications___GetApplicationProcessId* GetApplicationProcessId, ::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum* GetApplicationsErrorNameFromEnum,
      ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString* GetApplicationPropertyString, ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool* GetApplicationPropertyBool,
      ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64* GetApplicationPropertyUint64, ::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch* SetApplicationAutoLaunch,
      ::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch* GetApplicationAutoLaunch, ::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType* SetDefaultApplicationForMimeType,
      ::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType* GetDefaultApplicationForMimeType,
      ::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes* GetApplicationSupportedMimeTypes,
      ::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType* GetApplicationsThatSupportMimeType,
      ::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments* GetApplicationLaunchArguments, ::OVR::OpenVR::__IVRApplications___GetStartingApplication* GetStartingApplication,
      ::OVR::OpenVR::__IVRApplications___GetTransitionState* GetTransitionState, ::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck* PerformApplicationPrelaunchCheck,
      ::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum* GetApplicationsTransitionStateNameFromEnum,
      ::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested* IsQuitUserPromptRequested, ::OVR::OpenVR::__IVRApplications___LaunchInternalProcess* LaunchInternalProcess,
      ::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId* GetCurrentSceneProcessId) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRApplications();

  /// @brief Field AddApplicationManifest, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___AddApplicationManifest* AddApplicationManifest;

  /// @brief Field RemoveApplicationManifest, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest* RemoveApplicationManifest;

  /// @brief Field IsApplicationInstalled, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___IsApplicationInstalled* IsApplicationInstalled;

  /// @brief Field GetApplicationCount, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetApplicationCount* GetApplicationCount;

  /// @brief Field GetApplicationKeyByIndex, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex* GetApplicationKeyByIndex;

  /// @brief Field GetApplicationKeyByProcessId, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId* GetApplicationKeyByProcessId;

  /// @brief Field LaunchApplication, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___LaunchApplication* LaunchApplication;

  /// @brief Field LaunchTemplateApplication, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication* LaunchTemplateApplication;

  /// @brief Field LaunchApplicationFromMimeType, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType* LaunchApplicationFromMimeType;

  /// @brief Field LaunchDashboardOverlay, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay* LaunchDashboardOverlay;

  /// @brief Field CancelApplicationLaunch, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch* CancelApplicationLaunch;

  /// @brief Field IdentifyApplication, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___IdentifyApplication* IdentifyApplication;

  /// @brief Field GetApplicationProcessId, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetApplicationProcessId* GetApplicationProcessId;

  /// @brief Field GetApplicationsErrorNameFromEnum, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum* GetApplicationsErrorNameFromEnum;

  /// @brief Field GetApplicationPropertyString, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString* GetApplicationPropertyString;

  /// @brief Field GetApplicationPropertyBool, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool* GetApplicationPropertyBool;

  /// @brief Field GetApplicationPropertyUint64, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64* GetApplicationPropertyUint64;

  /// @brief Field SetApplicationAutoLaunch, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch* SetApplicationAutoLaunch;

  /// @brief Field GetApplicationAutoLaunch, offset: 0x90, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch* GetApplicationAutoLaunch;

  /// @brief Field SetDefaultApplicationForMimeType, offset: 0x98, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType* SetDefaultApplicationForMimeType;

  /// @brief Field GetDefaultApplicationForMimeType, offset: 0xa0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType* GetDefaultApplicationForMimeType;

  /// @brief Field GetApplicationSupportedMimeTypes, offset: 0xa8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes* GetApplicationSupportedMimeTypes;

  /// @brief Field GetApplicationsThatSupportMimeType, offset: 0xb0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType* GetApplicationsThatSupportMimeType;

  /// @brief Field GetApplicationLaunchArguments, offset: 0xb8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments* GetApplicationLaunchArguments;

  /// @brief Field GetStartingApplication, offset: 0xc0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetStartingApplication* GetStartingApplication;

  /// @brief Field GetTransitionState, offset: 0xc8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetTransitionState* GetTransitionState;

  /// @brief Field PerformApplicationPrelaunchCheck, offset: 0xd0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck* PerformApplicationPrelaunchCheck;

  /// @brief Field GetApplicationsTransitionStateNameFromEnum, offset: 0xd8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum* GetApplicationsTransitionStateNameFromEnum;

  /// @brief Field IsQuitUserPromptRequested, offset: 0xe0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested* IsQuitUserPromptRequested;

  /// @brief Field LaunchInternalProcess, offset: 0xe8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___LaunchInternalProcess* LaunchInternalProcess;

  /// @brief Field GetCurrentSceneProcessId, offset: 0xf0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId* GetCurrentSceneProcessId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xf8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRApplications, 0xf8>, "Size mismatch!");

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

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___AddApplicationManifest);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___AddApplicationManifest*, "OVR.OpenVR", "IVRApplications/_AddApplicationManifest");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___CancelApplicationLaunch*, "OVR.OpenVR", "IVRApplications/_CancelApplicationLaunch");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationAutoLaunch*, "OVR.OpenVR", "IVRApplications/_GetApplicationAutoLaunch");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationCount);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationCount*, "OVR.OpenVR", "IVRApplications/_GetApplicationCount");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByIndex*, "OVR.OpenVR", "IVRApplications/_GetApplicationKeyByIndex");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationKeyByProcessId*, "OVR.OpenVR", "IVRApplications/_GetApplicationKeyByProcessId");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationLaunchArguments*, "OVR.OpenVR", "IVRApplications/_GetApplicationLaunchArguments");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationProcessId);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationProcessId*, "OVR.OpenVR", "IVRApplications/_GetApplicationProcessId");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyBool*, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyBool");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyString*, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyString");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationPropertyUint64*, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyUint64");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationSupportedMimeTypes*, "OVR.OpenVR", "IVRApplications/_GetApplicationSupportedMimeTypes");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationsErrorNameFromEnum*, "OVR.OpenVR", "IVRApplications/_GetApplicationsErrorNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationsThatSupportMimeType*, "OVR.OpenVR", "IVRApplications/_GetApplicationsThatSupportMimeType");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetApplicationsTransitionStateNameFromEnum*, "OVR.OpenVR", "IVRApplications/_GetApplicationsTransitionStateNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetCurrentSceneProcessId*, "OVR.OpenVR", "IVRApplications/_GetCurrentSceneProcessId");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetDefaultApplicationForMimeType*, "OVR.OpenVR", "IVRApplications/_GetDefaultApplicationForMimeType");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetStartingApplication);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetStartingApplication*, "OVR.OpenVR", "IVRApplications/_GetStartingApplication");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___GetTransitionState);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___GetTransitionState*, "OVR.OpenVR", "IVRApplications/_GetTransitionState");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___IdentifyApplication);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___IdentifyApplication*, "OVR.OpenVR", "IVRApplications/_IdentifyApplication");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___IsApplicationInstalled);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___IsApplicationInstalled*, "OVR.OpenVR", "IVRApplications/_IsApplicationInstalled");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___IsQuitUserPromptRequested*, "OVR.OpenVR", "IVRApplications/_IsQuitUserPromptRequested");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___LaunchApplication);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___LaunchApplication*, "OVR.OpenVR", "IVRApplications/_LaunchApplication");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___LaunchApplicationFromMimeType*, "OVR.OpenVR", "IVRApplications/_LaunchApplicationFromMimeType");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___LaunchDashboardOverlay*, "OVR.OpenVR", "IVRApplications/_LaunchDashboardOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___LaunchInternalProcess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___LaunchInternalProcess*, "OVR.OpenVR", "IVRApplications/_LaunchInternalProcess");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___LaunchTemplateApplication*, "OVR.OpenVR", "IVRApplications/_LaunchTemplateApplication");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___PerformApplicationPrelaunchCheck*, "OVR.OpenVR", "IVRApplications/_PerformApplicationPrelaunchCheck");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___RemoveApplicationManifest*, "OVR.OpenVR", "IVRApplications/_RemoveApplicationManifest");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___SetApplicationAutoLaunch*, "OVR.OpenVR", "IVRApplications/_SetApplicationAutoLaunch");
NEED_NO_BOX(::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRApplications___SetDefaultApplicationForMimeType*, "OVR.OpenVR", "IVRApplications/_SetDefaultApplicationForMimeType");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications, "OVR.OpenVR", "IVRApplications");

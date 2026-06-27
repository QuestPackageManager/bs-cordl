#pragma once
// IWYU pragma private; include "Oculus/Platform/CAPI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__KeyValuePairType_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CAPI)
namespace Oculus::Platform {
struct AbuseReportType;
}
namespace Oculus::Platform {
struct AbuseReportVideoMode;
}
namespace Oculus::Platform {
struct AccountAgeCategory;
}
namespace Oculus::Platform {
struct AchievementType;
}
namespace Oculus::Platform {
struct AppAgeCategory;
}
namespace Oculus::Platform {
struct AppInstallResult;
}
namespace Oculus::Platform {
struct AppStatus;
}
namespace Oculus::Platform {
class CAPI_FilterCallback;
}
namespace Oculus::Platform {
struct CAPI_OculusInitParams;
}
namespace Oculus::Platform {
struct CAPI_ovrKeyValuePair;
}
namespace Oculus::Platform {
struct CAPI_ovrNetSyncVec3;
}
namespace Oculus::Platform {
struct ChallengeCreationType;
}
namespace Oculus::Platform {
struct ChallengeViewerFilter;
}
namespace Oculus::Platform {
struct ChallengeVisibility;
}
namespace Oculus::Platform {
struct InitConfigOptions;
}
namespace Oculus::Platform {
struct LaunchResult;
}
namespace Oculus::Platform {
struct LaunchType;
}
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
namespace Oculus::Platform {
struct LivestreamingAudience;
}
namespace Oculus::Platform {
struct LivestreamingMicrophoneStatus;
}
namespace Oculus::Platform {
struct LivestreamingStartStatus;
}
namespace Oculus::Platform {
struct LogEventName;
}
namespace Oculus::Platform {
struct MediaContentType;
}
namespace Oculus::Platform {
struct Message_MessageType;
}
namespace Oculus::Platform {
struct MultiplayerErrorErrorKey;
}
namespace Oculus::Platform {
struct NetSyncConnectionStatus;
}
namespace Oculus::Platform {
struct NetSyncDisconnectReason;
}
namespace Oculus::Platform {
struct NetSyncVoipMicSource;
}
namespace Oculus::Platform {
struct NetSyncVoipStreamMode;
}
namespace Oculus::Platform {
struct OfferTerm;
}
namespace Oculus::Platform {
struct OfferType;
}
namespace Oculus::Platform {
struct PartyUpdateAction;
}
namespace Oculus::Platform {
struct PlatformInitializeResult;
}
namespace Oculus::Platform {
struct ProductType;
}
namespace Oculus::Platform {
struct ReportRequestResponse;
}
namespace Oculus::Platform {
struct SdkAccountType;
}
namespace Oculus::Platform {
struct ServiceProvider;
}
namespace Oculus::Platform {
struct ShareMediaStatus;
}
namespace Oculus::Platform {
struct SystemVoipStatus;
}
namespace Oculus::Platform {
struct TimeWindow;
}
namespace Oculus::Platform {
struct UserPresenceStatus;
}
namespace Oculus::Platform {
struct VoipBitrate;
}
namespace Oculus::Platform {
struct VoipDtxState;
}
namespace Oculus::Platform {
struct VoipMuteState;
}
namespace Oculus::Platform {
struct VoipSampleRate;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Text {
class UTF8Encoding;
}
namespace System {
class Array;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
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
namespace System {
struct UIntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class CAPI;
}
namespace Oculus::Platform {
class CAPI_FilterCallback;
}
namespace Oculus::Platform {
struct CAPI_OculusInitParams;
}
namespace Oculus::Platform {
struct CAPI_ovrKeyValuePair;
}
namespace Oculus::Platform {
struct CAPI_ovrNetSyncVec3;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::CAPI);
MARK_REF_PTR_T(::Oculus::Platform::CAPI_FilterCallback);
MARK_VAL_T(::Oculus::Platform::CAPI_OculusInitParams);
MARK_VAL_T(::Oculus::Platform::CAPI_ovrKeyValuePair);
MARK_VAL_T(::Oculus::Platform::CAPI_ovrNetSyncVec3);
// Dependencies Oculus.Platform.KeyValuePairType
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.CAPI/ovrKeyValuePair
struct CORDL_TYPE CAPI_ovrKeyValuePair {
public:
// Declarations
/// @brief Method .ctor, addr 0x5c7c278, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, ::StringW  value) ;

/// @brief Method .ctor, addr 0x5c7c290, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, double_t  value) ;

/// @brief Method .ctor, addr 0x5c7bd0c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CAPI_ovrKeyValuePair() ;

// Ctor Parameters [CppParam { name: "key_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "valueType_", ty: "::Oculus::Platform::KeyValuePairType", modifiers: "", def_value: None }, CppParam { name: "stringValue_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "intValue_", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "doubleValue_", ty: "double_t", modifiers: "", def_value: None }]
constexpr CAPI_ovrKeyValuePair(::StringW  key_, ::Oculus::Platform::KeyValuePairType  valueType_, ::StringW  stringValue_, int32_t  intValue_, double_t  doubleValue_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17811};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field key_, offset: 0x0, size: 0x8, def value: None
 ::StringW  key_;

/// @brief Field valueType_, offset: 0x8, size: 0x4, def value: None
 ::Oculus::Platform::KeyValuePairType  valueType_;

/// @brief Field stringValue_, offset: 0x10, size: 0x8, def value: None
 ::StringW  stringValue_;

/// @brief Field intValue_, offset: 0x18, size: 0x4, def value: None
 int32_t  intValue_;

/// @brief Field doubleValue_, offset: 0x20, size: 0x8, def value: None
 double_t  doubleValue_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::CAPI_ovrKeyValuePair, key_) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::CAPI_ovrKeyValuePair, valueType_) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::CAPI_ovrKeyValuePair, stringValue_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::CAPI_ovrKeyValuePair, intValue_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::CAPI_ovrKeyValuePair, doubleValue_) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::CAPI_ovrKeyValuePair, 0x28>, "Size mismatch!");

} // namespace end def Oculus::Platform
// Dependencies 
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.CAPI/ovrNetSyncVec3
struct CORDL_TYPE CAPI_ovrNetSyncVec3 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CAPI_ovrNetSyncVec3() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
constexpr CAPI_ovrNetSyncVec3(float_t  x, float_t  y, float_t  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17812};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 float_t  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::CAPI_ovrNetSyncVec3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::CAPI_ovrNetSyncVec3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::CAPI_ovrNetSyncVec3, z) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::CAPI_ovrNetSyncVec3, 0xc>, "Size mismatch!");

} // namespace end def Oculus::Platform
// Dependencies 
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.CAPI/OculusInitParams
struct CORDL_TYPE CAPI_OculusInitParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CAPI_OculusInitParams() ;

// Ctor Parameters [CppParam { name: "sType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "email", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "appId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "uriPrefixOverride", ty: "::StringW", modifiers: "", def_value: None }]
constexpr CAPI_OculusInitParams(int32_t  sType, ::StringW  email, ::StringW  password, uint64_t  appId, ::StringW  uriPrefixOverride) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17813};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field sType, offset: 0x0, size: 0x4, def value: None
 int32_t  sType;

/// @brief Field email, offset: 0x8, size: 0x8, def value: None
 ::StringW  email;

/// @brief Field password, offset: 0x10, size: 0x8, def value: None
 ::StringW  password;

/// @brief Field appId, offset: 0x18, size: 0x8, def value: None
 uint64_t  appId;

/// @brief Field uriPrefixOverride, offset: 0x20, size: 0x8, def value: None
 ::StringW  uriPrefixOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::CAPI_OculusInitParams, sType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::CAPI_OculusInitParams, email) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::CAPI_OculusInitParams, password) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::CAPI_OculusInitParams, appId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::CAPI_OculusInitParams, uriPrefixOverride) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::CAPI_OculusInitParams, 0x28>, "Size mismatch!");

} // namespace end def Oculus::Platform
// Dependencies System.MulticastDelegate
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.CAPI/FilterCallback
class CORDL_TYPE CAPI_FilterCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5c9a150, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<int16_t,::Array<int16_t>*>>  pcmData, ::System::UIntPtr  pcmDataLength, int32_t  frequency, int32_t  numChannels, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5c9a1e0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5c9a13c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::ByRef<::ArrayW<int16_t,::Array<int16_t>*>>  pcmData, ::System::UIntPtr  pcmDataLength, int32_t  frequency, int32_t  numChannels) ;

static inline ::Oculus::Platform::CAPI_FilterCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5c9a0bc, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CAPI_FilterCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CAPI_FilterCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CAPI_FilterCallback(CAPI_FilterCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CAPI_FilterCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CAPI_FilterCallback(CAPI_FilterCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17814};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::CAPI_FilterCallback, 0x80>, "Size mismatch!");

} // namespace end def Oculus::Platform
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.CAPI
class CORDL_TYPE CAPI : public ::System::Object {
public:
// Declarations
using FilterCallback = ::Oculus::Platform::CAPI_FilterCallback;

using OculusInitParams = ::Oculus::Platform::CAPI_OculusInitParams;

using ovrKeyValuePair = ::Oculus::Platform::CAPI_ovrKeyValuePair;

using ovrNetSyncVec3 = ::Oculus::Platform::CAPI_ovrNetSyncVec3;

/// @brief Field nativeStringEncoding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nativeStringEncoding, put=setStaticF_nativeStringEncoding)) ::System::Text::UTF8Encoding*  nativeStringEncoding;

/// @brief Method ArrayOfStructsToIntPtr, addr 0x5c7b988, size 0x17c, virtual false, abstract: false, final false
static inline ::System::IntPtr ArrayOfStructsToIntPtr(::System::Array*  ar) ;

/// @brief Method BlobFromNative, addr 0x5c7c9dc, size 0xd4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> BlobFromNative(uint32_t  size, ::System::IntPtr  pointer) ;

/// @brief Method DataStoreFromNative, addr 0x5c7c37c, size 0x164, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* DataStoreFromNative(::System::IntPtr  pointer) ;

/// @brief Method DateTimeFromNative, addr 0x5c7c7fc, size 0xa8, virtual false, abstract: false, final false
static inline ::System::DateTime DateTimeFromNative(uint64_t  seconds_since_the_one_true_epoch) ;

/// @brief Method DateTimeToNative, addr 0x5c7c8a4, size 0x138, virtual false, abstract: false, final false
static inline uint64_t DateTimeToNative(::System::DateTime  dt) ;

/// @brief Method DictionaryToOVRKeyValuePairs, addr 0x5c7bb04, size 0x208, virtual false, abstract: false, final false
static inline ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*> DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions,bool>*  dict) ;

/// @brief Method DictionaryToOVRKeyValuePairs, addr 0x5c7bd28, size 0x550, virtual false, abstract: false, final false
static inline ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*> DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dict) ;

/// @brief Method FiledataFromNative, addr 0x5c7cab0, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FiledataFromNative(uint32_t  size, ::System::IntPtr  pointer) ;

/// @brief Method GetNativeStringLengthNotIncludingNullTerminator, addr 0x5c7c790, size 0x6c, virtual false, abstract: false, final false
static inline int32_t GetNativeStringLengthNotIncludingNullTerminator(::System::IntPtr  pointer) ;

/// @brief Method IntPtrToByteArray, addr 0x5c7c2ac, size 0xd0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> IntPtrToByteArray(::System::IntPtr  data, uint64_t  size) ;

/// @brief Method LogNewEvent, addr 0x5c7dc04, size 0x394, virtual false, abstract: false, final false
static inline void LogNewEvent(::StringW  eventName, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  values) ;

/// @brief Method LogNewUnifiedEvent, addr 0x5c7db54, size 0xb0, virtual false, abstract: false, final false
static inline void LogNewUnifiedEvent(::Oculus::Platform::LogEventName  eventName, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  values) ;

static inline ::Oculus::Platform::CAPI* New_ctor() ;

/// @brief Method StringFromNative, addr 0x5c7c680, size 0x110, virtual false, abstract: false, final false
static inline ::StringW StringFromNative(::System::IntPtr  pointer) ;

/// @brief Method StringToNative, addr 0x5c7cb58, size 0x17c, virtual false, abstract: false, final false
static inline ::System::IntPtr StringToNative(::StringW  s) ;

/// @brief Method .ctor, addr 0x5c9a028, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::UTF8Encoding* getStaticF_nativeStringEncoding() ;

/// @brief Method ovr_AbuseReportOptions_Create, addr 0x5c795a4, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AbuseReportOptions_Create() ;

/// @brief Method ovr_AbuseReportOptions_Destroy, addr 0x5c79888, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AbuseReportOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_AbuseReportOptions_SetPreventPeopleChooser, addr 0x5c79674, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AbuseReportOptions_SetPreventPeopleChooser(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_AbuseReportOptions_SetReportType, addr 0x5c79764, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AbuseReportOptions_SetReportType(::System::IntPtr  handle, ::Oculus::Platform::AbuseReportType  value) ;

/// @brief Method ovr_AbuseReportRecording_GetRecordingUuid, addr 0x5c86d28, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AbuseReportRecording_GetRecordingUuid(::System::IntPtr  obj) ;

/// @brief Method ovr_AbuseReportRecording_GetRecordingUuid_Native, addr 0x5c86d84, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AbuseReportRecording_GetRecordingUuid_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AbuseReport_LaunchAdvancedReportFlow, addr 0x5c7f728, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_AbuseReport_LaunchAdvancedReportFlow(uint64_t  content_id, ::System::IntPtr  abuse_report_options) ;

/// @brief Method ovr_AbuseReport_ReportRequestHandled, addr 0x5c7f7ac, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AbuseReport_ReportRequestHandled(::Oculus::Platform::ReportRequestResponse  response) ;

/// @brief Method ovr_AchievementDefinitionArray_GetElement, addr 0x5c8704c, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementDefinitionArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_AchievementDefinitionArray_GetNextUrl, addr 0x5c870d0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementDefinitionArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetNextUrl_Native, addr 0x5c8712c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementDefinitionArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetSize, addr 0x5c871a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_AchievementDefinitionArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinitionArray_HasNextPage, addr 0x5c87224, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AchievementDefinitionArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetBitfieldLength, addr 0x5c86e00, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_AchievementDefinition_GetBitfieldLength(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetName, addr 0x5c86e7c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementDefinition_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetName_Native, addr 0x5c86ed8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementDefinition_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetTarget, addr 0x5c86f54, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AchievementDefinition_GetTarget(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetType, addr 0x5c86fd0, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::AchievementType ovr_AchievementDefinition_GetType(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgressArray_GetElement, addr 0x5c87630, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementProgressArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_AchievementProgressArray_GetNextUrl, addr 0x5c876b4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementProgressArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgressArray_GetNextUrl_Native, addr 0x5c87710, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementProgressArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgressArray_GetSize, addr 0x5c8778c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_AchievementProgressArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgressArray_HasNextPage, addr 0x5c87808, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AchievementProgressArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetBitfield, addr 0x5c872a8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementProgress_GetBitfield(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetBitfield_Native, addr 0x5c87304, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementProgress_GetBitfield_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetCount, addr 0x5c87380, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AchievementProgress_GetCount(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetIsUnlocked, addr 0x5c873fc, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AchievementProgress_GetIsUnlocked(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetName, addr 0x5c87480, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementProgress_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetName_Native, addr 0x5c874dc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementProgress_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetUnlockTime, addr 0x5c87558, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_AchievementProgress_GetUnlockTime(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetUnlockTime_Native, addr 0x5c875b4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AchievementProgress_GetUnlockTime_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementUpdate_GetJustUnlocked, addr 0x5c8788c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AchievementUpdate_GetJustUnlocked(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementUpdate_GetName, addr 0x5c87910, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementUpdate_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementUpdate_GetName_Native, addr 0x5c8796c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementUpdate_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Achievements_AddCount, addr 0x5c7f828, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_AddCount(::StringW  name, uint64_t  count) ;

/// @brief Method ovr_Achievements_AddCount_Native, addr 0x5c7f8d8, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_AddCount_Native(::System::IntPtr  name, uint64_t  count) ;

/// @brief Method ovr_Achievements_AddFields, addr 0x5c7f95c, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_AddFields(::StringW  name, ::StringW  fields) ;

/// @brief Method ovr_Achievements_AddFields_Native, addr 0x5c7fa24, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_AddFields_Native(::System::IntPtr  name, ::System::IntPtr  fields) ;

/// @brief Method ovr_Achievements_GetAllDefinitions, addr 0x5c7faa8, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_GetAllDefinitions() ;

/// @brief Method ovr_Achievements_GetAllProgress, addr 0x5c7fb0c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_GetAllProgress() ;

/// @brief Method ovr_Achievements_GetDefinitionsByName, addr 0x5c7fb70, size 0x130, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_GetDefinitionsByName(::ArrayW<::StringW,::Array<::StringW>*>  names, int32_t  count) ;

/// @brief Method ovr_Achievements_GetProgressByName, addr 0x5c7fca0, size 0x130, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_GetProgressByName(::ArrayW<::StringW,::Array<::StringW>*>  names, int32_t  count) ;

/// @brief Method ovr_Achievements_Unlock, addr 0x5c7fdd0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_Unlock(::StringW  name) ;

/// @brief Method ovr_Achievements_Unlock_Native, addr 0x5c7fe70, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_Unlock_Native(::System::IntPtr  name) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_AddSuggestedUser, addr 0x5c79e3c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_AddSuggestedUser(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext, addr 0x5c79b54, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext(::System::IntPtr  handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers, addr 0x5c79f1c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers(::System::IntPtr  handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_Create, addr 0x5c79960, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AdvancedAbuseReportOptions_Create() ;

/// @brief Method ovr_AdvancedAbuseReportOptions_Destroy, addr 0x5c7a128, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString, addr 0x5c79a38, size 0xc0, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString(::System::IntPtr  handle, ::StringW  key, ::StringW  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native, addr 0x5c97c48, size 0x94, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native(::System::IntPtr  handle, ::System::IntPtr  key, ::System::IntPtr  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType, addr 0x5c79c3c, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetObjectType(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType_Native, addr 0x5c97cdc, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetObjectType_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetReportType, addr 0x5c79d4c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetReportType(::System::IntPtr  handle, ::Oculus::Platform::AbuseReportType  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetVideoMode, addr 0x5c7a004, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetVideoMode(::System::IntPtr  handle, ::Oculus::Platform::AbuseReportVideoMode  value) ;

/// @brief Method ovr_AppDownloadProgressResult_GetDownloadBytes, addr 0x5c879e8, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_AppDownloadProgressResult_GetDownloadBytes(::System::IntPtr  obj) ;

/// @brief Method ovr_AppDownloadProgressResult_GetDownloadedBytes, addr 0x5c87a64, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_AppDownloadProgressResult_GetDownloadedBytes(::System::IntPtr  obj) ;

/// @brief Method ovr_AppDownloadProgressResult_GetStatusCode, addr 0x5c87ae0, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::AppStatus ovr_AppDownloadProgressResult_GetStatusCode(::System::IntPtr  obj) ;

/// @brief Method ovr_AppDownloadResult_GetAppInstallResult, addr 0x5c87b5c, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::AppInstallResult ovr_AppDownloadResult_GetAppInstallResult(::System::IntPtr  obj) ;

/// @brief Method ovr_AppDownloadResult_GetTimestamp, addr 0x5c87bd8, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_AppDownloadResult_GetTimestamp(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetElement, addr 0x5c88078, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInviteArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_ApplicationInviteArray_GetNextUrl, addr 0x5c880fc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationInviteArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetNextUrl_Native, addr 0x5c88158, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInviteArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetSize, addr 0x5c881d4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_ApplicationInviteArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInviteArray_HasNextPage, addr 0x5c88250, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ApplicationInviteArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetDestination, addr 0x5c87cd0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInvite_GetDestination(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetID, addr 0x5c87d4c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationInvite_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetIsActive, addr 0x5c87dc8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ApplicationInvite_GetIsActive(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetLobbySessionId, addr 0x5c87e4c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationInvite_GetLobbySessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetLobbySessionId_Native, addr 0x5c87ea8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInvite_GetLobbySessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetMatchSessionId, addr 0x5c87f24, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationInvite_GetMatchSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetMatchSessionId_Native, addr 0x5c87f80, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInvite_GetMatchSessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetRecipient, addr 0x5c87ffc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInvite_GetRecipient(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationLifecycle_GetLaunchDetails, addr 0x5c7e034, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationLifecycle_GetLaunchDetails() ;

/// @brief Method ovr_ApplicationLifecycle_GetRegisteredPIDs, addr 0x5c801e0, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationLifecycle_GetRegisteredPIDs() ;

/// @brief Method ovr_ApplicationLifecycle_GetSessionKey, addr 0x5c80244, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationLifecycle_GetSessionKey() ;

/// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult, addr 0x5c7e098, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_ApplicationLifecycle_LogDeeplinkResult(::StringW  trackingID, ::Oculus::Platform::LaunchResult  result) ;

/// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult_Native, addr 0x5c7e138, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationLifecycle_LogDeeplinkResult_Native(::System::IntPtr  trackingID, ::Oculus::Platform::LaunchResult  result) ;

/// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey, addr 0x5c802a8, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey(::StringW  sessionKey) ;

/// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey_Native, addr 0x5c80348, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey_Native(::System::IntPtr  sessionKey) ;

/// @brief Method ovr_ApplicationOptions_Create, addr 0x5c7a4d4, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationOptions_Create() ;

/// @brief Method ovr_ApplicationOptions_Destroy, addr 0x5c7ab08, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage, addr 0x5c7a5a4, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetDeeplinkMessage(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage_Native, addr 0x5c97d60, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetDeeplinkMessage_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ApplicationOptions_SetDestinationApiName, addr 0x5c7a6b4, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetDestinationApiName(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetDestinationApiName_Native, addr 0x5c97de4, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetDestinationApiName_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ApplicationOptions_SetLobbySessionId, addr 0x5c7a7c4, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetLobbySessionId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetLobbySessionId_Native, addr 0x5c97e68, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetLobbySessionId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ApplicationOptions_SetMatchSessionId, addr 0x5c7a8d4, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetMatchSessionId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetMatchSessionId_Native, addr 0x5c97eec, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetMatchSessionId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ApplicationOptions_SetRoomId, addr 0x5c7a9e4, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetRoomId(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentCode, addr 0x5c882d4, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_ApplicationVersion_GetCurrentCode(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentName, addr 0x5c88350, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationVersion_GetCurrentName(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentName_Native, addr 0x5c883ac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationVersion_GetCurrentName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestCode, addr 0x5c88428, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_ApplicationVersion_GetLatestCode(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestName, addr 0x5c884a4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationVersion_GetLatestName(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestName_Native, addr 0x5c88500, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationVersion_GetLatestName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetReleaseDate, addr 0x5c8857c, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_ApplicationVersion_GetReleaseDate(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetSize, addr 0x5c885f8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationVersion_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetSize_Native, addr 0x5c88654, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationVersion_GetSize_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Application_CancelAppDownload, addr 0x5c7feec, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_CancelAppDownload() ;

/// @brief Method ovr_Application_CheckAppDownloadProgress, addr 0x5c7ff50, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_CheckAppDownloadProgress() ;

/// @brief Method ovr_Application_GetID, addr 0x5c87c54, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Application_GetInstalledApplications, addr 0x5c7ffb4, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_GetInstalledApplications() ;

/// @brief Method ovr_Application_GetVersion, addr 0x5c80018, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_GetVersion() ;

/// @brief Method ovr_Application_InstallAppUpdateAndRelaunch, addr 0x5c8007c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_InstallAppUpdateAndRelaunch(::System::IntPtr  deeplink_options) ;

/// @brief Method ovr_Application_LaunchOtherApp, addr 0x5c800f8, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_LaunchOtherApp(uint64_t  appID, ::System::IntPtr  deeplink_options) ;

/// @brief Method ovr_Application_StartAppDownload, addr 0x5c8017c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_StartAppDownload() ;

/// @brief Method ovr_AssetDetailsArray_GetElement, addr 0x5c88c00, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetailsArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_AssetDetailsArray_GetSize, addr 0x5c88c84, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_AssetDetailsArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetAssetId, addr 0x5c886d0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetDetails_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetAssetType, addr 0x5c8874c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetAssetType(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetAssetType_Native, addr 0x5c887a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetAssetType_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetDownloadStatus, addr 0x5c88824, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetDownloadStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetDownloadStatus_Native, addr 0x5c88880, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetDownloadStatus_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetFilepath, addr 0x5c888fc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetFilepath(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetFilepath_Native, addr 0x5c88958, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetFilepath_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetIapStatus, addr 0x5c889d4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetIapStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetIapStatus_Native, addr 0x5c88a30, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetIapStatus_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetLanguage, addr 0x5c88aac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetLanguage(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetMetadata, addr 0x5c88b28, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetMetadata(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetMetadata_Native, addr 0x5c88b84, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetMetadata_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetAssetFileId, addr 0x5c88d00, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDeleteResult_GetAssetFileId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetAssetId, addr 0x5c88d7c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDeleteResult_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetFilepath, addr 0x5c88df8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetFileDeleteResult_GetFilepath(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetFilepath_Native, addr 0x5c88e54, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetFileDeleteResult_GetFilepath_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetSuccess, addr 0x5c88ed0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AssetFileDeleteResult_GetSuccess(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetFileId, addr 0x5c88f54, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetFileId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetId, addr 0x5c88fd0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath, addr 0x5c8904c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetFileDownloadCancelResult_GetFilepath(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath_Native, addr 0x5c890a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetFileDownloadCancelResult_GetFilepath_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetSuccess, addr 0x5c89124, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AssetFileDownloadCancelResult_GetSuccess(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetAssetId, addr 0x5c891a8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadResult_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetFilepath, addr 0x5c89224, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetFileDownloadResult_GetFilepath(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetFilepath_Native, addr 0x5c89280, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetFileDownloadResult_GetFilepath_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetAssetFileId, addr 0x5c892fc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetFileId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetAssetId, addr 0x5c89378, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotal, addr 0x5c893f4, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_AssetFileDownloadUpdate_GetBytesTotal(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotalLong, addr 0x5c89470, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadUpdate_GetBytesTotalLong(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferred, addr 0x5c894ec, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_AssetFileDownloadUpdate_GetBytesTransferred(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferredLong, addr 0x5c89568, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_AssetFileDownloadUpdate_GetBytesTransferredLong(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetCompleted, addr 0x5c895e4, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AssetFileDownloadUpdate_GetCompleted(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFile_Delete, addr 0x5c803c4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_Delete(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DeleteById, addr 0x5c80440, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DeleteById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DeleteByName, addr 0x5c804bc, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DeleteByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_DeleteByName_Native, addr 0x5c8055c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DeleteByName_Native(::System::IntPtr  assetFileName) ;

/// @brief Method ovr_AssetFile_Download, addr 0x5c805d8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_Download(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadById, addr 0x5c80654, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadByName, addr 0x5c806d0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadByName_Native, addr 0x5c80770, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadByName_Native(::System::IntPtr  assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadCancel, addr 0x5c807ec, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadCancel(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadCancelById, addr 0x5c80868, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadCancelById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadCancelByName, addr 0x5c808e4, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadCancelByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadCancelByName_Native, addr 0x5c80984, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadCancelByName_Native(::System::IntPtr  assetFileName) ;

/// @brief Method ovr_AssetFile_GetList, addr 0x5c80a00, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_GetList() ;

/// @brief Method ovr_AssetFile_Status, addr 0x5c80a64, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_Status(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_StatusById, addr 0x5c80ae0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_StatusById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_StatusByName, addr 0x5c80b5c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_StatusByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_StatusByName_Native, addr 0x5c80bfc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_StatusByName_Native(::System::IntPtr  assetFileName) ;

/// @brief Method ovr_AvatarEditorOptions_Create, addr 0x5c7abe0, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AvatarEditorOptions_Create() ;

/// @brief Method ovr_AvatarEditorOptions_Destroy, addr 0x5c7adf4, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AvatarEditorOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_AvatarEditorOptions_SetSourceOverride, addr 0x5c7acb0, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_AvatarEditorOptions_SetSourceOverride(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_AvatarEditorOptions_SetSourceOverride_Native, addr 0x5c97f70, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AvatarEditorOptions_SetSourceOverride_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_AvatarEditorResult_GetRequestSent, addr 0x5c89668, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AvatarEditorResult_GetRequestSent(::System::IntPtr  obj) ;

/// @brief Method ovr_Avatar_LaunchAvatarEditor, addr 0x5c80c78, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Avatar_LaunchAvatarEditor(::System::IntPtr  options) ;

/// @brief Method ovr_Avatar_UpdateMetaData, addr 0x5c80cf4, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_Avatar_UpdateMetaData(::StringW  avatarMetaData, ::StringW  imageFilePath) ;

/// @brief Method ovr_Avatar_UpdateMetaData_Native, addr 0x5c80dbc, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Avatar_UpdateMetaData_Native(::System::IntPtr  avatarMetaData, ::System::IntPtr  imageFilePath) ;

/// @brief Method ovr_BillingPlanArray_GetElement, addr 0x5c897e4, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_BillingPlanArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_BillingPlanArray_GetSize, addr 0x5c89868, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_BillingPlanArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_BillingPlan_GetPaidOffer, addr 0x5c896ec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_BillingPlan_GetPaidOffer(::System::IntPtr  obj) ;

/// @brief Method ovr_BillingPlan_GetTrialOffers, addr 0x5c89768, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_BillingPlan_GetTrialOffers(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUserArray_GetElement, addr 0x5c89960, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_BlockedUserArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_BlockedUserArray_GetNextUrl, addr 0x5c899e4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_BlockedUserArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUserArray_GetNextUrl_Native, addr 0x5c89a40, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_BlockedUserArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUserArray_GetSize, addr 0x5c89abc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_BlockedUserArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUserArray_HasNextPage, addr 0x5c89b38, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_BlockedUserArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUser_GetId, addr 0x5c898e4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_BlockedUser_GetId(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetElement, addr 0x5c8a204, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_ChallengeArray_GetNextUrl, addr 0x5c8a288, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetNextUrl_Native, addr 0x5c8a2e4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetPreviousUrl, addr 0x5c8a360, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeArray_GetPreviousUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetPreviousUrl_Native, addr 0x5c8a3bc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeArray_GetPreviousUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetSize, addr 0x5c8a438, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_ChallengeArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetTotalCount, addr 0x5c8a4b4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ChallengeArray_GetTotalCount(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_HasNextPage, addr 0x5c8a530, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ChallengeArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_HasPreviousPage, addr 0x5c8a5b4, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ChallengeArray_HasPreviousPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetElement, addr 0x5c8abbc, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntryArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_ChallengeEntryArray_GetNextUrl, addr 0x5c8ac40, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeEntryArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetNextUrl_Native, addr 0x5c8ac9c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntryArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl, addr 0x5c8ad18, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeEntryArray_GetPreviousUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl_Native, addr 0x5c8ad74, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntryArray_GetPreviousUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetSize, addr 0x5c8adf0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_ChallengeEntryArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetTotalCount, addr 0x5c8ae6c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ChallengeEntryArray_GetTotalCount(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_HasNextPage, addr 0x5c8aee8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ChallengeEntryArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_HasPreviousPage, addr 0x5c8af6c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ChallengeEntryArray_HasPreviousPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetDisplayScore, addr 0x5c8a638, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeEntry_GetDisplayScore(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetDisplayScore_Native, addr 0x5c8a694, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntry_GetDisplayScore_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraData, addr 0x5c8a710, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ovr_ChallengeEntry_GetExtraData(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraDataLength, addr 0x5c8a878, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_ChallengeEntry_GetExtraDataLength(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraData_Native, addr 0x5c8a7fc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntry_GetExtraData_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetID, addr 0x5c8a8f4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ChallengeEntry_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetRank, addr 0x5c8a970, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_ChallengeEntry_GetRank(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetScore, addr 0x5c8a9ec, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_ChallengeEntry_GetScore(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetTimestamp, addr 0x5c8aa68, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_ChallengeEntry_GetTimestamp(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetTimestamp_Native, addr 0x5c8aac4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ChallengeEntry_GetTimestamp_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetUser, addr 0x5c8ab40, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntry_GetUser(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeOptions_Create, addr 0x5c97ff4, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeOptions_Create() ;

/// @brief Method ovr_ChallengeOptions_Destroy, addr 0x5c98058, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_ChallengeOptions_SetDescription, addr 0x5c980d4, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetDescription(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ChallengeOptions_SetDescription_Native, addr 0x5c98178, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetDescription_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ChallengeOptions_SetEndDate, addr 0x5c981fc, size 0x70, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetEndDate(::System::IntPtr  handle, ::System::DateTime  value) ;

/// @brief Method ovr_ChallengeOptions_SetEndDate_Native, addr 0x5c9826c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetEndDate_Native(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludeActiveChallenges, addr 0x5c982f0, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetIncludeActiveChallenges(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludeFutureChallenges, addr 0x5c98374, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetIncludeFutureChallenges(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludePastChallenges, addr 0x5c983f8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetIncludePastChallenges(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_ChallengeOptions_SetLeaderboardName, addr 0x5c9847c, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetLeaderboardName(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ChallengeOptions_SetLeaderboardName_Native, addr 0x5c98520, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetLeaderboardName_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ChallengeOptions_SetStartDate, addr 0x5c985a4, size 0x70, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetStartDate(::System::IntPtr  handle, ::System::DateTime  value) ;

/// @brief Method ovr_ChallengeOptions_SetStartDate_Native, addr 0x5c98614, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetStartDate_Native(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_ChallengeOptions_SetTitle, addr 0x5c98698, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetTitle(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ChallengeOptions_SetTitle_Native, addr 0x5c9873c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetTitle_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ChallengeOptions_SetViewerFilter, addr 0x5c987c0, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetViewerFilter(::System::IntPtr  handle, ::Oculus::Platform::ChallengeViewerFilter  value) ;

/// @brief Method ovr_ChallengeOptions_SetVisibility, addr 0x5c98844, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetVisibility(::System::IntPtr  handle, ::Oculus::Platform::ChallengeVisibility  value) ;

/// @brief Method ovr_Challenge_GetCreationType, addr 0x5c89bbc, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ChallengeCreationType ovr_Challenge_GetCreationType(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetDescription, addr 0x5c89c38, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Challenge_GetDescription(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetDescription_Native, addr 0x5c89c94, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetDescription_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetEndDate, addr 0x5c89d10, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_Challenge_GetEndDate(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetEndDate_Native, addr 0x5c89d6c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenge_GetEndDate_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetID, addr 0x5c89de8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenge_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetInvitedUsers, addr 0x5c89e64, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetInvitedUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetLeaderboard, addr 0x5c89ee0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetLeaderboard(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetParticipants, addr 0x5c89f5c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetParticipants(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetStartDate, addr 0x5c89fd8, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_Challenge_GetStartDate(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetStartDate_Native, addr 0x5c8a034, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenge_GetStartDate_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetTitle, addr 0x5c8a0b0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Challenge_GetTitle(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetTitle_Native, addr 0x5c8a10c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetTitle_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetVisibility, addr 0x5c8a188, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ChallengeVisibility ovr_Challenge_GetVisibility(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenges_Create, addr 0x5c80e40, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Create(::StringW  leaderboardName, ::System::IntPtr  challengeOptions) ;

/// @brief Method ovr_Challenges_Create_Native, addr 0x5c80ef0, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Create_Native(::System::IntPtr  leaderboardName, ::System::IntPtr  challengeOptions) ;

/// @brief Method ovr_Challenges_DeclineInvite, addr 0x5c80f74, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_DeclineInvite(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_Delete, addr 0x5c80ff0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Delete(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_Get, addr 0x5c8106c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Get(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_GetEntries, addr 0x5c810e8, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetEntries(uint64_t  challengeID, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method ovr_Challenges_GetEntriesAfterRank, addr 0x5c81184, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetEntriesAfterRank(uint64_t  challengeID, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method ovr_Challenges_GetEntriesByIds, addr 0x5c81218, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetEntriesByIds(uint64_t  challengeID, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_Challenges_GetList, addr 0x5c812cc, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetList(::System::IntPtr  challengeOptions, int32_t  limit) ;

/// @brief Method ovr_Challenges_GetNextChallenges, addr 0x5c81350, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetNextChallenges(::System::IntPtr  handle) ;

/// @brief Method ovr_Challenges_GetNextEntries, addr 0x5c813cc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetNextEntries(::System::IntPtr  handle) ;

/// @brief Method ovr_Challenges_GetPreviousChallenges, addr 0x5c81448, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetPreviousChallenges(::System::IntPtr  handle) ;

/// @brief Method ovr_Challenges_GetPreviousEntries, addr 0x5c814c4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetPreviousEntries(::System::IntPtr  handle) ;

/// @brief Method ovr_Challenges_Join, addr 0x5c81540, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Join(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_Leave, addr 0x5c815bc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Leave(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_UpdateInfo, addr 0x5c81638, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_UpdateInfo(uint64_t  challengeID, ::System::IntPtr  challengeOptions) ;

/// @brief Method ovr_Colocation_GetCurrentMapUuid, addr 0x5c816bc, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_GetCurrentMapUuid() ;

/// @brief Method ovr_Colocation_RequestMap, addr 0x5c81720, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_RequestMap(::StringW  uuid) ;

/// @brief Method ovr_Colocation_RequestMap_Native, addr 0x5c817c0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_RequestMap_Native(::System::IntPtr  uuid) ;

/// @brief Method ovr_Colocation_ShareMap, addr 0x5c8183c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_ShareMap(::StringW  uuid) ;

/// @brief Method ovr_Colocation_ShareMap_Native, addr 0x5c818dc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_ShareMap_Native(::System::IntPtr  uuid) ;

/// @brief Method ovr_ContentRating_GetAgeRatingImageUri, addr 0x5c8aff0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ContentRating_GetAgeRatingImageUri(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetAgeRatingImageUri_Native, addr 0x5c8b04c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ContentRating_GetAgeRatingImageUri_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetAgeRatingText, addr 0x5c8b0c8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ContentRating_GetAgeRatingText(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetAgeRatingText_Native, addr 0x5c8b124, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ContentRating_GetAgeRatingText_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetDescriptor, addr 0x5c8b1a0, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ovr_ContentRating_GetDescriptor(::System::IntPtr  obj, uint32_t  index) ;

/// @brief Method ovr_ContentRating_GetDescriptor_Native, addr 0x5c8b20c, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ContentRating_GetDescriptor_Native(::System::IntPtr  obj, uint32_t  index) ;

/// @brief Method ovr_ContentRating_GetDescriptorsSize, addr 0x5c8b290, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_ContentRating_GetDescriptorsSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetInteractiveElement, addr 0x5c8b30c, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ovr_ContentRating_GetInteractiveElement(::System::IntPtr  obj, uint32_t  index) ;

/// @brief Method ovr_ContentRating_GetInteractiveElement_Native, addr 0x5c8b378, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ContentRating_GetInteractiveElement_Native(::System::IntPtr  obj, uint32_t  index) ;

/// @brief Method ovr_ContentRating_GetInteractiveElementsSize, addr 0x5c8b3fc, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_ContentRating_GetInteractiveElementsSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetRatingDefinitionUri, addr 0x5c8b478, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ContentRating_GetRatingDefinitionUri(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetRatingDefinitionUri_Native, addr 0x5c8b4d4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ContentRating_GetRatingDefinitionUri_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewerArray_GetElement, addr 0x5c8b6a4, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_CowatchViewerArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_CowatchViewerArray_GetNextUrl, addr 0x5c8b728, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_CowatchViewerArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewerArray_GetNextUrl_Native, addr 0x5c8b784, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_CowatchViewerArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewerArray_GetSize, addr 0x5c8b800, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_CowatchViewerArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewerArray_HasNextPage, addr 0x5c8b87c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_CowatchViewerArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewerUpdate_GetDataList, addr 0x5c8b900, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_CowatchViewerUpdate_GetDataList(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewerUpdate_GetId, addr 0x5c8b97c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_CowatchViewerUpdate_GetId(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewer_GetData, addr 0x5c8b550, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_CowatchViewer_GetData(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewer_GetData_Native, addr 0x5c8b5ac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_CowatchViewer_GetData_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewer_GetId, addr 0x5c8b628, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_CowatchViewer_GetId(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchingState_GetInSession, addr 0x5c8b9f8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_CowatchingState_GetInSession(::System::IntPtr  obj) ;

/// @brief Method ovr_Cowatching_GetPresenterData, addr 0x5c81958, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_GetPresenterData() ;

/// @brief Method ovr_Cowatching_GetViewersData, addr 0x5c819bc, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_GetViewersData() ;

/// @brief Method ovr_Cowatching_IsInSession, addr 0x5c81a20, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_IsInSession() ;

/// @brief Method ovr_Cowatching_JoinSession, addr 0x5c81a84, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_JoinSession() ;

/// @brief Method ovr_Cowatching_LaunchInviteDialog, addr 0x5c81ae8, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_LaunchInviteDialog() ;

/// @brief Method ovr_Cowatching_LeaveSession, addr 0x5c81b4c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_LeaveSession() ;

/// @brief Method ovr_Cowatching_RequestToPresent, addr 0x5c81bb0, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_RequestToPresent() ;

/// @brief Method ovr_Cowatching_ResignFromPresenting, addr 0x5c81c14, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_ResignFromPresenting() ;

/// @brief Method ovr_Cowatching_SetPresenterData, addr 0x5c81c78, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_SetPresenterData(::StringW  video_title, ::StringW  presenter_data) ;

/// @brief Method ovr_Cowatching_SetPresenterData_Native, addr 0x5c81d40, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_SetPresenterData_Native(::System::IntPtr  video_title, ::System::IntPtr  presenter_data) ;

/// @brief Method ovr_Cowatching_SetViewerData, addr 0x5c81dc4, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_SetViewerData(::StringW  viewer_data) ;

/// @brief Method ovr_Cowatching_SetViewerData_Native, addr 0x5c81e64, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_SetViewerData_Native(::System::IntPtr  viewer_data) ;

/// @brief Method ovr_CrashApplication, addr 0x5c7d9e8, size 0x64, virtual false, abstract: false, final false
static inline void ovr_CrashApplication() ;

/// @brief Method ovr_DataStore_Contains, addr 0x5c8ba7c, size 0xb4, virtual false, abstract: false, final false
static inline uint32_t ovr_DataStore_Contains(::System::IntPtr  obj, ::StringW  key) ;

/// @brief Method ovr_DataStore_Contains_Native, addr 0x5c8bb30, size 0x84, virtual false, abstract: false, final false
static inline uint32_t ovr_DataStore_Contains_Native(::System::IntPtr  obj, ::System::IntPtr  key) ;

/// @brief Method ovr_DataStore_GetKey, addr 0x5c7c55c, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ovr_DataStore_GetKey(::System::IntPtr  obj, int32_t  index) ;

/// @brief Method ovr_DataStore_GetKey_Native, addr 0x5c8bbb4, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_DataStore_GetKey_Native(::System::IntPtr  obj, int32_t  index) ;

/// @brief Method ovr_DataStore_GetNumKeys, addr 0x5c7c4e0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_DataStore_GetNumKeys(::System::IntPtr  obj) ;

/// @brief Method ovr_DataStore_GetValue, addr 0x5c7c5c8, size 0xb8, virtual false, abstract: false, final false
static inline ::StringW ovr_DataStore_GetValue(::System::IntPtr  obj, ::StringW  key) ;

/// @brief Method ovr_DataStore_GetValue_Native, addr 0x5c8bc38, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_DataStore_GetValue_Native(::System::IntPtr  obj, ::System::IntPtr  key) ;

/// @brief Method ovr_DestinationArray_GetElement, addr 0x5c8c01c, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_DestinationArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_DestinationArray_GetNextUrl, addr 0x5c8c0a0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_DestinationArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_DestinationArray_GetNextUrl_Native, addr 0x5c8c0fc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_DestinationArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_DestinationArray_GetSize, addr 0x5c8c178, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_DestinationArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_DestinationArray_HasNextPage, addr 0x5c8c1f4, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_DestinationArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetApiName, addr 0x5c8bcbc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Destination_GetApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetApiName_Native, addr 0x5c8bd18, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Destination_GetApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetDeeplinkMessage, addr 0x5c8bd94, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Destination_GetDeeplinkMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetDeeplinkMessage_Native, addr 0x5c8bdf0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Destination_GetDeeplinkMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetDisplayName, addr 0x5c8be6c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Destination_GetDisplayName(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetDisplayName_Native, addr 0x5c8bec8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Destination_GetDisplayName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetShareableUri, addr 0x5c8bf44, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Destination_GetShareableUri(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetShareableUri_Native, addr 0x5c8bfa0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Destination_GetShareableUri_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken, addr 0x5c81ee0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken(::StringW  challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken_Native, addr 0x5c81f80, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken_Native(::System::IntPtr  challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken, addr 0x5c81ffc, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken(::StringW  challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native, addr 0x5c8209c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native(::System::IntPtr  challenge_nonce) ;

/// @brief Method ovr_Entitlement_GetIsViewerEntitled, addr 0x5c82118, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Entitlement_GetIsViewerEntitled() ;

/// @brief Method ovr_Error_GetCode, addr 0x5c8c278, size 0x78, virtual false, abstract: false, final false
static inline int32_t ovr_Error_GetCode(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetDisplayableMessage, addr 0x5c8c2f0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Error_GetDisplayableMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetDisplayableMessage_Native, addr 0x5c8c34c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Error_GetDisplayableMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetHttpCode, addr 0x5c8c3c8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_Error_GetHttpCode(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetMessage, addr 0x5c8c444, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Error_GetMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetMessage_Native, addr 0x5c8c4a0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Error_GetMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_FreeMessage, addr 0x5c7d434, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_FreeMessage(::System::IntPtr  message) ;

/// @brief Method ovr_GetLoggedInUserLocale, addr 0x5c7d318, size 0x54, virtual false, abstract: false, final false
static inline ::StringW ovr_GetLoggedInUserLocale() ;

/// @brief Method ovr_GetLoggedInUserLocale_Native, addr 0x5c7d36c, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GetLoggedInUserLocale_Native() ;

/// @brief Method ovr_GraphAPI_Get, addr 0x5c8217c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_GraphAPI_Get(::StringW  url) ;

/// @brief Method ovr_GraphAPI_Get_Native, addr 0x5c8221c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GraphAPI_Get_Native(::System::IntPtr  url) ;

/// @brief Method ovr_GraphAPI_Post, addr 0x5c82298, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_GraphAPI_Post(::StringW  url) ;

/// @brief Method ovr_GraphAPI_Post_Native, addr 0x5c82338, size 0x78, virtual false, abstract: false, final false
static inline uint64_t ovr_GraphAPI_Post_Native(::System::IntPtr  url) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage, addr 0x5c8c51c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetDeeplinkMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native, addr 0x5c8c578, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName, addr 0x5c8c5f4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetDestinationApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native, addr 0x5c8c650, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId, addr 0x5c8c6cc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetLobbySessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native, addr 0x5c8c728, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId, addr 0x5c8c7a4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetMatchSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native, addr 0x5c8c800, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName, addr 0x5c8c87c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceLeaveIntent_GetDestinationApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native, addr 0x5c8c8d8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId, addr 0x5c8c954, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceLeaveIntent_GetLobbySessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native, addr 0x5c8c9b0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId, addr 0x5c8ca2c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceLeaveIntent_GetMatchSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native, addr 0x5c8ca88, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceOptions_Create, addr 0x5c988c8, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceOptions_Create() ;

/// @brief Method ovr_GroupPresenceOptions_Destroy, addr 0x5c9892c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride, addr 0x5c989a8, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x5c98a4c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName, addr 0x5c98ad0, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetDestinationApiName(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName_Native, addr 0x5c98b74, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetDestinationApiName_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetIsJoinable, addr 0x5c98bf8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetIsJoinable(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId, addr 0x5c98c7c, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetLobbySessionId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId_Native, addr 0x5c98d20, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetLobbySessionId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId, addr 0x5c98da4, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetMatchSessionId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId_Native, addr 0x5c98e48, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetMatchSessionId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_GroupPresence_Clear, addr 0x5c823b0, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_Clear() ;

/// @brief Method ovr_GroupPresence_GetInvitableUsers, addr 0x5c82414, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_GetInvitableUsers(::System::IntPtr  options) ;

/// @brief Method ovr_GroupPresence_GetSentInvites, addr 0x5c82490, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_GetSentInvites() ;

/// @brief Method ovr_GroupPresence_LaunchInvitePanel, addr 0x5c824f4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchInvitePanel(::System::IntPtr  options) ;

/// @brief Method ovr_GroupPresence_LaunchMultiplayerErrorDialog, addr 0x5c82570, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchMultiplayerErrorDialog(::System::IntPtr  options) ;

/// @brief Method ovr_GroupPresence_LaunchRejoinDialog, addr 0x5c825ec, size 0xe4, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog(::StringW  lobby_session_id, ::StringW  match_session_id, ::StringW  destination_api_name) ;

/// @brief Method ovr_GroupPresence_LaunchRejoinDialog_Native, addr 0x5c826d0, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog_Native(::System::IntPtr  lobby_session_id, ::System::IntPtr  match_session_id, ::System::IntPtr  destination_api_name) ;

/// @brief Method ovr_GroupPresence_LaunchRosterPanel, addr 0x5c82764, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchRosterPanel(::System::IntPtr  options) ;

/// @brief Method ovr_GroupPresence_SendInvites, addr 0x5c827e0, size 0x8c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SendInvites(::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_GroupPresence_Set, addr 0x5c8286c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_Set(::System::IntPtr  groupPresenceOptions) ;

/// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride, addr 0x5c828e8, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride(::StringW  deeplink_message) ;

/// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride_Native, addr 0x5c82988, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride_Native(::System::IntPtr  deeplink_message) ;

/// @brief Method ovr_GroupPresence_SetDestination, addr 0x5c82a04, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetDestination(::StringW  api_name) ;

/// @brief Method ovr_GroupPresence_SetDestination_Native, addr 0x5c82aa4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetDestination_Native(::System::IntPtr  api_name) ;

/// @brief Method ovr_GroupPresence_SetIsJoinable, addr 0x5c82b20, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetIsJoinable(bool  is_joinable) ;

/// @brief Method ovr_GroupPresence_SetLobbySession, addr 0x5c82b9c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetLobbySession(::StringW  id) ;

/// @brief Method ovr_GroupPresence_SetLobbySession_Native, addr 0x5c82c3c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetLobbySession_Native(::System::IntPtr  id) ;

/// @brief Method ovr_GroupPresence_SetMatchSession, addr 0x5c82cb8, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetMatchSession(::StringW  id) ;

/// @brief Method ovr_GroupPresence_SetMatchSession_Native, addr 0x5c82d58, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetMatchSession_Native(::System::IntPtr  id) ;

/// @brief Method ovr_HTTP_Get, addr 0x5c82dd4, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_Get(::StringW  url) ;

/// @brief Method ovr_HTTP_GetToFile, addr 0x5c82ef0, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_GetToFile(::StringW  url, ::StringW  diskFile) ;

/// @brief Method ovr_HTTP_GetToFile_Native, addr 0x5c82fb8, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_GetToFile_Native(::System::IntPtr  url, ::System::IntPtr  diskFile) ;

/// @brief Method ovr_HTTP_GetWithMessageType, addr 0x5c7d948, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_GetWithMessageType(::StringW  url, int32_t  messageType) ;

/// @brief Method ovr_HTTP_Get_Native, addr 0x5c82e74, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_Get_Native(::System::IntPtr  url) ;

/// @brief Method ovr_HTTP_MultiPartPost, addr 0x5c8303c, size 0x11c, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_MultiPartPost(::StringW  url, ::StringW  filepath_param_name, ::StringW  filepath, ::StringW  access_token, ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*>  post_params) ;

/// @brief Method ovr_HTTP_MultiPartPost_Native, addr 0x5c83158, size 0x1f4, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_MultiPartPost_Native(::System::IntPtr  url, ::System::IntPtr  filepath_param_name, ::System::IntPtr  filepath, ::System::IntPtr  access_token, ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*>  post_params, ::System::UIntPtr  numItems) ;

/// @brief Method ovr_HTTP_Post, addr 0x5c8334c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_Post(::StringW  url) ;

/// @brief Method ovr_HTTP_Post_Native, addr 0x5c833ec, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_Post_Native(::System::IntPtr  url) ;

/// @brief Method ovr_HTTP_StartTransfer, addr 0x5c7e1bc, size 0xbc, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_StartTransfer(::StringW  url, ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*>  headers) ;

/// @brief Method ovr_HTTP_StartTransfer_Native, addr 0x5c7e278, size 0x1b8, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_StartTransfer_Native(::System::IntPtr  url, ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*>  headers, ::System::UIntPtr  numItems) ;

/// @brief Method ovr_HTTP_Write, addr 0x5c7e430, size 0xa4, virtual false, abstract: false, final false
static inline bool ovr_HTTP_Write(uint64_t  transferId, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, ::System::UIntPtr  length) ;

/// @brief Method ovr_HTTP_WriteEOM, addr 0x5c7e4d4, size 0x78, virtual false, abstract: false, final false
static inline void ovr_HTTP_WriteEOM(uint64_t  transferId) ;

/// @brief Method ovr_HttpTransferUpdate_GetBytes, addr 0x5c8cb04, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_HttpTransferUpdate_GetBytes(::System::IntPtr  obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetID, addr 0x5c8cb80, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_HttpTransferUpdate_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetSize, addr 0x5c8cbfc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_HttpTransferUpdate_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_HttpTransferUpdate_IsCompleted, addr 0x5c8cc78, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_HttpTransferUpdate_IsCompleted(::System::IntPtr  obj) ;

/// @brief Method ovr_IAP_ConsumePurchase, addr 0x5c83468, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_ConsumePurchase(::StringW  sku) ;

/// @brief Method ovr_IAP_ConsumePurchase_Native, addr 0x5c83508, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_ConsumePurchase_Native(::System::IntPtr  sku) ;

/// @brief Method ovr_IAP_GetProductsBySKU, addr 0x5c83584, size 0x130, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_GetProductsBySKU(::ArrayW<::StringW,::Array<::StringW>*>  skus, int32_t  count) ;

/// @brief Method ovr_IAP_GetViewerPurchases, addr 0x5c836b4, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_GetViewerPurchases() ;

/// @brief Method ovr_IAP_GetViewerPurchasesDurableCache, addr 0x5c83718, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_GetViewerPurchasesDurableCache() ;

/// @brief Method ovr_IAP_LaunchCheckoutFlow, addr 0x5c8377c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_LaunchCheckoutFlow(::StringW  sku) ;

/// @brief Method ovr_IAP_LaunchCheckoutFlow_Native, addr 0x5c8381c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_LaunchCheckoutFlow_Native(::System::IntPtr  sku) ;

/// @brief Method ovr_InstalledApplicationArray_GetElement, addr 0x5c8d0d8, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplicationArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_InstalledApplicationArray_GetSize, addr 0x5c8d15c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_InstalledApplicationArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetApplicationId, addr 0x5c8ccfc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_InstalledApplication_GetApplicationId(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetApplicationId_Native, addr 0x5c8cd58, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplication_GetApplicationId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetPackageName, addr 0x5c8cdd4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_InstalledApplication_GetPackageName(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetPackageName_Native, addr 0x5c8ce30, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplication_GetPackageName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetStatus, addr 0x5c8ceac, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_InstalledApplication_GetStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetStatus_Native, addr 0x5c8cf08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplication_GetStatus_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionCode, addr 0x5c8cf84, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_InstalledApplication_GetVersionCode(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionName, addr 0x5c8d000, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_InstalledApplication_GetVersionName(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionName_Native, addr 0x5c8d05c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplication_GetVersionName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_InviteOptions_AddSuggestedUser, addr 0x5c98fac, size 0x84, virtual false, abstract: false, final false
static inline void ovr_InviteOptions_AddSuggestedUser(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_InviteOptions_ClearSuggestedUsers, addr 0x5c99030, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_InviteOptions_ClearSuggestedUsers(::System::IntPtr  handle) ;

/// @brief Method ovr_InviteOptions_Create, addr 0x5c98ecc, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InviteOptions_Create() ;

/// @brief Method ovr_InviteOptions_Destroy, addr 0x5c98f30, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_InviteOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_InvitePanelResultInfo_GetInvitesSent, addr 0x5c8d1d8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_InvitePanelResultInfo_GetInvitesSent(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetEnglishName, addr 0x5c8d25c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LanguagePackInfo_GetEnglishName(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetEnglishName_Native, addr 0x5c8d2b8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LanguagePackInfo_GetEnglishName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetNativeName, addr 0x5c8d334, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LanguagePackInfo_GetNativeName(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetNativeName_Native, addr 0x5c8d390, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LanguagePackInfo_GetNativeName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetTag, addr 0x5c8d40c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LanguagePackInfo_GetTag(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetTag_Native, addr 0x5c8d468, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LanguagePackInfo_GetTag_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePack_GetCurrent, addr 0x5c83898, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_LanguagePack_GetCurrent() ;

/// @brief Method ovr_LanguagePack_SetCurrent, addr 0x5c838fc, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_LanguagePack_SetCurrent(::StringW  tag) ;

/// @brief Method ovr_LanguagePack_SetCurrent_Native, addr 0x5c8399c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LanguagePack_SetCurrent_Native(::System::IntPtr  tag) ;

/// @brief Method ovr_LaunchBlockFlowResult_GetDidBlock, addr 0x5c8d4e4, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchBlockFlowResult_GetDidBlock(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchBlockFlowResult_GetDidCancel, addr 0x5c8d568, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchBlockFlowResult_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetDeeplinkMessage, addr 0x5c8d5ec, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetDeeplinkMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetDeeplinkMessage_Native, addr 0x5c8d648, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetDeeplinkMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetDestinationApiName, addr 0x5c8d6c4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetDestinationApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetDestinationApiName_Native, addr 0x5c8d720, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetDestinationApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchSource, addr 0x5c8d79c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetLaunchSource(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchSource_Native, addr 0x5c8d7f8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetLaunchSource_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchType, addr 0x5c8d874, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::LaunchType ovr_LaunchDetails_GetLaunchType(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetLobbySessionID, addr 0x5c8d8f0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetLobbySessionID(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetLobbySessionID_Native, addr 0x5c8d94c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetLobbySessionID_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetMatchSessionID, addr 0x5c8d9c8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetMatchSessionID(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetMatchSessionID_Native, addr 0x5c8da24, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetMatchSessionID_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetTrackingID, addr 0x5c8daa0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetTrackingID(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetTrackingID_Native, addr 0x5c8dafc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetTrackingID_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetUsers, addr 0x5c8db78, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidCancel, addr 0x5c8dbf4, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchFriendRequestFlowResult_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidSendRequest, addr 0x5c8dc78, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchFriendRequestFlowResult_GetDidSendRequest(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchInvitePanelFlowResult_GetInvitedUsers, addr 0x5c8dcfc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchInvitePanelFlowResult_GetInvitedUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchReportFlowResult_GetDidCancel, addr 0x5c8dd78, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchReportFlowResult_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchReportFlowResult_GetUserReportId, addr 0x5c8ddfc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LaunchReportFlowResult_GetUserReportId(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchUnblockFlowResult_GetDidCancel, addr 0x5c8de78, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchUnblockFlowResult_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchUnblockFlowResult_GetDidUnblock, addr 0x5c8defc, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchUnblockFlowResult_GetDidUnblock(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardArray_GetElement, addr 0x5c8e150, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_LeaderboardArray_GetNextUrl, addr 0x5c8e1d4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LeaderboardArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardArray_GetNextUrl_Native, addr 0x5c8e230, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardArray_GetSize, addr 0x5c8e2ac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_LeaderboardArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardArray_HasNextPage, addr 0x5c8e328, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LeaderboardArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetElement, addr 0x5c8e8b4, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntryArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_LeaderboardEntryArray_GetNextUrl, addr 0x5c8e938, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LeaderboardEntryArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetNextUrl_Native, addr 0x5c8e994, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntryArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl, addr 0x5c8ea10, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LeaderboardEntryArray_GetPreviousUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl_Native, addr 0x5c8ea6c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntryArray_GetPreviousUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetSize, addr 0x5c8eae8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_LeaderboardEntryArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetTotalCount, addr 0x5c8eb64, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LeaderboardEntryArray_GetTotalCount(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_HasNextPage, addr 0x5c8ebe0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LeaderboardEntryArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_HasPreviousPage, addr 0x5c8ec64, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LeaderboardEntryArray_HasPreviousPage(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetDisplayScore, addr 0x5c8e3ac, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LeaderboardEntry_GetDisplayScore(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetDisplayScore_Native, addr 0x5c8e408, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntry_GetDisplayScore_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraData, addr 0x5c8e484, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ovr_LeaderboardEntry_GetExtraData(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraDataLength, addr 0x5c8a780, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_LeaderboardEntry_GetExtraDataLength(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraData_Native, addr 0x5c8e4f4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntry_GetExtraData_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetID, addr 0x5c8e570, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LeaderboardEntry_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetRank, addr 0x5c8e5ec, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_LeaderboardEntry_GetRank(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetScore, addr 0x5c8e668, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_LeaderboardEntry_GetScore(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetSupplementaryMetric, addr 0x5c8e6e4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntry_GetSupplementaryMetric(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetTimestamp, addr 0x5c8e760, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_LeaderboardEntry_GetTimestamp(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetTimestamp_Native, addr 0x5c8e7bc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LeaderboardEntry_GetTimestamp_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetUser, addr 0x5c8e838, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntry_GetUser(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetDidUpdate, addr 0x5c8ece8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LeaderboardUpdateStatus_GetDidUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId, addr 0x5c8ed6c, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId(::System::IntPtr  obj, uint32_t  index) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize, addr 0x5c8edf0, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_Get, addr 0x5c83a18, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_Get(::StringW  leaderboardName) ;

/// @brief Method ovr_Leaderboard_GetApiName, addr 0x5c8df80, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Leaderboard_GetApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_GetApiName_Native, addr 0x5c8dfdc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Leaderboard_GetApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_GetDestination, addr 0x5c8e058, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Leaderboard_GetDestination(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_GetEntries, addr 0x5c83b34, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntries(::StringW  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method ovr_Leaderboard_GetEntriesAfterRank, addr 0x5c83c98, size 0xb8, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank(::StringW  leaderboardName, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method ovr_Leaderboard_GetEntriesAfterRank_Native, addr 0x5c83d50, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank_Native(::System::IntPtr  leaderboardName, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method ovr_Leaderboard_GetEntriesByIds, addr 0x5c83de4, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntriesByIds(::StringW  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_Leaderboard_GetEntriesByIds_Native, addr 0x5c83eb4, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntriesByIds_Native(::System::IntPtr  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_Leaderboard_GetEntries_Native, addr 0x5c83bfc, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntries_Native(::System::IntPtr  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method ovr_Leaderboard_GetID, addr 0x5c8e0d4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_GetNextEntries, addr 0x5c83f68, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetNextEntries(::System::IntPtr  handle) ;

/// @brief Method ovr_Leaderboard_GetPreviousEntries, addr 0x5c83fe4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetPreviousEntries(::System::IntPtr  handle) ;

/// @brief Method ovr_Leaderboard_Get_Native, addr 0x5c83ab8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_Get_Native(::System::IntPtr  leaderboardName) ;

/// @brief Method ovr_Leaderboard_WriteEntry, addr 0x5c84060, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_WriteEntry(::StringW  leaderboardName, int64_t  score, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric, addr 0x5c841e4, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric(::StringW  leaderboardName, int64_t  score, int64_t  supplementaryMetric, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native, addr 0x5c842c4, size 0xbc, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native(::System::IntPtr  leaderboardName, int64_t  score, int64_t  supplementaryMetric, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntry_Native, addr 0x5c84130, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_WriteEntry_Native(::System::IntPtr  leaderboardName, int64_t  score, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_LinkedAccountArray_GetElement, addr 0x5c8f098, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LinkedAccountArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_LinkedAccountArray_GetSize, addr 0x5c8f11c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_LinkedAccountArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetAccessToken, addr 0x5c8ee6c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LinkedAccount_GetAccessToken(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetAccessToken_Native, addr 0x5c8eec8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LinkedAccount_GetAccessToken_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetServiceProvider, addr 0x5c8ef44, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ServiceProvider ovr_LinkedAccount_GetServiceProvider(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetUserId, addr 0x5c8efc0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LinkedAccount_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetUserId_Native, addr 0x5c8f01c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LinkedAccount_GetUserId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingApplicationStatus_GetStreamingEnabled, addr 0x5c8f198, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingApplicationStatus_GetStreamingEnabled(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStartResult_GetStreamingResult, addr 0x5c8f21c, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::LivestreamingStartStatus ovr_LivestreamingStartResult_GetStreamingResult(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetCommentsVisible, addr 0x5c8f298, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingStatus_GetCommentsVisible(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetIsPaused, addr 0x5c8f31c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingStatus_GetIsPaused(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetLivestreamingEnabled, addr 0x5c8f3a0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingStatus_GetLivestreamingEnabled(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetLivestreamingType, addr 0x5c8f424, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_LivestreamingStatus_GetLivestreamingType(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetMicEnabled, addr 0x5c8f4a0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingStatus_GetMicEnabled(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetCommentCount, addr 0x5c8f524, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_LivestreamingVideoStats_GetCommentCount(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetReactionCount, addr 0x5c8f5a0, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_LivestreamingVideoStats_GetReactionCount(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetTotalViews, addr 0x5c8f61c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LivestreamingVideoStats_GetTotalViews(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetTotalViews_Native, addr 0x5c8f678, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LivestreamingVideoStats_GetTotalViews_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Livestreaming_IsAllowedForApplication, addr 0x5c84380, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_IsAllowedForApplication(::StringW  packageName) ;

/// @brief Method ovr_Livestreaming_IsAllowedForApplication_Native, addr 0x5c84420, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_IsAllowedForApplication_Native(::System::IntPtr  packageName) ;

/// @brief Method ovr_Livestreaming_StartPartyStream, addr 0x5c8449c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_StartPartyStream() ;

/// @brief Method ovr_Livestreaming_StartStream, addr 0x5c84500, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_StartStream(::Oculus::Platform::LivestreamingAudience  audience, ::Oculus::Platform::LivestreamingMicrophoneStatus  micStatus) ;

/// @brief Method ovr_Livestreaming_StopPartyStream, addr 0x5c84584, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_StopPartyStream() ;

/// @brief Method ovr_Livestreaming_StopStream, addr 0x5c845e8, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_StopStream() ;

/// @brief Method ovr_Livestreaming_UpdateMicStatus, addr 0x5c8464c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_UpdateMicStatus(::Oculus::Platform::LivestreamingMicrophoneStatus  micStatus) ;

/// @brief Method ovr_Log_NewEvent, addr 0x5c7df98, size 0x9c, virtual false, abstract: false, final false
static inline void ovr_Log_NewEvent(::System::IntPtr  eventName, ::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>  values, ::System::UIntPtr  length) ;

/// @brief Method ovr_ManagedInfo_GetDepartment, addr 0x5c8f6f4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetDepartment(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetDepartment_Native, addr 0x5c8f750, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetDepartment_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetEmail, addr 0x5c8f7cc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetEmail(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetEmail_Native, addr 0x5c8f828, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetEmail_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetEmployeeNumber, addr 0x5c8f8a4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetEmployeeNumber(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetEmployeeNumber_Native, addr 0x5c8f900, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetEmployeeNumber_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetExternalId, addr 0x5c8f97c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetExternalId(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetExternalId_Native, addr 0x5c8f9d8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetExternalId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetLocation, addr 0x5c8fa54, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetLocation(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetLocation_Native, addr 0x5c8fab0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetLocation_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetManager, addr 0x5c8fb2c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetManager(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetManager_Native, addr 0x5c8fb88, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetManager_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetName, addr 0x5c8fc04, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetName_Native, addr 0x5c8fc60, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetOrganizationId, addr 0x5c8fcdc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetOrganizationId(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetOrganizationId_Native, addr 0x5c8fd38, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetOrganizationId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetOrganizationName, addr 0x5c8fdb4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetOrganizationName(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetOrganizationName_Native, addr 0x5c8fe10, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetOrganizationName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetPosition, addr 0x5c8fe8c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetPosition(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetPosition_Native, addr 0x5c8fee8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetPosition_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Media_ShareToFacebook, addr 0x5c846c8, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t ovr_Media_ShareToFacebook(::StringW  postTextSuggestion, ::StringW  filePath, ::Oculus::Platform::MediaContentType  contentType) ;

/// @brief Method ovr_Media_ShareToFacebook_Native, addr 0x5c84798, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_Media_ShareToFacebook_Native(::System::IntPtr  postTextSuggestion, ::System::IntPtr  filePath, ::Oculus::Platform::MediaContentType  contentType) ;

/// @brief Method ovr_Message_GetAbuseReportRecording, addr 0x5c8ff64, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAbuseReportRecording(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAchievementDefinitionArray, addr 0x5c8ffe0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAchievementDefinitionArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAchievementProgressArray, addr 0x5c9005c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAchievementProgressArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAchievementUpdate, addr 0x5c900d8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAchievementUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAppDownloadProgressResult, addr 0x5c90154, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAppDownloadProgressResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAppDownloadResult, addr 0x5c901d0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAppDownloadResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetApplicationInviteArray, addr 0x5c9024c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetApplicationInviteArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetApplicationVersion, addr 0x5c902c8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetApplicationVersion(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetDetails, addr 0x5c90344, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetDetails(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetDetailsArray, addr 0x5c903c0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetDetailsArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetFileDeleteResult, addr 0x5c9043c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetFileDeleteResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadCancelResult, addr 0x5c904b8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetFileDownloadCancelResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadResult, addr 0x5c90534, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetFileDownloadResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadUpdate, addr 0x5c905b0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetFileDownloadUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAvatarEditorResult, addr 0x5c9062c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAvatarEditorResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetBlockedUserArray, addr 0x5c906a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetBlockedUserArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetChallenge, addr 0x5c90724, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetChallenge(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetChallengeArray, addr 0x5c907a0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetChallengeArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetChallengeEntryArray, addr 0x5c9081c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetChallengeEntryArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetCowatchViewerArray, addr 0x5c90898, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetCowatchViewerArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetCowatchViewerUpdate, addr 0x5c90914, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetCowatchViewerUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetCowatchingState, addr 0x5c90990, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetCowatchingState(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetDataStore, addr 0x5c90a0c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetDataStore(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetDestinationArray, addr 0x5c90a88, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetDestinationArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetError, addr 0x5c90b04, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetError(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetGroupPresenceJoinIntent, addr 0x5c90b80, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetGroupPresenceJoinIntent(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetGroupPresenceLeaveIntent, addr 0x5c90bfc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetGroupPresenceLeaveIntent(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetHttpTransferUpdate, addr 0x5c90c78, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetHttpTransferUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetInstalledApplicationArray, addr 0x5c90cf4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetInstalledApplicationArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetInvitePanelResultInfo, addr 0x5c90d70, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetInvitePanelResultInfo(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchBlockFlowResult, addr 0x5c90dec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchBlockFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchFriendRequestFlowResult, addr 0x5c90e68, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchFriendRequestFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchInvitePanelFlowResult, addr 0x5c90ee4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchInvitePanelFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchReportFlowResult, addr 0x5c90f60, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchReportFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchUnblockFlowResult, addr 0x5c90fdc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchUnblockFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLeaderboardArray, addr 0x5c91058, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLeaderboardArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLeaderboardEntryArray, addr 0x5c910d4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLeaderboardEntryArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLeaderboardUpdateStatus, addr 0x5c91150, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLeaderboardUpdateStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLinkedAccountArray, addr 0x5c911cc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLinkedAccountArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLivestreamingApplicationStatus, addr 0x5c91248, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLivestreamingApplicationStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLivestreamingStartResult, addr 0x5c912c4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLivestreamingStartResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLivestreamingStatus, addr 0x5c91340, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLivestreamingStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLivestreamingVideoStats, addr 0x5c913bc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLivestreamingVideoStats(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetMicrophoneAvailabilityState, addr 0x5c91438, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetMicrophoneAvailabilityState(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNativeMessage, addr 0x5c914b4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNativeMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncConnection, addr 0x5c91530, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncConnection(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncSessionArray, addr 0x5c915ac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncSessionArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncSessionsChangedNotification, addr 0x5c91628, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncSessionsChangedNotification(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncSetSessionPropertyResult, addr 0x5c916a4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncSetSessionPropertyResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncVoipAttenuationValueArray, addr 0x5c91720, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncVoipAttenuationValueArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetOrgScopedID, addr 0x5c9179c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetOrgScopedID(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetParty, addr 0x5c91818, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetParty(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPartyID, addr 0x5c91894, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPartyID(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPartyUpdateNotification, addr 0x5c91910, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPartyUpdateNotification(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPidArray, addr 0x5c9198c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPidArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPlatformInitialize, addr 0x5c91a08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPlatformInitialize(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetProductArray, addr 0x5c91a84, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetProductArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPurchase, addr 0x5c91b00, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPurchase(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPurchaseArray, addr 0x5c91b7c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPurchaseArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPushNotificationResult, addr 0x5c91bf8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPushNotificationResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetRejoinDialogResult, addr 0x5c91c74, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetRejoinDialogResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetRequestID, addr 0x5c91cf0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Message_GetRequestID(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetSdkAccountArray, addr 0x5c91d6c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetSdkAccountArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetSendInvitesResult, addr 0x5c91de8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetSendInvitesResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetShareMediaResult, addr 0x5c91e64, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetShareMediaResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetString, addr 0x5c91ee0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Message_GetString(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetStringForJavascript, addr 0x5c7e54c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Message_GetStringForJavascript(::System::IntPtr  message) ;

/// @brief Method ovr_Message_GetStringForJavascript_Native, addr 0x5c7e5a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetStringForJavascript_Native(::System::IntPtr  message) ;

/// @brief Method ovr_Message_GetString_Native, addr 0x5c91f3c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetString_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetSystemVoipState, addr 0x5c91fb8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetSystemVoipState(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetType, addr 0x5c92034, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Message_MessageType ovr_Message_GetType(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUser, addr 0x5c920b0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUser(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserAccountAgeCategory, addr 0x5c9212c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserAccountAgeCategory(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserArray, addr 0x5c921a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserCapabilityArray, addr 0x5c92224, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserCapabilityArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserDataStoreUpdateResponse, addr 0x5c922a0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserDataStoreUpdateResponse(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserProof, addr 0x5c9231c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserProof(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserReportID, addr 0x5c92398, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserReportID(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_IsError, addr 0x5c92414, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_Message_IsError(::System::IntPtr  obj) ;

/// @brief Method ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable, addr 0x5c928e0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_Create, addr 0x5c7d70c, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Microphone_Create() ;

/// @brief Method ovr_Microphone_Destroy, addr 0x5c7d770, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Microphone_Destroy(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_GetNumSamplesAvailable, addr 0x5c92498, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_GetNumSamplesAvailable(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_GetOutputBufferMaxSize, addr 0x5c92514, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_GetOutputBufferMaxSize(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_GetPCM, addr 0x5c92590, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_GetPCM(::System::IntPtr  obj, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_Microphone_GetPCMFloat, addr 0x5c9262c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_GetPCMFloat(::System::IntPtr  obj, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_Microphone_ReadData, addr 0x5c926c8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_ReadData(::System::IntPtr  obj, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferSize) ;

/// @brief Method ovr_Microphone_SetAcceptableRecordingDelayHint, addr 0x5c92764, size 0x84, virtual false, abstract: false, final false
static inline void ovr_Microphone_SetAcceptableRecordingDelayHint(::System::IntPtr  obj, ::System::UIntPtr  delayMs) ;

/// @brief Method ovr_Microphone_Start, addr 0x5c927e8, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Microphone_Start(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_Stop, addr 0x5c92864, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Microphone_Stop(::System::IntPtr  obj) ;

/// @brief Method ovr_MultiplayerErrorOptions_Create, addr 0x5c990ac, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_MultiplayerErrorOptions_Create() ;

/// @brief Method ovr_MultiplayerErrorOptions_Destroy, addr 0x5c99110, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_MultiplayerErrorOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_MultiplayerErrorOptions_SetErrorKey, addr 0x5c9918c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_MultiplayerErrorOptions_SetErrorKey(::System::IntPtr  handle, ::Oculus::Platform::MultiplayerErrorErrorKey  value) ;

/// @brief Method ovr_NetSyncConnection_GetConnectionId, addr 0x5c92964, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_NetSyncConnection_GetConnectionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetDisconnectReason, addr 0x5c929e0, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::NetSyncDisconnectReason ovr_NetSyncConnection_GetDisconnectReason(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetSessionId, addr 0x5c92a5c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSyncConnection_GetSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetStatus, addr 0x5c92ad8, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::NetSyncConnectionStatus ovr_NetSyncConnection_GetStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetZoneId, addr 0x5c92b54, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_NetSyncConnection_GetZoneId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetZoneId_Native, addr 0x5c92bb0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncConnection_GetZoneId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncOptions_Create, addr 0x5c99210, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncOptions_Create() ;

/// @brief Method ovr_NetSyncOptions_Destroy, addr 0x5c99274, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_NetSyncOptions_SetVoipGroup, addr 0x5c992f0, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetVoipGroup(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_NetSyncOptions_SetVoipGroup_Native, addr 0x5c99394, size 0x84, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetVoipGroup_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_NetSyncOptions_SetVoipStreamDefault, addr 0x5c99418, size 0x84, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetVoipStreamDefault(::System::IntPtr  handle, ::Oculus::Platform::NetSyncVoipStreamMode  value) ;

/// @brief Method ovr_NetSyncOptions_SetZoneId, addr 0x5c9949c, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetZoneId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_NetSyncOptions_SetZoneId_Native, addr 0x5c99540, size 0x84, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetZoneId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_NetSyncSessionArray_GetElement, addr 0x5c92efc, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncSessionArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_NetSyncSessionArray_GetSize, addr 0x5c92f80, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSyncSessionArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetConnectionId, addr 0x5c92c2c, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_NetSyncSession_GetConnectionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetMuted, addr 0x5c92ca8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_NetSyncSession_GetMuted(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetSessionId, addr 0x5c92d2c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSyncSession_GetSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetUserId, addr 0x5c92da8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSyncSession_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetVoipGroup, addr 0x5c92e24, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_NetSyncSession_GetVoipGroup(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetVoipGroup_Native, addr 0x5c92e80, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncSession_GetVoipGroup_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSessionsChangedNotification_GetConnectionId, addr 0x5c92ffc, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_NetSyncSessionsChangedNotification_GetConnectionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSessionsChangedNotification_GetSessions, addr 0x5c93078, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncSessionsChangedNotification_GetSessions(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSetSessionPropertyResult_GetSession, addr 0x5c930f4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncSetSessionPropertyResult_GetSession(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetElement, addr 0x5c93268, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncVoipAttenuationValueArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetSize, addr 0x5c932ec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSyncVoipAttenuationValueArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValue_GetDecibels, addr 0x5c93170, size 0x7c, virtual false, abstract: false, final false
static inline float_t ovr_NetSyncVoipAttenuationValue_GetDecibels(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValue_GetDistance, addr 0x5c931ec, size 0x7c, virtual false, abstract: false, final false
static inline float_t ovr_NetSyncVoipAttenuationValue_GetDistance(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSync_Connect, addr 0x5c8482c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_Connect(::System::IntPtr  connect_options) ;

/// @brief Method ovr_NetSync_Disconnect, addr 0x5c848a8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_Disconnect(int64_t  connection_id) ;

/// @brief Method ovr_NetSync_GetAmbisonicFloatPCM, addr 0x5c7e624, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicFloatPCM(int64_t  connection_id, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInt16PCM, addr 0x5c7e6c0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicInt16PCM(int64_t  connection_id, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInterleavedFloatPCM, addr 0x5c7e75c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicInterleavedFloatPCM(int64_t  connection_id, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInterleavedInt16PCM, addr 0x5c7e7f8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicInterleavedInt16PCM(int64_t  connection_id, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetListenerPosition, addr 0x5c7e894, size 0x9c, virtual false, abstract: false, final false
static inline bool ovr_NetSync_GetListenerPosition(int64_t  connection_id, uint64_t  sessionId, ::ByRef<::Oculus::Platform::CAPI_ovrNetSyncVec3>  position) ;

/// @brief Method ovr_NetSync_GetMonostreamFloatPCM, addr 0x5c7e930, size 0xa4, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetMonostreamFloatPCM(int64_t  connection_id, uint64_t  sessionId, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetMonostreamInt16PCM, addr 0x5c7e9d4, size 0xa4, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetMonostreamInt16PCM(int64_t  connection_id, uint64_t  session_id, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetPcmBufferMaxSamples, addr 0x5c7ea78, size 0x64, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetPcmBufferMaxSamples() ;

/// @brief Method ovr_NetSync_GetSessions, addr 0x5c84924, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_GetSessions(int64_t  connection_id) ;

/// @brief Method ovr_NetSync_GetVoipAmplitude, addr 0x5c7eadc, size 0x9c, virtual false, abstract: false, final false
static inline bool ovr_NetSync_GetVoipAmplitude(int64_t  connection_id, uint64_t  sessionId, ::ByRef<float_t>  amplitude) ;

/// @brief Method ovr_NetSync_GetVoipAttenuation, addr 0x5c849a0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_GetVoipAttenuation(int64_t  connection_id) ;

/// @brief Method ovr_NetSync_GetVoipAttenuationDefault, addr 0x5c84a1c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_GetVoipAttenuationDefault() ;

/// @brief Method ovr_NetSync_SetListenerPosition, addr 0x5c7eb78, size 0x84, virtual false, abstract: false, final false
static inline void ovr_NetSync_SetListenerPosition(int64_t  connection_id, ::ByRef<::Oculus::Platform::CAPI_ovrNetSyncVec3>  position) ;

/// @brief Method ovr_NetSync_SetVoipAttenuation, addr 0x5c84a80, size 0xac, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipAttenuation(int64_t  connection_id, ::ArrayW<float_t,::Array<float_t>*>  distances, ::ArrayW<float_t,::Array<float_t>*>  decibels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipAttenuationModel, addr 0x5c84b2c, size 0xd4, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipAttenuationModel(int64_t  connection_id, ::StringW  name, ::ArrayW<float_t,::Array<float_t>*>  distances, ::ArrayW<float_t,::Array<float_t>*>  decibels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipAttenuationModel_Native, addr 0x5c84c00, size 0xbc, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipAttenuationModel_Native(int64_t  connection_id, ::System::IntPtr  name, ::ArrayW<float_t,::Array<float_t>*>  distances, ::ArrayW<float_t,::Array<float_t>*>  decibels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipChannelCfg, addr 0x5c84cbc, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipChannelCfg(int64_t  connection_id, ::StringW  channel_name, ::StringW  attnmodel, bool  disable_spatialization) ;

/// @brief Method ovr_NetSync_SetVoipChannelCfg_Native, addr 0x5c84d9c, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipChannelCfg_Native(int64_t  connection_id, ::System::IntPtr  channel_name, ::System::IntPtr  attnmodel, bool  disable_spatialization) ;

/// @brief Method ovr_NetSync_SetVoipGroup, addr 0x5c84e38, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipGroup(int64_t  connection_id, ::StringW  group_id) ;

/// @brief Method ovr_NetSync_SetVoipGroup_Native, addr 0x5c84eec, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipGroup_Native(int64_t  connection_id, ::System::IntPtr  group_id) ;

/// @brief Method ovr_NetSync_SetVoipListentoChannels, addr 0x5c84f70, size 0x144, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipListentoChannels(int64_t  connection_id, ::ArrayW<::StringW,::Array<::StringW>*>  listento_channels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipMicSource, addr 0x5c850b4, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipMicSource(int64_t  connection_id, ::Oculus::Platform::NetSyncVoipMicSource  mic_source) ;

/// @brief Method ovr_NetSync_SetVoipSessionMuted, addr 0x5c85138, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipSessionMuted(int64_t  connection_id, uint64_t  session_id, bool  muted) ;

/// @brief Method ovr_NetSync_SetVoipSpeaktoChannels, addr 0x5c851cc, size 0x144, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipSpeaktoChannels(int64_t  connection_id, ::ArrayW<::StringW,::Array<::StringW>*>  speakto_channels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipStreamMode, addr 0x5c85310, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipStreamMode(int64_t  connection_id, uint64_t  sessionId, ::Oculus::Platform::NetSyncVoipStreamMode  streamMode) ;

/// @brief Method ovr_Notification_MarkAsRead, addr 0x5c853a4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Notification_MarkAsRead(uint64_t  notificationID) ;

/// @brief Method ovr_OrgScopedID_GetID, addr 0x5c93368, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_OrgScopedID_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Packet_Free, addr 0x5c933e4, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Packet_Free(::System::IntPtr  obj) ;

/// @brief Method ovr_Packet_GetBytes, addr 0x5c93460, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Packet_GetBytes(::System::IntPtr  obj) ;

/// @brief Method ovr_Packet_GetSenderID, addr 0x5c934dc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Packet_GetSenderID(::System::IntPtr  obj) ;

/// @brief Method ovr_Packet_GetSize, addr 0x5c93558, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Packet_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_PaidOffer_GetPrice, addr 0x5c935d4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PaidOffer_GetPrice(::System::IntPtr  obj) ;

/// @brief Method ovr_PaidOffer_GetSubscriptionTerm, addr 0x5c93650, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::OfferTerm ovr_PaidOffer_GetSubscriptionTerm(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyID_GetID, addr 0x5c938bc, size 0x78, virtual false, abstract: false, final false
static inline uint64_t ovr_PartyID_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetAction, addr 0x5c93934, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::PartyUpdateAction ovr_PartyUpdateNotification_GetAction(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetPartyId, addr 0x5c939b0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_PartyUpdateNotification_GetPartyId(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetSenderId, addr 0x5c93a2c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_PartyUpdateNotification_GetSenderId(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp, addr 0x5c93aa8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_PartyUpdateNotification_GetUpdateTimestamp(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp_Native, addr 0x5c93b04, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PartyUpdateNotification_GetUpdateTimestamp_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserAlias, addr 0x5c93b80, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_PartyUpdateNotification_GetUserAlias(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserAlias_Native, addr 0x5c93bdc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PartyUpdateNotification_GetUserAlias_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserId, addr 0x5c93c58, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_PartyUpdateNotification_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserName, addr 0x5c93cd4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_PartyUpdateNotification_GetUserName(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserName_Native, addr 0x5c93d30, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PartyUpdateNotification_GetUserName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_Create, addr 0x5c85420, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Create() ;

/// @brief Method ovr_Party_GatherInApplication, addr 0x5c85484, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_GatherInApplication(uint64_t  partyID, uint64_t  appID) ;

/// @brief Method ovr_Party_Get, addr 0x5c85508, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Get(uint64_t  partyID) ;

/// @brief Method ovr_Party_GetCurrent, addr 0x5c85584, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_GetCurrent() ;

/// @brief Method ovr_Party_GetCurrentForUser, addr 0x5c855e8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_GetCurrentForUser(uint64_t  userID) ;

/// @brief Method ovr_Party_GetID, addr 0x5c936cc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_GetInvitedUsers, addr 0x5c93748, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Party_GetInvitedUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_GetLeader, addr 0x5c937c4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Party_GetLeader(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_GetUsers, addr 0x5c93840, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Party_GetUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_Invite, addr 0x5c85664, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Invite(uint64_t  partyID, uint64_t  userID) ;

/// @brief Method ovr_Party_Join, addr 0x5c856e4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Join(uint64_t  partyID) ;

/// @brief Method ovr_Party_Leave, addr 0x5c85760, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Leave(uint64_t  partyID) ;

/// @brief Method ovr_Party_PluginGetSharedMemHandle, addr 0x5c7ebfc, size 0x64, virtual false, abstract: false, final false
static inline int32_t ovr_Party_PluginGetSharedMemHandle() ;

/// @brief Method ovr_Party_PluginGetVoipMicrophoneMuted, addr 0x5c7ec60, size 0x64, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipMuteState ovr_Party_PluginGetVoipMicrophoneMuted() ;

/// @brief Method ovr_Party_PluginGetVoipPassthrough, addr 0x5c7ecc4, size 0x6c, virtual false, abstract: false, final false
static inline bool ovr_Party_PluginGetVoipPassthrough() ;

/// @brief Method ovr_Party_PluginGetVoipStatus, addr 0x5c7ed30, size 0x64, virtual false, abstract: false, final false
static inline ::Oculus::Platform::SystemVoipStatus ovr_Party_PluginGetVoipStatus() ;

/// @brief Method ovr_PidArray_GetElement, addr 0x5c93e84, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PidArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_PidArray_GetSize, addr 0x5c93f08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_PidArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_Pid_GetId, addr 0x5c93dac, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Pid_GetId(::System::IntPtr  obj) ;

/// @brief Method ovr_Pid_GetId_Native, addr 0x5c93e08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Pid_GetId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PlatformInitializeWithAccessToken, addr 0x5c7cee4, size 0xa4, virtual false, abstract: false, final false
static inline uint64_t ovr_PlatformInitializeWithAccessToken(uint64_t  appId, ::StringW  accessToken) ;

/// @brief Method ovr_PlatformInitializeWithAccessTokenAndOptions, addr 0x5c7cf88, size 0x1b0, virtual false, abstract: false, final false
static inline uint64_t ovr_PlatformInitializeWithAccessTokenAndOptions(uint64_t  appId, ::StringW  accessToken, ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*>  configOptions, ::System::UIntPtr  numOptions) ;

/// @brief Method ovr_PlatformInitialize_GetResult, addr 0x5c93f84, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::PlatformInitializeResult ovr_PlatformInitialize_GetResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Platform_InitializeStandaloneOculus, addr 0x5c7cdf4, size 0xf0, virtual false, abstract: false, final false
static inline uint64_t ovr_Platform_InitializeStandaloneOculus(::ByRef<::Oculus::Platform::CAPI_OculusInitParams>  init) ;

/// @brief Method ovr_PopMessage, addr 0x5c7d3d0, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PopMessage() ;

/// @brief Method ovr_Price_GetAmountInHundredths, addr 0x5c94000, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_Price_GetAmountInHundredths(::System::IntPtr  obj) ;

/// @brief Method ovr_Price_GetCurrency, addr 0x5c9407c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Price_GetCurrency(::System::IntPtr  obj) ;

/// @brief Method ovr_Price_GetCurrency_Native, addr 0x5c940d8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Price_GetCurrency_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Price_GetFormatted, addr 0x5c94154, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Price_GetFormatted(::System::IntPtr  obj) ;

/// @brief Method ovr_Price_GetFormatted_Native, addr 0x5c941b0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Price_GetFormatted_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ProductArray_GetElement, addr 0x5c94a04, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ProductArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_ProductArray_GetNextUrl, addr 0x5c94a88, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ProductArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ProductArray_GetNextUrl_Native, addr 0x5c94ae4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ProductArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ProductArray_GetSize, addr 0x5c94b60, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_ProductArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ProductArray_HasNextPage, addr 0x5c94bdc, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ProductArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetBillingPlans, addr 0x5c9422c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetBillingPlans(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetContentRating, addr 0x5c942a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetContentRating(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetCoverUrl, addr 0x5c94324, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetCoverUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetCoverUrl_Native, addr 0x5c94380, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetCoverUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetDescription, addr 0x5c943fc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetDescription(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetDescription_Native, addr 0x5c94458, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetDescription_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetFormattedPrice, addr 0x5c944d4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetFormattedPrice(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetFormattedPrice_Native, addr 0x5c94530, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetFormattedPrice_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetIconUrl, addr 0x5c945ac, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetIconUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetIconUrl_Native, addr 0x5c94608, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetIconUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetName, addr 0x5c94684, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetName_Native, addr 0x5c946e0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetPrice, addr 0x5c9475c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetPrice(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetSKU, addr 0x5c948b0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetSKU(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetSKU_Native, addr 0x5c9490c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetSKU_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetShortDescription, addr 0x5c947d8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetShortDescription(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetShortDescription_Native, addr 0x5c94834, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetShortDescription_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetType, addr 0x5c94988, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ProductType ovr_Product_GetType(::System::IntPtr  obj) ;

/// @brief Method ovr_PurchaseArray_GetElement, addr 0x5c95268, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PurchaseArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_PurchaseArray_GetNextUrl, addr 0x5c952ec, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_PurchaseArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_PurchaseArray_GetNextUrl_Native, addr 0x5c95348, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PurchaseArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PurchaseArray_GetSize, addr 0x5c953c4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_PurchaseArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_PurchaseArray_HasNextPage, addr 0x5c95440, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_PurchaseArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetDeveloperPayload, addr 0x5c94c60, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Purchase_GetDeveloperPayload(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetDeveloperPayload_Native, addr 0x5c94cbc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Purchase_GetDeveloperPayload_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetExpirationTime, addr 0x5c94d38, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_Purchase_GetExpirationTime(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetExpirationTime_Native, addr 0x5c94d94, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Purchase_GetExpirationTime_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetGrantTime, addr 0x5c94e10, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_Purchase_GetGrantTime(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetGrantTime_Native, addr 0x5c94e6c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Purchase_GetGrantTime_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetPurchaseID, addr 0x5c94ee8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Purchase_GetPurchaseID(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetPurchaseStrID, addr 0x5c94f64, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Purchase_GetPurchaseStrID(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetPurchaseStrID_Native, addr 0x5c94fc0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Purchase_GetPurchaseStrID_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetReportingId, addr 0x5c9503c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Purchase_GetReportingId(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetReportingId_Native, addr 0x5c95098, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Purchase_GetReportingId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetSKU, addr 0x5c95114, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Purchase_GetSKU(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetSKU_Native, addr 0x5c95170, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Purchase_GetSKU_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetType, addr 0x5c951ec, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ProductType ovr_Purchase_GetType(::System::IntPtr  obj) ;

/// @brief Method ovr_PushNotificationResult_GetId, addr 0x5c954c4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_PushNotificationResult_GetId(::System::IntPtr  obj) ;

/// @brief Method ovr_PushNotificationResult_GetId_Native, addr 0x5c95520, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PushNotificationResult_GetId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PushNotification_Register, addr 0x5c857dc, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_PushNotification_Register() ;

/// @brief Method ovr_RejoinDialogResult_GetRejoinSelected, addr 0x5c9559c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_RejoinDialogResult_GetRejoinSelected(::System::IntPtr  obj) ;

/// @brief Method ovr_RichPresenceOptions_Create, addr 0x5c995c4, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_RichPresenceOptions_Create() ;

/// @brief Method ovr_RichPresenceOptions_Destroy, addr 0x5c99628, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_RichPresenceOptions_SetApiName, addr 0x5c996a4, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetApiName(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_RichPresenceOptions_SetApiName_Native, addr 0x5c99748, size 0x84, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetApiName_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride, addr 0x5c997cc, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x5c99870, size 0x84, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_RichPresenceOptions_SetIsJoinable, addr 0x5c998f4, size 0x84, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetIsJoinable(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_RichPresence_Clear, addr 0x5c85840, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_Clear() ;

/// @brief Method ovr_RichPresence_GetDestinations, addr 0x5c858a4, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_GetDestinations() ;

/// @brief Method ovr_RichPresence_Set, addr 0x5c85908, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_Set(::System::IntPtr  richPresenceOptions) ;

/// @brief Method ovr_RichPresence_SetDestination, addr 0x5c85984, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetDestination(::StringW  api_name) ;

/// @brief Method ovr_RichPresence_SetDestination_Native, addr 0x5c85a24, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetDestination_Native(::System::IntPtr  api_name) ;

/// @brief Method ovr_RichPresence_SetIsJoinable, addr 0x5c85aa0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetIsJoinable(bool  is_joinable) ;

/// @brief Method ovr_RichPresence_SetLobbySession, addr 0x5c85b1c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetLobbySession(::StringW  id) ;

/// @brief Method ovr_RichPresence_SetLobbySession_Native, addr 0x5c85bbc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetLobbySession_Native(::System::IntPtr  id) ;

/// @brief Method ovr_RichPresence_SetMatchSession, addr 0x5c85c38, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetMatchSession(::StringW  id) ;

/// @brief Method ovr_RichPresence_SetMatchSession_Native, addr 0x5c85cd8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetMatchSession_Native(::System::IntPtr  id) ;

/// @brief Method ovr_RosterOptions_AddSuggestedUser, addr 0x5c99a58, size 0x84, virtual false, abstract: false, final false
static inline void ovr_RosterOptions_AddSuggestedUser(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_RosterOptions_ClearSuggestedUsers, addr 0x5c99adc, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_RosterOptions_ClearSuggestedUsers(::System::IntPtr  handle) ;

/// @brief Method ovr_RosterOptions_Create, addr 0x5c99978, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_RosterOptions_Create() ;

/// @brief Method ovr_RosterOptions_Destroy, addr 0x5c999dc, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_RosterOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_SdkAccountArray_GetElement, addr 0x5c95718, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_SdkAccountArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_SdkAccountArray_GetSize, addr 0x5c9579c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_SdkAccountArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_SdkAccount_GetAccountType, addr 0x5c95620, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::SdkAccountType ovr_SdkAccount_GetAccountType(::System::IntPtr  obj) ;

/// @brief Method ovr_SdkAccount_GetUserId, addr 0x5c9569c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_SdkAccount_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_SendInvitesResult_GetInvites, addr 0x5c95818, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_SendInvitesResult_GetInvites(::System::IntPtr  obj) ;

/// @brief Method ovr_SetDeveloperAccessToken, addr 0x5c7d27c, size 0x9c, virtual false, abstract: false, final false
static inline bool ovr_SetDeveloperAccessToken(::StringW  accessToken) ;

/// @brief Method ovr_ShareMediaResult_GetStatus, addr 0x5c95894, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ShareMediaStatus ovr_ShareMediaResult_GetStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_SupplementaryMetric_GetID, addr 0x5c95910, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_SupplementaryMetric_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_SupplementaryMetric_GetMetric, addr 0x5c9598c, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_SupplementaryMetric_GetMetric(::System::IntPtr  obj) ;

/// @brief Method ovr_SystemVoipState_GetMicrophoneMuted, addr 0x5c95a08, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipMuteState ovr_SystemVoipState_GetMicrophoneMuted(::System::IntPtr  obj) ;

/// @brief Method ovr_SystemVoipState_GetStatus, addr 0x5c95a84, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::SystemVoipStatus ovr_SystemVoipState_GetStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccessArray_GetElement, addr 0x5c961c4, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUserAppAccessArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_TestUserAppAccessArray_GetSize, addr 0x5c96248, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_TestUserAppAccessArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAccessToken, addr 0x5c95ff4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_TestUserAppAccess_GetAccessToken(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAccessToken_Native, addr 0x5c96050, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUserAppAccess_GetAccessToken_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAppId, addr 0x5c960cc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_TestUserAppAccess_GetAppId(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetUserId, addr 0x5c96148, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_TestUserAppAccess_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetAccessToken, addr 0x5c95b00, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_TestUser_GetAccessToken(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetAccessToken_Native, addr 0x5c95b5c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetAccessToken_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetAppAccessArray, addr 0x5c95bd8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetAppAccessArray(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetFbAppAccessArray, addr 0x5c95c54, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetFbAppAccessArray(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetFriendAccessToken, addr 0x5c95cd0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_TestUser_GetFriendAccessToken(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetFriendAccessToken_Native, addr 0x5c95d2c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetFriendAccessToken_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetFriendAppAccessArray, addr 0x5c95da8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetFriendAppAccessArray(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetUserAlias, addr 0x5c95e24, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_TestUser_GetUserAlias(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetUserAlias_Native, addr 0x5c95e80, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetUserAlias_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetUserFbid, addr 0x5c95efc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_TestUser_GetUserFbid(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetUserId, addr 0x5c95f78, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_TestUser_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_TrialOfferArray_GetElement, addr 0x5c964b4, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TrialOfferArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_TrialOfferArray_GetSize, addr 0x5c96538, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_TrialOfferArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_TrialOffer_GetMaxTermCount, addr 0x5c962c4, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_TrialOffer_GetMaxTermCount(::System::IntPtr  obj) ;

/// @brief Method ovr_TrialOffer_GetPrice, addr 0x5c96340, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TrialOffer_GetPrice(::System::IntPtr  obj) ;

/// @brief Method ovr_TrialOffer_GetTrialTerm, addr 0x5c963bc, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::OfferTerm ovr_TrialOffer_GetTrialTerm(::System::IntPtr  obj) ;

/// @brief Method ovr_TrialOffer_GetTrialType, addr 0x5c96438, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::OfferType ovr_TrialOffer_GetTrialType(::System::IntPtr  obj) ;

/// @brief Method ovr_UnityInitGlobals, addr 0x5c7ccd4, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_UnityInitGlobals(::System::IntPtr  loggingCB) ;

/// @brief Method ovr_UnityInitWrapper, addr 0x5c7a250, size 0x9c, virtual false, abstract: false, final false
static inline bool ovr_UnityInitWrapper(::StringW  appId) ;

/// @brief Method ovr_UnityInitWrapperAsynchronous, addr 0x5c7a3dc, size 0x98, virtual false, abstract: false, final false
static inline uint64_t ovr_UnityInitWrapperAsynchronous(::StringW  appId) ;

/// @brief Method ovr_UnityInitWrapperStandalone, addr 0x5c7cd50, size 0xa4, virtual false, abstract: false, final false
static inline bool ovr_UnityInitWrapperStandalone(::StringW  accessToken, ::System::IntPtr  loggingCB) ;

/// @brief Method ovr_UnityInitWrapperWindows, addr 0x5c7d138, size 0xa4, virtual false, abstract: false, final false
static inline bool ovr_UnityInitWrapperWindows(::StringW  appId, ::System::IntPtr  loggingCB) ;

/// @brief Method ovr_UnityInitWrapperWindowsAsynchronous, addr 0x5c7d1dc, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_UnityInitWrapperWindowsAsynchronous(::StringW  appId, ::System::IntPtr  loggingCB) ;

/// @brief Method ovr_UnityResetTestPlatform, addr 0x5c7d8e4, size 0x64, virtual false, abstract: false, final false
static inline void ovr_UnityResetTestPlatform() ;

/// @brief Method ovr_UserAccountAgeCategory_GetAgeCategory, addr 0x5c96ec0, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::AccountAgeCategory ovr_UserAccountAgeCategory_GetAgeCategory(::System::IntPtr  obj) ;

/// @brief Method ovr_UserAgeCategory_Get, addr 0x5c86ae4, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_UserAgeCategory_Get() ;

/// @brief Method ovr_UserAgeCategory_Report, addr 0x5c86b48, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_UserAgeCategory_Report(::Oculus::Platform::AppAgeCategory  age_category) ;

/// @brief Method ovr_UserArray_GetElement, addr 0x5c96f3c, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_UserArray_GetNextUrl, addr 0x5c96fc0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_UserArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_UserArray_GetNextUrl_Native, addr 0x5c9701c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserArray_GetSize, addr 0x5c97098, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_UserArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_UserArray_HasNextPage, addr 0x5c97114, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapabilityArray_GetElement, addr 0x5c974a4, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapabilityArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_UserCapabilityArray_GetNextUrl, addr 0x5c97528, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_UserCapabilityArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapabilityArray_GetNextUrl_Native, addr 0x5c97584, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapabilityArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapabilityArray_GetSize, addr 0x5c97600, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_UserCapabilityArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapabilityArray_HasNextPage, addr 0x5c9767c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserCapabilityArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetDescription, addr 0x5c97198, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_UserCapability_GetDescription(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetDescription_Native, addr 0x5c971f4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapability_GetDescription_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetIsEnabled, addr 0x5c97270, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserCapability_GetIsEnabled(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetName, addr 0x5c972f4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_UserCapability_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetName_Native, addr 0x5c97350, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapability_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetReasonCode, addr 0x5c973cc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_UserCapability_GetReasonCode(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetReasonCode_Native, addr 0x5c97428, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapability_GetReasonCode_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserDataStoreUpdateResponse_GetSuccess, addr 0x5c97700, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserDataStoreUpdateResponse_GetSuccess(::System::IntPtr  obj) ;

/// @brief Method ovr_UserOptions_AddServiceProvider, addr 0x5c99cbc, size 0x84, virtual false, abstract: false, final false
static inline void ovr_UserOptions_AddServiceProvider(::System::IntPtr  handle, ::Oculus::Platform::ServiceProvider  value) ;

/// @brief Method ovr_UserOptions_ClearServiceProviders, addr 0x5c99d40, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_UserOptions_ClearServiceProviders(::System::IntPtr  handle) ;

/// @brief Method ovr_UserOptions_Create, addr 0x5c99b58, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserOptions_Create() ;

/// @brief Method ovr_UserOptions_Destroy, addr 0x5c99bbc, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_UserOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_UserOptions_SetMaxUsers, addr 0x5c99c38, size 0x84, virtual false, abstract: false, final false
static inline void ovr_UserOptions_SetMaxUsers(::System::IntPtr  handle, uint32_t  value) ;

/// @brief Method ovr_UserOptions_SetTimeWindow, addr 0x5c99dbc, size 0x84, virtual false, abstract: false, final false
static inline void ovr_UserOptions_SetTimeWindow(::System::IntPtr  handle, ::Oculus::Platform::TimeWindow  value) ;

/// @brief Method ovr_UserProof_GetNonce, addr 0x5c97784, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_UserProof_GetNonce(::System::IntPtr  obj) ;

/// @brief Method ovr_UserProof_GetNonce_Native, addr 0x5c977e0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserProof_GetNonce_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserReportID_GetDidCancel, addr 0x5c9785c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserReportID_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_UserReportID_GetID, addr 0x5c978e0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_UserReportID_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_User_CancelRecordingForReportFlow, addr 0x5c85d54, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_User_CancelRecordingForReportFlow(::StringW  recordingUUID) ;

/// @brief Method ovr_User_CancelRecordingForReportFlow_Native, addr 0x5c85df4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_CancelRecordingForReportFlow_Native(::System::IntPtr  recordingUUID) ;

/// @brief Method ovr_User_Get, addr 0x5c85e70, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_Get(uint64_t  userID) ;

/// @brief Method ovr_User_GetAccessToken, addr 0x5c85eec, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetAccessToken() ;

/// @brief Method ovr_User_GetBlockedUsers, addr 0x5c85f50, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetBlockedUsers() ;

/// @brief Method ovr_User_GetDisplayName, addr 0x5c965b4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetDisplayName(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetDisplayName_Native, addr 0x5c96610, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetDisplayName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetID, addr 0x5c9668c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetImageUrl, addr 0x5c96708, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetImageUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetImageUrl_Native, addr 0x5c96764, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetImageUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetLinkedAccounts, addr 0x5c85fb4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetLinkedAccounts(::System::IntPtr  userOptions) ;

/// @brief Method ovr_User_GetLoggedInUser, addr 0x5c86030, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetLoggedInUser() ;

/// @brief Method ovr_User_GetLoggedInUserFriends, addr 0x5c86094, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetLoggedInUserFriends() ;

/// @brief Method ovr_User_GetLoggedInUserManagedInfo, addr 0x5c860f8, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetLoggedInUserManagedInfo() ;

/// @brief Method ovr_User_GetManagedInfo, addr 0x5c967e0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetManagedInfo(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetOculusID, addr 0x5c9685c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetOculusID(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetOculusID_Native, addr 0x5c968b8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetOculusID_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetOrgScopedID, addr 0x5c8615c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetOrgScopedID(uint64_t  userID) ;

/// @brief Method ovr_User_GetPresence, addr 0x5c96934, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresence(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceDeeplinkMessage, addr 0x5c96a0c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresenceDeeplinkMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceDeeplinkMessage_Native, addr 0x5c96a68, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresenceDeeplinkMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceDestinationApiName, addr 0x5c96ae4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresenceDestinationApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceDestinationApiName_Native, addr 0x5c96b40, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresenceDestinationApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceLobbySessionId, addr 0x5c96bbc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresenceLobbySessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceLobbySessionId_Native, addr 0x5c96c18, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresenceLobbySessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceMatchSessionId, addr 0x5c96c94, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresenceMatchSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceMatchSessionId_Native, addr 0x5c96cf0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresenceMatchSessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceStatus, addr 0x5c96d6c, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::UserPresenceStatus ovr_User_GetPresenceStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresence_Native, addr 0x5c96990, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresence_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetSdkAccounts, addr 0x5c861d8, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetSdkAccounts() ;

/// @brief Method ovr_User_GetSmallImageUrl, addr 0x5c96de8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetSmallImageUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetSmallImageUrl_Native, addr 0x5c96e44, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetSmallImageUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetUserCapabilities, addr 0x5c8623c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetUserCapabilities() ;

/// @brief Method ovr_User_GetUserProof, addr 0x5c862a0, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetUserProof() ;

/// @brief Method ovr_User_LaunchBlockFlow, addr 0x5c86304, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchBlockFlow(uint64_t  userID) ;

/// @brief Method ovr_User_LaunchFriendRequestFlow, addr 0x5c86380, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchFriendRequestFlow(uint64_t  userID) ;

/// @brief Method ovr_User_LaunchReportFlow, addr 0x5c863fc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchReportFlow(uint64_t  userID) ;

/// @brief Method ovr_User_LaunchReportFlow2, addr 0x5c86478, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchReportFlow2(uint64_t  optionalUserID, ::System::IntPtr  abuseReportOptions) ;

/// @brief Method ovr_User_LaunchUnblockFlow, addr 0x5c864fc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchUnblockFlow(uint64_t  userID) ;

/// @brief Method ovr_User_NewEntitledTestUser, addr 0x5c86578, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_NewEntitledTestUser() ;

/// @brief Method ovr_User_NewTestUser, addr 0x5c865dc, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_NewTestUser() ;

/// @brief Method ovr_User_NewTestUserFriends, addr 0x5c86640, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_NewTestUserFriends() ;

/// @brief Method ovr_User_StartRecordingForReportFlow, addr 0x5c866a4, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StartRecordingForReportFlow() ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow, addr 0x5c86708, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow(uint64_t  optionalUserID, ::StringW  optionalRecordingUUID) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2, addr 0x5c86840, size 0xbc, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2(uint64_t  optionalUserID, ::StringW  optionalRecordingUUID, ::System::IntPtr  abuseReportOptions) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2_Native, addr 0x5c868fc, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2_Native(uint64_t  optionalUserID, ::System::IntPtr  optionalRecordingUUID, ::System::IntPtr  abuseReportOptions) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow_Native, addr 0x5c867bc, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow_Native(uint64_t  optionalUserID, ::System::IntPtr  optionalRecordingUUID) ;

/// @brief Method ovr_User_TestUserCreateDeviceManifest, addr 0x5c86990, size 0xb8, virtual false, abstract: false, final false
static inline uint64_t ovr_User_TestUserCreateDeviceManifest(::StringW  deviceID, ::ArrayW<uint64_t,::Array<uint64_t>*>  appIDs, int32_t  numAppIDs) ;

/// @brief Method ovr_User_TestUserCreateDeviceManifest_Native, addr 0x5c86a48, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_TestUserCreateDeviceManifest_Native(::System::IntPtr  deviceID, ::ArrayW<uint64_t,::Array<uint64_t>*>  appIDs, int32_t  numAppIDs) ;

/// @brief Method ovr_VoipDecoder_Decode, addr 0x5c9795c, size 0x9c, virtual false, abstract: false, final false
static inline void ovr_VoipDecoder_Decode(::System::IntPtr  obj, ::ArrayW<uint8_t,::Array<uint8_t>*>  compressedData, ::System::UIntPtr  compressedSize) ;

/// @brief Method ovr_VoipDecoder_Decode, addr 0x5c7d670, size 0x9c, virtual false, abstract: false, final false
static inline void ovr_VoipDecoder_Decode(::System::IntPtr  obj, ::ArrayW<uint8_t,::Array<uint8_t>*>  compressedData, uint64_t  compressedSize) ;

/// @brief Method ovr_VoipDecoder_GetDecodedPCM, addr 0x5c979f8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_VoipDecoder_GetDecodedPCM(::System::IntPtr  obj, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferSize) ;

/// @brief Method ovr_VoipEncoder_AddPCM, addr 0x5c97a94, size 0x9c, virtual false, abstract: false, final false
static inline void ovr_VoipEncoder_AddPCM(::System::IntPtr  obj, ::ArrayW<float_t,::Array<float_t>*>  inputData, uint32_t  inputSize) ;

/// @brief Method ovr_VoipEncoder_GetCompressedData, addr 0x5c97b30, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_VoipEncoder_GetCompressedData(::System::IntPtr  obj, ::ArrayW<uint8_t,::Array<uint8_t>*>  outputBuffer, ::System::UIntPtr  intputSize) ;

/// @brief Method ovr_VoipEncoder_GetCompressedDataSize, addr 0x5c97bcc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_VoipEncoder_GetCompressedDataSize(::System::IntPtr  obj) ;

/// @brief Method ovr_VoipOptions_Create, addr 0x5c99e40, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_VoipOptions_Create() ;

/// @brief Method ovr_VoipOptions_Destroy, addr 0x5c99ea4, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_VoipOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_VoipOptions_SetBitrateForNewConnections, addr 0x5c99f20, size 0x84, virtual false, abstract: false, final false
static inline void ovr_VoipOptions_SetBitrateForNewConnections(::System::IntPtr  handle, ::Oculus::Platform::VoipBitrate  value) ;

/// @brief Method ovr_VoipOptions_SetCreateNewConnectionUseDtx, addr 0x5c99fa4, size 0x84, virtual false, abstract: false, final false
static inline void ovr_VoipOptions_SetCreateNewConnectionUseDtx(::System::IntPtr  handle, ::Oculus::Platform::VoipDtxState  value) ;

/// @brief Method ovr_Voip_Accept, addr 0x5c7ed94, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_Accept(uint64_t  userID) ;

/// @brief Method ovr_Voip_CreateDecoder, addr 0x5c7d590, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Voip_CreateDecoder() ;

/// @brief Method ovr_Voip_CreateEncoder, addr 0x5c7d4b0, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Voip_CreateEncoder() ;

/// @brief Method ovr_Voip_DestroyDecoder, addr 0x5c7d5f4, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_DestroyDecoder(::System::IntPtr  decoder) ;

/// @brief Method ovr_Voip_DestroyEncoder, addr 0x5c7d514, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_DestroyEncoder(::System::IntPtr  encoder) ;

/// @brief Method ovr_Voip_GetIsConnectionUsingDtx, addr 0x5c7ee10, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipDtxState ovr_Voip_GetIsConnectionUsingDtx(uint64_t  peerID) ;

/// @brief Method ovr_Voip_GetLocalBitrate, addr 0x5c7ee8c, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetLocalBitrate(uint64_t  peerID) ;

/// @brief Method ovr_Voip_GetMicrophoneAvailability, addr 0x5c86bc4, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Voip_GetMicrophoneAvailability() ;

/// @brief Method ovr_Voip_GetOutputBufferMaxSize, addr 0x5c7ef08, size 0x64, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetOutputBufferMaxSize() ;

/// @brief Method ovr_Voip_GetPCM, addr 0x5c7ef6c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCM(uint64_t  senderID, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_Voip_GetPCMFloat, addr 0x5c7f008, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCMFloat(uint64_t  senderID, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_Voip_GetPCMSize, addr 0x5c7f0a4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCMSize(uint64_t  senderID) ;

/// @brief Method ovr_Voip_GetPCMWithTimestamp, addr 0x5c7f120, size 0xac, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCMWithTimestamp(uint64_t  senderID, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements, ::ArrayW<uint32_t,::Array<uint32_t>*>  timestamp) ;

/// @brief Method ovr_Voip_GetPCMWithTimestampFloat, addr 0x5c7f1cc, size 0xac, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCMWithTimestampFloat(uint64_t  senderID, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements, ::ArrayW<uint32_t,::Array<uint32_t>*>  timestamp) ;

/// @brief Method ovr_Voip_GetRemoteBitrate, addr 0x5c7f278, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetRemoteBitrate(uint64_t  peerID) ;

/// @brief Method ovr_Voip_GetSyncTimestamp, addr 0x5c7f2f4, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_Voip_GetSyncTimestamp(uint64_t  userID) ;

/// @brief Method ovr_Voip_GetSyncTimestampDifference, addr 0x5c7f370, size 0x84, virtual false, abstract: false, final false
static inline int64_t ovr_Voip_GetSyncTimestampDifference(uint32_t  lhs, uint32_t  rhs) ;

/// @brief Method ovr_Voip_GetSystemVoipMicrophoneMuted, addr 0x5c7f3f4, size 0x64, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipMuteState ovr_Voip_GetSystemVoipMicrophoneMuted() ;

/// @brief Method ovr_Voip_GetSystemVoipStatus, addr 0x5c7f458, size 0x64, virtual false, abstract: false, final false
static inline ::Oculus::Platform::SystemVoipStatus ovr_Voip_GetSystemVoipStatus() ;

/// @brief Method ovr_Voip_ReportAppVoipSessions, addr 0x5c86c28, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Voip_ReportAppVoipSessions(::ArrayW<uint64_t,::Array<uint64_t>*>  sessionIDs) ;

/// @brief Method ovr_Voip_SetMicrophoneFilterCallback, addr 0x5c7da4c, size 0x80, virtual false, abstract: false, final false
static inline void ovr_Voip_SetMicrophoneFilterCallback(::Oculus::Platform::CAPI_FilterCallback*  cb) ;

/// @brief Method ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer, addr 0x5c7dacc, size 0x88, virtual false, abstract: false, final false
static inline void ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(::Oculus::Platform::CAPI_FilterCallback*  cb, ::System::UIntPtr  bufferSizeElements) ;

/// @brief Method ovr_Voip_SetMicrophoneMuted, addr 0x5c7f4bc, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetMicrophoneMuted(::Oculus::Platform::VoipMuteState  state) ;

/// @brief Method ovr_Voip_SetNewConnectionOptions, addr 0x5c7f538, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetNewConnectionOptions(::System::IntPtr  voipOptions) ;

/// @brief Method ovr_Voip_SetOutputSampleRate, addr 0x5c7f5b4, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetOutputSampleRate(::Oculus::Platform::VoipSampleRate  rate) ;

/// @brief Method ovr_Voip_SetSystemVoipMicrophoneMuted, addr 0x5c7d868, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetSystemVoipMicrophoneMuted(::Oculus::Platform::VoipMuteState  muted) ;

/// @brief Method ovr_Voip_SetSystemVoipPassthrough, addr 0x5c7d7ec, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetSystemVoipPassthrough(bool  passthrough) ;

/// @brief Method ovr_Voip_SetSystemVoipSuppressed, addr 0x5c86cac, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Voip_SetSystemVoipSuppressed(bool  suppressed) ;

/// @brief Method ovr_Voip_Start, addr 0x5c7f630, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_Start(uint64_t  userID) ;

/// @brief Method ovr_Voip_Stop, addr 0x5c7f6ac, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_Stop(uint64_t  userID) ;

static inline void setStaticF_nativeStringEncoding(::System::Text::UTF8Encoding*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CAPI(CAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CAPI(CAPI const& ) = delete;

/// @brief Field DLL_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  DLL_NAME{u"ovrplatformloader"};

/// @brief Field VoipFilterBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  VoipFilterBufferSize{static_cast<int32_t>(0x1e0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17815};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::CAPI, 0x10>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::CAPI);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CAPI*, "Oculus.Platform", "CAPI");
NEED_NO_BOX(::Oculus::Platform::CAPI_FilterCallback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CAPI_FilterCallback*, "Oculus.Platform", "CAPI/FilterCallback");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CAPI_OculusInitParams, "Oculus.Platform", "CAPI/OculusInitParams");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CAPI_ovrKeyValuePair, "Oculus.Platform", "CAPI/ovrKeyValuePair");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CAPI_ovrNetSyncVec3, "Oculus.Platform", "CAPI/ovrNetSyncVec3");

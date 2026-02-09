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
/// @brief Method .ctor, addr 0x5c08718, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, ::StringW  value) ;

/// @brief Method .ctor, addr 0x5c08730, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, double_t  value) ;

/// @brief Method .ctor, addr 0x5c081ac, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CAPI_ovrKeyValuePair() ;

// Ctor Parameters [CppParam { name: "key_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "valueType_", ty: "::Oculus::Platform::KeyValuePairType", modifiers: "", def_value: None }, CppParam { name: "stringValue_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "intValue_", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "doubleValue_", ty: "double_t", modifiers: "", def_value: None }]
constexpr CAPI_ovrKeyValuePair(::StringW  key_, ::Oculus::Platform::KeyValuePairType  valueType_, ::StringW  stringValue_, int32_t  intValue_, double_t  doubleValue_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17801};

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17802};

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17803};

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
/// @brief Method BeginInvoke, addr 0x5c265f0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<int16_t,::Array<int16_t>*>>  pcmData, ::System::UIntPtr  pcmDataLength, int32_t  frequency, int32_t  numChannels, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5c26680, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5c265dc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::ByRef<::ArrayW<int16_t,::Array<int16_t>*>>  pcmData, ::System::UIntPtr  pcmDataLength, int32_t  frequency, int32_t  numChannels) ;

static inline ::Oculus::Platform::CAPI_FilterCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5c2655c, size 0x80, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17804};

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

/// @brief Method ArrayOfStructsToIntPtr, addr 0x5c07e28, size 0x17c, virtual false, abstract: false, final false
static inline ::System::IntPtr ArrayOfStructsToIntPtr(::System::Array*  ar) ;

/// @brief Method BlobFromNative, addr 0x5c08e7c, size 0xd4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> BlobFromNative(uint32_t  size, ::System::IntPtr  pointer) ;

/// @brief Method DataStoreFromNative, addr 0x5c0881c, size 0x164, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* DataStoreFromNative(::System::IntPtr  pointer) ;

/// @brief Method DateTimeFromNative, addr 0x5c08c9c, size 0xa8, virtual false, abstract: false, final false
static inline ::System::DateTime DateTimeFromNative(uint64_t  seconds_since_the_one_true_epoch) ;

/// @brief Method DateTimeToNative, addr 0x5c08d44, size 0x138, virtual false, abstract: false, final false
static inline uint64_t DateTimeToNative(::System::DateTime  dt) ;

/// @brief Method DictionaryToOVRKeyValuePairs, addr 0x5c07fa4, size 0x208, virtual false, abstract: false, final false
static inline ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*> DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions,bool>*  dict) ;

/// @brief Method DictionaryToOVRKeyValuePairs, addr 0x5c081c8, size 0x550, virtual false, abstract: false, final false
static inline ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*> DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dict) ;

/// @brief Method FiledataFromNative, addr 0x5c08f50, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FiledataFromNative(uint32_t  size, ::System::IntPtr  pointer) ;

/// @brief Method GetNativeStringLengthNotIncludingNullTerminator, addr 0x5c08c30, size 0x6c, virtual false, abstract: false, final false
static inline int32_t GetNativeStringLengthNotIncludingNullTerminator(::System::IntPtr  pointer) ;

/// @brief Method IntPtrToByteArray, addr 0x5c0874c, size 0xd0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> IntPtrToByteArray(::System::IntPtr  data, uint64_t  size) ;

/// @brief Method LogNewEvent, addr 0x5c0a0a4, size 0x394, virtual false, abstract: false, final false
static inline void LogNewEvent(::StringW  eventName, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  values) ;

/// @brief Method LogNewUnifiedEvent, addr 0x5c09ff4, size 0xb0, virtual false, abstract: false, final false
static inline void LogNewUnifiedEvent(::Oculus::Platform::LogEventName  eventName, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  values) ;

static inline ::Oculus::Platform::CAPI* New_ctor() ;

/// @brief Method StringFromNative, addr 0x5c08b20, size 0x110, virtual false, abstract: false, final false
static inline ::StringW StringFromNative(::System::IntPtr  pointer) ;

/// @brief Method StringToNative, addr 0x5c08ff8, size 0x17c, virtual false, abstract: false, final false
static inline ::System::IntPtr StringToNative(::StringW  s) ;

/// @brief Method .ctor, addr 0x5c264c8, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::UTF8Encoding* getStaticF_nativeStringEncoding() ;

/// @brief Method ovr_AbuseReportOptions_Create, addr 0x5c05a44, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AbuseReportOptions_Create() ;

/// @brief Method ovr_AbuseReportOptions_Destroy, addr 0x5c05d28, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AbuseReportOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_AbuseReportOptions_SetPreventPeopleChooser, addr 0x5c05b14, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AbuseReportOptions_SetPreventPeopleChooser(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_AbuseReportOptions_SetReportType, addr 0x5c05c04, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AbuseReportOptions_SetReportType(::System::IntPtr  handle, ::Oculus::Platform::AbuseReportType  value) ;

/// @brief Method ovr_AbuseReportRecording_GetRecordingUuid, addr 0x5c131c8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AbuseReportRecording_GetRecordingUuid(::System::IntPtr  obj) ;

/// @brief Method ovr_AbuseReportRecording_GetRecordingUuid_Native, addr 0x5c13224, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AbuseReportRecording_GetRecordingUuid_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AbuseReport_LaunchAdvancedReportFlow, addr 0x5c0bbc8, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_AbuseReport_LaunchAdvancedReportFlow(uint64_t  content_id, ::System::IntPtr  abuse_report_options) ;

/// @brief Method ovr_AbuseReport_ReportRequestHandled, addr 0x5c0bc4c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AbuseReport_ReportRequestHandled(::Oculus::Platform::ReportRequestResponse  response) ;

/// @brief Method ovr_AchievementDefinitionArray_GetElement, addr 0x5c134ec, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementDefinitionArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_AchievementDefinitionArray_GetNextUrl, addr 0x5c13570, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementDefinitionArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetNextUrl_Native, addr 0x5c135cc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementDefinitionArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetSize, addr 0x5c13648, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_AchievementDefinitionArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinitionArray_HasNextPage, addr 0x5c136c4, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AchievementDefinitionArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetBitfieldLength, addr 0x5c132a0, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_AchievementDefinition_GetBitfieldLength(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetName, addr 0x5c1331c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementDefinition_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetName_Native, addr 0x5c13378, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementDefinition_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetTarget, addr 0x5c133f4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AchievementDefinition_GetTarget(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementDefinition_GetType, addr 0x5c13470, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::AchievementType ovr_AchievementDefinition_GetType(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgressArray_GetElement, addr 0x5c13ad0, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementProgressArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_AchievementProgressArray_GetNextUrl, addr 0x5c13b54, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementProgressArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgressArray_GetNextUrl_Native, addr 0x5c13bb0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementProgressArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgressArray_GetSize, addr 0x5c13c2c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_AchievementProgressArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgressArray_HasNextPage, addr 0x5c13ca8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AchievementProgressArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetBitfield, addr 0x5c13748, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementProgress_GetBitfield(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetBitfield_Native, addr 0x5c137a4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementProgress_GetBitfield_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetCount, addr 0x5c13820, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AchievementProgress_GetCount(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetIsUnlocked, addr 0x5c1389c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AchievementProgress_GetIsUnlocked(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetName, addr 0x5c13920, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementProgress_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetName_Native, addr 0x5c1397c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementProgress_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetUnlockTime, addr 0x5c139f8, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_AchievementProgress_GetUnlockTime(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementProgress_GetUnlockTime_Native, addr 0x5c13a54, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AchievementProgress_GetUnlockTime_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementUpdate_GetJustUnlocked, addr 0x5c13d2c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AchievementUpdate_GetJustUnlocked(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementUpdate_GetName, addr 0x5c13db0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AchievementUpdate_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_AchievementUpdate_GetName_Native, addr 0x5c13e0c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AchievementUpdate_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Achievements_AddCount, addr 0x5c0bcc8, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_AddCount(::StringW  name, uint64_t  count) ;

/// @brief Method ovr_Achievements_AddCount_Native, addr 0x5c0bd78, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_AddCount_Native(::System::IntPtr  name, uint64_t  count) ;

/// @brief Method ovr_Achievements_AddFields, addr 0x5c0bdfc, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_AddFields(::StringW  name, ::StringW  fields) ;

/// @brief Method ovr_Achievements_AddFields_Native, addr 0x5c0bec4, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_AddFields_Native(::System::IntPtr  name, ::System::IntPtr  fields) ;

/// @brief Method ovr_Achievements_GetAllDefinitions, addr 0x5c0bf48, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_GetAllDefinitions() ;

/// @brief Method ovr_Achievements_GetAllProgress, addr 0x5c0bfac, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_GetAllProgress() ;

/// @brief Method ovr_Achievements_GetDefinitionsByName, addr 0x5c0c010, size 0x130, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_GetDefinitionsByName(::ArrayW<::StringW,::Array<::StringW>*>  names, int32_t  count) ;

/// @brief Method ovr_Achievements_GetProgressByName, addr 0x5c0c140, size 0x130, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_GetProgressByName(::ArrayW<::StringW,::Array<::StringW>*>  names, int32_t  count) ;

/// @brief Method ovr_Achievements_Unlock, addr 0x5c0c270, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_Unlock(::StringW  name) ;

/// @brief Method ovr_Achievements_Unlock_Native, addr 0x5c0c310, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Achievements_Unlock_Native(::System::IntPtr  name) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_AddSuggestedUser, addr 0x5c062dc, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_AddSuggestedUser(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext, addr 0x5c05ff4, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext(::System::IntPtr  handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers, addr 0x5c063bc, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers(::System::IntPtr  handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_Create, addr 0x5c05e00, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AdvancedAbuseReportOptions_Create() ;

/// @brief Method ovr_AdvancedAbuseReportOptions_Destroy, addr 0x5c065c8, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString, addr 0x5c05ed8, size 0xc0, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString(::System::IntPtr  handle, ::StringW  key, ::StringW  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native, addr 0x5c240e8, size 0x94, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native(::System::IntPtr  handle, ::System::IntPtr  key, ::System::IntPtr  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType, addr 0x5c060dc, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetObjectType(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType_Native, addr 0x5c2417c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetObjectType_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetReportType, addr 0x5c061ec, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetReportType(::System::IntPtr  handle, ::Oculus::Platform::AbuseReportType  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetVideoMode, addr 0x5c064a4, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AdvancedAbuseReportOptions_SetVideoMode(::System::IntPtr  handle, ::Oculus::Platform::AbuseReportVideoMode  value) ;

/// @brief Method ovr_AppDownloadProgressResult_GetDownloadBytes, addr 0x5c13e88, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_AppDownloadProgressResult_GetDownloadBytes(::System::IntPtr  obj) ;

/// @brief Method ovr_AppDownloadProgressResult_GetDownloadedBytes, addr 0x5c13f04, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_AppDownloadProgressResult_GetDownloadedBytes(::System::IntPtr  obj) ;

/// @brief Method ovr_AppDownloadProgressResult_GetStatusCode, addr 0x5c13f80, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::AppStatus ovr_AppDownloadProgressResult_GetStatusCode(::System::IntPtr  obj) ;

/// @brief Method ovr_AppDownloadResult_GetAppInstallResult, addr 0x5c13ffc, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::AppInstallResult ovr_AppDownloadResult_GetAppInstallResult(::System::IntPtr  obj) ;

/// @brief Method ovr_AppDownloadResult_GetTimestamp, addr 0x5c14078, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_AppDownloadResult_GetTimestamp(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetElement, addr 0x5c14518, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInviteArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_ApplicationInviteArray_GetNextUrl, addr 0x5c1459c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationInviteArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetNextUrl_Native, addr 0x5c145f8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInviteArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetSize, addr 0x5c14674, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_ApplicationInviteArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInviteArray_HasNextPage, addr 0x5c146f0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ApplicationInviteArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetDestination, addr 0x5c14170, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInvite_GetDestination(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetID, addr 0x5c141ec, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationInvite_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetIsActive, addr 0x5c14268, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ApplicationInvite_GetIsActive(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetLobbySessionId, addr 0x5c142ec, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationInvite_GetLobbySessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetLobbySessionId_Native, addr 0x5c14348, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInvite_GetLobbySessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetMatchSessionId, addr 0x5c143c4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationInvite_GetMatchSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetMatchSessionId_Native, addr 0x5c14420, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInvite_GetMatchSessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationInvite_GetRecipient, addr 0x5c1449c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationInvite_GetRecipient(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationLifecycle_GetLaunchDetails, addr 0x5c0a4d4, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationLifecycle_GetLaunchDetails() ;

/// @brief Method ovr_ApplicationLifecycle_GetRegisteredPIDs, addr 0x5c0c680, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationLifecycle_GetRegisteredPIDs() ;

/// @brief Method ovr_ApplicationLifecycle_GetSessionKey, addr 0x5c0c6e4, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationLifecycle_GetSessionKey() ;

/// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult, addr 0x5c0a538, size 0xa0, virtual false, abstract: false, final false
static inline void ovr_ApplicationLifecycle_LogDeeplinkResult(::StringW  trackingID, ::Oculus::Platform::LaunchResult  result) ;

/// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult_Native, addr 0x5c0a5d8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationLifecycle_LogDeeplinkResult_Native(::System::IntPtr  trackingID, ::Oculus::Platform::LaunchResult  result) ;

/// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey, addr 0x5c0c748, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey(::StringW  sessionKey) ;

/// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey_Native, addr 0x5c0c7e8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey_Native(::System::IntPtr  sessionKey) ;

/// @brief Method ovr_ApplicationOptions_Create, addr 0x5c06974, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationOptions_Create() ;

/// @brief Method ovr_ApplicationOptions_Destroy, addr 0x5c06fa8, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage, addr 0x5c06a44, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetDeeplinkMessage(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage_Native, addr 0x5c24200, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetDeeplinkMessage_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ApplicationOptions_SetDestinationApiName, addr 0x5c06b54, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetDestinationApiName(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetDestinationApiName_Native, addr 0x5c24284, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetDestinationApiName_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ApplicationOptions_SetLobbySessionId, addr 0x5c06c64, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetLobbySessionId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetLobbySessionId_Native, addr 0x5c24308, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetLobbySessionId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ApplicationOptions_SetMatchSessionId, addr 0x5c06d74, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetMatchSessionId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetMatchSessionId_Native, addr 0x5c2438c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetMatchSessionId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ApplicationOptions_SetRoomId, addr 0x5c06e84, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ApplicationOptions_SetRoomId(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentCode, addr 0x5c14774, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_ApplicationVersion_GetCurrentCode(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentName, addr 0x5c147f0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationVersion_GetCurrentName(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentName_Native, addr 0x5c1484c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationVersion_GetCurrentName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestCode, addr 0x5c148c8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_ApplicationVersion_GetLatestCode(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestName, addr 0x5c14944, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationVersion_GetLatestName(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestName_Native, addr 0x5c149a0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationVersion_GetLatestName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetReleaseDate, addr 0x5c14a1c, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_ApplicationVersion_GetReleaseDate(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetSize, addr 0x5c14a98, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ApplicationVersion_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ApplicationVersion_GetSize_Native, addr 0x5c14af4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ApplicationVersion_GetSize_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Application_CancelAppDownload, addr 0x5c0c38c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_CancelAppDownload() ;

/// @brief Method ovr_Application_CheckAppDownloadProgress, addr 0x5c0c3f0, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_CheckAppDownloadProgress() ;

/// @brief Method ovr_Application_GetID, addr 0x5c140f4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Application_GetInstalledApplications, addr 0x5c0c454, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_GetInstalledApplications() ;

/// @brief Method ovr_Application_GetVersion, addr 0x5c0c4b8, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_GetVersion() ;

/// @brief Method ovr_Application_InstallAppUpdateAndRelaunch, addr 0x5c0c51c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_InstallAppUpdateAndRelaunch(::System::IntPtr  deeplink_options) ;

/// @brief Method ovr_Application_LaunchOtherApp, addr 0x5c0c598, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_LaunchOtherApp(uint64_t  appID, ::System::IntPtr  deeplink_options) ;

/// @brief Method ovr_Application_StartAppDownload, addr 0x5c0c61c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Application_StartAppDownload() ;

/// @brief Method ovr_AssetDetailsArray_GetElement, addr 0x5c150a0, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetailsArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_AssetDetailsArray_GetSize, addr 0x5c15124, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_AssetDetailsArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetAssetId, addr 0x5c14b70, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetDetails_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetAssetType, addr 0x5c14bec, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetAssetType(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetAssetType_Native, addr 0x5c14c48, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetAssetType_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetDownloadStatus, addr 0x5c14cc4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetDownloadStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetDownloadStatus_Native, addr 0x5c14d20, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetDownloadStatus_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetFilepath, addr 0x5c14d9c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetFilepath(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetFilepath_Native, addr 0x5c14df8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetFilepath_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetIapStatus, addr 0x5c14e74, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetIapStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetIapStatus_Native, addr 0x5c14ed0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetIapStatus_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetLanguage, addr 0x5c14f4c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetLanguage(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetMetadata, addr 0x5c14fc8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetDetails_GetMetadata(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetDetails_GetMetadata_Native, addr 0x5c15024, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetDetails_GetMetadata_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetAssetFileId, addr 0x5c151a0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDeleteResult_GetAssetFileId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetAssetId, addr 0x5c1521c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDeleteResult_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetFilepath, addr 0x5c15298, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetFileDeleteResult_GetFilepath(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetFilepath_Native, addr 0x5c152f4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetFileDeleteResult_GetFilepath_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetSuccess, addr 0x5c15370, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AssetFileDeleteResult_GetSuccess(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetFileId, addr 0x5c153f4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetFileId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetId, addr 0x5c15470, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath, addr 0x5c154ec, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetFileDownloadCancelResult_GetFilepath(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath_Native, addr 0x5c15548, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetFileDownloadCancelResult_GetFilepath_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetSuccess, addr 0x5c155c4, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AssetFileDownloadCancelResult_GetSuccess(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetAssetId, addr 0x5c15648, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadResult_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetFilepath, addr 0x5c156c4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_AssetFileDownloadResult_GetFilepath(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetFilepath_Native, addr 0x5c15720, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AssetFileDownloadResult_GetFilepath_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetAssetFileId, addr 0x5c1579c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetFileId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetAssetId, addr 0x5c15818, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetId(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotal, addr 0x5c15894, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_AssetFileDownloadUpdate_GetBytesTotal(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotalLong, addr 0x5c15910, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFileDownloadUpdate_GetBytesTotalLong(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferred, addr 0x5c1598c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_AssetFileDownloadUpdate_GetBytesTransferred(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferredLong, addr 0x5c15a08, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_AssetFileDownloadUpdate_GetBytesTransferredLong(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetCompleted, addr 0x5c15a84, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AssetFileDownloadUpdate_GetCompleted(::System::IntPtr  obj) ;

/// @brief Method ovr_AssetFile_Delete, addr 0x5c0c864, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_Delete(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DeleteById, addr 0x5c0c8e0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DeleteById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DeleteByName, addr 0x5c0c95c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DeleteByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_DeleteByName_Native, addr 0x5c0c9fc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DeleteByName_Native(::System::IntPtr  assetFileName) ;

/// @brief Method ovr_AssetFile_Download, addr 0x5c0ca78, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_Download(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadById, addr 0x5c0caf4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadByName, addr 0x5c0cb70, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadByName_Native, addr 0x5c0cc10, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadByName_Native(::System::IntPtr  assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadCancel, addr 0x5c0cc8c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadCancel(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadCancelById, addr 0x5c0cd08, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadCancelById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadCancelByName, addr 0x5c0cd84, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadCancelByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadCancelByName_Native, addr 0x5c0ce24, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_DownloadCancelByName_Native(::System::IntPtr  assetFileName) ;

/// @brief Method ovr_AssetFile_GetList, addr 0x5c0cea0, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_GetList() ;

/// @brief Method ovr_AssetFile_Status, addr 0x5c0cf04, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_Status(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_StatusById, addr 0x5c0cf80, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_StatusById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_StatusByName, addr 0x5c0cffc, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_StatusByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_StatusByName_Native, addr 0x5c0d09c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_AssetFile_StatusByName_Native(::System::IntPtr  assetFileName) ;

/// @brief Method ovr_AvatarEditorOptions_Create, addr 0x5c07080, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_AvatarEditorOptions_Create() ;

/// @brief Method ovr_AvatarEditorOptions_Destroy, addr 0x5c07294, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_AvatarEditorOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_AvatarEditorOptions_SetSourceOverride, addr 0x5c07150, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_AvatarEditorOptions_SetSourceOverride(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_AvatarEditorOptions_SetSourceOverride_Native, addr 0x5c24410, size 0x84, virtual false, abstract: false, final false
static inline void ovr_AvatarEditorOptions_SetSourceOverride_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_AvatarEditorResult_GetRequestSent, addr 0x5c15b08, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_AvatarEditorResult_GetRequestSent(::System::IntPtr  obj) ;

/// @brief Method ovr_Avatar_LaunchAvatarEditor, addr 0x5c0d118, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Avatar_LaunchAvatarEditor(::System::IntPtr  options) ;

/// @brief Method ovr_Avatar_UpdateMetaData, addr 0x5c0d194, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_Avatar_UpdateMetaData(::StringW  avatarMetaData, ::StringW  imageFilePath) ;

/// @brief Method ovr_Avatar_UpdateMetaData_Native, addr 0x5c0d25c, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Avatar_UpdateMetaData_Native(::System::IntPtr  avatarMetaData, ::System::IntPtr  imageFilePath) ;

/// @brief Method ovr_BillingPlanArray_GetElement, addr 0x5c15c84, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_BillingPlanArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_BillingPlanArray_GetSize, addr 0x5c15d08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_BillingPlanArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_BillingPlan_GetPaidOffer, addr 0x5c15b8c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_BillingPlan_GetPaidOffer(::System::IntPtr  obj) ;

/// @brief Method ovr_BillingPlan_GetTrialOffers, addr 0x5c15c08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_BillingPlan_GetTrialOffers(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUserArray_GetElement, addr 0x5c15e00, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_BlockedUserArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_BlockedUserArray_GetNextUrl, addr 0x5c15e84, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_BlockedUserArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUserArray_GetNextUrl_Native, addr 0x5c15ee0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_BlockedUserArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUserArray_GetSize, addr 0x5c15f5c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_BlockedUserArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUserArray_HasNextPage, addr 0x5c15fd8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_BlockedUserArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_BlockedUser_GetId, addr 0x5c15d84, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_BlockedUser_GetId(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetElement, addr 0x5c166a4, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_ChallengeArray_GetNextUrl, addr 0x5c16728, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetNextUrl_Native, addr 0x5c16784, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetPreviousUrl, addr 0x5c16800, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeArray_GetPreviousUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetPreviousUrl_Native, addr 0x5c1685c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeArray_GetPreviousUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetSize, addr 0x5c168d8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_ChallengeArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_GetTotalCount, addr 0x5c16954, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ChallengeArray_GetTotalCount(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_HasNextPage, addr 0x5c169d0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ChallengeArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeArray_HasPreviousPage, addr 0x5c16a54, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ChallengeArray_HasPreviousPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetElement, addr 0x5c1705c, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntryArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_ChallengeEntryArray_GetNextUrl, addr 0x5c170e0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeEntryArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetNextUrl_Native, addr 0x5c1713c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntryArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl, addr 0x5c171b8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeEntryArray_GetPreviousUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl_Native, addr 0x5c17214, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntryArray_GetPreviousUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetSize, addr 0x5c17290, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_ChallengeEntryArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetTotalCount, addr 0x5c1730c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ChallengeEntryArray_GetTotalCount(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_HasNextPage, addr 0x5c17388, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ChallengeEntryArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntryArray_HasPreviousPage, addr 0x5c1740c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ChallengeEntryArray_HasPreviousPage(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetDisplayScore, addr 0x5c16ad8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ChallengeEntry_GetDisplayScore(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetDisplayScore_Native, addr 0x5c16b34, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntry_GetDisplayScore_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraData, addr 0x5c16bb0, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ovr_ChallengeEntry_GetExtraData(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraDataLength, addr 0x5c16d18, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_ChallengeEntry_GetExtraDataLength(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraData_Native, addr 0x5c16c9c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntry_GetExtraData_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetID, addr 0x5c16d94, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ChallengeEntry_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetRank, addr 0x5c16e10, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_ChallengeEntry_GetRank(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetScore, addr 0x5c16e8c, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_ChallengeEntry_GetScore(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetTimestamp, addr 0x5c16f08, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_ChallengeEntry_GetTimestamp(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetTimestamp_Native, addr 0x5c16f64, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_ChallengeEntry_GetTimestamp_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeEntry_GetUser, addr 0x5c16fe0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeEntry_GetUser(::System::IntPtr  obj) ;

/// @brief Method ovr_ChallengeOptions_Create, addr 0x5c24494, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ChallengeOptions_Create() ;

/// @brief Method ovr_ChallengeOptions_Destroy, addr 0x5c244f8, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_ChallengeOptions_SetDescription, addr 0x5c24574, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetDescription(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ChallengeOptions_SetDescription_Native, addr 0x5c24618, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetDescription_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ChallengeOptions_SetEndDate, addr 0x5c2469c, size 0x70, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetEndDate(::System::IntPtr  handle, ::System::DateTime  value) ;

/// @brief Method ovr_ChallengeOptions_SetEndDate_Native, addr 0x5c2470c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetEndDate_Native(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludeActiveChallenges, addr 0x5c24790, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetIncludeActiveChallenges(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludeFutureChallenges, addr 0x5c24814, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetIncludeFutureChallenges(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludePastChallenges, addr 0x5c24898, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetIncludePastChallenges(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_ChallengeOptions_SetLeaderboardName, addr 0x5c2491c, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetLeaderboardName(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ChallengeOptions_SetLeaderboardName_Native, addr 0x5c249c0, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetLeaderboardName_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ChallengeOptions_SetStartDate, addr 0x5c24a44, size 0x70, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetStartDate(::System::IntPtr  handle, ::System::DateTime  value) ;

/// @brief Method ovr_ChallengeOptions_SetStartDate_Native, addr 0x5c24ab4, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetStartDate_Native(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_ChallengeOptions_SetTitle, addr 0x5c24b38, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetTitle(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_ChallengeOptions_SetTitle_Native, addr 0x5c24bdc, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetTitle_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_ChallengeOptions_SetViewerFilter, addr 0x5c24c60, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetViewerFilter(::System::IntPtr  handle, ::Oculus::Platform::ChallengeViewerFilter  value) ;

/// @brief Method ovr_ChallengeOptions_SetVisibility, addr 0x5c24ce4, size 0x84, virtual false, abstract: false, final false
static inline void ovr_ChallengeOptions_SetVisibility(::System::IntPtr  handle, ::Oculus::Platform::ChallengeVisibility  value) ;

/// @brief Method ovr_Challenge_GetCreationType, addr 0x5c1605c, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ChallengeCreationType ovr_Challenge_GetCreationType(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetDescription, addr 0x5c160d8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Challenge_GetDescription(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetDescription_Native, addr 0x5c16134, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetDescription_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetEndDate, addr 0x5c161b0, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_Challenge_GetEndDate(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetEndDate_Native, addr 0x5c1620c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenge_GetEndDate_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetID, addr 0x5c16288, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenge_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetInvitedUsers, addr 0x5c16304, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetInvitedUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetLeaderboard, addr 0x5c16380, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetLeaderboard(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetParticipants, addr 0x5c163fc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetParticipants(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetStartDate, addr 0x5c16478, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_Challenge_GetStartDate(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetStartDate_Native, addr 0x5c164d4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenge_GetStartDate_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetTitle, addr 0x5c16550, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Challenge_GetTitle(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetTitle_Native, addr 0x5c165ac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Challenge_GetTitle_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenge_GetVisibility, addr 0x5c16628, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ChallengeVisibility ovr_Challenge_GetVisibility(::System::IntPtr  obj) ;

/// @brief Method ovr_Challenges_Create, addr 0x5c0d2e0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Create(::StringW  leaderboardName, ::System::IntPtr  challengeOptions) ;

/// @brief Method ovr_Challenges_Create_Native, addr 0x5c0d390, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Create_Native(::System::IntPtr  leaderboardName, ::System::IntPtr  challengeOptions) ;

/// @brief Method ovr_Challenges_DeclineInvite, addr 0x5c0d414, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_DeclineInvite(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_Delete, addr 0x5c0d490, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Delete(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_Get, addr 0x5c0d50c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Get(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_GetEntries, addr 0x5c0d588, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetEntries(uint64_t  challengeID, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method ovr_Challenges_GetEntriesAfterRank, addr 0x5c0d624, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetEntriesAfterRank(uint64_t  challengeID, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method ovr_Challenges_GetEntriesByIds, addr 0x5c0d6b8, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetEntriesByIds(uint64_t  challengeID, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_Challenges_GetList, addr 0x5c0d76c, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetList(::System::IntPtr  challengeOptions, int32_t  limit) ;

/// @brief Method ovr_Challenges_GetNextChallenges, addr 0x5c0d7f0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetNextChallenges(::System::IntPtr  handle) ;

/// @brief Method ovr_Challenges_GetNextEntries, addr 0x5c0d86c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetNextEntries(::System::IntPtr  handle) ;

/// @brief Method ovr_Challenges_GetPreviousChallenges, addr 0x5c0d8e8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetPreviousChallenges(::System::IntPtr  handle) ;

/// @brief Method ovr_Challenges_GetPreviousEntries, addr 0x5c0d964, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_GetPreviousEntries(::System::IntPtr  handle) ;

/// @brief Method ovr_Challenges_Join, addr 0x5c0d9e0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Join(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_Leave, addr 0x5c0da5c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_Leave(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_UpdateInfo, addr 0x5c0dad8, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Challenges_UpdateInfo(uint64_t  challengeID, ::System::IntPtr  challengeOptions) ;

/// @brief Method ovr_Colocation_GetCurrentMapUuid, addr 0x5c0db5c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_GetCurrentMapUuid() ;

/// @brief Method ovr_Colocation_RequestMap, addr 0x5c0dbc0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_RequestMap(::StringW  uuid) ;

/// @brief Method ovr_Colocation_RequestMap_Native, addr 0x5c0dc60, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_RequestMap_Native(::System::IntPtr  uuid) ;

/// @brief Method ovr_Colocation_ShareMap, addr 0x5c0dcdc, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_ShareMap(::StringW  uuid) ;

/// @brief Method ovr_Colocation_ShareMap_Native, addr 0x5c0dd7c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Colocation_ShareMap_Native(::System::IntPtr  uuid) ;

/// @brief Method ovr_ContentRating_GetAgeRatingImageUri, addr 0x5c17490, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ContentRating_GetAgeRatingImageUri(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetAgeRatingImageUri_Native, addr 0x5c174ec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ContentRating_GetAgeRatingImageUri_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetAgeRatingText, addr 0x5c17568, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ContentRating_GetAgeRatingText(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetAgeRatingText_Native, addr 0x5c175c4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ContentRating_GetAgeRatingText_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetDescriptor, addr 0x5c17640, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ovr_ContentRating_GetDescriptor(::System::IntPtr  obj, uint32_t  index) ;

/// @brief Method ovr_ContentRating_GetDescriptor_Native, addr 0x5c176ac, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ContentRating_GetDescriptor_Native(::System::IntPtr  obj, uint32_t  index) ;

/// @brief Method ovr_ContentRating_GetDescriptorsSize, addr 0x5c17730, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_ContentRating_GetDescriptorsSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetInteractiveElement, addr 0x5c177ac, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ovr_ContentRating_GetInteractiveElement(::System::IntPtr  obj, uint32_t  index) ;

/// @brief Method ovr_ContentRating_GetInteractiveElement_Native, addr 0x5c17818, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ContentRating_GetInteractiveElement_Native(::System::IntPtr  obj, uint32_t  index) ;

/// @brief Method ovr_ContentRating_GetInteractiveElementsSize, addr 0x5c1789c, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_ContentRating_GetInteractiveElementsSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetRatingDefinitionUri, addr 0x5c17918, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ContentRating_GetRatingDefinitionUri(::System::IntPtr  obj) ;

/// @brief Method ovr_ContentRating_GetRatingDefinitionUri_Native, addr 0x5c17974, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ContentRating_GetRatingDefinitionUri_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewerArray_GetElement, addr 0x5c17b44, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_CowatchViewerArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_CowatchViewerArray_GetNextUrl, addr 0x5c17bc8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_CowatchViewerArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewerArray_GetNextUrl_Native, addr 0x5c17c24, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_CowatchViewerArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewerArray_GetSize, addr 0x5c17ca0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_CowatchViewerArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewerArray_HasNextPage, addr 0x5c17d1c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_CowatchViewerArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewerUpdate_GetDataList, addr 0x5c17da0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_CowatchViewerUpdate_GetDataList(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewerUpdate_GetId, addr 0x5c17e1c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_CowatchViewerUpdate_GetId(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewer_GetData, addr 0x5c179f0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_CowatchViewer_GetData(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewer_GetData_Native, addr 0x5c17a4c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_CowatchViewer_GetData_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchViewer_GetId, addr 0x5c17ac8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_CowatchViewer_GetId(::System::IntPtr  obj) ;

/// @brief Method ovr_CowatchingState_GetInSession, addr 0x5c17e98, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_CowatchingState_GetInSession(::System::IntPtr  obj) ;

/// @brief Method ovr_Cowatching_GetPresenterData, addr 0x5c0ddf8, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_GetPresenterData() ;

/// @brief Method ovr_Cowatching_GetViewersData, addr 0x5c0de5c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_GetViewersData() ;

/// @brief Method ovr_Cowatching_IsInSession, addr 0x5c0dec0, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_IsInSession() ;

/// @brief Method ovr_Cowatching_JoinSession, addr 0x5c0df24, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_JoinSession() ;

/// @brief Method ovr_Cowatching_LaunchInviteDialog, addr 0x5c0df88, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_LaunchInviteDialog() ;

/// @brief Method ovr_Cowatching_LeaveSession, addr 0x5c0dfec, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_LeaveSession() ;

/// @brief Method ovr_Cowatching_RequestToPresent, addr 0x5c0e050, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_RequestToPresent() ;

/// @brief Method ovr_Cowatching_ResignFromPresenting, addr 0x5c0e0b4, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_ResignFromPresenting() ;

/// @brief Method ovr_Cowatching_SetPresenterData, addr 0x5c0e118, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_SetPresenterData(::StringW  video_title, ::StringW  presenter_data) ;

/// @brief Method ovr_Cowatching_SetPresenterData_Native, addr 0x5c0e1e0, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_SetPresenterData_Native(::System::IntPtr  video_title, ::System::IntPtr  presenter_data) ;

/// @brief Method ovr_Cowatching_SetViewerData, addr 0x5c0e264, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_SetViewerData(::StringW  viewer_data) ;

/// @brief Method ovr_Cowatching_SetViewerData_Native, addr 0x5c0e304, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Cowatching_SetViewerData_Native(::System::IntPtr  viewer_data) ;

/// @brief Method ovr_CrashApplication, addr 0x5c09e88, size 0x64, virtual false, abstract: false, final false
static inline void ovr_CrashApplication() ;

/// @brief Method ovr_DataStore_Contains, addr 0x5c17f1c, size 0xb4, virtual false, abstract: false, final false
static inline uint32_t ovr_DataStore_Contains(::System::IntPtr  obj, ::StringW  key) ;

/// @brief Method ovr_DataStore_Contains_Native, addr 0x5c17fd0, size 0x84, virtual false, abstract: false, final false
static inline uint32_t ovr_DataStore_Contains_Native(::System::IntPtr  obj, ::System::IntPtr  key) ;

/// @brief Method ovr_DataStore_GetKey, addr 0x5c089fc, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ovr_DataStore_GetKey(::System::IntPtr  obj, int32_t  index) ;

/// @brief Method ovr_DataStore_GetKey_Native, addr 0x5c18054, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_DataStore_GetKey_Native(::System::IntPtr  obj, int32_t  index) ;

/// @brief Method ovr_DataStore_GetNumKeys, addr 0x5c08980, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_DataStore_GetNumKeys(::System::IntPtr  obj) ;

/// @brief Method ovr_DataStore_GetValue, addr 0x5c08a68, size 0xb8, virtual false, abstract: false, final false
static inline ::StringW ovr_DataStore_GetValue(::System::IntPtr  obj, ::StringW  key) ;

/// @brief Method ovr_DataStore_GetValue_Native, addr 0x5c180d8, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_DataStore_GetValue_Native(::System::IntPtr  obj, ::System::IntPtr  key) ;

/// @brief Method ovr_DestinationArray_GetElement, addr 0x5c184bc, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_DestinationArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_DestinationArray_GetNextUrl, addr 0x5c18540, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_DestinationArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_DestinationArray_GetNextUrl_Native, addr 0x5c1859c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_DestinationArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_DestinationArray_GetSize, addr 0x5c18618, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_DestinationArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_DestinationArray_HasNextPage, addr 0x5c18694, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_DestinationArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetApiName, addr 0x5c1815c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Destination_GetApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetApiName_Native, addr 0x5c181b8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Destination_GetApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetDeeplinkMessage, addr 0x5c18234, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Destination_GetDeeplinkMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetDeeplinkMessage_Native, addr 0x5c18290, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Destination_GetDeeplinkMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetDisplayName, addr 0x5c1830c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Destination_GetDisplayName(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetDisplayName_Native, addr 0x5c18368, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Destination_GetDisplayName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetShareableUri, addr 0x5c183e4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Destination_GetShareableUri(::System::IntPtr  obj) ;

/// @brief Method ovr_Destination_GetShareableUri_Native, addr 0x5c18440, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Destination_GetShareableUri_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken, addr 0x5c0e380, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken(::StringW  challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken_Native, addr 0x5c0e420, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken_Native(::System::IntPtr  challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken, addr 0x5c0e49c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken(::StringW  challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native, addr 0x5c0e53c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native(::System::IntPtr  challenge_nonce) ;

/// @brief Method ovr_Entitlement_GetIsViewerEntitled, addr 0x5c0e5b8, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Entitlement_GetIsViewerEntitled() ;

/// @brief Method ovr_Error_GetCode, addr 0x5c18718, size 0x78, virtual false, abstract: false, final false
static inline int32_t ovr_Error_GetCode(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetDisplayableMessage, addr 0x5c18790, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Error_GetDisplayableMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetDisplayableMessage_Native, addr 0x5c187ec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Error_GetDisplayableMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetHttpCode, addr 0x5c18868, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_Error_GetHttpCode(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetMessage, addr 0x5c188e4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Error_GetMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_Error_GetMessage_Native, addr 0x5c18940, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Error_GetMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_FreeMessage, addr 0x5c098d4, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_FreeMessage(::System::IntPtr  message) ;

/// @brief Method ovr_GetLoggedInUserLocale, addr 0x5c097b8, size 0x54, virtual false, abstract: false, final false
static inline ::StringW ovr_GetLoggedInUserLocale() ;

/// @brief Method ovr_GetLoggedInUserLocale_Native, addr 0x5c0980c, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GetLoggedInUserLocale_Native() ;

/// @brief Method ovr_GraphAPI_Get, addr 0x5c0e61c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_GraphAPI_Get(::StringW  url) ;

/// @brief Method ovr_GraphAPI_Get_Native, addr 0x5c0e6bc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GraphAPI_Get_Native(::System::IntPtr  url) ;

/// @brief Method ovr_GraphAPI_Post, addr 0x5c0e738, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_GraphAPI_Post(::StringW  url) ;

/// @brief Method ovr_GraphAPI_Post_Native, addr 0x5c0e7d8, size 0x78, virtual false, abstract: false, final false
static inline uint64_t ovr_GraphAPI_Post_Native(::System::IntPtr  url) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage, addr 0x5c189bc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetDeeplinkMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native, addr 0x5c18a18, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName, addr 0x5c18a94, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetDestinationApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native, addr 0x5c18af0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId, addr 0x5c18b6c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetLobbySessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native, addr 0x5c18bc8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId, addr 0x5c18c44, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetMatchSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native, addr 0x5c18ca0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName, addr 0x5c18d1c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceLeaveIntent_GetDestinationApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native, addr 0x5c18d78, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId, addr 0x5c18df4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceLeaveIntent_GetLobbySessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native, addr 0x5c18e50, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId, addr 0x5c18ecc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_GroupPresenceLeaveIntent_GetMatchSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native, addr 0x5c18f28, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_GroupPresenceOptions_Create, addr 0x5c24d68, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_GroupPresenceOptions_Create() ;

/// @brief Method ovr_GroupPresenceOptions_Destroy, addr 0x5c24dcc, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride, addr 0x5c24e48, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x5c24eec, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName, addr 0x5c24f70, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetDestinationApiName(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName_Native, addr 0x5c25014, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetDestinationApiName_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetIsJoinable, addr 0x5c25098, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetIsJoinable(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId, addr 0x5c2511c, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetLobbySessionId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId_Native, addr 0x5c251c0, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetLobbySessionId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId, addr 0x5c25244, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetMatchSessionId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId_Native, addr 0x5c252e8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_GroupPresenceOptions_SetMatchSessionId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_GroupPresence_Clear, addr 0x5c0e850, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_Clear() ;

/// @brief Method ovr_GroupPresence_GetInvitableUsers, addr 0x5c0e8b4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_GetInvitableUsers(::System::IntPtr  options) ;

/// @brief Method ovr_GroupPresence_GetSentInvites, addr 0x5c0e930, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_GetSentInvites() ;

/// @brief Method ovr_GroupPresence_LaunchInvitePanel, addr 0x5c0e994, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchInvitePanel(::System::IntPtr  options) ;

/// @brief Method ovr_GroupPresence_LaunchMultiplayerErrorDialog, addr 0x5c0ea10, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchMultiplayerErrorDialog(::System::IntPtr  options) ;

/// @brief Method ovr_GroupPresence_LaunchRejoinDialog, addr 0x5c0ea8c, size 0xe4, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog(::StringW  lobby_session_id, ::StringW  match_session_id, ::StringW  destination_api_name) ;

/// @brief Method ovr_GroupPresence_LaunchRejoinDialog_Native, addr 0x5c0eb70, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog_Native(::System::IntPtr  lobby_session_id, ::System::IntPtr  match_session_id, ::System::IntPtr  destination_api_name) ;

/// @brief Method ovr_GroupPresence_LaunchRosterPanel, addr 0x5c0ec04, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_LaunchRosterPanel(::System::IntPtr  options) ;

/// @brief Method ovr_GroupPresence_SendInvites, addr 0x5c0ec80, size 0x8c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SendInvites(::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_GroupPresence_Set, addr 0x5c0ed0c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_Set(::System::IntPtr  groupPresenceOptions) ;

/// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride, addr 0x5c0ed88, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride(::StringW  deeplink_message) ;

/// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride_Native, addr 0x5c0ee28, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride_Native(::System::IntPtr  deeplink_message) ;

/// @brief Method ovr_GroupPresence_SetDestination, addr 0x5c0eea4, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetDestination(::StringW  api_name) ;

/// @brief Method ovr_GroupPresence_SetDestination_Native, addr 0x5c0ef44, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetDestination_Native(::System::IntPtr  api_name) ;

/// @brief Method ovr_GroupPresence_SetIsJoinable, addr 0x5c0efc0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetIsJoinable(bool  is_joinable) ;

/// @brief Method ovr_GroupPresence_SetLobbySession, addr 0x5c0f03c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetLobbySession(::StringW  id) ;

/// @brief Method ovr_GroupPresence_SetLobbySession_Native, addr 0x5c0f0dc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetLobbySession_Native(::System::IntPtr  id) ;

/// @brief Method ovr_GroupPresence_SetMatchSession, addr 0x5c0f158, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetMatchSession(::StringW  id) ;

/// @brief Method ovr_GroupPresence_SetMatchSession_Native, addr 0x5c0f1f8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_GroupPresence_SetMatchSession_Native(::System::IntPtr  id) ;

/// @brief Method ovr_HTTP_Get, addr 0x5c0f274, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_Get(::StringW  url) ;

/// @brief Method ovr_HTTP_GetToFile, addr 0x5c0f390, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_GetToFile(::StringW  url, ::StringW  diskFile) ;

/// @brief Method ovr_HTTP_GetToFile_Native, addr 0x5c0f458, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_GetToFile_Native(::System::IntPtr  url, ::System::IntPtr  diskFile) ;

/// @brief Method ovr_HTTP_GetWithMessageType, addr 0x5c09de8, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_GetWithMessageType(::StringW  url, int32_t  messageType) ;

/// @brief Method ovr_HTTP_Get_Native, addr 0x5c0f314, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_Get_Native(::System::IntPtr  url) ;

/// @brief Method ovr_HTTP_MultiPartPost, addr 0x5c0f4dc, size 0x11c, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_MultiPartPost(::StringW  url, ::StringW  filepath_param_name, ::StringW  filepath, ::StringW  access_token, ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*>  post_params) ;

/// @brief Method ovr_HTTP_MultiPartPost_Native, addr 0x5c0f5f8, size 0x1f4, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_MultiPartPost_Native(::System::IntPtr  url, ::System::IntPtr  filepath_param_name, ::System::IntPtr  filepath, ::System::IntPtr  access_token, ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*>  post_params, ::System::UIntPtr  numItems) ;

/// @brief Method ovr_HTTP_Post, addr 0x5c0f7ec, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_Post(::StringW  url) ;

/// @brief Method ovr_HTTP_Post_Native, addr 0x5c0f88c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_Post_Native(::System::IntPtr  url) ;

/// @brief Method ovr_HTTP_StartTransfer, addr 0x5c0a65c, size 0xbc, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_StartTransfer(::StringW  url, ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*>  headers) ;

/// @brief Method ovr_HTTP_StartTransfer_Native, addr 0x5c0a718, size 0x1b8, virtual false, abstract: false, final false
static inline uint64_t ovr_HTTP_StartTransfer_Native(::System::IntPtr  url, ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*>  headers, ::System::UIntPtr  numItems) ;

/// @brief Method ovr_HTTP_Write, addr 0x5c0a8d0, size 0xa4, virtual false, abstract: false, final false
static inline bool ovr_HTTP_Write(uint64_t  transferId, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, ::System::UIntPtr  length) ;

/// @brief Method ovr_HTTP_WriteEOM, addr 0x5c0a974, size 0x78, virtual false, abstract: false, final false
static inline void ovr_HTTP_WriteEOM(uint64_t  transferId) ;

/// @brief Method ovr_HttpTransferUpdate_GetBytes, addr 0x5c18fa4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_HttpTransferUpdate_GetBytes(::System::IntPtr  obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetID, addr 0x5c19020, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_HttpTransferUpdate_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetSize, addr 0x5c1909c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_HttpTransferUpdate_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_HttpTransferUpdate_IsCompleted, addr 0x5c19118, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_HttpTransferUpdate_IsCompleted(::System::IntPtr  obj) ;

/// @brief Method ovr_IAP_ConsumePurchase, addr 0x5c0f908, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_ConsumePurchase(::StringW  sku) ;

/// @brief Method ovr_IAP_ConsumePurchase_Native, addr 0x5c0f9a8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_ConsumePurchase_Native(::System::IntPtr  sku) ;

/// @brief Method ovr_IAP_GetProductsBySKU, addr 0x5c0fa24, size 0x130, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_GetProductsBySKU(::ArrayW<::StringW,::Array<::StringW>*>  skus, int32_t  count) ;

/// @brief Method ovr_IAP_GetViewerPurchases, addr 0x5c0fb54, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_GetViewerPurchases() ;

/// @brief Method ovr_IAP_GetViewerPurchasesDurableCache, addr 0x5c0fbb8, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_GetViewerPurchasesDurableCache() ;

/// @brief Method ovr_IAP_LaunchCheckoutFlow, addr 0x5c0fc1c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_LaunchCheckoutFlow(::StringW  sku) ;

/// @brief Method ovr_IAP_LaunchCheckoutFlow_Native, addr 0x5c0fcbc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_IAP_LaunchCheckoutFlow_Native(::System::IntPtr  sku) ;

/// @brief Method ovr_InstalledApplicationArray_GetElement, addr 0x5c19578, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplicationArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_InstalledApplicationArray_GetSize, addr 0x5c195fc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_InstalledApplicationArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetApplicationId, addr 0x5c1919c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_InstalledApplication_GetApplicationId(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetApplicationId_Native, addr 0x5c191f8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplication_GetApplicationId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetPackageName, addr 0x5c19274, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_InstalledApplication_GetPackageName(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetPackageName_Native, addr 0x5c192d0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplication_GetPackageName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetStatus, addr 0x5c1934c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_InstalledApplication_GetStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetStatus_Native, addr 0x5c193a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplication_GetStatus_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionCode, addr 0x5c19424, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_InstalledApplication_GetVersionCode(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionName, addr 0x5c194a0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_InstalledApplication_GetVersionName(::System::IntPtr  obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionName_Native, addr 0x5c194fc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InstalledApplication_GetVersionName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_InviteOptions_AddSuggestedUser, addr 0x5c2544c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_InviteOptions_AddSuggestedUser(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_InviteOptions_ClearSuggestedUsers, addr 0x5c254d0, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_InviteOptions_ClearSuggestedUsers(::System::IntPtr  handle) ;

/// @brief Method ovr_InviteOptions_Create, addr 0x5c2536c, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_InviteOptions_Create() ;

/// @brief Method ovr_InviteOptions_Destroy, addr 0x5c253d0, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_InviteOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_InvitePanelResultInfo_GetInvitesSent, addr 0x5c19678, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_InvitePanelResultInfo_GetInvitesSent(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetEnglishName, addr 0x5c196fc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LanguagePackInfo_GetEnglishName(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetEnglishName_Native, addr 0x5c19758, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LanguagePackInfo_GetEnglishName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetNativeName, addr 0x5c197d4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LanguagePackInfo_GetNativeName(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetNativeName_Native, addr 0x5c19830, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LanguagePackInfo_GetNativeName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetTag, addr 0x5c198ac, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LanguagePackInfo_GetTag(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetTag_Native, addr 0x5c19908, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LanguagePackInfo_GetTag_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LanguagePack_GetCurrent, addr 0x5c0fd38, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_LanguagePack_GetCurrent() ;

/// @brief Method ovr_LanguagePack_SetCurrent, addr 0x5c0fd9c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_LanguagePack_SetCurrent(::StringW  tag) ;

/// @brief Method ovr_LanguagePack_SetCurrent_Native, addr 0x5c0fe3c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LanguagePack_SetCurrent_Native(::System::IntPtr  tag) ;

/// @brief Method ovr_LaunchBlockFlowResult_GetDidBlock, addr 0x5c19984, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchBlockFlowResult_GetDidBlock(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchBlockFlowResult_GetDidCancel, addr 0x5c19a08, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchBlockFlowResult_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetDeeplinkMessage, addr 0x5c19a8c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetDeeplinkMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetDeeplinkMessage_Native, addr 0x5c19ae8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetDeeplinkMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetDestinationApiName, addr 0x5c19b64, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetDestinationApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetDestinationApiName_Native, addr 0x5c19bc0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetDestinationApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchSource, addr 0x5c19c3c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetLaunchSource(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchSource_Native, addr 0x5c19c98, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetLaunchSource_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchType, addr 0x5c19d14, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::LaunchType ovr_LaunchDetails_GetLaunchType(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetLobbySessionID, addr 0x5c19d90, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetLobbySessionID(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetLobbySessionID_Native, addr 0x5c19dec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetLobbySessionID_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetMatchSessionID, addr 0x5c19e68, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetMatchSessionID(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetMatchSessionID_Native, addr 0x5c19ec4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetMatchSessionID_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetTrackingID, addr 0x5c19f40, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LaunchDetails_GetTrackingID(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetTrackingID_Native, addr 0x5c19f9c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetTrackingID_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchDetails_GetUsers, addr 0x5c1a018, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchDetails_GetUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidCancel, addr 0x5c1a094, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchFriendRequestFlowResult_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidSendRequest, addr 0x5c1a118, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchFriendRequestFlowResult_GetDidSendRequest(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchInvitePanelFlowResult_GetInvitedUsers, addr 0x5c1a19c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LaunchInvitePanelFlowResult_GetInvitedUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchReportFlowResult_GetDidCancel, addr 0x5c1a218, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchReportFlowResult_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchReportFlowResult_GetUserReportId, addr 0x5c1a29c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LaunchReportFlowResult_GetUserReportId(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchUnblockFlowResult_GetDidCancel, addr 0x5c1a318, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchUnblockFlowResult_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_LaunchUnblockFlowResult_GetDidUnblock, addr 0x5c1a39c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LaunchUnblockFlowResult_GetDidUnblock(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardArray_GetElement, addr 0x5c1a5f0, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_LeaderboardArray_GetNextUrl, addr 0x5c1a674, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LeaderboardArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardArray_GetNextUrl_Native, addr 0x5c1a6d0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardArray_GetSize, addr 0x5c1a74c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_LeaderboardArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardArray_HasNextPage, addr 0x5c1a7c8, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LeaderboardArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetElement, addr 0x5c1ad54, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntryArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_LeaderboardEntryArray_GetNextUrl, addr 0x5c1add8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LeaderboardEntryArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetNextUrl_Native, addr 0x5c1ae34, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntryArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl, addr 0x5c1aeb0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LeaderboardEntryArray_GetPreviousUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl_Native, addr 0x5c1af0c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntryArray_GetPreviousUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetSize, addr 0x5c1af88, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_LeaderboardEntryArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetTotalCount, addr 0x5c1b004, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LeaderboardEntryArray_GetTotalCount(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_HasNextPage, addr 0x5c1b080, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LeaderboardEntryArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_HasPreviousPage, addr 0x5c1b104, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LeaderboardEntryArray_HasPreviousPage(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetDisplayScore, addr 0x5c1a84c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LeaderboardEntry_GetDisplayScore(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetDisplayScore_Native, addr 0x5c1a8a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntry_GetDisplayScore_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraData, addr 0x5c1a924, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ovr_LeaderboardEntry_GetExtraData(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraDataLength, addr 0x5c16c20, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_LeaderboardEntry_GetExtraDataLength(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraData_Native, addr 0x5c1a994, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntry_GetExtraData_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetID, addr 0x5c1aa10, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LeaderboardEntry_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetRank, addr 0x5c1aa8c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_LeaderboardEntry_GetRank(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetScore, addr 0x5c1ab08, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_LeaderboardEntry_GetScore(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetSupplementaryMetric, addr 0x5c1ab84, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntry_GetSupplementaryMetric(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetTimestamp, addr 0x5c1ac00, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_LeaderboardEntry_GetTimestamp(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetTimestamp_Native, addr 0x5c1ac5c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_LeaderboardEntry_GetTimestamp_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetUser, addr 0x5c1acd8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LeaderboardEntry_GetUser(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetDidUpdate, addr 0x5c1b188, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LeaderboardUpdateStatus_GetDidUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId, addr 0x5c1b20c, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId(::System::IntPtr  obj, uint32_t  index) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize, addr 0x5c1b290, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_Get, addr 0x5c0feb8, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_Get(::StringW  leaderboardName) ;

/// @brief Method ovr_Leaderboard_GetApiName, addr 0x5c1a420, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Leaderboard_GetApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_GetApiName_Native, addr 0x5c1a47c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Leaderboard_GetApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_GetDestination, addr 0x5c1a4f8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Leaderboard_GetDestination(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_GetEntries, addr 0x5c0ffd4, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntries(::StringW  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method ovr_Leaderboard_GetEntriesAfterRank, addr 0x5c10138, size 0xb8, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank(::StringW  leaderboardName, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method ovr_Leaderboard_GetEntriesAfterRank_Native, addr 0x5c101f0, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank_Native(::System::IntPtr  leaderboardName, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method ovr_Leaderboard_GetEntriesByIds, addr 0x5c10284, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntriesByIds(::StringW  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_Leaderboard_GetEntriesByIds_Native, addr 0x5c10354, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntriesByIds_Native(::System::IntPtr  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_Leaderboard_GetEntries_Native, addr 0x5c1009c, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetEntries_Native(::System::IntPtr  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method ovr_Leaderboard_GetID, addr 0x5c1a574, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Leaderboard_GetNextEntries, addr 0x5c10408, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetNextEntries(::System::IntPtr  handle) ;

/// @brief Method ovr_Leaderboard_GetPreviousEntries, addr 0x5c10484, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_GetPreviousEntries(::System::IntPtr  handle) ;

/// @brief Method ovr_Leaderboard_Get_Native, addr 0x5c0ff58, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_Get_Native(::System::IntPtr  leaderboardName) ;

/// @brief Method ovr_Leaderboard_WriteEntry, addr 0x5c10500, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_WriteEntry(::StringW  leaderboardName, int64_t  score, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric, addr 0x5c10684, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric(::StringW  leaderboardName, int64_t  score, int64_t  supplementaryMetric, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native, addr 0x5c10764, size 0xbc, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native(::System::IntPtr  leaderboardName, int64_t  score, int64_t  supplementaryMetric, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntry_Native, addr 0x5c105d0, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_Leaderboard_WriteEntry_Native(::System::IntPtr  leaderboardName, int64_t  score, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_LinkedAccountArray_GetElement, addr 0x5c1b538, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LinkedAccountArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_LinkedAccountArray_GetSize, addr 0x5c1b5bc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_LinkedAccountArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetAccessToken, addr 0x5c1b30c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LinkedAccount_GetAccessToken(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetAccessToken_Native, addr 0x5c1b368, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LinkedAccount_GetAccessToken_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetServiceProvider, addr 0x5c1b3e4, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ServiceProvider ovr_LinkedAccount_GetServiceProvider(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetUserId, addr 0x5c1b460, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LinkedAccount_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_LinkedAccount_GetUserId_Native, addr 0x5c1b4bc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LinkedAccount_GetUserId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingApplicationStatus_GetStreamingEnabled, addr 0x5c1b638, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingApplicationStatus_GetStreamingEnabled(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStartResult_GetStreamingResult, addr 0x5c1b6bc, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::LivestreamingStartStatus ovr_LivestreamingStartResult_GetStreamingResult(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetCommentsVisible, addr 0x5c1b738, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingStatus_GetCommentsVisible(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetIsPaused, addr 0x5c1b7bc, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingStatus_GetIsPaused(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetLivestreamingEnabled, addr 0x5c1b840, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingStatus_GetLivestreamingEnabled(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetLivestreamingType, addr 0x5c1b8c4, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_LivestreamingStatus_GetLivestreamingType(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetMicEnabled, addr 0x5c1b940, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_LivestreamingStatus_GetMicEnabled(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetCommentCount, addr 0x5c1b9c4, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_LivestreamingVideoStats_GetCommentCount(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetReactionCount, addr 0x5c1ba40, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_LivestreamingVideoStats_GetReactionCount(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetTotalViews, addr 0x5c1babc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_LivestreamingVideoStats_GetTotalViews(::System::IntPtr  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetTotalViews_Native, addr 0x5c1bb18, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_LivestreamingVideoStats_GetTotalViews_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Livestreaming_IsAllowedForApplication, addr 0x5c10820, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_IsAllowedForApplication(::StringW  packageName) ;

/// @brief Method ovr_Livestreaming_IsAllowedForApplication_Native, addr 0x5c108c0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_IsAllowedForApplication_Native(::System::IntPtr  packageName) ;

/// @brief Method ovr_Livestreaming_StartPartyStream, addr 0x5c1093c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_StartPartyStream() ;

/// @brief Method ovr_Livestreaming_StartStream, addr 0x5c109a0, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_StartStream(::Oculus::Platform::LivestreamingAudience  audience, ::Oculus::Platform::LivestreamingMicrophoneStatus  micStatus) ;

/// @brief Method ovr_Livestreaming_StopPartyStream, addr 0x5c10a24, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_StopPartyStream() ;

/// @brief Method ovr_Livestreaming_StopStream, addr 0x5c10a88, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_StopStream() ;

/// @brief Method ovr_Livestreaming_UpdateMicStatus, addr 0x5c10aec, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Livestreaming_UpdateMicStatus(::Oculus::Platform::LivestreamingMicrophoneStatus  micStatus) ;

/// @brief Method ovr_Log_NewEvent, addr 0x5c0a438, size 0x9c, virtual false, abstract: false, final false
static inline void ovr_Log_NewEvent(::System::IntPtr  eventName, ::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>  values, ::System::UIntPtr  length) ;

/// @brief Method ovr_ManagedInfo_GetDepartment, addr 0x5c1bb94, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetDepartment(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetDepartment_Native, addr 0x5c1bbf0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetDepartment_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetEmail, addr 0x5c1bc6c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetEmail(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetEmail_Native, addr 0x5c1bcc8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetEmail_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetEmployeeNumber, addr 0x5c1bd44, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetEmployeeNumber(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetEmployeeNumber_Native, addr 0x5c1bda0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetEmployeeNumber_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetExternalId, addr 0x5c1be1c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetExternalId(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetExternalId_Native, addr 0x5c1be78, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetExternalId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetLocation, addr 0x5c1bef4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetLocation(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetLocation_Native, addr 0x5c1bf50, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetLocation_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetManager, addr 0x5c1bfcc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetManager(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetManager_Native, addr 0x5c1c028, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetManager_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetName, addr 0x5c1c0a4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetName_Native, addr 0x5c1c100, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetOrganizationId, addr 0x5c1c17c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetOrganizationId(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetOrganizationId_Native, addr 0x5c1c1d8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetOrganizationId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetOrganizationName, addr 0x5c1c254, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetOrganizationName(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetOrganizationName_Native, addr 0x5c1c2b0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetOrganizationName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetPosition, addr 0x5c1c32c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ManagedInfo_GetPosition(::System::IntPtr  obj) ;

/// @brief Method ovr_ManagedInfo_GetPosition_Native, addr 0x5c1c388, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ManagedInfo_GetPosition_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Media_ShareToFacebook, addr 0x5c10b68, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t ovr_Media_ShareToFacebook(::StringW  postTextSuggestion, ::StringW  filePath, ::Oculus::Platform::MediaContentType  contentType) ;

/// @brief Method ovr_Media_ShareToFacebook_Native, addr 0x5c10c38, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_Media_ShareToFacebook_Native(::System::IntPtr  postTextSuggestion, ::System::IntPtr  filePath, ::Oculus::Platform::MediaContentType  contentType) ;

/// @brief Method ovr_Message_GetAbuseReportRecording, addr 0x5c1c404, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAbuseReportRecording(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAchievementDefinitionArray, addr 0x5c1c480, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAchievementDefinitionArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAchievementProgressArray, addr 0x5c1c4fc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAchievementProgressArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAchievementUpdate, addr 0x5c1c578, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAchievementUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAppDownloadProgressResult, addr 0x5c1c5f4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAppDownloadProgressResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAppDownloadResult, addr 0x5c1c670, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAppDownloadResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetApplicationInviteArray, addr 0x5c1c6ec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetApplicationInviteArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetApplicationVersion, addr 0x5c1c768, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetApplicationVersion(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetDetails, addr 0x5c1c7e4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetDetails(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetDetailsArray, addr 0x5c1c860, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetDetailsArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetFileDeleteResult, addr 0x5c1c8dc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetFileDeleteResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadCancelResult, addr 0x5c1c958, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetFileDownloadCancelResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadResult, addr 0x5c1c9d4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetFileDownloadResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadUpdate, addr 0x5c1ca50, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAssetFileDownloadUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetAvatarEditorResult, addr 0x5c1cacc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetAvatarEditorResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetBlockedUserArray, addr 0x5c1cb48, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetBlockedUserArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetChallenge, addr 0x5c1cbc4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetChallenge(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetChallengeArray, addr 0x5c1cc40, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetChallengeArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetChallengeEntryArray, addr 0x5c1ccbc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetChallengeEntryArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetCowatchViewerArray, addr 0x5c1cd38, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetCowatchViewerArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetCowatchViewerUpdate, addr 0x5c1cdb4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetCowatchViewerUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetCowatchingState, addr 0x5c1ce30, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetCowatchingState(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetDataStore, addr 0x5c1ceac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetDataStore(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetDestinationArray, addr 0x5c1cf28, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetDestinationArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetError, addr 0x5c1cfa4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetError(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetGroupPresenceJoinIntent, addr 0x5c1d020, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetGroupPresenceJoinIntent(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetGroupPresenceLeaveIntent, addr 0x5c1d09c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetGroupPresenceLeaveIntent(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetHttpTransferUpdate, addr 0x5c1d118, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetHttpTransferUpdate(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetInstalledApplicationArray, addr 0x5c1d194, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetInstalledApplicationArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetInvitePanelResultInfo, addr 0x5c1d210, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetInvitePanelResultInfo(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchBlockFlowResult, addr 0x5c1d28c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchBlockFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchFriendRequestFlowResult, addr 0x5c1d308, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchFriendRequestFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchInvitePanelFlowResult, addr 0x5c1d384, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchInvitePanelFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchReportFlowResult, addr 0x5c1d400, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchReportFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLaunchUnblockFlowResult, addr 0x5c1d47c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLaunchUnblockFlowResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLeaderboardArray, addr 0x5c1d4f8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLeaderboardArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLeaderboardEntryArray, addr 0x5c1d574, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLeaderboardEntryArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLeaderboardUpdateStatus, addr 0x5c1d5f0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLeaderboardUpdateStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLinkedAccountArray, addr 0x5c1d66c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLinkedAccountArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLivestreamingApplicationStatus, addr 0x5c1d6e8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLivestreamingApplicationStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLivestreamingStartResult, addr 0x5c1d764, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLivestreamingStartResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLivestreamingStatus, addr 0x5c1d7e0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLivestreamingStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetLivestreamingVideoStats, addr 0x5c1d85c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetLivestreamingVideoStats(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetMicrophoneAvailabilityState, addr 0x5c1d8d8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetMicrophoneAvailabilityState(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNativeMessage, addr 0x5c1d954, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNativeMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncConnection, addr 0x5c1d9d0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncConnection(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncSessionArray, addr 0x5c1da4c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncSessionArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncSessionsChangedNotification, addr 0x5c1dac8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncSessionsChangedNotification(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncSetSessionPropertyResult, addr 0x5c1db44, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncSetSessionPropertyResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetNetSyncVoipAttenuationValueArray, addr 0x5c1dbc0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetNetSyncVoipAttenuationValueArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetOrgScopedID, addr 0x5c1dc3c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetOrgScopedID(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetParty, addr 0x5c1dcb8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetParty(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPartyID, addr 0x5c1dd34, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPartyID(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPartyUpdateNotification, addr 0x5c1ddb0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPartyUpdateNotification(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPidArray, addr 0x5c1de2c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPidArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPlatformInitialize, addr 0x5c1dea8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPlatformInitialize(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetProductArray, addr 0x5c1df24, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetProductArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPurchase, addr 0x5c1dfa0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPurchase(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPurchaseArray, addr 0x5c1e01c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPurchaseArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetPushNotificationResult, addr 0x5c1e098, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetPushNotificationResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetRejoinDialogResult, addr 0x5c1e114, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetRejoinDialogResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetRequestID, addr 0x5c1e190, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Message_GetRequestID(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetSdkAccountArray, addr 0x5c1e20c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetSdkAccountArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetSendInvitesResult, addr 0x5c1e288, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetSendInvitesResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetShareMediaResult, addr 0x5c1e304, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetShareMediaResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetString, addr 0x5c1e380, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Message_GetString(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetStringForJavascript, addr 0x5c0a9ec, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Message_GetStringForJavascript(::System::IntPtr  message) ;

/// @brief Method ovr_Message_GetStringForJavascript_Native, addr 0x5c0aa48, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetStringForJavascript_Native(::System::IntPtr  message) ;

/// @brief Method ovr_Message_GetString_Native, addr 0x5c1e3dc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetString_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetSystemVoipState, addr 0x5c1e458, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetSystemVoipState(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetType, addr 0x5c1e4d4, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Message_MessageType ovr_Message_GetType(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUser, addr 0x5c1e550, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUser(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserAccountAgeCategory, addr 0x5c1e5cc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserAccountAgeCategory(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserArray, addr 0x5c1e648, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserCapabilityArray, addr 0x5c1e6c4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserCapabilityArray(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserDataStoreUpdateResponse, addr 0x5c1e740, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserDataStoreUpdateResponse(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserProof, addr 0x5c1e7bc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserProof(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_GetUserReportID, addr 0x5c1e838, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Message_GetUserReportID(::System::IntPtr  obj) ;

/// @brief Method ovr_Message_IsError, addr 0x5c1e8b4, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_Message_IsError(::System::IntPtr  obj) ;

/// @brief Method ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable, addr 0x5c1ed80, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_Create, addr 0x5c09bac, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Microphone_Create() ;

/// @brief Method ovr_Microphone_Destroy, addr 0x5c09c10, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Microphone_Destroy(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_GetNumSamplesAvailable, addr 0x5c1e938, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_GetNumSamplesAvailable(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_GetOutputBufferMaxSize, addr 0x5c1e9b4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_GetOutputBufferMaxSize(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_GetPCM, addr 0x5c1ea30, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_GetPCM(::System::IntPtr  obj, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_Microphone_GetPCMFloat, addr 0x5c1eacc, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_GetPCMFloat(::System::IntPtr  obj, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_Microphone_ReadData, addr 0x5c1eb68, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Microphone_ReadData(::System::IntPtr  obj, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferSize) ;

/// @brief Method ovr_Microphone_SetAcceptableRecordingDelayHint, addr 0x5c1ec04, size 0x84, virtual false, abstract: false, final false
static inline void ovr_Microphone_SetAcceptableRecordingDelayHint(::System::IntPtr  obj, ::System::UIntPtr  delayMs) ;

/// @brief Method ovr_Microphone_Start, addr 0x5c1ec88, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Microphone_Start(::System::IntPtr  obj) ;

/// @brief Method ovr_Microphone_Stop, addr 0x5c1ed04, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Microphone_Stop(::System::IntPtr  obj) ;

/// @brief Method ovr_MultiplayerErrorOptions_Create, addr 0x5c2554c, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_MultiplayerErrorOptions_Create() ;

/// @brief Method ovr_MultiplayerErrorOptions_Destroy, addr 0x5c255b0, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_MultiplayerErrorOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_MultiplayerErrorOptions_SetErrorKey, addr 0x5c2562c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_MultiplayerErrorOptions_SetErrorKey(::System::IntPtr  handle, ::Oculus::Platform::MultiplayerErrorErrorKey  value) ;

/// @brief Method ovr_NetSyncConnection_GetConnectionId, addr 0x5c1ee04, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_NetSyncConnection_GetConnectionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetDisconnectReason, addr 0x5c1ee80, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::NetSyncDisconnectReason ovr_NetSyncConnection_GetDisconnectReason(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetSessionId, addr 0x5c1eefc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSyncConnection_GetSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetStatus, addr 0x5c1ef78, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::NetSyncConnectionStatus ovr_NetSyncConnection_GetStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetZoneId, addr 0x5c1eff4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_NetSyncConnection_GetZoneId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncConnection_GetZoneId_Native, addr 0x5c1f050, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncConnection_GetZoneId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncOptions_Create, addr 0x5c256b0, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncOptions_Create() ;

/// @brief Method ovr_NetSyncOptions_Destroy, addr 0x5c25714, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_NetSyncOptions_SetVoipGroup, addr 0x5c25790, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetVoipGroup(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_NetSyncOptions_SetVoipGroup_Native, addr 0x5c25834, size 0x84, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetVoipGroup_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_NetSyncOptions_SetVoipStreamDefault, addr 0x5c258b8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetVoipStreamDefault(::System::IntPtr  handle, ::Oculus::Platform::NetSyncVoipStreamMode  value) ;

/// @brief Method ovr_NetSyncOptions_SetZoneId, addr 0x5c2593c, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetZoneId(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_NetSyncOptions_SetZoneId_Native, addr 0x5c259e0, size 0x84, virtual false, abstract: false, final false
static inline void ovr_NetSyncOptions_SetZoneId_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_NetSyncSessionArray_GetElement, addr 0x5c1f39c, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncSessionArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_NetSyncSessionArray_GetSize, addr 0x5c1f420, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSyncSessionArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetConnectionId, addr 0x5c1f0cc, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_NetSyncSession_GetConnectionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetMuted, addr 0x5c1f148, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_NetSyncSession_GetMuted(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetSessionId, addr 0x5c1f1cc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSyncSession_GetSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetUserId, addr 0x5c1f248, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSyncSession_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetVoipGroup, addr 0x5c1f2c4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_NetSyncSession_GetVoipGroup(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSession_GetVoipGroup_Native, addr 0x5c1f320, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncSession_GetVoipGroup_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSessionsChangedNotification_GetConnectionId, addr 0x5c1f49c, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_NetSyncSessionsChangedNotification_GetConnectionId(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSessionsChangedNotification_GetSessions, addr 0x5c1f518, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncSessionsChangedNotification_GetSessions(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncSetSessionPropertyResult_GetSession, addr 0x5c1f594, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncSetSessionPropertyResult_GetSession(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetElement, addr 0x5c1f708, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_NetSyncVoipAttenuationValueArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetSize, addr 0x5c1f78c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSyncVoipAttenuationValueArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValue_GetDecibels, addr 0x5c1f610, size 0x7c, virtual false, abstract: false, final false
static inline float_t ovr_NetSyncVoipAttenuationValue_GetDecibels(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValue_GetDistance, addr 0x5c1f68c, size 0x7c, virtual false, abstract: false, final false
static inline float_t ovr_NetSyncVoipAttenuationValue_GetDistance(::System::IntPtr  obj) ;

/// @brief Method ovr_NetSync_Connect, addr 0x5c10ccc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_Connect(::System::IntPtr  connect_options) ;

/// @brief Method ovr_NetSync_Disconnect, addr 0x5c10d48, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_Disconnect(int64_t  connection_id) ;

/// @brief Method ovr_NetSync_GetAmbisonicFloatPCM, addr 0x5c0aac4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicFloatPCM(int64_t  connection_id, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInt16PCM, addr 0x5c0ab60, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicInt16PCM(int64_t  connection_id, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInterleavedFloatPCM, addr 0x5c0abfc, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicInterleavedFloatPCM(int64_t  connection_id, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInterleavedInt16PCM, addr 0x5c0ac98, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicInterleavedInt16PCM(int64_t  connection_id, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetListenerPosition, addr 0x5c0ad34, size 0x9c, virtual false, abstract: false, final false
static inline bool ovr_NetSync_GetListenerPosition(int64_t  connection_id, uint64_t  sessionId, ::ByRef<::Oculus::Platform::CAPI_ovrNetSyncVec3>  position) ;

/// @brief Method ovr_NetSync_GetMonostreamFloatPCM, addr 0x5c0add0, size 0xa4, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetMonostreamFloatPCM(int64_t  connection_id, uint64_t  sessionId, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetMonostreamInt16PCM, addr 0x5c0ae74, size 0xa4, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetMonostreamInt16PCM(int64_t  connection_id, uint64_t  session_id, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetPcmBufferMaxSamples, addr 0x5c0af18, size 0x64, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_NetSync_GetPcmBufferMaxSamples() ;

/// @brief Method ovr_NetSync_GetSessions, addr 0x5c10dc4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_GetSessions(int64_t  connection_id) ;

/// @brief Method ovr_NetSync_GetVoipAmplitude, addr 0x5c0af7c, size 0x9c, virtual false, abstract: false, final false
static inline bool ovr_NetSync_GetVoipAmplitude(int64_t  connection_id, uint64_t  sessionId, ::ByRef<float_t>  amplitude) ;

/// @brief Method ovr_NetSync_GetVoipAttenuation, addr 0x5c10e40, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_GetVoipAttenuation(int64_t  connection_id) ;

/// @brief Method ovr_NetSync_GetVoipAttenuationDefault, addr 0x5c10ebc, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_GetVoipAttenuationDefault() ;

/// @brief Method ovr_NetSync_SetListenerPosition, addr 0x5c0b018, size 0x84, virtual false, abstract: false, final false
static inline void ovr_NetSync_SetListenerPosition(int64_t  connection_id, ::ByRef<::Oculus::Platform::CAPI_ovrNetSyncVec3>  position) ;

/// @brief Method ovr_NetSync_SetVoipAttenuation, addr 0x5c10f20, size 0xac, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipAttenuation(int64_t  connection_id, ::ArrayW<float_t,::Array<float_t>*>  distances, ::ArrayW<float_t,::Array<float_t>*>  decibels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipAttenuationModel, addr 0x5c10fcc, size 0xd4, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipAttenuationModel(int64_t  connection_id, ::StringW  name, ::ArrayW<float_t,::Array<float_t>*>  distances, ::ArrayW<float_t,::Array<float_t>*>  decibels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipAttenuationModel_Native, addr 0x5c110a0, size 0xbc, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipAttenuationModel_Native(int64_t  connection_id, ::System::IntPtr  name, ::ArrayW<float_t,::Array<float_t>*>  distances, ::ArrayW<float_t,::Array<float_t>*>  decibels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipChannelCfg, addr 0x5c1115c, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipChannelCfg(int64_t  connection_id, ::StringW  channel_name, ::StringW  attnmodel, bool  disable_spatialization) ;

/// @brief Method ovr_NetSync_SetVoipChannelCfg_Native, addr 0x5c1123c, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipChannelCfg_Native(int64_t  connection_id, ::System::IntPtr  channel_name, ::System::IntPtr  attnmodel, bool  disable_spatialization) ;

/// @brief Method ovr_NetSync_SetVoipGroup, addr 0x5c112d8, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipGroup(int64_t  connection_id, ::StringW  group_id) ;

/// @brief Method ovr_NetSync_SetVoipGroup_Native, addr 0x5c1138c, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipGroup_Native(int64_t  connection_id, ::System::IntPtr  group_id) ;

/// @brief Method ovr_NetSync_SetVoipListentoChannels, addr 0x5c11410, size 0x144, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipListentoChannels(int64_t  connection_id, ::ArrayW<::StringW,::Array<::StringW>*>  listento_channels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipMicSource, addr 0x5c11554, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipMicSource(int64_t  connection_id, ::Oculus::Platform::NetSyncVoipMicSource  mic_source) ;

/// @brief Method ovr_NetSync_SetVoipSessionMuted, addr 0x5c115d8, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipSessionMuted(int64_t  connection_id, uint64_t  session_id, bool  muted) ;

/// @brief Method ovr_NetSync_SetVoipSpeaktoChannels, addr 0x5c1166c, size 0x144, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipSpeaktoChannels(int64_t  connection_id, ::ArrayW<::StringW,::Array<::StringW>*>  speakto_channels, ::System::UIntPtr  count) ;

/// @brief Method ovr_NetSync_SetVoipStreamMode, addr 0x5c117b0, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_NetSync_SetVoipStreamMode(int64_t  connection_id, uint64_t  sessionId, ::Oculus::Platform::NetSyncVoipStreamMode  streamMode) ;

/// @brief Method ovr_Notification_MarkAsRead, addr 0x5c11844, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Notification_MarkAsRead(uint64_t  notificationID) ;

/// @brief Method ovr_OrgScopedID_GetID, addr 0x5c1f808, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_OrgScopedID_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Packet_Free, addr 0x5c1f884, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Packet_Free(::System::IntPtr  obj) ;

/// @brief Method ovr_Packet_GetBytes, addr 0x5c1f900, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Packet_GetBytes(::System::IntPtr  obj) ;

/// @brief Method ovr_Packet_GetSenderID, addr 0x5c1f97c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Packet_GetSenderID(::System::IntPtr  obj) ;

/// @brief Method ovr_Packet_GetSize, addr 0x5c1f9f8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Packet_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_PaidOffer_GetPrice, addr 0x5c1fa74, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PaidOffer_GetPrice(::System::IntPtr  obj) ;

/// @brief Method ovr_PaidOffer_GetSubscriptionTerm, addr 0x5c1faf0, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::OfferTerm ovr_PaidOffer_GetSubscriptionTerm(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyID_GetID, addr 0x5c1fd5c, size 0x78, virtual false, abstract: false, final false
static inline uint64_t ovr_PartyID_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetAction, addr 0x5c1fdd4, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::PartyUpdateAction ovr_PartyUpdateNotification_GetAction(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetPartyId, addr 0x5c1fe50, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_PartyUpdateNotification_GetPartyId(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetSenderId, addr 0x5c1fecc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_PartyUpdateNotification_GetSenderId(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp, addr 0x5c1ff48, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_PartyUpdateNotification_GetUpdateTimestamp(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp_Native, addr 0x5c1ffa4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PartyUpdateNotification_GetUpdateTimestamp_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserAlias, addr 0x5c20020, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_PartyUpdateNotification_GetUserAlias(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserAlias_Native, addr 0x5c2007c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PartyUpdateNotification_GetUserAlias_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserId, addr 0x5c200f8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_PartyUpdateNotification_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserName, addr 0x5c20174, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_PartyUpdateNotification_GetUserName(::System::IntPtr  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserName_Native, addr 0x5c201d0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PartyUpdateNotification_GetUserName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_Create, addr 0x5c118c0, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Create() ;

/// @brief Method ovr_Party_GatherInApplication, addr 0x5c11924, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_GatherInApplication(uint64_t  partyID, uint64_t  appID) ;

/// @brief Method ovr_Party_Get, addr 0x5c119a8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Get(uint64_t  partyID) ;

/// @brief Method ovr_Party_GetCurrent, addr 0x5c11a24, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_GetCurrent() ;

/// @brief Method ovr_Party_GetCurrentForUser, addr 0x5c11a88, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_GetCurrentForUser(uint64_t  userID) ;

/// @brief Method ovr_Party_GetID, addr 0x5c1fb6c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_GetInvitedUsers, addr 0x5c1fbe8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Party_GetInvitedUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_GetLeader, addr 0x5c1fc64, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Party_GetLeader(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_GetUsers, addr 0x5c1fce0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Party_GetUsers(::System::IntPtr  obj) ;

/// @brief Method ovr_Party_Invite, addr 0x5c11b04, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Invite(uint64_t  partyID, uint64_t  userID) ;

/// @brief Method ovr_Party_Join, addr 0x5c11b84, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Join(uint64_t  partyID) ;

/// @brief Method ovr_Party_Leave, addr 0x5c11c00, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Party_Leave(uint64_t  partyID) ;

/// @brief Method ovr_Party_PluginGetSharedMemHandle, addr 0x5c0b09c, size 0x64, virtual false, abstract: false, final false
static inline int32_t ovr_Party_PluginGetSharedMemHandle() ;

/// @brief Method ovr_Party_PluginGetVoipMicrophoneMuted, addr 0x5c0b100, size 0x64, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipMuteState ovr_Party_PluginGetVoipMicrophoneMuted() ;

/// @brief Method ovr_Party_PluginGetVoipPassthrough, addr 0x5c0b164, size 0x6c, virtual false, abstract: false, final false
static inline bool ovr_Party_PluginGetVoipPassthrough() ;

/// @brief Method ovr_Party_PluginGetVoipStatus, addr 0x5c0b1d0, size 0x64, virtual false, abstract: false, final false
static inline ::Oculus::Platform::SystemVoipStatus ovr_Party_PluginGetVoipStatus() ;

/// @brief Method ovr_PidArray_GetElement, addr 0x5c20324, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PidArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_PidArray_GetSize, addr 0x5c203a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_PidArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_Pid_GetId, addr 0x5c2024c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Pid_GetId(::System::IntPtr  obj) ;

/// @brief Method ovr_Pid_GetId_Native, addr 0x5c202a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Pid_GetId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PlatformInitializeWithAccessToken, addr 0x5c09384, size 0xa4, virtual false, abstract: false, final false
static inline uint64_t ovr_PlatformInitializeWithAccessToken(uint64_t  appId, ::StringW  accessToken) ;

/// @brief Method ovr_PlatformInitializeWithAccessTokenAndOptions, addr 0x5c09428, size 0x1b0, virtual false, abstract: false, final false
static inline uint64_t ovr_PlatformInitializeWithAccessTokenAndOptions(uint64_t  appId, ::StringW  accessToken, ::ArrayW<::Oculus::Platform::CAPI_ovrKeyValuePair,::Array<::Oculus::Platform::CAPI_ovrKeyValuePair>*>  configOptions, ::System::UIntPtr  numOptions) ;

/// @brief Method ovr_PlatformInitialize_GetResult, addr 0x5c20424, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::PlatformInitializeResult ovr_PlatformInitialize_GetResult(::System::IntPtr  obj) ;

/// @brief Method ovr_Platform_InitializeStandaloneOculus, addr 0x5c09294, size 0xf0, virtual false, abstract: false, final false
static inline uint64_t ovr_Platform_InitializeStandaloneOculus(::ByRef<::Oculus::Platform::CAPI_OculusInitParams>  init) ;

/// @brief Method ovr_PopMessage, addr 0x5c09870, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PopMessage() ;

/// @brief Method ovr_Price_GetAmountInHundredths, addr 0x5c204a0, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_Price_GetAmountInHundredths(::System::IntPtr  obj) ;

/// @brief Method ovr_Price_GetCurrency, addr 0x5c2051c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Price_GetCurrency(::System::IntPtr  obj) ;

/// @brief Method ovr_Price_GetCurrency_Native, addr 0x5c20578, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Price_GetCurrency_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Price_GetFormatted, addr 0x5c205f4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Price_GetFormatted(::System::IntPtr  obj) ;

/// @brief Method ovr_Price_GetFormatted_Native, addr 0x5c20650, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Price_GetFormatted_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ProductArray_GetElement, addr 0x5c20ea4, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ProductArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_ProductArray_GetNextUrl, addr 0x5c20f28, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_ProductArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_ProductArray_GetNextUrl_Native, addr 0x5c20f84, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_ProductArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_ProductArray_GetSize, addr 0x5c21000, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_ProductArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_ProductArray_HasNextPage, addr 0x5c2107c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_ProductArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetBillingPlans, addr 0x5c206cc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetBillingPlans(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetContentRating, addr 0x5c20748, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetContentRating(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetCoverUrl, addr 0x5c207c4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetCoverUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetCoverUrl_Native, addr 0x5c20820, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetCoverUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetDescription, addr 0x5c2089c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetDescription(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetDescription_Native, addr 0x5c208f8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetDescription_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetFormattedPrice, addr 0x5c20974, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetFormattedPrice(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetFormattedPrice_Native, addr 0x5c209d0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetFormattedPrice_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetIconUrl, addr 0x5c20a4c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetIconUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetIconUrl_Native, addr 0x5c20aa8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetIconUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetName, addr 0x5c20b24, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetName_Native, addr 0x5c20b80, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetPrice, addr 0x5c20bfc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetPrice(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetSKU, addr 0x5c20d50, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetSKU(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetSKU_Native, addr 0x5c20dac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetSKU_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetShortDescription, addr 0x5c20c78, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Product_GetShortDescription(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetShortDescription_Native, addr 0x5c20cd4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Product_GetShortDescription_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Product_GetType, addr 0x5c20e28, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ProductType ovr_Product_GetType(::System::IntPtr  obj) ;

/// @brief Method ovr_PurchaseArray_GetElement, addr 0x5c21708, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PurchaseArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_PurchaseArray_GetNextUrl, addr 0x5c2178c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_PurchaseArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_PurchaseArray_GetNextUrl_Native, addr 0x5c217e8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PurchaseArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PurchaseArray_GetSize, addr 0x5c21864, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_PurchaseArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_PurchaseArray_HasNextPage, addr 0x5c218e0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_PurchaseArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetDeveloperPayload, addr 0x5c21100, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Purchase_GetDeveloperPayload(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetDeveloperPayload_Native, addr 0x5c2115c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Purchase_GetDeveloperPayload_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetExpirationTime, addr 0x5c211d8, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_Purchase_GetExpirationTime(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetExpirationTime_Native, addr 0x5c21234, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Purchase_GetExpirationTime_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetGrantTime, addr 0x5c212b0, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ovr_Purchase_GetGrantTime(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetGrantTime_Native, addr 0x5c2130c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Purchase_GetGrantTime_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetPurchaseID, addr 0x5c21388, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Purchase_GetPurchaseID(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetPurchaseStrID, addr 0x5c21404, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Purchase_GetPurchaseStrID(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetPurchaseStrID_Native, addr 0x5c21460, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Purchase_GetPurchaseStrID_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetReportingId, addr 0x5c214dc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Purchase_GetReportingId(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetReportingId_Native, addr 0x5c21538, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Purchase_GetReportingId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetSKU, addr 0x5c215b4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_Purchase_GetSKU(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetSKU_Native, addr 0x5c21610, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Purchase_GetSKU_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_Purchase_GetType, addr 0x5c2168c, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ProductType ovr_Purchase_GetType(::System::IntPtr  obj) ;

/// @brief Method ovr_PushNotificationResult_GetId, addr 0x5c21964, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_PushNotificationResult_GetId(::System::IntPtr  obj) ;

/// @brief Method ovr_PushNotificationResult_GetId_Native, addr 0x5c219c0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_PushNotificationResult_GetId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_PushNotification_Register, addr 0x5c11c7c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_PushNotification_Register() ;

/// @brief Method ovr_RejoinDialogResult_GetRejoinSelected, addr 0x5c21a3c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_RejoinDialogResult_GetRejoinSelected(::System::IntPtr  obj) ;

/// @brief Method ovr_RichPresenceOptions_Create, addr 0x5c25a64, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_RichPresenceOptions_Create() ;

/// @brief Method ovr_RichPresenceOptions_Destroy, addr 0x5c25ac8, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_RichPresenceOptions_SetApiName, addr 0x5c25b44, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetApiName(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_RichPresenceOptions_SetApiName_Native, addr 0x5c25be8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetApiName_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride, addr 0x5c25c6c, size 0xa4, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride(::System::IntPtr  handle, ::StringW  value) ;

/// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x5c25d10, size 0x84, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native(::System::IntPtr  handle, ::System::IntPtr  value) ;

/// @brief Method ovr_RichPresenceOptions_SetIsJoinable, addr 0x5c25d94, size 0x84, virtual false, abstract: false, final false
static inline void ovr_RichPresenceOptions_SetIsJoinable(::System::IntPtr  handle, bool  value) ;

/// @brief Method ovr_RichPresence_Clear, addr 0x5c11ce0, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_Clear() ;

/// @brief Method ovr_RichPresence_GetDestinations, addr 0x5c11d44, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_GetDestinations() ;

/// @brief Method ovr_RichPresence_Set, addr 0x5c11da8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_Set(::System::IntPtr  richPresenceOptions) ;

/// @brief Method ovr_RichPresence_SetDestination, addr 0x5c11e24, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetDestination(::StringW  api_name) ;

/// @brief Method ovr_RichPresence_SetDestination_Native, addr 0x5c11ec4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetDestination_Native(::System::IntPtr  api_name) ;

/// @brief Method ovr_RichPresence_SetIsJoinable, addr 0x5c11f40, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetIsJoinable(bool  is_joinable) ;

/// @brief Method ovr_RichPresence_SetLobbySession, addr 0x5c11fbc, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetLobbySession(::StringW  id) ;

/// @brief Method ovr_RichPresence_SetLobbySession_Native, addr 0x5c1205c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetLobbySession_Native(::System::IntPtr  id) ;

/// @brief Method ovr_RichPresence_SetMatchSession, addr 0x5c120d8, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetMatchSession(::StringW  id) ;

/// @brief Method ovr_RichPresence_SetMatchSession_Native, addr 0x5c12178, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_RichPresence_SetMatchSession_Native(::System::IntPtr  id) ;

/// @brief Method ovr_RosterOptions_AddSuggestedUser, addr 0x5c25ef8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_RosterOptions_AddSuggestedUser(::System::IntPtr  handle, uint64_t  value) ;

/// @brief Method ovr_RosterOptions_ClearSuggestedUsers, addr 0x5c25f7c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_RosterOptions_ClearSuggestedUsers(::System::IntPtr  handle) ;

/// @brief Method ovr_RosterOptions_Create, addr 0x5c25e18, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_RosterOptions_Create() ;

/// @brief Method ovr_RosterOptions_Destroy, addr 0x5c25e7c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_RosterOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_SdkAccountArray_GetElement, addr 0x5c21bb8, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_SdkAccountArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_SdkAccountArray_GetSize, addr 0x5c21c3c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_SdkAccountArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_SdkAccount_GetAccountType, addr 0x5c21ac0, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::SdkAccountType ovr_SdkAccount_GetAccountType(::System::IntPtr  obj) ;

/// @brief Method ovr_SdkAccount_GetUserId, addr 0x5c21b3c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_SdkAccount_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_SendInvitesResult_GetInvites, addr 0x5c21cb8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_SendInvitesResult_GetInvites(::System::IntPtr  obj) ;

/// @brief Method ovr_SetDeveloperAccessToken, addr 0x5c0971c, size 0x9c, virtual false, abstract: false, final false
static inline bool ovr_SetDeveloperAccessToken(::StringW  accessToken) ;

/// @brief Method ovr_ShareMediaResult_GetStatus, addr 0x5c21d34, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::ShareMediaStatus ovr_ShareMediaResult_GetStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_SupplementaryMetric_GetID, addr 0x5c21db0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_SupplementaryMetric_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_SupplementaryMetric_GetMetric, addr 0x5c21e2c, size 0x7c, virtual false, abstract: false, final false
static inline int64_t ovr_SupplementaryMetric_GetMetric(::System::IntPtr  obj) ;

/// @brief Method ovr_SystemVoipState_GetMicrophoneMuted, addr 0x5c21ea8, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipMuteState ovr_SystemVoipState_GetMicrophoneMuted(::System::IntPtr  obj) ;

/// @brief Method ovr_SystemVoipState_GetStatus, addr 0x5c21f24, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::SystemVoipStatus ovr_SystemVoipState_GetStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccessArray_GetElement, addr 0x5c22664, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUserAppAccessArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_TestUserAppAccessArray_GetSize, addr 0x5c226e8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_TestUserAppAccessArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAccessToken, addr 0x5c22494, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_TestUserAppAccess_GetAccessToken(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAccessToken_Native, addr 0x5c224f0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUserAppAccess_GetAccessToken_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAppId, addr 0x5c2256c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_TestUserAppAccess_GetAppId(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetUserId, addr 0x5c225e8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_TestUserAppAccess_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetAccessToken, addr 0x5c21fa0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_TestUser_GetAccessToken(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetAccessToken_Native, addr 0x5c21ffc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetAccessToken_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetAppAccessArray, addr 0x5c22078, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetAppAccessArray(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetFbAppAccessArray, addr 0x5c220f4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetFbAppAccessArray(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetFriendAccessToken, addr 0x5c22170, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_TestUser_GetFriendAccessToken(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetFriendAccessToken_Native, addr 0x5c221cc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetFriendAccessToken_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetFriendAppAccessArray, addr 0x5c22248, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetFriendAppAccessArray(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetUserAlias, addr 0x5c222c4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_TestUser_GetUserAlias(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetUserAlias_Native, addr 0x5c22320, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TestUser_GetUserAlias_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetUserFbid, addr 0x5c2239c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_TestUser_GetUserFbid(::System::IntPtr  obj) ;

/// @brief Method ovr_TestUser_GetUserId, addr 0x5c22418, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_TestUser_GetUserId(::System::IntPtr  obj) ;

/// @brief Method ovr_TrialOfferArray_GetElement, addr 0x5c22954, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TrialOfferArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_TrialOfferArray_GetSize, addr 0x5c229d8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_TrialOfferArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_TrialOffer_GetMaxTermCount, addr 0x5c22764, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovr_TrialOffer_GetMaxTermCount(::System::IntPtr  obj) ;

/// @brief Method ovr_TrialOffer_GetPrice, addr 0x5c227e0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_TrialOffer_GetPrice(::System::IntPtr  obj) ;

/// @brief Method ovr_TrialOffer_GetTrialTerm, addr 0x5c2285c, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::OfferTerm ovr_TrialOffer_GetTrialTerm(::System::IntPtr  obj) ;

/// @brief Method ovr_TrialOffer_GetTrialType, addr 0x5c228d8, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::OfferType ovr_TrialOffer_GetTrialType(::System::IntPtr  obj) ;

/// @brief Method ovr_UnityInitGlobals, addr 0x5c09174, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_UnityInitGlobals(::System::IntPtr  loggingCB) ;

/// @brief Method ovr_UnityInitWrapper, addr 0x5c066f0, size 0x9c, virtual false, abstract: false, final false
static inline bool ovr_UnityInitWrapper(::StringW  appId) ;

/// @brief Method ovr_UnityInitWrapperAsynchronous, addr 0x5c0687c, size 0x98, virtual false, abstract: false, final false
static inline uint64_t ovr_UnityInitWrapperAsynchronous(::StringW  appId) ;

/// @brief Method ovr_UnityInitWrapperStandalone, addr 0x5c091f0, size 0xa4, virtual false, abstract: false, final false
static inline bool ovr_UnityInitWrapperStandalone(::StringW  accessToken, ::System::IntPtr  loggingCB) ;

/// @brief Method ovr_UnityInitWrapperWindows, addr 0x5c095d8, size 0xa4, virtual false, abstract: false, final false
static inline bool ovr_UnityInitWrapperWindows(::StringW  appId, ::System::IntPtr  loggingCB) ;

/// @brief Method ovr_UnityInitWrapperWindowsAsynchronous, addr 0x5c0967c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_UnityInitWrapperWindowsAsynchronous(::StringW  appId, ::System::IntPtr  loggingCB) ;

/// @brief Method ovr_UnityResetTestPlatform, addr 0x5c09d84, size 0x64, virtual false, abstract: false, final false
static inline void ovr_UnityResetTestPlatform() ;

/// @brief Method ovr_UserAccountAgeCategory_GetAgeCategory, addr 0x5c23360, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::AccountAgeCategory ovr_UserAccountAgeCategory_GetAgeCategory(::System::IntPtr  obj) ;

/// @brief Method ovr_UserAgeCategory_Get, addr 0x5c12f84, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_UserAgeCategory_Get() ;

/// @brief Method ovr_UserAgeCategory_Report, addr 0x5c12fe8, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_UserAgeCategory_Report(::Oculus::Platform::AppAgeCategory  age_category) ;

/// @brief Method ovr_UserArray_GetElement, addr 0x5c233dc, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_UserArray_GetNextUrl, addr 0x5c23460, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_UserArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_UserArray_GetNextUrl_Native, addr 0x5c234bc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserArray_GetSize, addr 0x5c23538, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_UserArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_UserArray_HasNextPage, addr 0x5c235b4, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapabilityArray_GetElement, addr 0x5c23944, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapabilityArray_GetElement(::System::IntPtr  obj, ::System::UIntPtr  index) ;

/// @brief Method ovr_UserCapabilityArray_GetNextUrl, addr 0x5c239c8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_UserCapabilityArray_GetNextUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapabilityArray_GetNextUrl_Native, addr 0x5c23a24, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapabilityArray_GetNextUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapabilityArray_GetSize, addr 0x5c23aa0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_UserCapabilityArray_GetSize(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapabilityArray_HasNextPage, addr 0x5c23b1c, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserCapabilityArray_HasNextPage(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetDescription, addr 0x5c23638, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_UserCapability_GetDescription(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetDescription_Native, addr 0x5c23694, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapability_GetDescription_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetIsEnabled, addr 0x5c23710, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserCapability_GetIsEnabled(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetName, addr 0x5c23794, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_UserCapability_GetName(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetName_Native, addr 0x5c237f0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapability_GetName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetReasonCode, addr 0x5c2386c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_UserCapability_GetReasonCode(::System::IntPtr  obj) ;

/// @brief Method ovr_UserCapability_GetReasonCode_Native, addr 0x5c238c8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserCapability_GetReasonCode_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserDataStoreUpdateResponse_GetSuccess, addr 0x5c23ba0, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserDataStoreUpdateResponse_GetSuccess(::System::IntPtr  obj) ;

/// @brief Method ovr_UserOptions_AddServiceProvider, addr 0x5c2615c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_UserOptions_AddServiceProvider(::System::IntPtr  handle, ::Oculus::Platform::ServiceProvider  value) ;

/// @brief Method ovr_UserOptions_ClearServiceProviders, addr 0x5c261e0, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_UserOptions_ClearServiceProviders(::System::IntPtr  handle) ;

/// @brief Method ovr_UserOptions_Create, addr 0x5c25ff8, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserOptions_Create() ;

/// @brief Method ovr_UserOptions_Destroy, addr 0x5c2605c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_UserOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_UserOptions_SetMaxUsers, addr 0x5c260d8, size 0x84, virtual false, abstract: false, final false
static inline void ovr_UserOptions_SetMaxUsers(::System::IntPtr  handle, uint32_t  value) ;

/// @brief Method ovr_UserOptions_SetTimeWindow, addr 0x5c2625c, size 0x84, virtual false, abstract: false, final false
static inline void ovr_UserOptions_SetTimeWindow(::System::IntPtr  handle, ::Oculus::Platform::TimeWindow  value) ;

/// @brief Method ovr_UserProof_GetNonce, addr 0x5c23c24, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_UserProof_GetNonce(::System::IntPtr  obj) ;

/// @brief Method ovr_UserProof_GetNonce_Native, addr 0x5c23c80, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_UserProof_GetNonce_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_UserReportID_GetDidCancel, addr 0x5c23cfc, size 0x84, virtual false, abstract: false, final false
static inline bool ovr_UserReportID_GetDidCancel(::System::IntPtr  obj) ;

/// @brief Method ovr_UserReportID_GetID, addr 0x5c23d80, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_UserReportID_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_User_CancelRecordingForReportFlow, addr 0x5c121f4, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ovr_User_CancelRecordingForReportFlow(::StringW  recordingUUID) ;

/// @brief Method ovr_User_CancelRecordingForReportFlow_Native, addr 0x5c12294, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_CancelRecordingForReportFlow_Native(::System::IntPtr  recordingUUID) ;

/// @brief Method ovr_User_Get, addr 0x5c12310, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_Get(uint64_t  userID) ;

/// @brief Method ovr_User_GetAccessToken, addr 0x5c1238c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetAccessToken() ;

/// @brief Method ovr_User_GetBlockedUsers, addr 0x5c123f0, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetBlockedUsers() ;

/// @brief Method ovr_User_GetDisplayName, addr 0x5c22a54, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetDisplayName(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetDisplayName_Native, addr 0x5c22ab0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetDisplayName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetID, addr 0x5c22b2c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetID(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetImageUrl, addr 0x5c22ba8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetImageUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetImageUrl_Native, addr 0x5c22c04, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetImageUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetLinkedAccounts, addr 0x5c12454, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetLinkedAccounts(::System::IntPtr  userOptions) ;

/// @brief Method ovr_User_GetLoggedInUser, addr 0x5c124d0, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetLoggedInUser() ;

/// @brief Method ovr_User_GetLoggedInUserFriends, addr 0x5c12534, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetLoggedInUserFriends() ;

/// @brief Method ovr_User_GetLoggedInUserManagedInfo, addr 0x5c12598, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetLoggedInUserManagedInfo() ;

/// @brief Method ovr_User_GetManagedInfo, addr 0x5c22c80, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetManagedInfo(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetOculusID, addr 0x5c22cfc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetOculusID(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetOculusID_Native, addr 0x5c22d58, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetOculusID_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetOrgScopedID, addr 0x5c125fc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetOrgScopedID(uint64_t  userID) ;

/// @brief Method ovr_User_GetPresence, addr 0x5c22dd4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresence(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceDeeplinkMessage, addr 0x5c22eac, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresenceDeeplinkMessage(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceDeeplinkMessage_Native, addr 0x5c22f08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresenceDeeplinkMessage_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceDestinationApiName, addr 0x5c22f84, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresenceDestinationApiName(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceDestinationApiName_Native, addr 0x5c22fe0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresenceDestinationApiName_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceLobbySessionId, addr 0x5c2305c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresenceLobbySessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceLobbySessionId_Native, addr 0x5c230b8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresenceLobbySessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceMatchSessionId, addr 0x5c23134, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetPresenceMatchSessionId(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceMatchSessionId_Native, addr 0x5c23190, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresenceMatchSessionId_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresenceStatus, addr 0x5c2320c, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::UserPresenceStatus ovr_User_GetPresenceStatus(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetPresence_Native, addr 0x5c22e30, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetPresence_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetSdkAccounts, addr 0x5c12678, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetSdkAccounts() ;

/// @brief Method ovr_User_GetSmallImageUrl, addr 0x5c23288, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ovr_User_GetSmallImageUrl(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetSmallImageUrl_Native, addr 0x5c232e4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_User_GetSmallImageUrl_Native(::System::IntPtr  obj) ;

/// @brief Method ovr_User_GetUserCapabilities, addr 0x5c126dc, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetUserCapabilities() ;

/// @brief Method ovr_User_GetUserProof, addr 0x5c12740, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_GetUserProof() ;

/// @brief Method ovr_User_LaunchBlockFlow, addr 0x5c127a4, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchBlockFlow(uint64_t  userID) ;

/// @brief Method ovr_User_LaunchFriendRequestFlow, addr 0x5c12820, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchFriendRequestFlow(uint64_t  userID) ;

/// @brief Method ovr_User_LaunchReportFlow, addr 0x5c1289c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchReportFlow(uint64_t  userID) ;

/// @brief Method ovr_User_LaunchReportFlow2, addr 0x5c12918, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchReportFlow2(uint64_t  optionalUserID, ::System::IntPtr  abuseReportOptions) ;

/// @brief Method ovr_User_LaunchUnblockFlow, addr 0x5c1299c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_LaunchUnblockFlow(uint64_t  userID) ;

/// @brief Method ovr_User_NewEntitledTestUser, addr 0x5c12a18, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_NewEntitledTestUser() ;

/// @brief Method ovr_User_NewTestUser, addr 0x5c12a7c, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_NewTestUser() ;

/// @brief Method ovr_User_NewTestUserFriends, addr 0x5c12ae0, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_NewTestUserFriends() ;

/// @brief Method ovr_User_StartRecordingForReportFlow, addr 0x5c12b44, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StartRecordingForReportFlow() ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow, addr 0x5c12ba8, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow(uint64_t  optionalUserID, ::StringW  optionalRecordingUUID) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2, addr 0x5c12ce0, size 0xbc, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2(uint64_t  optionalUserID, ::StringW  optionalRecordingUUID, ::System::IntPtr  abuseReportOptions) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2_Native, addr 0x5c12d9c, size 0x94, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2_Native(uint64_t  optionalUserID, ::System::IntPtr  optionalRecordingUUID, ::System::IntPtr  abuseReportOptions) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow_Native, addr 0x5c12c5c, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow_Native(uint64_t  optionalUserID, ::System::IntPtr  optionalRecordingUUID) ;

/// @brief Method ovr_User_TestUserCreateDeviceManifest, addr 0x5c12e30, size 0xb8, virtual false, abstract: false, final false
static inline uint64_t ovr_User_TestUserCreateDeviceManifest(::StringW  deviceID, ::ArrayW<uint64_t,::Array<uint64_t>*>  appIDs, int32_t  numAppIDs) ;

/// @brief Method ovr_User_TestUserCreateDeviceManifest_Native, addr 0x5c12ee8, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ovr_User_TestUserCreateDeviceManifest_Native(::System::IntPtr  deviceID, ::ArrayW<uint64_t,::Array<uint64_t>*>  appIDs, int32_t  numAppIDs) ;

/// @brief Method ovr_VoipDecoder_Decode, addr 0x5c23dfc, size 0x9c, virtual false, abstract: false, final false
static inline void ovr_VoipDecoder_Decode(::System::IntPtr  obj, ::ArrayW<uint8_t,::Array<uint8_t>*>  compressedData, ::System::UIntPtr  compressedSize) ;

/// @brief Method ovr_VoipDecoder_Decode, addr 0x5c09b10, size 0x9c, virtual false, abstract: false, final false
static inline void ovr_VoipDecoder_Decode(::System::IntPtr  obj, ::ArrayW<uint8_t,::Array<uint8_t>*>  compressedData, uint64_t  compressedSize) ;

/// @brief Method ovr_VoipDecoder_GetDecodedPCM, addr 0x5c23e98, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_VoipDecoder_GetDecodedPCM(::System::IntPtr  obj, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferSize) ;

/// @brief Method ovr_VoipEncoder_AddPCM, addr 0x5c23f34, size 0x9c, virtual false, abstract: false, final false
static inline void ovr_VoipEncoder_AddPCM(::System::IntPtr  obj, ::ArrayW<float_t,::Array<float_t>*>  inputData, uint32_t  inputSize) ;

/// @brief Method ovr_VoipEncoder_GetCompressedData, addr 0x5c23fd0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_VoipEncoder_GetCompressedData(::System::IntPtr  obj, ::ArrayW<uint8_t,::Array<uint8_t>*>  outputBuffer, ::System::UIntPtr  intputSize) ;

/// @brief Method ovr_VoipEncoder_GetCompressedDataSize, addr 0x5c2406c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_VoipEncoder_GetCompressedDataSize(::System::IntPtr  obj) ;

/// @brief Method ovr_VoipOptions_Create, addr 0x5c262e0, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_VoipOptions_Create() ;

/// @brief Method ovr_VoipOptions_Destroy, addr 0x5c26344, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_VoipOptions_Destroy(::System::IntPtr  handle) ;

/// @brief Method ovr_VoipOptions_SetBitrateForNewConnections, addr 0x5c263c0, size 0x84, virtual false, abstract: false, final false
static inline void ovr_VoipOptions_SetBitrateForNewConnections(::System::IntPtr  handle, ::Oculus::Platform::VoipBitrate  value) ;

/// @brief Method ovr_VoipOptions_SetCreateNewConnectionUseDtx, addr 0x5c26444, size 0x84, virtual false, abstract: false, final false
static inline void ovr_VoipOptions_SetCreateNewConnectionUseDtx(::System::IntPtr  handle, ::Oculus::Platform::VoipDtxState  value) ;

/// @brief Method ovr_Voip_Accept, addr 0x5c0b234, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_Accept(uint64_t  userID) ;

/// @brief Method ovr_Voip_CreateDecoder, addr 0x5c09a30, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Voip_CreateDecoder() ;

/// @brief Method ovr_Voip_CreateEncoder, addr 0x5c09950, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovr_Voip_CreateEncoder() ;

/// @brief Method ovr_Voip_DestroyDecoder, addr 0x5c09a94, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_DestroyDecoder(::System::IntPtr  decoder) ;

/// @brief Method ovr_Voip_DestroyEncoder, addr 0x5c099b4, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_DestroyEncoder(::System::IntPtr  encoder) ;

/// @brief Method ovr_Voip_GetIsConnectionUsingDtx, addr 0x5c0b2b0, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipDtxState ovr_Voip_GetIsConnectionUsingDtx(uint64_t  peerID) ;

/// @brief Method ovr_Voip_GetLocalBitrate, addr 0x5c0b32c, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetLocalBitrate(uint64_t  peerID) ;

/// @brief Method ovr_Voip_GetMicrophoneAvailability, addr 0x5c13064, size 0x64, virtual false, abstract: false, final false
static inline uint64_t ovr_Voip_GetMicrophoneAvailability() ;

/// @brief Method ovr_Voip_GetOutputBufferMaxSize, addr 0x5c0b3a8, size 0x64, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetOutputBufferMaxSize() ;

/// @brief Method ovr_Voip_GetPCM, addr 0x5c0b40c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCM(uint64_t  senderID, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_Voip_GetPCMFloat, addr 0x5c0b4a8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCMFloat(uint64_t  senderID, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements) ;

/// @brief Method ovr_Voip_GetPCMSize, addr 0x5c0b544, size 0x7c, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCMSize(uint64_t  senderID) ;

/// @brief Method ovr_Voip_GetPCMWithTimestamp, addr 0x5c0b5c0, size 0xac, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCMWithTimestamp(uint64_t  senderID, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements, ::ArrayW<uint32_t,::Array<uint32_t>*>  timestamp) ;

/// @brief Method ovr_Voip_GetPCMWithTimestampFloat, addr 0x5c0b66c, size 0xac, virtual false, abstract: false, final false
static inline ::System::UIntPtr ovr_Voip_GetPCMWithTimestampFloat(uint64_t  senderID, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::System::UIntPtr  outputBufferNumElements, ::ArrayW<uint32_t,::Array<uint32_t>*>  timestamp) ;

/// @brief Method ovr_Voip_GetRemoteBitrate, addr 0x5c0b718, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetRemoteBitrate(uint64_t  peerID) ;

/// @brief Method ovr_Voip_GetSyncTimestamp, addr 0x5c0b794, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ovr_Voip_GetSyncTimestamp(uint64_t  userID) ;

/// @brief Method ovr_Voip_GetSyncTimestampDifference, addr 0x5c0b810, size 0x84, virtual false, abstract: false, final false
static inline int64_t ovr_Voip_GetSyncTimestampDifference(uint32_t  lhs, uint32_t  rhs) ;

/// @brief Method ovr_Voip_GetSystemVoipMicrophoneMuted, addr 0x5c0b894, size 0x64, virtual false, abstract: false, final false
static inline ::Oculus::Platform::VoipMuteState ovr_Voip_GetSystemVoipMicrophoneMuted() ;

/// @brief Method ovr_Voip_GetSystemVoipStatus, addr 0x5c0b8f8, size 0x64, virtual false, abstract: false, final false
static inline ::Oculus::Platform::SystemVoipStatus ovr_Voip_GetSystemVoipStatus() ;

/// @brief Method ovr_Voip_ReportAppVoipSessions, addr 0x5c130c8, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ovr_Voip_ReportAppVoipSessions(::ArrayW<uint64_t,::Array<uint64_t>*>  sessionIDs) ;

/// @brief Method ovr_Voip_SetMicrophoneFilterCallback, addr 0x5c09eec, size 0x80, virtual false, abstract: false, final false
static inline void ovr_Voip_SetMicrophoneFilterCallback(::Oculus::Platform::CAPI_FilterCallback*  cb) ;

/// @brief Method ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer, addr 0x5c09f6c, size 0x88, virtual false, abstract: false, final false
static inline void ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(::Oculus::Platform::CAPI_FilterCallback*  cb, ::System::UIntPtr  bufferSizeElements) ;

/// @brief Method ovr_Voip_SetMicrophoneMuted, addr 0x5c0b95c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetMicrophoneMuted(::Oculus::Platform::VoipMuteState  state) ;

/// @brief Method ovr_Voip_SetNewConnectionOptions, addr 0x5c0b9d8, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetNewConnectionOptions(::System::IntPtr  voipOptions) ;

/// @brief Method ovr_Voip_SetOutputSampleRate, addr 0x5c0ba54, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetOutputSampleRate(::Oculus::Platform::VoipSampleRate  rate) ;

/// @brief Method ovr_Voip_SetSystemVoipMicrophoneMuted, addr 0x5c09d08, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetSystemVoipMicrophoneMuted(::Oculus::Platform::VoipMuteState  muted) ;

/// @brief Method ovr_Voip_SetSystemVoipPassthrough, addr 0x5c09c8c, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_SetSystemVoipPassthrough(bool  passthrough) ;

/// @brief Method ovr_Voip_SetSystemVoipSuppressed, addr 0x5c1314c, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ovr_Voip_SetSystemVoipSuppressed(bool  suppressed) ;

/// @brief Method ovr_Voip_Start, addr 0x5c0bad0, size 0x7c, virtual false, abstract: false, final false
static inline void ovr_Voip_Start(uint64_t  userID) ;

/// @brief Method ovr_Voip_Stop, addr 0x5c0bb4c, size 0x7c, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17805};

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

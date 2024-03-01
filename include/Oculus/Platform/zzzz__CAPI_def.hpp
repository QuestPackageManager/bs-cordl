#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__KeyValuePairType_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct AppStatus;
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
struct KeyValuePairType;
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
struct PartyUpdateAction;
}
namespace Oculus::Platform {
struct PlatformInitializeResult;
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
namespace Oculus::Platform {
class __CAPI__FilterCallback;
}
namespace Oculus::Platform {
struct __CAPI__OculusInitParams;
}
namespace Oculus::Platform {
struct __CAPI__ovrKeyValuePair;
}
namespace Oculus::Platform {
struct __CAPI__ovrNetSyncVec3;
}
namespace Oculus::Platform {
struct __Message__MessageType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
class Object;
}
// Forward declare root types
namespace Oculus::Platform {
class CAPI;
}
namespace Oculus::Platform {
class __CAPI__FilterCallback;
}
namespace Oculus::Platform {
struct __CAPI__OculusInitParams;
}
namespace Oculus::Platform {
struct __CAPI__ovrKeyValuePair;
}
namespace Oculus::Platform {
struct __CAPI__ovrNetSyncVec3;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::CAPI);
MARK_REF_PTR_T(::Oculus::Platform::__CAPI__FilterCallback);
MARK_VAL_T(::Oculus::Platform::__CAPI__OculusInitParams);
MARK_VAL_T(::Oculus::Platform::__CAPI__ovrKeyValuePair);
MARK_VAL_T(::Oculus::Platform::__CAPI__ovrNetSyncVec3);
// Type: ::ovrKeyValuePair
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::CAPI::ovrKeyValuePair
struct CORDL_TYPE __CAPI__ovrKeyValuePair {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x27c1f30, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, ::StringW value);

  /// @brief Method .ctor, addr 0x27c1f48, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, double_t value);

  /// @brief Method .ctor, addr 0x27c1a10, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CAPI__ovrKeyValuePair();

  // Ctor Parameters [CppParam { name: "key_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "valueType_", ty: "::Oculus::Platform::KeyValuePairType", modifiers: "", def_value:
  // None }, CppParam { name: "stringValue_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "intValue_", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "doubleValue_", ty: "double_t", modifiers: "", def_value: None }]
  constexpr __CAPI__ovrKeyValuePair(::StringW key_, ::Oculus::Platform::KeyValuePairType valueType_, ::StringW stringValue_, int32_t intValue_, double_t doubleValue_) noexcept;

  /// @brief Field key_, offset: 0x0, size: 0x8, def value: None
  ::StringW key_;

  /// @brief Field valueType_, offset: 0x8, size: 0x4, def value: None
  ::Oculus::Platform::KeyValuePairType valueType_;

  /// @brief Field stringValue_, offset: 0x10, size: 0x8, def value: None
  ::StringW stringValue_;

  /// @brief Field intValue_, offset: 0x18, size: 0x4, def value: None
  int32_t intValue_;

  /// @brief Field doubleValue_, offset: 0x20, size: 0x8, def value: None
  double_t doubleValue_;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__ovrKeyValuePair, 0x28>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrKeyValuePair, key_) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrKeyValuePair, valueType_) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrKeyValuePair, stringValue_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrKeyValuePair, intValue_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrKeyValuePair, doubleValue_) == 0x20, "Offset mismatch!");

} // namespace Oculus::Platform
// Type: ::ovrNetSyncVec3
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::CAPI::ovrNetSyncVec3
struct CORDL_TYPE __CAPI__ovrNetSyncVec3 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CAPI__ovrNetSyncVec3();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr __CAPI__ovrNetSyncVec3(float_t x, float_t y, float_t z) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__ovrNetSyncVec3, 0xc>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrNetSyncVec3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrNetSyncVec3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrNetSyncVec3, z) == 0x8, "Offset mismatch!");

} // namespace Oculus::Platform
// Type: ::OculusInitParams
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::CAPI::OculusInitParams
struct CORDL_TYPE __CAPI__OculusInitParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CAPI__OculusInitParams();

  // Ctor Parameters [CppParam { name: "sType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "email", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "appId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "uriPrefixOverride", ty: "::StringW",
  // modifiers: "", def_value: None }]
  constexpr __CAPI__OculusInitParams(int32_t sType, ::StringW email, ::StringW password, uint64_t appId, ::StringW uriPrefixOverride) noexcept;

  /// @brief Field sType, offset: 0x0, size: 0x4, def value: None
  int32_t sType;

  /// @brief Field email, offset: 0x8, size: 0x8, def value: None
  ::StringW email;

  /// @brief Field password, offset: 0x10, size: 0x8, def value: None
  ::StringW password;

  /// @brief Field appId, offset: 0x18, size: 0x8, def value: None
  uint64_t appId;

  /// @brief Field uriPrefixOverride, offset: 0x20, size: 0x8, def value: None
  ::StringW uriPrefixOverride;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__OculusInitParams, 0x28>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__OculusInitParams, sType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__OculusInitParams, email) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__OculusInitParams, password) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__OculusInitParams, appId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__OculusInitParams, uriPrefixOverride) == 0x20, "Offset mismatch!");

} // namespace Oculus::Platform
// Type: ::FilterCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::CAPI::FilterCallback*
class CORDL_TYPE __CAPI__FilterCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x27dda94, size 0xd4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<int16_t, ::Array<int16_t>*>> pcmData, void* pcmDataLength, int32_t frequency, int32_t numChannels, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ddb68, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x27dda80, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<::ArrayW<int16_t, ::Array<int16_t>*>> pcmData, void* pcmDataLength, int32_t frequency, int32_t numChannels);

  static inline ::Oculus::Platform::__CAPI__FilterCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27dd9a8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CAPI__FilterCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CAPI__FilterCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CAPI__FilterCallback(__CAPI__FilterCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CAPI__FilterCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CAPI__FilterCallback(__CAPI__FilterCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__FilterCallback, 0x80>, "Size mismatch!");

} // namespace Oculus::Platform
// Type: Oculus.Platform::CAPI
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::CAPI*
class CORDL_TYPE CAPI : public ::System::Object {
public:
  // Declarations
  using FilterCallback = ::Oculus::Platform::__CAPI__FilterCallback;

  using OculusInitParams = ::Oculus::Platform::__CAPI__OculusInitParams;

  using ovrKeyValuePair = ::Oculus::Platform::__CAPI__ovrKeyValuePair;

  using ovrNetSyncVec3 = ::Oculus::Platform::__CAPI__ovrNetSyncVec3;

  /// @brief Field nativeStringEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_nativeStringEncoding, put = setStaticF_nativeStringEncoding))::System::Text::UTF8Encoding* nativeStringEncoding;

  /// @brief Method ArrayOfStructsToIntPtr, addr 0x27c162c, size 0x198, virtual false, abstract: false, final false
  static inline void* ArrayOfStructsToIntPtr(::System::Array* ar);

  /// @brief Method BlobFromNative, addr 0x27c2604, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BlobFromNative(uint32_t size, void* pointer);

  /// @brief Method DataStoreFromNative, addr 0x27c2020, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* DataStoreFromNative(void* pointer);

  /// @brief Method DateTimeFromNative, addr 0x27c24b8, size 0x64, virtual false, abstract: false, final false
  static inline ::System::DateTime DateTimeFromNative(uint64_t seconds_since_the_one_true_epoch);

  /// @brief Method DateTimeToNative, addr 0x27c251c, size 0xe8, virtual false, abstract: false, final false
  static inline uint64_t DateTimeToNative(::System::DateTime dt);

  /// @brief Method DictionaryToOVRKeyValuePairs, addr 0x27c17c4, size 0x24c, virtual false, abstract: false, final false
  static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>
  DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>* dict);

  /// @brief Method DictionaryToOVRKeyValuePairs, addr 0x27c1a2c, size 0x504, virtual false, abstract: false, final false
  static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>
  DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* dict);

  /// @brief Method FiledataFromNative, addr 0x27c26dc, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FiledataFromNative(uint32_t size, void* pointer);

  /// @brief Method GetNativeStringLengthNotIncludingNullTerminator, addr 0x27c2444, size 0x74, virtual false, abstract: false, final false
  static inline int32_t GetNativeStringLengthNotIncludingNullTerminator(void* pointer);

  /// @brief Method IntPtrToByteArray, addr 0x27c1f64, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> IntPtrToByteArray(void* data, uint64_t size);

  /// @brief Method LogNewEvent, addr 0x27c3808, size 0x354, virtual false, abstract: false, final false
  static inline void LogNewEvent(::StringW eventName, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* values);

  /// @brief Method LogNewUnifiedEvent, addr 0x27c3760, size 0xa8, virtual false, abstract: false, final false
  static inline void LogNewUnifiedEvent(::Oculus::Platform::LogEventName eventName, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* values);

  static inline ::Oculus::Platform::CAPI* New_ctor();

  /// @brief Method StringFromNative, addr 0x27c2310, size 0x134, virtual false, abstract: false, final false
  static inline ::StringW StringFromNative(void* pointer);

  /// @brief Method StringToNative, addr 0x27c277c, size 0x180, virtual false, abstract: false, final false
  static inline void* StringToNative(::StringW s);

  /// @brief Method .ctor, addr 0x27dd924, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::UTF8Encoding* getStaticF_nativeStringEncoding();

  /// @brief Method ovr_AbuseReportOptions_Create, addr 0x27bf0b0, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_AbuseReportOptions_Create();

  /// @brief Method ovr_AbuseReportOptions_Destroy, addr 0x27bf41c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AbuseReportOptions_Destroy(void* handle);

  /// @brief Method ovr_AbuseReportOptions_SetPreventPeopleChooser, addr 0x27bf180, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AbuseReportOptions_SetPreventPeopleChooser(void* handle, bool value);

  /// @brief Method ovr_AbuseReportOptions_SetReportType, addr 0x27bf26c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AbuseReportOptions_SetReportType(void* handle, ::Oculus::Platform::AbuseReportType value);

  /// @brief Method ovr_AbuseReportRecording_GetRecordingUuid, addr 0x27ccc00, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AbuseReportRecording_GetRecordingUuid(void* obj);

  /// @brief Method ovr_AbuseReportRecording_GetRecordingUuid_Native, addr 0x27ccc58, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AbuseReportRecording_GetRecordingUuid_Native(void* obj);

  /// @brief Method ovr_AbuseReport_LaunchAdvancedReportFlow, addr 0x27c5324, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_AbuseReport_LaunchAdvancedReportFlow(uint64_t content_id, void* abuse_report_options);

  /// @brief Method ovr_AbuseReport_ReportRequestHandled, addr 0x27c53a8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AbuseReport_ReportRequestHandled(::Oculus::Platform::ReportRequestResponse response);

  /// @brief Method ovr_AchievementDefinitionArray_GetElement, addr 0x27ccf1c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_AchievementDefinitionArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_AchievementDefinitionArray_GetNextUrl, addr 0x27ccfa0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementDefinitionArray_GetNextUrl(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_GetNextUrl_Native, addr 0x27ccff8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementDefinitionArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_GetSize, addr 0x27cd074, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementDefinitionArray_GetSize(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_HasNextPage, addr 0x27cd0f0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementDefinitionArray_HasNextPage(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetBitfieldLength, addr 0x27cccd4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_AchievementDefinition_GetBitfieldLength(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetName, addr 0x27ccd50, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementDefinition_GetName(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetName_Native, addr 0x27ccda8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementDefinition_GetName_Native(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetTarget, addr 0x27cce24, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AchievementDefinition_GetTarget(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetType, addr 0x27ccea0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::AchievementType ovr_AchievementDefinition_GetType(void* obj);

  /// @brief Method ovr_AchievementProgressArray_GetElement, addr 0x27cd4f0, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgressArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_AchievementProgressArray_GetNextUrl, addr 0x27cd574, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementProgressArray_GetNextUrl(void* obj);

  /// @brief Method ovr_AchievementProgressArray_GetNextUrl_Native, addr 0x27cd5cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgressArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_AchievementProgressArray_GetSize, addr 0x27cd648, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgressArray_GetSize(void* obj);

  /// @brief Method ovr_AchievementProgressArray_HasNextPage, addr 0x27cd6c4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementProgressArray_HasNextPage(void* obj);

  /// @brief Method ovr_AchievementProgress_GetBitfield, addr 0x27cd174, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementProgress_GetBitfield(void* obj);

  /// @brief Method ovr_AchievementProgress_GetBitfield_Native, addr 0x27cd1cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgress_GetBitfield_Native(void* obj);

  /// @brief Method ovr_AchievementProgress_GetCount, addr 0x27cd248, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AchievementProgress_GetCount(void* obj);

  /// @brief Method ovr_AchievementProgress_GetIsUnlocked, addr 0x27cd2c4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementProgress_GetIsUnlocked(void* obj);

  /// @brief Method ovr_AchievementProgress_GetName, addr 0x27cd348, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementProgress_GetName(void* obj);

  /// @brief Method ovr_AchievementProgress_GetName_Native, addr 0x27cd3a0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgress_GetName_Native(void* obj);

  /// @brief Method ovr_AchievementProgress_GetUnlockTime, addr 0x27cd41c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_AchievementProgress_GetUnlockTime(void* obj);

  /// @brief Method ovr_AchievementProgress_GetUnlockTime_Native, addr 0x27cd474, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AchievementProgress_GetUnlockTime_Native(void* obj);

  /// @brief Method ovr_AchievementUpdate_GetJustUnlocked, addr 0x27cd748, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementUpdate_GetJustUnlocked(void* obj);

  /// @brief Method ovr_AchievementUpdate_GetName, addr 0x27cd7cc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementUpdate_GetName(void* obj);

  /// @brief Method ovr_AchievementUpdate_GetName_Native, addr 0x27cd824, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementUpdate_GetName_Native(void* obj);

  /// @brief Method ovr_Achievements_AddCount, addr 0x27c5424, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddCount(::StringW name, uint64_t count);

  /// @brief Method ovr_Achievements_AddCount_Native, addr 0x27c54d0, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddCount_Native(void* name, uint64_t count);

  /// @brief Method ovr_Achievements_AddFields, addr 0x27c5554, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddFields(::StringW name, ::StringW fields);

  /// @brief Method ovr_Achievements_AddFields_Native, addr 0x27c561c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddFields_Native(void* name, void* fields);

  /// @brief Method ovr_Achievements_GetAllDefinitions, addr 0x27c56a0, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetAllDefinitions();

  /// @brief Method ovr_Achievements_GetAllProgress, addr 0x27c5708, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetAllProgress();

  /// @brief Method ovr_Achievements_GetDefinitionsByName, addr 0x27c5770, size 0x148, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetDefinitionsByName(::ArrayW<::StringW, ::Array<::StringW>*> names, int32_t count);

  /// @brief Method ovr_Achievements_GetProgressByName, addr 0x27c58b8, size 0x148, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetProgressByName(::ArrayW<::StringW, ::Array<::StringW>*> names, int32_t count);

  /// @brief Method ovr_Achievements_Unlock, addr 0x27c5a00, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_Unlock(::StringW name);

  /// @brief Method ovr_Achievements_Unlock_Native, addr 0x27c5a9c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_Unlock_Native(void* name);

  /// @brief Method ovr_AdvancedAbuseReportOptions_AddSuggestedUser, addr 0x27bf9c4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_AddSuggestedUser(void* handle, uint64_t value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext, addr 0x27bf6ec, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext(void* handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers, addr 0x27bfaa0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers(void* handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_Create, addr 0x27bf4fc, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_AdvancedAbuseReportOptions_Create();

  /// @brief Method ovr_AdvancedAbuseReportOptions_Destroy, addr 0x27bfd34, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_Destroy(void* handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString, addr 0x27bf5d4, size 0xc0, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString(void* handle, ::StringW key, ::StringW value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native, addr 0x27db554, size 0x94, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native(void* handle, void* key, void* value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType, addr 0x27bf7d0, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetObjectType(void* handle, ::StringW value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType_Native, addr 0x27db5e8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetObjectType_Native(void* handle, void* value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetReportType, addr 0x27bf8d8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetReportType(void* handle, ::Oculus::Platform::AbuseReportType value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetVideoMode, addr 0x27bfb84, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetVideoMode(void* handle, ::Oculus::Platform::AbuseReportVideoMode value);

  /// @brief Method ovr_AppDownloadProgressResult_GetDownloadBytes, addr 0x27cd8a0, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_AppDownloadProgressResult_GetDownloadBytes(void* obj);

  /// @brief Method ovr_AppDownloadProgressResult_GetDownloadedBytes, addr 0x27cd91c, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_AppDownloadProgressResult_GetDownloadedBytes(void* obj);

  /// @brief Method ovr_AppDownloadProgressResult_GetStatusCode, addr 0x27cd998, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::AppStatus ovr_AppDownloadProgressResult_GetStatusCode(void* obj);

  /// @brief Method ovr_AppDownloadResult_GetTimestamp, addr 0x27cda14, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_AppDownloadResult_GetTimestamp(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_GetElement, addr 0x27cdeac, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInviteArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ApplicationInviteArray_GetNextUrl, addr 0x27cdf30, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationInviteArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_GetNextUrl_Native, addr 0x27cdf88, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInviteArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_GetSize, addr 0x27ce004, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInviteArray_GetSize(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_HasNextPage, addr 0x27ce080, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ApplicationInviteArray_HasNextPage(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetDestination, addr 0x27cdb0c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInvite_GetDestination(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetID, addr 0x27cdb88, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationInvite_GetID(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetIsActive, addr 0x27cdc04, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ApplicationInvite_GetIsActive(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetLobbySessionId, addr 0x27cdc88, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationInvite_GetLobbySessionId(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetLobbySessionId_Native, addr 0x27cdce0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInvite_GetLobbySessionId_Native(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetMatchSessionId, addr 0x27cdd5c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationInvite_GetMatchSessionId(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetMatchSessionId_Native, addr 0x27cddb4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInvite_GetMatchSessionId_Native(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetRecipient, addr 0x27cde30, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInvite_GetRecipient(void* obj);

  /// @brief Method ovr_ApplicationLifecycle_GetLaunchDetails, addr 0x27c3bf8, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationLifecycle_GetLaunchDetails();

  /// @brief Method ovr_ApplicationLifecycle_GetRegisteredPIDs, addr 0x27c5e20, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_GetRegisteredPIDs();

  /// @brief Method ovr_ApplicationLifecycle_GetSessionKey, addr 0x27c5e88, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_GetSessionKey();

  /// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult, addr 0x27c3c60, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_ApplicationLifecycle_LogDeeplinkResult(::StringW trackingID, ::Oculus::Platform::LaunchResult result);

  /// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult_Native, addr 0x27c3cfc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationLifecycle_LogDeeplinkResult_Native(void* trackingID, ::Oculus::Platform::LaunchResult result);

  /// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey, addr 0x27c5ef0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey(::StringW sessionKey);

  /// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey_Native, addr 0x27c5f8c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey_Native(void* sessionKey);

  /// @brief Method ovr_ApplicationOptions_Create, addr 0x27c0100, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationOptions_Create();

  /// @brief Method ovr_ApplicationOptions_Destroy, addr 0x27c07a0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_Destroy(void* handle);

  /// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage, addr 0x27c01d0, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDeeplinkMessage(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage_Native, addr 0x27db66c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDeeplinkMessage_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetDestinationApiName, addr 0x27c02d8, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDestinationApiName(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetDestinationApiName_Native, addr 0x27db6f0, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDestinationApiName_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetLobbySessionId, addr 0x27c03e0, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetLobbySessionId(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetLobbySessionId_Native, addr 0x27db774, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetLobbySessionId_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetMatchSessionId, addr 0x27c04e8, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetMatchSessionId(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetMatchSessionId_Native, addr 0x27db7f8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetMatchSessionId_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetRoomId, addr 0x27c05f0, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetRoomId(void* handle, uint64_t value);

  /// @brief Method ovr_ApplicationVersion_GetCurrentCode, addr 0x27ce104, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_ApplicationVersion_GetCurrentCode(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetCurrentName, addr 0x27ce180, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationVersion_GetCurrentName(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetCurrentName_Native, addr 0x27ce1d8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationVersion_GetCurrentName_Native(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestCode, addr 0x27ce254, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_ApplicationVersion_GetLatestCode(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestName, addr 0x27ce2d0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationVersion_GetLatestName(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestName_Native, addr 0x27ce328, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationVersion_GetLatestName_Native(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetReleaseDate, addr 0x27ce3a4, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_ApplicationVersion_GetReleaseDate(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetSize, addr 0x27ce420, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationVersion_GetSize(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetSize_Native, addr 0x27ce478, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationVersion_GetSize_Native(void* obj);

  /// @brief Method ovr_Application_CancelAppDownload, addr 0x27c5b18, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_CancelAppDownload();

  /// @brief Method ovr_Application_CheckAppDownloadProgress, addr 0x27c5b80, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_CheckAppDownloadProgress();

  /// @brief Method ovr_Application_GetID, addr 0x27cda90, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_GetID(void* obj);

  /// @brief Method ovr_Application_GetInstalledApplications, addr 0x27c5be8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_GetInstalledApplications();

  /// @brief Method ovr_Application_GetVersion, addr 0x27c5c50, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_GetVersion();

  /// @brief Method ovr_Application_InstallAppUpdateAndRelaunch, addr 0x27c5cb8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_InstallAppUpdateAndRelaunch(void* deeplink_options);

  /// @brief Method ovr_Application_LaunchOtherApp, addr 0x27c5d34, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_LaunchOtherApp(uint64_t appID, void* deeplink_options);

  /// @brief Method ovr_Application_StartAppDownload, addr 0x27c5db8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_StartAppDownload();

  /// @brief Method ovr_AssetDetailsArray_GetElement, addr 0x27cea10, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetailsArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_AssetDetailsArray_GetSize, addr 0x27cea94, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetailsArray_GetSize(void* obj);

  /// @brief Method ovr_AssetDetails_GetAssetId, addr 0x27ce4f4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetDetails_GetAssetId(void* obj);

  /// @brief Method ovr_AssetDetails_GetAssetType, addr 0x27ce570, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetAssetType(void* obj);

  /// @brief Method ovr_AssetDetails_GetAssetType_Native, addr 0x27ce5c8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetAssetType_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetDownloadStatus, addr 0x27ce644, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetDownloadStatus(void* obj);

  /// @brief Method ovr_AssetDetails_GetDownloadStatus_Native, addr 0x27ce69c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetDownloadStatus_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetFilepath, addr 0x27ce718, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetFilepath(void* obj);

  /// @brief Method ovr_AssetDetails_GetFilepath_Native, addr 0x27ce770, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetIapStatus, addr 0x27ce7ec, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetIapStatus(void* obj);

  /// @brief Method ovr_AssetDetails_GetIapStatus_Native, addr 0x27ce844, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetIapStatus_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetLanguage, addr 0x27ce8c0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetLanguage(void* obj);

  /// @brief Method ovr_AssetDetails_GetMetadata, addr 0x27ce93c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetMetadata(void* obj);

  /// @brief Method ovr_AssetDetails_GetMetadata_Native, addr 0x27ce994, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetMetadata_Native(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetAssetFileId, addr 0x27ceb10, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDeleteResult_GetAssetFileId(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetAssetId, addr 0x27ceb8c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDeleteResult_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetFilepath, addr 0x27cec08, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetFileDeleteResult_GetFilepath(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetFilepath_Native, addr 0x27cec60, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetFileDeleteResult_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetSuccess, addr 0x27cecdc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AssetFileDeleteResult_GetSuccess(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetFileId, addr 0x27ced60, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetFileId(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetId, addr 0x27ceddc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath, addr 0x27cee58, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetFileDownloadCancelResult_GetFilepath(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath_Native, addr 0x27ceeb0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetFileDownloadCancelResult_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetSuccess, addr 0x27cef2c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AssetFileDownloadCancelResult_GetSuccess(void* obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetAssetId, addr 0x27cefb0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadResult_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetFilepath, addr 0x27cf02c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetFileDownloadResult_GetFilepath(void* obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetFilepath_Native, addr 0x27cf084, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetFileDownloadResult_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetAssetFileId, addr 0x27cf100, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetFileId(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetAssetId, addr 0x27cf17c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotal, addr 0x27cf1f8, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_AssetFileDownloadUpdate_GetBytesTotal(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotalLong, addr 0x27cf274, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetBytesTotalLong(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferred, addr 0x27cf2f0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_AssetFileDownloadUpdate_GetBytesTransferred(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferredLong, addr 0x27cf36c, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_AssetFileDownloadUpdate_GetBytesTransferredLong(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetCompleted, addr 0x27cf3e8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AssetFileDownloadUpdate_GetCompleted(void* obj);

  /// @brief Method ovr_AssetFile_Delete, addr 0x27c6008, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_Delete(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DeleteById, addr 0x27c6084, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DeleteById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DeleteByName, addr 0x27c6100, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DeleteByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DeleteByName_Native, addr 0x27c619c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DeleteByName_Native(void* assetFileName);

  /// @brief Method ovr_AssetFile_Download, addr 0x27c6218, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_Download(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadById, addr 0x27c6294, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadByName, addr 0x27c6310, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DownloadByName_Native, addr 0x27c63ac, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadByName_Native(void* assetFileName);

  /// @brief Method ovr_AssetFile_DownloadCancel, addr 0x27c6428, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancel(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadCancelById, addr 0x27c64a4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancelById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadCancelByName, addr 0x27c6520, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancelByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DownloadCancelByName_Native, addr 0x27c65bc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancelByName_Native(void* assetFileName);

  /// @brief Method ovr_AssetFile_GetList, addr 0x27c6638, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_GetList();

  /// @brief Method ovr_AssetFile_Status, addr 0x27c66a0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_Status(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_StatusById, addr 0x27c671c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_StatusById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_StatusByName, addr 0x27c6798, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_StatusByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_StatusByName_Native, addr 0x27c6834, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_StatusByName_Native(void* assetFileName);

  /// @brief Method ovr_AvatarEditorOptions_Create, addr 0x27c0880, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_AvatarEditorOptions_Create();

  /// @brief Method ovr_AvatarEditorOptions_Destroy, addr 0x27c0b1c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AvatarEditorOptions_Destroy(void* handle);

  /// @brief Method ovr_AvatarEditorOptions_SetSourceOverride, addr 0x27c0950, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_AvatarEditorOptions_SetSourceOverride(void* handle, ::StringW value);

  /// @brief Method ovr_AvatarEditorOptions_SetSourceOverride_Native, addr 0x27db87c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AvatarEditorOptions_SetSourceOverride_Native(void* handle, void* value);

  /// @brief Method ovr_AvatarEditorResult_GetRequestSent, addr 0x27cf46c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AvatarEditorResult_GetRequestSent(void* obj);

  /// @brief Method ovr_Avatar_LaunchAvatarEditor, addr 0x27c68b0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Avatar_LaunchAvatarEditor(void* options);

  /// @brief Method ovr_Avatar_UpdateMetaData, addr 0x27c692c, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_Avatar_UpdateMetaData(::StringW avatarMetaData, ::StringW imageFilePath);

  /// @brief Method ovr_Avatar_UpdateMetaData_Native, addr 0x27c69f4, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Avatar_UpdateMetaData_Native(void* avatarMetaData, void* imageFilePath);

  /// @brief Method ovr_BlockedUserArray_GetElement, addr 0x27cf56c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_BlockedUserArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_BlockedUserArray_GetNextUrl, addr 0x27cf5f0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_BlockedUserArray_GetNextUrl(void* obj);

  /// @brief Method ovr_BlockedUserArray_GetNextUrl_Native, addr 0x27cf648, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_BlockedUserArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_BlockedUserArray_GetSize, addr 0x27cf6c4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_BlockedUserArray_GetSize(void* obj);

  /// @brief Method ovr_BlockedUserArray_HasNextPage, addr 0x27cf740, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_BlockedUserArray_HasNextPage(void* obj);

  /// @brief Method ovr_BlockedUser_GetId, addr 0x27cf4f0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_BlockedUser_GetId(void* obj);

  /// @brief Method ovr_ChallengeArray_GetElement, addr 0x27cfdfc, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ChallengeArray_GetNextUrl, addr 0x27cfe80, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ChallengeArray_GetNextUrl_Native, addr 0x27cfed8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeArray_GetPreviousUrl, addr 0x27cff54, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeArray_GetPreviousUrl(void* obj);

  /// @brief Method ovr_ChallengeArray_GetPreviousUrl_Native, addr 0x27cffac, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeArray_GetPreviousUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeArray_GetSize, addr 0x27d0028, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeArray_GetSize(void* obj);

  /// @brief Method ovr_ChallengeArray_GetTotalCount, addr 0x27d00a4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeArray_GetTotalCount(void* obj);

  /// @brief Method ovr_ChallengeArray_HasNextPage, addr 0x27d0120, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeArray_HasNextPage(void* obj);

  /// @brief Method ovr_ChallengeArray_HasPreviousPage, addr 0x27d01a4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeArray_HasPreviousPage(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetElement, addr 0x27d07a0, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntryArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ChallengeEntryArray_GetNextUrl, addr 0x27d0824, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeEntryArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetNextUrl_Native, addr 0x27d087c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntryArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl, addr 0x27d08f8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeEntryArray_GetPreviousUrl(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl_Native, addr 0x27d0950, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntryArray_GetPreviousUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetSize, addr 0x27d09cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntryArray_GetSize(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetTotalCount, addr 0x27d0a48, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeEntryArray_GetTotalCount(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_HasNextPage, addr 0x27d0ac4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeEntryArray_HasNextPage(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_HasPreviousPage, addr 0x27d0b48, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeEntryArray_HasPreviousPage(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetDisplayScore, addr 0x27d0228, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeEntry_GetDisplayScore(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetDisplayScore_Native, addr 0x27d0280, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntry_GetDisplayScore_Native(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraData, addr 0x27d02fc, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ovr_ChallengeEntry_GetExtraData(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraDataLength, addr 0x27d0460, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_ChallengeEntry_GetExtraDataLength(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraData_Native, addr 0x27d03e4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntry_GetExtraData_Native(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetID, addr 0x27d04dc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeEntry_GetID(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetRank, addr 0x27d0558, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_ChallengeEntry_GetRank(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetScore, addr 0x27d05d4, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_ChallengeEntry_GetScore(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetTimestamp, addr 0x27d0650, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_ChallengeEntry_GetTimestamp(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetTimestamp_Native, addr 0x27d06a8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeEntry_GetTimestamp_Native(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetUser, addr 0x27d0724, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntry_GetUser(void* obj);

  /// @brief Method ovr_ChallengeOptions_Create, addr 0x27db900, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeOptions_Create();

  /// @brief Method ovr_ChallengeOptions_Destroy, addr 0x27db968, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_Destroy(void* handle);

  /// @brief Method ovr_ChallengeOptions_SetDescription, addr 0x27db9e4, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetDescription(void* handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetDescription_Native, addr 0x27dba84, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetDescription_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_SetEndDate, addr 0x27dbb08, size 0x6c, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetEndDate(void* handle, ::System::DateTime value);

  /// @brief Method ovr_ChallengeOptions_SetEndDate_Native, addr 0x27dbb74, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetEndDate_Native(void* handle, uint64_t value);

  /// @brief Method ovr_ChallengeOptions_SetIncludeActiveChallenges, addr 0x27dbbf8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetIncludeActiveChallenges(void* handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetIncludeFutureChallenges, addr 0x27dbc7c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetIncludeFutureChallenges(void* handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetIncludePastChallenges, addr 0x27dbd00, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetIncludePastChallenges(void* handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetLeaderboardName, addr 0x27dbd84, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetLeaderboardName(void* handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetLeaderboardName_Native, addr 0x27dbe24, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetLeaderboardName_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_SetStartDate, addr 0x27dbea8, size 0x6c, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetStartDate(void* handle, ::System::DateTime value);

  /// @brief Method ovr_ChallengeOptions_SetStartDate_Native, addr 0x27dbf14, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetStartDate_Native(void* handle, uint64_t value);

  /// @brief Method ovr_ChallengeOptions_SetTitle, addr 0x27dbf98, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetTitle(void* handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetTitle_Native, addr 0x27dc038, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetTitle_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_SetViewerFilter, addr 0x27dc0bc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetViewerFilter(void* handle, ::Oculus::Platform::ChallengeViewerFilter value);

  /// @brief Method ovr_ChallengeOptions_SetVisibility, addr 0x27dc140, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetVisibility(void* handle, ::Oculus::Platform::ChallengeVisibility value);

  /// @brief Method ovr_Challenge_GetCreationType, addr 0x27cf7c4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ChallengeCreationType ovr_Challenge_GetCreationType(void* obj);

  /// @brief Method ovr_Challenge_GetDescription, addr 0x27cf840, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Challenge_GetDescription(void* obj);

  /// @brief Method ovr_Challenge_GetDescription_Native, addr 0x27cf898, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetDescription_Native(void* obj);

  /// @brief Method ovr_Challenge_GetEndDate, addr 0x27cf914, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Challenge_GetEndDate(void* obj);

  /// @brief Method ovr_Challenge_GetEndDate_Native, addr 0x27cf96c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenge_GetEndDate_Native(void* obj);

  /// @brief Method ovr_Challenge_GetID, addr 0x27cf9e8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenge_GetID(void* obj);

  /// @brief Method ovr_Challenge_GetInvitedUsers, addr 0x27cfa64, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetInvitedUsers(void* obj);

  /// @brief Method ovr_Challenge_GetLeaderboard, addr 0x27cfae0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetLeaderboard(void* obj);

  /// @brief Method ovr_Challenge_GetParticipants, addr 0x27cfb5c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetParticipants(void* obj);

  /// @brief Method ovr_Challenge_GetStartDate, addr 0x27cfbd8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Challenge_GetStartDate(void* obj);

  /// @brief Method ovr_Challenge_GetStartDate_Native, addr 0x27cfc30, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenge_GetStartDate_Native(void* obj);

  /// @brief Method ovr_Challenge_GetTitle, addr 0x27cfcac, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Challenge_GetTitle(void* obj);

  /// @brief Method ovr_Challenge_GetTitle_Native, addr 0x27cfd04, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetTitle_Native(void* obj);

  /// @brief Method ovr_Challenge_GetVisibility, addr 0x27cfd80, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ChallengeVisibility ovr_Challenge_GetVisibility(void* obj);

  /// @brief Method ovr_Challenges_Create, addr 0x27c6a78, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Create(::StringW leaderboardName, void* challengeOptions);

  /// @brief Method ovr_Challenges_Create_Native, addr 0x27c6b24, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Create_Native(void* leaderboardName, void* challengeOptions);

  /// @brief Method ovr_Challenges_DeclineInvite, addr 0x27c6ba8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_DeclineInvite(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Delete, addr 0x27c6c24, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Delete(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Get, addr 0x27c6ca0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Get(uint64_t challengeID);

  /// @brief Method ovr_Challenges_GetEntries, addr 0x27c6d1c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetEntries(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Challenges_GetEntriesAfterRank, addr 0x27c6db8, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetEntriesAfterRank(uint64_t challengeID, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Challenges_GetEntriesByIds, addr 0x27c6e4c, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetEntriesByIds(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                        uint32_t userIDLength);

  /// @brief Method ovr_Challenges_GetList, addr 0x27c6f00, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetList(void* challengeOptions, int32_t limit);

  /// @brief Method ovr_Challenges_GetNextChallenges, addr 0x27c6f84, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetNextChallenges(void* handle);

  /// @brief Method ovr_Challenges_GetNextEntries, addr 0x27c7000, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetNextEntries(void* handle);

  /// @brief Method ovr_Challenges_GetPreviousChallenges, addr 0x27c707c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetPreviousChallenges(void* handle);

  /// @brief Method ovr_Challenges_GetPreviousEntries, addr 0x27c70f8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetPreviousEntries(void* handle);

  /// @brief Method ovr_Challenges_Join, addr 0x27c7174, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Join(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Leave, addr 0x27c71f0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Leave(uint64_t challengeID);

  /// @brief Method ovr_Challenges_UpdateInfo, addr 0x27c726c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_UpdateInfo(uint64_t challengeID, void* challengeOptions);

  /// @brief Method ovr_Colocation_GetCurrentMapUuid, addr 0x27c72f0, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_GetCurrentMapUuid();

  /// @brief Method ovr_Colocation_RequestMap, addr 0x27c7358, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_RequestMap(::StringW uuid);

  /// @brief Method ovr_Colocation_RequestMap_Native, addr 0x27c73f4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_RequestMap_Native(void* uuid);

  /// @brief Method ovr_Colocation_ShareMap, addr 0x27c7470, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_ShareMap(::StringW uuid);

  /// @brief Method ovr_Colocation_ShareMap_Native, addr 0x27c750c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_ShareMap_Native(void* uuid);

  /// @brief Method ovr_CrashApplication, addr 0x27c35f4, size 0x64, virtual false, abstract: false, final false
  static inline void ovr_CrashApplication();

  /// @brief Method ovr_DataStore_Contains, addr 0x27d0bcc, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t ovr_DataStore_Contains(void* obj, ::StringW key);

  /// @brief Method ovr_DataStore_Contains_Native, addr 0x27d0c7c, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t ovr_DataStore_Contains_Native(void* obj, void* key);

  /// @brief Method ovr_DataStore_GetKey, addr 0x27c21f4, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ovr_DataStore_GetKey(void* obj, int32_t index);

  /// @brief Method ovr_DataStore_GetKey_Native, addr 0x27d0d00, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_DataStore_GetKey_Native(void* obj, int32_t index);

  /// @brief Method ovr_DataStore_GetNumKeys, addr 0x27c2178, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_DataStore_GetNumKeys(void* obj);

  /// @brief Method ovr_DataStore_GetValue, addr 0x27c225c, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW ovr_DataStore_GetValue(void* obj, ::StringW key);

  /// @brief Method ovr_DataStore_GetValue_Native, addr 0x27d0d84, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_DataStore_GetValue_Native(void* obj, void* key);

  /// @brief Method ovr_DestinationArray_GetElement, addr 0x27d1084, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_DestinationArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_DestinationArray_GetNextUrl, addr 0x27d1108, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_DestinationArray_GetNextUrl(void* obj);

  /// @brief Method ovr_DestinationArray_GetNextUrl_Native, addr 0x27d1160, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_DestinationArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_DestinationArray_GetSize, addr 0x27d11dc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_DestinationArray_GetSize(void* obj);

  /// @brief Method ovr_DestinationArray_HasNextPage, addr 0x27d1258, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_DestinationArray_HasNextPage(void* obj);

  /// @brief Method ovr_Destination_GetApiName, addr 0x27d0e08, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Destination_GetApiName(void* obj);

  /// @brief Method ovr_Destination_GetApiName_Native, addr 0x27d0e60, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Destination_GetApiName_Native(void* obj);

  /// @brief Method ovr_Destination_GetDeeplinkMessage, addr 0x27d0edc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Destination_GetDeeplinkMessage(void* obj);

  /// @brief Method ovr_Destination_GetDeeplinkMessage_Native, addr 0x27d0f34, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Destination_GetDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_Destination_GetDisplayName, addr 0x27d0fb0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Destination_GetDisplayName(void* obj);

  /// @brief Method ovr_Destination_GetDisplayName_Native, addr 0x27d1008, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Destination_GetDisplayName_Native(void* obj);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken, addr 0x27c7588, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken(::StringW challenge_nonce);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken_Native, addr 0x27c7624, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken_Native(void* challenge_nonce);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken, addr 0x27c76a0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken(::StringW challenge_nonce);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native, addr 0x27c773c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native(void* challenge_nonce);

  /// @brief Method ovr_Entitlement_GetIsViewerEntitled, addr 0x27c77b8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Entitlement_GetIsViewerEntitled();

  /// @brief Method ovr_Error_GetCode, addr 0x27d12dc, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ovr_Error_GetCode(void* obj);

  /// @brief Method ovr_Error_GetDisplayableMessage, addr 0x27d1354, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Error_GetDisplayableMessage(void* obj);

  /// @brief Method ovr_Error_GetDisplayableMessage_Native, addr 0x27d13ac, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Error_GetDisplayableMessage_Native(void* obj);

  /// @brief Method ovr_Error_GetHttpCode, addr 0x27d1428, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_Error_GetHttpCode(void* obj);

  /// @brief Method ovr_Error_GetMessage, addr 0x27d14a4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Error_GetMessage(void* obj);

  /// @brief Method ovr_Error_GetMessage_Native, addr 0x27d14fc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Error_GetMessage_Native(void* obj);

  /// @brief Method ovr_FreeMessage, addr 0x27c3038, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_FreeMessage(void* message);

  /// @brief Method ovr_GetLoggedInUserLocale, addr 0x27c2f18, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW ovr_GetLoggedInUserLocale();

  /// @brief Method ovr_GetLoggedInUserLocale_Native, addr 0x27c2f68, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_GetLoggedInUserLocale_Native();

  /// @brief Method ovr_GraphAPI_Get, addr 0x27c7820, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Get(::StringW url);

  /// @brief Method ovr_GraphAPI_Get_Native, addr 0x27c78bc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Get_Native(void* url);

  /// @brief Method ovr_GraphAPI_Post, addr 0x27c7938, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Post(::StringW url);

  /// @brief Method ovr_GraphAPI_Post_Native, addr 0x27c79d4, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Post_Native(void* url);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage, addr 0x27d1578, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetDeeplinkMessage(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native, addr 0x27d15d0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName, addr 0x27d164c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetDestinationApiName(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native, addr 0x27d16a4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId, addr 0x27d1720, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetLobbySessionId(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native, addr 0x27d1778, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId, addr 0x27d17f4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetMatchSessionId(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native, addr 0x27d184c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName, addr 0x27d18c8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetDestinationApiName(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native, addr 0x27d1920, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId, addr 0x27d199c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetLobbySessionId(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native, addr 0x27d19f4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId, addr 0x27d1a70, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetMatchSessionId(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native, addr 0x27d1ac8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceOptions_Create, addr 0x27dc1c4, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceOptions_Create();

  /// @brief Method ovr_GroupPresenceOptions_Destroy, addr 0x27dc22c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_Destroy(void* handle);

  /// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride, addr 0x27dc2a8, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x27dc348, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName, addr 0x27dc3cc, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDestinationApiName(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName_Native, addr 0x27dc46c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDestinationApiName_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresenceOptions_SetIsJoinable, addr 0x27dc4f0, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetIsJoinable(void* handle, bool value);

  /// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId, addr 0x27dc574, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetLobbySessionId(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId_Native, addr 0x27dc614, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetLobbySessionId_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId, addr 0x27dc698, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetMatchSessionId(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId_Native, addr 0x27dc738, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetMatchSessionId_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresence_Clear, addr 0x27c7a4c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_Clear();

  /// @brief Method ovr_GroupPresence_GetInvitableUsers, addr 0x27c7ab4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_GetInvitableUsers(void* options);

  /// @brief Method ovr_GroupPresence_GetSentInvites, addr 0x27c7b30, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_GetSentInvites();

  /// @brief Method ovr_GroupPresence_LaunchInvitePanel, addr 0x27c7b98, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchInvitePanel(void* options);

  /// @brief Method ovr_GroupPresence_LaunchMultiplayerErrorDialog, addr 0x27c7c14, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchMultiplayerErrorDialog(void* options);

  /// @brief Method ovr_GroupPresence_LaunchRejoinDialog, addr 0x27c7c90, size 0xe8, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog(::StringW lobby_session_id, ::StringW match_session_id, ::StringW destination_api_name);

  /// @brief Method ovr_GroupPresence_LaunchRejoinDialog_Native, addr 0x27c7d78, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog_Native(void* lobby_session_id, void* match_session_id, void* destination_api_name);

  /// @brief Method ovr_GroupPresence_LaunchRosterPanel, addr 0x27c7e0c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchRosterPanel(void* options);

  /// @brief Method ovr_GroupPresence_SendInvites, addr 0x27c7e88, size 0x8c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SendInvites(::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs, uint32_t userIDLength);

  /// @brief Method ovr_GroupPresence_Set, addr 0x27c7f14, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_Set(void* groupPresenceOptions);

  /// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride, addr 0x27c7f90, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride(::StringW deeplink_message);

  /// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride_Native, addr 0x27c802c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride_Native(void* deeplink_message);

  /// @brief Method ovr_GroupPresence_SetDestination, addr 0x27c80a8, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDestination(::StringW api_name);

  /// @brief Method ovr_GroupPresence_SetDestination_Native, addr 0x27c8144, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDestination_Native(void* api_name);

  /// @brief Method ovr_GroupPresence_SetIsJoinable, addr 0x27c81c0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetIsJoinable(bool is_joinable);

  /// @brief Method ovr_GroupPresence_SetLobbySession, addr 0x27c823c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetLobbySession(::StringW id);

  /// @brief Method ovr_GroupPresence_SetLobbySession_Native, addr 0x27c82d8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetLobbySession_Native(void* id);

  /// @brief Method ovr_GroupPresence_SetMatchSession, addr 0x27c8354, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetMatchSession(::StringW id);

  /// @brief Method ovr_GroupPresence_SetMatchSession_Native, addr 0x27c83f0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetMatchSession_Native(void* id);

  /// @brief Method ovr_HTTP_Get, addr 0x27c846c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Get(::StringW url);

  /// @brief Method ovr_HTTP_GetToFile, addr 0x27c8584, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_GetToFile(::StringW url, ::StringW diskFile);

  /// @brief Method ovr_HTTP_GetToFile_Native, addr 0x27c864c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_GetToFile_Native(void* url, void* diskFile);

  /// @brief Method ovr_HTTP_GetWithMessageType, addr 0x27c3558, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_GetWithMessageType(::StringW url, int32_t messageType);

  /// @brief Method ovr_HTTP_Get_Native, addr 0x27c8508, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Get_Native(void* url);

  /// @brief Method ovr_HTTP_MultiPartPost, addr 0x27c86d0, size 0x154, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_MultiPartPost(::StringW url, ::StringW filepath_param_name, ::StringW filepath, ::StringW access_token,
                                                ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> post_params);

  /// @brief Method ovr_HTTP_MultiPartPost_Native, addr 0x27c8824, size 0x1d8, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_MultiPartPost_Native(void* url, void* filepath_param_name, void* filepath, void* access_token,
                                                       ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> post_params, void* numItems);

  /// @brief Method ovr_HTTP_Post, addr 0x27c89fc, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Post(::StringW url);

  /// @brief Method ovr_HTTP_Post_Native, addr 0x27c8a98, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Post_Native(void* url);

  /// @brief Method ovr_HTTP_StartTransfer, addr 0x27c3d80, size 0xec, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_StartTransfer(::StringW url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> headers);

  /// @brief Method ovr_HTTP_StartTransfer_Native, addr 0x27c3e6c, size 0x1a4, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_StartTransfer_Native(void* url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> headers, void* numItems);

  /// @brief Method ovr_HTTP_Write, addr 0x27c4010, size 0xa4, virtual false, abstract: false, final false
  static inline bool ovr_HTTP_Write(uint64_t transferId, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, void* length);

  /// @brief Method ovr_HTTP_WriteEOM, addr 0x27c40b4, size 0x78, virtual false, abstract: false, final false
  static inline void ovr_HTTP_WriteEOM(uint64_t transferId);

  /// @brief Method ovr_HttpTransferUpdate_GetBytes, addr 0x27d1b44, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_HttpTransferUpdate_GetBytes(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_GetID, addr 0x27d1bc0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HttpTransferUpdate_GetID(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_GetSize, addr 0x27d1c3c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_HttpTransferUpdate_GetSize(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_IsCompleted, addr 0x27d1cb8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_HttpTransferUpdate_IsCompleted(void* obj);

  /// @brief Method ovr_IAP_ConsumePurchase, addr 0x27c8b14, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_ConsumePurchase(::StringW sku);

  /// @brief Method ovr_IAP_ConsumePurchase_Native, addr 0x27c8bb0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_ConsumePurchase_Native(void* sku);

  /// @brief Method ovr_IAP_GetProductsBySKU, addr 0x27c8c2c, size 0x148, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_GetProductsBySKU(::ArrayW<::StringW, ::Array<::StringW>*> skus, int32_t count);

  /// @brief Method ovr_IAP_GetViewerPurchases, addr 0x27c8d74, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_GetViewerPurchases();

  /// @brief Method ovr_IAP_GetViewerPurchasesDurableCache, addr 0x27c8ddc, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_GetViewerPurchasesDurableCache();

  /// @brief Method ovr_IAP_LaunchCheckoutFlow, addr 0x27c8e44, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_LaunchCheckoutFlow(::StringW sku);

  /// @brief Method ovr_IAP_LaunchCheckoutFlow_Native, addr 0x27c8ee0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_LaunchCheckoutFlow_Native(void* sku);

  /// @brief Method ovr_InstalledApplicationArray_GetElement, addr 0x27d2108, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplicationArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_InstalledApplicationArray_GetSize, addr 0x27d218c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplicationArray_GetSize(void* obj);

  /// @brief Method ovr_InstalledApplication_GetApplicationId, addr 0x27d1d3c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetApplicationId(void* obj);

  /// @brief Method ovr_InstalledApplication_GetApplicationId_Native, addr 0x27d1d94, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplication_GetApplicationId_Native(void* obj);

  /// @brief Method ovr_InstalledApplication_GetPackageName, addr 0x27d1e10, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetPackageName(void* obj);

  /// @brief Method ovr_InstalledApplication_GetPackageName_Native, addr 0x27d1e68, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplication_GetPackageName_Native(void* obj);

  /// @brief Method ovr_InstalledApplication_GetStatus, addr 0x27d1ee4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetStatus(void* obj);

  /// @brief Method ovr_InstalledApplication_GetStatus_Native, addr 0x27d1f3c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplication_GetStatus_Native(void* obj);

  /// @brief Method ovr_InstalledApplication_GetVersionCode, addr 0x27d1fb8, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_InstalledApplication_GetVersionCode(void* obj);

  /// @brief Method ovr_InstalledApplication_GetVersionName, addr 0x27d2034, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetVersionName(void* obj);

  /// @brief Method ovr_InstalledApplication_GetVersionName_Native, addr 0x27d208c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplication_GetVersionName_Native(void* obj);

  /// @brief Method ovr_InviteOptions_AddSuggestedUser, addr 0x27dc8a0, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_InviteOptions_AddSuggestedUser(void* handle, uint64_t value);

  /// @brief Method ovr_InviteOptions_ClearSuggestedUsers, addr 0x27dc924, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_InviteOptions_ClearSuggestedUsers(void* handle);

  /// @brief Method ovr_InviteOptions_Create, addr 0x27dc7bc, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_InviteOptions_Create();

  /// @brief Method ovr_InviteOptions_Destroy, addr 0x27dc824, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_InviteOptions_Destroy(void* handle);

  /// @brief Method ovr_InvitePanelResultInfo_GetInvitesSent, addr 0x27d2208, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_InvitePanelResultInfo_GetInvitesSent(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetEnglishName, addr 0x27d228c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LanguagePackInfo_GetEnglishName(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetEnglishName_Native, addr 0x27d22e4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LanguagePackInfo_GetEnglishName_Native(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetNativeName, addr 0x27d2360, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LanguagePackInfo_GetNativeName(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetNativeName_Native, addr 0x27d23b8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LanguagePackInfo_GetNativeName_Native(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetTag, addr 0x27d2434, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LanguagePackInfo_GetTag(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetTag_Native, addr 0x27d248c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LanguagePackInfo_GetTag_Native(void* obj);

  /// @brief Method ovr_LanguagePack_GetCurrent, addr 0x27c8f5c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_LanguagePack_GetCurrent();

  /// @brief Method ovr_LanguagePack_SetCurrent, addr 0x27c8fc4, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LanguagePack_SetCurrent(::StringW tag);

  /// @brief Method ovr_LanguagePack_SetCurrent_Native, addr 0x27c9060, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LanguagePack_SetCurrent_Native(void* tag);

  /// @brief Method ovr_LaunchBlockFlowResult_GetDidBlock, addr 0x27d2508, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchBlockFlowResult_GetDidBlock(void* obj);

  /// @brief Method ovr_LaunchBlockFlowResult_GetDidCancel, addr 0x27d258c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchBlockFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDeeplinkMessage, addr 0x27d2610, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetDeeplinkMessage(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDeeplinkMessage_Native, addr 0x27d2668, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDestinationApiName, addr 0x27d26e4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetDestinationApiName(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDestinationApiName_Native, addr 0x27d273c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetDestinationApiName_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchSource, addr 0x27d27b8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetLaunchSource(void* obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchSource_Native, addr 0x27d2810, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetLaunchSource_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchType, addr 0x27d288c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::LaunchType ovr_LaunchDetails_GetLaunchType(void* obj);

  /// @brief Method ovr_LaunchDetails_GetTrackingID, addr 0x27d2908, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetTrackingID(void* obj);

  /// @brief Method ovr_LaunchDetails_GetTrackingID_Native, addr 0x27d2960, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetTrackingID_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetUsers, addr 0x27d29dc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetUsers(void* obj);

  /// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidCancel, addr 0x27d2a58, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchFriendRequestFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidSendRequest, addr 0x27d2adc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchFriendRequestFlowResult_GetDidSendRequest(void* obj);

  /// @brief Method ovr_LaunchInvitePanelFlowResult_GetInvitedUsers, addr 0x27d2b60, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchInvitePanelFlowResult_GetInvitedUsers(void* obj);

  /// @brief Method ovr_LaunchReportFlowResult_GetDidCancel, addr 0x27d2bdc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchReportFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchReportFlowResult_GetUserReportId, addr 0x27d2c60, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LaunchReportFlowResult_GetUserReportId(void* obj);

  /// @brief Method ovr_LaunchUnblockFlowResult_GetDidCancel, addr 0x27d2cdc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchUnblockFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchUnblockFlowResult_GetDidUnblock, addr 0x27d2d60, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchUnblockFlowResult_GetDidUnblock(void* obj);

  /// @brief Method ovr_LeaderboardArray_GetElement, addr 0x27d2fb0, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_LeaderboardArray_GetNextUrl, addr 0x27d3034, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardArray_GetNextUrl(void* obj);

  /// @brief Method ovr_LeaderboardArray_GetNextUrl_Native, addr 0x27d308c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_LeaderboardArray_GetSize, addr 0x27d3108, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardArray_GetSize(void* obj);

  /// @brief Method ovr_LeaderboardArray_HasNextPage, addr 0x27d3184, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardArray_HasNextPage(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetElement, addr 0x27d3704, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntryArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_LeaderboardEntryArray_GetNextUrl, addr 0x27d3788, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardEntryArray_GetNextUrl(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetNextUrl_Native, addr 0x27d37e0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntryArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl, addr 0x27d385c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardEntryArray_GetPreviousUrl(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl_Native, addr 0x27d38b4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntryArray_GetPreviousUrl_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetSize, addr 0x27d3930, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntryArray_GetSize(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetTotalCount, addr 0x27d39ac, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardEntryArray_GetTotalCount(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_HasNextPage, addr 0x27d3a28, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardEntryArray_HasNextPage(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_HasPreviousPage, addr 0x27d3aac, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardEntryArray_HasPreviousPage(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetDisplayScore, addr 0x27d3208, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardEntry_GetDisplayScore(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetDisplayScore_Native, addr 0x27d3260, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntry_GetDisplayScore_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraData, addr 0x27d32dc, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ovr_LeaderboardEntry_GetExtraData(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraDataLength, addr 0x27d0368, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_LeaderboardEntry_GetExtraDataLength(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraData_Native, addr 0x27d3348, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntry_GetExtraData_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetID, addr 0x27d33c4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardEntry_GetID(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetRank, addr 0x27d3440, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LeaderboardEntry_GetRank(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetScore, addr 0x27d34bc, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_LeaderboardEntry_GetScore(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetSupplementaryMetric, addr 0x27d3538, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntry_GetSupplementaryMetric(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetTimestamp, addr 0x27d35b4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_LeaderboardEntry_GetTimestamp(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetTimestamp_Native, addr 0x27d360c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardEntry_GetTimestamp_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetUser, addr 0x27d3688, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntry_GetUser(void* obj);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetDidUpdate, addr 0x27d3b30, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardUpdateStatus_GetDidUpdate(void* obj);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId, addr 0x27d3bb4, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId(void* obj, uint32_t index);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize, addr 0x27d3c38, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize(void* obj);

  /// @brief Method ovr_Leaderboard_Get, addr 0x27c90dc, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_Get(::StringW leaderboardName);

  /// @brief Method ovr_Leaderboard_GetApiName, addr 0x27d2de4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Leaderboard_GetApiName(void* obj);

  /// @brief Method ovr_Leaderboard_GetApiName_Native, addr 0x27d2e3c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Leaderboard_GetApiName_Native(void* obj);

  /// @brief Method ovr_Leaderboard_GetDestination, addr 0x27d2eb8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Leaderboard_GetDestination(void* obj);

  /// @brief Method ovr_Leaderboard_GetEntries, addr 0x27c91f4, size 0xc4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntries(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Leaderboard_GetEntriesAfterRank, addr 0x27c9354, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank(::StringW leaderboardName, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Leaderboard_GetEntriesAfterRank_Native, addr 0x27c9408, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank_Native(void* leaderboardName, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Leaderboard_GetEntriesByIds, addr 0x27c949c, size 0xcc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesByIds(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                         uint32_t userIDLength);

  /// @brief Method ovr_Leaderboard_GetEntriesByIds_Native, addr 0x27c9568, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesByIds_Native(void* leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                                uint32_t userIDLength);

  /// @brief Method ovr_Leaderboard_GetEntries_Native, addr 0x27c92b8, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntries_Native(void* leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Leaderboard_GetID, addr 0x27d2f34, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetID(void* obj);

  /// @brief Method ovr_Leaderboard_GetNextEntries, addr 0x27c961c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetNextEntries(void* handle);

  /// @brief Method ovr_Leaderboard_GetPreviousEntries, addr 0x27c9698, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetPreviousEntries(void* handle);

  /// @brief Method ovr_Leaderboard_Get_Native, addr 0x27c9178, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_Get_Native(void* leaderboardName);

  /// @brief Method ovr_Leaderboard_WriteEntry, addr 0x27c9714, size 0xcc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntry(::StringW leaderboardName, int64_t score, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData, uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric, addr 0x27c9894, size 0xdc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric(::StringW leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData,
                                                                           uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native, addr 0x27c9970, size 0xbc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native(void* leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData,
                                                                                  uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntry_Native, addr 0x27c97e0, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntry_Native(void* leaderboardName, int64_t score, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData, uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_LinkedAccountArray_GetElement, addr 0x27d3ed8, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_LinkedAccountArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_LinkedAccountArray_GetSize, addr 0x27d3f5c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LinkedAccountArray_GetSize(void* obj);

  /// @brief Method ovr_LinkedAccount_GetAccessToken, addr 0x27d3cb4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LinkedAccount_GetAccessToken(void* obj);

  /// @brief Method ovr_LinkedAccount_GetAccessToken_Native, addr 0x27d3d0c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LinkedAccount_GetAccessToken_Native(void* obj);

  /// @brief Method ovr_LinkedAccount_GetServiceProvider, addr 0x27d3d88, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ServiceProvider ovr_LinkedAccount_GetServiceProvider(void* obj);

  /// @brief Method ovr_LinkedAccount_GetUserId, addr 0x27d3e04, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LinkedAccount_GetUserId(void* obj);

  /// @brief Method ovr_LinkedAccount_GetUserId_Native, addr 0x27d3e5c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LinkedAccount_GetUserId_Native(void* obj);

  /// @brief Method ovr_LivestreamingApplicationStatus_GetStreamingEnabled, addr 0x27d3fd8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingApplicationStatus_GetStreamingEnabled(void* obj);

  /// @brief Method ovr_LivestreamingStartResult_GetStreamingResult, addr 0x27d405c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::LivestreamingStartStatus ovr_LivestreamingStartResult_GetStreamingResult(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetCommentsVisible, addr 0x27d40d8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetCommentsVisible(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetIsPaused, addr 0x27d415c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetIsPaused(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetLivestreamingEnabled, addr 0x27d41e0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetLivestreamingEnabled(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetLivestreamingType, addr 0x27d4264, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LivestreamingStatus_GetLivestreamingType(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetMicEnabled, addr 0x27d42e0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetMicEnabled(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetCommentCount, addr 0x27d4364, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LivestreamingVideoStats_GetCommentCount(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetReactionCount, addr 0x27d43e0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LivestreamingVideoStats_GetReactionCount(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetTotalViews, addr 0x27d445c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LivestreamingVideoStats_GetTotalViews(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetTotalViews_Native, addr 0x27d44b4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LivestreamingVideoStats_GetTotalViews_Native(void* obj);

  /// @brief Method ovr_Livestreaming_IsAllowedForApplication, addr 0x27c9a2c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_IsAllowedForApplication(::StringW packageName);

  /// @brief Method ovr_Livestreaming_IsAllowedForApplication_Native, addr 0x27c9ac8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_IsAllowedForApplication_Native(void* packageName);

  /// @brief Method ovr_Livestreaming_StartPartyStream, addr 0x27c9b44, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StartPartyStream();

  /// @brief Method ovr_Livestreaming_StartStream, addr 0x27c9bac, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StartStream(::Oculus::Platform::LivestreamingAudience audience, ::Oculus::Platform::LivestreamingMicrophoneStatus micStatus);

  /// @brief Method ovr_Livestreaming_StopPartyStream, addr 0x27c9c30, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StopPartyStream();

  /// @brief Method ovr_Livestreaming_StopStream, addr 0x27c9c98, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StopStream();

  /// @brief Method ovr_Livestreaming_UpdateMicStatus, addr 0x27c9d00, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_UpdateMicStatus(::Oculus::Platform::LivestreamingMicrophoneStatus micStatus);

  /// @brief Method ovr_Log_NewEvent, addr 0x27c3b5c, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_Log_NewEvent(void* eventName, ::ArrayW<void*, ::Array<void*>*> values, void* length);

  /// @brief Method ovr_Media_ShareToFacebook, addr 0x27c9d7c, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_Media_ShareToFacebook(::StringW postTextSuggestion, ::StringW filePath, ::Oculus::Platform::MediaContentType contentType);

  /// @brief Method ovr_Media_ShareToFacebook_Native, addr 0x27c9e4c, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Media_ShareToFacebook_Native(void* postTextSuggestion, void* filePath, ::Oculus::Platform::MediaContentType contentType);

  /// @brief Method ovr_Message_GetAbuseReportRecording, addr 0x27d4530, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAbuseReportRecording(void* obj);

  /// @brief Method ovr_Message_GetAchievementDefinitionArray, addr 0x27d45ac, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAchievementDefinitionArray(void* obj);

  /// @brief Method ovr_Message_GetAchievementProgressArray, addr 0x27d4628, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAchievementProgressArray(void* obj);

  /// @brief Method ovr_Message_GetAchievementUpdate, addr 0x27d46a4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAchievementUpdate(void* obj);

  /// @brief Method ovr_Message_GetAppDownloadProgressResult, addr 0x27d4720, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAppDownloadProgressResult(void* obj);

  /// @brief Method ovr_Message_GetAppDownloadResult, addr 0x27d479c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAppDownloadResult(void* obj);

  /// @brief Method ovr_Message_GetApplicationInviteArray, addr 0x27d4818, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetApplicationInviteArray(void* obj);

  /// @brief Method ovr_Message_GetApplicationVersion, addr 0x27d4894, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetApplicationVersion(void* obj);

  /// @brief Method ovr_Message_GetAssetDetails, addr 0x27d4910, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetDetails(void* obj);

  /// @brief Method ovr_Message_GetAssetDetailsArray, addr 0x27d498c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetDetailsArray(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDeleteResult, addr 0x27d4a08, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetFileDeleteResult(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadCancelResult, addr 0x27d4a84, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetFileDownloadCancelResult(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadResult, addr 0x27d4b00, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetFileDownloadResult(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadUpdate, addr 0x27d4b7c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetFileDownloadUpdate(void* obj);

  /// @brief Method ovr_Message_GetAvatarEditorResult, addr 0x27d4bf8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAvatarEditorResult(void* obj);

  /// @brief Method ovr_Message_GetBlockedUserArray, addr 0x27d4c74, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetBlockedUserArray(void* obj);

  /// @brief Method ovr_Message_GetChallenge, addr 0x27d4cf0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetChallenge(void* obj);

  /// @brief Method ovr_Message_GetChallengeArray, addr 0x27d4d6c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetChallengeArray(void* obj);

  /// @brief Method ovr_Message_GetChallengeEntryArray, addr 0x27d4de8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetChallengeEntryArray(void* obj);

  /// @brief Method ovr_Message_GetDataStore, addr 0x27d4e64, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetDataStore(void* obj);

  /// @brief Method ovr_Message_GetDestinationArray, addr 0x27d4ee0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetDestinationArray(void* obj);

  /// @brief Method ovr_Message_GetError, addr 0x27d4f5c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetError(void* obj);

  /// @brief Method ovr_Message_GetGroupPresenceJoinIntent, addr 0x27d4fd8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetGroupPresenceJoinIntent(void* obj);

  /// @brief Method ovr_Message_GetGroupPresenceLeaveIntent, addr 0x27d5054, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetGroupPresenceLeaveIntent(void* obj);

  /// @brief Method ovr_Message_GetHttpTransferUpdate, addr 0x27d50d0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetHttpTransferUpdate(void* obj);

  /// @brief Method ovr_Message_GetInstalledApplicationArray, addr 0x27d514c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetInstalledApplicationArray(void* obj);

  /// @brief Method ovr_Message_GetInvitePanelResultInfo, addr 0x27d51c8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetInvitePanelResultInfo(void* obj);

  /// @brief Method ovr_Message_GetLaunchBlockFlowResult, addr 0x27d5244, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchBlockFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchFriendRequestFlowResult, addr 0x27d52c0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchFriendRequestFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchInvitePanelFlowResult, addr 0x27d533c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchInvitePanelFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchReportFlowResult, addr 0x27d53b8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchReportFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchUnblockFlowResult, addr 0x27d5434, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchUnblockFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLeaderboardArray, addr 0x27d54b0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLeaderboardArray(void* obj);

  /// @brief Method ovr_Message_GetLeaderboardEntryArray, addr 0x27d552c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLeaderboardEntryArray(void* obj);

  /// @brief Method ovr_Message_GetLeaderboardUpdateStatus, addr 0x27d55a8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLeaderboardUpdateStatus(void* obj);

  /// @brief Method ovr_Message_GetLinkedAccountArray, addr 0x27d5624, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLinkedAccountArray(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingApplicationStatus, addr 0x27d56a0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLivestreamingApplicationStatus(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingStartResult, addr 0x27d571c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLivestreamingStartResult(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingStatus, addr 0x27d5798, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLivestreamingStatus(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingVideoStats, addr 0x27d5814, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLivestreamingVideoStats(void* obj);

  /// @brief Method ovr_Message_GetMicrophoneAvailabilityState, addr 0x27d5890, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetMicrophoneAvailabilityState(void* obj);

  /// @brief Method ovr_Message_GetNativeMessage, addr 0x27d590c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNativeMessage(void* obj);

  /// @brief Method ovr_Message_GetNetSyncConnection, addr 0x27d5988, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncConnection(void* obj);

  /// @brief Method ovr_Message_GetNetSyncSessionArray, addr 0x27d5a04, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncSessionArray(void* obj);

  /// @brief Method ovr_Message_GetNetSyncSessionsChangedNotification, addr 0x27d5a80, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncSessionsChangedNotification(void* obj);

  /// @brief Method ovr_Message_GetNetSyncSetSessionPropertyResult, addr 0x27d5afc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncSetSessionPropertyResult(void* obj);

  /// @brief Method ovr_Message_GetNetSyncVoipAttenuationValueArray, addr 0x27d5b78, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncVoipAttenuationValueArray(void* obj);

  /// @brief Method ovr_Message_GetOrgScopedID, addr 0x27d5bf4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetOrgScopedID(void* obj);

  /// @brief Method ovr_Message_GetParty, addr 0x27d5c70, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetParty(void* obj);

  /// @brief Method ovr_Message_GetPartyID, addr 0x27d5cec, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPartyID(void* obj);

  /// @brief Method ovr_Message_GetPartyUpdateNotification, addr 0x27d5d68, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPartyUpdateNotification(void* obj);

  /// @brief Method ovr_Message_GetPidArray, addr 0x27d5de4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPidArray(void* obj);

  /// @brief Method ovr_Message_GetPlatformInitialize, addr 0x27d5e60, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPlatformInitialize(void* obj);

  /// @brief Method ovr_Message_GetProductArray, addr 0x27d5edc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetProductArray(void* obj);

  /// @brief Method ovr_Message_GetPurchase, addr 0x27d5f58, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPurchase(void* obj);

  /// @brief Method ovr_Message_GetPurchaseArray, addr 0x27d5fd4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPurchaseArray(void* obj);

  /// @brief Method ovr_Message_GetRejoinDialogResult, addr 0x27d6050, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetRejoinDialogResult(void* obj);

  /// @brief Method ovr_Message_GetRequestID, addr 0x27d60cc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Message_GetRequestID(void* obj);

  /// @brief Method ovr_Message_GetSdkAccountArray, addr 0x27d6148, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetSdkAccountArray(void* obj);

  /// @brief Method ovr_Message_GetSendInvitesResult, addr 0x27d61c4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetSendInvitesResult(void* obj);

  /// @brief Method ovr_Message_GetShareMediaResult, addr 0x27d6240, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetShareMediaResult(void* obj);

  /// @brief Method ovr_Message_GetString, addr 0x27d62bc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Message_GetString(void* obj);

  /// @brief Method ovr_Message_GetStringForJavascript, addr 0x27c412c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Message_GetStringForJavascript(void* message);

  /// @brief Method ovr_Message_GetStringForJavascript_Native, addr 0x27c4184, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetStringForJavascript_Native(void* message);

  /// @brief Method ovr_Message_GetString_Native, addr 0x27d6314, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetString_Native(void* obj);

  /// @brief Method ovr_Message_GetSystemVoipState, addr 0x27d6390, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetSystemVoipState(void* obj);

  /// @brief Method ovr_Message_GetType, addr 0x27d640c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::__Message__MessageType ovr_Message_GetType(void* obj);

  /// @brief Method ovr_Message_GetUser, addr 0x27d6488, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUser(void* obj);

  /// @brief Method ovr_Message_GetUserAccountAgeCategory, addr 0x27d6504, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserAccountAgeCategory(void* obj);

  /// @brief Method ovr_Message_GetUserArray, addr 0x27d6580, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserArray(void* obj);

  /// @brief Method ovr_Message_GetUserCapabilityArray, addr 0x27d65fc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserCapabilityArray(void* obj);

  /// @brief Method ovr_Message_GetUserDataStoreUpdateResponse, addr 0x27d6678, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserDataStoreUpdateResponse(void* obj);

  /// @brief Method ovr_Message_GetUserProof, addr 0x27d66f4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserProof(void* obj);

  /// @brief Method ovr_Message_GetUserReportID, addr 0x27d6770, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserReportID(void* obj);

  /// @brief Method ovr_Message_IsError, addr 0x27d67ec, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_Message_IsError(void* obj);

  /// @brief Method ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable, addr 0x27d6cb8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(void* obj);

  /// @brief Method ovr_Microphone_Create, addr 0x27c3318, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_Create();

  /// @brief Method ovr_Microphone_Destroy, addr 0x27c3380, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Microphone_Destroy(void* obj);

  /// @brief Method ovr_Microphone_GetNumSamplesAvailable, addr 0x27d6870, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_GetNumSamplesAvailable(void* obj);

  /// @brief Method ovr_Microphone_GetOutputBufferMaxSize, addr 0x27d68ec, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_GetOutputBufferMaxSize(void* obj);

  /// @brief Method ovr_Microphone_GetPCM, addr 0x27d6968, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_GetPCM(void* obj, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Microphone_GetPCMFloat, addr 0x27d6a04, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_GetPCMFloat(void* obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Microphone_ReadData, addr 0x27d6aa0, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_ReadData(void* obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferSize);

  /// @brief Method ovr_Microphone_SetAcceptableRecordingDelayHint, addr 0x27d6b3c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_Microphone_SetAcceptableRecordingDelayHint(void* obj, void* delayMs);

  /// @brief Method ovr_Microphone_Start, addr 0x27d6bc0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Microphone_Start(void* obj);

  /// @brief Method ovr_Microphone_Stop, addr 0x27d6c3c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Microphone_Stop(void* obj);

  /// @brief Method ovr_MultiplayerErrorOptions_Create, addr 0x27dc9a0, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_MultiplayerErrorOptions_Create();

  /// @brief Method ovr_MultiplayerErrorOptions_Destroy, addr 0x27dca08, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_MultiplayerErrorOptions_Destroy(void* handle);

  /// @brief Method ovr_MultiplayerErrorOptions_SetErrorKey, addr 0x27dca84, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_MultiplayerErrorOptions_SetErrorKey(void* handle, ::Oculus::Platform::MultiplayerErrorErrorKey value);

  /// @brief Method ovr_NetSyncConnection_GetConnectionId, addr 0x27d6d3c, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_NetSyncConnection_GetConnectionId(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetDisconnectReason, addr 0x27d6db8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::NetSyncDisconnectReason ovr_NetSyncConnection_GetDisconnectReason(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetSessionId, addr 0x27d6e34, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSyncConnection_GetSessionId(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetStatus, addr 0x27d6eb0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::NetSyncConnectionStatus ovr_NetSyncConnection_GetStatus(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetZoneId, addr 0x27d6f2c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_NetSyncConnection_GetZoneId(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetZoneId_Native, addr 0x27d6f84, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncConnection_GetZoneId_Native(void* obj);

  /// @brief Method ovr_NetSyncOptions_Create, addr 0x27dcb08, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncOptions_Create();

  /// @brief Method ovr_NetSyncOptions_Destroy, addr 0x27dcb70, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_Destroy(void* handle);

  /// @brief Method ovr_NetSyncOptions_SetVoipGroup, addr 0x27dcbec, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetVoipGroup(void* handle, ::StringW value);

  /// @brief Method ovr_NetSyncOptions_SetVoipGroup_Native, addr 0x27dcc8c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetVoipGroup_Native(void* handle, void* value);

  /// @brief Method ovr_NetSyncOptions_SetVoipStreamDefault, addr 0x27dcd10, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetVoipStreamDefault(void* handle, ::Oculus::Platform::NetSyncVoipStreamMode value);

  /// @brief Method ovr_NetSyncOptions_SetZoneId, addr 0x27dcd94, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetZoneId(void* handle, ::StringW value);

  /// @brief Method ovr_NetSyncOptions_SetZoneId_Native, addr 0x27dce34, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetZoneId_Native(void* handle, void* value);

  /// @brief Method ovr_NetSyncSessionArray_GetElement, addr 0x27d72cc, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSessionArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_NetSyncSessionArray_GetSize, addr 0x27d7350, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSessionArray_GetSize(void* obj);

  /// @brief Method ovr_NetSyncSession_GetConnectionId, addr 0x27d7000, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_NetSyncSession_GetConnectionId(void* obj);

  /// @brief Method ovr_NetSyncSession_GetMuted, addr 0x27d707c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_NetSyncSession_GetMuted(void* obj);

  /// @brief Method ovr_NetSyncSession_GetSessionId, addr 0x27d7100, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSyncSession_GetSessionId(void* obj);

  /// @brief Method ovr_NetSyncSession_GetUserId, addr 0x27d717c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSyncSession_GetUserId(void* obj);

  /// @brief Method ovr_NetSyncSession_GetVoipGroup, addr 0x27d71f8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_NetSyncSession_GetVoipGroup(void* obj);

  /// @brief Method ovr_NetSyncSession_GetVoipGroup_Native, addr 0x27d7250, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSession_GetVoipGroup_Native(void* obj);

  /// @brief Method ovr_NetSyncSessionsChangedNotification_GetConnectionId, addr 0x27d73cc, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_NetSyncSessionsChangedNotification_GetConnectionId(void* obj);

  /// @brief Method ovr_NetSyncSessionsChangedNotification_GetSessions, addr 0x27d7448, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSessionsChangedNotification_GetSessions(void* obj);

  /// @brief Method ovr_NetSyncSetSessionPropertyResult_GetSession, addr 0x27d74c4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSetSessionPropertyResult_GetSession(void* obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetElement, addr 0x27d7638, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncVoipAttenuationValueArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetSize, addr 0x27d76bc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncVoipAttenuationValueArray_GetSize(void* obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValue_GetDecibels, addr 0x27d7540, size 0x7c, virtual false, abstract: false, final false
  static inline float_t ovr_NetSyncVoipAttenuationValue_GetDecibels(void* obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValue_GetDistance, addr 0x27d75bc, size 0x7c, virtual false, abstract: false, final false
  static inline float_t ovr_NetSyncVoipAttenuationValue_GetDistance(void* obj);

  /// @brief Method ovr_NetSync_Connect, addr 0x27c9ee0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_Connect(void* connect_options);

  /// @brief Method ovr_NetSync_Disconnect, addr 0x27c9f5c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_Disconnect(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetAmbisonicFloatPCM, addr 0x27c4200, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetAmbisonicFloatPCM(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInt16PCM, addr 0x27c429c, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetAmbisonicInt16PCM(int64_t connection_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInterleavedFloatPCM, addr 0x27c4338, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetAmbisonicInterleavedFloatPCM(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInterleavedInt16PCM, addr 0x27c43d4, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetAmbisonicInterleavedInt16PCM(int64_t connection_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetListenerPosition, addr 0x27c4470, size 0x9c, virtual false, abstract: false, final false
  static inline bool ovr_NetSync_GetListenerPosition(int64_t connection_id, uint64_t sessionId, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3> position);

  /// @brief Method ovr_NetSync_GetMonostreamFloatPCM, addr 0x27c450c, size 0xa4, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetMonostreamFloatPCM(int64_t connection_id, uint64_t sessionId, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetMonostreamInt16PCM, addr 0x27c45b0, size 0xa4, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetMonostreamInt16PCM(int64_t connection_id, uint64_t session_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetPcmBufferMaxSamples, addr 0x27c4654, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetPcmBufferMaxSamples();

  /// @brief Method ovr_NetSync_GetSessions, addr 0x27c9fd8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_GetSessions(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetVoipAmplitude, addr 0x27c46bc, size 0x9c, virtual false, abstract: false, final false
  static inline bool ovr_NetSync_GetVoipAmplitude(int64_t connection_id, uint64_t sessionId, ByRef<float_t> amplitude);

  /// @brief Method ovr_NetSync_GetVoipAttenuation, addr 0x27ca054, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_GetVoipAttenuation(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetVoipAttenuationDefault, addr 0x27ca0d0, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_GetVoipAttenuationDefault();

  /// @brief Method ovr_NetSync_SetListenerPosition, addr 0x27c4758, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSync_SetListenerPosition(int64_t connection_id, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3> position);

  /// @brief Method ovr_NetSync_SetVoipAttenuation, addr 0x27ca138, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuation(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels, void* count);

  /// @brief Method ovr_NetSync_SetVoipAttenuationModel, addr 0x27ca1e4, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuationModel(int64_t connection_id, ::StringW name, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels,
                                                             void* count);

  /// @brief Method ovr_NetSync_SetVoipAttenuationModel_Native, addr 0x27ca2b4, size 0xbc, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuationModel_Native(int64_t connection_id, void* name, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels,
                                                                    void* count);

  /// @brief Method ovr_NetSync_SetVoipChannelCfg, addr 0x27ca370, size 0xe0, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipChannelCfg(int64_t connection_id, ::StringW channel_name, ::StringW attnmodel, bool disable_spatialization);

  /// @brief Method ovr_NetSync_SetVoipChannelCfg_Native, addr 0x27ca450, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipChannelCfg_Native(int64_t connection_id, void* channel_name, void* attnmodel, bool disable_spatialization);

  /// @brief Method ovr_NetSync_SetVoipGroup, addr 0x27ca4ec, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipGroup(int64_t connection_id, ::StringW group_id);

  /// @brief Method ovr_NetSync_SetVoipGroup_Native, addr 0x27ca59c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipGroup_Native(int64_t connection_id, void* group_id);

  /// @brief Method ovr_NetSync_SetVoipListentoChannels, addr 0x27ca620, size 0x160, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipListentoChannels(int64_t connection_id, ::ArrayW<::StringW, ::Array<::StringW>*> listento_channels, void* count);

  /// @brief Method ovr_NetSync_SetVoipMicSource, addr 0x27ca780, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipMicSource(int64_t connection_id, ::Oculus::Platform::NetSyncVoipMicSource mic_source);

  /// @brief Method ovr_NetSync_SetVoipSessionMuted, addr 0x27ca804, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipSessionMuted(int64_t connection_id, uint64_t session_id, bool muted);

  /// @brief Method ovr_NetSync_SetVoipSpeaktoChannels, addr 0x27ca898, size 0x160, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipSpeaktoChannels(int64_t connection_id, ::ArrayW<::StringW, ::Array<::StringW>*> speakto_channels, void* count);

  /// @brief Method ovr_NetSync_SetVoipStreamMode, addr 0x27ca9f8, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipStreamMode(int64_t connection_id, uint64_t sessionId, ::Oculus::Platform::NetSyncVoipStreamMode streamMode);

  /// @brief Method ovr_Notification_MarkAsRead, addr 0x27caa8c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Notification_MarkAsRead(uint64_t notificationID);

  /// @brief Method ovr_OrgScopedID_GetID, addr 0x27d7738, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_OrgScopedID_GetID(void* obj);

  /// @brief Method ovr_Packet_Free, addr 0x27d77b4, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Packet_Free(void* obj);

  /// @brief Method ovr_Packet_GetBytes, addr 0x27d7830, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Packet_GetBytes(void* obj);

  /// @brief Method ovr_Packet_GetSenderID, addr 0x27d78ac, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Packet_GetSenderID(void* obj);

  /// @brief Method ovr_Packet_GetSize, addr 0x27d7928, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Packet_GetSize(void* obj);

  /// @brief Method ovr_PartyID_GetID, addr 0x27d7b94, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyID_GetID(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetAction, addr 0x27d7c0c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::PartyUpdateAction ovr_PartyUpdateNotification_GetAction(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetPartyId, addr 0x27d7c88, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyUpdateNotification_GetPartyId(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetSenderId, addr 0x27d7d04, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyUpdateNotification_GetSenderId(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp, addr 0x27d7d80, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUpdateTimestamp(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp_Native, addr 0x27d7dd8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PartyUpdateNotification_GetUpdateTimestamp_Native(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserAlias, addr 0x27d7e54, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUserAlias(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserAlias_Native, addr 0x27d7eac, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PartyUpdateNotification_GetUserAlias_Native(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserId, addr 0x27d7f28, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyUpdateNotification_GetUserId(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserName, addr 0x27d7fa4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUserName(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserName_Native, addr 0x27d7ffc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PartyUpdateNotification_GetUserName_Native(void* obj);

  /// @brief Method ovr_Party_Create, addr 0x27cab08, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Create();

  /// @brief Method ovr_Party_GatherInApplication, addr 0x27cab70, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GatherInApplication(uint64_t partyID, uint64_t appID);

  /// @brief Method ovr_Party_Get, addr 0x27cabf4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Get(uint64_t partyID);

  /// @brief Method ovr_Party_GetCurrent, addr 0x27cac70, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GetCurrent();

  /// @brief Method ovr_Party_GetCurrentForUser, addr 0x27cacd8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GetCurrentForUser(uint64_t userID);

  /// @brief Method ovr_Party_GetID, addr 0x27d79a4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GetID(void* obj);

  /// @brief Method ovr_Party_GetInvitedUsers, addr 0x27d7a20, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Party_GetInvitedUsers(void* obj);

  /// @brief Method ovr_Party_GetLeader, addr 0x27d7a9c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Party_GetLeader(void* obj);

  /// @brief Method ovr_Party_GetUsers, addr 0x27d7b18, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Party_GetUsers(void* obj);

  /// @brief Method ovr_Party_Invite, addr 0x27cad54, size 0x80, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Invite(uint64_t partyID, uint64_t userID);

  /// @brief Method ovr_Party_Join, addr 0x27cadd4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Join(uint64_t partyID);

  /// @brief Method ovr_Party_Leave, addr 0x27cae50, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Leave(uint64_t partyID);

  /// @brief Method ovr_Party_PluginGetSharedMemHandle, addr 0x27c47dc, size 0x68, virtual false, abstract: false, final false
  static inline int32_t ovr_Party_PluginGetSharedMemHandle();

  /// @brief Method ovr_Party_PluginGetVoipMicrophoneMuted, addr 0x27c4844, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState ovr_Party_PluginGetVoipMicrophoneMuted();

  /// @brief Method ovr_Party_PluginGetVoipPassthrough, addr 0x27c48ac, size 0x70, virtual false, abstract: false, final false
  static inline bool ovr_Party_PluginGetVoipPassthrough();

  /// @brief Method ovr_Party_PluginGetVoipStatus, addr 0x27c491c, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_Party_PluginGetVoipStatus();

  /// @brief Method ovr_PidArray_GetElement, addr 0x27d814c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_PidArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_PidArray_GetSize, addr 0x27d81d0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PidArray_GetSize(void* obj);

  /// @brief Method ovr_Pid_GetId, addr 0x27d8078, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Pid_GetId(void* obj);

  /// @brief Method ovr_Pid_GetId_Native, addr 0x27d80d0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Pid_GetId_Native(void* obj);

  /// @brief Method ovr_PlatformInitializeWithAccessToken, addr 0x27c2afc, size 0xa0, virtual false, abstract: false, final false
  static inline uint64_t ovr_PlatformInitializeWithAccessToken(uint64_t appId, ::StringW accessToken);

  /// @brief Method ovr_PlatformInitializeWithAccessTokenAndOptions, addr 0x27c2b9c, size 0x1a8, virtual false, abstract: false, final false
  static inline uint64_t ovr_PlatformInitializeWithAccessTokenAndOptions(uint64_t appId, ::StringW accessToken,
                                                                         ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> configOptions,
                                                                         void* numOptions);

  /// @brief Method ovr_PlatformInitialize_GetResult, addr 0x27d824c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::PlatformInitializeResult ovr_PlatformInitialize_GetResult(void* obj);

  /// @brief Method ovr_Platform_InitializeStandaloneOculus, addr 0x27c2a18, size 0xe4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Platform_InitializeStandaloneOculus(ByRef<::Oculus::Platform::__CAPI__OculusInitParams> init);

  /// @brief Method ovr_PopMessage, addr 0x27c2fd0, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_PopMessage();

  /// @brief Method ovr_Price_GetAmountInHundredths, addr 0x27d82c8, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_Price_GetAmountInHundredths(void* obj);

  /// @brief Method ovr_Price_GetCurrency, addr 0x27d8344, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Price_GetCurrency(void* obj);

  /// @brief Method ovr_Price_GetCurrency_Native, addr 0x27d839c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Price_GetCurrency_Native(void* obj);

  /// @brief Method ovr_Price_GetFormatted, addr 0x27d8418, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Price_GetFormatted(void* obj);

  /// @brief Method ovr_Price_GetFormatted_Native, addr 0x27d8470, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Price_GetFormatted_Native(void* obj);

  /// @brief Method ovr_ProductArray_GetElement, addr 0x27d883c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_ProductArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ProductArray_GetNextUrl, addr 0x27d88c0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ProductArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ProductArray_GetNextUrl_Native, addr 0x27d8918, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ProductArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ProductArray_GetSize, addr 0x27d8994, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ProductArray_GetSize(void* obj);

  /// @brief Method ovr_ProductArray_HasNextPage, addr 0x27d8a10, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ProductArray_HasNextPage(void* obj);

  /// @brief Method ovr_Product_GetDescription, addr 0x27d84ec, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetDescription(void* obj);

  /// @brief Method ovr_Product_GetDescription_Native, addr 0x27d8544, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Product_GetDescription_Native(void* obj);

  /// @brief Method ovr_Product_GetFormattedPrice, addr 0x27d85c0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetFormattedPrice(void* obj);

  /// @brief Method ovr_Product_GetFormattedPrice_Native, addr 0x27d8618, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Product_GetFormattedPrice_Native(void* obj);

  /// @brief Method ovr_Product_GetName, addr 0x27d8694, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetName(void* obj);

  /// @brief Method ovr_Product_GetName_Native, addr 0x27d86ec, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Product_GetName_Native(void* obj);

  /// @brief Method ovr_Product_GetSKU, addr 0x27d8768, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetSKU(void* obj);

  /// @brief Method ovr_Product_GetSKU_Native, addr 0x27d87c0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Product_GetSKU_Native(void* obj);

  /// @brief Method ovr_PurchaseArray_GetElement, addr 0x27d9008, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_PurchaseArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_PurchaseArray_GetNextUrl, addr 0x27d908c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PurchaseArray_GetNextUrl(void* obj);

  /// @brief Method ovr_PurchaseArray_GetNextUrl_Native, addr 0x27d90e4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PurchaseArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_PurchaseArray_GetSize, addr 0x27d9160, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PurchaseArray_GetSize(void* obj);

  /// @brief Method ovr_PurchaseArray_HasNextPage, addr 0x27d91dc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_PurchaseArray_HasNextPage(void* obj);

  /// @brief Method ovr_Purchase_GetDeveloperPayload, addr 0x27d8a94, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetDeveloperPayload(void* obj);

  /// @brief Method ovr_Purchase_GetDeveloperPayload_Native, addr 0x27d8aec, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Purchase_GetDeveloperPayload_Native(void* obj);

  /// @brief Method ovr_Purchase_GetExpirationTime, addr 0x27d8b68, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Purchase_GetExpirationTime(void* obj);

  /// @brief Method ovr_Purchase_GetExpirationTime_Native, addr 0x27d8bc0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Purchase_GetExpirationTime_Native(void* obj);

  /// @brief Method ovr_Purchase_GetGrantTime, addr 0x27d8c3c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Purchase_GetGrantTime(void* obj);

  /// @brief Method ovr_Purchase_GetGrantTime_Native, addr 0x27d8c94, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Purchase_GetGrantTime_Native(void* obj);

  /// @brief Method ovr_Purchase_GetPurchaseID, addr 0x27d8d10, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Purchase_GetPurchaseID(void* obj);

  /// @brief Method ovr_Purchase_GetPurchaseStrID, addr 0x27d8d8c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetPurchaseStrID(void* obj);

  /// @brief Method ovr_Purchase_GetPurchaseStrID_Native, addr 0x27d8de4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Purchase_GetPurchaseStrID_Native(void* obj);

  /// @brief Method ovr_Purchase_GetReportingId, addr 0x27d8e60, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetReportingId(void* obj);

  /// @brief Method ovr_Purchase_GetReportingId_Native, addr 0x27d8eb8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Purchase_GetReportingId_Native(void* obj);

  /// @brief Method ovr_Purchase_GetSKU, addr 0x27d8f34, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetSKU(void* obj);

  /// @brief Method ovr_Purchase_GetSKU_Native, addr 0x27d8f8c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Purchase_GetSKU_Native(void* obj);

  /// @brief Method ovr_RejoinDialogResult_GetRejoinSelected, addr 0x27d9260, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_RejoinDialogResult_GetRejoinSelected(void* obj);

  /// @brief Method ovr_RichPresenceOptions_Create, addr 0x27dceb8, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_RichPresenceOptions_Create();

  /// @brief Method ovr_RichPresenceOptions_Destroy, addr 0x27dcf20, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_Destroy(void* handle);

  /// @brief Method ovr_RichPresenceOptions_SetApiName, addr 0x27dcf9c, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetApiName(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetApiName_Native, addr 0x27dd03c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetApiName_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride, addr 0x27dd0c0, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x27dd160, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetIsJoinable, addr 0x27dd1e4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetIsJoinable(void* handle, bool value);

  /// @brief Method ovr_RichPresence_Clear, addr 0x27caecc, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_Clear();

  /// @brief Method ovr_RichPresence_GetDestinations, addr 0x27caf34, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_GetDestinations();

  /// @brief Method ovr_RichPresence_Set, addr 0x27caf9c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_Set(void* richPresenceOptions);

  /// @brief Method ovr_RichPresence_SetDestination, addr 0x27cb018, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetDestination(::StringW api_name);

  /// @brief Method ovr_RichPresence_SetDestination_Native, addr 0x27cb0b4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetDestination_Native(void* api_name);

  /// @brief Method ovr_RichPresence_SetIsJoinable, addr 0x27cb130, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetIsJoinable(bool is_joinable);

  /// @brief Method ovr_RichPresence_SetLobbySession, addr 0x27cb1ac, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetLobbySession(::StringW id);

  /// @brief Method ovr_RichPresence_SetLobbySession_Native, addr 0x27cb248, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetLobbySession_Native(void* id);

  /// @brief Method ovr_RichPresence_SetMatchSession, addr 0x27cb2c4, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetMatchSession(::StringW id);

  /// @brief Method ovr_RichPresence_SetMatchSession_Native, addr 0x27cb360, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetMatchSession_Native(void* id);

  /// @brief Method ovr_RosterOptions_AddSuggestedUser, addr 0x27dd34c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RosterOptions_AddSuggestedUser(void* handle, uint64_t value);

  /// @brief Method ovr_RosterOptions_ClearSuggestedUsers, addr 0x27dd3d0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RosterOptions_ClearSuggestedUsers(void* handle);

  /// @brief Method ovr_RosterOptions_Create, addr 0x27dd268, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_RosterOptions_Create();

  /// @brief Method ovr_RosterOptions_Destroy, addr 0x27dd2d0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RosterOptions_Destroy(void* handle);

  /// @brief Method ovr_SdkAccountArray_GetElement, addr 0x27d93dc, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_SdkAccountArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_SdkAccountArray_GetSize, addr 0x27d9460, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_SdkAccountArray_GetSize(void* obj);

  /// @brief Method ovr_SdkAccount_GetAccountType, addr 0x27d92e4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SdkAccountType ovr_SdkAccount_GetAccountType(void* obj);

  /// @brief Method ovr_SdkAccount_GetUserId, addr 0x27d9360, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_SdkAccount_GetUserId(void* obj);

  /// @brief Method ovr_SendInvitesResult_GetInvites, addr 0x27d94dc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_SendInvitesResult_GetInvites(void* obj);

  /// @brief Method ovr_SetDeveloperAccessToken, addr 0x27c2e80, size 0x98, virtual false, abstract: false, final false
  static inline bool ovr_SetDeveloperAccessToken(::StringW accessToken);

  /// @brief Method ovr_ShareMediaResult_GetStatus, addr 0x27d9558, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ShareMediaStatus ovr_ShareMediaResult_GetStatus(void* obj);

  /// @brief Method ovr_SupplementaryMetric_GetID, addr 0x27d95d4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_SupplementaryMetric_GetID(void* obj);

  /// @brief Method ovr_SupplementaryMetric_GetMetric, addr 0x27d9650, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_SupplementaryMetric_GetMetric(void* obj);

  /// @brief Method ovr_SystemVoipState_GetMicrophoneMuted, addr 0x27d96cc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState ovr_SystemVoipState_GetMicrophoneMuted(void* obj);

  /// @brief Method ovr_SystemVoipState_GetStatus, addr 0x27d9748, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_SystemVoipState_GetStatus(void* obj);

  /// @brief Method ovr_TestUserAppAccessArray_GetElement, addr 0x27d9e78, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_TestUserAppAccessArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_TestUserAppAccessArray_GetSize, addr 0x27d9efc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUserAppAccessArray_GetSize(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetAccessToken, addr 0x27d9cac, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUserAppAccess_GetAccessToken(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetAccessToken_Native, addr 0x27d9d04, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUserAppAccess_GetAccessToken_Native(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetAppId, addr 0x27d9d80, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUserAppAccess_GetAppId(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetUserId, addr 0x27d9dfc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUserAppAccess_GetUserId(void* obj);

  /// @brief Method ovr_TestUser_GetAccessToken, addr 0x27d97c4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUser_GetAccessToken(void* obj);

  /// @brief Method ovr_TestUser_GetAccessToken_Native, addr 0x27d981c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetAccessToken_Native(void* obj);

  /// @brief Method ovr_TestUser_GetAppAccessArray, addr 0x27d9898, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetAppAccessArray(void* obj);

  /// @brief Method ovr_TestUser_GetFbAppAccessArray, addr 0x27d9914, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetFbAppAccessArray(void* obj);

  /// @brief Method ovr_TestUser_GetFriendAccessToken, addr 0x27d9990, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUser_GetFriendAccessToken(void* obj);

  /// @brief Method ovr_TestUser_GetFriendAccessToken_Native, addr 0x27d99e8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetFriendAccessToken_Native(void* obj);

  /// @brief Method ovr_TestUser_GetFriendAppAccessArray, addr 0x27d9a64, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetFriendAppAccessArray(void* obj);

  /// @brief Method ovr_TestUser_GetUserAlias, addr 0x27d9ae0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUser_GetUserAlias(void* obj);

  /// @brief Method ovr_TestUser_GetUserAlias_Native, addr 0x27d9b38, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetUserAlias_Native(void* obj);

  /// @brief Method ovr_TestUser_GetUserFbid, addr 0x27d9bb4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUser_GetUserFbid(void* obj);

  /// @brief Method ovr_TestUser_GetUserId, addr 0x27d9c30, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUser_GetUserId(void* obj);

  /// @brief Method ovr_UnityInitGlobals, addr 0x27c28fc, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_UnityInitGlobals(void* loggingCB);

  /// @brief Method ovr_UnityInitWrapper, addr 0x27bfe60, size 0x98, virtual false, abstract: false, final false
  static inline bool ovr_UnityInitWrapper(::StringW appId);

  /// @brief Method ovr_UnityInitWrapperAsynchronous, addr 0x27c0000, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_UnityInitWrapperAsynchronous(::StringW appId);

  /// @brief Method ovr_UnityInitWrapperStandalone, addr 0x27c2978, size 0xa0, virtual false, abstract: false, final false
  static inline bool ovr_UnityInitWrapperStandalone(::StringW accessToken, void* loggingCB);

  /// @brief Method ovr_UnityInitWrapperWindows, addr 0x27c2d44, size 0xa0, virtual false, abstract: false, final false
  static inline bool ovr_UnityInitWrapperWindows(::StringW appId, void* loggingCB);

  /// @brief Method ovr_UnityInitWrapperWindowsAsynchronous, addr 0x27c2de4, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UnityInitWrapperWindowsAsynchronous(::StringW appId, void* loggingCB);

  /// @brief Method ovr_UnityResetTestPlatform, addr 0x27c34f4, size 0x64, virtual false, abstract: false, final false
  static inline void ovr_UnityResetTestPlatform();

  /// @brief Method ovr_UserAccountAgeCategory_GetAgeCategory, addr 0x27da7e4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::AccountAgeCategory ovr_UserAccountAgeCategory_GetAgeCategory(void* obj);

  /// @brief Method ovr_UserAgeCategory_Get, addr 0x27cc124, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserAgeCategory_Get();

  /// @brief Method ovr_UserAgeCategory_Report, addr 0x27cc18c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserAgeCategory_Report(::Oculus::Platform::AppAgeCategory age_category);

  /// @brief Method ovr_UserArray_GetElement, addr 0x27da860, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_UserArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_UserArray_GetNextUrl, addr 0x27da8e4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserArray_GetNextUrl(void* obj);

  /// @brief Method ovr_UserArray_GetNextUrl_Native, addr 0x27da93c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_UserArray_GetSize, addr 0x27da9b8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserArray_GetSize(void* obj);

  /// @brief Method ovr_UserArray_HasNextPage, addr 0x27daa34, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserArray_HasNextPage(void* obj);

  /// @brief Method ovr_UserCapabilityArray_GetElement, addr 0x27dadb8, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_UserCapabilityArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_UserCapabilityArray_GetNextUrl, addr 0x27dae3c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapabilityArray_GetNextUrl(void* obj);

  /// @brief Method ovr_UserCapabilityArray_GetNextUrl_Native, addr 0x27dae94, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapabilityArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_UserCapabilityArray_GetSize, addr 0x27daf10, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapabilityArray_GetSize(void* obj);

  /// @brief Method ovr_UserCapabilityArray_HasNextPage, addr 0x27daf8c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserCapabilityArray_HasNextPage(void* obj);

  /// @brief Method ovr_UserCapability_GetDescription, addr 0x27daab8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapability_GetDescription(void* obj);

  /// @brief Method ovr_UserCapability_GetDescription_Native, addr 0x27dab10, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapability_GetDescription_Native(void* obj);

  /// @brief Method ovr_UserCapability_GetIsEnabled, addr 0x27dab8c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserCapability_GetIsEnabled(void* obj);

  /// @brief Method ovr_UserCapability_GetName, addr 0x27dac10, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapability_GetName(void* obj);

  /// @brief Method ovr_UserCapability_GetName_Native, addr 0x27dac68, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapability_GetName_Native(void* obj);

  /// @brief Method ovr_UserCapability_GetReasonCode, addr 0x27dace4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapability_GetReasonCode(void* obj);

  /// @brief Method ovr_UserCapability_GetReasonCode_Native, addr 0x27dad3c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapability_GetReasonCode_Native(void* obj);

  /// @brief Method ovr_UserDataStoreUpdateResponse_GetSuccess, addr 0x27db010, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserDataStoreUpdateResponse_GetSuccess(void* obj);

  /// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey, addr 0x27cc208, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey_Native, addr 0x27cc2b8, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PrivateGetEntries, addr 0x27cc33c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntries(uint64_t userID);

  /// @brief Method ovr_UserDataStore_PrivateGetEntryByKey, addr 0x27cc3b8, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PrivateGetEntryByKey_Native, addr 0x27cc468, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PrivateWriteEntry, addr 0x27cc4ec, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateWriteEntry(uint64_t userID, ::StringW key, ::StringW value);

  /// @brief Method ovr_UserDataStore_PrivateWriteEntry_Native, addr 0x27cc5bc, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateWriteEntry_Native(uint64_t userID, void* key, void* value);

  /// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey, addr 0x27cc650, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey_Native, addr 0x27cc700, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PublicGetEntries, addr 0x27cc784, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntries(uint64_t userID);

  /// @brief Method ovr_UserDataStore_PublicGetEntryByKey, addr 0x27cc800, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PublicGetEntryByKey_Native, addr 0x27cc8b0, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PublicWriteEntry, addr 0x27cc934, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicWriteEntry(uint64_t userID, ::StringW key, ::StringW value);

  /// @brief Method ovr_UserDataStore_PublicWriteEntry_Native, addr 0x27cca04, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicWriteEntry_Native(uint64_t userID, void* key, void* value);

  /// @brief Method ovr_UserOptions_AddServiceProvider, addr 0x27dd5b4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_AddServiceProvider(void* handle, ::Oculus::Platform::ServiceProvider value);

  /// @brief Method ovr_UserOptions_ClearServiceProviders, addr 0x27dd638, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_ClearServiceProviders(void* handle);

  /// @brief Method ovr_UserOptions_Create, addr 0x27dd44c, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_UserOptions_Create();

  /// @brief Method ovr_UserOptions_Destroy, addr 0x27dd4b4, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_Destroy(void* handle);

  /// @brief Method ovr_UserOptions_SetMaxUsers, addr 0x27dd530, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_SetMaxUsers(void* handle, uint32_t value);

  /// @brief Method ovr_UserOptions_SetTimeWindow, addr 0x27dd6b4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_SetTimeWindow(void* handle, ::Oculus::Platform::TimeWindow value);

  /// @brief Method ovr_UserProof_GetNonce, addr 0x27db094, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserProof_GetNonce(void* obj);

  /// @brief Method ovr_UserProof_GetNonce_Native, addr 0x27db0ec, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserProof_GetNonce_Native(void* obj);

  /// @brief Method ovr_UserReportID_GetDidCancel, addr 0x27db168, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserReportID_GetDidCancel(void* obj);

  /// @brief Method ovr_UserReportID_GetID, addr 0x27db1ec, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserReportID_GetID(void* obj);

  /// @brief Method ovr_User_CancelRecordingForReportFlow, addr 0x27cb3dc, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_CancelRecordingForReportFlow(::StringW recordingUUID);

  /// @brief Method ovr_User_CancelRecordingForReportFlow_Native, addr 0x27cb478, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_CancelRecordingForReportFlow_Native(void* recordingUUID);

  /// @brief Method ovr_User_Get, addr 0x27cb4f4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_Get(uint64_t userID);

  /// @brief Method ovr_User_GetAccessToken, addr 0x27cb570, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetAccessToken();

  /// @brief Method ovr_User_GetBlockedUsers, addr 0x27cb5d8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetBlockedUsers();

  /// @brief Method ovr_User_GetDisplayName, addr 0x27d9f78, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetDisplayName(void* obj);

  /// @brief Method ovr_User_GetDisplayName_Native, addr 0x27d9fd0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetDisplayName_Native(void* obj);

  /// @brief Method ovr_User_GetID, addr 0x27da04c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetID(void* obj);

  /// @brief Method ovr_User_GetImageUrl, addr 0x27da0c8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetImageUrl(void* obj);

  /// @brief Method ovr_User_GetImageUrl_Native, addr 0x27da120, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetImageUrl_Native(void* obj);

  /// @brief Method ovr_User_GetLinkedAccounts, addr 0x27cb640, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLinkedAccounts(void* userOptions);

  /// @brief Method ovr_User_GetLoggedInUser, addr 0x27cb6bc, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLoggedInUser();

  /// @brief Method ovr_User_GetLoggedInUserFriends, addr 0x27cb724, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLoggedInUserFriends();

  /// @brief Method ovr_User_GetOculusID, addr 0x27da19c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetOculusID(void* obj);

  /// @brief Method ovr_User_GetOculusID_Native, addr 0x27da1f4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetOculusID_Native(void* obj);

  /// @brief Method ovr_User_GetOrgScopedID, addr 0x27cb78c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetOrgScopedID(uint64_t userID);

  /// @brief Method ovr_User_GetPresence, addr 0x27da270, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresence(void* obj);

  /// @brief Method ovr_User_GetPresenceDeeplinkMessage, addr 0x27da344, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceDeeplinkMessage(void* obj);

  /// @brief Method ovr_User_GetPresenceDeeplinkMessage_Native, addr 0x27da39c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresenceDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceDestinationApiName, addr 0x27da418, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceDestinationApiName(void* obj);

  /// @brief Method ovr_User_GetPresenceDestinationApiName_Native, addr 0x27da470, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresenceDestinationApiName_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceLobbySessionId, addr 0x27da4ec, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceLobbySessionId(void* obj);

  /// @brief Method ovr_User_GetPresenceLobbySessionId_Native, addr 0x27da544, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresenceLobbySessionId_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceMatchSessionId, addr 0x27da5c0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceMatchSessionId(void* obj);

  /// @brief Method ovr_User_GetPresenceMatchSessionId_Native, addr 0x27da618, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresenceMatchSessionId_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceStatus, addr 0x27da694, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::UserPresenceStatus ovr_User_GetPresenceStatus(void* obj);

  /// @brief Method ovr_User_GetPresence_Native, addr 0x27da2c8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresence_Native(void* obj);

  /// @brief Method ovr_User_GetSdkAccounts, addr 0x27cb808, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetSdkAccounts();

  /// @brief Method ovr_User_GetSmallImageUrl, addr 0x27da710, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetSmallImageUrl(void* obj);

  /// @brief Method ovr_User_GetSmallImageUrl_Native, addr 0x27da768, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetSmallImageUrl_Native(void* obj);

  /// @brief Method ovr_User_GetUserCapabilities, addr 0x27cb870, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetUserCapabilities();

  /// @brief Method ovr_User_GetUserProof, addr 0x27cb8d8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetUserProof();

  /// @brief Method ovr_User_LaunchBlockFlow, addr 0x27cb940, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchBlockFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchFriendRequestFlow, addr 0x27cb9bc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchFriendRequestFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchReportFlow, addr 0x27cba38, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchReportFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchReportFlow2, addr 0x27cbab4, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchReportFlow2(uint64_t optionalUserID, void* abuseReportOptions);

  /// @brief Method ovr_User_LaunchUnblockFlow, addr 0x27cbb38, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchUnblockFlow(uint64_t userID);

  /// @brief Method ovr_User_NewEntitledTestUser, addr 0x27cbbb4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_NewEntitledTestUser();

  /// @brief Method ovr_User_NewTestUser, addr 0x27cbc1c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_NewTestUser();

  /// @brief Method ovr_User_NewTestUserFriends, addr 0x27cbc84, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_NewTestUserFriends();

  /// @brief Method ovr_User_StartRecordingForReportFlow, addr 0x27cbcec, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StartRecordingForReportFlow();

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow, addr 0x27cbd54, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow(uint64_t optionalUserID, ::StringW optionalRecordingUUID);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2, addr 0x27cbe88, size 0xb8, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2(uint64_t optionalUserID, ::StringW optionalRecordingUUID, void* abuseReportOptions);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2_Native, addr 0x27cbf40, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2_Native(uint64_t optionalUserID, void* optionalRecordingUUID, void* abuseReportOptions);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow_Native, addr 0x27cbe04, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow_Native(uint64_t optionalUserID, void* optionalRecordingUUID);

  /// @brief Method ovr_User_TestUserCreateDeviceManifest, addr 0x27cbfd4, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_TestUserCreateDeviceManifest(::StringW deviceID, ::ArrayW<uint64_t, ::Array<uint64_t>*> appIDs, int32_t numAppIDs);

  /// @brief Method ovr_User_TestUserCreateDeviceManifest_Native, addr 0x27cc088, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_TestUserCreateDeviceManifest_Native(void* deviceID, ::ArrayW<uint64_t, ::Array<uint64_t>*> appIDs, int32_t numAppIDs);

  /// @brief Method ovr_VoipDecoder_Decode, addr 0x27c327c, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_VoipDecoder_Decode(void* obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData, uint64_t compressedSize);

  /// @brief Method ovr_VoipDecoder_Decode, addr 0x27db268, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_VoipDecoder_Decode(void* obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData, void* compressedSize);

  /// @brief Method ovr_VoipDecoder_GetDecodedPCM, addr 0x27db304, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_VoipDecoder_GetDecodedPCM(void* obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferSize);

  /// @brief Method ovr_VoipEncoder_AddPCM, addr 0x27db3a0, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_VoipEncoder_AddPCM(void* obj, ::ArrayW<float_t, ::Array<float_t>*> inputData, uint32_t inputSize);

  /// @brief Method ovr_VoipEncoder_GetCompressedData, addr 0x27db43c, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_VoipEncoder_GetCompressedData(void* obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, void* intputSize);

  /// @brief Method ovr_VoipEncoder_GetCompressedDataSize, addr 0x27db4d8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_VoipEncoder_GetCompressedDataSize(void* obj);

  /// @brief Method ovr_VoipOptions_Create, addr 0x27dd738, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_VoipOptions_Create();

  /// @brief Method ovr_VoipOptions_Destroy, addr 0x27dd7a0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_VoipOptions_Destroy(void* handle);

  /// @brief Method ovr_VoipOptions_SetBitrateForNewConnections, addr 0x27dd81c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_VoipOptions_SetBitrateForNewConnections(void* handle, ::Oculus::Platform::VoipBitrate value);

  /// @brief Method ovr_VoipOptions_SetCreateNewConnectionUseDtx, addr 0x27dd8a0, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_VoipOptions_SetCreateNewConnectionUseDtx(void* handle, ::Oculus::Platform::VoipDtxState value);

  /// @brief Method ovr_Voip_Accept, addr 0x27c4984, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_Accept(uint64_t userID);

  /// @brief Method ovr_Voip_CreateDecoder, addr 0x27c3198, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_Voip_CreateDecoder();

  /// @brief Method ovr_Voip_CreateEncoder, addr 0x27c30b4, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_Voip_CreateEncoder();

  /// @brief Method ovr_Voip_DestroyDecoder, addr 0x27c3200, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_DestroyDecoder(void* decoder);

  /// @brief Method ovr_Voip_DestroyEncoder, addr 0x27c311c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_DestroyEncoder(void* encoder);

  /// @brief Method ovr_Voip_GetIsConnectionUsingDtx, addr 0x27c4a00, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipDtxState ovr_Voip_GetIsConnectionUsingDtx(uint64_t peerID);

  /// @brief Method ovr_Voip_GetLocalBitrate, addr 0x27c4a7c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetLocalBitrate(uint64_t peerID);

  /// @brief Method ovr_Voip_GetMicrophoneAvailability, addr 0x27cca98, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Voip_GetMicrophoneAvailability();

  /// @brief Method ovr_Voip_GetOutputBufferMaxSize, addr 0x27c4af8, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetOutputBufferMaxSize();

  /// @brief Method ovr_Voip_GetPCM, addr 0x27c4b60, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCM(uint64_t senderID, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Voip_GetPCMFloat, addr 0x27c4bfc, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCMFloat(uint64_t senderID, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Voip_GetPCMSize, addr 0x27c4c98, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCMSize(uint64_t senderID);

  /// @brief Method ovr_Voip_GetPCMWithTimestamp, addr 0x27c4d14, size 0xac, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCMWithTimestamp(uint64_t senderID, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements,
                                                   ::ArrayW<uint32_t, ::Array<uint32_t>*> timestamp);

  /// @brief Method ovr_Voip_GetPCMWithTimestampFloat, addr 0x27c4dc0, size 0xac, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCMWithTimestampFloat(uint64_t senderID, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements,
                                                        ::ArrayW<uint32_t, ::Array<uint32_t>*> timestamp);

  /// @brief Method ovr_Voip_GetRemoteBitrate, addr 0x27c4e6c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetRemoteBitrate(uint64_t peerID);

  /// @brief Method ovr_Voip_GetSyncTimestamp, addr 0x27c4ee8, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_Voip_GetSyncTimestamp(uint64_t userID);

  /// @brief Method ovr_Voip_GetSyncTimestampDifference, addr 0x27c4f64, size 0x84, virtual false, abstract: false, final false
  static inline int64_t ovr_Voip_GetSyncTimestampDifference(uint32_t lhs, uint32_t rhs);

  /// @brief Method ovr_Voip_GetSystemVoipMicrophoneMuted, addr 0x27c4fe8, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState ovr_Voip_GetSystemVoipMicrophoneMuted();

  /// @brief Method ovr_Voip_GetSystemVoipStatus, addr 0x27c5050, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_Voip_GetSystemVoipStatus();

  /// @brief Method ovr_Voip_ReportAppVoipSessions, addr 0x27ccb00, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Voip_ReportAppVoipSessions(::ArrayW<uint64_t, ::Array<uint64_t>*> sessionIDs);

  /// @brief Method ovr_Voip_SetMicrophoneFilterCallback, addr 0x27c3658, size 0x80, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetMicrophoneFilterCallback(::Oculus::Platform::__CAPI__FilterCallback* cb);

  /// @brief Method ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer, addr 0x27c36d8, size 0x88, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(::Oculus::Platform::__CAPI__FilterCallback* cb, void* bufferSizeElements);

  /// @brief Method ovr_Voip_SetMicrophoneMuted, addr 0x27c50b8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetMicrophoneMuted(::Oculus::Platform::VoipMuteState state);

  /// @brief Method ovr_Voip_SetNewConnectionOptions, addr 0x27c5134, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetNewConnectionOptions(void* voipOptions);

  /// @brief Method ovr_Voip_SetOutputSampleRate, addr 0x27c51b0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetOutputSampleRate(::Oculus::Platform::VoipSampleRate rate);

  /// @brief Method ovr_Voip_SetSystemVoipMicrophoneMuted, addr 0x27c3478, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetSystemVoipMicrophoneMuted(::Oculus::Platform::VoipMuteState muted);

  /// @brief Method ovr_Voip_SetSystemVoipPassthrough, addr 0x27c33fc, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetSystemVoipPassthrough(bool passthrough);

  /// @brief Method ovr_Voip_SetSystemVoipSuppressed, addr 0x27ccb84, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Voip_SetSystemVoipSuppressed(bool suppressed);

  /// @brief Method ovr_Voip_Start, addr 0x27c522c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_Start(uint64_t userID);

  /// @brief Method ovr_Voip_Stop, addr 0x27c52a8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_Stop(uint64_t userID);

  static inline void setStaticF_nativeStringEncoding(::System::Text::UTF8Encoding* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CAPI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CAPI(CAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CAPI(CAPI const&) = delete;

  /// @brief Field DLL_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString DLL_NAME{ u"ovrplatformloader" };

  /// @brief Field VoipFilterBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t VoipFilterBufferSize{ static_cast<int32_t>(0x1e0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::CAPI, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::CAPI);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CAPI*, "Oculus.Platform", "CAPI");
NEED_NO_BOX(::Oculus::Platform::__CAPI__FilterCallback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__FilterCallback*, "Oculus.Platform", "CAPI/FilterCallback");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__OculusInitParams, "Oculus.Platform", "CAPI/OculusInitParams");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__ovrKeyValuePair, "Oculus.Platform", "CAPI/ovrKeyValuePair");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__ovrNetSyncVec3, "Oculus.Platform", "CAPI/ovrNetSyncVec3");

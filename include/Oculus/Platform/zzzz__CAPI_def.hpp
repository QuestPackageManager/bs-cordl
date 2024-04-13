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
  /// @brief Method .ctor, addr 0x29a8f2c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, ::StringW value);

  /// @brief Method .ctor, addr 0x29a8f44, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, double_t value);

  /// @brief Method .ctor, addr 0x29a8a0c, size 0x1c, virtual false, abstract: false, final false
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
  /// @brief Method BeginInvoke, addr 0x29c4a90, size 0xd4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<int16_t, ::Array<int16_t>*>> pcmData, void* pcmDataLength, int32_t frequency, int32_t numChannels, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29c4b64, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x29c4a7c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<::ArrayW<int16_t, ::Array<int16_t>*>> pcmData, void* pcmDataLength, int32_t frequency, int32_t numChannels);

  static inline ::Oculus::Platform::__CAPI__FilterCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29c49a4, size 0xd8, virtual false, abstract: false, final false
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

  /// @brief Method ArrayOfStructsToIntPtr, addr 0x29a8628, size 0x198, virtual false, abstract: false, final false
  static inline void* ArrayOfStructsToIntPtr(::System::Array* ar);

  /// @brief Method BlobFromNative, addr 0x29a9600, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BlobFromNative(uint32_t size, void* pointer);

  /// @brief Method DataStoreFromNative, addr 0x29a901c, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* DataStoreFromNative(void* pointer);

  /// @brief Method DateTimeFromNative, addr 0x29a94b4, size 0x64, virtual false, abstract: false, final false
  static inline ::System::DateTime DateTimeFromNative(uint64_t seconds_since_the_one_true_epoch);

  /// @brief Method DateTimeToNative, addr 0x29a9518, size 0xe8, virtual false, abstract: false, final false
  static inline uint64_t DateTimeToNative(::System::DateTime dt);

  /// @brief Method DictionaryToOVRKeyValuePairs, addr 0x29a87c0, size 0x24c, virtual false, abstract: false, final false
  static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>
  DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>* dict);

  /// @brief Method DictionaryToOVRKeyValuePairs, addr 0x29a8a28, size 0x504, virtual false, abstract: false, final false
  static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>
  DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* dict);

  /// @brief Method FiledataFromNative, addr 0x29a96d8, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FiledataFromNative(uint32_t size, void* pointer);

  /// @brief Method GetNativeStringLengthNotIncludingNullTerminator, addr 0x29a9440, size 0x74, virtual false, abstract: false, final false
  static inline int32_t GetNativeStringLengthNotIncludingNullTerminator(void* pointer);

  /// @brief Method IntPtrToByteArray, addr 0x29a8f60, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> IntPtrToByteArray(void* data, uint64_t size);

  /// @brief Method LogNewEvent, addr 0x29aa804, size 0x354, virtual false, abstract: false, final false
  static inline void LogNewEvent(::StringW eventName, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* values);

  /// @brief Method LogNewUnifiedEvent, addr 0x29aa75c, size 0xa8, virtual false, abstract: false, final false
  static inline void LogNewUnifiedEvent(::Oculus::Platform::LogEventName eventName, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* values);

  static inline ::Oculus::Platform::CAPI* New_ctor();

  /// @brief Method StringFromNative, addr 0x29a930c, size 0x134, virtual false, abstract: false, final false
  static inline ::StringW StringFromNative(void* pointer);

  /// @brief Method StringToNative, addr 0x29a9778, size 0x180, virtual false, abstract: false, final false
  static inline void* StringToNative(::StringW s);

  /// @brief Method .ctor, addr 0x29c4920, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::UTF8Encoding* getStaticF_nativeStringEncoding();

  /// @brief Method ovr_AbuseReportOptions_Create, addr 0x29a60ac, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_AbuseReportOptions_Create();

  /// @brief Method ovr_AbuseReportOptions_Destroy, addr 0x29a6418, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AbuseReportOptions_Destroy(void* handle);

  /// @brief Method ovr_AbuseReportOptions_SetPreventPeopleChooser, addr 0x29a617c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AbuseReportOptions_SetPreventPeopleChooser(void* handle, bool value);

  /// @brief Method ovr_AbuseReportOptions_SetReportType, addr 0x29a6268, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AbuseReportOptions_SetReportType(void* handle, ::Oculus::Platform::AbuseReportType value);

  /// @brief Method ovr_AbuseReportRecording_GetRecordingUuid, addr 0x29b3bfc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AbuseReportRecording_GetRecordingUuid(void* obj);

  /// @brief Method ovr_AbuseReportRecording_GetRecordingUuid_Native, addr 0x29b3c54, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AbuseReportRecording_GetRecordingUuid_Native(void* obj);

  /// @brief Method ovr_AbuseReport_LaunchAdvancedReportFlow, addr 0x29ac320, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_AbuseReport_LaunchAdvancedReportFlow(uint64_t content_id, void* abuse_report_options);

  /// @brief Method ovr_AbuseReport_ReportRequestHandled, addr 0x29ac3a4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AbuseReport_ReportRequestHandled(::Oculus::Platform::ReportRequestResponse response);

  /// @brief Method ovr_AchievementDefinitionArray_GetElement, addr 0x29b3f18, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_AchievementDefinitionArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_AchievementDefinitionArray_GetNextUrl, addr 0x29b3f9c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementDefinitionArray_GetNextUrl(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_GetNextUrl_Native, addr 0x29b3ff4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementDefinitionArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_GetSize, addr 0x29b4070, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementDefinitionArray_GetSize(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_HasNextPage, addr 0x29b40ec, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementDefinitionArray_HasNextPage(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetBitfieldLength, addr 0x29b3cd0, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_AchievementDefinition_GetBitfieldLength(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetName, addr 0x29b3d4c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementDefinition_GetName(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetName_Native, addr 0x29b3da4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementDefinition_GetName_Native(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetTarget, addr 0x29b3e20, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AchievementDefinition_GetTarget(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetType, addr 0x29b3e9c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::AchievementType ovr_AchievementDefinition_GetType(void* obj);

  /// @brief Method ovr_AchievementProgressArray_GetElement, addr 0x29b44ec, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgressArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_AchievementProgressArray_GetNextUrl, addr 0x29b4570, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementProgressArray_GetNextUrl(void* obj);

  /// @brief Method ovr_AchievementProgressArray_GetNextUrl_Native, addr 0x29b45c8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgressArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_AchievementProgressArray_GetSize, addr 0x29b4644, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgressArray_GetSize(void* obj);

  /// @brief Method ovr_AchievementProgressArray_HasNextPage, addr 0x29b46c0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementProgressArray_HasNextPage(void* obj);

  /// @brief Method ovr_AchievementProgress_GetBitfield, addr 0x29b4170, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementProgress_GetBitfield(void* obj);

  /// @brief Method ovr_AchievementProgress_GetBitfield_Native, addr 0x29b41c8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgress_GetBitfield_Native(void* obj);

  /// @brief Method ovr_AchievementProgress_GetCount, addr 0x29b4244, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AchievementProgress_GetCount(void* obj);

  /// @brief Method ovr_AchievementProgress_GetIsUnlocked, addr 0x29b42c0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementProgress_GetIsUnlocked(void* obj);

  /// @brief Method ovr_AchievementProgress_GetName, addr 0x29b4344, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementProgress_GetName(void* obj);

  /// @brief Method ovr_AchievementProgress_GetName_Native, addr 0x29b439c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgress_GetName_Native(void* obj);

  /// @brief Method ovr_AchievementProgress_GetUnlockTime, addr 0x29b4418, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_AchievementProgress_GetUnlockTime(void* obj);

  /// @brief Method ovr_AchievementProgress_GetUnlockTime_Native, addr 0x29b4470, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AchievementProgress_GetUnlockTime_Native(void* obj);

  /// @brief Method ovr_AchievementUpdate_GetJustUnlocked, addr 0x29b4744, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementUpdate_GetJustUnlocked(void* obj);

  /// @brief Method ovr_AchievementUpdate_GetName, addr 0x29b47c8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementUpdate_GetName(void* obj);

  /// @brief Method ovr_AchievementUpdate_GetName_Native, addr 0x29b4820, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementUpdate_GetName_Native(void* obj);

  /// @brief Method ovr_Achievements_AddCount, addr 0x29ac420, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddCount(::StringW name, uint64_t count);

  /// @brief Method ovr_Achievements_AddCount_Native, addr 0x29ac4cc, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddCount_Native(void* name, uint64_t count);

  /// @brief Method ovr_Achievements_AddFields, addr 0x29ac550, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddFields(::StringW name, ::StringW fields);

  /// @brief Method ovr_Achievements_AddFields_Native, addr 0x29ac618, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddFields_Native(void* name, void* fields);

  /// @brief Method ovr_Achievements_GetAllDefinitions, addr 0x29ac69c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetAllDefinitions();

  /// @brief Method ovr_Achievements_GetAllProgress, addr 0x29ac704, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetAllProgress();

  /// @brief Method ovr_Achievements_GetDefinitionsByName, addr 0x29ac76c, size 0x148, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetDefinitionsByName(::ArrayW<::StringW, ::Array<::StringW>*> names, int32_t count);

  /// @brief Method ovr_Achievements_GetProgressByName, addr 0x29ac8b4, size 0x148, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetProgressByName(::ArrayW<::StringW, ::Array<::StringW>*> names, int32_t count);

  /// @brief Method ovr_Achievements_Unlock, addr 0x29ac9fc, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_Unlock(::StringW name);

  /// @brief Method ovr_Achievements_Unlock_Native, addr 0x29aca98, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_Unlock_Native(void* name);

  /// @brief Method ovr_AdvancedAbuseReportOptions_AddSuggestedUser, addr 0x29a69c0, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_AddSuggestedUser(void* handle, uint64_t value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext, addr 0x29a66e8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext(void* handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers, addr 0x29a6a9c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers(void* handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_Create, addr 0x29a64f8, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_AdvancedAbuseReportOptions_Create();

  /// @brief Method ovr_AdvancedAbuseReportOptions_Destroy, addr 0x29a6d30, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_Destroy(void* handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString, addr 0x29a65d0, size 0xc0, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString(void* handle, ::StringW key, ::StringW value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native, addr 0x29c2550, size 0x94, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native(void* handle, void* key, void* value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType, addr 0x29a67cc, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetObjectType(void* handle, ::StringW value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType_Native, addr 0x29c25e4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetObjectType_Native(void* handle, void* value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetReportType, addr 0x29a68d4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetReportType(void* handle, ::Oculus::Platform::AbuseReportType value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetVideoMode, addr 0x29a6b80, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetVideoMode(void* handle, ::Oculus::Platform::AbuseReportVideoMode value);

  /// @brief Method ovr_AppDownloadProgressResult_GetDownloadBytes, addr 0x29b489c, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_AppDownloadProgressResult_GetDownloadBytes(void* obj);

  /// @brief Method ovr_AppDownloadProgressResult_GetDownloadedBytes, addr 0x29b4918, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_AppDownloadProgressResult_GetDownloadedBytes(void* obj);

  /// @brief Method ovr_AppDownloadProgressResult_GetStatusCode, addr 0x29b4994, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::AppStatus ovr_AppDownloadProgressResult_GetStatusCode(void* obj);

  /// @brief Method ovr_AppDownloadResult_GetTimestamp, addr 0x29b4a10, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_AppDownloadResult_GetTimestamp(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_GetElement, addr 0x29b4ea8, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInviteArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ApplicationInviteArray_GetNextUrl, addr 0x29b4f2c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationInviteArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_GetNextUrl_Native, addr 0x29b4f84, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInviteArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_GetSize, addr 0x29b5000, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInviteArray_GetSize(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_HasNextPage, addr 0x29b507c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ApplicationInviteArray_HasNextPage(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetDestination, addr 0x29b4b08, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInvite_GetDestination(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetID, addr 0x29b4b84, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationInvite_GetID(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetIsActive, addr 0x29b4c00, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ApplicationInvite_GetIsActive(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetLobbySessionId, addr 0x29b4c84, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationInvite_GetLobbySessionId(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetLobbySessionId_Native, addr 0x29b4cdc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInvite_GetLobbySessionId_Native(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetMatchSessionId, addr 0x29b4d58, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationInvite_GetMatchSessionId(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetMatchSessionId_Native, addr 0x29b4db0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInvite_GetMatchSessionId_Native(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetRecipient, addr 0x29b4e2c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInvite_GetRecipient(void* obj);

  /// @brief Method ovr_ApplicationLifecycle_GetLaunchDetails, addr 0x29aabf4, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationLifecycle_GetLaunchDetails();

  /// @brief Method ovr_ApplicationLifecycle_GetRegisteredPIDs, addr 0x29ace1c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_GetRegisteredPIDs();

  /// @brief Method ovr_ApplicationLifecycle_GetSessionKey, addr 0x29ace84, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_GetSessionKey();

  /// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult, addr 0x29aac5c, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_ApplicationLifecycle_LogDeeplinkResult(::StringW trackingID, ::Oculus::Platform::LaunchResult result);

  /// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult_Native, addr 0x29aacf8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationLifecycle_LogDeeplinkResult_Native(void* trackingID, ::Oculus::Platform::LaunchResult result);

  /// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey, addr 0x29aceec, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey(::StringW sessionKey);

  /// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey_Native, addr 0x29acf88, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey_Native(void* sessionKey);

  /// @brief Method ovr_ApplicationOptions_Create, addr 0x29a70fc, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationOptions_Create();

  /// @brief Method ovr_ApplicationOptions_Destroy, addr 0x29a779c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_Destroy(void* handle);

  /// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage, addr 0x29a71cc, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDeeplinkMessage(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage_Native, addr 0x29c2668, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDeeplinkMessage_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetDestinationApiName, addr 0x29a72d4, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDestinationApiName(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetDestinationApiName_Native, addr 0x29c26ec, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDestinationApiName_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetLobbySessionId, addr 0x29a73dc, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetLobbySessionId(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetLobbySessionId_Native, addr 0x29c2770, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetLobbySessionId_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetMatchSessionId, addr 0x29a74e4, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetMatchSessionId(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetMatchSessionId_Native, addr 0x29c27f4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetMatchSessionId_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetRoomId, addr 0x29a75ec, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetRoomId(void* handle, uint64_t value);

  /// @brief Method ovr_ApplicationVersion_GetCurrentCode, addr 0x29b5100, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_ApplicationVersion_GetCurrentCode(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetCurrentName, addr 0x29b517c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationVersion_GetCurrentName(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetCurrentName_Native, addr 0x29b51d4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationVersion_GetCurrentName_Native(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestCode, addr 0x29b5250, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_ApplicationVersion_GetLatestCode(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestName, addr 0x29b52cc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationVersion_GetLatestName(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestName_Native, addr 0x29b5324, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationVersion_GetLatestName_Native(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetReleaseDate, addr 0x29b53a0, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_ApplicationVersion_GetReleaseDate(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetSize, addr 0x29b541c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationVersion_GetSize(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetSize_Native, addr 0x29b5474, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationVersion_GetSize_Native(void* obj);

  /// @brief Method ovr_Application_CancelAppDownload, addr 0x29acb14, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_CancelAppDownload();

  /// @brief Method ovr_Application_CheckAppDownloadProgress, addr 0x29acb7c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_CheckAppDownloadProgress();

  /// @brief Method ovr_Application_GetID, addr 0x29b4a8c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_GetID(void* obj);

  /// @brief Method ovr_Application_GetInstalledApplications, addr 0x29acbe4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_GetInstalledApplications();

  /// @brief Method ovr_Application_GetVersion, addr 0x29acc4c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_GetVersion();

  /// @brief Method ovr_Application_InstallAppUpdateAndRelaunch, addr 0x29accb4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_InstallAppUpdateAndRelaunch(void* deeplink_options);

  /// @brief Method ovr_Application_LaunchOtherApp, addr 0x29acd30, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_LaunchOtherApp(uint64_t appID, void* deeplink_options);

  /// @brief Method ovr_Application_StartAppDownload, addr 0x29acdb4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_StartAppDownload();

  /// @brief Method ovr_AssetDetailsArray_GetElement, addr 0x29b5a0c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetailsArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_AssetDetailsArray_GetSize, addr 0x29b5a90, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetailsArray_GetSize(void* obj);

  /// @brief Method ovr_AssetDetails_GetAssetId, addr 0x29b54f0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetDetails_GetAssetId(void* obj);

  /// @brief Method ovr_AssetDetails_GetAssetType, addr 0x29b556c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetAssetType(void* obj);

  /// @brief Method ovr_AssetDetails_GetAssetType_Native, addr 0x29b55c4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetAssetType_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetDownloadStatus, addr 0x29b5640, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetDownloadStatus(void* obj);

  /// @brief Method ovr_AssetDetails_GetDownloadStatus_Native, addr 0x29b5698, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetDownloadStatus_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetFilepath, addr 0x29b5714, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetFilepath(void* obj);

  /// @brief Method ovr_AssetDetails_GetFilepath_Native, addr 0x29b576c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetIapStatus, addr 0x29b57e8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetIapStatus(void* obj);

  /// @brief Method ovr_AssetDetails_GetIapStatus_Native, addr 0x29b5840, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetIapStatus_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetLanguage, addr 0x29b58bc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetLanguage(void* obj);

  /// @brief Method ovr_AssetDetails_GetMetadata, addr 0x29b5938, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetMetadata(void* obj);

  /// @brief Method ovr_AssetDetails_GetMetadata_Native, addr 0x29b5990, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetMetadata_Native(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetAssetFileId, addr 0x29b5b0c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDeleteResult_GetAssetFileId(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetAssetId, addr 0x29b5b88, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDeleteResult_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetFilepath, addr 0x29b5c04, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetFileDeleteResult_GetFilepath(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetFilepath_Native, addr 0x29b5c5c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetFileDeleteResult_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetSuccess, addr 0x29b5cd8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AssetFileDeleteResult_GetSuccess(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetFileId, addr 0x29b5d5c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetFileId(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetId, addr 0x29b5dd8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath, addr 0x29b5e54, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetFileDownloadCancelResult_GetFilepath(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath_Native, addr 0x29b5eac, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetFileDownloadCancelResult_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetSuccess, addr 0x29b5f28, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AssetFileDownloadCancelResult_GetSuccess(void* obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetAssetId, addr 0x29b5fac, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadResult_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetFilepath, addr 0x29b6028, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetFileDownloadResult_GetFilepath(void* obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetFilepath_Native, addr 0x29b6080, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetFileDownloadResult_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetAssetFileId, addr 0x29b60fc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetFileId(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetAssetId, addr 0x29b6178, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotal, addr 0x29b61f4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_AssetFileDownloadUpdate_GetBytesTotal(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotalLong, addr 0x29b6270, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetBytesTotalLong(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferred, addr 0x29b62ec, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_AssetFileDownloadUpdate_GetBytesTransferred(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferredLong, addr 0x29b6368, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_AssetFileDownloadUpdate_GetBytesTransferredLong(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetCompleted, addr 0x29b63e4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AssetFileDownloadUpdate_GetCompleted(void* obj);

  /// @brief Method ovr_AssetFile_Delete, addr 0x29ad004, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_Delete(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DeleteById, addr 0x29ad080, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DeleteById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DeleteByName, addr 0x29ad0fc, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DeleteByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DeleteByName_Native, addr 0x29ad198, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DeleteByName_Native(void* assetFileName);

  /// @brief Method ovr_AssetFile_Download, addr 0x29ad214, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_Download(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadById, addr 0x29ad290, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadByName, addr 0x29ad30c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DownloadByName_Native, addr 0x29ad3a8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadByName_Native(void* assetFileName);

  /// @brief Method ovr_AssetFile_DownloadCancel, addr 0x29ad424, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancel(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadCancelById, addr 0x29ad4a0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancelById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadCancelByName, addr 0x29ad51c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancelByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DownloadCancelByName_Native, addr 0x29ad5b8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancelByName_Native(void* assetFileName);

  /// @brief Method ovr_AssetFile_GetList, addr 0x29ad634, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_GetList();

  /// @brief Method ovr_AssetFile_Status, addr 0x29ad69c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_Status(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_StatusById, addr 0x29ad718, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_StatusById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_StatusByName, addr 0x29ad794, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_StatusByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_StatusByName_Native, addr 0x29ad830, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_StatusByName_Native(void* assetFileName);

  /// @brief Method ovr_AvatarEditorOptions_Create, addr 0x29a787c, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_AvatarEditorOptions_Create();

  /// @brief Method ovr_AvatarEditorOptions_Destroy, addr 0x29a7b18, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AvatarEditorOptions_Destroy(void* handle);

  /// @brief Method ovr_AvatarEditorOptions_SetSourceOverride, addr 0x29a794c, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_AvatarEditorOptions_SetSourceOverride(void* handle, ::StringW value);

  /// @brief Method ovr_AvatarEditorOptions_SetSourceOverride_Native, addr 0x29c2878, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AvatarEditorOptions_SetSourceOverride_Native(void* handle, void* value);

  /// @brief Method ovr_AvatarEditorResult_GetRequestSent, addr 0x29b6468, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AvatarEditorResult_GetRequestSent(void* obj);

  /// @brief Method ovr_Avatar_LaunchAvatarEditor, addr 0x29ad8ac, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Avatar_LaunchAvatarEditor(void* options);

  /// @brief Method ovr_Avatar_UpdateMetaData, addr 0x29ad928, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_Avatar_UpdateMetaData(::StringW avatarMetaData, ::StringW imageFilePath);

  /// @brief Method ovr_Avatar_UpdateMetaData_Native, addr 0x29ad9f0, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Avatar_UpdateMetaData_Native(void* avatarMetaData, void* imageFilePath);

  /// @brief Method ovr_BlockedUserArray_GetElement, addr 0x29b6568, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_BlockedUserArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_BlockedUserArray_GetNextUrl, addr 0x29b65ec, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_BlockedUserArray_GetNextUrl(void* obj);

  /// @brief Method ovr_BlockedUserArray_GetNextUrl_Native, addr 0x29b6644, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_BlockedUserArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_BlockedUserArray_GetSize, addr 0x29b66c0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_BlockedUserArray_GetSize(void* obj);

  /// @brief Method ovr_BlockedUserArray_HasNextPage, addr 0x29b673c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_BlockedUserArray_HasNextPage(void* obj);

  /// @brief Method ovr_BlockedUser_GetId, addr 0x29b64ec, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_BlockedUser_GetId(void* obj);

  /// @brief Method ovr_ChallengeArray_GetElement, addr 0x29b6df8, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ChallengeArray_GetNextUrl, addr 0x29b6e7c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ChallengeArray_GetNextUrl_Native, addr 0x29b6ed4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeArray_GetPreviousUrl, addr 0x29b6f50, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeArray_GetPreviousUrl(void* obj);

  /// @brief Method ovr_ChallengeArray_GetPreviousUrl_Native, addr 0x29b6fa8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeArray_GetPreviousUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeArray_GetSize, addr 0x29b7024, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeArray_GetSize(void* obj);

  /// @brief Method ovr_ChallengeArray_GetTotalCount, addr 0x29b70a0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeArray_GetTotalCount(void* obj);

  /// @brief Method ovr_ChallengeArray_HasNextPage, addr 0x29b711c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeArray_HasNextPage(void* obj);

  /// @brief Method ovr_ChallengeArray_HasPreviousPage, addr 0x29b71a0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeArray_HasPreviousPage(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetElement, addr 0x29b779c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntryArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ChallengeEntryArray_GetNextUrl, addr 0x29b7820, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeEntryArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetNextUrl_Native, addr 0x29b7878, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntryArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl, addr 0x29b78f4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeEntryArray_GetPreviousUrl(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl_Native, addr 0x29b794c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntryArray_GetPreviousUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetSize, addr 0x29b79c8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntryArray_GetSize(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetTotalCount, addr 0x29b7a44, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeEntryArray_GetTotalCount(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_HasNextPage, addr 0x29b7ac0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeEntryArray_HasNextPage(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_HasPreviousPage, addr 0x29b7b44, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeEntryArray_HasPreviousPage(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetDisplayScore, addr 0x29b7224, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeEntry_GetDisplayScore(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetDisplayScore_Native, addr 0x29b727c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntry_GetDisplayScore_Native(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraData, addr 0x29b72f8, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ovr_ChallengeEntry_GetExtraData(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraDataLength, addr 0x29b745c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_ChallengeEntry_GetExtraDataLength(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraData_Native, addr 0x29b73e0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntry_GetExtraData_Native(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetID, addr 0x29b74d8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeEntry_GetID(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetRank, addr 0x29b7554, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_ChallengeEntry_GetRank(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetScore, addr 0x29b75d0, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_ChallengeEntry_GetScore(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetTimestamp, addr 0x29b764c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_ChallengeEntry_GetTimestamp(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetTimestamp_Native, addr 0x29b76a4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeEntry_GetTimestamp_Native(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetUser, addr 0x29b7720, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntry_GetUser(void* obj);

  /// @brief Method ovr_ChallengeOptions_Create, addr 0x29c28fc, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeOptions_Create();

  /// @brief Method ovr_ChallengeOptions_Destroy, addr 0x29c2964, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_Destroy(void* handle);

  /// @brief Method ovr_ChallengeOptions_SetDescription, addr 0x29c29e0, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetDescription(void* handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetDescription_Native, addr 0x29c2a80, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetDescription_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_SetEndDate, addr 0x29c2b04, size 0x6c, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetEndDate(void* handle, ::System::DateTime value);

  /// @brief Method ovr_ChallengeOptions_SetEndDate_Native, addr 0x29c2b70, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetEndDate_Native(void* handle, uint64_t value);

  /// @brief Method ovr_ChallengeOptions_SetIncludeActiveChallenges, addr 0x29c2bf4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetIncludeActiveChallenges(void* handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetIncludeFutureChallenges, addr 0x29c2c78, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetIncludeFutureChallenges(void* handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetIncludePastChallenges, addr 0x29c2cfc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetIncludePastChallenges(void* handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetLeaderboardName, addr 0x29c2d80, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetLeaderboardName(void* handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetLeaderboardName_Native, addr 0x29c2e20, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetLeaderboardName_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_SetStartDate, addr 0x29c2ea4, size 0x6c, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetStartDate(void* handle, ::System::DateTime value);

  /// @brief Method ovr_ChallengeOptions_SetStartDate_Native, addr 0x29c2f10, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetStartDate_Native(void* handle, uint64_t value);

  /// @brief Method ovr_ChallengeOptions_SetTitle, addr 0x29c2f94, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetTitle(void* handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetTitle_Native, addr 0x29c3034, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetTitle_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_SetViewerFilter, addr 0x29c30b8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetViewerFilter(void* handle, ::Oculus::Platform::ChallengeViewerFilter value);

  /// @brief Method ovr_ChallengeOptions_SetVisibility, addr 0x29c313c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetVisibility(void* handle, ::Oculus::Platform::ChallengeVisibility value);

  /// @brief Method ovr_Challenge_GetCreationType, addr 0x29b67c0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ChallengeCreationType ovr_Challenge_GetCreationType(void* obj);

  /// @brief Method ovr_Challenge_GetDescription, addr 0x29b683c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Challenge_GetDescription(void* obj);

  /// @brief Method ovr_Challenge_GetDescription_Native, addr 0x29b6894, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetDescription_Native(void* obj);

  /// @brief Method ovr_Challenge_GetEndDate, addr 0x29b6910, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Challenge_GetEndDate(void* obj);

  /// @brief Method ovr_Challenge_GetEndDate_Native, addr 0x29b6968, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenge_GetEndDate_Native(void* obj);

  /// @brief Method ovr_Challenge_GetID, addr 0x29b69e4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenge_GetID(void* obj);

  /// @brief Method ovr_Challenge_GetInvitedUsers, addr 0x29b6a60, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetInvitedUsers(void* obj);

  /// @brief Method ovr_Challenge_GetLeaderboard, addr 0x29b6adc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetLeaderboard(void* obj);

  /// @brief Method ovr_Challenge_GetParticipants, addr 0x29b6b58, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetParticipants(void* obj);

  /// @brief Method ovr_Challenge_GetStartDate, addr 0x29b6bd4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Challenge_GetStartDate(void* obj);

  /// @brief Method ovr_Challenge_GetStartDate_Native, addr 0x29b6c2c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenge_GetStartDate_Native(void* obj);

  /// @brief Method ovr_Challenge_GetTitle, addr 0x29b6ca8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Challenge_GetTitle(void* obj);

  /// @brief Method ovr_Challenge_GetTitle_Native, addr 0x29b6d00, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetTitle_Native(void* obj);

  /// @brief Method ovr_Challenge_GetVisibility, addr 0x29b6d7c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ChallengeVisibility ovr_Challenge_GetVisibility(void* obj);

  /// @brief Method ovr_Challenges_Create, addr 0x29ada74, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Create(::StringW leaderboardName, void* challengeOptions);

  /// @brief Method ovr_Challenges_Create_Native, addr 0x29adb20, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Create_Native(void* leaderboardName, void* challengeOptions);

  /// @brief Method ovr_Challenges_DeclineInvite, addr 0x29adba4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_DeclineInvite(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Delete, addr 0x29adc20, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Delete(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Get, addr 0x29adc9c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Get(uint64_t challengeID);

  /// @brief Method ovr_Challenges_GetEntries, addr 0x29add18, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetEntries(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Challenges_GetEntriesAfterRank, addr 0x29addb4, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetEntriesAfterRank(uint64_t challengeID, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Challenges_GetEntriesByIds, addr 0x29ade48, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetEntriesByIds(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                        uint32_t userIDLength);

  /// @brief Method ovr_Challenges_GetList, addr 0x29adefc, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetList(void* challengeOptions, int32_t limit);

  /// @brief Method ovr_Challenges_GetNextChallenges, addr 0x29adf80, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetNextChallenges(void* handle);

  /// @brief Method ovr_Challenges_GetNextEntries, addr 0x29adffc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetNextEntries(void* handle);

  /// @brief Method ovr_Challenges_GetPreviousChallenges, addr 0x29ae078, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetPreviousChallenges(void* handle);

  /// @brief Method ovr_Challenges_GetPreviousEntries, addr 0x29ae0f4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetPreviousEntries(void* handle);

  /// @brief Method ovr_Challenges_Join, addr 0x29ae170, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Join(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Leave, addr 0x29ae1ec, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Leave(uint64_t challengeID);

  /// @brief Method ovr_Challenges_UpdateInfo, addr 0x29ae268, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_UpdateInfo(uint64_t challengeID, void* challengeOptions);

  /// @brief Method ovr_Colocation_GetCurrentMapUuid, addr 0x29ae2ec, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_GetCurrentMapUuid();

  /// @brief Method ovr_Colocation_RequestMap, addr 0x29ae354, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_RequestMap(::StringW uuid);

  /// @brief Method ovr_Colocation_RequestMap_Native, addr 0x29ae3f0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_RequestMap_Native(void* uuid);

  /// @brief Method ovr_Colocation_ShareMap, addr 0x29ae46c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_ShareMap(::StringW uuid);

  /// @brief Method ovr_Colocation_ShareMap_Native, addr 0x29ae508, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_ShareMap_Native(void* uuid);

  /// @brief Method ovr_CrashApplication, addr 0x29aa5f0, size 0x64, virtual false, abstract: false, final false
  static inline void ovr_CrashApplication();

  /// @brief Method ovr_DataStore_Contains, addr 0x29b7bc8, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t ovr_DataStore_Contains(void* obj, ::StringW key);

  /// @brief Method ovr_DataStore_Contains_Native, addr 0x29b7c78, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t ovr_DataStore_Contains_Native(void* obj, void* key);

  /// @brief Method ovr_DataStore_GetKey, addr 0x29a91f0, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ovr_DataStore_GetKey(void* obj, int32_t index);

  /// @brief Method ovr_DataStore_GetKey_Native, addr 0x29b7cfc, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_DataStore_GetKey_Native(void* obj, int32_t index);

  /// @brief Method ovr_DataStore_GetNumKeys, addr 0x29a9174, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_DataStore_GetNumKeys(void* obj);

  /// @brief Method ovr_DataStore_GetValue, addr 0x29a9258, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW ovr_DataStore_GetValue(void* obj, ::StringW key);

  /// @brief Method ovr_DataStore_GetValue_Native, addr 0x29b7d80, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_DataStore_GetValue_Native(void* obj, void* key);

  /// @brief Method ovr_DestinationArray_GetElement, addr 0x29b8080, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_DestinationArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_DestinationArray_GetNextUrl, addr 0x29b8104, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_DestinationArray_GetNextUrl(void* obj);

  /// @brief Method ovr_DestinationArray_GetNextUrl_Native, addr 0x29b815c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_DestinationArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_DestinationArray_GetSize, addr 0x29b81d8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_DestinationArray_GetSize(void* obj);

  /// @brief Method ovr_DestinationArray_HasNextPage, addr 0x29b8254, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_DestinationArray_HasNextPage(void* obj);

  /// @brief Method ovr_Destination_GetApiName, addr 0x29b7e04, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Destination_GetApiName(void* obj);

  /// @brief Method ovr_Destination_GetApiName_Native, addr 0x29b7e5c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Destination_GetApiName_Native(void* obj);

  /// @brief Method ovr_Destination_GetDeeplinkMessage, addr 0x29b7ed8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Destination_GetDeeplinkMessage(void* obj);

  /// @brief Method ovr_Destination_GetDeeplinkMessage_Native, addr 0x29b7f30, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Destination_GetDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_Destination_GetDisplayName, addr 0x29b7fac, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Destination_GetDisplayName(void* obj);

  /// @brief Method ovr_Destination_GetDisplayName_Native, addr 0x29b8004, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Destination_GetDisplayName_Native(void* obj);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken, addr 0x29ae584, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken(::StringW challenge_nonce);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken_Native, addr 0x29ae620, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken_Native(void* challenge_nonce);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken, addr 0x29ae69c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken(::StringW challenge_nonce);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native, addr 0x29ae738, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native(void* challenge_nonce);

  /// @brief Method ovr_Entitlement_GetIsViewerEntitled, addr 0x29ae7b4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Entitlement_GetIsViewerEntitled();

  /// @brief Method ovr_Error_GetCode, addr 0x29b82d8, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ovr_Error_GetCode(void* obj);

  /// @brief Method ovr_Error_GetDisplayableMessage, addr 0x29b8350, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Error_GetDisplayableMessage(void* obj);

  /// @brief Method ovr_Error_GetDisplayableMessage_Native, addr 0x29b83a8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Error_GetDisplayableMessage_Native(void* obj);

  /// @brief Method ovr_Error_GetHttpCode, addr 0x29b8424, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_Error_GetHttpCode(void* obj);

  /// @brief Method ovr_Error_GetMessage, addr 0x29b84a0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Error_GetMessage(void* obj);

  /// @brief Method ovr_Error_GetMessage_Native, addr 0x29b84f8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Error_GetMessage_Native(void* obj);

  /// @brief Method ovr_FreeMessage, addr 0x29aa034, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_FreeMessage(void* message);

  /// @brief Method ovr_GetLoggedInUserLocale, addr 0x29a9f14, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW ovr_GetLoggedInUserLocale();

  /// @brief Method ovr_GetLoggedInUserLocale_Native, addr 0x29a9f64, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_GetLoggedInUserLocale_Native();

  /// @brief Method ovr_GraphAPI_Get, addr 0x29ae81c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Get(::StringW url);

  /// @brief Method ovr_GraphAPI_Get_Native, addr 0x29ae8b8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Get_Native(void* url);

  /// @brief Method ovr_GraphAPI_Post, addr 0x29ae934, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Post(::StringW url);

  /// @brief Method ovr_GraphAPI_Post_Native, addr 0x29ae9d0, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Post_Native(void* url);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage, addr 0x29b8574, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetDeeplinkMessage(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native, addr 0x29b85cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName, addr 0x29b8648, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetDestinationApiName(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native, addr 0x29b86a0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId, addr 0x29b871c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetLobbySessionId(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native, addr 0x29b8774, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId, addr 0x29b87f0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetMatchSessionId(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native, addr 0x29b8848, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName, addr 0x29b88c4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetDestinationApiName(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native, addr 0x29b891c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId, addr 0x29b8998, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetLobbySessionId(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native, addr 0x29b89f0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId, addr 0x29b8a6c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetMatchSessionId(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native, addr 0x29b8ac4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceOptions_Create, addr 0x29c31c0, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceOptions_Create();

  /// @brief Method ovr_GroupPresenceOptions_Destroy, addr 0x29c3228, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_Destroy(void* handle);

  /// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride, addr 0x29c32a4, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x29c3344, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName, addr 0x29c33c8, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDestinationApiName(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName_Native, addr 0x29c3468, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDestinationApiName_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresenceOptions_SetIsJoinable, addr 0x29c34ec, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetIsJoinable(void* handle, bool value);

  /// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId, addr 0x29c3570, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetLobbySessionId(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId_Native, addr 0x29c3610, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetLobbySessionId_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId, addr 0x29c3694, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetMatchSessionId(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId_Native, addr 0x29c3734, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetMatchSessionId_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresence_Clear, addr 0x29aea48, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_Clear();

  /// @brief Method ovr_GroupPresence_GetInvitableUsers, addr 0x29aeab0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_GetInvitableUsers(void* options);

  /// @brief Method ovr_GroupPresence_GetSentInvites, addr 0x29aeb2c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_GetSentInvites();

  /// @brief Method ovr_GroupPresence_LaunchInvitePanel, addr 0x29aeb94, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchInvitePanel(void* options);

  /// @brief Method ovr_GroupPresence_LaunchMultiplayerErrorDialog, addr 0x29aec10, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchMultiplayerErrorDialog(void* options);

  /// @brief Method ovr_GroupPresence_LaunchRejoinDialog, addr 0x29aec8c, size 0xe8, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog(::StringW lobby_session_id, ::StringW match_session_id, ::StringW destination_api_name);

  /// @brief Method ovr_GroupPresence_LaunchRejoinDialog_Native, addr 0x29aed74, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog_Native(void* lobby_session_id, void* match_session_id, void* destination_api_name);

  /// @brief Method ovr_GroupPresence_LaunchRosterPanel, addr 0x29aee08, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchRosterPanel(void* options);

  /// @brief Method ovr_GroupPresence_SendInvites, addr 0x29aee84, size 0x8c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SendInvites(::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs, uint32_t userIDLength);

  /// @brief Method ovr_GroupPresence_Set, addr 0x29aef10, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_Set(void* groupPresenceOptions);

  /// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride, addr 0x29aef8c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride(::StringW deeplink_message);

  /// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride_Native, addr 0x29af028, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride_Native(void* deeplink_message);

  /// @brief Method ovr_GroupPresence_SetDestination, addr 0x29af0a4, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDestination(::StringW api_name);

  /// @brief Method ovr_GroupPresence_SetDestination_Native, addr 0x29af140, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDestination_Native(void* api_name);

  /// @brief Method ovr_GroupPresence_SetIsJoinable, addr 0x29af1bc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetIsJoinable(bool is_joinable);

  /// @brief Method ovr_GroupPresence_SetLobbySession, addr 0x29af238, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetLobbySession(::StringW id);

  /// @brief Method ovr_GroupPresence_SetLobbySession_Native, addr 0x29af2d4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetLobbySession_Native(void* id);

  /// @brief Method ovr_GroupPresence_SetMatchSession, addr 0x29af350, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetMatchSession(::StringW id);

  /// @brief Method ovr_GroupPresence_SetMatchSession_Native, addr 0x29af3ec, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetMatchSession_Native(void* id);

  /// @brief Method ovr_HTTP_Get, addr 0x29af468, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Get(::StringW url);

  /// @brief Method ovr_HTTP_GetToFile, addr 0x29af580, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_GetToFile(::StringW url, ::StringW diskFile);

  /// @brief Method ovr_HTTP_GetToFile_Native, addr 0x29af648, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_GetToFile_Native(void* url, void* diskFile);

  /// @brief Method ovr_HTTP_GetWithMessageType, addr 0x29aa554, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_GetWithMessageType(::StringW url, int32_t messageType);

  /// @brief Method ovr_HTTP_Get_Native, addr 0x29af504, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Get_Native(void* url);

  /// @brief Method ovr_HTTP_MultiPartPost, addr 0x29af6cc, size 0x154, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_MultiPartPost(::StringW url, ::StringW filepath_param_name, ::StringW filepath, ::StringW access_token,
                                                ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> post_params);

  /// @brief Method ovr_HTTP_MultiPartPost_Native, addr 0x29af820, size 0x1d8, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_MultiPartPost_Native(void* url, void* filepath_param_name, void* filepath, void* access_token,
                                                       ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> post_params, void* numItems);

  /// @brief Method ovr_HTTP_Post, addr 0x29af9f8, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Post(::StringW url);

  /// @brief Method ovr_HTTP_Post_Native, addr 0x29afa94, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Post_Native(void* url);

  /// @brief Method ovr_HTTP_StartTransfer, addr 0x29aad7c, size 0xec, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_StartTransfer(::StringW url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> headers);

  /// @brief Method ovr_HTTP_StartTransfer_Native, addr 0x29aae68, size 0x1a4, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_StartTransfer_Native(void* url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> headers, void* numItems);

  /// @brief Method ovr_HTTP_Write, addr 0x29ab00c, size 0xa4, virtual false, abstract: false, final false
  static inline bool ovr_HTTP_Write(uint64_t transferId, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, void* length);

  /// @brief Method ovr_HTTP_WriteEOM, addr 0x29ab0b0, size 0x78, virtual false, abstract: false, final false
  static inline void ovr_HTTP_WriteEOM(uint64_t transferId);

  /// @brief Method ovr_HttpTransferUpdate_GetBytes, addr 0x29b8b40, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_HttpTransferUpdate_GetBytes(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_GetID, addr 0x29b8bbc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HttpTransferUpdate_GetID(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_GetSize, addr 0x29b8c38, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_HttpTransferUpdate_GetSize(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_IsCompleted, addr 0x29b8cb4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_HttpTransferUpdate_IsCompleted(void* obj);

  /// @brief Method ovr_IAP_ConsumePurchase, addr 0x29afb10, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_ConsumePurchase(::StringW sku);

  /// @brief Method ovr_IAP_ConsumePurchase_Native, addr 0x29afbac, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_ConsumePurchase_Native(void* sku);

  /// @brief Method ovr_IAP_GetProductsBySKU, addr 0x29afc28, size 0x148, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_GetProductsBySKU(::ArrayW<::StringW, ::Array<::StringW>*> skus, int32_t count);

  /// @brief Method ovr_IAP_GetViewerPurchases, addr 0x29afd70, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_GetViewerPurchases();

  /// @brief Method ovr_IAP_GetViewerPurchasesDurableCache, addr 0x29afdd8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_GetViewerPurchasesDurableCache();

  /// @brief Method ovr_IAP_LaunchCheckoutFlow, addr 0x29afe40, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_LaunchCheckoutFlow(::StringW sku);

  /// @brief Method ovr_IAP_LaunchCheckoutFlow_Native, addr 0x29afedc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_LaunchCheckoutFlow_Native(void* sku);

  /// @brief Method ovr_InstalledApplicationArray_GetElement, addr 0x29b9104, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplicationArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_InstalledApplicationArray_GetSize, addr 0x29b9188, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplicationArray_GetSize(void* obj);

  /// @brief Method ovr_InstalledApplication_GetApplicationId, addr 0x29b8d38, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetApplicationId(void* obj);

  /// @brief Method ovr_InstalledApplication_GetApplicationId_Native, addr 0x29b8d90, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplication_GetApplicationId_Native(void* obj);

  /// @brief Method ovr_InstalledApplication_GetPackageName, addr 0x29b8e0c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetPackageName(void* obj);

  /// @brief Method ovr_InstalledApplication_GetPackageName_Native, addr 0x29b8e64, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplication_GetPackageName_Native(void* obj);

  /// @brief Method ovr_InstalledApplication_GetStatus, addr 0x29b8ee0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetStatus(void* obj);

  /// @brief Method ovr_InstalledApplication_GetStatus_Native, addr 0x29b8f38, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplication_GetStatus_Native(void* obj);

  /// @brief Method ovr_InstalledApplication_GetVersionCode, addr 0x29b8fb4, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_InstalledApplication_GetVersionCode(void* obj);

  /// @brief Method ovr_InstalledApplication_GetVersionName, addr 0x29b9030, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetVersionName(void* obj);

  /// @brief Method ovr_InstalledApplication_GetVersionName_Native, addr 0x29b9088, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplication_GetVersionName_Native(void* obj);

  /// @brief Method ovr_InviteOptions_AddSuggestedUser, addr 0x29c389c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_InviteOptions_AddSuggestedUser(void* handle, uint64_t value);

  /// @brief Method ovr_InviteOptions_ClearSuggestedUsers, addr 0x29c3920, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_InviteOptions_ClearSuggestedUsers(void* handle);

  /// @brief Method ovr_InviteOptions_Create, addr 0x29c37b8, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_InviteOptions_Create();

  /// @brief Method ovr_InviteOptions_Destroy, addr 0x29c3820, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_InviteOptions_Destroy(void* handle);

  /// @brief Method ovr_InvitePanelResultInfo_GetInvitesSent, addr 0x29b9204, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_InvitePanelResultInfo_GetInvitesSent(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetEnglishName, addr 0x29b9288, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LanguagePackInfo_GetEnglishName(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetEnglishName_Native, addr 0x29b92e0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LanguagePackInfo_GetEnglishName_Native(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetNativeName, addr 0x29b935c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LanguagePackInfo_GetNativeName(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetNativeName_Native, addr 0x29b93b4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LanguagePackInfo_GetNativeName_Native(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetTag, addr 0x29b9430, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LanguagePackInfo_GetTag(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetTag_Native, addr 0x29b9488, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LanguagePackInfo_GetTag_Native(void* obj);

  /// @brief Method ovr_LanguagePack_GetCurrent, addr 0x29aff58, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_LanguagePack_GetCurrent();

  /// @brief Method ovr_LanguagePack_SetCurrent, addr 0x29affc0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LanguagePack_SetCurrent(::StringW tag);

  /// @brief Method ovr_LanguagePack_SetCurrent_Native, addr 0x29b005c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LanguagePack_SetCurrent_Native(void* tag);

  /// @brief Method ovr_LaunchBlockFlowResult_GetDidBlock, addr 0x29b9504, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchBlockFlowResult_GetDidBlock(void* obj);

  /// @brief Method ovr_LaunchBlockFlowResult_GetDidCancel, addr 0x29b9588, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchBlockFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDeeplinkMessage, addr 0x29b960c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetDeeplinkMessage(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDeeplinkMessage_Native, addr 0x29b9664, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDestinationApiName, addr 0x29b96e0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetDestinationApiName(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDestinationApiName_Native, addr 0x29b9738, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetDestinationApiName_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchSource, addr 0x29b97b4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetLaunchSource(void* obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchSource_Native, addr 0x29b980c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetLaunchSource_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchType, addr 0x29b9888, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::LaunchType ovr_LaunchDetails_GetLaunchType(void* obj);

  /// @brief Method ovr_LaunchDetails_GetTrackingID, addr 0x29b9904, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetTrackingID(void* obj);

  /// @brief Method ovr_LaunchDetails_GetTrackingID_Native, addr 0x29b995c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetTrackingID_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetUsers, addr 0x29b99d8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetUsers(void* obj);

  /// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidCancel, addr 0x29b9a54, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchFriendRequestFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidSendRequest, addr 0x29b9ad8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchFriendRequestFlowResult_GetDidSendRequest(void* obj);

  /// @brief Method ovr_LaunchInvitePanelFlowResult_GetInvitedUsers, addr 0x29b9b5c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchInvitePanelFlowResult_GetInvitedUsers(void* obj);

  /// @brief Method ovr_LaunchReportFlowResult_GetDidCancel, addr 0x29b9bd8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchReportFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchReportFlowResult_GetUserReportId, addr 0x29b9c5c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LaunchReportFlowResult_GetUserReportId(void* obj);

  /// @brief Method ovr_LaunchUnblockFlowResult_GetDidCancel, addr 0x29b9cd8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchUnblockFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchUnblockFlowResult_GetDidUnblock, addr 0x29b9d5c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchUnblockFlowResult_GetDidUnblock(void* obj);

  /// @brief Method ovr_LeaderboardArray_GetElement, addr 0x29b9fac, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_LeaderboardArray_GetNextUrl, addr 0x29ba030, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardArray_GetNextUrl(void* obj);

  /// @brief Method ovr_LeaderboardArray_GetNextUrl_Native, addr 0x29ba088, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_LeaderboardArray_GetSize, addr 0x29ba104, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardArray_GetSize(void* obj);

  /// @brief Method ovr_LeaderboardArray_HasNextPage, addr 0x29ba180, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardArray_HasNextPage(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetElement, addr 0x29ba700, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntryArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_LeaderboardEntryArray_GetNextUrl, addr 0x29ba784, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardEntryArray_GetNextUrl(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetNextUrl_Native, addr 0x29ba7dc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntryArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl, addr 0x29ba858, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardEntryArray_GetPreviousUrl(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl_Native, addr 0x29ba8b0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntryArray_GetPreviousUrl_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetSize, addr 0x29ba92c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntryArray_GetSize(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetTotalCount, addr 0x29ba9a8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardEntryArray_GetTotalCount(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_HasNextPage, addr 0x29baa24, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardEntryArray_HasNextPage(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_HasPreviousPage, addr 0x29baaa8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardEntryArray_HasPreviousPage(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetDisplayScore, addr 0x29ba204, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardEntry_GetDisplayScore(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetDisplayScore_Native, addr 0x29ba25c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntry_GetDisplayScore_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraData, addr 0x29ba2d8, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ovr_LeaderboardEntry_GetExtraData(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraDataLength, addr 0x29b7364, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_LeaderboardEntry_GetExtraDataLength(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraData_Native, addr 0x29ba344, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntry_GetExtraData_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetID, addr 0x29ba3c0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardEntry_GetID(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetRank, addr 0x29ba43c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LeaderboardEntry_GetRank(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetScore, addr 0x29ba4b8, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_LeaderboardEntry_GetScore(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetSupplementaryMetric, addr 0x29ba534, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntry_GetSupplementaryMetric(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetTimestamp, addr 0x29ba5b0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_LeaderboardEntry_GetTimestamp(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetTimestamp_Native, addr 0x29ba608, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardEntry_GetTimestamp_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetUser, addr 0x29ba684, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntry_GetUser(void* obj);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetDidUpdate, addr 0x29bab2c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardUpdateStatus_GetDidUpdate(void* obj);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId, addr 0x29babb0, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId(void* obj, uint32_t index);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize, addr 0x29bac34, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize(void* obj);

  /// @brief Method ovr_Leaderboard_Get, addr 0x29b00d8, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_Get(::StringW leaderboardName);

  /// @brief Method ovr_Leaderboard_GetApiName, addr 0x29b9de0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Leaderboard_GetApiName(void* obj);

  /// @brief Method ovr_Leaderboard_GetApiName_Native, addr 0x29b9e38, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Leaderboard_GetApiName_Native(void* obj);

  /// @brief Method ovr_Leaderboard_GetDestination, addr 0x29b9eb4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Leaderboard_GetDestination(void* obj);

  /// @brief Method ovr_Leaderboard_GetEntries, addr 0x29b01f0, size 0xc4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntries(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Leaderboard_GetEntriesAfterRank, addr 0x29b0350, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank(::StringW leaderboardName, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Leaderboard_GetEntriesAfterRank_Native, addr 0x29b0404, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank_Native(void* leaderboardName, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Leaderboard_GetEntriesByIds, addr 0x29b0498, size 0xcc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesByIds(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                         uint32_t userIDLength);

  /// @brief Method ovr_Leaderboard_GetEntriesByIds_Native, addr 0x29b0564, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesByIds_Native(void* leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                                uint32_t userIDLength);

  /// @brief Method ovr_Leaderboard_GetEntries_Native, addr 0x29b02b4, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntries_Native(void* leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Leaderboard_GetID, addr 0x29b9f30, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetID(void* obj);

  /// @brief Method ovr_Leaderboard_GetNextEntries, addr 0x29b0618, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetNextEntries(void* handle);

  /// @brief Method ovr_Leaderboard_GetPreviousEntries, addr 0x29b0694, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetPreviousEntries(void* handle);

  /// @brief Method ovr_Leaderboard_Get_Native, addr 0x29b0174, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_Get_Native(void* leaderboardName);

  /// @brief Method ovr_Leaderboard_WriteEntry, addr 0x29b0710, size 0xcc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntry(::StringW leaderboardName, int64_t score, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData, uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric, addr 0x29b0890, size 0xdc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric(::StringW leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData,
                                                                           uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native, addr 0x29b096c, size 0xbc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native(void* leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData,
                                                                                  uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntry_Native, addr 0x29b07dc, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntry_Native(void* leaderboardName, int64_t score, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData, uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_LinkedAccountArray_GetElement, addr 0x29baed4, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_LinkedAccountArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_LinkedAccountArray_GetSize, addr 0x29baf58, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LinkedAccountArray_GetSize(void* obj);

  /// @brief Method ovr_LinkedAccount_GetAccessToken, addr 0x29bacb0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LinkedAccount_GetAccessToken(void* obj);

  /// @brief Method ovr_LinkedAccount_GetAccessToken_Native, addr 0x29bad08, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LinkedAccount_GetAccessToken_Native(void* obj);

  /// @brief Method ovr_LinkedAccount_GetServiceProvider, addr 0x29bad84, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ServiceProvider ovr_LinkedAccount_GetServiceProvider(void* obj);

  /// @brief Method ovr_LinkedAccount_GetUserId, addr 0x29bae00, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LinkedAccount_GetUserId(void* obj);

  /// @brief Method ovr_LinkedAccount_GetUserId_Native, addr 0x29bae58, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LinkedAccount_GetUserId_Native(void* obj);

  /// @brief Method ovr_LivestreamingApplicationStatus_GetStreamingEnabled, addr 0x29bafd4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingApplicationStatus_GetStreamingEnabled(void* obj);

  /// @brief Method ovr_LivestreamingStartResult_GetStreamingResult, addr 0x29bb058, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::LivestreamingStartStatus ovr_LivestreamingStartResult_GetStreamingResult(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetCommentsVisible, addr 0x29bb0d4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetCommentsVisible(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetIsPaused, addr 0x29bb158, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetIsPaused(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetLivestreamingEnabled, addr 0x29bb1dc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetLivestreamingEnabled(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetLivestreamingType, addr 0x29bb260, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LivestreamingStatus_GetLivestreamingType(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetMicEnabled, addr 0x29bb2dc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetMicEnabled(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetCommentCount, addr 0x29bb360, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LivestreamingVideoStats_GetCommentCount(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetReactionCount, addr 0x29bb3dc, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LivestreamingVideoStats_GetReactionCount(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetTotalViews, addr 0x29bb458, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LivestreamingVideoStats_GetTotalViews(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetTotalViews_Native, addr 0x29bb4b0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LivestreamingVideoStats_GetTotalViews_Native(void* obj);

  /// @brief Method ovr_Livestreaming_IsAllowedForApplication, addr 0x29b0a28, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_IsAllowedForApplication(::StringW packageName);

  /// @brief Method ovr_Livestreaming_IsAllowedForApplication_Native, addr 0x29b0ac4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_IsAllowedForApplication_Native(void* packageName);

  /// @brief Method ovr_Livestreaming_StartPartyStream, addr 0x29b0b40, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StartPartyStream();

  /// @brief Method ovr_Livestreaming_StartStream, addr 0x29b0ba8, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StartStream(::Oculus::Platform::LivestreamingAudience audience, ::Oculus::Platform::LivestreamingMicrophoneStatus micStatus);

  /// @brief Method ovr_Livestreaming_StopPartyStream, addr 0x29b0c2c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StopPartyStream();

  /// @brief Method ovr_Livestreaming_StopStream, addr 0x29b0c94, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StopStream();

  /// @brief Method ovr_Livestreaming_UpdateMicStatus, addr 0x29b0cfc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_UpdateMicStatus(::Oculus::Platform::LivestreamingMicrophoneStatus micStatus);

  /// @brief Method ovr_Log_NewEvent, addr 0x29aab58, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_Log_NewEvent(void* eventName, ::ArrayW<void*, ::Array<void*>*> values, void* length);

  /// @brief Method ovr_Media_ShareToFacebook, addr 0x29b0d78, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_Media_ShareToFacebook(::StringW postTextSuggestion, ::StringW filePath, ::Oculus::Platform::MediaContentType contentType);

  /// @brief Method ovr_Media_ShareToFacebook_Native, addr 0x29b0e48, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Media_ShareToFacebook_Native(void* postTextSuggestion, void* filePath, ::Oculus::Platform::MediaContentType contentType);

  /// @brief Method ovr_Message_GetAbuseReportRecording, addr 0x29bb52c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAbuseReportRecording(void* obj);

  /// @brief Method ovr_Message_GetAchievementDefinitionArray, addr 0x29bb5a8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAchievementDefinitionArray(void* obj);

  /// @brief Method ovr_Message_GetAchievementProgressArray, addr 0x29bb624, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAchievementProgressArray(void* obj);

  /// @brief Method ovr_Message_GetAchievementUpdate, addr 0x29bb6a0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAchievementUpdate(void* obj);

  /// @brief Method ovr_Message_GetAppDownloadProgressResult, addr 0x29bb71c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAppDownloadProgressResult(void* obj);

  /// @brief Method ovr_Message_GetAppDownloadResult, addr 0x29bb798, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAppDownloadResult(void* obj);

  /// @brief Method ovr_Message_GetApplicationInviteArray, addr 0x29bb814, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetApplicationInviteArray(void* obj);

  /// @brief Method ovr_Message_GetApplicationVersion, addr 0x29bb890, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetApplicationVersion(void* obj);

  /// @brief Method ovr_Message_GetAssetDetails, addr 0x29bb90c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetDetails(void* obj);

  /// @brief Method ovr_Message_GetAssetDetailsArray, addr 0x29bb988, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetDetailsArray(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDeleteResult, addr 0x29bba04, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetFileDeleteResult(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadCancelResult, addr 0x29bba80, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetFileDownloadCancelResult(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadResult, addr 0x29bbafc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetFileDownloadResult(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadUpdate, addr 0x29bbb78, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetFileDownloadUpdate(void* obj);

  /// @brief Method ovr_Message_GetAvatarEditorResult, addr 0x29bbbf4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAvatarEditorResult(void* obj);

  /// @brief Method ovr_Message_GetBlockedUserArray, addr 0x29bbc70, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetBlockedUserArray(void* obj);

  /// @brief Method ovr_Message_GetChallenge, addr 0x29bbcec, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetChallenge(void* obj);

  /// @brief Method ovr_Message_GetChallengeArray, addr 0x29bbd68, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetChallengeArray(void* obj);

  /// @brief Method ovr_Message_GetChallengeEntryArray, addr 0x29bbde4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetChallengeEntryArray(void* obj);

  /// @brief Method ovr_Message_GetDataStore, addr 0x29bbe60, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetDataStore(void* obj);

  /// @brief Method ovr_Message_GetDestinationArray, addr 0x29bbedc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetDestinationArray(void* obj);

  /// @brief Method ovr_Message_GetError, addr 0x29bbf58, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetError(void* obj);

  /// @brief Method ovr_Message_GetGroupPresenceJoinIntent, addr 0x29bbfd4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetGroupPresenceJoinIntent(void* obj);

  /// @brief Method ovr_Message_GetGroupPresenceLeaveIntent, addr 0x29bc050, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetGroupPresenceLeaveIntent(void* obj);

  /// @brief Method ovr_Message_GetHttpTransferUpdate, addr 0x29bc0cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetHttpTransferUpdate(void* obj);

  /// @brief Method ovr_Message_GetInstalledApplicationArray, addr 0x29bc148, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetInstalledApplicationArray(void* obj);

  /// @brief Method ovr_Message_GetInvitePanelResultInfo, addr 0x29bc1c4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetInvitePanelResultInfo(void* obj);

  /// @brief Method ovr_Message_GetLaunchBlockFlowResult, addr 0x29bc240, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchBlockFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchFriendRequestFlowResult, addr 0x29bc2bc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchFriendRequestFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchInvitePanelFlowResult, addr 0x29bc338, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchInvitePanelFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchReportFlowResult, addr 0x29bc3b4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchReportFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchUnblockFlowResult, addr 0x29bc430, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchUnblockFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLeaderboardArray, addr 0x29bc4ac, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLeaderboardArray(void* obj);

  /// @brief Method ovr_Message_GetLeaderboardEntryArray, addr 0x29bc528, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLeaderboardEntryArray(void* obj);

  /// @brief Method ovr_Message_GetLeaderboardUpdateStatus, addr 0x29bc5a4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLeaderboardUpdateStatus(void* obj);

  /// @brief Method ovr_Message_GetLinkedAccountArray, addr 0x29bc620, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLinkedAccountArray(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingApplicationStatus, addr 0x29bc69c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLivestreamingApplicationStatus(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingStartResult, addr 0x29bc718, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLivestreamingStartResult(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingStatus, addr 0x29bc794, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLivestreamingStatus(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingVideoStats, addr 0x29bc810, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLivestreamingVideoStats(void* obj);

  /// @brief Method ovr_Message_GetMicrophoneAvailabilityState, addr 0x29bc88c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetMicrophoneAvailabilityState(void* obj);

  /// @brief Method ovr_Message_GetNativeMessage, addr 0x29bc908, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNativeMessage(void* obj);

  /// @brief Method ovr_Message_GetNetSyncConnection, addr 0x29bc984, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncConnection(void* obj);

  /// @brief Method ovr_Message_GetNetSyncSessionArray, addr 0x29bca00, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncSessionArray(void* obj);

  /// @brief Method ovr_Message_GetNetSyncSessionsChangedNotification, addr 0x29bca7c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncSessionsChangedNotification(void* obj);

  /// @brief Method ovr_Message_GetNetSyncSetSessionPropertyResult, addr 0x29bcaf8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncSetSessionPropertyResult(void* obj);

  /// @brief Method ovr_Message_GetNetSyncVoipAttenuationValueArray, addr 0x29bcb74, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncVoipAttenuationValueArray(void* obj);

  /// @brief Method ovr_Message_GetOrgScopedID, addr 0x29bcbf0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetOrgScopedID(void* obj);

  /// @brief Method ovr_Message_GetParty, addr 0x29bcc6c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetParty(void* obj);

  /// @brief Method ovr_Message_GetPartyID, addr 0x29bcce8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPartyID(void* obj);

  /// @brief Method ovr_Message_GetPartyUpdateNotification, addr 0x29bcd64, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPartyUpdateNotification(void* obj);

  /// @brief Method ovr_Message_GetPidArray, addr 0x29bcde0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPidArray(void* obj);

  /// @brief Method ovr_Message_GetPlatformInitialize, addr 0x29bce5c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPlatformInitialize(void* obj);

  /// @brief Method ovr_Message_GetProductArray, addr 0x29bced8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetProductArray(void* obj);

  /// @brief Method ovr_Message_GetPurchase, addr 0x29bcf54, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPurchase(void* obj);

  /// @brief Method ovr_Message_GetPurchaseArray, addr 0x29bcfd0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPurchaseArray(void* obj);

  /// @brief Method ovr_Message_GetRejoinDialogResult, addr 0x29bd04c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetRejoinDialogResult(void* obj);

  /// @brief Method ovr_Message_GetRequestID, addr 0x29bd0c8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Message_GetRequestID(void* obj);

  /// @brief Method ovr_Message_GetSdkAccountArray, addr 0x29bd144, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetSdkAccountArray(void* obj);

  /// @brief Method ovr_Message_GetSendInvitesResult, addr 0x29bd1c0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetSendInvitesResult(void* obj);

  /// @brief Method ovr_Message_GetShareMediaResult, addr 0x29bd23c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetShareMediaResult(void* obj);

  /// @brief Method ovr_Message_GetString, addr 0x29bd2b8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Message_GetString(void* obj);

  /// @brief Method ovr_Message_GetStringForJavascript, addr 0x29ab128, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Message_GetStringForJavascript(void* message);

  /// @brief Method ovr_Message_GetStringForJavascript_Native, addr 0x29ab180, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetStringForJavascript_Native(void* message);

  /// @brief Method ovr_Message_GetString_Native, addr 0x29bd310, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetString_Native(void* obj);

  /// @brief Method ovr_Message_GetSystemVoipState, addr 0x29bd38c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetSystemVoipState(void* obj);

  /// @brief Method ovr_Message_GetType, addr 0x29bd408, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::__Message__MessageType ovr_Message_GetType(void* obj);

  /// @brief Method ovr_Message_GetUser, addr 0x29bd484, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUser(void* obj);

  /// @brief Method ovr_Message_GetUserAccountAgeCategory, addr 0x29bd500, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserAccountAgeCategory(void* obj);

  /// @brief Method ovr_Message_GetUserArray, addr 0x29bd57c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserArray(void* obj);

  /// @brief Method ovr_Message_GetUserCapabilityArray, addr 0x29bd5f8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserCapabilityArray(void* obj);

  /// @brief Method ovr_Message_GetUserDataStoreUpdateResponse, addr 0x29bd674, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserDataStoreUpdateResponse(void* obj);

  /// @brief Method ovr_Message_GetUserProof, addr 0x29bd6f0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserProof(void* obj);

  /// @brief Method ovr_Message_GetUserReportID, addr 0x29bd76c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserReportID(void* obj);

  /// @brief Method ovr_Message_IsError, addr 0x29bd7e8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_Message_IsError(void* obj);

  /// @brief Method ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable, addr 0x29bdcb4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(void* obj);

  /// @brief Method ovr_Microphone_Create, addr 0x29aa314, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_Create();

  /// @brief Method ovr_Microphone_Destroy, addr 0x29aa37c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Microphone_Destroy(void* obj);

  /// @brief Method ovr_Microphone_GetNumSamplesAvailable, addr 0x29bd86c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_GetNumSamplesAvailable(void* obj);

  /// @brief Method ovr_Microphone_GetOutputBufferMaxSize, addr 0x29bd8e8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_GetOutputBufferMaxSize(void* obj);

  /// @brief Method ovr_Microphone_GetPCM, addr 0x29bd964, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_GetPCM(void* obj, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Microphone_GetPCMFloat, addr 0x29bda00, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_GetPCMFloat(void* obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Microphone_ReadData, addr 0x29bda9c, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_ReadData(void* obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferSize);

  /// @brief Method ovr_Microphone_SetAcceptableRecordingDelayHint, addr 0x29bdb38, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_Microphone_SetAcceptableRecordingDelayHint(void* obj, void* delayMs);

  /// @brief Method ovr_Microphone_Start, addr 0x29bdbbc, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Microphone_Start(void* obj);

  /// @brief Method ovr_Microphone_Stop, addr 0x29bdc38, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Microphone_Stop(void* obj);

  /// @brief Method ovr_MultiplayerErrorOptions_Create, addr 0x29c399c, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_MultiplayerErrorOptions_Create();

  /// @brief Method ovr_MultiplayerErrorOptions_Destroy, addr 0x29c3a04, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_MultiplayerErrorOptions_Destroy(void* handle);

  /// @brief Method ovr_MultiplayerErrorOptions_SetErrorKey, addr 0x29c3a80, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_MultiplayerErrorOptions_SetErrorKey(void* handle, ::Oculus::Platform::MultiplayerErrorErrorKey value);

  /// @brief Method ovr_NetSyncConnection_GetConnectionId, addr 0x29bdd38, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_NetSyncConnection_GetConnectionId(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetDisconnectReason, addr 0x29bddb4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::NetSyncDisconnectReason ovr_NetSyncConnection_GetDisconnectReason(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetSessionId, addr 0x29bde30, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSyncConnection_GetSessionId(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetStatus, addr 0x29bdeac, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::NetSyncConnectionStatus ovr_NetSyncConnection_GetStatus(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetZoneId, addr 0x29bdf28, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_NetSyncConnection_GetZoneId(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetZoneId_Native, addr 0x29bdf80, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncConnection_GetZoneId_Native(void* obj);

  /// @brief Method ovr_NetSyncOptions_Create, addr 0x29c3b04, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncOptions_Create();

  /// @brief Method ovr_NetSyncOptions_Destroy, addr 0x29c3b6c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_Destroy(void* handle);

  /// @brief Method ovr_NetSyncOptions_SetVoipGroup, addr 0x29c3be8, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetVoipGroup(void* handle, ::StringW value);

  /// @brief Method ovr_NetSyncOptions_SetVoipGroup_Native, addr 0x29c3c88, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetVoipGroup_Native(void* handle, void* value);

  /// @brief Method ovr_NetSyncOptions_SetVoipStreamDefault, addr 0x29c3d0c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetVoipStreamDefault(void* handle, ::Oculus::Platform::NetSyncVoipStreamMode value);

  /// @brief Method ovr_NetSyncOptions_SetZoneId, addr 0x29c3d90, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetZoneId(void* handle, ::StringW value);

  /// @brief Method ovr_NetSyncOptions_SetZoneId_Native, addr 0x29c3e30, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetZoneId_Native(void* handle, void* value);

  /// @brief Method ovr_NetSyncSessionArray_GetElement, addr 0x29be2c8, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSessionArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_NetSyncSessionArray_GetSize, addr 0x29be34c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSessionArray_GetSize(void* obj);

  /// @brief Method ovr_NetSyncSession_GetConnectionId, addr 0x29bdffc, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_NetSyncSession_GetConnectionId(void* obj);

  /// @brief Method ovr_NetSyncSession_GetMuted, addr 0x29be078, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_NetSyncSession_GetMuted(void* obj);

  /// @brief Method ovr_NetSyncSession_GetSessionId, addr 0x29be0fc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSyncSession_GetSessionId(void* obj);

  /// @brief Method ovr_NetSyncSession_GetUserId, addr 0x29be178, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSyncSession_GetUserId(void* obj);

  /// @brief Method ovr_NetSyncSession_GetVoipGroup, addr 0x29be1f4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_NetSyncSession_GetVoipGroup(void* obj);

  /// @brief Method ovr_NetSyncSession_GetVoipGroup_Native, addr 0x29be24c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSession_GetVoipGroup_Native(void* obj);

  /// @brief Method ovr_NetSyncSessionsChangedNotification_GetConnectionId, addr 0x29be3c8, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_NetSyncSessionsChangedNotification_GetConnectionId(void* obj);

  /// @brief Method ovr_NetSyncSessionsChangedNotification_GetSessions, addr 0x29be444, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSessionsChangedNotification_GetSessions(void* obj);

  /// @brief Method ovr_NetSyncSetSessionPropertyResult_GetSession, addr 0x29be4c0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSetSessionPropertyResult_GetSession(void* obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetElement, addr 0x29be634, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncVoipAttenuationValueArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetSize, addr 0x29be6b8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncVoipAttenuationValueArray_GetSize(void* obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValue_GetDecibels, addr 0x29be53c, size 0x7c, virtual false, abstract: false, final false
  static inline float_t ovr_NetSyncVoipAttenuationValue_GetDecibels(void* obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValue_GetDistance, addr 0x29be5b8, size 0x7c, virtual false, abstract: false, final false
  static inline float_t ovr_NetSyncVoipAttenuationValue_GetDistance(void* obj);

  /// @brief Method ovr_NetSync_Connect, addr 0x29b0edc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_Connect(void* connect_options);

  /// @brief Method ovr_NetSync_Disconnect, addr 0x29b0f58, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_Disconnect(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetAmbisonicFloatPCM, addr 0x29ab1fc, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetAmbisonicFloatPCM(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInt16PCM, addr 0x29ab298, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetAmbisonicInt16PCM(int64_t connection_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInterleavedFloatPCM, addr 0x29ab334, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetAmbisonicInterleavedFloatPCM(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInterleavedInt16PCM, addr 0x29ab3d0, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetAmbisonicInterleavedInt16PCM(int64_t connection_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetListenerPosition, addr 0x29ab46c, size 0x9c, virtual false, abstract: false, final false
  static inline bool ovr_NetSync_GetListenerPosition(int64_t connection_id, uint64_t sessionId, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3> position);

  /// @brief Method ovr_NetSync_GetMonostreamFloatPCM, addr 0x29ab508, size 0xa4, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetMonostreamFloatPCM(int64_t connection_id, uint64_t sessionId, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetMonostreamInt16PCM, addr 0x29ab5ac, size 0xa4, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetMonostreamInt16PCM(int64_t connection_id, uint64_t session_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetPcmBufferMaxSamples, addr 0x29ab650, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetPcmBufferMaxSamples();

  /// @brief Method ovr_NetSync_GetSessions, addr 0x29b0fd4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_GetSessions(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetVoipAmplitude, addr 0x29ab6b8, size 0x9c, virtual false, abstract: false, final false
  static inline bool ovr_NetSync_GetVoipAmplitude(int64_t connection_id, uint64_t sessionId, ByRef<float_t> amplitude);

  /// @brief Method ovr_NetSync_GetVoipAttenuation, addr 0x29b1050, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_GetVoipAttenuation(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetVoipAttenuationDefault, addr 0x29b10cc, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_GetVoipAttenuationDefault();

  /// @brief Method ovr_NetSync_SetListenerPosition, addr 0x29ab754, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSync_SetListenerPosition(int64_t connection_id, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3> position);

  /// @brief Method ovr_NetSync_SetVoipAttenuation, addr 0x29b1134, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuation(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels, void* count);

  /// @brief Method ovr_NetSync_SetVoipAttenuationModel, addr 0x29b11e0, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuationModel(int64_t connection_id, ::StringW name, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels,
                                                             void* count);

  /// @brief Method ovr_NetSync_SetVoipAttenuationModel_Native, addr 0x29b12b0, size 0xbc, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuationModel_Native(int64_t connection_id, void* name, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels,
                                                                    void* count);

  /// @brief Method ovr_NetSync_SetVoipChannelCfg, addr 0x29b136c, size 0xe0, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipChannelCfg(int64_t connection_id, ::StringW channel_name, ::StringW attnmodel, bool disable_spatialization);

  /// @brief Method ovr_NetSync_SetVoipChannelCfg_Native, addr 0x29b144c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipChannelCfg_Native(int64_t connection_id, void* channel_name, void* attnmodel, bool disable_spatialization);

  /// @brief Method ovr_NetSync_SetVoipGroup, addr 0x29b14e8, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipGroup(int64_t connection_id, ::StringW group_id);

  /// @brief Method ovr_NetSync_SetVoipGroup_Native, addr 0x29b1598, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipGroup_Native(int64_t connection_id, void* group_id);

  /// @brief Method ovr_NetSync_SetVoipListentoChannels, addr 0x29b161c, size 0x160, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipListentoChannels(int64_t connection_id, ::ArrayW<::StringW, ::Array<::StringW>*> listento_channels, void* count);

  /// @brief Method ovr_NetSync_SetVoipMicSource, addr 0x29b177c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipMicSource(int64_t connection_id, ::Oculus::Platform::NetSyncVoipMicSource mic_source);

  /// @brief Method ovr_NetSync_SetVoipSessionMuted, addr 0x29b1800, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipSessionMuted(int64_t connection_id, uint64_t session_id, bool muted);

  /// @brief Method ovr_NetSync_SetVoipSpeaktoChannels, addr 0x29b1894, size 0x160, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipSpeaktoChannels(int64_t connection_id, ::ArrayW<::StringW, ::Array<::StringW>*> speakto_channels, void* count);

  /// @brief Method ovr_NetSync_SetVoipStreamMode, addr 0x29b19f4, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipStreamMode(int64_t connection_id, uint64_t sessionId, ::Oculus::Platform::NetSyncVoipStreamMode streamMode);

  /// @brief Method ovr_Notification_MarkAsRead, addr 0x29b1a88, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Notification_MarkAsRead(uint64_t notificationID);

  /// @brief Method ovr_OrgScopedID_GetID, addr 0x29be734, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_OrgScopedID_GetID(void* obj);

  /// @brief Method ovr_Packet_Free, addr 0x29be7b0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Packet_Free(void* obj);

  /// @brief Method ovr_Packet_GetBytes, addr 0x29be82c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Packet_GetBytes(void* obj);

  /// @brief Method ovr_Packet_GetSenderID, addr 0x29be8a8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Packet_GetSenderID(void* obj);

  /// @brief Method ovr_Packet_GetSize, addr 0x29be924, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Packet_GetSize(void* obj);

  /// @brief Method ovr_PartyID_GetID, addr 0x29beb90, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyID_GetID(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetAction, addr 0x29bec08, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::PartyUpdateAction ovr_PartyUpdateNotification_GetAction(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetPartyId, addr 0x29bec84, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyUpdateNotification_GetPartyId(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetSenderId, addr 0x29bed00, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyUpdateNotification_GetSenderId(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp, addr 0x29bed7c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUpdateTimestamp(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp_Native, addr 0x29bedd4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PartyUpdateNotification_GetUpdateTimestamp_Native(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserAlias, addr 0x29bee50, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUserAlias(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserAlias_Native, addr 0x29beea8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PartyUpdateNotification_GetUserAlias_Native(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserId, addr 0x29bef24, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyUpdateNotification_GetUserId(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserName, addr 0x29befa0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUserName(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserName_Native, addr 0x29beff8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PartyUpdateNotification_GetUserName_Native(void* obj);

  /// @brief Method ovr_Party_Create, addr 0x29b1b04, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Create();

  /// @brief Method ovr_Party_GatherInApplication, addr 0x29b1b6c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GatherInApplication(uint64_t partyID, uint64_t appID);

  /// @brief Method ovr_Party_Get, addr 0x29b1bf0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Get(uint64_t partyID);

  /// @brief Method ovr_Party_GetCurrent, addr 0x29b1c6c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GetCurrent();

  /// @brief Method ovr_Party_GetCurrentForUser, addr 0x29b1cd4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GetCurrentForUser(uint64_t userID);

  /// @brief Method ovr_Party_GetID, addr 0x29be9a0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GetID(void* obj);

  /// @brief Method ovr_Party_GetInvitedUsers, addr 0x29bea1c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Party_GetInvitedUsers(void* obj);

  /// @brief Method ovr_Party_GetLeader, addr 0x29bea98, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Party_GetLeader(void* obj);

  /// @brief Method ovr_Party_GetUsers, addr 0x29beb14, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Party_GetUsers(void* obj);

  /// @brief Method ovr_Party_Invite, addr 0x29b1d50, size 0x80, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Invite(uint64_t partyID, uint64_t userID);

  /// @brief Method ovr_Party_Join, addr 0x29b1dd0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Join(uint64_t partyID);

  /// @brief Method ovr_Party_Leave, addr 0x29b1e4c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Leave(uint64_t partyID);

  /// @brief Method ovr_Party_PluginGetSharedMemHandle, addr 0x29ab7d8, size 0x68, virtual false, abstract: false, final false
  static inline int32_t ovr_Party_PluginGetSharedMemHandle();

  /// @brief Method ovr_Party_PluginGetVoipMicrophoneMuted, addr 0x29ab840, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState ovr_Party_PluginGetVoipMicrophoneMuted();

  /// @brief Method ovr_Party_PluginGetVoipPassthrough, addr 0x29ab8a8, size 0x70, virtual false, abstract: false, final false
  static inline bool ovr_Party_PluginGetVoipPassthrough();

  /// @brief Method ovr_Party_PluginGetVoipStatus, addr 0x29ab918, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_Party_PluginGetVoipStatus();

  /// @brief Method ovr_PidArray_GetElement, addr 0x29bf148, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_PidArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_PidArray_GetSize, addr 0x29bf1cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PidArray_GetSize(void* obj);

  /// @brief Method ovr_Pid_GetId, addr 0x29bf074, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Pid_GetId(void* obj);

  /// @brief Method ovr_Pid_GetId_Native, addr 0x29bf0cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Pid_GetId_Native(void* obj);

  /// @brief Method ovr_PlatformInitializeWithAccessToken, addr 0x29a9af8, size 0xa0, virtual false, abstract: false, final false
  static inline uint64_t ovr_PlatformInitializeWithAccessToken(uint64_t appId, ::StringW accessToken);

  /// @brief Method ovr_PlatformInitializeWithAccessTokenAndOptions, addr 0x29a9b98, size 0x1a8, virtual false, abstract: false, final false
  static inline uint64_t ovr_PlatformInitializeWithAccessTokenAndOptions(uint64_t appId, ::StringW accessToken,
                                                                         ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> configOptions,
                                                                         void* numOptions);

  /// @brief Method ovr_PlatformInitialize_GetResult, addr 0x29bf248, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::PlatformInitializeResult ovr_PlatformInitialize_GetResult(void* obj);

  /// @brief Method ovr_Platform_InitializeStandaloneOculus, addr 0x29a9a14, size 0xe4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Platform_InitializeStandaloneOculus(ByRef<::Oculus::Platform::__CAPI__OculusInitParams> init);

  /// @brief Method ovr_PopMessage, addr 0x29a9fcc, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_PopMessage();

  /// @brief Method ovr_Price_GetAmountInHundredths, addr 0x29bf2c4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_Price_GetAmountInHundredths(void* obj);

  /// @brief Method ovr_Price_GetCurrency, addr 0x29bf340, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Price_GetCurrency(void* obj);

  /// @brief Method ovr_Price_GetCurrency_Native, addr 0x29bf398, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Price_GetCurrency_Native(void* obj);

  /// @brief Method ovr_Price_GetFormatted, addr 0x29bf414, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Price_GetFormatted(void* obj);

  /// @brief Method ovr_Price_GetFormatted_Native, addr 0x29bf46c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Price_GetFormatted_Native(void* obj);

  /// @brief Method ovr_ProductArray_GetElement, addr 0x29bf838, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_ProductArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ProductArray_GetNextUrl, addr 0x29bf8bc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ProductArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ProductArray_GetNextUrl_Native, addr 0x29bf914, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ProductArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ProductArray_GetSize, addr 0x29bf990, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ProductArray_GetSize(void* obj);

  /// @brief Method ovr_ProductArray_HasNextPage, addr 0x29bfa0c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ProductArray_HasNextPage(void* obj);

  /// @brief Method ovr_Product_GetDescription, addr 0x29bf4e8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetDescription(void* obj);

  /// @brief Method ovr_Product_GetDescription_Native, addr 0x29bf540, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Product_GetDescription_Native(void* obj);

  /// @brief Method ovr_Product_GetFormattedPrice, addr 0x29bf5bc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetFormattedPrice(void* obj);

  /// @brief Method ovr_Product_GetFormattedPrice_Native, addr 0x29bf614, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Product_GetFormattedPrice_Native(void* obj);

  /// @brief Method ovr_Product_GetName, addr 0x29bf690, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetName(void* obj);

  /// @brief Method ovr_Product_GetName_Native, addr 0x29bf6e8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Product_GetName_Native(void* obj);

  /// @brief Method ovr_Product_GetSKU, addr 0x29bf764, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetSKU(void* obj);

  /// @brief Method ovr_Product_GetSKU_Native, addr 0x29bf7bc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Product_GetSKU_Native(void* obj);

  /// @brief Method ovr_PurchaseArray_GetElement, addr 0x29c0004, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_PurchaseArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_PurchaseArray_GetNextUrl, addr 0x29c0088, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PurchaseArray_GetNextUrl(void* obj);

  /// @brief Method ovr_PurchaseArray_GetNextUrl_Native, addr 0x29c00e0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PurchaseArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_PurchaseArray_GetSize, addr 0x29c015c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PurchaseArray_GetSize(void* obj);

  /// @brief Method ovr_PurchaseArray_HasNextPage, addr 0x29c01d8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_PurchaseArray_HasNextPage(void* obj);

  /// @brief Method ovr_Purchase_GetDeveloperPayload, addr 0x29bfa90, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetDeveloperPayload(void* obj);

  /// @brief Method ovr_Purchase_GetDeveloperPayload_Native, addr 0x29bfae8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Purchase_GetDeveloperPayload_Native(void* obj);

  /// @brief Method ovr_Purchase_GetExpirationTime, addr 0x29bfb64, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Purchase_GetExpirationTime(void* obj);

  /// @brief Method ovr_Purchase_GetExpirationTime_Native, addr 0x29bfbbc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Purchase_GetExpirationTime_Native(void* obj);

  /// @brief Method ovr_Purchase_GetGrantTime, addr 0x29bfc38, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Purchase_GetGrantTime(void* obj);

  /// @brief Method ovr_Purchase_GetGrantTime_Native, addr 0x29bfc90, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Purchase_GetGrantTime_Native(void* obj);

  /// @brief Method ovr_Purchase_GetPurchaseID, addr 0x29bfd0c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Purchase_GetPurchaseID(void* obj);

  /// @brief Method ovr_Purchase_GetPurchaseStrID, addr 0x29bfd88, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetPurchaseStrID(void* obj);

  /// @brief Method ovr_Purchase_GetPurchaseStrID_Native, addr 0x29bfde0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Purchase_GetPurchaseStrID_Native(void* obj);

  /// @brief Method ovr_Purchase_GetReportingId, addr 0x29bfe5c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetReportingId(void* obj);

  /// @brief Method ovr_Purchase_GetReportingId_Native, addr 0x29bfeb4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Purchase_GetReportingId_Native(void* obj);

  /// @brief Method ovr_Purchase_GetSKU, addr 0x29bff30, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetSKU(void* obj);

  /// @brief Method ovr_Purchase_GetSKU_Native, addr 0x29bff88, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Purchase_GetSKU_Native(void* obj);

  /// @brief Method ovr_RejoinDialogResult_GetRejoinSelected, addr 0x29c025c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_RejoinDialogResult_GetRejoinSelected(void* obj);

  /// @brief Method ovr_RichPresenceOptions_Create, addr 0x29c3eb4, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_RichPresenceOptions_Create();

  /// @brief Method ovr_RichPresenceOptions_Destroy, addr 0x29c3f1c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_Destroy(void* handle);

  /// @brief Method ovr_RichPresenceOptions_SetApiName, addr 0x29c3f98, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetApiName(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetApiName_Native, addr 0x29c4038, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetApiName_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride, addr 0x29c40bc, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x29c415c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetIsJoinable, addr 0x29c41e0, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetIsJoinable(void* handle, bool value);

  /// @brief Method ovr_RichPresence_Clear, addr 0x29b1ec8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_Clear();

  /// @brief Method ovr_RichPresence_GetDestinations, addr 0x29b1f30, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_GetDestinations();

  /// @brief Method ovr_RichPresence_Set, addr 0x29b1f98, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_Set(void* richPresenceOptions);

  /// @brief Method ovr_RichPresence_SetDestination, addr 0x29b2014, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetDestination(::StringW api_name);

  /// @brief Method ovr_RichPresence_SetDestination_Native, addr 0x29b20b0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetDestination_Native(void* api_name);

  /// @brief Method ovr_RichPresence_SetIsJoinable, addr 0x29b212c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetIsJoinable(bool is_joinable);

  /// @brief Method ovr_RichPresence_SetLobbySession, addr 0x29b21a8, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetLobbySession(::StringW id);

  /// @brief Method ovr_RichPresence_SetLobbySession_Native, addr 0x29b2244, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetLobbySession_Native(void* id);

  /// @brief Method ovr_RichPresence_SetMatchSession, addr 0x29b22c0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetMatchSession(::StringW id);

  /// @brief Method ovr_RichPresence_SetMatchSession_Native, addr 0x29b235c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetMatchSession_Native(void* id);

  /// @brief Method ovr_RosterOptions_AddSuggestedUser, addr 0x29c4348, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RosterOptions_AddSuggestedUser(void* handle, uint64_t value);

  /// @brief Method ovr_RosterOptions_ClearSuggestedUsers, addr 0x29c43cc, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RosterOptions_ClearSuggestedUsers(void* handle);

  /// @brief Method ovr_RosterOptions_Create, addr 0x29c4264, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_RosterOptions_Create();

  /// @brief Method ovr_RosterOptions_Destroy, addr 0x29c42cc, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RosterOptions_Destroy(void* handle);

  /// @brief Method ovr_SdkAccountArray_GetElement, addr 0x29c03d8, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_SdkAccountArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_SdkAccountArray_GetSize, addr 0x29c045c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_SdkAccountArray_GetSize(void* obj);

  /// @brief Method ovr_SdkAccount_GetAccountType, addr 0x29c02e0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SdkAccountType ovr_SdkAccount_GetAccountType(void* obj);

  /// @brief Method ovr_SdkAccount_GetUserId, addr 0x29c035c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_SdkAccount_GetUserId(void* obj);

  /// @brief Method ovr_SendInvitesResult_GetInvites, addr 0x29c04d8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_SendInvitesResult_GetInvites(void* obj);

  /// @brief Method ovr_SetDeveloperAccessToken, addr 0x29a9e7c, size 0x98, virtual false, abstract: false, final false
  static inline bool ovr_SetDeveloperAccessToken(::StringW accessToken);

  /// @brief Method ovr_ShareMediaResult_GetStatus, addr 0x29c0554, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ShareMediaStatus ovr_ShareMediaResult_GetStatus(void* obj);

  /// @brief Method ovr_SupplementaryMetric_GetID, addr 0x29c05d0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_SupplementaryMetric_GetID(void* obj);

  /// @brief Method ovr_SupplementaryMetric_GetMetric, addr 0x29c064c, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_SupplementaryMetric_GetMetric(void* obj);

  /// @brief Method ovr_SystemVoipState_GetMicrophoneMuted, addr 0x29c06c8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState ovr_SystemVoipState_GetMicrophoneMuted(void* obj);

  /// @brief Method ovr_SystemVoipState_GetStatus, addr 0x29c0744, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_SystemVoipState_GetStatus(void* obj);

  /// @brief Method ovr_TestUserAppAccessArray_GetElement, addr 0x29c0e74, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_TestUserAppAccessArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_TestUserAppAccessArray_GetSize, addr 0x29c0ef8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUserAppAccessArray_GetSize(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetAccessToken, addr 0x29c0ca8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUserAppAccess_GetAccessToken(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetAccessToken_Native, addr 0x29c0d00, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUserAppAccess_GetAccessToken_Native(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetAppId, addr 0x29c0d7c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUserAppAccess_GetAppId(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetUserId, addr 0x29c0df8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUserAppAccess_GetUserId(void* obj);

  /// @brief Method ovr_TestUser_GetAccessToken, addr 0x29c07c0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUser_GetAccessToken(void* obj);

  /// @brief Method ovr_TestUser_GetAccessToken_Native, addr 0x29c0818, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetAccessToken_Native(void* obj);

  /// @brief Method ovr_TestUser_GetAppAccessArray, addr 0x29c0894, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetAppAccessArray(void* obj);

  /// @brief Method ovr_TestUser_GetFbAppAccessArray, addr 0x29c0910, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetFbAppAccessArray(void* obj);

  /// @brief Method ovr_TestUser_GetFriendAccessToken, addr 0x29c098c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUser_GetFriendAccessToken(void* obj);

  /// @brief Method ovr_TestUser_GetFriendAccessToken_Native, addr 0x29c09e4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetFriendAccessToken_Native(void* obj);

  /// @brief Method ovr_TestUser_GetFriendAppAccessArray, addr 0x29c0a60, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetFriendAppAccessArray(void* obj);

  /// @brief Method ovr_TestUser_GetUserAlias, addr 0x29c0adc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUser_GetUserAlias(void* obj);

  /// @brief Method ovr_TestUser_GetUserAlias_Native, addr 0x29c0b34, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetUserAlias_Native(void* obj);

  /// @brief Method ovr_TestUser_GetUserFbid, addr 0x29c0bb0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUser_GetUserFbid(void* obj);

  /// @brief Method ovr_TestUser_GetUserId, addr 0x29c0c2c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUser_GetUserId(void* obj);

  /// @brief Method ovr_UnityInitGlobals, addr 0x29a98f8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_UnityInitGlobals(void* loggingCB);

  /// @brief Method ovr_UnityInitWrapper, addr 0x29a6e5c, size 0x98, virtual false, abstract: false, final false
  static inline bool ovr_UnityInitWrapper(::StringW appId);

  /// @brief Method ovr_UnityInitWrapperAsynchronous, addr 0x29a6ffc, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_UnityInitWrapperAsynchronous(::StringW appId);

  /// @brief Method ovr_UnityInitWrapperStandalone, addr 0x29a9974, size 0xa0, virtual false, abstract: false, final false
  static inline bool ovr_UnityInitWrapperStandalone(::StringW accessToken, void* loggingCB);

  /// @brief Method ovr_UnityInitWrapperWindows, addr 0x29a9d40, size 0xa0, virtual false, abstract: false, final false
  static inline bool ovr_UnityInitWrapperWindows(::StringW appId, void* loggingCB);

  /// @brief Method ovr_UnityInitWrapperWindowsAsynchronous, addr 0x29a9de0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UnityInitWrapperWindowsAsynchronous(::StringW appId, void* loggingCB);

  /// @brief Method ovr_UnityResetTestPlatform, addr 0x29aa4f0, size 0x64, virtual false, abstract: false, final false
  static inline void ovr_UnityResetTestPlatform();

  /// @brief Method ovr_UserAccountAgeCategory_GetAgeCategory, addr 0x29c17e0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::AccountAgeCategory ovr_UserAccountAgeCategory_GetAgeCategory(void* obj);

  /// @brief Method ovr_UserAgeCategory_Get, addr 0x29b3120, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserAgeCategory_Get();

  /// @brief Method ovr_UserAgeCategory_Report, addr 0x29b3188, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserAgeCategory_Report(::Oculus::Platform::AppAgeCategory age_category);

  /// @brief Method ovr_UserArray_GetElement, addr 0x29c185c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_UserArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_UserArray_GetNextUrl, addr 0x29c18e0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserArray_GetNextUrl(void* obj);

  /// @brief Method ovr_UserArray_GetNextUrl_Native, addr 0x29c1938, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_UserArray_GetSize, addr 0x29c19b4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserArray_GetSize(void* obj);

  /// @brief Method ovr_UserArray_HasNextPage, addr 0x29c1a30, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserArray_HasNextPage(void* obj);

  /// @brief Method ovr_UserCapabilityArray_GetElement, addr 0x29c1db4, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_UserCapabilityArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_UserCapabilityArray_GetNextUrl, addr 0x29c1e38, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapabilityArray_GetNextUrl(void* obj);

  /// @brief Method ovr_UserCapabilityArray_GetNextUrl_Native, addr 0x29c1e90, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapabilityArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_UserCapabilityArray_GetSize, addr 0x29c1f0c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapabilityArray_GetSize(void* obj);

  /// @brief Method ovr_UserCapabilityArray_HasNextPage, addr 0x29c1f88, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserCapabilityArray_HasNextPage(void* obj);

  /// @brief Method ovr_UserCapability_GetDescription, addr 0x29c1ab4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapability_GetDescription(void* obj);

  /// @brief Method ovr_UserCapability_GetDescription_Native, addr 0x29c1b0c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapability_GetDescription_Native(void* obj);

  /// @brief Method ovr_UserCapability_GetIsEnabled, addr 0x29c1b88, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserCapability_GetIsEnabled(void* obj);

  /// @brief Method ovr_UserCapability_GetName, addr 0x29c1c0c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapability_GetName(void* obj);

  /// @brief Method ovr_UserCapability_GetName_Native, addr 0x29c1c64, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapability_GetName_Native(void* obj);

  /// @brief Method ovr_UserCapability_GetReasonCode, addr 0x29c1ce0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapability_GetReasonCode(void* obj);

  /// @brief Method ovr_UserCapability_GetReasonCode_Native, addr 0x29c1d38, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapability_GetReasonCode_Native(void* obj);

  /// @brief Method ovr_UserDataStoreUpdateResponse_GetSuccess, addr 0x29c200c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserDataStoreUpdateResponse_GetSuccess(void* obj);

  /// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey, addr 0x29b3204, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey_Native, addr 0x29b32b4, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PrivateGetEntries, addr 0x29b3338, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntries(uint64_t userID);

  /// @brief Method ovr_UserDataStore_PrivateGetEntryByKey, addr 0x29b33b4, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PrivateGetEntryByKey_Native, addr 0x29b3464, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PrivateWriteEntry, addr 0x29b34e8, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateWriteEntry(uint64_t userID, ::StringW key, ::StringW value);

  /// @brief Method ovr_UserDataStore_PrivateWriteEntry_Native, addr 0x29b35b8, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateWriteEntry_Native(uint64_t userID, void* key, void* value);

  /// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey, addr 0x29b364c, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey_Native, addr 0x29b36fc, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PublicGetEntries, addr 0x29b3780, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntries(uint64_t userID);

  /// @brief Method ovr_UserDataStore_PublicGetEntryByKey, addr 0x29b37fc, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PublicGetEntryByKey_Native, addr 0x29b38ac, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PublicWriteEntry, addr 0x29b3930, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicWriteEntry(uint64_t userID, ::StringW key, ::StringW value);

  /// @brief Method ovr_UserDataStore_PublicWriteEntry_Native, addr 0x29b3a00, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicWriteEntry_Native(uint64_t userID, void* key, void* value);

  /// @brief Method ovr_UserOptions_AddServiceProvider, addr 0x29c45b0, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_AddServiceProvider(void* handle, ::Oculus::Platform::ServiceProvider value);

  /// @brief Method ovr_UserOptions_ClearServiceProviders, addr 0x29c4634, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_ClearServiceProviders(void* handle);

  /// @brief Method ovr_UserOptions_Create, addr 0x29c4448, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_UserOptions_Create();

  /// @brief Method ovr_UserOptions_Destroy, addr 0x29c44b0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_Destroy(void* handle);

  /// @brief Method ovr_UserOptions_SetMaxUsers, addr 0x29c452c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_SetMaxUsers(void* handle, uint32_t value);

  /// @brief Method ovr_UserOptions_SetTimeWindow, addr 0x29c46b0, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_SetTimeWindow(void* handle, ::Oculus::Platform::TimeWindow value);

  /// @brief Method ovr_UserProof_GetNonce, addr 0x29c2090, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserProof_GetNonce(void* obj);

  /// @brief Method ovr_UserProof_GetNonce_Native, addr 0x29c20e8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserProof_GetNonce_Native(void* obj);

  /// @brief Method ovr_UserReportID_GetDidCancel, addr 0x29c2164, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserReportID_GetDidCancel(void* obj);

  /// @brief Method ovr_UserReportID_GetID, addr 0x29c21e8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserReportID_GetID(void* obj);

  /// @brief Method ovr_User_CancelRecordingForReportFlow, addr 0x29b23d8, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_CancelRecordingForReportFlow(::StringW recordingUUID);

  /// @brief Method ovr_User_CancelRecordingForReportFlow_Native, addr 0x29b2474, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_CancelRecordingForReportFlow_Native(void* recordingUUID);

  /// @brief Method ovr_User_Get, addr 0x29b24f0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_Get(uint64_t userID);

  /// @brief Method ovr_User_GetAccessToken, addr 0x29b256c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetAccessToken();

  /// @brief Method ovr_User_GetBlockedUsers, addr 0x29b25d4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetBlockedUsers();

  /// @brief Method ovr_User_GetDisplayName, addr 0x29c0f74, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetDisplayName(void* obj);

  /// @brief Method ovr_User_GetDisplayName_Native, addr 0x29c0fcc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetDisplayName_Native(void* obj);

  /// @brief Method ovr_User_GetID, addr 0x29c1048, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetID(void* obj);

  /// @brief Method ovr_User_GetImageUrl, addr 0x29c10c4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetImageUrl(void* obj);

  /// @brief Method ovr_User_GetImageUrl_Native, addr 0x29c111c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetImageUrl_Native(void* obj);

  /// @brief Method ovr_User_GetLinkedAccounts, addr 0x29b263c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLinkedAccounts(void* userOptions);

  /// @brief Method ovr_User_GetLoggedInUser, addr 0x29b26b8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLoggedInUser();

  /// @brief Method ovr_User_GetLoggedInUserFriends, addr 0x29b2720, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLoggedInUserFriends();

  /// @brief Method ovr_User_GetOculusID, addr 0x29c1198, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetOculusID(void* obj);

  /// @brief Method ovr_User_GetOculusID_Native, addr 0x29c11f0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetOculusID_Native(void* obj);

  /// @brief Method ovr_User_GetOrgScopedID, addr 0x29b2788, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetOrgScopedID(uint64_t userID);

  /// @brief Method ovr_User_GetPresence, addr 0x29c126c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresence(void* obj);

  /// @brief Method ovr_User_GetPresenceDeeplinkMessage, addr 0x29c1340, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceDeeplinkMessage(void* obj);

  /// @brief Method ovr_User_GetPresenceDeeplinkMessage_Native, addr 0x29c1398, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresenceDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceDestinationApiName, addr 0x29c1414, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceDestinationApiName(void* obj);

  /// @brief Method ovr_User_GetPresenceDestinationApiName_Native, addr 0x29c146c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresenceDestinationApiName_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceLobbySessionId, addr 0x29c14e8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceLobbySessionId(void* obj);

  /// @brief Method ovr_User_GetPresenceLobbySessionId_Native, addr 0x29c1540, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresenceLobbySessionId_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceMatchSessionId, addr 0x29c15bc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceMatchSessionId(void* obj);

  /// @brief Method ovr_User_GetPresenceMatchSessionId_Native, addr 0x29c1614, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresenceMatchSessionId_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceStatus, addr 0x29c1690, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::UserPresenceStatus ovr_User_GetPresenceStatus(void* obj);

  /// @brief Method ovr_User_GetPresence_Native, addr 0x29c12c4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresence_Native(void* obj);

  /// @brief Method ovr_User_GetSdkAccounts, addr 0x29b2804, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetSdkAccounts();

  /// @brief Method ovr_User_GetSmallImageUrl, addr 0x29c170c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetSmallImageUrl(void* obj);

  /// @brief Method ovr_User_GetSmallImageUrl_Native, addr 0x29c1764, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetSmallImageUrl_Native(void* obj);

  /// @brief Method ovr_User_GetUserCapabilities, addr 0x29b286c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetUserCapabilities();

  /// @brief Method ovr_User_GetUserProof, addr 0x29b28d4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetUserProof();

  /// @brief Method ovr_User_LaunchBlockFlow, addr 0x29b293c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchBlockFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchFriendRequestFlow, addr 0x29b29b8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchFriendRequestFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchReportFlow, addr 0x29b2a34, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchReportFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchReportFlow2, addr 0x29b2ab0, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchReportFlow2(uint64_t optionalUserID, void* abuseReportOptions);

  /// @brief Method ovr_User_LaunchUnblockFlow, addr 0x29b2b34, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchUnblockFlow(uint64_t userID);

  /// @brief Method ovr_User_NewEntitledTestUser, addr 0x29b2bb0, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_NewEntitledTestUser();

  /// @brief Method ovr_User_NewTestUser, addr 0x29b2c18, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_NewTestUser();

  /// @brief Method ovr_User_NewTestUserFriends, addr 0x29b2c80, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_NewTestUserFriends();

  /// @brief Method ovr_User_StartRecordingForReportFlow, addr 0x29b2ce8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StartRecordingForReportFlow();

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow, addr 0x29b2d50, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow(uint64_t optionalUserID, ::StringW optionalRecordingUUID);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2, addr 0x29b2e84, size 0xb8, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2(uint64_t optionalUserID, ::StringW optionalRecordingUUID, void* abuseReportOptions);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2_Native, addr 0x29b2f3c, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2_Native(uint64_t optionalUserID, void* optionalRecordingUUID, void* abuseReportOptions);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow_Native, addr 0x29b2e00, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow_Native(uint64_t optionalUserID, void* optionalRecordingUUID);

  /// @brief Method ovr_User_TestUserCreateDeviceManifest, addr 0x29b2fd0, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_TestUserCreateDeviceManifest(::StringW deviceID, ::ArrayW<uint64_t, ::Array<uint64_t>*> appIDs, int32_t numAppIDs);

  /// @brief Method ovr_User_TestUserCreateDeviceManifest_Native, addr 0x29b3084, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_TestUserCreateDeviceManifest_Native(void* deviceID, ::ArrayW<uint64_t, ::Array<uint64_t>*> appIDs, int32_t numAppIDs);

  /// @brief Method ovr_VoipDecoder_Decode, addr 0x29aa278, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_VoipDecoder_Decode(void* obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData, uint64_t compressedSize);

  /// @brief Method ovr_VoipDecoder_Decode, addr 0x29c2264, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_VoipDecoder_Decode(void* obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData, void* compressedSize);

  /// @brief Method ovr_VoipDecoder_GetDecodedPCM, addr 0x29c2300, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_VoipDecoder_GetDecodedPCM(void* obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferSize);

  /// @brief Method ovr_VoipEncoder_AddPCM, addr 0x29c239c, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_VoipEncoder_AddPCM(void* obj, ::ArrayW<float_t, ::Array<float_t>*> inputData, uint32_t inputSize);

  /// @brief Method ovr_VoipEncoder_GetCompressedData, addr 0x29c2438, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_VoipEncoder_GetCompressedData(void* obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, void* intputSize);

  /// @brief Method ovr_VoipEncoder_GetCompressedDataSize, addr 0x29c24d4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_VoipEncoder_GetCompressedDataSize(void* obj);

  /// @brief Method ovr_VoipOptions_Create, addr 0x29c4734, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_VoipOptions_Create();

  /// @brief Method ovr_VoipOptions_Destroy, addr 0x29c479c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_VoipOptions_Destroy(void* handle);

  /// @brief Method ovr_VoipOptions_SetBitrateForNewConnections, addr 0x29c4818, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_VoipOptions_SetBitrateForNewConnections(void* handle, ::Oculus::Platform::VoipBitrate value);

  /// @brief Method ovr_VoipOptions_SetCreateNewConnectionUseDtx, addr 0x29c489c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_VoipOptions_SetCreateNewConnectionUseDtx(void* handle, ::Oculus::Platform::VoipDtxState value);

  /// @brief Method ovr_Voip_Accept, addr 0x29ab980, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_Accept(uint64_t userID);

  /// @brief Method ovr_Voip_CreateDecoder, addr 0x29aa194, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_Voip_CreateDecoder();

  /// @brief Method ovr_Voip_CreateEncoder, addr 0x29aa0b0, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_Voip_CreateEncoder();

  /// @brief Method ovr_Voip_DestroyDecoder, addr 0x29aa1fc, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_DestroyDecoder(void* decoder);

  /// @brief Method ovr_Voip_DestroyEncoder, addr 0x29aa118, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_DestroyEncoder(void* encoder);

  /// @brief Method ovr_Voip_GetIsConnectionUsingDtx, addr 0x29ab9fc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipDtxState ovr_Voip_GetIsConnectionUsingDtx(uint64_t peerID);

  /// @brief Method ovr_Voip_GetLocalBitrate, addr 0x29aba78, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetLocalBitrate(uint64_t peerID);

  /// @brief Method ovr_Voip_GetMicrophoneAvailability, addr 0x29b3a94, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Voip_GetMicrophoneAvailability();

  /// @brief Method ovr_Voip_GetOutputBufferMaxSize, addr 0x29abaf4, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetOutputBufferMaxSize();

  /// @brief Method ovr_Voip_GetPCM, addr 0x29abb5c, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCM(uint64_t senderID, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Voip_GetPCMFloat, addr 0x29abbf8, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCMFloat(uint64_t senderID, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Voip_GetPCMSize, addr 0x29abc94, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCMSize(uint64_t senderID);

  /// @brief Method ovr_Voip_GetPCMWithTimestamp, addr 0x29abd10, size 0xac, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCMWithTimestamp(uint64_t senderID, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements,
                                                   ::ArrayW<uint32_t, ::Array<uint32_t>*> timestamp);

  /// @brief Method ovr_Voip_GetPCMWithTimestampFloat, addr 0x29abdbc, size 0xac, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCMWithTimestampFloat(uint64_t senderID, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements,
                                                        ::ArrayW<uint32_t, ::Array<uint32_t>*> timestamp);

  /// @brief Method ovr_Voip_GetRemoteBitrate, addr 0x29abe68, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetRemoteBitrate(uint64_t peerID);

  /// @brief Method ovr_Voip_GetSyncTimestamp, addr 0x29abee4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_Voip_GetSyncTimestamp(uint64_t userID);

  /// @brief Method ovr_Voip_GetSyncTimestampDifference, addr 0x29abf60, size 0x84, virtual false, abstract: false, final false
  static inline int64_t ovr_Voip_GetSyncTimestampDifference(uint32_t lhs, uint32_t rhs);

  /// @brief Method ovr_Voip_GetSystemVoipMicrophoneMuted, addr 0x29abfe4, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState ovr_Voip_GetSystemVoipMicrophoneMuted();

  /// @brief Method ovr_Voip_GetSystemVoipStatus, addr 0x29ac04c, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_Voip_GetSystemVoipStatus();

  /// @brief Method ovr_Voip_ReportAppVoipSessions, addr 0x29b3afc, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Voip_ReportAppVoipSessions(::ArrayW<uint64_t, ::Array<uint64_t>*> sessionIDs);

  /// @brief Method ovr_Voip_SetMicrophoneFilterCallback, addr 0x29aa654, size 0x80, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetMicrophoneFilterCallback(::Oculus::Platform::__CAPI__FilterCallback* cb);

  /// @brief Method ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer, addr 0x29aa6d4, size 0x88, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(::Oculus::Platform::__CAPI__FilterCallback* cb, void* bufferSizeElements);

  /// @brief Method ovr_Voip_SetMicrophoneMuted, addr 0x29ac0b4, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetMicrophoneMuted(::Oculus::Platform::VoipMuteState state);

  /// @brief Method ovr_Voip_SetNewConnectionOptions, addr 0x29ac130, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetNewConnectionOptions(void* voipOptions);

  /// @brief Method ovr_Voip_SetOutputSampleRate, addr 0x29ac1ac, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetOutputSampleRate(::Oculus::Platform::VoipSampleRate rate);

  /// @brief Method ovr_Voip_SetSystemVoipMicrophoneMuted, addr 0x29aa474, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetSystemVoipMicrophoneMuted(::Oculus::Platform::VoipMuteState muted);

  /// @brief Method ovr_Voip_SetSystemVoipPassthrough, addr 0x29aa3f8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetSystemVoipPassthrough(bool passthrough);

  /// @brief Method ovr_Voip_SetSystemVoipSuppressed, addr 0x29b3b80, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Voip_SetSystemVoipSuppressed(bool suppressed);

  /// @brief Method ovr_Voip_Start, addr 0x29ac228, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_Start(uint64_t userID);

  /// @brief Method ovr_Voip_Stop, addr 0x29ac2a4, size 0x7c, virtual false, abstract: false, final false
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

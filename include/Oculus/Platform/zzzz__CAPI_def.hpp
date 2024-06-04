#pragma once
// IWYU pragma private; include "Oculus/Platform/CAPI.hpp"
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
  /// @brief Method .ctor, addr 0x2ac6e68, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, ::StringW value);

  /// @brief Method .ctor, addr 0x2ac6e80, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, double_t value);

  /// @brief Method .ctor, addr 0x2ac6948, size 0x1c, virtual false, abstract: false, final false
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
  /// @brief Method BeginInvoke, addr 0x2ae29cc, size 0xd4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<int16_t, ::Array<int16_t>*>> pcmData, ::System::UIntPtr pcmDataLength, int32_t frequency, int32_t numChannels,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2ae2aa0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2ae29b8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<::ArrayW<int16_t, ::Array<int16_t>*>> pcmData, ::System::UIntPtr pcmDataLength, int32_t frequency, int32_t numChannels);

  static inline ::Oculus::Platform::__CAPI__FilterCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2ae28e0, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

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

  /// @brief Method ArrayOfStructsToIntPtr, addr 0x2ac6564, size 0x198, virtual false, abstract: false, final false
  static inline ::System::IntPtr ArrayOfStructsToIntPtr(::System::Array* ar);

  /// @brief Method BlobFromNative, addr 0x2ac753c, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BlobFromNative(uint32_t size, ::System::IntPtr pointer);

  /// @brief Method DataStoreFromNative, addr 0x2ac6f58, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* DataStoreFromNative(::System::IntPtr pointer);

  /// @brief Method DateTimeFromNative, addr 0x2ac73f0, size 0x64, virtual false, abstract: false, final false
  static inline ::System::DateTime DateTimeFromNative(uint64_t seconds_since_the_one_true_epoch);

  /// @brief Method DateTimeToNative, addr 0x2ac7454, size 0xe8, virtual false, abstract: false, final false
  static inline uint64_t DateTimeToNative(::System::DateTime dt);

  /// @brief Method DictionaryToOVRKeyValuePairs, addr 0x2ac66fc, size 0x24c, virtual false, abstract: false, final false
  static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>
  DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>* dict);

  /// @brief Method DictionaryToOVRKeyValuePairs, addr 0x2ac6964, size 0x504, virtual false, abstract: false, final false
  static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>
  DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* dict);

  /// @brief Method FiledataFromNative, addr 0x2ac7614, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FiledataFromNative(uint32_t size, ::System::IntPtr pointer);

  /// @brief Method GetNativeStringLengthNotIncludingNullTerminator, addr 0x2ac737c, size 0x74, virtual false, abstract: false, final false
  static inline int32_t GetNativeStringLengthNotIncludingNullTerminator(::System::IntPtr pointer);

  /// @brief Method IntPtrToByteArray, addr 0x2ac6e9c, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> IntPtrToByteArray(::System::IntPtr data, uint64_t size);

  /// @brief Method LogNewEvent, addr 0x2ac8740, size 0x354, virtual false, abstract: false, final false
  static inline void LogNewEvent(::StringW eventName, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* values);

  /// @brief Method LogNewUnifiedEvent, addr 0x2ac8698, size 0xa8, virtual false, abstract: false, final false
  static inline void LogNewUnifiedEvent(::Oculus::Platform::LogEventName eventName, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* values);

  static inline ::Oculus::Platform::CAPI* New_ctor();

  /// @brief Method StringFromNative, addr 0x2ac7248, size 0x134, virtual false, abstract: false, final false
  static inline ::StringW StringFromNative(::System::IntPtr pointer);

  /// @brief Method StringToNative, addr 0x2ac76b4, size 0x180, virtual false, abstract: false, final false
  static inline ::System::IntPtr StringToNative(::StringW s);

  /// @brief Method .ctor, addr 0x2ae285c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::UTF8Encoding* getStaticF_nativeStringEncoding();

  /// @brief Method ovr_AbuseReportOptions_Create, addr 0x2ac3fe8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AbuseReportOptions_Create();

  /// @brief Method ovr_AbuseReportOptions_Destroy, addr 0x2ac4354, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AbuseReportOptions_Destroy(::System::IntPtr handle);

  /// @brief Method ovr_AbuseReportOptions_SetPreventPeopleChooser, addr 0x2ac40b8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AbuseReportOptions_SetPreventPeopleChooser(::System::IntPtr handle, bool value);

  /// @brief Method ovr_AbuseReportOptions_SetReportType, addr 0x2ac41a4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AbuseReportOptions_SetReportType(::System::IntPtr handle, ::Oculus::Platform::AbuseReportType value);

  /// @brief Method ovr_AbuseReportRecording_GetRecordingUuid, addr 0x2ad1b38, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AbuseReportRecording_GetRecordingUuid(::System::IntPtr obj);

  /// @brief Method ovr_AbuseReportRecording_GetRecordingUuid_Native, addr 0x2ad1b90, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AbuseReportRecording_GetRecordingUuid_Native(::System::IntPtr obj);

  /// @brief Method ovr_AbuseReport_LaunchAdvancedReportFlow, addr 0x2aca25c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_AbuseReport_LaunchAdvancedReportFlow(uint64_t content_id, ::System::IntPtr abuse_report_options);

  /// @brief Method ovr_AbuseReport_ReportRequestHandled, addr 0x2aca2e0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AbuseReport_ReportRequestHandled(::Oculus::Platform::ReportRequestResponse response);

  /// @brief Method ovr_AchievementDefinitionArray_GetElement, addr 0x2ad1e54, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AchievementDefinitionArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_AchievementDefinitionArray_GetNextUrl, addr 0x2ad1ed8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementDefinitionArray_GetNextUrl(::System::IntPtr obj);

  /// @brief Method ovr_AchievementDefinitionArray_GetNextUrl_Native, addr 0x2ad1f30, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AchievementDefinitionArray_GetNextUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_AchievementDefinitionArray_GetSize, addr 0x2ad1fac, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_AchievementDefinitionArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_AchievementDefinitionArray_HasNextPage, addr 0x2ad2028, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementDefinitionArray_HasNextPage(::System::IntPtr obj);

  /// @brief Method ovr_AchievementDefinition_GetBitfieldLength, addr 0x2ad1c0c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_AchievementDefinition_GetBitfieldLength(::System::IntPtr obj);

  /// @brief Method ovr_AchievementDefinition_GetName, addr 0x2ad1c88, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementDefinition_GetName(::System::IntPtr obj);

  /// @brief Method ovr_AchievementDefinition_GetName_Native, addr 0x2ad1ce0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AchievementDefinition_GetName_Native(::System::IntPtr obj);

  /// @brief Method ovr_AchievementDefinition_GetTarget, addr 0x2ad1d5c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AchievementDefinition_GetTarget(::System::IntPtr obj);

  /// @brief Method ovr_AchievementDefinition_GetType, addr 0x2ad1dd8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::AchievementType ovr_AchievementDefinition_GetType(::System::IntPtr obj);

  /// @brief Method ovr_AchievementProgressArray_GetElement, addr 0x2ad2428, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AchievementProgressArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_AchievementProgressArray_GetNextUrl, addr 0x2ad24ac, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementProgressArray_GetNextUrl(::System::IntPtr obj);

  /// @brief Method ovr_AchievementProgressArray_GetNextUrl_Native, addr 0x2ad2504, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AchievementProgressArray_GetNextUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_AchievementProgressArray_GetSize, addr 0x2ad2580, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_AchievementProgressArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_AchievementProgressArray_HasNextPage, addr 0x2ad25fc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementProgressArray_HasNextPage(::System::IntPtr obj);

  /// @brief Method ovr_AchievementProgress_GetBitfield, addr 0x2ad20ac, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementProgress_GetBitfield(::System::IntPtr obj);

  /// @brief Method ovr_AchievementProgress_GetBitfield_Native, addr 0x2ad2104, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AchievementProgress_GetBitfield_Native(::System::IntPtr obj);

  /// @brief Method ovr_AchievementProgress_GetCount, addr 0x2ad2180, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AchievementProgress_GetCount(::System::IntPtr obj);

  /// @brief Method ovr_AchievementProgress_GetIsUnlocked, addr 0x2ad21fc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementProgress_GetIsUnlocked(::System::IntPtr obj);

  /// @brief Method ovr_AchievementProgress_GetName, addr 0x2ad2280, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementProgress_GetName(::System::IntPtr obj);

  /// @brief Method ovr_AchievementProgress_GetName_Native, addr 0x2ad22d8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AchievementProgress_GetName_Native(::System::IntPtr obj);

  /// @brief Method ovr_AchievementProgress_GetUnlockTime, addr 0x2ad2354, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_AchievementProgress_GetUnlockTime(::System::IntPtr obj);

  /// @brief Method ovr_AchievementProgress_GetUnlockTime_Native, addr 0x2ad23ac, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AchievementProgress_GetUnlockTime_Native(::System::IntPtr obj);

  /// @brief Method ovr_AchievementUpdate_GetJustUnlocked, addr 0x2ad2680, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementUpdate_GetJustUnlocked(::System::IntPtr obj);

  /// @brief Method ovr_AchievementUpdate_GetName, addr 0x2ad2704, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementUpdate_GetName(::System::IntPtr obj);

  /// @brief Method ovr_AchievementUpdate_GetName_Native, addr 0x2ad275c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AchievementUpdate_GetName_Native(::System::IntPtr obj);

  /// @brief Method ovr_Achievements_AddCount, addr 0x2aca35c, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddCount(::StringW name, uint64_t count);

  /// @brief Method ovr_Achievements_AddCount_Native, addr 0x2aca408, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddCount_Native(::System::IntPtr name, uint64_t count);

  /// @brief Method ovr_Achievements_AddFields, addr 0x2aca48c, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddFields(::StringW name, ::StringW fields);

  /// @brief Method ovr_Achievements_AddFields_Native, addr 0x2aca554, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddFields_Native(::System::IntPtr name, ::System::IntPtr fields);

  /// @brief Method ovr_Achievements_GetAllDefinitions, addr 0x2aca5d8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetAllDefinitions();

  /// @brief Method ovr_Achievements_GetAllProgress, addr 0x2aca640, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetAllProgress();

  /// @brief Method ovr_Achievements_GetDefinitionsByName, addr 0x2aca6a8, size 0x148, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetDefinitionsByName(::ArrayW<::StringW, ::Array<::StringW>*> names, int32_t count);

  /// @brief Method ovr_Achievements_GetProgressByName, addr 0x2aca7f0, size 0x148, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetProgressByName(::ArrayW<::StringW, ::Array<::StringW>*> names, int32_t count);

  /// @brief Method ovr_Achievements_Unlock, addr 0x2aca938, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_Unlock(::StringW name);

  /// @brief Method ovr_Achievements_Unlock_Native, addr 0x2aca9d4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_Unlock_Native(::System::IntPtr name);

  /// @brief Method ovr_AdvancedAbuseReportOptions_AddSuggestedUser, addr 0x2ac48fc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_AddSuggestedUser(::System::IntPtr handle, uint64_t value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext, addr 0x2ac4624, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext(::System::IntPtr handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers, addr 0x2ac49d8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers(::System::IntPtr handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_Create, addr 0x2ac4434, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AdvancedAbuseReportOptions_Create();

  /// @brief Method ovr_AdvancedAbuseReportOptions_Destroy, addr 0x2ac4c6c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_Destroy(::System::IntPtr handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString, addr 0x2ac450c, size 0xc0, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString(::System::IntPtr handle, ::StringW key, ::StringW value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native, addr 0x2ae048c, size 0x94, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native(::System::IntPtr handle, ::System::IntPtr key, ::System::IntPtr value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType, addr 0x2ac4708, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetObjectType(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType_Native, addr 0x2ae0520, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetObjectType_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetReportType, addr 0x2ac4810, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetReportType(::System::IntPtr handle, ::Oculus::Platform::AbuseReportType value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetVideoMode, addr 0x2ac4abc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetVideoMode(::System::IntPtr handle, ::Oculus::Platform::AbuseReportVideoMode value);

  /// @brief Method ovr_AppDownloadProgressResult_GetDownloadBytes, addr 0x2ad27d8, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_AppDownloadProgressResult_GetDownloadBytes(::System::IntPtr obj);

  /// @brief Method ovr_AppDownloadProgressResult_GetDownloadedBytes, addr 0x2ad2854, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_AppDownloadProgressResult_GetDownloadedBytes(::System::IntPtr obj);

  /// @brief Method ovr_AppDownloadProgressResult_GetStatusCode, addr 0x2ad28d0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::AppStatus ovr_AppDownloadProgressResult_GetStatusCode(::System::IntPtr obj);

  /// @brief Method ovr_AppDownloadResult_GetTimestamp, addr 0x2ad294c, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_AppDownloadResult_GetTimestamp(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationInviteArray_GetElement, addr 0x2ad2de4, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ApplicationInviteArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_ApplicationInviteArray_GetNextUrl, addr 0x2ad2e68, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationInviteArray_GetNextUrl(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationInviteArray_GetNextUrl_Native, addr 0x2ad2ec0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ApplicationInviteArray_GetNextUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationInviteArray_GetSize, addr 0x2ad2f3c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_ApplicationInviteArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationInviteArray_HasNextPage, addr 0x2ad2fb8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ApplicationInviteArray_HasNextPage(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationInvite_GetDestination, addr 0x2ad2a44, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ApplicationInvite_GetDestination(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationInvite_GetID, addr 0x2ad2ac0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationInvite_GetID(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationInvite_GetIsActive, addr 0x2ad2b3c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ApplicationInvite_GetIsActive(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationInvite_GetLobbySessionId, addr 0x2ad2bc0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationInvite_GetLobbySessionId(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationInvite_GetLobbySessionId_Native, addr 0x2ad2c18, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ApplicationInvite_GetLobbySessionId_Native(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationInvite_GetMatchSessionId, addr 0x2ad2c94, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationInvite_GetMatchSessionId(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationInvite_GetMatchSessionId_Native, addr 0x2ad2cec, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ApplicationInvite_GetMatchSessionId_Native(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationInvite_GetRecipient, addr 0x2ad2d68, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ApplicationInvite_GetRecipient(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationLifecycle_GetLaunchDetails, addr 0x2ac8b30, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ApplicationLifecycle_GetLaunchDetails();

  /// @brief Method ovr_ApplicationLifecycle_GetRegisteredPIDs, addr 0x2acad58, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_GetRegisteredPIDs();

  /// @brief Method ovr_ApplicationLifecycle_GetSessionKey, addr 0x2acadc0, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_GetSessionKey();

  /// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult, addr 0x2ac8b98, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_ApplicationLifecycle_LogDeeplinkResult(::StringW trackingID, ::Oculus::Platform::LaunchResult result);

  /// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult_Native, addr 0x2ac8c34, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationLifecycle_LogDeeplinkResult_Native(::System::IntPtr trackingID, ::Oculus::Platform::LaunchResult result);

  /// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey, addr 0x2acae28, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey(::StringW sessionKey);

  /// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey_Native, addr 0x2acaec4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey_Native(::System::IntPtr sessionKey);

  /// @brief Method ovr_ApplicationOptions_Create, addr 0x2ac5038, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ApplicationOptions_Create();

  /// @brief Method ovr_ApplicationOptions_Destroy, addr 0x2ac56d8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_Destroy(::System::IntPtr handle);

  /// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage, addr 0x2ac5108, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDeeplinkMessage(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage_Native, addr 0x2ae05a4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDeeplinkMessage_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_ApplicationOptions_SetDestinationApiName, addr 0x2ac5210, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDestinationApiName(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetDestinationApiName_Native, addr 0x2ae0628, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDestinationApiName_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_ApplicationOptions_SetLobbySessionId, addr 0x2ac5318, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetLobbySessionId(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetLobbySessionId_Native, addr 0x2ae06ac, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetLobbySessionId_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_ApplicationOptions_SetMatchSessionId, addr 0x2ac5420, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetMatchSessionId(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetMatchSessionId_Native, addr 0x2ae0730, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetMatchSessionId_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_ApplicationOptions_SetRoomId, addr 0x2ac5528, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetRoomId(::System::IntPtr handle, uint64_t value);

  /// @brief Method ovr_ApplicationVersion_GetCurrentCode, addr 0x2ad303c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_ApplicationVersion_GetCurrentCode(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationVersion_GetCurrentName, addr 0x2ad30b8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationVersion_GetCurrentName(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationVersion_GetCurrentName_Native, addr 0x2ad3110, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ApplicationVersion_GetCurrentName_Native(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestCode, addr 0x2ad318c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_ApplicationVersion_GetLatestCode(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestName, addr 0x2ad3208, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationVersion_GetLatestName(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestName_Native, addr 0x2ad3260, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ApplicationVersion_GetLatestName_Native(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationVersion_GetReleaseDate, addr 0x2ad32dc, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_ApplicationVersion_GetReleaseDate(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationVersion_GetSize, addr 0x2ad3358, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationVersion_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_ApplicationVersion_GetSize_Native, addr 0x2ad33b0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ApplicationVersion_GetSize_Native(::System::IntPtr obj);

  /// @brief Method ovr_Application_CancelAppDownload, addr 0x2acaa50, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_CancelAppDownload();

  /// @brief Method ovr_Application_CheckAppDownloadProgress, addr 0x2acaab8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_CheckAppDownloadProgress();

  /// @brief Method ovr_Application_GetID, addr 0x2ad29c8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_GetID(::System::IntPtr obj);

  /// @brief Method ovr_Application_GetInstalledApplications, addr 0x2acab20, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_GetInstalledApplications();

  /// @brief Method ovr_Application_GetVersion, addr 0x2acab88, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_GetVersion();

  /// @brief Method ovr_Application_InstallAppUpdateAndRelaunch, addr 0x2acabf0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_InstallAppUpdateAndRelaunch(::System::IntPtr deeplink_options);

  /// @brief Method ovr_Application_LaunchOtherApp, addr 0x2acac6c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_LaunchOtherApp(uint64_t appID, ::System::IntPtr deeplink_options);

  /// @brief Method ovr_Application_StartAppDownload, addr 0x2acacf0, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_StartAppDownload();

  /// @brief Method ovr_AssetDetailsArray_GetElement, addr 0x2ad3948, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AssetDetailsArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_AssetDetailsArray_GetSize, addr 0x2ad39cc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_AssetDetailsArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_AssetDetails_GetAssetId, addr 0x2ad342c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetDetails_GetAssetId(::System::IntPtr obj);

  /// @brief Method ovr_AssetDetails_GetAssetType, addr 0x2ad34a8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetAssetType(::System::IntPtr obj);

  /// @brief Method ovr_AssetDetails_GetAssetType_Native, addr 0x2ad3500, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AssetDetails_GetAssetType_Native(::System::IntPtr obj);

  /// @brief Method ovr_AssetDetails_GetDownloadStatus, addr 0x2ad357c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetDownloadStatus(::System::IntPtr obj);

  /// @brief Method ovr_AssetDetails_GetDownloadStatus_Native, addr 0x2ad35d4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AssetDetails_GetDownloadStatus_Native(::System::IntPtr obj);

  /// @brief Method ovr_AssetDetails_GetFilepath, addr 0x2ad3650, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetFilepath(::System::IntPtr obj);

  /// @brief Method ovr_AssetDetails_GetFilepath_Native, addr 0x2ad36a8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AssetDetails_GetFilepath_Native(::System::IntPtr obj);

  /// @brief Method ovr_AssetDetails_GetIapStatus, addr 0x2ad3724, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetIapStatus(::System::IntPtr obj);

  /// @brief Method ovr_AssetDetails_GetIapStatus_Native, addr 0x2ad377c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AssetDetails_GetIapStatus_Native(::System::IntPtr obj);

  /// @brief Method ovr_AssetDetails_GetLanguage, addr 0x2ad37f8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AssetDetails_GetLanguage(::System::IntPtr obj);

  /// @brief Method ovr_AssetDetails_GetMetadata, addr 0x2ad3874, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetMetadata(::System::IntPtr obj);

  /// @brief Method ovr_AssetDetails_GetMetadata_Native, addr 0x2ad38cc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AssetDetails_GetMetadata_Native(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetAssetFileId, addr 0x2ad3a48, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDeleteResult_GetAssetFileId(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetAssetId, addr 0x2ad3ac4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDeleteResult_GetAssetId(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetFilepath, addr 0x2ad3b40, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetFileDeleteResult_GetFilepath(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetFilepath_Native, addr 0x2ad3b98, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AssetFileDeleteResult_GetFilepath_Native(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetSuccess, addr 0x2ad3c14, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AssetFileDeleteResult_GetSuccess(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetFileId, addr 0x2ad3c98, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetFileId(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetId, addr 0x2ad3d14, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetId(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath, addr 0x2ad3d90, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetFileDownloadCancelResult_GetFilepath(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath_Native, addr 0x2ad3de8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AssetFileDownloadCancelResult_GetFilepath_Native(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetSuccess, addr 0x2ad3e64, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AssetFileDownloadCancelResult_GetSuccess(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetAssetId, addr 0x2ad3ee8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadResult_GetAssetId(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetFilepath, addr 0x2ad3f64, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetFileDownloadResult_GetFilepath(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetFilepath_Native, addr 0x2ad3fbc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AssetFileDownloadResult_GetFilepath_Native(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetAssetFileId, addr 0x2ad4038, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetFileId(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetAssetId, addr 0x2ad40b4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetId(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotal, addr 0x2ad4130, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_AssetFileDownloadUpdate_GetBytesTotal(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotalLong, addr 0x2ad41ac, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetBytesTotalLong(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferred, addr 0x2ad4228, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_AssetFileDownloadUpdate_GetBytesTransferred(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferredLong, addr 0x2ad42a4, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_AssetFileDownloadUpdate_GetBytesTransferredLong(::System::IntPtr obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetCompleted, addr 0x2ad4320, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AssetFileDownloadUpdate_GetCompleted(::System::IntPtr obj);

  /// @brief Method ovr_AssetFile_Delete, addr 0x2acaf40, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_Delete(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DeleteById, addr 0x2acafbc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DeleteById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DeleteByName, addr 0x2acb038, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DeleteByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DeleteByName_Native, addr 0x2acb0d4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DeleteByName_Native(::System::IntPtr assetFileName);

  /// @brief Method ovr_AssetFile_Download, addr 0x2acb150, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_Download(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadById, addr 0x2acb1cc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadByName, addr 0x2acb248, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DownloadByName_Native, addr 0x2acb2e4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadByName_Native(::System::IntPtr assetFileName);

  /// @brief Method ovr_AssetFile_DownloadCancel, addr 0x2acb360, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancel(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadCancelById, addr 0x2acb3dc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancelById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadCancelByName, addr 0x2acb458, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancelByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DownloadCancelByName_Native, addr 0x2acb4f4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancelByName_Native(::System::IntPtr assetFileName);

  /// @brief Method ovr_AssetFile_GetList, addr 0x2acb570, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_GetList();

  /// @brief Method ovr_AssetFile_Status, addr 0x2acb5d8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_Status(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_StatusById, addr 0x2acb654, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_StatusById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_StatusByName, addr 0x2acb6d0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_StatusByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_StatusByName_Native, addr 0x2acb76c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_StatusByName_Native(::System::IntPtr assetFileName);

  /// @brief Method ovr_AvatarEditorOptions_Create, addr 0x2ac57b8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_AvatarEditorOptions_Create();

  /// @brief Method ovr_AvatarEditorOptions_Destroy, addr 0x2ac5a54, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AvatarEditorOptions_Destroy(::System::IntPtr handle);

  /// @brief Method ovr_AvatarEditorOptions_SetSourceOverride, addr 0x2ac5888, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_AvatarEditorOptions_SetSourceOverride(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_AvatarEditorOptions_SetSourceOverride_Native, addr 0x2ae07b4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AvatarEditorOptions_SetSourceOverride_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_AvatarEditorResult_GetRequestSent, addr 0x2ad43a4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AvatarEditorResult_GetRequestSent(::System::IntPtr obj);

  /// @brief Method ovr_Avatar_LaunchAvatarEditor, addr 0x2acb7e8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Avatar_LaunchAvatarEditor(::System::IntPtr options);

  /// @brief Method ovr_Avatar_UpdateMetaData, addr 0x2acb864, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_Avatar_UpdateMetaData(::StringW avatarMetaData, ::StringW imageFilePath);

  /// @brief Method ovr_Avatar_UpdateMetaData_Native, addr 0x2acb92c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Avatar_UpdateMetaData_Native(::System::IntPtr avatarMetaData, ::System::IntPtr imageFilePath);

  /// @brief Method ovr_BlockedUserArray_GetElement, addr 0x2ad44a4, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_BlockedUserArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_BlockedUserArray_GetNextUrl, addr 0x2ad4528, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_BlockedUserArray_GetNextUrl(::System::IntPtr obj);

  /// @brief Method ovr_BlockedUserArray_GetNextUrl_Native, addr 0x2ad4580, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_BlockedUserArray_GetNextUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_BlockedUserArray_GetSize, addr 0x2ad45fc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_BlockedUserArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_BlockedUserArray_HasNextPage, addr 0x2ad4678, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_BlockedUserArray_HasNextPage(::System::IntPtr obj);

  /// @brief Method ovr_BlockedUser_GetId, addr 0x2ad4428, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_BlockedUser_GetId(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeArray_GetElement, addr 0x2ad4d34, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ChallengeArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_ChallengeArray_GetNextUrl, addr 0x2ad4db8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeArray_GetNextUrl(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeArray_GetNextUrl_Native, addr 0x2ad4e10, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ChallengeArray_GetNextUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeArray_GetPreviousUrl, addr 0x2ad4e8c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeArray_GetPreviousUrl(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeArray_GetPreviousUrl_Native, addr 0x2ad4ee4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ChallengeArray_GetPreviousUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeArray_GetSize, addr 0x2ad4f60, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_ChallengeArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeArray_GetTotalCount, addr 0x2ad4fdc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeArray_GetTotalCount(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeArray_HasNextPage, addr 0x2ad5058, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeArray_HasNextPage(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeArray_HasPreviousPage, addr 0x2ad50dc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeArray_HasPreviousPage(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntryArray_GetElement, addr 0x2ad56d8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ChallengeEntryArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_ChallengeEntryArray_GetNextUrl, addr 0x2ad575c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeEntryArray_GetNextUrl(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntryArray_GetNextUrl_Native, addr 0x2ad57b4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ChallengeEntryArray_GetNextUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl, addr 0x2ad5830, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeEntryArray_GetPreviousUrl(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl_Native, addr 0x2ad5888, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ChallengeEntryArray_GetPreviousUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntryArray_GetSize, addr 0x2ad5904, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_ChallengeEntryArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntryArray_GetTotalCount, addr 0x2ad5980, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeEntryArray_GetTotalCount(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntryArray_HasNextPage, addr 0x2ad59fc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeEntryArray_HasNextPage(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntryArray_HasPreviousPage, addr 0x2ad5a80, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeEntryArray_HasPreviousPage(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntry_GetDisplayScore, addr 0x2ad5160, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeEntry_GetDisplayScore(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntry_GetDisplayScore_Native, addr 0x2ad51b8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ChallengeEntry_GetDisplayScore_Native(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraData, addr 0x2ad5234, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ovr_ChallengeEntry_GetExtraData(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraDataLength, addr 0x2ad5398, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_ChallengeEntry_GetExtraDataLength(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraData_Native, addr 0x2ad531c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ChallengeEntry_GetExtraData_Native(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntry_GetID, addr 0x2ad5414, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeEntry_GetID(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntry_GetRank, addr 0x2ad5490, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_ChallengeEntry_GetRank(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntry_GetScore, addr 0x2ad550c, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_ChallengeEntry_GetScore(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntry_GetTimestamp, addr 0x2ad5588, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_ChallengeEntry_GetTimestamp(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntry_GetTimestamp_Native, addr 0x2ad55e0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeEntry_GetTimestamp_Native(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeEntry_GetUser, addr 0x2ad565c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ChallengeEntry_GetUser(::System::IntPtr obj);

  /// @brief Method ovr_ChallengeOptions_Create, addr 0x2ae0838, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ChallengeOptions_Create();

  /// @brief Method ovr_ChallengeOptions_Destroy, addr 0x2ae08a0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_Destroy(::System::IntPtr handle);

  /// @brief Method ovr_ChallengeOptions_SetDescription, addr 0x2ae091c, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetDescription(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetDescription_Native, addr 0x2ae09bc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetDescription_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_ChallengeOptions_SetEndDate, addr 0x2ae0a40, size 0x6c, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetEndDate(::System::IntPtr handle, ::System::DateTime value);

  /// @brief Method ovr_ChallengeOptions_SetEndDate_Native, addr 0x2ae0aac, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetEndDate_Native(::System::IntPtr handle, uint64_t value);

  /// @brief Method ovr_ChallengeOptions_SetIncludeActiveChallenges, addr 0x2ae0b30, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetIncludeActiveChallenges(::System::IntPtr handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetIncludeFutureChallenges, addr 0x2ae0bb4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetIncludeFutureChallenges(::System::IntPtr handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetIncludePastChallenges, addr 0x2ae0c38, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetIncludePastChallenges(::System::IntPtr handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetLeaderboardName, addr 0x2ae0cbc, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetLeaderboardName(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetLeaderboardName_Native, addr 0x2ae0d5c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetLeaderboardName_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_ChallengeOptions_SetStartDate, addr 0x2ae0de0, size 0x6c, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetStartDate(::System::IntPtr handle, ::System::DateTime value);

  /// @brief Method ovr_ChallengeOptions_SetStartDate_Native, addr 0x2ae0e4c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetStartDate_Native(::System::IntPtr handle, uint64_t value);

  /// @brief Method ovr_ChallengeOptions_SetTitle, addr 0x2ae0ed0, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetTitle(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetTitle_Native, addr 0x2ae0f70, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetTitle_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_ChallengeOptions_SetViewerFilter, addr 0x2ae0ff4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetViewerFilter(::System::IntPtr handle, ::Oculus::Platform::ChallengeViewerFilter value);

  /// @brief Method ovr_ChallengeOptions_SetVisibility, addr 0x2ae1078, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetVisibility(::System::IntPtr handle, ::Oculus::Platform::ChallengeVisibility value);

  /// @brief Method ovr_Challenge_GetCreationType, addr 0x2ad46fc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ChallengeCreationType ovr_Challenge_GetCreationType(::System::IntPtr obj);

  /// @brief Method ovr_Challenge_GetDescription, addr 0x2ad4778, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Challenge_GetDescription(::System::IntPtr obj);

  /// @brief Method ovr_Challenge_GetDescription_Native, addr 0x2ad47d0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Challenge_GetDescription_Native(::System::IntPtr obj);

  /// @brief Method ovr_Challenge_GetEndDate, addr 0x2ad484c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Challenge_GetEndDate(::System::IntPtr obj);

  /// @brief Method ovr_Challenge_GetEndDate_Native, addr 0x2ad48a4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenge_GetEndDate_Native(::System::IntPtr obj);

  /// @brief Method ovr_Challenge_GetID, addr 0x2ad4920, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenge_GetID(::System::IntPtr obj);

  /// @brief Method ovr_Challenge_GetInvitedUsers, addr 0x2ad499c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Challenge_GetInvitedUsers(::System::IntPtr obj);

  /// @brief Method ovr_Challenge_GetLeaderboard, addr 0x2ad4a18, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Challenge_GetLeaderboard(::System::IntPtr obj);

  /// @brief Method ovr_Challenge_GetParticipants, addr 0x2ad4a94, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Challenge_GetParticipants(::System::IntPtr obj);

  /// @brief Method ovr_Challenge_GetStartDate, addr 0x2ad4b10, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Challenge_GetStartDate(::System::IntPtr obj);

  /// @brief Method ovr_Challenge_GetStartDate_Native, addr 0x2ad4b68, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenge_GetStartDate_Native(::System::IntPtr obj);

  /// @brief Method ovr_Challenge_GetTitle, addr 0x2ad4be4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Challenge_GetTitle(::System::IntPtr obj);

  /// @brief Method ovr_Challenge_GetTitle_Native, addr 0x2ad4c3c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Challenge_GetTitle_Native(::System::IntPtr obj);

  /// @brief Method ovr_Challenge_GetVisibility, addr 0x2ad4cb8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ChallengeVisibility ovr_Challenge_GetVisibility(::System::IntPtr obj);

  /// @brief Method ovr_Challenges_Create, addr 0x2acb9b0, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Create(::StringW leaderboardName, ::System::IntPtr challengeOptions);

  /// @brief Method ovr_Challenges_Create_Native, addr 0x2acba5c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Create_Native(::System::IntPtr leaderboardName, ::System::IntPtr challengeOptions);

  /// @brief Method ovr_Challenges_DeclineInvite, addr 0x2acbae0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_DeclineInvite(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Delete, addr 0x2acbb5c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Delete(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Get, addr 0x2acbbd8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Get(uint64_t challengeID);

  /// @brief Method ovr_Challenges_GetEntries, addr 0x2acbc54, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetEntries(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Challenges_GetEntriesAfterRank, addr 0x2acbcf0, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetEntriesAfterRank(uint64_t challengeID, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Challenges_GetEntriesByIds, addr 0x2acbd84, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetEntriesByIds(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                        uint32_t userIDLength);

  /// @brief Method ovr_Challenges_GetList, addr 0x2acbe38, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetList(::System::IntPtr challengeOptions, int32_t limit);

  /// @brief Method ovr_Challenges_GetNextChallenges, addr 0x2acbebc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetNextChallenges(::System::IntPtr handle);

  /// @brief Method ovr_Challenges_GetNextEntries, addr 0x2acbf38, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetNextEntries(::System::IntPtr handle);

  /// @brief Method ovr_Challenges_GetPreviousChallenges, addr 0x2acbfb4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetPreviousChallenges(::System::IntPtr handle);

  /// @brief Method ovr_Challenges_GetPreviousEntries, addr 0x2acc030, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetPreviousEntries(::System::IntPtr handle);

  /// @brief Method ovr_Challenges_Join, addr 0x2acc0ac, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Join(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Leave, addr 0x2acc128, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Leave(uint64_t challengeID);

  /// @brief Method ovr_Challenges_UpdateInfo, addr 0x2acc1a4, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_UpdateInfo(uint64_t challengeID, ::System::IntPtr challengeOptions);

  /// @brief Method ovr_Colocation_GetCurrentMapUuid, addr 0x2acc228, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_GetCurrentMapUuid();

  /// @brief Method ovr_Colocation_RequestMap, addr 0x2acc290, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_RequestMap(::StringW uuid);

  /// @brief Method ovr_Colocation_RequestMap_Native, addr 0x2acc32c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_RequestMap_Native(::System::IntPtr uuid);

  /// @brief Method ovr_Colocation_ShareMap, addr 0x2acc3a8, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_ShareMap(::StringW uuid);

  /// @brief Method ovr_Colocation_ShareMap_Native, addr 0x2acc444, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_ShareMap_Native(::System::IntPtr uuid);

  /// @brief Method ovr_CrashApplication, addr 0x2ac852c, size 0x64, virtual false, abstract: false, final false
  static inline void ovr_CrashApplication();

  /// @brief Method ovr_DataStore_Contains, addr 0x2ad5b04, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t ovr_DataStore_Contains(::System::IntPtr obj, ::StringW key);

  /// @brief Method ovr_DataStore_Contains_Native, addr 0x2ad5bb4, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t ovr_DataStore_Contains_Native(::System::IntPtr obj, ::System::IntPtr key);

  /// @brief Method ovr_DataStore_GetKey, addr 0x2ac712c, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ovr_DataStore_GetKey(::System::IntPtr obj, int32_t index);

  /// @brief Method ovr_DataStore_GetKey_Native, addr 0x2ad5c38, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_DataStore_GetKey_Native(::System::IntPtr obj, int32_t index);

  /// @brief Method ovr_DataStore_GetNumKeys, addr 0x2ac70b0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_DataStore_GetNumKeys(::System::IntPtr obj);

  /// @brief Method ovr_DataStore_GetValue, addr 0x2ac7194, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW ovr_DataStore_GetValue(::System::IntPtr obj, ::StringW key);

  /// @brief Method ovr_DataStore_GetValue_Native, addr 0x2ad5cbc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_DataStore_GetValue_Native(::System::IntPtr obj, ::System::IntPtr key);

  /// @brief Method ovr_DestinationArray_GetElement, addr 0x2ad5fbc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_DestinationArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_DestinationArray_GetNextUrl, addr 0x2ad6040, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_DestinationArray_GetNextUrl(::System::IntPtr obj);

  /// @brief Method ovr_DestinationArray_GetNextUrl_Native, addr 0x2ad6098, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_DestinationArray_GetNextUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_DestinationArray_GetSize, addr 0x2ad6114, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_DestinationArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_DestinationArray_HasNextPage, addr 0x2ad6190, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_DestinationArray_HasNextPage(::System::IntPtr obj);

  /// @brief Method ovr_Destination_GetApiName, addr 0x2ad5d40, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Destination_GetApiName(::System::IntPtr obj);

  /// @brief Method ovr_Destination_GetApiName_Native, addr 0x2ad5d98, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Destination_GetApiName_Native(::System::IntPtr obj);

  /// @brief Method ovr_Destination_GetDeeplinkMessage, addr 0x2ad5e14, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Destination_GetDeeplinkMessage(::System::IntPtr obj);

  /// @brief Method ovr_Destination_GetDeeplinkMessage_Native, addr 0x2ad5e6c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Destination_GetDeeplinkMessage_Native(::System::IntPtr obj);

  /// @brief Method ovr_Destination_GetDisplayName, addr 0x2ad5ee8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Destination_GetDisplayName(::System::IntPtr obj);

  /// @brief Method ovr_Destination_GetDisplayName_Native, addr 0x2ad5f40, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Destination_GetDisplayName_Native(::System::IntPtr obj);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken, addr 0x2acc4c0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken(::StringW challenge_nonce);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken_Native, addr 0x2acc55c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken_Native(::System::IntPtr challenge_nonce);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken, addr 0x2acc5d8, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken(::StringW challenge_nonce);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native, addr 0x2acc674, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native(::System::IntPtr challenge_nonce);

  /// @brief Method ovr_Entitlement_GetIsViewerEntitled, addr 0x2acc6f0, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Entitlement_GetIsViewerEntitled();

  /// @brief Method ovr_Error_GetCode, addr 0x2ad6214, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ovr_Error_GetCode(::System::IntPtr obj);

  /// @brief Method ovr_Error_GetDisplayableMessage, addr 0x2ad628c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Error_GetDisplayableMessage(::System::IntPtr obj);

  /// @brief Method ovr_Error_GetDisplayableMessage_Native, addr 0x2ad62e4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Error_GetDisplayableMessage_Native(::System::IntPtr obj);

  /// @brief Method ovr_Error_GetHttpCode, addr 0x2ad6360, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_Error_GetHttpCode(::System::IntPtr obj);

  /// @brief Method ovr_Error_GetMessage, addr 0x2ad63dc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Error_GetMessage(::System::IntPtr obj);

  /// @brief Method ovr_Error_GetMessage_Native, addr 0x2ad6434, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Error_GetMessage_Native(::System::IntPtr obj);

  /// @brief Method ovr_FreeMessage, addr 0x2ac7f70, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_FreeMessage(::System::IntPtr message);

  /// @brief Method ovr_GetLoggedInUserLocale, addr 0x2ac7e50, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW ovr_GetLoggedInUserLocale();

  /// @brief Method ovr_GetLoggedInUserLocale_Native, addr 0x2ac7ea0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_GetLoggedInUserLocale_Native();

  /// @brief Method ovr_GraphAPI_Get, addr 0x2acc758, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Get(::StringW url);

  /// @brief Method ovr_GraphAPI_Get_Native, addr 0x2acc7f4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Get_Native(::System::IntPtr url);

  /// @brief Method ovr_GraphAPI_Post, addr 0x2acc870, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Post(::StringW url);

  /// @brief Method ovr_GraphAPI_Post_Native, addr 0x2acc90c, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Post_Native(::System::IntPtr url);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage, addr 0x2ad64b0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetDeeplinkMessage(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native, addr 0x2ad6508, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName, addr 0x2ad6584, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetDestinationApiName(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native, addr 0x2ad65dc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId, addr 0x2ad6658, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetLobbySessionId(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native, addr 0x2ad66b0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId, addr 0x2ad672c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetMatchSessionId(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native, addr 0x2ad6784, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName, addr 0x2ad6800, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetDestinationApiName(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native, addr 0x2ad6858, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId, addr 0x2ad68d4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetLobbySessionId(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native, addr 0x2ad692c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId, addr 0x2ad69a8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetMatchSessionId(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native, addr 0x2ad6a00, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native(::System::IntPtr obj);

  /// @brief Method ovr_GroupPresenceOptions_Create, addr 0x2ae10fc, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_GroupPresenceOptions_Create();

  /// @brief Method ovr_GroupPresenceOptions_Destroy, addr 0x2ae1164, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_Destroy(::System::IntPtr handle);

  /// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride, addr 0x2ae11e0, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x2ae1280, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName, addr 0x2ae1304, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDestinationApiName(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName_Native, addr 0x2ae13a4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDestinationApiName_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_GroupPresenceOptions_SetIsJoinable, addr 0x2ae1428, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetIsJoinable(::System::IntPtr handle, bool value);

  /// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId, addr 0x2ae14ac, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetLobbySessionId(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId_Native, addr 0x2ae154c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetLobbySessionId_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId, addr 0x2ae15d0, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetMatchSessionId(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId_Native, addr 0x2ae1670, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetMatchSessionId_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_GroupPresence_Clear, addr 0x2acc984, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_Clear();

  /// @brief Method ovr_GroupPresence_GetInvitableUsers, addr 0x2acc9ec, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_GetInvitableUsers(::System::IntPtr options);

  /// @brief Method ovr_GroupPresence_GetSentInvites, addr 0x2acca68, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_GetSentInvites();

  /// @brief Method ovr_GroupPresence_LaunchInvitePanel, addr 0x2accad0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchInvitePanel(::System::IntPtr options);

  /// @brief Method ovr_GroupPresence_LaunchMultiplayerErrorDialog, addr 0x2accb4c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchMultiplayerErrorDialog(::System::IntPtr options);

  /// @brief Method ovr_GroupPresence_LaunchRejoinDialog, addr 0x2accbc8, size 0xe8, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog(::StringW lobby_session_id, ::StringW match_session_id, ::StringW destination_api_name);

  /// @brief Method ovr_GroupPresence_LaunchRejoinDialog_Native, addr 0x2acccb0, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog_Native(::System::IntPtr lobby_session_id, ::System::IntPtr match_session_id, ::System::IntPtr destination_api_name);

  /// @brief Method ovr_GroupPresence_LaunchRosterPanel, addr 0x2accd44, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchRosterPanel(::System::IntPtr options);

  /// @brief Method ovr_GroupPresence_SendInvites, addr 0x2accdc0, size 0x8c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SendInvites(::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs, uint32_t userIDLength);

  /// @brief Method ovr_GroupPresence_Set, addr 0x2acce4c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_Set(::System::IntPtr groupPresenceOptions);

  /// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride, addr 0x2accec8, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride(::StringW deeplink_message);

  /// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride_Native, addr 0x2accf64, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride_Native(::System::IntPtr deeplink_message);

  /// @brief Method ovr_GroupPresence_SetDestination, addr 0x2accfe0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDestination(::StringW api_name);

  /// @brief Method ovr_GroupPresence_SetDestination_Native, addr 0x2acd07c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDestination_Native(::System::IntPtr api_name);

  /// @brief Method ovr_GroupPresence_SetIsJoinable, addr 0x2acd0f8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetIsJoinable(bool is_joinable);

  /// @brief Method ovr_GroupPresence_SetLobbySession, addr 0x2acd174, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetLobbySession(::StringW id);

  /// @brief Method ovr_GroupPresence_SetLobbySession_Native, addr 0x2acd210, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetLobbySession_Native(::System::IntPtr id);

  /// @brief Method ovr_GroupPresence_SetMatchSession, addr 0x2acd28c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetMatchSession(::StringW id);

  /// @brief Method ovr_GroupPresence_SetMatchSession_Native, addr 0x2acd328, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetMatchSession_Native(::System::IntPtr id);

  /// @brief Method ovr_HTTP_Get, addr 0x2acd3a4, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Get(::StringW url);

  /// @brief Method ovr_HTTP_GetToFile, addr 0x2acd4bc, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_GetToFile(::StringW url, ::StringW diskFile);

  /// @brief Method ovr_HTTP_GetToFile_Native, addr 0x2acd584, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_GetToFile_Native(::System::IntPtr url, ::System::IntPtr diskFile);

  /// @brief Method ovr_HTTP_GetWithMessageType, addr 0x2ac8490, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_GetWithMessageType(::StringW url, int32_t messageType);

  /// @brief Method ovr_HTTP_Get_Native, addr 0x2acd440, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Get_Native(::System::IntPtr url);

  /// @brief Method ovr_HTTP_MultiPartPost, addr 0x2acd608, size 0x154, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_MultiPartPost(::StringW url, ::StringW filepath_param_name, ::StringW filepath, ::StringW access_token,
                                                ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> post_params);

  /// @brief Method ovr_HTTP_MultiPartPost_Native, addr 0x2acd75c, size 0x1d8, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_MultiPartPost_Native(::System::IntPtr url, ::System::IntPtr filepath_param_name, ::System::IntPtr filepath, ::System::IntPtr access_token,
                                                       ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> post_params,
                                                       ::System::UIntPtr numItems);

  /// @brief Method ovr_HTTP_Post, addr 0x2acd934, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Post(::StringW url);

  /// @brief Method ovr_HTTP_Post_Native, addr 0x2acd9d0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Post_Native(::System::IntPtr url);

  /// @brief Method ovr_HTTP_StartTransfer, addr 0x2ac8cb8, size 0xec, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_StartTransfer(::StringW url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> headers);

  /// @brief Method ovr_HTTP_StartTransfer_Native, addr 0x2ac8da4, size 0x1a4, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_StartTransfer_Native(::System::IntPtr url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> headers,
                                                       ::System::UIntPtr numItems);

  /// @brief Method ovr_HTTP_Write, addr 0x2ac8f48, size 0xa4, virtual false, abstract: false, final false
  static inline bool ovr_HTTP_Write(uint64_t transferId, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::System::UIntPtr length);

  /// @brief Method ovr_HTTP_WriteEOM, addr 0x2ac8fec, size 0x78, virtual false, abstract: false, final false
  static inline void ovr_HTTP_WriteEOM(uint64_t transferId);

  /// @brief Method ovr_HttpTransferUpdate_GetBytes, addr 0x2ad6a7c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_HttpTransferUpdate_GetBytes(::System::IntPtr obj);

  /// @brief Method ovr_HttpTransferUpdate_GetID, addr 0x2ad6af8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HttpTransferUpdate_GetID(::System::IntPtr obj);

  /// @brief Method ovr_HttpTransferUpdate_GetSize, addr 0x2ad6b74, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_HttpTransferUpdate_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_HttpTransferUpdate_IsCompleted, addr 0x2ad6bf0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_HttpTransferUpdate_IsCompleted(::System::IntPtr obj);

  /// @brief Method ovr_IAP_ConsumePurchase, addr 0x2acda4c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_ConsumePurchase(::StringW sku);

  /// @brief Method ovr_IAP_ConsumePurchase_Native, addr 0x2acdae8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_ConsumePurchase_Native(::System::IntPtr sku);

  /// @brief Method ovr_IAP_GetProductsBySKU, addr 0x2acdb64, size 0x148, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_GetProductsBySKU(::ArrayW<::StringW, ::Array<::StringW>*> skus, int32_t count);

  /// @brief Method ovr_IAP_GetViewerPurchases, addr 0x2acdcac, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_GetViewerPurchases();

  /// @brief Method ovr_IAP_GetViewerPurchasesDurableCache, addr 0x2acdd14, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_GetViewerPurchasesDurableCache();

  /// @brief Method ovr_IAP_LaunchCheckoutFlow, addr 0x2acdd7c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_LaunchCheckoutFlow(::StringW sku);

  /// @brief Method ovr_IAP_LaunchCheckoutFlow_Native, addr 0x2acde18, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_LaunchCheckoutFlow_Native(::System::IntPtr sku);

  /// @brief Method ovr_InstalledApplicationArray_GetElement, addr 0x2ad7040, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_InstalledApplicationArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_InstalledApplicationArray_GetSize, addr 0x2ad70c4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_InstalledApplicationArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_InstalledApplication_GetApplicationId, addr 0x2ad6c74, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetApplicationId(::System::IntPtr obj);

  /// @brief Method ovr_InstalledApplication_GetApplicationId_Native, addr 0x2ad6ccc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_InstalledApplication_GetApplicationId_Native(::System::IntPtr obj);

  /// @brief Method ovr_InstalledApplication_GetPackageName, addr 0x2ad6d48, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetPackageName(::System::IntPtr obj);

  /// @brief Method ovr_InstalledApplication_GetPackageName_Native, addr 0x2ad6da0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_InstalledApplication_GetPackageName_Native(::System::IntPtr obj);

  /// @brief Method ovr_InstalledApplication_GetStatus, addr 0x2ad6e1c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetStatus(::System::IntPtr obj);

  /// @brief Method ovr_InstalledApplication_GetStatus_Native, addr 0x2ad6e74, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_InstalledApplication_GetStatus_Native(::System::IntPtr obj);

  /// @brief Method ovr_InstalledApplication_GetVersionCode, addr 0x2ad6ef0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_InstalledApplication_GetVersionCode(::System::IntPtr obj);

  /// @brief Method ovr_InstalledApplication_GetVersionName, addr 0x2ad6f6c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetVersionName(::System::IntPtr obj);

  /// @brief Method ovr_InstalledApplication_GetVersionName_Native, addr 0x2ad6fc4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_InstalledApplication_GetVersionName_Native(::System::IntPtr obj);

  /// @brief Method ovr_InviteOptions_AddSuggestedUser, addr 0x2ae17d8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_InviteOptions_AddSuggestedUser(::System::IntPtr handle, uint64_t value);

  /// @brief Method ovr_InviteOptions_ClearSuggestedUsers, addr 0x2ae185c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_InviteOptions_ClearSuggestedUsers(::System::IntPtr handle);

  /// @brief Method ovr_InviteOptions_Create, addr 0x2ae16f4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_InviteOptions_Create();

  /// @brief Method ovr_InviteOptions_Destroy, addr 0x2ae175c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_InviteOptions_Destroy(::System::IntPtr handle);

  /// @brief Method ovr_InvitePanelResultInfo_GetInvitesSent, addr 0x2ad7140, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_InvitePanelResultInfo_GetInvitesSent(::System::IntPtr obj);

  /// @brief Method ovr_LanguagePackInfo_GetEnglishName, addr 0x2ad71c4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LanguagePackInfo_GetEnglishName(::System::IntPtr obj);

  /// @brief Method ovr_LanguagePackInfo_GetEnglishName_Native, addr 0x2ad721c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LanguagePackInfo_GetEnglishName_Native(::System::IntPtr obj);

  /// @brief Method ovr_LanguagePackInfo_GetNativeName, addr 0x2ad7298, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LanguagePackInfo_GetNativeName(::System::IntPtr obj);

  /// @brief Method ovr_LanguagePackInfo_GetNativeName_Native, addr 0x2ad72f0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LanguagePackInfo_GetNativeName_Native(::System::IntPtr obj);

  /// @brief Method ovr_LanguagePackInfo_GetTag, addr 0x2ad736c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LanguagePackInfo_GetTag(::System::IntPtr obj);

  /// @brief Method ovr_LanguagePackInfo_GetTag_Native, addr 0x2ad73c4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LanguagePackInfo_GetTag_Native(::System::IntPtr obj);

  /// @brief Method ovr_LanguagePack_GetCurrent, addr 0x2acde94, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_LanguagePack_GetCurrent();

  /// @brief Method ovr_LanguagePack_SetCurrent, addr 0x2acdefc, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LanguagePack_SetCurrent(::StringW tag);

  /// @brief Method ovr_LanguagePack_SetCurrent_Native, addr 0x2acdf98, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LanguagePack_SetCurrent_Native(::System::IntPtr tag);

  /// @brief Method ovr_LaunchBlockFlowResult_GetDidBlock, addr 0x2ad7440, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchBlockFlowResult_GetDidBlock(::System::IntPtr obj);

  /// @brief Method ovr_LaunchBlockFlowResult_GetDidCancel, addr 0x2ad74c4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchBlockFlowResult_GetDidCancel(::System::IntPtr obj);

  /// @brief Method ovr_LaunchDetails_GetDeeplinkMessage, addr 0x2ad7548, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetDeeplinkMessage(::System::IntPtr obj);

  /// @brief Method ovr_LaunchDetails_GetDeeplinkMessage_Native, addr 0x2ad75a0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LaunchDetails_GetDeeplinkMessage_Native(::System::IntPtr obj);

  /// @brief Method ovr_LaunchDetails_GetDestinationApiName, addr 0x2ad761c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetDestinationApiName(::System::IntPtr obj);

  /// @brief Method ovr_LaunchDetails_GetDestinationApiName_Native, addr 0x2ad7674, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LaunchDetails_GetDestinationApiName_Native(::System::IntPtr obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchSource, addr 0x2ad76f0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetLaunchSource(::System::IntPtr obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchSource_Native, addr 0x2ad7748, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LaunchDetails_GetLaunchSource_Native(::System::IntPtr obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchType, addr 0x2ad77c4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::LaunchType ovr_LaunchDetails_GetLaunchType(::System::IntPtr obj);

  /// @brief Method ovr_LaunchDetails_GetTrackingID, addr 0x2ad7840, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetTrackingID(::System::IntPtr obj);

  /// @brief Method ovr_LaunchDetails_GetTrackingID_Native, addr 0x2ad7898, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LaunchDetails_GetTrackingID_Native(::System::IntPtr obj);

  /// @brief Method ovr_LaunchDetails_GetUsers, addr 0x2ad7914, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LaunchDetails_GetUsers(::System::IntPtr obj);

  /// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidCancel, addr 0x2ad7990, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchFriendRequestFlowResult_GetDidCancel(::System::IntPtr obj);

  /// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidSendRequest, addr 0x2ad7a14, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchFriendRequestFlowResult_GetDidSendRequest(::System::IntPtr obj);

  /// @brief Method ovr_LaunchInvitePanelFlowResult_GetInvitedUsers, addr 0x2ad7a98, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LaunchInvitePanelFlowResult_GetInvitedUsers(::System::IntPtr obj);

  /// @brief Method ovr_LaunchReportFlowResult_GetDidCancel, addr 0x2ad7b14, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchReportFlowResult_GetDidCancel(::System::IntPtr obj);

  /// @brief Method ovr_LaunchReportFlowResult_GetUserReportId, addr 0x2ad7b98, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LaunchReportFlowResult_GetUserReportId(::System::IntPtr obj);

  /// @brief Method ovr_LaunchUnblockFlowResult_GetDidCancel, addr 0x2ad7c14, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchUnblockFlowResult_GetDidCancel(::System::IntPtr obj);

  /// @brief Method ovr_LaunchUnblockFlowResult_GetDidUnblock, addr 0x2ad7c98, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchUnblockFlowResult_GetDidUnblock(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardArray_GetElement, addr 0x2ad7ee8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LeaderboardArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_LeaderboardArray_GetNextUrl, addr 0x2ad7f6c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardArray_GetNextUrl(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardArray_GetNextUrl_Native, addr 0x2ad7fc4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LeaderboardArray_GetNextUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardArray_GetSize, addr 0x2ad8040, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_LeaderboardArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardArray_HasNextPage, addr 0x2ad80bc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardArray_HasNextPage(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetElement, addr 0x2ad863c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LeaderboardEntryArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_LeaderboardEntryArray_GetNextUrl, addr 0x2ad86c0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardEntryArray_GetNextUrl(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetNextUrl_Native, addr 0x2ad8718, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LeaderboardEntryArray_GetNextUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl, addr 0x2ad8794, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardEntryArray_GetPreviousUrl(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl_Native, addr 0x2ad87ec, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LeaderboardEntryArray_GetPreviousUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetSize, addr 0x2ad8868, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_LeaderboardEntryArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetTotalCount, addr 0x2ad88e4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardEntryArray_GetTotalCount(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntryArray_HasNextPage, addr 0x2ad8960, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardEntryArray_HasNextPage(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntryArray_HasPreviousPage, addr 0x2ad89e4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardEntryArray_HasPreviousPage(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntry_GetDisplayScore, addr 0x2ad8140, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardEntry_GetDisplayScore(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntry_GetDisplayScore_Native, addr 0x2ad8198, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LeaderboardEntry_GetDisplayScore_Native(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraData, addr 0x2ad8214, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ovr_LeaderboardEntry_GetExtraData(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraDataLength, addr 0x2ad52a0, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_LeaderboardEntry_GetExtraDataLength(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraData_Native, addr 0x2ad8280, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LeaderboardEntry_GetExtraData_Native(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntry_GetID, addr 0x2ad82fc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardEntry_GetID(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntry_GetRank, addr 0x2ad8378, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LeaderboardEntry_GetRank(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntry_GetScore, addr 0x2ad83f4, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_LeaderboardEntry_GetScore(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntry_GetSupplementaryMetric, addr 0x2ad8470, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LeaderboardEntry_GetSupplementaryMetric(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntry_GetTimestamp, addr 0x2ad84ec, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_LeaderboardEntry_GetTimestamp(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntry_GetTimestamp_Native, addr 0x2ad8544, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardEntry_GetTimestamp_Native(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardEntry_GetUser, addr 0x2ad85c0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LeaderboardEntry_GetUser(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetDidUpdate, addr 0x2ad8a68, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardUpdateStatus_GetDidUpdate(::System::IntPtr obj);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId, addr 0x2ad8aec, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId(::System::IntPtr obj, uint32_t index);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize, addr 0x2ad8b70, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize(::System::IntPtr obj);

  /// @brief Method ovr_Leaderboard_Get, addr 0x2ace014, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_Get(::StringW leaderboardName);

  /// @brief Method ovr_Leaderboard_GetApiName, addr 0x2ad7d1c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Leaderboard_GetApiName(::System::IntPtr obj);

  /// @brief Method ovr_Leaderboard_GetApiName_Native, addr 0x2ad7d74, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Leaderboard_GetApiName_Native(::System::IntPtr obj);

  /// @brief Method ovr_Leaderboard_GetDestination, addr 0x2ad7df0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Leaderboard_GetDestination(::System::IntPtr obj);

  /// @brief Method ovr_Leaderboard_GetEntries, addr 0x2ace12c, size 0xc4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntries(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Leaderboard_GetEntriesAfterRank, addr 0x2ace28c, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank(::StringW leaderboardName, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Leaderboard_GetEntriesAfterRank_Native, addr 0x2ace340, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank_Native(::System::IntPtr leaderboardName, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Leaderboard_GetEntriesByIds, addr 0x2ace3d4, size 0xcc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesByIds(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                         uint32_t userIDLength);

  /// @brief Method ovr_Leaderboard_GetEntriesByIds_Native, addr 0x2ace4a0, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesByIds_Native(::System::IntPtr leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt,
                                                                ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs, uint32_t userIDLength);

  /// @brief Method ovr_Leaderboard_GetEntries_Native, addr 0x2ace1f0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntries_Native(::System::IntPtr leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter,
                                                           ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Leaderboard_GetID, addr 0x2ad7e6c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetID(::System::IntPtr obj);

  /// @brief Method ovr_Leaderboard_GetNextEntries, addr 0x2ace554, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetNextEntries(::System::IntPtr handle);

  /// @brief Method ovr_Leaderboard_GetPreviousEntries, addr 0x2ace5d0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetPreviousEntries(::System::IntPtr handle);

  /// @brief Method ovr_Leaderboard_Get_Native, addr 0x2ace0b0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_Get_Native(::System::IntPtr leaderboardName);

  /// @brief Method ovr_Leaderboard_WriteEntry, addr 0x2ace64c, size 0xcc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntry(::StringW leaderboardName, int64_t score, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData, uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric, addr 0x2ace7cc, size 0xdc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric(::StringW leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData,
                                                                           uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native, addr 0x2ace8a8, size 0xbc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native(::System::IntPtr leaderboardName, int64_t score, int64_t supplementaryMetric,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData, uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntry_Native, addr 0x2ace718, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntry_Native(::System::IntPtr leaderboardName, int64_t score, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData, uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_LinkedAccountArray_GetElement, addr 0x2ad8e10, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LinkedAccountArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_LinkedAccountArray_GetSize, addr 0x2ad8e94, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_LinkedAccountArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_LinkedAccount_GetAccessToken, addr 0x2ad8bec, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LinkedAccount_GetAccessToken(::System::IntPtr obj);

  /// @brief Method ovr_LinkedAccount_GetAccessToken_Native, addr 0x2ad8c44, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LinkedAccount_GetAccessToken_Native(::System::IntPtr obj);

  /// @brief Method ovr_LinkedAccount_GetServiceProvider, addr 0x2ad8cc0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ServiceProvider ovr_LinkedAccount_GetServiceProvider(::System::IntPtr obj);

  /// @brief Method ovr_LinkedAccount_GetUserId, addr 0x2ad8d3c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LinkedAccount_GetUserId(::System::IntPtr obj);

  /// @brief Method ovr_LinkedAccount_GetUserId_Native, addr 0x2ad8d94, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LinkedAccount_GetUserId_Native(::System::IntPtr obj);

  /// @brief Method ovr_LivestreamingApplicationStatus_GetStreamingEnabled, addr 0x2ad8f10, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingApplicationStatus_GetStreamingEnabled(::System::IntPtr obj);

  /// @brief Method ovr_LivestreamingStartResult_GetStreamingResult, addr 0x2ad8f94, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::LivestreamingStartStatus ovr_LivestreamingStartResult_GetStreamingResult(::System::IntPtr obj);

  /// @brief Method ovr_LivestreamingStatus_GetCommentsVisible, addr 0x2ad9010, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetCommentsVisible(::System::IntPtr obj);

  /// @brief Method ovr_LivestreamingStatus_GetIsPaused, addr 0x2ad9094, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetIsPaused(::System::IntPtr obj);

  /// @brief Method ovr_LivestreamingStatus_GetLivestreamingEnabled, addr 0x2ad9118, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetLivestreamingEnabled(::System::IntPtr obj);

  /// @brief Method ovr_LivestreamingStatus_GetLivestreamingType, addr 0x2ad919c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LivestreamingStatus_GetLivestreamingType(::System::IntPtr obj);

  /// @brief Method ovr_LivestreamingStatus_GetMicEnabled, addr 0x2ad9218, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetMicEnabled(::System::IntPtr obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetCommentCount, addr 0x2ad929c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LivestreamingVideoStats_GetCommentCount(::System::IntPtr obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetReactionCount, addr 0x2ad9318, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LivestreamingVideoStats_GetReactionCount(::System::IntPtr obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetTotalViews, addr 0x2ad9394, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LivestreamingVideoStats_GetTotalViews(::System::IntPtr obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetTotalViews_Native, addr 0x2ad93ec, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_LivestreamingVideoStats_GetTotalViews_Native(::System::IntPtr obj);

  /// @brief Method ovr_Livestreaming_IsAllowedForApplication, addr 0x2ace964, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_IsAllowedForApplication(::StringW packageName);

  /// @brief Method ovr_Livestreaming_IsAllowedForApplication_Native, addr 0x2acea00, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_IsAllowedForApplication_Native(::System::IntPtr packageName);

  /// @brief Method ovr_Livestreaming_StartPartyStream, addr 0x2acea7c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StartPartyStream();

  /// @brief Method ovr_Livestreaming_StartStream, addr 0x2aceae4, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StartStream(::Oculus::Platform::LivestreamingAudience audience, ::Oculus::Platform::LivestreamingMicrophoneStatus micStatus);

  /// @brief Method ovr_Livestreaming_StopPartyStream, addr 0x2aceb68, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StopPartyStream();

  /// @brief Method ovr_Livestreaming_StopStream, addr 0x2acebd0, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StopStream();

  /// @brief Method ovr_Livestreaming_UpdateMicStatus, addr 0x2acec38, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_UpdateMicStatus(::Oculus::Platform::LivestreamingMicrophoneStatus micStatus);

  /// @brief Method ovr_Log_NewEvent, addr 0x2ac8a94, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_Log_NewEvent(::System::IntPtr eventName, ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> values, ::System::UIntPtr length);

  /// @brief Method ovr_Media_ShareToFacebook, addr 0x2acecb4, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_Media_ShareToFacebook(::StringW postTextSuggestion, ::StringW filePath, ::Oculus::Platform::MediaContentType contentType);

  /// @brief Method ovr_Media_ShareToFacebook_Native, addr 0x2aced84, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Media_ShareToFacebook_Native(::System::IntPtr postTextSuggestion, ::System::IntPtr filePath, ::Oculus::Platform::MediaContentType contentType);

  /// @brief Method ovr_Message_GetAbuseReportRecording, addr 0x2ad9468, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetAbuseReportRecording(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetAchievementDefinitionArray, addr 0x2ad94e4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetAchievementDefinitionArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetAchievementProgressArray, addr 0x2ad9560, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetAchievementProgressArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetAchievementUpdate, addr 0x2ad95dc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetAchievementUpdate(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetAppDownloadProgressResult, addr 0x2ad9658, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetAppDownloadProgressResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetAppDownloadResult, addr 0x2ad96d4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetAppDownloadResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetApplicationInviteArray, addr 0x2ad9750, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetApplicationInviteArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetApplicationVersion, addr 0x2ad97cc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetApplicationVersion(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetAssetDetails, addr 0x2ad9848, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetAssetDetails(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetAssetDetailsArray, addr 0x2ad98c4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetAssetDetailsArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetAssetFileDeleteResult, addr 0x2ad9940, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetAssetFileDeleteResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadCancelResult, addr 0x2ad99bc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetAssetFileDownloadCancelResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadResult, addr 0x2ad9a38, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetAssetFileDownloadResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadUpdate, addr 0x2ad9ab4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetAssetFileDownloadUpdate(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetAvatarEditorResult, addr 0x2ad9b30, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetAvatarEditorResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetBlockedUserArray, addr 0x2ad9bac, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetBlockedUserArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetChallenge, addr 0x2ad9c28, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetChallenge(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetChallengeArray, addr 0x2ad9ca4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetChallengeArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetChallengeEntryArray, addr 0x2ad9d20, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetChallengeEntryArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetDataStore, addr 0x2ad9d9c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetDataStore(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetDestinationArray, addr 0x2ad9e18, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetDestinationArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetError, addr 0x2ad9e94, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetError(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetGroupPresenceJoinIntent, addr 0x2ad9f10, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetGroupPresenceJoinIntent(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetGroupPresenceLeaveIntent, addr 0x2ad9f8c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetGroupPresenceLeaveIntent(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetHttpTransferUpdate, addr 0x2ada008, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetHttpTransferUpdate(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetInstalledApplicationArray, addr 0x2ada084, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetInstalledApplicationArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetInvitePanelResultInfo, addr 0x2ada100, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetInvitePanelResultInfo(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetLaunchBlockFlowResult, addr 0x2ada17c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetLaunchBlockFlowResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetLaunchFriendRequestFlowResult, addr 0x2ada1f8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetLaunchFriendRequestFlowResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetLaunchInvitePanelFlowResult, addr 0x2ada274, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetLaunchInvitePanelFlowResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetLaunchReportFlowResult, addr 0x2ada2f0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetLaunchReportFlowResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetLaunchUnblockFlowResult, addr 0x2ada36c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetLaunchUnblockFlowResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetLeaderboardArray, addr 0x2ada3e8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetLeaderboardArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetLeaderboardEntryArray, addr 0x2ada464, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetLeaderboardEntryArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetLeaderboardUpdateStatus, addr 0x2ada4e0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetLeaderboardUpdateStatus(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetLinkedAccountArray, addr 0x2ada55c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetLinkedAccountArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetLivestreamingApplicationStatus, addr 0x2ada5d8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetLivestreamingApplicationStatus(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetLivestreamingStartResult, addr 0x2ada654, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetLivestreamingStartResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetLivestreamingStatus, addr 0x2ada6d0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetLivestreamingStatus(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetLivestreamingVideoStats, addr 0x2ada74c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetLivestreamingVideoStats(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetMicrophoneAvailabilityState, addr 0x2ada7c8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetMicrophoneAvailabilityState(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetNativeMessage, addr 0x2ada844, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetNativeMessage(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetNetSyncConnection, addr 0x2ada8c0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetNetSyncConnection(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetNetSyncSessionArray, addr 0x2ada93c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetNetSyncSessionArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetNetSyncSessionsChangedNotification, addr 0x2ada9b8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetNetSyncSessionsChangedNotification(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetNetSyncSetSessionPropertyResult, addr 0x2adaa34, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetNetSyncSetSessionPropertyResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetNetSyncVoipAttenuationValueArray, addr 0x2adaab0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetNetSyncVoipAttenuationValueArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetOrgScopedID, addr 0x2adab2c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetOrgScopedID(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetParty, addr 0x2adaba8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetParty(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetPartyID, addr 0x2adac24, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetPartyID(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetPartyUpdateNotification, addr 0x2adaca0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetPartyUpdateNotification(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetPidArray, addr 0x2adad1c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetPidArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetPlatformInitialize, addr 0x2adad98, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetPlatformInitialize(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetProductArray, addr 0x2adae14, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetProductArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetPurchase, addr 0x2adae90, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetPurchase(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetPurchaseArray, addr 0x2adaf0c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetPurchaseArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetRejoinDialogResult, addr 0x2adaf88, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetRejoinDialogResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetRequestID, addr 0x2adb004, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Message_GetRequestID(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetSdkAccountArray, addr 0x2adb080, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetSdkAccountArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetSendInvitesResult, addr 0x2adb0fc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetSendInvitesResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetShareMediaResult, addr 0x2adb178, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetShareMediaResult(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetString, addr 0x2adb1f4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Message_GetString(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetStringForJavascript, addr 0x2ac9064, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Message_GetStringForJavascript(::System::IntPtr message);

  /// @brief Method ovr_Message_GetStringForJavascript_Native, addr 0x2ac90bc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetStringForJavascript_Native(::System::IntPtr message);

  /// @brief Method ovr_Message_GetString_Native, addr 0x2adb24c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetString_Native(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetSystemVoipState, addr 0x2adb2c8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetSystemVoipState(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetType, addr 0x2adb344, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::__Message__MessageType ovr_Message_GetType(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetUser, addr 0x2adb3c0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetUser(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetUserAccountAgeCategory, addr 0x2adb43c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetUserAccountAgeCategory(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetUserArray, addr 0x2adb4b8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetUserArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetUserCapabilityArray, addr 0x2adb534, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetUserCapabilityArray(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetUserDataStoreUpdateResponse, addr 0x2adb5b0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetUserDataStoreUpdateResponse(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetUserProof, addr 0x2adb62c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetUserProof(::System::IntPtr obj);

  /// @brief Method ovr_Message_GetUserReportID, addr 0x2adb6a8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Message_GetUserReportID(::System::IntPtr obj);

  /// @brief Method ovr_Message_IsError, addr 0x2adb724, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_Message_IsError(::System::IntPtr obj);

  /// @brief Method ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable, addr 0x2adbbf0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(::System::IntPtr obj);

  /// @brief Method ovr_Microphone_Create, addr 0x2ac8250, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Microphone_Create();

  /// @brief Method ovr_Microphone_Destroy, addr 0x2ac82b8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Microphone_Destroy(::System::IntPtr obj);

  /// @brief Method ovr_Microphone_GetNumSamplesAvailable, addr 0x2adb7a8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_Microphone_GetNumSamplesAvailable(::System::IntPtr obj);

  /// @brief Method ovr_Microphone_GetOutputBufferMaxSize, addr 0x2adb824, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_Microphone_GetOutputBufferMaxSize(::System::IntPtr obj);

  /// @brief Method ovr_Microphone_GetPCM, addr 0x2adb8a0, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_Microphone_GetPCM(::System::IntPtr obj, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, ::System::UIntPtr outputBufferNumElements);

  /// @brief Method ovr_Microphone_GetPCMFloat, addr 0x2adb93c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_Microphone_GetPCMFloat(::System::IntPtr obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, ::System::UIntPtr outputBufferNumElements);

  /// @brief Method ovr_Microphone_ReadData, addr 0x2adb9d8, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_Microphone_ReadData(::System::IntPtr obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, ::System::UIntPtr outputBufferSize);

  /// @brief Method ovr_Microphone_SetAcceptableRecordingDelayHint, addr 0x2adba74, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_Microphone_SetAcceptableRecordingDelayHint(::System::IntPtr obj, ::System::UIntPtr delayMs);

  /// @brief Method ovr_Microphone_Start, addr 0x2adbaf8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Microphone_Start(::System::IntPtr obj);

  /// @brief Method ovr_Microphone_Stop, addr 0x2adbb74, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Microphone_Stop(::System::IntPtr obj);

  /// @brief Method ovr_MultiplayerErrorOptions_Create, addr 0x2ae18d8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_MultiplayerErrorOptions_Create();

  /// @brief Method ovr_MultiplayerErrorOptions_Destroy, addr 0x2ae1940, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_MultiplayerErrorOptions_Destroy(::System::IntPtr handle);

  /// @brief Method ovr_MultiplayerErrorOptions_SetErrorKey, addr 0x2ae19bc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_MultiplayerErrorOptions_SetErrorKey(::System::IntPtr handle, ::Oculus::Platform::MultiplayerErrorErrorKey value);

  /// @brief Method ovr_NetSyncConnection_GetConnectionId, addr 0x2adbc74, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_NetSyncConnection_GetConnectionId(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncConnection_GetDisconnectReason, addr 0x2adbcf0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::NetSyncDisconnectReason ovr_NetSyncConnection_GetDisconnectReason(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncConnection_GetSessionId, addr 0x2adbd6c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSyncConnection_GetSessionId(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncConnection_GetStatus, addr 0x2adbde8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::NetSyncConnectionStatus ovr_NetSyncConnection_GetStatus(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncConnection_GetZoneId, addr 0x2adbe64, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_NetSyncConnection_GetZoneId(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncConnection_GetZoneId_Native, addr 0x2adbebc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_NetSyncConnection_GetZoneId_Native(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncOptions_Create, addr 0x2ae1a40, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_NetSyncOptions_Create();

  /// @brief Method ovr_NetSyncOptions_Destroy, addr 0x2ae1aa8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_Destroy(::System::IntPtr handle);

  /// @brief Method ovr_NetSyncOptions_SetVoipGroup, addr 0x2ae1b24, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetVoipGroup(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_NetSyncOptions_SetVoipGroup_Native, addr 0x2ae1bc4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetVoipGroup_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_NetSyncOptions_SetVoipStreamDefault, addr 0x2ae1c48, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetVoipStreamDefault(::System::IntPtr handle, ::Oculus::Platform::NetSyncVoipStreamMode value);

  /// @brief Method ovr_NetSyncOptions_SetZoneId, addr 0x2ae1ccc, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetZoneId(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_NetSyncOptions_SetZoneId_Native, addr 0x2ae1d6c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetZoneId_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_NetSyncSessionArray_GetElement, addr 0x2adc204, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_NetSyncSessionArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_NetSyncSessionArray_GetSize, addr 0x2adc288, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_NetSyncSessionArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncSession_GetConnectionId, addr 0x2adbf38, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_NetSyncSession_GetConnectionId(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncSession_GetMuted, addr 0x2adbfb4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_NetSyncSession_GetMuted(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncSession_GetSessionId, addr 0x2adc038, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSyncSession_GetSessionId(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncSession_GetUserId, addr 0x2adc0b4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSyncSession_GetUserId(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncSession_GetVoipGroup, addr 0x2adc130, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_NetSyncSession_GetVoipGroup(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncSession_GetVoipGroup_Native, addr 0x2adc188, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_NetSyncSession_GetVoipGroup_Native(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncSessionsChangedNotification_GetConnectionId, addr 0x2adc304, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_NetSyncSessionsChangedNotification_GetConnectionId(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncSessionsChangedNotification_GetSessions, addr 0x2adc380, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_NetSyncSessionsChangedNotification_GetSessions(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncSetSessionPropertyResult_GetSession, addr 0x2adc3fc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_NetSyncSetSessionPropertyResult_GetSession(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetElement, addr 0x2adc570, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_NetSyncVoipAttenuationValueArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetSize, addr 0x2adc5f4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_NetSyncVoipAttenuationValueArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValue_GetDecibels, addr 0x2adc478, size 0x7c, virtual false, abstract: false, final false
  static inline float_t ovr_NetSyncVoipAttenuationValue_GetDecibels(::System::IntPtr obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValue_GetDistance, addr 0x2adc4f4, size 0x7c, virtual false, abstract: false, final false
  static inline float_t ovr_NetSyncVoipAttenuationValue_GetDistance(::System::IntPtr obj);

  /// @brief Method ovr_NetSync_Connect, addr 0x2acee18, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_Connect(::System::IntPtr connect_options);

  /// @brief Method ovr_NetSync_Disconnect, addr 0x2acee94, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_Disconnect(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetAmbisonicFloatPCM, addr 0x2ac9138, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicFloatPCM(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, ::System::UIntPtr outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInt16PCM, addr 0x2ac91d4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicInt16PCM(int64_t connection_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, ::System::UIntPtr outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInterleavedFloatPCM, addr 0x2ac9270, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicInterleavedFloatPCM(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, ::System::UIntPtr outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInterleavedInt16PCM, addr 0x2ac930c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_NetSync_GetAmbisonicInterleavedInt16PCM(int64_t connection_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, ::System::UIntPtr outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetListenerPosition, addr 0x2ac93a8, size 0x9c, virtual false, abstract: false, final false
  static inline bool ovr_NetSync_GetListenerPosition(int64_t connection_id, uint64_t sessionId, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3> position);

  /// @brief Method ovr_NetSync_GetMonostreamFloatPCM, addr 0x2ac9444, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_NetSync_GetMonostreamFloatPCM(int64_t connection_id, uint64_t sessionId, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer,
                                                                    ::System::UIntPtr outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetMonostreamInt16PCM, addr 0x2ac94e8, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_NetSync_GetMonostreamInt16PCM(int64_t connection_id, uint64_t session_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer,
                                                                    ::System::UIntPtr outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetPcmBufferMaxSamples, addr 0x2ac958c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_NetSync_GetPcmBufferMaxSamples();

  /// @brief Method ovr_NetSync_GetSessions, addr 0x2acef10, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_GetSessions(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetVoipAmplitude, addr 0x2ac95f4, size 0x9c, virtual false, abstract: false, final false
  static inline bool ovr_NetSync_GetVoipAmplitude(int64_t connection_id, uint64_t sessionId, ByRef<float_t> amplitude);

  /// @brief Method ovr_NetSync_GetVoipAttenuation, addr 0x2acef8c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_GetVoipAttenuation(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetVoipAttenuationDefault, addr 0x2acf008, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_GetVoipAttenuationDefault();

  /// @brief Method ovr_NetSync_SetListenerPosition, addr 0x2ac9690, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSync_SetListenerPosition(int64_t connection_id, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3> position);

  /// @brief Method ovr_NetSync_SetVoipAttenuation, addr 0x2acf070, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuation(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels, ::System::UIntPtr count);

  /// @brief Method ovr_NetSync_SetVoipAttenuationModel, addr 0x2acf11c, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuationModel(int64_t connection_id, ::StringW name, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels,
                                                             ::System::UIntPtr count);

  /// @brief Method ovr_NetSync_SetVoipAttenuationModel_Native, addr 0x2acf1ec, size 0xbc, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuationModel_Native(int64_t connection_id, ::System::IntPtr name, ::ArrayW<float_t, ::Array<float_t>*> distances,
                                                                    ::ArrayW<float_t, ::Array<float_t>*> decibels, ::System::UIntPtr count);

  /// @brief Method ovr_NetSync_SetVoipChannelCfg, addr 0x2acf2a8, size 0xe0, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipChannelCfg(int64_t connection_id, ::StringW channel_name, ::StringW attnmodel, bool disable_spatialization);

  /// @brief Method ovr_NetSync_SetVoipChannelCfg_Native, addr 0x2acf388, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipChannelCfg_Native(int64_t connection_id, ::System::IntPtr channel_name, ::System::IntPtr attnmodel, bool disable_spatialization);

  /// @brief Method ovr_NetSync_SetVoipGroup, addr 0x2acf424, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipGroup(int64_t connection_id, ::StringW group_id);

  /// @brief Method ovr_NetSync_SetVoipGroup_Native, addr 0x2acf4d4, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipGroup_Native(int64_t connection_id, ::System::IntPtr group_id);

  /// @brief Method ovr_NetSync_SetVoipListentoChannels, addr 0x2acf558, size 0x160, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipListentoChannels(int64_t connection_id, ::ArrayW<::StringW, ::Array<::StringW>*> listento_channels, ::System::UIntPtr count);

  /// @brief Method ovr_NetSync_SetVoipMicSource, addr 0x2acf6b8, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipMicSource(int64_t connection_id, ::Oculus::Platform::NetSyncVoipMicSource mic_source);

  /// @brief Method ovr_NetSync_SetVoipSessionMuted, addr 0x2acf73c, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipSessionMuted(int64_t connection_id, uint64_t session_id, bool muted);

  /// @brief Method ovr_NetSync_SetVoipSpeaktoChannels, addr 0x2acf7d0, size 0x160, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipSpeaktoChannels(int64_t connection_id, ::ArrayW<::StringW, ::Array<::StringW>*> speakto_channels, ::System::UIntPtr count);

  /// @brief Method ovr_NetSync_SetVoipStreamMode, addr 0x2acf930, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipStreamMode(int64_t connection_id, uint64_t sessionId, ::Oculus::Platform::NetSyncVoipStreamMode streamMode);

  /// @brief Method ovr_Notification_MarkAsRead, addr 0x2acf9c4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Notification_MarkAsRead(uint64_t notificationID);

  /// @brief Method ovr_OrgScopedID_GetID, addr 0x2adc670, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_OrgScopedID_GetID(::System::IntPtr obj);

  /// @brief Method ovr_Packet_Free, addr 0x2adc6ec, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Packet_Free(::System::IntPtr obj);

  /// @brief Method ovr_Packet_GetBytes, addr 0x2adc768, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Packet_GetBytes(::System::IntPtr obj);

  /// @brief Method ovr_Packet_GetSenderID, addr 0x2adc7e4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Packet_GetSenderID(::System::IntPtr obj);

  /// @brief Method ovr_Packet_GetSize, addr 0x2adc860, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_Packet_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_PartyID_GetID, addr 0x2adcacc, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyID_GetID(::System::IntPtr obj);

  /// @brief Method ovr_PartyUpdateNotification_GetAction, addr 0x2adcb44, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::PartyUpdateAction ovr_PartyUpdateNotification_GetAction(::System::IntPtr obj);

  /// @brief Method ovr_PartyUpdateNotification_GetPartyId, addr 0x2adcbc0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyUpdateNotification_GetPartyId(::System::IntPtr obj);

  /// @brief Method ovr_PartyUpdateNotification_GetSenderId, addr 0x2adcc3c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyUpdateNotification_GetSenderId(::System::IntPtr obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp, addr 0x2adccb8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUpdateTimestamp(::System::IntPtr obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp_Native, addr 0x2adcd10, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_PartyUpdateNotification_GetUpdateTimestamp_Native(::System::IntPtr obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserAlias, addr 0x2adcd8c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUserAlias(::System::IntPtr obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserAlias_Native, addr 0x2adcde4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_PartyUpdateNotification_GetUserAlias_Native(::System::IntPtr obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserId, addr 0x2adce60, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyUpdateNotification_GetUserId(::System::IntPtr obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserName, addr 0x2adcedc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUserName(::System::IntPtr obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserName_Native, addr 0x2adcf34, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_PartyUpdateNotification_GetUserName_Native(::System::IntPtr obj);

  /// @brief Method ovr_Party_Create, addr 0x2acfa40, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Create();

  /// @brief Method ovr_Party_GatherInApplication, addr 0x2acfaa8, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GatherInApplication(uint64_t partyID, uint64_t appID);

  /// @brief Method ovr_Party_Get, addr 0x2acfb2c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Get(uint64_t partyID);

  /// @brief Method ovr_Party_GetCurrent, addr 0x2acfba8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GetCurrent();

  /// @brief Method ovr_Party_GetCurrentForUser, addr 0x2acfc10, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GetCurrentForUser(uint64_t userID);

  /// @brief Method ovr_Party_GetID, addr 0x2adc8dc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GetID(::System::IntPtr obj);

  /// @brief Method ovr_Party_GetInvitedUsers, addr 0x2adc958, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Party_GetInvitedUsers(::System::IntPtr obj);

  /// @brief Method ovr_Party_GetLeader, addr 0x2adc9d4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Party_GetLeader(::System::IntPtr obj);

  /// @brief Method ovr_Party_GetUsers, addr 0x2adca50, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Party_GetUsers(::System::IntPtr obj);

  /// @brief Method ovr_Party_Invite, addr 0x2acfc8c, size 0x80, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Invite(uint64_t partyID, uint64_t userID);

  /// @brief Method ovr_Party_Join, addr 0x2acfd0c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Join(uint64_t partyID);

  /// @brief Method ovr_Party_Leave, addr 0x2acfd88, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Leave(uint64_t partyID);

  /// @brief Method ovr_Party_PluginGetSharedMemHandle, addr 0x2ac9714, size 0x68, virtual false, abstract: false, final false
  static inline int32_t ovr_Party_PluginGetSharedMemHandle();

  /// @brief Method ovr_Party_PluginGetVoipMicrophoneMuted, addr 0x2ac977c, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState ovr_Party_PluginGetVoipMicrophoneMuted();

  /// @brief Method ovr_Party_PluginGetVoipPassthrough, addr 0x2ac97e4, size 0x70, virtual false, abstract: false, final false
  static inline bool ovr_Party_PluginGetVoipPassthrough();

  /// @brief Method ovr_Party_PluginGetVoipStatus, addr 0x2ac9854, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_Party_PluginGetVoipStatus();

  /// @brief Method ovr_PidArray_GetElement, addr 0x2add084, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_PidArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_PidArray_GetSize, addr 0x2add108, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_PidArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_Pid_GetId, addr 0x2adcfb0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Pid_GetId(::System::IntPtr obj);

  /// @brief Method ovr_Pid_GetId_Native, addr 0x2add008, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Pid_GetId_Native(::System::IntPtr obj);

  /// @brief Method ovr_PlatformInitializeWithAccessToken, addr 0x2ac7a34, size 0xa0, virtual false, abstract: false, final false
  static inline uint64_t ovr_PlatformInitializeWithAccessToken(uint64_t appId, ::StringW accessToken);

  /// @brief Method ovr_PlatformInitializeWithAccessTokenAndOptions, addr 0x2ac7ad4, size 0x1a8, virtual false, abstract: false, final false
  static inline uint64_t ovr_PlatformInitializeWithAccessTokenAndOptions(uint64_t appId, ::StringW accessToken,
                                                                         ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> configOptions,
                                                                         ::System::UIntPtr numOptions);

  /// @brief Method ovr_PlatformInitialize_GetResult, addr 0x2add184, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::PlatformInitializeResult ovr_PlatformInitialize_GetResult(::System::IntPtr obj);

  /// @brief Method ovr_Platform_InitializeStandaloneOculus, addr 0x2ac7950, size 0xe4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Platform_InitializeStandaloneOculus(ByRef<::Oculus::Platform::__CAPI__OculusInitParams> init);

  /// @brief Method ovr_PopMessage, addr 0x2ac7f08, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_PopMessage();

  /// @brief Method ovr_Price_GetAmountInHundredths, addr 0x2add200, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_Price_GetAmountInHundredths(::System::IntPtr obj);

  /// @brief Method ovr_Price_GetCurrency, addr 0x2add27c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Price_GetCurrency(::System::IntPtr obj);

  /// @brief Method ovr_Price_GetCurrency_Native, addr 0x2add2d4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Price_GetCurrency_Native(::System::IntPtr obj);

  /// @brief Method ovr_Price_GetFormatted, addr 0x2add350, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Price_GetFormatted(::System::IntPtr obj);

  /// @brief Method ovr_Price_GetFormatted_Native, addr 0x2add3a8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Price_GetFormatted_Native(::System::IntPtr obj);

  /// @brief Method ovr_ProductArray_GetElement, addr 0x2add774, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ProductArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_ProductArray_GetNextUrl, addr 0x2add7f8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ProductArray_GetNextUrl(::System::IntPtr obj);

  /// @brief Method ovr_ProductArray_GetNextUrl_Native, addr 0x2add850, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_ProductArray_GetNextUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_ProductArray_GetSize, addr 0x2add8cc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_ProductArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_ProductArray_HasNextPage, addr 0x2add948, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ProductArray_HasNextPage(::System::IntPtr obj);

  /// @brief Method ovr_Product_GetDescription, addr 0x2add424, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetDescription(::System::IntPtr obj);

  /// @brief Method ovr_Product_GetDescription_Native, addr 0x2add47c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Product_GetDescription_Native(::System::IntPtr obj);

  /// @brief Method ovr_Product_GetFormattedPrice, addr 0x2add4f8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetFormattedPrice(::System::IntPtr obj);

  /// @brief Method ovr_Product_GetFormattedPrice_Native, addr 0x2add550, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Product_GetFormattedPrice_Native(::System::IntPtr obj);

  /// @brief Method ovr_Product_GetName, addr 0x2add5cc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetName(::System::IntPtr obj);

  /// @brief Method ovr_Product_GetName_Native, addr 0x2add624, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Product_GetName_Native(::System::IntPtr obj);

  /// @brief Method ovr_Product_GetSKU, addr 0x2add6a0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetSKU(::System::IntPtr obj);

  /// @brief Method ovr_Product_GetSKU_Native, addr 0x2add6f8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Product_GetSKU_Native(::System::IntPtr obj);

  /// @brief Method ovr_PurchaseArray_GetElement, addr 0x2addf40, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_PurchaseArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_PurchaseArray_GetNextUrl, addr 0x2addfc4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PurchaseArray_GetNextUrl(::System::IntPtr obj);

  /// @brief Method ovr_PurchaseArray_GetNextUrl_Native, addr 0x2ade01c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_PurchaseArray_GetNextUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_PurchaseArray_GetSize, addr 0x2ade098, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_PurchaseArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_PurchaseArray_HasNextPage, addr 0x2ade114, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_PurchaseArray_HasNextPage(::System::IntPtr obj);

  /// @brief Method ovr_Purchase_GetDeveloperPayload, addr 0x2add9cc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetDeveloperPayload(::System::IntPtr obj);

  /// @brief Method ovr_Purchase_GetDeveloperPayload_Native, addr 0x2adda24, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Purchase_GetDeveloperPayload_Native(::System::IntPtr obj);

  /// @brief Method ovr_Purchase_GetExpirationTime, addr 0x2addaa0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Purchase_GetExpirationTime(::System::IntPtr obj);

  /// @brief Method ovr_Purchase_GetExpirationTime_Native, addr 0x2addaf8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Purchase_GetExpirationTime_Native(::System::IntPtr obj);

  /// @brief Method ovr_Purchase_GetGrantTime, addr 0x2addb74, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Purchase_GetGrantTime(::System::IntPtr obj);

  /// @brief Method ovr_Purchase_GetGrantTime_Native, addr 0x2addbcc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Purchase_GetGrantTime_Native(::System::IntPtr obj);

  /// @brief Method ovr_Purchase_GetPurchaseID, addr 0x2addc48, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Purchase_GetPurchaseID(::System::IntPtr obj);

  /// @brief Method ovr_Purchase_GetPurchaseStrID, addr 0x2addcc4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetPurchaseStrID(::System::IntPtr obj);

  /// @brief Method ovr_Purchase_GetPurchaseStrID_Native, addr 0x2addd1c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Purchase_GetPurchaseStrID_Native(::System::IntPtr obj);

  /// @brief Method ovr_Purchase_GetReportingId, addr 0x2addd98, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetReportingId(::System::IntPtr obj);

  /// @brief Method ovr_Purchase_GetReportingId_Native, addr 0x2adddf0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Purchase_GetReportingId_Native(::System::IntPtr obj);

  /// @brief Method ovr_Purchase_GetSKU, addr 0x2adde6c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetSKU(::System::IntPtr obj);

  /// @brief Method ovr_Purchase_GetSKU_Native, addr 0x2addec4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Purchase_GetSKU_Native(::System::IntPtr obj);

  /// @brief Method ovr_RejoinDialogResult_GetRejoinSelected, addr 0x2ade198, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_RejoinDialogResult_GetRejoinSelected(::System::IntPtr obj);

  /// @brief Method ovr_RichPresenceOptions_Create, addr 0x2ae1df0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_RichPresenceOptions_Create();

  /// @brief Method ovr_RichPresenceOptions_Destroy, addr 0x2ae1e58, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_Destroy(::System::IntPtr handle);

  /// @brief Method ovr_RichPresenceOptions_SetApiName, addr 0x2ae1ed4, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetApiName(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetApiName_Native, addr 0x2ae1f74, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetApiName_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride, addr 0x2ae1ff8, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride(::System::IntPtr handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x2ae2098, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native(::System::IntPtr handle, ::System::IntPtr value);

  /// @brief Method ovr_RichPresenceOptions_SetIsJoinable, addr 0x2ae211c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetIsJoinable(::System::IntPtr handle, bool value);

  /// @brief Method ovr_RichPresence_Clear, addr 0x2acfe04, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_Clear();

  /// @brief Method ovr_RichPresence_GetDestinations, addr 0x2acfe6c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_GetDestinations();

  /// @brief Method ovr_RichPresence_Set, addr 0x2acfed4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_Set(::System::IntPtr richPresenceOptions);

  /// @brief Method ovr_RichPresence_SetDestination, addr 0x2acff50, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetDestination(::StringW api_name);

  /// @brief Method ovr_RichPresence_SetDestination_Native, addr 0x2acffec, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetDestination_Native(::System::IntPtr api_name);

  /// @brief Method ovr_RichPresence_SetIsJoinable, addr 0x2ad0068, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetIsJoinable(bool is_joinable);

  /// @brief Method ovr_RichPresence_SetLobbySession, addr 0x2ad00e4, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetLobbySession(::StringW id);

  /// @brief Method ovr_RichPresence_SetLobbySession_Native, addr 0x2ad0180, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetLobbySession_Native(::System::IntPtr id);

  /// @brief Method ovr_RichPresence_SetMatchSession, addr 0x2ad01fc, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetMatchSession(::StringW id);

  /// @brief Method ovr_RichPresence_SetMatchSession_Native, addr 0x2ad0298, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetMatchSession_Native(::System::IntPtr id);

  /// @brief Method ovr_RosterOptions_AddSuggestedUser, addr 0x2ae2284, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RosterOptions_AddSuggestedUser(::System::IntPtr handle, uint64_t value);

  /// @brief Method ovr_RosterOptions_ClearSuggestedUsers, addr 0x2ae2308, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RosterOptions_ClearSuggestedUsers(::System::IntPtr handle);

  /// @brief Method ovr_RosterOptions_Create, addr 0x2ae21a0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_RosterOptions_Create();

  /// @brief Method ovr_RosterOptions_Destroy, addr 0x2ae2208, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RosterOptions_Destroy(::System::IntPtr handle);

  /// @brief Method ovr_SdkAccountArray_GetElement, addr 0x2ade314, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_SdkAccountArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_SdkAccountArray_GetSize, addr 0x2ade398, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_SdkAccountArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_SdkAccount_GetAccountType, addr 0x2ade21c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SdkAccountType ovr_SdkAccount_GetAccountType(::System::IntPtr obj);

  /// @brief Method ovr_SdkAccount_GetUserId, addr 0x2ade298, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_SdkAccount_GetUserId(::System::IntPtr obj);

  /// @brief Method ovr_SendInvitesResult_GetInvites, addr 0x2ade414, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_SendInvitesResult_GetInvites(::System::IntPtr obj);

  /// @brief Method ovr_SetDeveloperAccessToken, addr 0x2ac7db8, size 0x98, virtual false, abstract: false, final false
  static inline bool ovr_SetDeveloperAccessToken(::StringW accessToken);

  /// @brief Method ovr_ShareMediaResult_GetStatus, addr 0x2ade490, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ShareMediaStatus ovr_ShareMediaResult_GetStatus(::System::IntPtr obj);

  /// @brief Method ovr_SupplementaryMetric_GetID, addr 0x2ade50c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_SupplementaryMetric_GetID(::System::IntPtr obj);

  /// @brief Method ovr_SupplementaryMetric_GetMetric, addr 0x2ade588, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_SupplementaryMetric_GetMetric(::System::IntPtr obj);

  /// @brief Method ovr_SystemVoipState_GetMicrophoneMuted, addr 0x2ade604, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState ovr_SystemVoipState_GetMicrophoneMuted(::System::IntPtr obj);

  /// @brief Method ovr_SystemVoipState_GetStatus, addr 0x2ade680, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_SystemVoipState_GetStatus(::System::IntPtr obj);

  /// @brief Method ovr_TestUserAppAccessArray_GetElement, addr 0x2adedb0, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_TestUserAppAccessArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_TestUserAppAccessArray_GetSize, addr 0x2adee34, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_TestUserAppAccessArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_TestUserAppAccess_GetAccessToken, addr 0x2adebe4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUserAppAccess_GetAccessToken(::System::IntPtr obj);

  /// @brief Method ovr_TestUserAppAccess_GetAccessToken_Native, addr 0x2adec3c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_TestUserAppAccess_GetAccessToken_Native(::System::IntPtr obj);

  /// @brief Method ovr_TestUserAppAccess_GetAppId, addr 0x2adecb8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUserAppAccess_GetAppId(::System::IntPtr obj);

  /// @brief Method ovr_TestUserAppAccess_GetUserId, addr 0x2aded34, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUserAppAccess_GetUserId(::System::IntPtr obj);

  /// @brief Method ovr_TestUser_GetAccessToken, addr 0x2ade6fc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUser_GetAccessToken(::System::IntPtr obj);

  /// @brief Method ovr_TestUser_GetAccessToken_Native, addr 0x2ade754, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_TestUser_GetAccessToken_Native(::System::IntPtr obj);

  /// @brief Method ovr_TestUser_GetAppAccessArray, addr 0x2ade7d0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_TestUser_GetAppAccessArray(::System::IntPtr obj);

  /// @brief Method ovr_TestUser_GetFbAppAccessArray, addr 0x2ade84c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_TestUser_GetFbAppAccessArray(::System::IntPtr obj);

  /// @brief Method ovr_TestUser_GetFriendAccessToken, addr 0x2ade8c8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUser_GetFriendAccessToken(::System::IntPtr obj);

  /// @brief Method ovr_TestUser_GetFriendAccessToken_Native, addr 0x2ade920, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_TestUser_GetFriendAccessToken_Native(::System::IntPtr obj);

  /// @brief Method ovr_TestUser_GetFriendAppAccessArray, addr 0x2ade99c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_TestUser_GetFriendAppAccessArray(::System::IntPtr obj);

  /// @brief Method ovr_TestUser_GetUserAlias, addr 0x2adea18, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUser_GetUserAlias(::System::IntPtr obj);

  /// @brief Method ovr_TestUser_GetUserAlias_Native, addr 0x2adea70, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_TestUser_GetUserAlias_Native(::System::IntPtr obj);

  /// @brief Method ovr_TestUser_GetUserFbid, addr 0x2adeaec, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUser_GetUserFbid(::System::IntPtr obj);

  /// @brief Method ovr_TestUser_GetUserId, addr 0x2adeb68, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUser_GetUserId(::System::IntPtr obj);

  /// @brief Method ovr_UnityInitGlobals, addr 0x2ac7834, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_UnityInitGlobals(::System::IntPtr loggingCB);

  /// @brief Method ovr_UnityInitWrapper, addr 0x2ac4d98, size 0x98, virtual false, abstract: false, final false
  static inline bool ovr_UnityInitWrapper(::StringW appId);

  /// @brief Method ovr_UnityInitWrapperAsynchronous, addr 0x2ac4f38, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_UnityInitWrapperAsynchronous(::StringW appId);

  /// @brief Method ovr_UnityInitWrapperStandalone, addr 0x2ac78b0, size 0xa0, virtual false, abstract: false, final false
  static inline bool ovr_UnityInitWrapperStandalone(::StringW accessToken, ::System::IntPtr loggingCB);

  /// @brief Method ovr_UnityInitWrapperWindows, addr 0x2ac7c7c, size 0xa0, virtual false, abstract: false, final false
  static inline bool ovr_UnityInitWrapperWindows(::StringW appId, ::System::IntPtr loggingCB);

  /// @brief Method ovr_UnityInitWrapperWindowsAsynchronous, addr 0x2ac7d1c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UnityInitWrapperWindowsAsynchronous(::StringW appId, ::System::IntPtr loggingCB);

  /// @brief Method ovr_UnityResetTestPlatform, addr 0x2ac842c, size 0x64, virtual false, abstract: false, final false
  static inline void ovr_UnityResetTestPlatform();

  /// @brief Method ovr_UserAccountAgeCategory_GetAgeCategory, addr 0x2adf71c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::AccountAgeCategory ovr_UserAccountAgeCategory_GetAgeCategory(::System::IntPtr obj);

  /// @brief Method ovr_UserAgeCategory_Get, addr 0x2ad105c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserAgeCategory_Get();

  /// @brief Method ovr_UserAgeCategory_Report, addr 0x2ad10c4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserAgeCategory_Report(::Oculus::Platform::AppAgeCategory age_category);

  /// @brief Method ovr_UserArray_GetElement, addr 0x2adf798, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_UserArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_UserArray_GetNextUrl, addr 0x2adf81c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserArray_GetNextUrl(::System::IntPtr obj);

  /// @brief Method ovr_UserArray_GetNextUrl_Native, addr 0x2adf874, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_UserArray_GetNextUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_UserArray_GetSize, addr 0x2adf8f0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_UserArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_UserArray_HasNextPage, addr 0x2adf96c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserArray_HasNextPage(::System::IntPtr obj);

  /// @brief Method ovr_UserCapabilityArray_GetElement, addr 0x2adfcf0, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_UserCapabilityArray_GetElement(::System::IntPtr obj, ::System::UIntPtr index);

  /// @brief Method ovr_UserCapabilityArray_GetNextUrl, addr 0x2adfd74, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapabilityArray_GetNextUrl(::System::IntPtr obj);

  /// @brief Method ovr_UserCapabilityArray_GetNextUrl_Native, addr 0x2adfdcc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_UserCapabilityArray_GetNextUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_UserCapabilityArray_GetSize, addr 0x2adfe48, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_UserCapabilityArray_GetSize(::System::IntPtr obj);

  /// @brief Method ovr_UserCapabilityArray_HasNextPage, addr 0x2adfec4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserCapabilityArray_HasNextPage(::System::IntPtr obj);

  /// @brief Method ovr_UserCapability_GetDescription, addr 0x2adf9f0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapability_GetDescription(::System::IntPtr obj);

  /// @brief Method ovr_UserCapability_GetDescription_Native, addr 0x2adfa48, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_UserCapability_GetDescription_Native(::System::IntPtr obj);

  /// @brief Method ovr_UserCapability_GetIsEnabled, addr 0x2adfac4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserCapability_GetIsEnabled(::System::IntPtr obj);

  /// @brief Method ovr_UserCapability_GetName, addr 0x2adfb48, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapability_GetName(::System::IntPtr obj);

  /// @brief Method ovr_UserCapability_GetName_Native, addr 0x2adfba0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_UserCapability_GetName_Native(::System::IntPtr obj);

  /// @brief Method ovr_UserCapability_GetReasonCode, addr 0x2adfc1c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapability_GetReasonCode(::System::IntPtr obj);

  /// @brief Method ovr_UserCapability_GetReasonCode_Native, addr 0x2adfc74, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_UserCapability_GetReasonCode_Native(::System::IntPtr obj);

  /// @brief Method ovr_UserDataStoreUpdateResponse_GetSuccess, addr 0x2adff48, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserDataStoreUpdateResponse_GetSuccess(::System::IntPtr obj);

  /// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey, addr 0x2ad1140, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey_Native, addr 0x2ad11f0, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey_Native(uint64_t userID, ::System::IntPtr key);

  /// @brief Method ovr_UserDataStore_PrivateGetEntries, addr 0x2ad1274, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntries(uint64_t userID);

  /// @brief Method ovr_UserDataStore_PrivateGetEntryByKey, addr 0x2ad12f0, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PrivateGetEntryByKey_Native, addr 0x2ad13a0, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey_Native(uint64_t userID, ::System::IntPtr key);

  /// @brief Method ovr_UserDataStore_PrivateWriteEntry, addr 0x2ad1424, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateWriteEntry(uint64_t userID, ::StringW key, ::StringW value);

  /// @brief Method ovr_UserDataStore_PrivateWriteEntry_Native, addr 0x2ad14f4, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateWriteEntry_Native(uint64_t userID, ::System::IntPtr key, ::System::IntPtr value);

  /// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey, addr 0x2ad1588, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey_Native, addr 0x2ad1638, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey_Native(uint64_t userID, ::System::IntPtr key);

  /// @brief Method ovr_UserDataStore_PublicGetEntries, addr 0x2ad16bc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntries(uint64_t userID);

  /// @brief Method ovr_UserDataStore_PublicGetEntryByKey, addr 0x2ad1738, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PublicGetEntryByKey_Native, addr 0x2ad17e8, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey_Native(uint64_t userID, ::System::IntPtr key);

  /// @brief Method ovr_UserDataStore_PublicWriteEntry, addr 0x2ad186c, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicWriteEntry(uint64_t userID, ::StringW key, ::StringW value);

  /// @brief Method ovr_UserDataStore_PublicWriteEntry_Native, addr 0x2ad193c, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicWriteEntry_Native(uint64_t userID, ::System::IntPtr key, ::System::IntPtr value);

  /// @brief Method ovr_UserOptions_AddServiceProvider, addr 0x2ae24ec, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_AddServiceProvider(::System::IntPtr handle, ::Oculus::Platform::ServiceProvider value);

  /// @brief Method ovr_UserOptions_ClearServiceProviders, addr 0x2ae2570, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_ClearServiceProviders(::System::IntPtr handle);

  /// @brief Method ovr_UserOptions_Create, addr 0x2ae2384, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_UserOptions_Create();

  /// @brief Method ovr_UserOptions_Destroy, addr 0x2ae23ec, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_Destroy(::System::IntPtr handle);

  /// @brief Method ovr_UserOptions_SetMaxUsers, addr 0x2ae2468, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_SetMaxUsers(::System::IntPtr handle, uint32_t value);

  /// @brief Method ovr_UserOptions_SetTimeWindow, addr 0x2ae25ec, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_SetTimeWindow(::System::IntPtr handle, ::Oculus::Platform::TimeWindow value);

  /// @brief Method ovr_UserProof_GetNonce, addr 0x2adffcc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserProof_GetNonce(::System::IntPtr obj);

  /// @brief Method ovr_UserProof_GetNonce_Native, addr 0x2ae0024, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_UserProof_GetNonce_Native(::System::IntPtr obj);

  /// @brief Method ovr_UserReportID_GetDidCancel, addr 0x2ae00a0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserReportID_GetDidCancel(::System::IntPtr obj);

  /// @brief Method ovr_UserReportID_GetID, addr 0x2ae0124, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserReportID_GetID(::System::IntPtr obj);

  /// @brief Method ovr_User_CancelRecordingForReportFlow, addr 0x2ad0314, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_CancelRecordingForReportFlow(::StringW recordingUUID);

  /// @brief Method ovr_User_CancelRecordingForReportFlow_Native, addr 0x2ad03b0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_CancelRecordingForReportFlow_Native(::System::IntPtr recordingUUID);

  /// @brief Method ovr_User_Get, addr 0x2ad042c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_Get(uint64_t userID);

  /// @brief Method ovr_User_GetAccessToken, addr 0x2ad04a8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetAccessToken();

  /// @brief Method ovr_User_GetBlockedUsers, addr 0x2ad0510, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetBlockedUsers();

  /// @brief Method ovr_User_GetDisplayName, addr 0x2adeeb0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetDisplayName(::System::IntPtr obj);

  /// @brief Method ovr_User_GetDisplayName_Native, addr 0x2adef08, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_User_GetDisplayName_Native(::System::IntPtr obj);

  /// @brief Method ovr_User_GetID, addr 0x2adef84, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetID(::System::IntPtr obj);

  /// @brief Method ovr_User_GetImageUrl, addr 0x2adf000, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetImageUrl(::System::IntPtr obj);

  /// @brief Method ovr_User_GetImageUrl_Native, addr 0x2adf058, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_User_GetImageUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_User_GetLinkedAccounts, addr 0x2ad0578, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLinkedAccounts(::System::IntPtr userOptions);

  /// @brief Method ovr_User_GetLoggedInUser, addr 0x2ad05f4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLoggedInUser();

  /// @brief Method ovr_User_GetLoggedInUserFriends, addr 0x2ad065c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLoggedInUserFriends();

  /// @brief Method ovr_User_GetOculusID, addr 0x2adf0d4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetOculusID(::System::IntPtr obj);

  /// @brief Method ovr_User_GetOculusID_Native, addr 0x2adf12c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_User_GetOculusID_Native(::System::IntPtr obj);

  /// @brief Method ovr_User_GetOrgScopedID, addr 0x2ad06c4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetOrgScopedID(uint64_t userID);

  /// @brief Method ovr_User_GetPresence, addr 0x2adf1a8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresence(::System::IntPtr obj);

  /// @brief Method ovr_User_GetPresenceDeeplinkMessage, addr 0x2adf27c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceDeeplinkMessage(::System::IntPtr obj);

  /// @brief Method ovr_User_GetPresenceDeeplinkMessage_Native, addr 0x2adf2d4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_User_GetPresenceDeeplinkMessage_Native(::System::IntPtr obj);

  /// @brief Method ovr_User_GetPresenceDestinationApiName, addr 0x2adf350, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceDestinationApiName(::System::IntPtr obj);

  /// @brief Method ovr_User_GetPresenceDestinationApiName_Native, addr 0x2adf3a8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_User_GetPresenceDestinationApiName_Native(::System::IntPtr obj);

  /// @brief Method ovr_User_GetPresenceLobbySessionId, addr 0x2adf424, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceLobbySessionId(::System::IntPtr obj);

  /// @brief Method ovr_User_GetPresenceLobbySessionId_Native, addr 0x2adf47c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_User_GetPresenceLobbySessionId_Native(::System::IntPtr obj);

  /// @brief Method ovr_User_GetPresenceMatchSessionId, addr 0x2adf4f8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceMatchSessionId(::System::IntPtr obj);

  /// @brief Method ovr_User_GetPresenceMatchSessionId_Native, addr 0x2adf550, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_User_GetPresenceMatchSessionId_Native(::System::IntPtr obj);

  /// @brief Method ovr_User_GetPresenceStatus, addr 0x2adf5cc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::UserPresenceStatus ovr_User_GetPresenceStatus(::System::IntPtr obj);

  /// @brief Method ovr_User_GetPresence_Native, addr 0x2adf200, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_User_GetPresence_Native(::System::IntPtr obj);

  /// @brief Method ovr_User_GetSdkAccounts, addr 0x2ad0740, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetSdkAccounts();

  /// @brief Method ovr_User_GetSmallImageUrl, addr 0x2adf648, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetSmallImageUrl(::System::IntPtr obj);

  /// @brief Method ovr_User_GetSmallImageUrl_Native, addr 0x2adf6a0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_User_GetSmallImageUrl_Native(::System::IntPtr obj);

  /// @brief Method ovr_User_GetUserCapabilities, addr 0x2ad07a8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetUserCapabilities();

  /// @brief Method ovr_User_GetUserProof, addr 0x2ad0810, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetUserProof();

  /// @brief Method ovr_User_LaunchBlockFlow, addr 0x2ad0878, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchBlockFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchFriendRequestFlow, addr 0x2ad08f4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchFriendRequestFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchReportFlow, addr 0x2ad0970, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchReportFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchReportFlow2, addr 0x2ad09ec, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchReportFlow2(uint64_t optionalUserID, ::System::IntPtr abuseReportOptions);

  /// @brief Method ovr_User_LaunchUnblockFlow, addr 0x2ad0a70, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchUnblockFlow(uint64_t userID);

  /// @brief Method ovr_User_NewEntitledTestUser, addr 0x2ad0aec, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_NewEntitledTestUser();

  /// @brief Method ovr_User_NewTestUser, addr 0x2ad0b54, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_NewTestUser();

  /// @brief Method ovr_User_NewTestUserFriends, addr 0x2ad0bbc, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_NewTestUserFriends();

  /// @brief Method ovr_User_StartRecordingForReportFlow, addr 0x2ad0c24, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StartRecordingForReportFlow();

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow, addr 0x2ad0c8c, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow(uint64_t optionalUserID, ::StringW optionalRecordingUUID);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2, addr 0x2ad0dc0, size 0xb8, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2(uint64_t optionalUserID, ::StringW optionalRecordingUUID, ::System::IntPtr abuseReportOptions);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2_Native, addr 0x2ad0e78, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2_Native(uint64_t optionalUserID, ::System::IntPtr optionalRecordingUUID, ::System::IntPtr abuseReportOptions);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow_Native, addr 0x2ad0d3c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow_Native(uint64_t optionalUserID, ::System::IntPtr optionalRecordingUUID);

  /// @brief Method ovr_User_TestUserCreateDeviceManifest, addr 0x2ad0f0c, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_TestUserCreateDeviceManifest(::StringW deviceID, ::ArrayW<uint64_t, ::Array<uint64_t>*> appIDs, int32_t numAppIDs);

  /// @brief Method ovr_User_TestUserCreateDeviceManifest_Native, addr 0x2ad0fc0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_TestUserCreateDeviceManifest_Native(::System::IntPtr deviceID, ::ArrayW<uint64_t, ::Array<uint64_t>*> appIDs, int32_t numAppIDs);

  /// @brief Method ovr_VoipDecoder_Decode, addr 0x2ae01a0, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_VoipDecoder_Decode(::System::IntPtr obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData, ::System::UIntPtr compressedSize);

  /// @brief Method ovr_VoipDecoder_Decode, addr 0x2ac81b4, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_VoipDecoder_Decode(::System::IntPtr obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData, uint64_t compressedSize);

  /// @brief Method ovr_VoipDecoder_GetDecodedPCM, addr 0x2ae023c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_VoipDecoder_GetDecodedPCM(::System::IntPtr obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, ::System::UIntPtr outputBufferSize);

  /// @brief Method ovr_VoipEncoder_AddPCM, addr 0x2ae02d8, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_VoipEncoder_AddPCM(::System::IntPtr obj, ::ArrayW<float_t, ::Array<float_t>*> inputData, uint32_t inputSize);

  /// @brief Method ovr_VoipEncoder_GetCompressedData, addr 0x2ae0374, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_VoipEncoder_GetCompressedData(::System::IntPtr obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, ::System::UIntPtr intputSize);

  /// @brief Method ovr_VoipEncoder_GetCompressedDataSize, addr 0x2ae0410, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_VoipEncoder_GetCompressedDataSize(::System::IntPtr obj);

  /// @brief Method ovr_VoipOptions_Create, addr 0x2ae2670, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_VoipOptions_Create();

  /// @brief Method ovr_VoipOptions_Destroy, addr 0x2ae26d8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_VoipOptions_Destroy(::System::IntPtr handle);

  /// @brief Method ovr_VoipOptions_SetBitrateForNewConnections, addr 0x2ae2754, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_VoipOptions_SetBitrateForNewConnections(::System::IntPtr handle, ::Oculus::Platform::VoipBitrate value);

  /// @brief Method ovr_VoipOptions_SetCreateNewConnectionUseDtx, addr 0x2ae27d8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_VoipOptions_SetCreateNewConnectionUseDtx(::System::IntPtr handle, ::Oculus::Platform::VoipDtxState value);

  /// @brief Method ovr_Voip_Accept, addr 0x2ac98bc, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_Accept(uint64_t userID);

  /// @brief Method ovr_Voip_CreateDecoder, addr 0x2ac80d0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Voip_CreateDecoder();

  /// @brief Method ovr_Voip_CreateEncoder, addr 0x2ac7fec, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr ovr_Voip_CreateEncoder();

  /// @brief Method ovr_Voip_DestroyDecoder, addr 0x2ac8138, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_DestroyDecoder(::System::IntPtr decoder);

  /// @brief Method ovr_Voip_DestroyEncoder, addr 0x2ac8054, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_DestroyEncoder(::System::IntPtr encoder);

  /// @brief Method ovr_Voip_GetIsConnectionUsingDtx, addr 0x2ac9938, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipDtxState ovr_Voip_GetIsConnectionUsingDtx(uint64_t peerID);

  /// @brief Method ovr_Voip_GetLocalBitrate, addr 0x2ac99b4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetLocalBitrate(uint64_t peerID);

  /// @brief Method ovr_Voip_GetMicrophoneAvailability, addr 0x2ad19d0, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Voip_GetMicrophoneAvailability();

  /// @brief Method ovr_Voip_GetOutputBufferMaxSize, addr 0x2ac9a30, size 0x68, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_Voip_GetOutputBufferMaxSize();

  /// @brief Method ovr_Voip_GetPCM, addr 0x2ac9a98, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_Voip_GetPCM(uint64_t senderID, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, ::System::UIntPtr outputBufferNumElements);

  /// @brief Method ovr_Voip_GetPCMFloat, addr 0x2ac9b34, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_Voip_GetPCMFloat(uint64_t senderID, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, ::System::UIntPtr outputBufferNumElements);

  /// @brief Method ovr_Voip_GetPCMSize, addr 0x2ac9bd0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_Voip_GetPCMSize(uint64_t senderID);

  /// @brief Method ovr_Voip_GetPCMWithTimestamp, addr 0x2ac9c4c, size 0xac, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_Voip_GetPCMWithTimestamp(uint64_t senderID, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, ::System::UIntPtr outputBufferNumElements,
                                                               ::ArrayW<uint32_t, ::Array<uint32_t>*> timestamp);

  /// @brief Method ovr_Voip_GetPCMWithTimestampFloat, addr 0x2ac9cf8, size 0xac, virtual false, abstract: false, final false
  static inline ::System::UIntPtr ovr_Voip_GetPCMWithTimestampFloat(uint64_t senderID, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, ::System::UIntPtr outputBufferNumElements,
                                                                    ::ArrayW<uint32_t, ::Array<uint32_t>*> timestamp);

  /// @brief Method ovr_Voip_GetRemoteBitrate, addr 0x2ac9da4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetRemoteBitrate(uint64_t peerID);

  /// @brief Method ovr_Voip_GetSyncTimestamp, addr 0x2ac9e20, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_Voip_GetSyncTimestamp(uint64_t userID);

  /// @brief Method ovr_Voip_GetSyncTimestampDifference, addr 0x2ac9e9c, size 0x84, virtual false, abstract: false, final false
  static inline int64_t ovr_Voip_GetSyncTimestampDifference(uint32_t lhs, uint32_t rhs);

  /// @brief Method ovr_Voip_GetSystemVoipMicrophoneMuted, addr 0x2ac9f20, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState ovr_Voip_GetSystemVoipMicrophoneMuted();

  /// @brief Method ovr_Voip_GetSystemVoipStatus, addr 0x2ac9f88, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_Voip_GetSystemVoipStatus();

  /// @brief Method ovr_Voip_ReportAppVoipSessions, addr 0x2ad1a38, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Voip_ReportAppVoipSessions(::ArrayW<uint64_t, ::Array<uint64_t>*> sessionIDs);

  /// @brief Method ovr_Voip_SetMicrophoneFilterCallback, addr 0x2ac8590, size 0x80, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetMicrophoneFilterCallback(::Oculus::Platform::__CAPI__FilterCallback* cb);

  /// @brief Method ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer, addr 0x2ac8610, size 0x88, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(::Oculus::Platform::__CAPI__FilterCallback* cb, ::System::UIntPtr bufferSizeElements);

  /// @brief Method ovr_Voip_SetMicrophoneMuted, addr 0x2ac9ff0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetMicrophoneMuted(::Oculus::Platform::VoipMuteState state);

  /// @brief Method ovr_Voip_SetNewConnectionOptions, addr 0x2aca06c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetNewConnectionOptions(::System::IntPtr voipOptions);

  /// @brief Method ovr_Voip_SetOutputSampleRate, addr 0x2aca0e8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetOutputSampleRate(::Oculus::Platform::VoipSampleRate rate);

  /// @brief Method ovr_Voip_SetSystemVoipMicrophoneMuted, addr 0x2ac83b0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetSystemVoipMicrophoneMuted(::Oculus::Platform::VoipMuteState muted);

  /// @brief Method ovr_Voip_SetSystemVoipPassthrough, addr 0x2ac8334, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetSystemVoipPassthrough(bool passthrough);

  /// @brief Method ovr_Voip_SetSystemVoipSuppressed, addr 0x2ad1abc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Voip_SetSystemVoipSuppressed(bool suppressed);

  /// @brief Method ovr_Voip_Start, addr 0x2aca164, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_Start(uint64_t userID);

  /// @brief Method ovr_Voip_Stop, addr 0x2aca1e0, size 0x7c, virtual false, abstract: false, final false
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

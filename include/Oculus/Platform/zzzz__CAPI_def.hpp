#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__KeyValuePairType_def.hpp"
#include "Oculus/Platform/zzzz__MatchmakingCriterionImportance_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
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
struct RoomType;
}
namespace Oculus::Platform {
struct ChallengeViewerFilter;
}
namespace Oculus::Platform {
struct LivestreamingMicrophoneStatus;
}
namespace Oculus::Platform {
struct ServiceProvider;
}
namespace Oculus::Platform {
struct ReportRequestResponse;
}
namespace Oculus::Platform {
struct MultiplayerErrorErrorKey;
}
namespace Oculus::Platform {
struct NetSyncVoipMicSource;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Oculus::Platform {
struct ChallengeCreationType;
}
namespace Oculus::Platform {
struct __CAPI__ovrMatchmakingCriterion;
}
namespace Oculus::Platform {
struct NetSyncDisconnectReason;
}
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
namespace Oculus::Platform {
struct RichPresenceExtraContext;
}
namespace Oculus::Platform {
struct LivestreamingStartStatus;
}
namespace Oculus::Platform {
struct MatchmakingStatApproach;
}
namespace Oculus::Platform {
struct SystemVoipStatus;
}
namespace Oculus::Platform {
struct VoipSampleRate;
}
namespace Oculus::Platform {
struct __CAPI__ovrNetSyncVec3;
}
namespace Oculus::Platform {
struct LaunchResult;
}
namespace Oculus::Platform {
struct NetSyncVoipStreamMode;
}
namespace Oculus::Platform {
struct VoipBitrate;
}
namespace System {
class Object;
}
namespace Oculus::Platform {
struct LogEventName;
}
namespace Oculus::Platform {
struct ChallengeVisibility;
}
namespace Oculus::Platform {
struct AchievementType;
}
namespace Oculus::Platform {
struct PeerConnectionState;
}
namespace Oculus::Platform {
struct RoomJoinability;
}
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
namespace Oculus::Platform {
struct NetSyncConnectionStatus;
}
namespace Oculus::Platform {
struct CloudStorageUpdateStatus;
}
namespace Oculus::Platform {
struct AbuseReportType;
}
namespace Oculus::Platform {
struct AbuseReportVideoMode;
}
namespace Oculus::Platform {
struct PlatformInitializeResult;
}
namespace Oculus::Platform {
struct MediaContentType;
}
namespace Oculus::Platform {
struct UserOrdering;
}
namespace Oculus::Platform {
struct __CAPI__OculusInitParams;
}
namespace Oculus::Platform {
struct SdkAccountType;
}
namespace Oculus::Platform {
class __CAPI__FilterCallback;
}
namespace Oculus::Platform {
struct __Message__MessageType;
}
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
namespace Oculus::Platform {
struct UserPresenceStatus;
}
namespace Oculus::Platform {
struct CloudStorageDataStatus;
}
namespace Oculus::Platform {
struct PartyUpdateAction;
}
namespace Oculus::Platform {
struct VoipMuteState;
}
namespace Oculus::Platform {
struct LaunchType;
}
namespace Oculus::Platform {
struct InitConfigOptions;
}
namespace Oculus::Platform {
struct SendPolicy;
}
namespace Oculus::Platform {
struct VoipDtxState;
}
namespace Oculus::Platform {
struct RoomMembershipLockStatus;
}
namespace System {
class Array;
}
namespace Oculus::Platform {
struct __CAPI__ovrMatchmakingCustomQueryData;
}
namespace System::Text {
class UTF8Encoding;
}
namespace Oculus::Platform {
struct LivestreamingAudience;
}
namespace Oculus::Platform {
struct __CAPI__ovrKeyValuePair;
}
namespace System {
struct DateTime;
}
namespace Oculus::Platform {
struct ShareMediaStatus;
}
namespace Oculus::Platform {
struct TimeWindow;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace Oculus::Platform {
struct KeyValuePairType;
}
namespace Oculus::Platform {
struct MatchmakingCriterionImportance;
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
struct __CAPI__ovrMatchmakingCriterion;
}
namespace Oculus::Platform {
struct __CAPI__ovrMatchmakingCustomQueryData;
}
namespace Oculus::Platform {
struct __CAPI__ovrNetSyncVec3;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::CAPI);
MARK_REF_PTR_T(::Oculus::Platform::__CAPI__FilterCallback);
MARK_VAL_T(::Oculus::Platform::__CAPI__OculusInitParams);
MARK_VAL_T(::Oculus::Platform::__CAPI__ovrKeyValuePair);
MARK_VAL_T(::Oculus::Platform::__CAPI__ovrMatchmakingCriterion);
MARK_VAL_T(::Oculus::Platform::__CAPI__ovrMatchmakingCustomQueryData);
MARK_VAL_T(::Oculus::Platform::__CAPI__ovrNetSyncVec3);
// Type: ::ovrKeyValuePair
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13254))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13236))
// CS Name: ::CAPI::ovrKeyValuePair
struct CORDL_TYPE __CAPI__ovrKeyValuePair {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2569a5c size 0x18 virtual false final false
  inline void _ctor(::StringW key, ::StringW value);

  /// @brief Method .ctor addr 0x256953c size 0x1c virtual false final false
  inline void _ctor(::StringW key, int32_t value);

  /// @brief Method .ctor addr 0x2569a74 size 0x1c virtual false final false
  inline void _ctor(::StringW key, double_t value);

  // Ctor Parameters [CppParam { name: "key_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "valueType_", ty: "::Oculus::Platform::KeyValuePairType", modifiers: "", def_value:
  // None }, CppParam { name: "stringValue_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "intValue_", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "doubleValue_", ty: "double_t", modifiers: "", def_value: None }]
  constexpr __CAPI__ovrKeyValuePair(::StringW key_, ::Oculus::Platform::KeyValuePairType valueType_, ::StringW stringValue_, int32_t intValue_, double_t doubleValue_) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CAPI__ovrKeyValuePair();

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13237))
// CS Name: ::CAPI::ovrNetSyncVec3
struct CORDL_TYPE __CAPI__ovrNetSyncVec3 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr __CAPI__ovrNetSyncVec3(float_t x, float_t y, float_t z) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CAPI__ovrNetSyncVec3();

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
// Type: ::ovrMatchmakingCriterion
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13264)), TypeDefinitionIndex(TypeDefinitionIndex(2601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13238))
// CS Name: ::CAPI::ovrMatchmakingCriterion
struct CORDL_TYPE __CAPI__ovrMatchmakingCriterion {
public:
  // Declarations
  /// @brief Method .ctor addr 0x258ec84 size 0x6c virtual false final false
  inline void _ctor(::StringW key, ::Oculus::Platform::MatchmakingCriterionImportance importance);

  // Ctor Parameters [CppParam { name: "key_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "importance_", ty: "::Oculus::Platform::MatchmakingCriterionImportance", modifiers:
  // "", def_value: None }, CppParam { name: "parameterArray", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "parameterArrayCount", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __CAPI__ovrMatchmakingCriterion(::StringW key_, ::Oculus::Platform::MatchmakingCriterionImportance importance_, void* parameterArray, uint32_t parameterArrayCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CAPI__ovrMatchmakingCriterion();

  /// @brief Field key_, offset: 0x0, size: 0x8, def value: None
  ::StringW key_;

  /// @brief Field importance_, offset: 0x8, size: 0x4, def value: None
  ::Oculus::Platform::MatchmakingCriterionImportance importance_;

  /// @brief Field parameterArray, offset: 0x10, size: 0x8, def value: None
  void* parameterArray;

  /// @brief Field parameterArrayCount, offset: 0x18, size: 0x4, def value: None
  uint32_t parameterArrayCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__ovrMatchmakingCriterion, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrMatchmakingCriterion, key_) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrMatchmakingCriterion, importance_) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrMatchmakingCriterion, parameterArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrMatchmakingCriterion, parameterArrayCount) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform
// Type: ::ovrMatchmakingCustomQueryData
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13239))
// CS Name: ::CAPI::ovrMatchmakingCustomQueryData
struct CORDL_TYPE __CAPI__ovrMatchmakingCustomQueryData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "dataArray", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "dataArrayCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "criterionArray", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "criterionArrayCount", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __CAPI__ovrMatchmakingCustomQueryData(void* dataArray, uint32_t dataArrayCount, void* criterionArray, uint32_t criterionArrayCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CAPI__ovrMatchmakingCustomQueryData();

  /// @brief Field dataArray, offset: 0x0, size: 0x8, def value: None
  void* dataArray;

  /// @brief Field dataArrayCount, offset: 0x8, size: 0x4, def value: None
  uint32_t dataArrayCount;

  /// @brief Field criterionArray, offset: 0x10, size: 0x8, def value: None
  void* criterionArray;

  /// @brief Field criterionArrayCount, offset: 0x18, size: 0x4, def value: None
  uint32_t criterionArrayCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__ovrMatchmakingCustomQueryData, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrMatchmakingCustomQueryData, dataArray) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrMatchmakingCustomQueryData, dataArrayCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrMatchmakingCustomQueryData, criterionArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__CAPI__ovrMatchmakingCustomQueryData, criterionArrayCount) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform
// Type: ::OculusInitParams
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13240))
// CS Name: ::CAPI::OculusInitParams
struct CORDL_TYPE __CAPI__OculusInitParams {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "sType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "email", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "appId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "uriPrefixOverride", ty: "::StringW",
  // modifiers: "", def_value: None }]
  constexpr __CAPI__OculusInitParams(int32_t sType, ::StringW email, ::StringW password, uint64_t appId, ::StringW uriPrefixOverride) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CAPI__OculusInitParams();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13241))
// CS Name: ::CAPI::FilterCallback*
class CORDL_TYPE __CAPI__FilterCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::Oculus::Platform::__CAPI__FilterCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x258ecf0 size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x258edc8 size 0x14 virtual true final false
  inline void Invoke(ByRef<::ArrayW<int16_t, ::Array<int16_t>*>> pcmData, void* pcmDataLength, int32_t frequency, int32_t numChannels);

  /// @brief Method BeginInvoke addr 0x258eddc size 0xd4 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<int16_t, ::Array<int16_t>*>> pcmData, void* pcmDataLength, int32_t frequency, int32_t numChannels, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke addr 0x258eeb0 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__CAPI__FilterCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CAPI__FilterCallback(__CAPI__FilterCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CAPI__FilterCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CAPI__FilterCallback(__CAPI__FilterCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CAPI__FilterCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__FilterCallback, 0x80>, "Size mismatch!");

} // namespace Oculus::Platform
// Type: Oculus.Platform::CAPI
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13242))
// CS Name: ::Oculus.Platform::CAPI*
class CORDL_TYPE CAPI : public ::System::Object {
public:
  // Declarations
  using FilterCallback = ::Oculus::Platform::__CAPI__FilterCallback;

  using OculusInitParams = ::Oculus::Platform::__CAPI__OculusInitParams;

  using ovrMatchmakingCustomQueryData = ::Oculus::Platform::__CAPI__ovrMatchmakingCustomQueryData;

  using ovrMatchmakingCriterion = ::Oculus::Platform::__CAPI__ovrMatchmakingCriterion;

  using ovrNetSyncVec3 = ::Oculus::Platform::__CAPI__ovrNetSyncVec3;

  using ovrKeyValuePair = ::Oculus::Platform::__CAPI__ovrKeyValuePair;

  /// @brief Field nativeStringEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_nativeStringEncoding, put = setStaticF_nativeStringEncoding))::System::Text::UTF8Encoding* nativeStringEncoding;

  static inline void setStaticF_nativeStringEncoding(::System::Text::UTF8Encoding* value);

  static inline ::System::Text::UTF8Encoding* getStaticF_nativeStringEncoding();

  /// @brief Method ArrayOfStructsToIntPtr addr 0x2569158 size 0x198 virtual false final false
  static inline void* ArrayOfStructsToIntPtr(::System::Array* ar);

  /// @brief Method DictionaryToOVRKeyValuePairs addr 0x25692f0 size 0x24c virtual false final false
  static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>
  DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>* dict);

  /// @brief Method DictionaryToOVRKeyValuePairs addr 0x2569558 size 0x504 virtual false final false
  static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>
  DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* dict);

  /// @brief Method IntPtrToByteArray addr 0x2569a90 size 0xbc virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> IntPtrToByteArray(void* data, uint64_t size);

  /// @brief Method DataStoreFromNative addr 0x2569b4c size 0x158 virtual false final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* DataStoreFromNative(void* pointer);

  /// @brief Method StringFromNative addr 0x2569e3c size 0x134 virtual false final false
  static inline ::StringW StringFromNative(void* pointer);

  /// @brief Method GetNativeStringLengthNotIncludingNullTerminator addr 0x2569f70 size 0x74 virtual false final false
  static inline int32_t GetNativeStringLengthNotIncludingNullTerminator(void* pointer);

  /// @brief Method DateTimeFromNative addr 0x2569fe4 size 0x64 virtual false final false
  static inline ::System::DateTime DateTimeFromNative(uint64_t seconds_since_the_one_true_epoch);

  /// @brief Method DateTimeToNative addr 0x256a048 size 0xe8 virtual false final false
  static inline uint64_t DateTimeToNative(::System::DateTime dt);

  /// @brief Method BlobFromNative addr 0x256a130 size 0xd8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BlobFromNative(uint32_t size, void* pointer);

  /// @brief Method FiledataFromNative addr 0x256a208 size 0xa0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FiledataFromNative(uint32_t size, void* pointer);

  /// @brief Method StringToNative addr 0x256a2a8 size 0x180 virtual false final false
  static inline void* StringToNative(::StringW s);

  /// @brief Method ovr_UnityInitWrapper addr 0x2567720 size 0x98 virtual false final false
  static inline bool ovr_UnityInitWrapper(::StringW appId);

  /// @brief Method ovr_UnityInitGlobals addr 0x256a428 size 0x7c virtual false final false
  static inline void ovr_UnityInitGlobals(void* loggingCB);

  /// @brief Method ovr_UnityInitWrapperAsynchronous addr 0x25678c0 size 0x94 virtual false final false
  static inline uint64_t ovr_UnityInitWrapperAsynchronous(::StringW appId);

  /// @brief Method ovr_UnityInitWrapperStandalone addr 0x256a4a4 size 0xa0 virtual false final false
  static inline bool ovr_UnityInitWrapperStandalone(::StringW accessToken, void* loggingCB);

  /// @brief Method ovr_Platform_InitializeStandaloneOculus addr 0x256a544 size 0xe4 virtual false final false
  static inline uint64_t ovr_Platform_InitializeStandaloneOculus(ByRef<::Oculus::Platform::__CAPI__OculusInitParams> init);

  /// @brief Method ovr_PlatformInitializeWithAccessToken addr 0x256a628 size 0xa0 virtual false final false
  static inline uint64_t ovr_PlatformInitializeWithAccessToken(uint64_t appId, ::StringW accessToken);

  /// @brief Method ovr_PlatformInitializeWithAccessTokenAndOptions addr 0x256a6c8 size 0x1a8 virtual false final false
  static inline uint64_t ovr_PlatformInitializeWithAccessTokenAndOptions(uint64_t appId, ::StringW accessToken,
                                                                         ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> configOptions,
                                                                         void* numOptions);

  /// @brief Method ovr_UnityInitWrapperWindows addr 0x256a870 size 0xa0 virtual false final false
  static inline bool ovr_UnityInitWrapperWindows(::StringW appId, void* loggingCB);

  /// @brief Method ovr_UnityInitWrapperWindowsAsynchronous addr 0x256a910 size 0x9c virtual false final false
  static inline uint64_t ovr_UnityInitWrapperWindowsAsynchronous(::StringW appId, void* loggingCB);

  /// @brief Method ovr_SetDeveloperAccessToken addr 0x256a9ac size 0x98 virtual false final false
  static inline bool ovr_SetDeveloperAccessToken(::StringW accessToken);

  /// @brief Method ovr_GetLoggedInUserLocale addr 0x256aa44 size 0x50 virtual false final false
  static inline ::StringW ovr_GetLoggedInUserLocale();

  /// @brief Method ovr_GetLoggedInUserLocale_Native addr 0x256aa94 size 0x68 virtual false final false
  static inline void* ovr_GetLoggedInUserLocale_Native();

  /// @brief Method ovr_PopMessage addr 0x256aafc size 0x68 virtual false final false
  static inline void* ovr_PopMessage();

  /// @brief Method ovr_FreeMessage addr 0x256ab64 size 0x7c virtual false final false
  static inline void ovr_FreeMessage(void* message);

  /// @brief Method ovr_Voip_CreateEncoder addr 0x256abe0 size 0x68 virtual false final false
  static inline void* ovr_Voip_CreateEncoder();

  /// @brief Method ovr_Voip_DestroyEncoder addr 0x256ac48 size 0x7c virtual false final false
  static inline void ovr_Voip_DestroyEncoder(void* encoder);

  /// @brief Method ovr_Voip_CreateDecoder addr 0x256acc4 size 0x68 virtual false final false
  static inline void* ovr_Voip_CreateDecoder();

  /// @brief Method ovr_Voip_DestroyDecoder addr 0x256ad2c size 0x7c virtual false final false
  static inline void ovr_Voip_DestroyDecoder(void* decoder);

  /// @brief Method ovr_VoipDecoder_Decode addr 0x256ada8 size 0x9c virtual false final false
  static inline void ovr_VoipDecoder_Decode(void* obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData, uint64_t compressedSize);

  /// @brief Method ovr_Microphone_Create addr 0x256ae44 size 0x68 virtual false final false
  static inline void* ovr_Microphone_Create();

  /// @brief Method ovr_Microphone_Destroy addr 0x256aeac size 0x7c virtual false final false
  static inline void ovr_Microphone_Destroy(void* obj);

  /// @brief Method ovr_Voip_SetSystemVoipPassthrough addr 0x256af28 size 0x7c virtual false final false
  static inline void ovr_Voip_SetSystemVoipPassthrough(bool passthrough);

  /// @brief Method ovr_Voip_SetSystemVoipMicrophoneMuted addr 0x256afa4 size 0x7c virtual false final false
  static inline void ovr_Voip_SetSystemVoipMicrophoneMuted(::Oculus::Platform::VoipMuteState muted);

  /// @brief Method ovr_UnityResetTestPlatform addr 0x256b020 size 0x64 virtual false final false
  static inline void ovr_UnityResetTestPlatform();

  /// @brief Method ovr_HTTP_GetWithMessageType addr 0x256b084 size 0x9c virtual false final false
  static inline uint64_t ovr_HTTP_GetWithMessageType(::StringW url, int32_t messageType);

  /// @brief Method ovr_CrashApplication addr 0x256b120 size 0x64 virtual false final false
  static inline void ovr_CrashApplication();

  /// @brief Method ovr_Voip_SetMicrophoneFilterCallback addr 0x256b184 size 0x80 virtual false final false
  static inline void ovr_Voip_SetMicrophoneFilterCallback(::Oculus::Platform::__CAPI__FilterCallback* cb);

  /// @brief Method ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer addr 0x256b204 size 0x88 virtual false final false
  static inline void ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(::Oculus::Platform::__CAPI__FilterCallback* cb, void* bufferSizeElements);

  /// @brief Method LogNewUnifiedEvent addr 0x256b28c size 0xa8 virtual false final false
  static inline void LogNewUnifiedEvent(::Oculus::Platform::LogEventName eventName, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* values);

  /// @brief Method LogNewEvent addr 0x256b334 size 0x354 virtual false final false
  static inline void LogNewEvent(::StringW eventName, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* values);

  /// @brief Method ovr_Log_NewEvent addr 0x256b688 size 0x9c virtual false final false
  static inline void ovr_Log_NewEvent(void* eventName, ::ArrayW<void*, ::Array<void*>*> values, void* length);

  /// @brief Method ovr_ApplicationLifecycle_GetLaunchDetails addr 0x256b724 size 0x68 virtual false final false
  static inline void* ovr_ApplicationLifecycle_GetLaunchDetails();

  /// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult addr 0x256b78c size 0x9c virtual false final false
  static inline void ovr_ApplicationLifecycle_LogDeeplinkResult(::StringW trackingID, ::Oculus::Platform::LaunchResult result);

  /// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult_Native addr 0x256b828 size 0x84 virtual false final false
  static inline void ovr_ApplicationLifecycle_LogDeeplinkResult_Native(void* trackingID, ::Oculus::Platform::LaunchResult result);

  /// @brief Method ovr_HTTP_StartTransfer addr 0x256b8ac size 0xec virtual false final false
  static inline uint64_t ovr_HTTP_StartTransfer(::StringW url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> headers);

  /// @brief Method ovr_HTTP_StartTransfer_Native addr 0x256b998 size 0x1a4 virtual false final false
  static inline uint64_t ovr_HTTP_StartTransfer_Native(void* url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> headers, void* numItems);

  /// @brief Method ovr_HTTP_Write addr 0x256bb3c size 0xa4 virtual false final false
  static inline bool ovr_HTTP_Write(uint64_t transferId, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, void* length);

  /// @brief Method ovr_HTTP_WriteEOM addr 0x256bbe0 size 0x78 virtual false final false
  static inline void ovr_HTTP_WriteEOM(uint64_t transferId);

  /// @brief Method ovr_Message_GetStringForJavascript addr 0x256bc58 size 0x58 virtual false final false
  static inline ::StringW ovr_Message_GetStringForJavascript(void* message);

  /// @brief Method ovr_Message_GetStringForJavascript_Native addr 0x256bcb0 size 0x7c virtual false final false
  static inline void* ovr_Message_GetStringForJavascript_Native(void* message);

  /// @brief Method ovr_NetSync_GetAmbisonicFloatPCM addr 0x256bd2c size 0x9c virtual false final false
  static inline void* ovr_NetSync_GetAmbisonicFloatPCM(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInt16PCM addr 0x256bdc8 size 0x9c virtual false final false
  static inline void* ovr_NetSync_GetAmbisonicInt16PCM(int64_t connection_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInterleavedFloatPCM addr 0x256be64 size 0x9c virtual false final false
  static inline void* ovr_NetSync_GetAmbisonicInterleavedFloatPCM(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInterleavedInt16PCM addr 0x256bf00 size 0x9c virtual false final false
  static inline void* ovr_NetSync_GetAmbisonicInterleavedInt16PCM(int64_t connection_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetListenerPosition addr 0x256bf9c size 0x9c virtual false final false
  static inline bool ovr_NetSync_GetListenerPosition(int64_t connection_id, uint64_t sessionId, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3> position);

  /// @brief Method ovr_NetSync_GetMonostreamFloatPCM addr 0x256c038 size 0xa4 virtual false final false
  static inline void* ovr_NetSync_GetMonostreamFloatPCM(int64_t connection_id, uint64_t sessionId, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetMonostreamInt16PCM addr 0x256c0dc size 0xa4 virtual false final false
  static inline void* ovr_NetSync_GetMonostreamInt16PCM(int64_t connection_id, uint64_t session_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetPcmBufferMaxSamples addr 0x256c180 size 0x68 virtual false final false
  static inline void* ovr_NetSync_GetPcmBufferMaxSamples();

  /// @brief Method ovr_NetSync_GetVoipAmplitude addr 0x256c1e8 size 0x9c virtual false final false
  static inline bool ovr_NetSync_GetVoipAmplitude(int64_t connection_id, uint64_t sessionId, ByRef<float_t> amplitude);

  /// @brief Method ovr_NetSync_SetListenerPosition addr 0x256c284 size 0x84 virtual false final false
  static inline void ovr_NetSync_SetListenerPosition(int64_t connection_id, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3> position);

  /// @brief Method ovr_Net_Accept addr 0x256c308 size 0x7c virtual false final false
  static inline void ovr_Net_Accept(uint64_t peerID);

  /// @brief Method ovr_Net_AcceptForCurrentRoom addr 0x256c384 size 0x70 virtual false final false
  static inline bool ovr_Net_AcceptForCurrentRoom();

  /// @brief Method ovr_Net_Close addr 0x256c3f4 size 0x7c virtual false final false
  static inline void ovr_Net_Close(uint64_t peerID);

  /// @brief Method ovr_Net_CloseForCurrentRoom addr 0x256c470 size 0x64 virtual false final false
  static inline void ovr_Net_CloseForCurrentRoom();

  /// @brief Method ovr_Net_Connect addr 0x256c4d4 size 0x7c virtual false final false
  static inline void ovr_Net_Connect(uint64_t peerID);

  /// @brief Method ovr_Net_IsConnected addr 0x256c550 size 0x84 virtual false final false
  static inline bool ovr_Net_IsConnected(uint64_t peerID);

  /// @brief Method ovr_Net_Ping addr 0x256c5d4 size 0x7c virtual false final false
  static inline uint64_t ovr_Net_Ping(uint64_t peerID);

  /// @brief Method ovr_Net_ReadPacket addr 0x256c650 size 0x68 virtual false final false
  static inline void* ovr_Net_ReadPacket();

  /// @brief Method ovr_Net_SendPacket addr 0x256c6b8 size 0xac virtual false final false
  static inline bool ovr_Net_SendPacket(uint64_t userID, void* length, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::Oculus::Platform::SendPolicy policy);

  /// @brief Method ovr_Net_SendPacketToCurrentRoom addr 0x256c764 size 0xa4 virtual false final false
  static inline bool ovr_Net_SendPacketToCurrentRoom(void* length, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::Oculus::Platform::SendPolicy policy);

  /// @brief Method ovr_Party_PluginGetSharedMemHandle addr 0x256c808 size 0x68 virtual false final false
  static inline int32_t ovr_Party_PluginGetSharedMemHandle();

  /// @brief Method ovr_Party_PluginGetVoipMicrophoneMuted addr 0x256c870 size 0x68 virtual false final false
  static inline ::Oculus::Platform::VoipMuteState ovr_Party_PluginGetVoipMicrophoneMuted();

  /// @brief Method ovr_Party_PluginGetVoipPassthrough addr 0x256c8d8 size 0x70 virtual false final false
  static inline bool ovr_Party_PluginGetVoipPassthrough();

  /// @brief Method ovr_Party_PluginGetVoipStatus addr 0x256c948 size 0x68 virtual false final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_Party_PluginGetVoipStatus();

  /// @brief Method ovr_Voip_Accept addr 0x256c9b0 size 0x7c virtual false final false
  static inline void ovr_Voip_Accept(uint64_t userID);

  /// @brief Method ovr_Voip_GetIsConnectionUsingDtx addr 0x256ca2c size 0x7c virtual false final false
  static inline ::Oculus::Platform::VoipDtxState ovr_Voip_GetIsConnectionUsingDtx(uint64_t peerID);

  /// @brief Method ovr_Voip_GetLocalBitrate addr 0x256caa8 size 0x7c virtual false final false
  static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetLocalBitrate(uint64_t peerID);

  /// @brief Method ovr_Voip_GetOutputBufferMaxSize addr 0x256cb24 size 0x68 virtual false final false
  static inline void* ovr_Voip_GetOutputBufferMaxSize();

  /// @brief Method ovr_Voip_GetPCM addr 0x256cb8c size 0x9c virtual false final false
  static inline void* ovr_Voip_GetPCM(uint64_t senderID, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Voip_GetPCMFloat addr 0x256cc28 size 0x9c virtual false final false
  static inline void* ovr_Voip_GetPCMFloat(uint64_t senderID, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Voip_GetPCMSize addr 0x256ccc4 size 0x7c virtual false final false
  static inline void* ovr_Voip_GetPCMSize(uint64_t senderID);

  /// @brief Method ovr_Voip_GetPCMWithTimestamp addr 0x256cd40 size 0xac virtual false final false
  static inline void* ovr_Voip_GetPCMWithTimestamp(uint64_t senderID, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements,
                                                   ::ArrayW<uint32_t, ::Array<uint32_t>*> timestamp);

  /// @brief Method ovr_Voip_GetPCMWithTimestampFloat addr 0x256cdec size 0xac virtual false final false
  static inline void* ovr_Voip_GetPCMWithTimestampFloat(uint64_t senderID, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements,
                                                        ::ArrayW<uint32_t, ::Array<uint32_t>*> timestamp);

  /// @brief Method ovr_Voip_GetRemoteBitrate addr 0x256ce98 size 0x7c virtual false final false
  static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetRemoteBitrate(uint64_t peerID);

  /// @brief Method ovr_Voip_GetSyncTimestamp addr 0x256cf14 size 0x7c virtual false final false
  static inline uint32_t ovr_Voip_GetSyncTimestamp(uint64_t userID);

  /// @brief Method ovr_Voip_GetSyncTimestampDifference addr 0x256cf90 size 0x84 virtual false final false
  static inline int64_t ovr_Voip_GetSyncTimestampDifference(uint32_t lhs, uint32_t rhs);

  /// @brief Method ovr_Voip_GetSystemVoipMicrophoneMuted addr 0x256d014 size 0x68 virtual false final false
  static inline ::Oculus::Platform::VoipMuteState ovr_Voip_GetSystemVoipMicrophoneMuted();

  /// @brief Method ovr_Voip_GetSystemVoipStatus addr 0x256d07c size 0x68 virtual false final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_Voip_GetSystemVoipStatus();

  /// @brief Method ovr_Voip_SetMicrophoneMuted addr 0x256d0e4 size 0x7c virtual false final false
  static inline void ovr_Voip_SetMicrophoneMuted(::Oculus::Platform::VoipMuteState state);

  /// @brief Method ovr_Voip_SetNewConnectionOptions addr 0x256d160 size 0x7c virtual false final false
  static inline void ovr_Voip_SetNewConnectionOptions(void* voipOptions);

  /// @brief Method ovr_Voip_SetOutputSampleRate addr 0x256d1dc size 0x7c virtual false final false
  static inline void ovr_Voip_SetOutputSampleRate(::Oculus::Platform::VoipSampleRate rate);

  /// @brief Method ovr_Voip_Start addr 0x256d258 size 0x7c virtual false final false
  static inline void ovr_Voip_Start(uint64_t userID);

  /// @brief Method ovr_Voip_Stop addr 0x256d2d4 size 0x7c virtual false final false
  static inline void ovr_Voip_Stop(uint64_t userID);

  /// @brief Method ovr_AbuseReport_LaunchAdvancedReportFlow addr 0x256d350 size 0x84 virtual false final false
  static inline uint64_t ovr_AbuseReport_LaunchAdvancedReportFlow(uint64_t content_id, void* abuse_report_options);

  /// @brief Method ovr_AbuseReport_ReportRequestHandled addr 0x256d3d4 size 0x7c virtual false final false
  static inline uint64_t ovr_AbuseReport_ReportRequestHandled(::Oculus::Platform::ReportRequestResponse response);

  /// @brief Method ovr_Achievements_AddCount addr 0x256d450 size 0xac virtual false final false
  static inline uint64_t ovr_Achievements_AddCount(::StringW name, uint64_t count);

  /// @brief Method ovr_Achievements_AddCount_Native addr 0x256d4fc size 0x84 virtual false final false
  static inline uint64_t ovr_Achievements_AddCount_Native(void* name, uint64_t count);

  /// @brief Method ovr_Achievements_AddFields addr 0x256d580 size 0xc8 virtual false final false
  static inline uint64_t ovr_Achievements_AddFields(::StringW name, ::StringW fields);

  /// @brief Method ovr_Achievements_AddFields_Native addr 0x256d648 size 0x84 virtual false final false
  static inline uint64_t ovr_Achievements_AddFields_Native(void* name, void* fields);

  /// @brief Method ovr_Achievements_GetAllDefinitions addr 0x256d6cc size 0x68 virtual false final false
  static inline uint64_t ovr_Achievements_GetAllDefinitions();

  /// @brief Method ovr_Achievements_GetAllProgress addr 0x256d734 size 0x68 virtual false final false
  static inline uint64_t ovr_Achievements_GetAllProgress();

  /// @brief Method ovr_Achievements_GetDefinitionsByName addr 0x256d79c size 0x148 virtual false final false
  static inline uint64_t ovr_Achievements_GetDefinitionsByName(::ArrayW<::StringW, ::Array<::StringW>*> names, int32_t count);

  /// @brief Method ovr_Achievements_GetProgressByName addr 0x256d8e4 size 0x148 virtual false final false
  static inline uint64_t ovr_Achievements_GetProgressByName(::ArrayW<::StringW, ::Array<::StringW>*> names, int32_t count);

  /// @brief Method ovr_Achievements_Unlock addr 0x256da2c size 0x9c virtual false final false
  static inline uint64_t ovr_Achievements_Unlock(::StringW name);

  /// @brief Method ovr_Achievements_Unlock_Native addr 0x256dac8 size 0x7c virtual false final false
  static inline uint64_t ovr_Achievements_Unlock_Native(void* name);

  /// @brief Method ovr_Application_ExecuteCoordinatedLaunch addr 0x256db44 size 0x84 virtual false final false
  static inline uint64_t ovr_Application_ExecuteCoordinatedLaunch(uint64_t appID, uint64_t roomID);

  /// @brief Method ovr_Application_GetInstalledApplications addr 0x256dbc8 size 0x68 virtual false final false
  static inline uint64_t ovr_Application_GetInstalledApplications();

  /// @brief Method ovr_Application_GetVersion addr 0x256dc30 size 0x68 virtual false final false
  static inline uint64_t ovr_Application_GetVersion();

  /// @brief Method ovr_Application_LaunchOtherApp addr 0x256dc98 size 0x84 virtual false final false
  static inline uint64_t ovr_Application_LaunchOtherApp(uint64_t appID, void* deeplink_options);

  /// @brief Method ovr_ApplicationLifecycle_GetRegisteredPIDs addr 0x256dd1c size 0x68 virtual false final false
  static inline uint64_t ovr_ApplicationLifecycle_GetRegisteredPIDs();

  /// @brief Method ovr_ApplicationLifecycle_GetSessionKey addr 0x256dd84 size 0x68 virtual false final false
  static inline uint64_t ovr_ApplicationLifecycle_GetSessionKey();

  /// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey addr 0x256ddec size 0x9c virtual false final false
  static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey(::StringW sessionKey);

  /// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey_Native addr 0x256de88 size 0x7c virtual false final false
  static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey_Native(void* sessionKey);

  /// @brief Method ovr_AssetFile_Delete addr 0x256df04 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFile_Delete(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DeleteById addr 0x256df80 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFile_DeleteById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DeleteByName addr 0x256dffc size 0x9c virtual false final false
  static inline uint64_t ovr_AssetFile_DeleteByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DeleteByName_Native addr 0x256e098 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFile_DeleteByName_Native(void* assetFileName);

  /// @brief Method ovr_AssetFile_Download addr 0x256e114 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFile_Download(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadById addr 0x256e190 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFile_DownloadById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadByName addr 0x256e20c size 0x9c virtual false final false
  static inline uint64_t ovr_AssetFile_DownloadByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DownloadByName_Native addr 0x256e2a8 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFile_DownloadByName_Native(void* assetFileName);

  /// @brief Method ovr_AssetFile_DownloadCancel addr 0x256e324 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFile_DownloadCancel(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadCancelById addr 0x256e3a0 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFile_DownloadCancelById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadCancelByName addr 0x256e41c size 0x9c virtual false final false
  static inline uint64_t ovr_AssetFile_DownloadCancelByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DownloadCancelByName_Native addr 0x256e4b8 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFile_DownloadCancelByName_Native(void* assetFileName);

  /// @brief Method ovr_AssetFile_GetList addr 0x256e534 size 0x68 virtual false final false
  static inline uint64_t ovr_AssetFile_GetList();

  /// @brief Method ovr_AssetFile_Status addr 0x256e59c size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFile_Status(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_StatusById addr 0x256e618 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFile_StatusById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_StatusByName addr 0x256e694 size 0x9c virtual false final false
  static inline uint64_t ovr_AssetFile_StatusByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_StatusByName_Native addr 0x256e730 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFile_StatusByName_Native(void* assetFileName);

  /// @brief Method ovr_Avatar_LaunchAvatarEditor addr 0x256e7ac size 0x7c virtual false final false
  static inline uint64_t ovr_Avatar_LaunchAvatarEditor(void* options);

  /// @brief Method ovr_Avatar_UpdateMetaData addr 0x256e828 size 0xc8 virtual false final false
  static inline uint64_t ovr_Avatar_UpdateMetaData(::StringW avatarMetaData, ::StringW imageFilePath);

  /// @brief Method ovr_Avatar_UpdateMetaData_Native addr 0x256e8f0 size 0x84 virtual false final false
  static inline uint64_t ovr_Avatar_UpdateMetaData_Native(void* avatarMetaData, void* imageFilePath);

  /// @brief Method ovr_Cal_FinalizeApplication addr 0x256e974 size 0xa4 virtual false final false
  static inline uint64_t ovr_Cal_FinalizeApplication(uint64_t groupingObject, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs, int32_t numUserIDs, uint64_t finalized_application_ID);

  /// @brief Method ovr_Cal_GetSuggestedApplications addr 0x256ea18 size 0x9c virtual false final false
  static inline uint64_t ovr_Cal_GetSuggestedApplications(uint64_t groupingObject, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs, int32_t numUserIDs);

  /// @brief Method ovr_Cal_ProposeApplication addr 0x256eab4 size 0xa4 virtual false final false
  static inline uint64_t ovr_Cal_ProposeApplication(uint64_t groupingObject, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs, int32_t numUserIDs, uint64_t proposed_application_ID);

  /// @brief Method ovr_Challenges_Create addr 0x256eb58 size 0xac virtual false final false
  static inline uint64_t ovr_Challenges_Create(::StringW leaderboardName, void* challengeOptions);

  /// @brief Method ovr_Challenges_Create_Native addr 0x256ec04 size 0x84 virtual false final false
  static inline uint64_t ovr_Challenges_Create_Native(void* leaderboardName, void* challengeOptions);

  /// @brief Method ovr_Challenges_DeclineInvite addr 0x256ec88 size 0x7c virtual false final false
  static inline uint64_t ovr_Challenges_DeclineInvite(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Delete addr 0x256ed04 size 0x7c virtual false final false
  static inline uint64_t ovr_Challenges_Delete(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Get addr 0x256ed80 size 0x7c virtual false final false
  static inline uint64_t ovr_Challenges_Get(uint64_t challengeID);

  /// @brief Method ovr_Challenges_GetEntries addr 0x256edfc size 0x9c virtual false final false
  static inline uint64_t ovr_Challenges_GetEntries(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Challenges_GetEntriesAfterRank addr 0x256ee98 size 0x94 virtual false final false
  static inline uint64_t ovr_Challenges_GetEntriesAfterRank(uint64_t challengeID, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Challenges_GetEntriesByIds addr 0x256ef2c size 0xb4 virtual false final false
  static inline uint64_t ovr_Challenges_GetEntriesByIds(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                        uint32_t userIDLength);

  /// @brief Method ovr_Challenges_GetList addr 0x256efe0 size 0x84 virtual false final false
  static inline uint64_t ovr_Challenges_GetList(void* challengeOptions, int32_t limit);

  /// @brief Method ovr_Challenges_GetNextChallenges addr 0x256f064 size 0x7c virtual false final false
  static inline uint64_t ovr_Challenges_GetNextChallenges(void* handle);

  /// @brief Method ovr_Challenges_GetNextEntries addr 0x256f0e0 size 0x7c virtual false final false
  static inline uint64_t ovr_Challenges_GetNextEntries(void* handle);

  /// @brief Method ovr_Challenges_GetPreviousChallenges addr 0x256f15c size 0x7c virtual false final false
  static inline uint64_t ovr_Challenges_GetPreviousChallenges(void* handle);

  /// @brief Method ovr_Challenges_GetPreviousEntries addr 0x256f1d8 size 0x7c virtual false final false
  static inline uint64_t ovr_Challenges_GetPreviousEntries(void* handle);

  /// @brief Method ovr_Challenges_Join addr 0x256f254 size 0x7c virtual false final false
  static inline uint64_t ovr_Challenges_Join(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Leave addr 0x256f2d0 size 0x7c virtual false final false
  static inline uint64_t ovr_Challenges_Leave(uint64_t challengeID);

  /// @brief Method ovr_Challenges_UpdateInfo addr 0x256f34c size 0x84 virtual false final false
  static inline uint64_t ovr_Challenges_UpdateInfo(uint64_t challengeID, void* challengeOptions);

  /// @brief Method ovr_CloudStorage_Delete addr 0x256f3d0 size 0xc8 virtual false final false
  static inline uint64_t ovr_CloudStorage_Delete(::StringW bucket, ::StringW key);

  /// @brief Method ovr_CloudStorage_Delete_Native addr 0x256f498 size 0x84 virtual false final false
  static inline uint64_t ovr_CloudStorage_Delete_Native(void* bucket, void* key);

  /// @brief Method ovr_CloudStorage_Load addr 0x256f51c size 0xc8 virtual false final false
  static inline uint64_t ovr_CloudStorage_Load(::StringW bucket, ::StringW key);

  /// @brief Method ovr_CloudStorage_Load_Native addr 0x256f5e4 size 0x84 virtual false final false
  static inline uint64_t ovr_CloudStorage_Load_Native(void* bucket, void* key);

  /// @brief Method ovr_CloudStorage_LoadBucketMetadata addr 0x256f668 size 0x9c virtual false final false
  static inline uint64_t ovr_CloudStorage_LoadBucketMetadata(::StringW bucket);

  /// @brief Method ovr_CloudStorage_LoadBucketMetadata_Native addr 0x256f704 size 0x7c virtual false final false
  static inline uint64_t ovr_CloudStorage_LoadBucketMetadata_Native(void* bucket);

  /// @brief Method ovr_CloudStorage_LoadConflictMetadata addr 0x256f780 size 0xc8 virtual false final false
  static inline uint64_t ovr_CloudStorage_LoadConflictMetadata(::StringW bucket, ::StringW key);

  /// @brief Method ovr_CloudStorage_LoadConflictMetadata_Native addr 0x256f848 size 0x84 virtual false final false
  static inline uint64_t ovr_CloudStorage_LoadConflictMetadata_Native(void* bucket, void* key);

  /// @brief Method ovr_CloudStorage_LoadHandle addr 0x256f8cc size 0x9c virtual false final false
  static inline uint64_t ovr_CloudStorage_LoadHandle(::StringW handle);

  /// @brief Method ovr_CloudStorage_LoadHandle_Native addr 0x256f968 size 0x7c virtual false final false
  static inline uint64_t ovr_CloudStorage_LoadHandle_Native(void* handle);

  /// @brief Method ovr_CloudStorage_LoadMetadata addr 0x256f9e4 size 0xc8 virtual false final false
  static inline uint64_t ovr_CloudStorage_LoadMetadata(::StringW bucket, ::StringW key);

  /// @brief Method ovr_CloudStorage_LoadMetadata_Native addr 0x256faac size 0x84 virtual false final false
  static inline uint64_t ovr_CloudStorage_LoadMetadata_Native(void* bucket, void* key);

  /// @brief Method ovr_CloudStorage_ResolveKeepLocal addr 0x256fb30 size 0xe8 virtual false final false
  static inline uint64_t ovr_CloudStorage_ResolveKeepLocal(::StringW bucket, ::StringW key, ::StringW remoteHandle);

  /// @brief Method ovr_CloudStorage_ResolveKeepLocal_Native addr 0x256fc18 size 0x94 virtual false final false
  static inline uint64_t ovr_CloudStorage_ResolveKeepLocal_Native(void* bucket, void* key, void* remoteHandle);

  /// @brief Method ovr_CloudStorage_ResolveKeepRemote addr 0x256fcac size 0xe8 virtual false final false
  static inline uint64_t ovr_CloudStorage_ResolveKeepRemote(::StringW bucket, ::StringW key, ::StringW remoteHandle);

  /// @brief Method ovr_CloudStorage_ResolveKeepRemote_Native addr 0x256fd94 size 0x94 virtual false final false
  static inline uint64_t ovr_CloudStorage_ResolveKeepRemote_Native(void* bucket, void* key, void* remoteHandle);

  /// @brief Method ovr_CloudStorage_Save addr 0x256fe28 size 0x110 virtual false final false
  static inline uint64_t ovr_CloudStorage_Save(::StringW bucket, ::StringW key, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint32_t dataSize, int64_t counter, ::StringW extraData);

  /// @brief Method ovr_CloudStorage_Save_Native addr 0x256ff38 size 0xbc virtual false final false
  static inline uint64_t ovr_CloudStorage_Save_Native(void* bucket, void* key, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint32_t dataSize, int64_t counter, void* extraData);

  /// @brief Method ovr_CloudStorage2_GetUserDirectoryPath addr 0x256fff4 size 0x68 virtual false final false
  static inline uint64_t ovr_CloudStorage2_GetUserDirectoryPath();

  /// @brief Method ovr_Colocation_GetCurrentMapUuid addr 0x257005c size 0x68 virtual false final false
  static inline uint64_t ovr_Colocation_GetCurrentMapUuid();

  /// @brief Method ovr_Colocation_RequestMap addr 0x25700c4 size 0x9c virtual false final false
  static inline uint64_t ovr_Colocation_RequestMap(::StringW uuid);

  /// @brief Method ovr_Colocation_RequestMap_Native addr 0x2570160 size 0x7c virtual false final false
  static inline uint64_t ovr_Colocation_RequestMap_Native(void* uuid);

  /// @brief Method ovr_Colocation_ShareMap addr 0x25701dc size 0x9c virtual false final false
  static inline uint64_t ovr_Colocation_ShareMap(::StringW uuid);

  /// @brief Method ovr_Colocation_ShareMap_Native addr 0x2570278 size 0x7c virtual false final false
  static inline uint64_t ovr_Colocation_ShareMap_Native(void* uuid);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken addr 0x25702f4 size 0x9c virtual false final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken(::StringW challenge_nonce);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken_Native addr 0x2570390 size 0x7c virtual false final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken_Native(void* challenge_nonce);

  /// @brief Method ovr_Entitlement_GetIsViewerEntitled addr 0x257040c size 0x68 virtual false final false
  static inline uint64_t ovr_Entitlement_GetIsViewerEntitled();

  /// @brief Method ovr_GraphAPI_Get addr 0x2570474 size 0x9c virtual false final false
  static inline uint64_t ovr_GraphAPI_Get(::StringW url);

  /// @brief Method ovr_GraphAPI_Get_Native addr 0x2570510 size 0x7c virtual false final false
  static inline uint64_t ovr_GraphAPI_Get_Native(void* url);

  /// @brief Method ovr_GraphAPI_Post addr 0x257058c size 0x9c virtual false final false
  static inline uint64_t ovr_GraphAPI_Post(::StringW url);

  /// @brief Method ovr_GraphAPI_Post_Native addr 0x2570628 size 0x78 virtual false final false
  static inline uint64_t ovr_GraphAPI_Post_Native(void* url);

  /// @brief Method ovr_GroupPresence_Clear addr 0x25706a0 size 0x68 virtual false final false
  static inline uint64_t ovr_GroupPresence_Clear();

  /// @brief Method ovr_GroupPresence_GetInvitableUsers addr 0x2570708 size 0x7c virtual false final false
  static inline uint64_t ovr_GroupPresence_GetInvitableUsers(void* options);

  /// @brief Method ovr_GroupPresence_GetSentInvites addr 0x2570784 size 0x68 virtual false final false
  static inline uint64_t ovr_GroupPresence_GetSentInvites();

  /// @brief Method ovr_GroupPresence_LaunchInvitePanel addr 0x25707ec size 0x7c virtual false final false
  static inline uint64_t ovr_GroupPresence_LaunchInvitePanel(void* options);

  /// @brief Method ovr_GroupPresence_LaunchMultiplayerErrorDialog addr 0x2570868 size 0x7c virtual false final false
  static inline uint64_t ovr_GroupPresence_LaunchMultiplayerErrorDialog(void* options);

  /// @brief Method ovr_GroupPresence_LaunchRejoinDialog addr 0x25708e4 size 0xe8 virtual false final false
  static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog(::StringW lobby_session_id, ::StringW match_session_id, ::StringW destination_api_name);

  /// @brief Method ovr_GroupPresence_LaunchRejoinDialog_Native addr 0x25709cc size 0x94 virtual false final false
  static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog_Native(void* lobby_session_id, void* match_session_id, void* destination_api_name);

  /// @brief Method ovr_GroupPresence_LaunchRosterPanel addr 0x2570a60 size 0x7c virtual false final false
  static inline uint64_t ovr_GroupPresence_LaunchRosterPanel(void* options);

  /// @brief Method ovr_GroupPresence_SendInvites addr 0x2570adc size 0x8c virtual false final false
  static inline uint64_t ovr_GroupPresence_SendInvites(::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs, uint32_t userIDLength);

  /// @brief Method ovr_GroupPresence_Set addr 0x2570b68 size 0x7c virtual false final false
  static inline uint64_t ovr_GroupPresence_Set(void* groupPresenceOptions);

  /// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride addr 0x2570be4 size 0x9c virtual false final false
  static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride(::StringW deeplink_message);

  /// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride_Native addr 0x2570c80 size 0x7c virtual false final false
  static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride_Native(void* deeplink_message);

  /// @brief Method ovr_GroupPresence_SetDestination addr 0x2570cfc size 0x9c virtual false final false
  static inline uint64_t ovr_GroupPresence_SetDestination(::StringW api_name);

  /// @brief Method ovr_GroupPresence_SetDestination_Native addr 0x2570d98 size 0x7c virtual false final false
  static inline uint64_t ovr_GroupPresence_SetDestination_Native(void* api_name);

  /// @brief Method ovr_GroupPresence_SetIsJoinable addr 0x2570e14 size 0x7c virtual false final false
  static inline uint64_t ovr_GroupPresence_SetIsJoinable(bool is_joinable);

  /// @brief Method ovr_GroupPresence_SetLobbySession addr 0x2570e90 size 0x9c virtual false final false
  static inline uint64_t ovr_GroupPresence_SetLobbySession(::StringW id);

  /// @brief Method ovr_GroupPresence_SetLobbySession_Native addr 0x2570f2c size 0x7c virtual false final false
  static inline uint64_t ovr_GroupPresence_SetLobbySession_Native(void* id);

  /// @brief Method ovr_GroupPresence_SetMatchSession addr 0x2570fa8 size 0x9c virtual false final false
  static inline uint64_t ovr_GroupPresence_SetMatchSession(::StringW id);

  /// @brief Method ovr_GroupPresence_SetMatchSession_Native addr 0x2571044 size 0x7c virtual false final false
  static inline uint64_t ovr_GroupPresence_SetMatchSession_Native(void* id);

  /// @brief Method ovr_HTTP_Get addr 0x25710c0 size 0x9c virtual false final false
  static inline uint64_t ovr_HTTP_Get(::StringW url);

  /// @brief Method ovr_HTTP_Get_Native addr 0x257115c size 0x7c virtual false final false
  static inline uint64_t ovr_HTTP_Get_Native(void* url);

  /// @brief Method ovr_HTTP_GetToFile addr 0x25711d8 size 0xc8 virtual false final false
  static inline uint64_t ovr_HTTP_GetToFile(::StringW url, ::StringW diskFile);

  /// @brief Method ovr_HTTP_GetToFile_Native addr 0x25712a0 size 0x84 virtual false final false
  static inline uint64_t ovr_HTTP_GetToFile_Native(void* url, void* diskFile);

  /// @brief Method ovr_HTTP_MultiPartPost addr 0x2571324 size 0x154 virtual false final false
  static inline uint64_t ovr_HTTP_MultiPartPost(::StringW url, ::StringW filepath_param_name, ::StringW filepath, ::StringW access_token,
                                                ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> post_params);

  /// @brief Method ovr_HTTP_MultiPartPost_Native addr 0x2571478 size 0x1d8 virtual false final false
  static inline uint64_t ovr_HTTP_MultiPartPost_Native(void* url, void* filepath_param_name, void* filepath, void* access_token,
                                                       ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> post_params, void* numItems);

  /// @brief Method ovr_HTTP_Post addr 0x2571650 size 0x9c virtual false final false
  static inline uint64_t ovr_HTTP_Post(::StringW url);

  /// @brief Method ovr_HTTP_Post_Native addr 0x25716ec size 0x7c virtual false final false
  static inline uint64_t ovr_HTTP_Post_Native(void* url);

  /// @brief Method ovr_IAP_ConsumePurchase addr 0x2571768 size 0x9c virtual false final false
  static inline uint64_t ovr_IAP_ConsumePurchase(::StringW sku);

  /// @brief Method ovr_IAP_ConsumePurchase_Native addr 0x2571804 size 0x7c virtual false final false
  static inline uint64_t ovr_IAP_ConsumePurchase_Native(void* sku);

  /// @brief Method ovr_IAP_GetProductsBySKU addr 0x2571880 size 0x148 virtual false final false
  static inline uint64_t ovr_IAP_GetProductsBySKU(::ArrayW<::StringW, ::Array<::StringW>*> skus, int32_t count);

  /// @brief Method ovr_IAP_GetViewerPurchases addr 0x25719c8 size 0x68 virtual false final false
  static inline uint64_t ovr_IAP_GetViewerPurchases();

  /// @brief Method ovr_IAP_GetViewerPurchasesDurableCache addr 0x2571a30 size 0x68 virtual false final false
  static inline uint64_t ovr_IAP_GetViewerPurchasesDurableCache();

  /// @brief Method ovr_IAP_LaunchCheckoutFlow addr 0x2571a98 size 0x9c virtual false final false
  static inline uint64_t ovr_IAP_LaunchCheckoutFlow(::StringW sku);

  /// @brief Method ovr_IAP_LaunchCheckoutFlow_Native addr 0x2571b34 size 0x7c virtual false final false
  static inline uint64_t ovr_IAP_LaunchCheckoutFlow_Native(void* sku);

  /// @brief Method ovr_LanguagePack_GetCurrent addr 0x2571bb0 size 0x68 virtual false final false
  static inline uint64_t ovr_LanguagePack_GetCurrent();

  /// @brief Method ovr_LanguagePack_SetCurrent addr 0x2571c18 size 0x9c virtual false final false
  static inline uint64_t ovr_LanguagePack_SetCurrent(::StringW tag);

  /// @brief Method ovr_LanguagePack_SetCurrent_Native addr 0x2571cb4 size 0x7c virtual false final false
  static inline uint64_t ovr_LanguagePack_SetCurrent_Native(void* tag);

  /// @brief Method ovr_Leaderboard_Get addr 0x2571d30 size 0x9c virtual false final false
  static inline uint64_t ovr_Leaderboard_Get(::StringW leaderboardName);

  /// @brief Method ovr_Leaderboard_Get_Native addr 0x2571dcc size 0x7c virtual false final false
  static inline uint64_t ovr_Leaderboard_Get_Native(void* leaderboardName);

  /// @brief Method ovr_Leaderboard_GetEntries addr 0x2571e48 size 0xc4 virtual false final false
  static inline uint64_t ovr_Leaderboard_GetEntries(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Leaderboard_GetEntries_Native addr 0x2571f0c size 0x9c virtual false final false
  static inline uint64_t ovr_Leaderboard_GetEntries_Native(void* leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Leaderboard_GetEntriesAfterRank addr 0x2571fa8 size 0xb4 virtual false final false
  static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank(::StringW leaderboardName, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Leaderboard_GetEntriesAfterRank_Native addr 0x257205c size 0x94 virtual false final false
  static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank_Native(void* leaderboardName, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Leaderboard_GetEntriesByIds addr 0x25720f0 size 0xcc virtual false final false
  static inline uint64_t ovr_Leaderboard_GetEntriesByIds(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                         uint32_t userIDLength);

  /// @brief Method ovr_Leaderboard_GetEntriesByIds_Native addr 0x25721bc size 0xb4 virtual false final false
  static inline uint64_t ovr_Leaderboard_GetEntriesByIds_Native(void* leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                                uint32_t userIDLength);

  /// @brief Method ovr_Leaderboard_GetNextEntries addr 0x2572270 size 0x7c virtual false final false
  static inline uint64_t ovr_Leaderboard_GetNextEntries(void* handle);

  /// @brief Method ovr_Leaderboard_GetPreviousEntries addr 0x25722ec size 0x7c virtual false final false
  static inline uint64_t ovr_Leaderboard_GetPreviousEntries(void* handle);

  /// @brief Method ovr_Leaderboard_WriteEntry addr 0x2572368 size 0xcc virtual false final false
  static inline uint64_t ovr_Leaderboard_WriteEntry(::StringW leaderboardName, int64_t score, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData, uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntry_Native addr 0x2572434 size 0xb4 virtual false final false
  static inline uint64_t ovr_Leaderboard_WriteEntry_Native(void* leaderboardName, int64_t score, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData, uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric addr 0x25724e8 size 0xdc virtual false final false
  static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric(::StringW leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData,
                                                                           uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native addr 0x25725c4 size 0xbc virtual false final false
  static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native(void* leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData,
                                                                                  uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Livestreaming_IsAllowedForApplication addr 0x2572680 size 0x9c virtual false final false
  static inline uint64_t ovr_Livestreaming_IsAllowedForApplication(::StringW packageName);

  /// @brief Method ovr_Livestreaming_IsAllowedForApplication_Native addr 0x257271c size 0x7c virtual false final false
  static inline uint64_t ovr_Livestreaming_IsAllowedForApplication_Native(void* packageName);

  /// @brief Method ovr_Livestreaming_StartPartyStream addr 0x2572798 size 0x68 virtual false final false
  static inline uint64_t ovr_Livestreaming_StartPartyStream();

  /// @brief Method ovr_Livestreaming_StartStream addr 0x2572800 size 0x84 virtual false final false
  static inline uint64_t ovr_Livestreaming_StartStream(::Oculus::Platform::LivestreamingAudience audience, ::Oculus::Platform::LivestreamingMicrophoneStatus micStatus);

  /// @brief Method ovr_Livestreaming_StopPartyStream addr 0x2572884 size 0x68 virtual false final false
  static inline uint64_t ovr_Livestreaming_StopPartyStream();

  /// @brief Method ovr_Livestreaming_StopStream addr 0x25728ec size 0x68 virtual false final false
  static inline uint64_t ovr_Livestreaming_StopStream();

  /// @brief Method ovr_Livestreaming_UpdateMicStatus addr 0x2572954 size 0x7c virtual false final false
  static inline uint64_t ovr_Livestreaming_UpdateMicStatus(::Oculus::Platform::LivestreamingMicrophoneStatus micStatus);

  /// @brief Method ovr_Matchmaking_Browse addr 0x25729d0 size 0xac virtual false final false
  static inline uint64_t ovr_Matchmaking_Browse(::StringW pool, void* customQueryData);

  /// @brief Method ovr_Matchmaking_Browse_Native addr 0x2572a7c size 0x84 virtual false final false
  static inline uint64_t ovr_Matchmaking_Browse_Native(void* pool, void* customQueryData);

  /// @brief Method ovr_Matchmaking_Browse2 addr 0x2572b00 size 0xac virtual false final false
  static inline uint64_t ovr_Matchmaking_Browse2(::StringW pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_Browse2_Native addr 0x2572bac size 0x84 virtual false final false
  static inline uint64_t ovr_Matchmaking_Browse2_Native(void* pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_Cancel addr 0x2572c30 size 0xc8 virtual false final false
  static inline uint64_t ovr_Matchmaking_Cancel(::StringW pool, ::StringW requestHash);

  /// @brief Method ovr_Matchmaking_Cancel_Native addr 0x2572cf8 size 0x84 virtual false final false
  static inline uint64_t ovr_Matchmaking_Cancel_Native(void* pool, void* requestHash);

  /// @brief Method ovr_Matchmaking_Cancel2 addr 0x2572d7c size 0x68 virtual false final false
  static inline uint64_t ovr_Matchmaking_Cancel2();

  /// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom addr 0x2572de4 size 0xc4 virtual false final false
  static inline uint64_t ovr_Matchmaking_CreateAndEnqueueRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates, void* customQueryData);

  /// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom_Native addr 0x2572ea8 size 0x9c virtual false final false
  static inline uint64_t ovr_Matchmaking_CreateAndEnqueueRoom_Native(void* pool, uint32_t maxUsers, bool subscribeToUpdates, void* customQueryData);

  /// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom2 addr 0x2572f44 size 0xac virtual false final false
  static inline uint64_t ovr_Matchmaking_CreateAndEnqueueRoom2(::StringW pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom2_Native addr 0x2572ff0 size 0x84 virtual false final false
  static inline uint64_t ovr_Matchmaking_CreateAndEnqueueRoom2_Native(void* pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_CreateRoom addr 0x2573074 size 0xb4 virtual false final false
  static inline uint64_t ovr_Matchmaking_CreateRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates);

  /// @brief Method ovr_Matchmaking_CreateRoom_Native addr 0x2573128 size 0x94 virtual false final false
  static inline uint64_t ovr_Matchmaking_CreateRoom_Native(void* pool, uint32_t maxUsers, bool subscribeToUpdates);

  /// @brief Method ovr_Matchmaking_CreateRoom2 addr 0x25731bc size 0xac virtual false final false
  static inline uint64_t ovr_Matchmaking_CreateRoom2(::StringW pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_CreateRoom2_Native addr 0x2573268 size 0x84 virtual false final false
  static inline uint64_t ovr_Matchmaking_CreateRoom2_Native(void* pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_Enqueue addr 0x25732ec size 0xac virtual false final false
  static inline uint64_t ovr_Matchmaking_Enqueue(::StringW pool, void* customQueryData);

  /// @brief Method ovr_Matchmaking_Enqueue_Native addr 0x2573398 size 0x84 virtual false final false
  static inline uint64_t ovr_Matchmaking_Enqueue_Native(void* pool, void* customQueryData);

  /// @brief Method ovr_Matchmaking_Enqueue2 addr 0x257341c size 0xac virtual false final false
  static inline uint64_t ovr_Matchmaking_Enqueue2(::StringW pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_Enqueue2_Native addr 0x25734c8 size 0x84 virtual false final false
  static inline uint64_t ovr_Matchmaking_Enqueue2_Native(void* pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_EnqueueRoom addr 0x257354c size 0x84 virtual false final false
  static inline uint64_t ovr_Matchmaking_EnqueueRoom(uint64_t roomID, void* customQueryData);

  /// @brief Method ovr_Matchmaking_EnqueueRoom2 addr 0x25735d0 size 0x84 virtual false final false
  static inline uint64_t ovr_Matchmaking_EnqueueRoom2(uint64_t roomID, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_GetAdminSnapshot addr 0x2573654 size 0x68 virtual false final false
  static inline uint64_t ovr_Matchmaking_GetAdminSnapshot();

  /// @brief Method ovr_Matchmaking_GetStats addr 0x25736bc size 0xb4 virtual false final false
  static inline uint64_t ovr_Matchmaking_GetStats(::StringW pool, uint32_t maxLevel, ::Oculus::Platform::MatchmakingStatApproach approach);

  /// @brief Method ovr_Matchmaking_GetStats_Native addr 0x2573770 size 0x94 virtual false final false
  static inline uint64_t ovr_Matchmaking_GetStats_Native(void* pool, uint32_t maxLevel, ::Oculus::Platform::MatchmakingStatApproach approach);

  /// @brief Method ovr_Matchmaking_JoinRoom addr 0x2573804 size 0x84 virtual false final false
  static inline uint64_t ovr_Matchmaking_JoinRoom(uint64_t roomID, bool subscribeToUpdates);

  /// @brief Method ovr_Matchmaking_ReportResultInsecure addr 0x2573888 size 0xa0 virtual false final false
  static inline uint64_t ovr_Matchmaking_ReportResultInsecure(uint64_t roomID, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> data);

  /// @brief Method ovr_Matchmaking_ReportResultInsecure_Native addr 0x2573928 size 0x1a4 virtual false final false
  static inline uint64_t ovr_Matchmaking_ReportResultInsecure_Native(uint64_t roomID, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> data,
                                                                     void* numItems);

  /// @brief Method ovr_Matchmaking_StartMatch addr 0x2573acc size 0x7c virtual false final false
  static inline uint64_t ovr_Matchmaking_StartMatch(uint64_t roomID);

  /// @brief Method ovr_Media_ShareToFacebook addr 0x2573b48 size 0xd0 virtual false final false
  static inline uint64_t ovr_Media_ShareToFacebook(::StringW postTextSuggestion, ::StringW filePath, ::Oculus::Platform::MediaContentType contentType);

  /// @brief Method ovr_Media_ShareToFacebook_Native addr 0x2573c18 size 0x94 virtual false final false
  static inline uint64_t ovr_Media_ShareToFacebook_Native(void* postTextSuggestion, void* filePath, ::Oculus::Platform::MediaContentType contentType);

  /// @brief Method ovr_NetSync_Connect addr 0x2573cac size 0x7c virtual false final false
  static inline uint64_t ovr_NetSync_Connect(void* connect_options);

  /// @brief Method ovr_NetSync_Disconnect addr 0x2573d28 size 0x7c virtual false final false
  static inline uint64_t ovr_NetSync_Disconnect(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetSessions addr 0x2573da4 size 0x7c virtual false final false
  static inline uint64_t ovr_NetSync_GetSessions(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetVoipAttenuation addr 0x2573e20 size 0x7c virtual false final false
  static inline uint64_t ovr_NetSync_GetVoipAttenuation(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetVoipAttenuationDefault addr 0x2573e9c size 0x68 virtual false final false
  static inline uint64_t ovr_NetSync_GetVoipAttenuationDefault();

  /// @brief Method ovr_NetSync_SetVoipAttenuation addr 0x2573f04 size 0xac virtual false final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuation(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels, void* count);

  /// @brief Method ovr_NetSync_SetVoipAttenuationModel addr 0x2573fb0 size 0xd0 virtual false final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuationModel(int64_t connection_id, ::StringW name, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels,
                                                             void* count);

  /// @brief Method ovr_NetSync_SetVoipAttenuationModel_Native addr 0x2574080 size 0xbc virtual false final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuationModel_Native(int64_t connection_id, void* name, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels,
                                                                    void* count);

  /// @brief Method ovr_NetSync_SetVoipChannelCfg addr 0x257413c size 0xe0 virtual false final false
  static inline uint64_t ovr_NetSync_SetVoipChannelCfg(int64_t connection_id, ::StringW channel_name, ::StringW attnmodel, bool disable_spatialization);

  /// @brief Method ovr_NetSync_SetVoipChannelCfg_Native addr 0x257421c size 0x9c virtual false final false
  static inline uint64_t ovr_NetSync_SetVoipChannelCfg_Native(int64_t connection_id, void* channel_name, void* attnmodel, bool disable_spatialization);

  /// @brief Method ovr_NetSync_SetVoipGroup addr 0x25742b8 size 0xb0 virtual false final false
  static inline uint64_t ovr_NetSync_SetVoipGroup(int64_t connection_id, ::StringW group_id);

  /// @brief Method ovr_NetSync_SetVoipGroup_Native addr 0x2574368 size 0x84 virtual false final false
  static inline uint64_t ovr_NetSync_SetVoipGroup_Native(int64_t connection_id, void* group_id);

  /// @brief Method ovr_NetSync_SetVoipListentoChannels addr 0x25743ec size 0x160 virtual false final false
  static inline uint64_t ovr_NetSync_SetVoipListentoChannels(int64_t connection_id, ::ArrayW<::StringW, ::Array<::StringW>*> listento_channels, void* count);

  /// @brief Method ovr_NetSync_SetVoipMicSource addr 0x257454c size 0x84 virtual false final false
  static inline uint64_t ovr_NetSync_SetVoipMicSource(int64_t connection_id, ::Oculus::Platform::NetSyncVoipMicSource mic_source);

  /// @brief Method ovr_NetSync_SetVoipSessionMuted addr 0x25745d0 size 0x94 virtual false final false
  static inline uint64_t ovr_NetSync_SetVoipSessionMuted(int64_t connection_id, uint64_t session_id, bool muted);

  /// @brief Method ovr_NetSync_SetVoipSpeaktoChannels addr 0x2574664 size 0x160 virtual false final false
  static inline uint64_t ovr_NetSync_SetVoipSpeaktoChannels(int64_t connection_id, ::ArrayW<::StringW, ::Array<::StringW>*> speakto_channels, void* count);

  /// @brief Method ovr_NetSync_SetVoipStreamMode addr 0x25747c4 size 0x94 virtual false final false
  static inline uint64_t ovr_NetSync_SetVoipStreamMode(int64_t connection_id, uint64_t sessionId, ::Oculus::Platform::NetSyncVoipStreamMode streamMode);

  /// @brief Method ovr_Notification_GetRoomInvites addr 0x2574858 size 0x68 virtual false final false
  static inline uint64_t ovr_Notification_GetRoomInvites();

  /// @brief Method ovr_Notification_MarkAsRead addr 0x25748c0 size 0x7c virtual false final false
  static inline uint64_t ovr_Notification_MarkAsRead(uint64_t notificationID);

  /// @brief Method ovr_Party_Create addr 0x257493c size 0x68 virtual false final false
  static inline uint64_t ovr_Party_Create();

  /// @brief Method ovr_Party_GatherInApplication addr 0x25749a4 size 0x84 virtual false final false
  static inline uint64_t ovr_Party_GatherInApplication(uint64_t partyID, uint64_t appID);

  /// @brief Method ovr_Party_Get addr 0x2574a28 size 0x7c virtual false final false
  static inline uint64_t ovr_Party_Get(uint64_t partyID);

  /// @brief Method ovr_Party_GetCurrent addr 0x2574aa4 size 0x68 virtual false final false
  static inline uint64_t ovr_Party_GetCurrent();

  /// @brief Method ovr_Party_GetCurrentForUser addr 0x2574b0c size 0x7c virtual false final false
  static inline uint64_t ovr_Party_GetCurrentForUser(uint64_t userID);

  /// @brief Method ovr_Party_Invite addr 0x2574b88 size 0x80 virtual false final false
  static inline uint64_t ovr_Party_Invite(uint64_t partyID, uint64_t userID);

  /// @brief Method ovr_Party_Join addr 0x2574c08 size 0x7c virtual false final false
  static inline uint64_t ovr_Party_Join(uint64_t partyID);

  /// @brief Method ovr_Party_Leave addr 0x2574c84 size 0x7c virtual false final false
  static inline uint64_t ovr_Party_Leave(uint64_t partyID);

  /// @brief Method ovr_RichPresence_Clear addr 0x2574d00 size 0x68 virtual false final false
  static inline uint64_t ovr_RichPresence_Clear();

  /// @brief Method ovr_RichPresence_GetDestinations addr 0x2574d68 size 0x68 virtual false final false
  static inline uint64_t ovr_RichPresence_GetDestinations();

  /// @brief Method ovr_RichPresence_Set addr 0x2574dd0 size 0x7c virtual false final false
  static inline uint64_t ovr_RichPresence_Set(void* richPresenceOptions);

  /// @brief Method ovr_RichPresence_SetDestination addr 0x2574e4c size 0x9c virtual false final false
  static inline uint64_t ovr_RichPresence_SetDestination(::StringW api_name);

  /// @brief Method ovr_RichPresence_SetDestination_Native addr 0x2574ee8 size 0x7c virtual false final false
  static inline uint64_t ovr_RichPresence_SetDestination_Native(void* api_name);

  /// @brief Method ovr_RichPresence_SetIsJoinable addr 0x2574f64 size 0x7c virtual false final false
  static inline uint64_t ovr_RichPresence_SetIsJoinable(bool is_joinable);

  /// @brief Method ovr_RichPresence_SetLobbySession addr 0x2574fe0 size 0x9c virtual false final false
  static inline uint64_t ovr_RichPresence_SetLobbySession(::StringW id);

  /// @brief Method ovr_RichPresence_SetLobbySession_Native addr 0x257507c size 0x7c virtual false final false
  static inline uint64_t ovr_RichPresence_SetLobbySession_Native(void* id);

  /// @brief Method ovr_RichPresence_SetMatchSession addr 0x25750f8 size 0x9c virtual false final false
  static inline uint64_t ovr_RichPresence_SetMatchSession(::StringW id);

  /// @brief Method ovr_RichPresence_SetMatchSession_Native addr 0x2575194 size 0x7c virtual false final false
  static inline uint64_t ovr_RichPresence_SetMatchSession_Native(void* id);

  /// @brief Method ovr_Room_CreateAndJoinPrivate addr 0x2575210 size 0x94 virtual false final false
  static inline uint64_t ovr_Room_CreateAndJoinPrivate(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, bool subscribeToUpdates);

  /// @brief Method ovr_Room_CreateAndJoinPrivate2 addr 0x25752a4 size 0x94 virtual false final false
  static inline uint64_t ovr_Room_CreateAndJoinPrivate2(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, void* roomOptions);

  /// @brief Method ovr_Room_Get addr 0x2575338 size 0x7c virtual false final false
  static inline uint64_t ovr_Room_Get(uint64_t roomID);

  /// @brief Method ovr_Room_GetCurrent addr 0x25753b4 size 0x68 virtual false final false
  static inline uint64_t ovr_Room_GetCurrent();

  /// @brief Method ovr_Room_GetCurrentForUser addr 0x257541c size 0x7c virtual false final false
  static inline uint64_t ovr_Room_GetCurrentForUser(uint64_t userID);

  /// @brief Method ovr_Room_GetInvitableUsers addr 0x2575498 size 0x68 virtual false final false
  static inline uint64_t ovr_Room_GetInvitableUsers();

  /// @brief Method ovr_Room_GetInvitableUsers2 addr 0x2575500 size 0x7c virtual false final false
  static inline uint64_t ovr_Room_GetInvitableUsers2(void* roomOptions);

  /// @brief Method ovr_Room_GetModeratedRooms addr 0x257557c size 0x68 virtual false final false
  static inline uint64_t ovr_Room_GetModeratedRooms();

  /// @brief Method ovr_Room_GetSocialRooms addr 0x25755e4 size 0x7c virtual false final false
  static inline uint64_t ovr_Room_GetSocialRooms(uint64_t appID);

  /// @brief Method ovr_Room_InviteUser addr 0x2575660 size 0xb0 virtual false final false
  static inline uint64_t ovr_Room_InviteUser(uint64_t roomID, ::StringW inviteToken);

  /// @brief Method ovr_Room_InviteUser_Native addr 0x2575710 size 0x84 virtual false final false
  static inline uint64_t ovr_Room_InviteUser_Native(uint64_t roomID, void* inviteToken);

  /// @brief Method ovr_Room_Join addr 0x2575794 size 0x84 virtual false final false
  static inline uint64_t ovr_Room_Join(uint64_t roomID, bool subscribeToUpdates);

  /// @brief Method ovr_Room_Join2 addr 0x2575818 size 0x84 virtual false final false
  static inline uint64_t ovr_Room_Join2(uint64_t roomID, void* roomOptions);

  /// @brief Method ovr_Room_KickUser addr 0x257589c size 0x90 virtual false final false
  static inline uint64_t ovr_Room_KickUser(uint64_t roomID, uint64_t userID, int32_t kickDurationSeconds);

  /// @brief Method ovr_Room_LaunchInvitableUserFlow addr 0x257592c size 0x7c virtual false final false
  static inline uint64_t ovr_Room_LaunchInvitableUserFlow(uint64_t roomID);

  /// @brief Method ovr_Room_Leave addr 0x25759a8 size 0x7c virtual false final false
  static inline uint64_t ovr_Room_Leave(uint64_t roomID);

  /// @brief Method ovr_Room_SetDescription addr 0x2575a24 size 0xb0 virtual false final false
  static inline uint64_t ovr_Room_SetDescription(uint64_t roomID, ::StringW description);

  /// @brief Method ovr_Room_SetDescription_Native addr 0x2575ad4 size 0x84 virtual false final false
  static inline uint64_t ovr_Room_SetDescription_Native(uint64_t roomID, void* description);

  /// @brief Method ovr_Room_UpdateDataStore addr 0x2575b58 size 0xa0 virtual false final false
  static inline uint64_t ovr_Room_UpdateDataStore(uint64_t roomID, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> data);

  /// @brief Method ovr_Room_UpdateDataStore_Native addr 0x2575bf8 size 0x1a0 virtual false final false
  static inline uint64_t ovr_Room_UpdateDataStore_Native(uint64_t roomID, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> data,
                                                         void* numItems);

  /// @brief Method ovr_Room_UpdateMembershipLockStatus addr 0x2575d98 size 0x84 virtual false final false
  static inline uint64_t ovr_Room_UpdateMembershipLockStatus(uint64_t roomID, ::Oculus::Platform::RoomMembershipLockStatus membershipLockStatus);

  /// @brief Method ovr_Room_UpdateOwner addr 0x2575e1c size 0x84 virtual false final false
  static inline uint64_t ovr_Room_UpdateOwner(uint64_t roomID, uint64_t userID);

  /// @brief Method ovr_Room_UpdatePrivateRoomJoinPolicy addr 0x2575ea0 size 0x84 virtual false final false
  static inline uint64_t ovr_Room_UpdatePrivateRoomJoinPolicy(uint64_t roomID, ::Oculus::Platform::RoomJoinPolicy newJoinPolicy);

  /// @brief Method ovr_User_CancelRecordingForReportFlow addr 0x2575f24 size 0x9c virtual false final false
  static inline uint64_t ovr_User_CancelRecordingForReportFlow(::StringW recordingUUID);

  /// @brief Method ovr_User_CancelRecordingForReportFlow_Native addr 0x2575fc0 size 0x7c virtual false final false
  static inline uint64_t ovr_User_CancelRecordingForReportFlow_Native(void* recordingUUID);

  /// @brief Method ovr_User_Get addr 0x257603c size 0x7c virtual false final false
  static inline uint64_t ovr_User_Get(uint64_t userID);

  /// @brief Method ovr_User_GetAccessToken addr 0x25760b8 size 0x68 virtual false final false
  static inline uint64_t ovr_User_GetAccessToken();

  /// @brief Method ovr_User_GetBlockedUsers addr 0x2576120 size 0x68 virtual false final false
  static inline uint64_t ovr_User_GetBlockedUsers();

  /// @brief Method ovr_User_GetLinkedAccounts addr 0x2576188 size 0x7c virtual false final false
  static inline uint64_t ovr_User_GetLinkedAccounts(void* userOptions);

  /// @brief Method ovr_User_GetLoggedInUser addr 0x2576204 size 0x68 virtual false final false
  static inline uint64_t ovr_User_GetLoggedInUser();

  /// @brief Method ovr_User_GetLoggedInUserFriends addr 0x257626c size 0x68 virtual false final false
  static inline uint64_t ovr_User_GetLoggedInUserFriends();

  /// @brief Method ovr_User_GetLoggedInUserFriendsAndRooms addr 0x25762d4 size 0x68 virtual false final false
  static inline uint64_t ovr_User_GetLoggedInUserFriendsAndRooms();

  /// @brief Method ovr_User_GetLoggedInUserRecentlyMetUsersAndRooms addr 0x257633c size 0x7c virtual false final false
  static inline uint64_t ovr_User_GetLoggedInUserRecentlyMetUsersAndRooms(void* userOptions);

  /// @brief Method ovr_User_GetOrgScopedID addr 0x25763b8 size 0x7c virtual false final false
  static inline uint64_t ovr_User_GetOrgScopedID(uint64_t userID);

  /// @brief Method ovr_User_GetSdkAccounts addr 0x2576434 size 0x68 virtual false final false
  static inline uint64_t ovr_User_GetSdkAccounts();

  /// @brief Method ovr_User_GetUserCapabilities addr 0x257649c size 0x68 virtual false final false
  static inline uint64_t ovr_User_GetUserCapabilities();

  /// @brief Method ovr_User_GetUserProof addr 0x2576504 size 0x68 virtual false final false
  static inline uint64_t ovr_User_GetUserProof();

  /// @brief Method ovr_User_LaunchBlockFlow addr 0x257656c size 0x7c virtual false final false
  static inline uint64_t ovr_User_LaunchBlockFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchFriendRequestFlow addr 0x25765e8 size 0x7c virtual false final false
  static inline uint64_t ovr_User_LaunchFriendRequestFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchProfile addr 0x2576664 size 0x7c virtual false final false
  static inline uint64_t ovr_User_LaunchProfile(uint64_t userID);

  /// @brief Method ovr_User_LaunchReportFlow addr 0x25766e0 size 0x7c virtual false final false
  static inline uint64_t ovr_User_LaunchReportFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchReportFlow2 addr 0x257675c size 0x84 virtual false final false
  static inline uint64_t ovr_User_LaunchReportFlow2(uint64_t optionalUserID, void* abuseReportOptions);

  /// @brief Method ovr_User_LaunchUnblockFlow addr 0x25767e0 size 0x7c virtual false final false
  static inline uint64_t ovr_User_LaunchUnblockFlow(uint64_t userID);

  /// @brief Method ovr_User_NewEntitledTestUser addr 0x257685c size 0x68 virtual false final false
  static inline uint64_t ovr_User_NewEntitledTestUser();

  /// @brief Method ovr_User_NewTestUser addr 0x25768c4 size 0x68 virtual false final false
  static inline uint64_t ovr_User_NewTestUser();

  /// @brief Method ovr_User_NewTestUserFriends addr 0x257692c size 0x68 virtual false final false
  static inline uint64_t ovr_User_NewTestUserFriends();

  /// @brief Method ovr_User_StartRecordingForReportFlow addr 0x2576994 size 0x68 virtual false final false
  static inline uint64_t ovr_User_StartRecordingForReportFlow();

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow addr 0x25769fc size 0xb0 virtual false final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow(uint64_t optionalUserID, ::StringW optionalRecordingUUID);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow_Native addr 0x2576aac size 0x84 virtual false final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow_Native(uint64_t optionalUserID, void* optionalRecordingUUID);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2 addr 0x2576b30 size 0xb8 virtual false final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2(uint64_t optionalUserID, ::StringW optionalRecordingUUID, void* abuseReportOptions);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2_Native addr 0x2576be8 size 0x94 virtual false final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2_Native(uint64_t optionalUserID, void* optionalRecordingUUID, void* abuseReportOptions);

  /// @brief Method ovr_User_TestUserCreateDeviceManifest addr 0x2576c7c size 0xb4 virtual false final false
  static inline uint64_t ovr_User_TestUserCreateDeviceManifest(::StringW deviceID, ::ArrayW<uint64_t, ::Array<uint64_t>*> appIDs, int32_t numAppIDs);

  /// @brief Method ovr_User_TestUserCreateDeviceManifest_Native addr 0x2576d30 size 0x9c virtual false final false
  static inline uint64_t ovr_User_TestUserCreateDeviceManifest_Native(void* deviceID, ::ArrayW<uint64_t, ::Array<uint64_t>*> appIDs, int32_t numAppIDs);

  /// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey addr 0x2576dcc size 0xb0 virtual false final false
  static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey_Native addr 0x2576e7c size 0x84 virtual false final false
  static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PrivateGetEntries addr 0x2576f00 size 0x7c virtual false final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntries(uint64_t userID);

  /// @brief Method ovr_UserDataStore_PrivateGetEntryByKey addr 0x2576f7c size 0xb0 virtual false final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PrivateGetEntryByKey_Native addr 0x257702c size 0x84 virtual false final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PrivateWriteEntry addr 0x25770b0 size 0xd0 virtual false final false
  static inline uint64_t ovr_UserDataStore_PrivateWriteEntry(uint64_t userID, ::StringW key, ::StringW value);

  /// @brief Method ovr_UserDataStore_PrivateWriteEntry_Native addr 0x2577180 size 0x94 virtual false final false
  static inline uint64_t ovr_UserDataStore_PrivateWriteEntry_Native(uint64_t userID, void* key, void* value);

  /// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey addr 0x2577214 size 0xb0 virtual false final false
  static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey_Native addr 0x25772c4 size 0x84 virtual false final false
  static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PublicGetEntries addr 0x2577348 size 0x7c virtual false final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntries(uint64_t userID);

  /// @brief Method ovr_UserDataStore_PublicGetEntryByKey addr 0x25773c4 size 0xb0 virtual false final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PublicGetEntryByKey_Native addr 0x2577474 size 0x84 virtual false final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PublicWriteEntry addr 0x25774f8 size 0xd0 virtual false final false
  static inline uint64_t ovr_UserDataStore_PublicWriteEntry(uint64_t userID, ::StringW key, ::StringW value);

  /// @brief Method ovr_UserDataStore_PublicWriteEntry_Native addr 0x25775c8 size 0x94 virtual false final false
  static inline uint64_t ovr_UserDataStore_PublicWriteEntry_Native(uint64_t userID, void* key, void* value);

  /// @brief Method ovr_Voip_GetMicrophoneAvailability addr 0x257765c size 0x68 virtual false final false
  static inline uint64_t ovr_Voip_GetMicrophoneAvailability();

  /// @brief Method ovr_Voip_ReportAppVoipSessions addr 0x25776c4 size 0x84 virtual false final false
  static inline uint64_t ovr_Voip_ReportAppVoipSessions(::ArrayW<uint64_t, ::Array<uint64_t>*> sessionIDs);

  /// @brief Method ovr_Voip_SetSystemVoipSuppressed addr 0x2577748 size 0x7c virtual false final false
  static inline uint64_t ovr_Voip_SetSystemVoipSuppressed(bool suppressed);

  /// @brief Method ovr_AbuseReportRecording_GetRecordingUuid addr 0x25777c4 size 0x58 virtual false final false
  static inline ::StringW ovr_AbuseReportRecording_GetRecordingUuid(void* obj);

  /// @brief Method ovr_AbuseReportRecording_GetRecordingUuid_Native addr 0x257781c size 0x7c virtual false final false
  static inline void* ovr_AbuseReportRecording_GetRecordingUuid_Native(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetBitfieldLength addr 0x2577898 size 0x7c virtual false final false
  static inline uint32_t ovr_AchievementDefinition_GetBitfieldLength(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetName addr 0x2577914 size 0x58 virtual false final false
  static inline ::StringW ovr_AchievementDefinition_GetName(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetName_Native addr 0x257796c size 0x7c virtual false final false
  static inline void* ovr_AchievementDefinition_GetName_Native(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetTarget addr 0x25779e8 size 0x7c virtual false final false
  static inline uint64_t ovr_AchievementDefinition_GetTarget(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetType addr 0x2577a64 size 0x7c virtual false final false
  static inline ::Oculus::Platform::AchievementType ovr_AchievementDefinition_GetType(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_GetElement addr 0x2577ae0 size 0x84 virtual false final false
  static inline void* ovr_AchievementDefinitionArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_AchievementDefinitionArray_GetNextUrl addr 0x2577b64 size 0x58 virtual false final false
  static inline ::StringW ovr_AchievementDefinitionArray_GetNextUrl(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_GetNextUrl_Native addr 0x2577bbc size 0x7c virtual false final false
  static inline void* ovr_AchievementDefinitionArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_GetSize addr 0x2577c38 size 0x7c virtual false final false
  static inline void* ovr_AchievementDefinitionArray_GetSize(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_HasNextPage addr 0x2577cb4 size 0x84 virtual false final false
  static inline bool ovr_AchievementDefinitionArray_HasNextPage(void* obj);

  /// @brief Method ovr_AchievementProgress_GetBitfield addr 0x2577d38 size 0x58 virtual false final false
  static inline ::StringW ovr_AchievementProgress_GetBitfield(void* obj);

  /// @brief Method ovr_AchievementProgress_GetBitfield_Native addr 0x2577d90 size 0x7c virtual false final false
  static inline void* ovr_AchievementProgress_GetBitfield_Native(void* obj);

  /// @brief Method ovr_AchievementProgress_GetCount addr 0x2577e0c size 0x7c virtual false final false
  static inline uint64_t ovr_AchievementProgress_GetCount(void* obj);

  /// @brief Method ovr_AchievementProgress_GetIsUnlocked addr 0x2577e88 size 0x84 virtual false final false
  static inline bool ovr_AchievementProgress_GetIsUnlocked(void* obj);

  /// @brief Method ovr_AchievementProgress_GetName addr 0x2577f0c size 0x58 virtual false final false
  static inline ::StringW ovr_AchievementProgress_GetName(void* obj);

  /// @brief Method ovr_AchievementProgress_GetName_Native addr 0x2577f64 size 0x7c virtual false final false
  static inline void* ovr_AchievementProgress_GetName_Native(void* obj);

  /// @brief Method ovr_AchievementProgress_GetUnlockTime addr 0x2577fe0 size 0x58 virtual false final false
  static inline ::System::DateTime ovr_AchievementProgress_GetUnlockTime(void* obj);

  /// @brief Method ovr_AchievementProgress_GetUnlockTime_Native addr 0x2578038 size 0x7c virtual false final false
  static inline uint64_t ovr_AchievementProgress_GetUnlockTime_Native(void* obj);

  /// @brief Method ovr_AchievementProgressArray_GetElement addr 0x25780b4 size 0x84 virtual false final false
  static inline void* ovr_AchievementProgressArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_AchievementProgressArray_GetNextUrl addr 0x2578138 size 0x58 virtual false final false
  static inline ::StringW ovr_AchievementProgressArray_GetNextUrl(void* obj);

  /// @brief Method ovr_AchievementProgressArray_GetNextUrl_Native addr 0x2578190 size 0x7c virtual false final false
  static inline void* ovr_AchievementProgressArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_AchievementProgressArray_GetSize addr 0x257820c size 0x7c virtual false final false
  static inline void* ovr_AchievementProgressArray_GetSize(void* obj);

  /// @brief Method ovr_AchievementProgressArray_HasNextPage addr 0x2578288 size 0x84 virtual false final false
  static inline bool ovr_AchievementProgressArray_HasNextPage(void* obj);

  /// @brief Method ovr_AchievementUpdate_GetJustUnlocked addr 0x257830c size 0x84 virtual false final false
  static inline bool ovr_AchievementUpdate_GetJustUnlocked(void* obj);

  /// @brief Method ovr_AchievementUpdate_GetName addr 0x2578390 size 0x58 virtual false final false
  static inline ::StringW ovr_AchievementUpdate_GetName(void* obj);

  /// @brief Method ovr_AchievementUpdate_GetName_Native addr 0x25783e8 size 0x7c virtual false final false
  static inline void* ovr_AchievementUpdate_GetName_Native(void* obj);

  /// @brief Method ovr_Application_GetID addr 0x2578464 size 0x7c virtual false final false
  static inline uint64_t ovr_Application_GetID(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetDestination addr 0x25784e0 size 0x7c virtual false final false
  static inline void* ovr_ApplicationInvite_GetDestination(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetID addr 0x257855c size 0x7c virtual false final false
  static inline uint64_t ovr_ApplicationInvite_GetID(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetIsActive addr 0x25785d8 size 0x84 virtual false final false
  static inline bool ovr_ApplicationInvite_GetIsActive(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetLobbySessionId addr 0x257865c size 0x58 virtual false final false
  static inline ::StringW ovr_ApplicationInvite_GetLobbySessionId(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetLobbySessionId_Native addr 0x25786b4 size 0x7c virtual false final false
  static inline void* ovr_ApplicationInvite_GetLobbySessionId_Native(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetMatchSessionId addr 0x2578730 size 0x58 virtual false final false
  static inline ::StringW ovr_ApplicationInvite_GetMatchSessionId(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetMatchSessionId_Native addr 0x2578788 size 0x7c virtual false final false
  static inline void* ovr_ApplicationInvite_GetMatchSessionId_Native(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetRecipient addr 0x2578804 size 0x7c virtual false final false
  static inline void* ovr_ApplicationInvite_GetRecipient(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_GetElement addr 0x2578880 size 0x84 virtual false final false
  static inline void* ovr_ApplicationInviteArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ApplicationInviteArray_GetNextUrl addr 0x2578904 size 0x58 virtual false final false
  static inline ::StringW ovr_ApplicationInviteArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_GetNextUrl_Native addr 0x257895c size 0x7c virtual false final false
  static inline void* ovr_ApplicationInviteArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_GetSize addr 0x25789d8 size 0x7c virtual false final false
  static inline void* ovr_ApplicationInviteArray_GetSize(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_HasNextPage addr 0x2578a54 size 0x84 virtual false final false
  static inline bool ovr_ApplicationInviteArray_HasNextPage(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetCurrentCode addr 0x2578ad8 size 0x7c virtual false final false
  static inline int32_t ovr_ApplicationVersion_GetCurrentCode(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetCurrentName addr 0x2578b54 size 0x58 virtual false final false
  static inline ::StringW ovr_ApplicationVersion_GetCurrentName(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetCurrentName_Native addr 0x2578bac size 0x7c virtual false final false
  static inline void* ovr_ApplicationVersion_GetCurrentName_Native(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestCode addr 0x2578c28 size 0x7c virtual false final false
  static inline int32_t ovr_ApplicationVersion_GetLatestCode(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestName addr 0x2578ca4 size 0x58 virtual false final false
  static inline ::StringW ovr_ApplicationVersion_GetLatestName(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestName_Native addr 0x2578cfc size 0x7c virtual false final false
  static inline void* ovr_ApplicationVersion_GetLatestName_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetAssetId addr 0x2578d78 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetDetails_GetAssetId(void* obj);

  /// @brief Method ovr_AssetDetails_GetAssetType addr 0x2578df4 size 0x58 virtual false final false
  static inline ::StringW ovr_AssetDetails_GetAssetType(void* obj);

  /// @brief Method ovr_AssetDetails_GetAssetType_Native addr 0x2578e4c size 0x7c virtual false final false
  static inline void* ovr_AssetDetails_GetAssetType_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetDownloadStatus addr 0x2578ec8 size 0x58 virtual false final false
  static inline ::StringW ovr_AssetDetails_GetDownloadStatus(void* obj);

  /// @brief Method ovr_AssetDetails_GetDownloadStatus_Native addr 0x2578f20 size 0x7c virtual false final false
  static inline void* ovr_AssetDetails_GetDownloadStatus_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetFilepath addr 0x2578f9c size 0x58 virtual false final false
  static inline ::StringW ovr_AssetDetails_GetFilepath(void* obj);

  /// @brief Method ovr_AssetDetails_GetFilepath_Native addr 0x2578ff4 size 0x7c virtual false final false
  static inline void* ovr_AssetDetails_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetIapStatus addr 0x2579070 size 0x58 virtual false final false
  static inline ::StringW ovr_AssetDetails_GetIapStatus(void* obj);

  /// @brief Method ovr_AssetDetails_GetIapStatus_Native addr 0x25790c8 size 0x7c virtual false final false
  static inline void* ovr_AssetDetails_GetIapStatus_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetLanguage addr 0x2579144 size 0x7c virtual false final false
  static inline void* ovr_AssetDetails_GetLanguage(void* obj);

  /// @brief Method ovr_AssetDetails_GetMetadata addr 0x25791c0 size 0x58 virtual false final false
  static inline ::StringW ovr_AssetDetails_GetMetadata(void* obj);

  /// @brief Method ovr_AssetDetails_GetMetadata_Native addr 0x2579218 size 0x7c virtual false final false
  static inline void* ovr_AssetDetails_GetMetadata_Native(void* obj);

  /// @brief Method ovr_AssetDetailsArray_GetElement addr 0x2579294 size 0x84 virtual false final false
  static inline void* ovr_AssetDetailsArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_AssetDetailsArray_GetSize addr 0x2579318 size 0x7c virtual false final false
  static inline void* ovr_AssetDetailsArray_GetSize(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetAssetFileId addr 0x2579394 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFileDeleteResult_GetAssetFileId(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetAssetId addr 0x2579410 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFileDeleteResult_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetFilepath addr 0x257948c size 0x58 virtual false final false
  static inline ::StringW ovr_AssetFileDeleteResult_GetFilepath(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetFilepath_Native addr 0x25794e4 size 0x7c virtual false final false
  static inline void* ovr_AssetFileDeleteResult_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetSuccess addr 0x2579560 size 0x84 virtual false final false
  static inline bool ovr_AssetFileDeleteResult_GetSuccess(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetFileId addr 0x25795e4 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetFileId(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetId addr 0x2579660 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath addr 0x25796dc size 0x58 virtual false final false
  static inline ::StringW ovr_AssetFileDownloadCancelResult_GetFilepath(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath_Native addr 0x2579734 size 0x7c virtual false final false
  static inline void* ovr_AssetFileDownloadCancelResult_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetSuccess addr 0x25797b0 size 0x84 virtual false final false
  static inline bool ovr_AssetFileDownloadCancelResult_GetSuccess(void* obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetAssetId addr 0x2579834 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFileDownloadResult_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetFilepath addr 0x25798b0 size 0x58 virtual false final false
  static inline ::StringW ovr_AssetFileDownloadResult_GetFilepath(void* obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetFilepath_Native addr 0x2579908 size 0x7c virtual false final false
  static inline void* ovr_AssetFileDownloadResult_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetAssetFileId addr 0x2579984 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetFileId(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetAssetId addr 0x2579a00 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotal addr 0x2579a7c size 0x7c virtual false final false
  static inline uint32_t ovr_AssetFileDownloadUpdate_GetBytesTotal(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotalLong addr 0x2579af8 size 0x7c virtual false final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetBytesTotalLong(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferred addr 0x2579b74 size 0x7c virtual false final false
  static inline int32_t ovr_AssetFileDownloadUpdate_GetBytesTransferred(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferredLong addr 0x2579bf0 size 0x7c virtual false final false
  static inline int64_t ovr_AssetFileDownloadUpdate_GetBytesTransferredLong(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetCompleted addr 0x2579c6c size 0x84 virtual false final false
  static inline bool ovr_AssetFileDownloadUpdate_GetCompleted(void* obj);

  /// @brief Method ovr_AvatarEditorResult_GetRequestSent addr 0x2579cf0 size 0x84 virtual false final false
  static inline bool ovr_AvatarEditorResult_GetRequestSent(void* obj);

  /// @brief Method ovr_BlockedUser_GetId addr 0x2579d74 size 0x7c virtual false final false
  static inline uint64_t ovr_BlockedUser_GetId(void* obj);

  /// @brief Method ovr_BlockedUserArray_GetElement addr 0x2579df0 size 0x84 virtual false final false
  static inline void* ovr_BlockedUserArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_BlockedUserArray_GetNextUrl addr 0x2579e74 size 0x58 virtual false final false
  static inline ::StringW ovr_BlockedUserArray_GetNextUrl(void* obj);

  /// @brief Method ovr_BlockedUserArray_GetNextUrl_Native addr 0x2579ecc size 0x7c virtual false final false
  static inline void* ovr_BlockedUserArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_BlockedUserArray_GetSize addr 0x2579f48 size 0x7c virtual false final false
  static inline void* ovr_BlockedUserArray_GetSize(void* obj);

  /// @brief Method ovr_BlockedUserArray_HasNextPage addr 0x2579fc4 size 0x84 virtual false final false
  static inline bool ovr_BlockedUserArray_HasNextPage(void* obj);

  /// @brief Method ovr_CalApplicationFinalized_GetCountdownMS addr 0x257a048 size 0x7c virtual false final false
  static inline int32_t ovr_CalApplicationFinalized_GetCountdownMS(void* obj);

  /// @brief Method ovr_CalApplicationFinalized_GetID addr 0x257a0c4 size 0x7c virtual false final false
  static inline uint64_t ovr_CalApplicationFinalized_GetID(void* obj);

  /// @brief Method ovr_CalApplicationFinalized_GetLaunchDetails addr 0x257a140 size 0x58 virtual false final false
  static inline ::StringW ovr_CalApplicationFinalized_GetLaunchDetails(void* obj);

  /// @brief Method ovr_CalApplicationFinalized_GetLaunchDetails_Native addr 0x257a198 size 0x7c virtual false final false
  static inline void* ovr_CalApplicationFinalized_GetLaunchDetails_Native(void* obj);

  /// @brief Method ovr_CalApplicationProposed_GetID addr 0x257a214 size 0x7c virtual false final false
  static inline uint64_t ovr_CalApplicationProposed_GetID(void* obj);

  /// @brief Method ovr_CalApplicationSuggestion_GetID addr 0x257a290 size 0x7c virtual false final false
  static inline uint64_t ovr_CalApplicationSuggestion_GetID(void* obj);

  /// @brief Method ovr_CalApplicationSuggestion_GetSocialContext addr 0x257a30c size 0x58 virtual false final false
  static inline ::StringW ovr_CalApplicationSuggestion_GetSocialContext(void* obj);

  /// @brief Method ovr_CalApplicationSuggestion_GetSocialContext_Native addr 0x257a364 size 0x7c virtual false final false
  static inline void* ovr_CalApplicationSuggestion_GetSocialContext_Native(void* obj);

  /// @brief Method ovr_CalApplicationSuggestionArray_GetElement addr 0x257a3e0 size 0x84 virtual false final false
  static inline void* ovr_CalApplicationSuggestionArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_CalApplicationSuggestionArray_GetSize addr 0x257a464 size 0x7c virtual false final false
  static inline void* ovr_CalApplicationSuggestionArray_GetSize(void* obj);

  /// @brief Method ovr_Challenge_GetCreationType addr 0x257a4e0 size 0x7c virtual false final false
  static inline ::Oculus::Platform::ChallengeCreationType ovr_Challenge_GetCreationType(void* obj);

  /// @brief Method ovr_Challenge_GetDescription addr 0x257a55c size 0x58 virtual false final false
  static inline ::StringW ovr_Challenge_GetDescription(void* obj);

  /// @brief Method ovr_Challenge_GetDescription_Native addr 0x257a5b4 size 0x7c virtual false final false
  static inline void* ovr_Challenge_GetDescription_Native(void* obj);

  /// @brief Method ovr_Challenge_GetEndDate addr 0x257a630 size 0x58 virtual false final false
  static inline ::System::DateTime ovr_Challenge_GetEndDate(void* obj);

  /// @brief Method ovr_Challenge_GetEndDate_Native addr 0x257a688 size 0x7c virtual false final false
  static inline uint64_t ovr_Challenge_GetEndDate_Native(void* obj);

  /// @brief Method ovr_Challenge_GetID addr 0x257a704 size 0x7c virtual false final false
  static inline uint64_t ovr_Challenge_GetID(void* obj);

  /// @brief Method ovr_Challenge_GetInvitedUsers addr 0x257a780 size 0x7c virtual false final false
  static inline void* ovr_Challenge_GetInvitedUsers(void* obj);

  /// @brief Method ovr_Challenge_GetLeaderboard addr 0x257a7fc size 0x7c virtual false final false
  static inline void* ovr_Challenge_GetLeaderboard(void* obj);

  /// @brief Method ovr_Challenge_GetParticipants addr 0x257a878 size 0x7c virtual false final false
  static inline void* ovr_Challenge_GetParticipants(void* obj);

  /// @brief Method ovr_Challenge_GetStartDate addr 0x257a8f4 size 0x58 virtual false final false
  static inline ::System::DateTime ovr_Challenge_GetStartDate(void* obj);

  /// @brief Method ovr_Challenge_GetStartDate_Native addr 0x257a94c size 0x7c virtual false final false
  static inline uint64_t ovr_Challenge_GetStartDate_Native(void* obj);

  /// @brief Method ovr_Challenge_GetTitle addr 0x257a9c8 size 0x58 virtual false final false
  static inline ::StringW ovr_Challenge_GetTitle(void* obj);

  /// @brief Method ovr_Challenge_GetTitle_Native addr 0x257aa20 size 0x7c virtual false final false
  static inline void* ovr_Challenge_GetTitle_Native(void* obj);

  /// @brief Method ovr_Challenge_GetVisibility addr 0x257aa9c size 0x7c virtual false final false
  static inline ::Oculus::Platform::ChallengeVisibility ovr_Challenge_GetVisibility(void* obj);

  /// @brief Method ovr_ChallengeArray_GetElement addr 0x257ab18 size 0x84 virtual false final false
  static inline void* ovr_ChallengeArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ChallengeArray_GetNextUrl addr 0x257ab9c size 0x58 virtual false final false
  static inline ::StringW ovr_ChallengeArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ChallengeArray_GetNextUrl_Native addr 0x257abf4 size 0x7c virtual false final false
  static inline void* ovr_ChallengeArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeArray_GetPreviousUrl addr 0x257ac70 size 0x58 virtual false final false
  static inline ::StringW ovr_ChallengeArray_GetPreviousUrl(void* obj);

  /// @brief Method ovr_ChallengeArray_GetPreviousUrl_Native addr 0x257acc8 size 0x7c virtual false final false
  static inline void* ovr_ChallengeArray_GetPreviousUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeArray_GetSize addr 0x257ad44 size 0x7c virtual false final false
  static inline void* ovr_ChallengeArray_GetSize(void* obj);

  /// @brief Method ovr_ChallengeArray_GetTotalCount addr 0x257adc0 size 0x7c virtual false final false
  static inline uint64_t ovr_ChallengeArray_GetTotalCount(void* obj);

  /// @brief Method ovr_ChallengeArray_HasNextPage addr 0x257ae3c size 0x84 virtual false final false
  static inline bool ovr_ChallengeArray_HasNextPage(void* obj);

  /// @brief Method ovr_ChallengeArray_HasPreviousPage addr 0x257aec0 size 0x84 virtual false final false
  static inline bool ovr_ChallengeArray_HasPreviousPage(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetDisplayScore addr 0x257af44 size 0x58 virtual false final false
  static inline ::StringW ovr_ChallengeEntry_GetDisplayScore(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetDisplayScore_Native addr 0x257af9c size 0x7c virtual false final false
  static inline void* ovr_ChallengeEntry_GetDisplayScore_Native(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraData addr 0x257b018 size 0x6c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ovr_ChallengeEntry_GetExtraData(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraData_Native addr 0x257b100 size 0x7c virtual false final false
  static inline void* ovr_ChallengeEntry_GetExtraData_Native(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraDataLength addr 0x257b17c size 0x7c virtual false final false
  static inline uint32_t ovr_ChallengeEntry_GetExtraDataLength(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetID addr 0x257b1f8 size 0x7c virtual false final false
  static inline uint64_t ovr_ChallengeEntry_GetID(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetRank addr 0x257b274 size 0x7c virtual false final false
  static inline int32_t ovr_ChallengeEntry_GetRank(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetScore addr 0x257b2f0 size 0x7c virtual false final false
  static inline int64_t ovr_ChallengeEntry_GetScore(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetTimestamp addr 0x257b36c size 0x58 virtual false final false
  static inline ::System::DateTime ovr_ChallengeEntry_GetTimestamp(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetTimestamp_Native addr 0x257b3c4 size 0x7c virtual false final false
  static inline uint64_t ovr_ChallengeEntry_GetTimestamp_Native(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetUser addr 0x257b440 size 0x7c virtual false final false
  static inline void* ovr_ChallengeEntry_GetUser(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetElement addr 0x257b4bc size 0x84 virtual false final false
  static inline void* ovr_ChallengeEntryArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ChallengeEntryArray_GetNextUrl addr 0x257b540 size 0x58 virtual false final false
  static inline ::StringW ovr_ChallengeEntryArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetNextUrl_Native addr 0x257b598 size 0x7c virtual false final false
  static inline void* ovr_ChallengeEntryArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl addr 0x257b614 size 0x58 virtual false final false
  static inline ::StringW ovr_ChallengeEntryArray_GetPreviousUrl(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl_Native addr 0x257b66c size 0x7c virtual false final false
  static inline void* ovr_ChallengeEntryArray_GetPreviousUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetSize addr 0x257b6e8 size 0x7c virtual false final false
  static inline void* ovr_ChallengeEntryArray_GetSize(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetTotalCount addr 0x257b764 size 0x7c virtual false final false
  static inline uint64_t ovr_ChallengeEntryArray_GetTotalCount(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_HasNextPage addr 0x257b7e0 size 0x84 virtual false final false
  static inline bool ovr_ChallengeEntryArray_HasNextPage(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_HasPreviousPage addr 0x257b864 size 0x84 virtual false final false
  static inline bool ovr_ChallengeEntryArray_HasPreviousPage(void* obj);

  /// @brief Method ovr_CloudStorage2UserDirectoryPathResponse_GetPath addr 0x257b8e8 size 0x58 virtual false final false
  static inline ::StringW ovr_CloudStorage2UserDirectoryPathResponse_GetPath(void* obj);

  /// @brief Method ovr_CloudStorage2UserDirectoryPathResponse_GetPath_Native addr 0x257b940 size 0x7c virtual false final false
  static inline void* ovr_CloudStorage2UserDirectoryPathResponse_GetPath_Native(void* obj);

  /// @brief Method ovr_CloudStorageConflictMetadata_GetLocal addr 0x257b9bc size 0x7c virtual false final false
  static inline void* ovr_CloudStorageConflictMetadata_GetLocal(void* obj);

  /// @brief Method ovr_CloudStorageConflictMetadata_GetRemote addr 0x257ba38 size 0x7c virtual false final false
  static inline void* ovr_CloudStorageConflictMetadata_GetRemote(void* obj);

  /// @brief Method ovr_CloudStorageData_GetBucket addr 0x257bab4 size 0x58 virtual false final false
  static inline ::StringW ovr_CloudStorageData_GetBucket(void* obj);

  /// @brief Method ovr_CloudStorageData_GetBucket_Native addr 0x257bb0c size 0x7c virtual false final false
  static inline void* ovr_CloudStorageData_GetBucket_Native(void* obj);

  /// @brief Method ovr_CloudStorageData_GetData addr 0x257bb88 size 0x6c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ovr_CloudStorageData_GetData(void* obj);

  /// @brief Method ovr_CloudStorageData_GetData_Native addr 0x257bc70 size 0x7c virtual false final false
  static inline void* ovr_CloudStorageData_GetData_Native(void* obj);

  /// @brief Method ovr_CloudStorageData_GetDataSize addr 0x257bbf4 size 0x7c virtual false final false
  static inline uint32_t ovr_CloudStorageData_GetDataSize(void* obj);

  /// @brief Method ovr_CloudStorageData_GetKey addr 0x257bcec size 0x58 virtual false final false
  static inline ::StringW ovr_CloudStorageData_GetKey(void* obj);

  /// @brief Method ovr_CloudStorageData_GetKey_Native addr 0x257bd44 size 0x7c virtual false final false
  static inline void* ovr_CloudStorageData_GetKey_Native(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetBucket addr 0x257bdc0 size 0x58 virtual false final false
  static inline ::StringW ovr_CloudStorageMetadata_GetBucket(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetBucket_Native addr 0x257be18 size 0x7c virtual false final false
  static inline void* ovr_CloudStorageMetadata_GetBucket_Native(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetCounter addr 0x257be94 size 0x7c virtual false final false
  static inline int64_t ovr_CloudStorageMetadata_GetCounter(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetDataSize addr 0x257bf10 size 0x7c virtual false final false
  static inline uint32_t ovr_CloudStorageMetadata_GetDataSize(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetExtraData addr 0x257bf8c size 0x58 virtual false final false
  static inline ::StringW ovr_CloudStorageMetadata_GetExtraData(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetExtraData_Native addr 0x257bfe4 size 0x7c virtual false final false
  static inline void* ovr_CloudStorageMetadata_GetExtraData_Native(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetKey addr 0x257c060 size 0x58 virtual false final false
  static inline ::StringW ovr_CloudStorageMetadata_GetKey(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetKey_Native addr 0x257c0b8 size 0x7c virtual false final false
  static inline void* ovr_CloudStorageMetadata_GetKey_Native(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetSaveTime addr 0x257c134 size 0x7c virtual false final false
  static inline uint64_t ovr_CloudStorageMetadata_GetSaveTime(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetStatus addr 0x257c1b0 size 0x7c virtual false final false
  static inline ::Oculus::Platform::CloudStorageDataStatus ovr_CloudStorageMetadata_GetStatus(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetVersionHandle addr 0x257c22c size 0x58 virtual false final false
  static inline ::StringW ovr_CloudStorageMetadata_GetVersionHandle(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetVersionHandle_Native addr 0x257c284 size 0x7c virtual false final false
  static inline void* ovr_CloudStorageMetadata_GetVersionHandle_Native(void* obj);

  /// @brief Method ovr_CloudStorageMetadataArray_GetElement addr 0x257c300 size 0x84 virtual false final false
  static inline void* ovr_CloudStorageMetadataArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_CloudStorageMetadataArray_GetNextUrl addr 0x257c384 size 0x58 virtual false final false
  static inline ::StringW ovr_CloudStorageMetadataArray_GetNextUrl(void* obj);

  /// @brief Method ovr_CloudStorageMetadataArray_GetNextUrl_Native addr 0x257c3dc size 0x7c virtual false final false
  static inline void* ovr_CloudStorageMetadataArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_CloudStorageMetadataArray_GetSize addr 0x257c458 size 0x7c virtual false final false
  static inline void* ovr_CloudStorageMetadataArray_GetSize(void* obj);

  /// @brief Method ovr_CloudStorageMetadataArray_HasNextPage addr 0x257c4d4 size 0x84 virtual false final false
  static inline bool ovr_CloudStorageMetadataArray_HasNextPage(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetBucket addr 0x257c558 size 0x58 virtual false final false
  static inline ::StringW ovr_CloudStorageUpdateResponse_GetBucket(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetBucket_Native addr 0x257c5b0 size 0x7c virtual false final false
  static inline void* ovr_CloudStorageUpdateResponse_GetBucket_Native(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetKey addr 0x257c62c size 0x58 virtual false final false
  static inline ::StringW ovr_CloudStorageUpdateResponse_GetKey(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetKey_Native addr 0x257c684 size 0x7c virtual false final false
  static inline void* ovr_CloudStorageUpdateResponse_GetKey_Native(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetStatus addr 0x257c700 size 0x7c virtual false final false
  static inline ::Oculus::Platform::CloudStorageUpdateStatus ovr_CloudStorageUpdateResponse_GetStatus(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetVersionHandle addr 0x257c77c size 0x58 virtual false final false
  static inline ::StringW ovr_CloudStorageUpdateResponse_GetVersionHandle(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetVersionHandle_Native addr 0x257c7d4 size 0x7c virtual false final false
  static inline void* ovr_CloudStorageUpdateResponse_GetVersionHandle_Native(void* obj);

  /// @brief Method ovr_DataStore_Contains addr 0x257c850 size 0xb0 virtual false final false
  static inline uint32_t ovr_DataStore_Contains(void* obj, ::StringW key);

  /// @brief Method ovr_DataStore_Contains_Native addr 0x257c900 size 0x84 virtual false final false
  static inline uint32_t ovr_DataStore_Contains_Native(void* obj, void* key);

  /// @brief Method ovr_DataStore_GetKey addr 0x2569d20 size 0x68 virtual false final false
  static inline ::StringW ovr_DataStore_GetKey(void* obj, int32_t index);

  /// @brief Method ovr_DataStore_GetKey_Native addr 0x257c984 size 0x84 virtual false final false
  static inline void* ovr_DataStore_GetKey_Native(void* obj, int32_t index);

  /// @brief Method ovr_DataStore_GetNumKeys addr 0x2569ca4 size 0x7c virtual false final false
  static inline void* ovr_DataStore_GetNumKeys(void* obj);

  /// @brief Method ovr_DataStore_GetValue addr 0x2569d88 size 0xb4 virtual false final false
  static inline ::StringW ovr_DataStore_GetValue(void* obj, ::StringW key);

  /// @brief Method ovr_DataStore_GetValue_Native addr 0x257ca08 size 0x84 virtual false final false
  static inline void* ovr_DataStore_GetValue_Native(void* obj, void* key);

  /// @brief Method ovr_Destination_GetApiName addr 0x257ca8c size 0x58 virtual false final false
  static inline ::StringW ovr_Destination_GetApiName(void* obj);

  /// @brief Method ovr_Destination_GetApiName_Native addr 0x257cae4 size 0x7c virtual false final false
  static inline void* ovr_Destination_GetApiName_Native(void* obj);

  /// @brief Method ovr_Destination_GetDeeplinkMessage addr 0x257cb60 size 0x58 virtual false final false
  static inline ::StringW ovr_Destination_GetDeeplinkMessage(void* obj);

  /// @brief Method ovr_Destination_GetDeeplinkMessage_Native addr 0x257cbb8 size 0x7c virtual false final false
  static inline void* ovr_Destination_GetDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_Destination_GetDisplayName addr 0x257cc34 size 0x58 virtual false final false
  static inline ::StringW ovr_Destination_GetDisplayName(void* obj);

  /// @brief Method ovr_Destination_GetDisplayName_Native addr 0x257cc8c size 0x7c virtual false final false
  static inline void* ovr_Destination_GetDisplayName_Native(void* obj);

  /// @brief Method ovr_DestinationArray_GetElement addr 0x257cd08 size 0x84 virtual false final false
  static inline void* ovr_DestinationArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_DestinationArray_GetNextUrl addr 0x257cd8c size 0x58 virtual false final false
  static inline ::StringW ovr_DestinationArray_GetNextUrl(void* obj);

  /// @brief Method ovr_DestinationArray_GetNextUrl_Native addr 0x257cde4 size 0x7c virtual false final false
  static inline void* ovr_DestinationArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_DestinationArray_GetSize addr 0x257ce60 size 0x7c virtual false final false
  static inline void* ovr_DestinationArray_GetSize(void* obj);

  /// @brief Method ovr_DestinationArray_HasNextPage addr 0x257cedc size 0x84 virtual false final false
  static inline bool ovr_DestinationArray_HasNextPage(void* obj);

  /// @brief Method ovr_Error_GetCode addr 0x257cf60 size 0x78 virtual false final false
  static inline int32_t ovr_Error_GetCode(void* obj);

  /// @brief Method ovr_Error_GetDisplayableMessage addr 0x257cfd8 size 0x58 virtual false final false
  static inline ::StringW ovr_Error_GetDisplayableMessage(void* obj);

  /// @brief Method ovr_Error_GetDisplayableMessage_Native addr 0x257d030 size 0x7c virtual false final false
  static inline void* ovr_Error_GetDisplayableMessage_Native(void* obj);

  /// @brief Method ovr_Error_GetHttpCode addr 0x257d0ac size 0x7c virtual false final false
  static inline int32_t ovr_Error_GetHttpCode(void* obj);

  /// @brief Method ovr_Error_GetMessage addr 0x257d128 size 0x58 virtual false final false
  static inline ::StringW ovr_Error_GetMessage(void* obj);

  /// @brief Method ovr_Error_GetMessage_Native addr 0x257d180 size 0x7c virtual false final false
  static inline void* ovr_Error_GetMessage_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage addr 0x257d1fc size 0x58 virtual false final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetDeeplinkMessage(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native addr 0x257d254 size 0x7c virtual false final false
  static inline void* ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName addr 0x257d2d0 size 0x58 virtual false final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetDestinationApiName(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native addr 0x257d328 size 0x7c virtual false final false
  static inline void* ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId addr 0x257d3a4 size 0x58 virtual false final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetLobbySessionId(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native addr 0x257d3fc size 0x7c virtual false final false
  static inline void* ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId addr 0x257d478 size 0x58 virtual false final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetMatchSessionId(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native addr 0x257d4d0 size 0x7c virtual false final false
  static inline void* ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName addr 0x257d54c size 0x58 virtual false final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetDestinationApiName(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native addr 0x257d5a4 size 0x7c virtual false final false
  static inline void* ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId addr 0x257d620 size 0x58 virtual false final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetLobbySessionId(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native addr 0x257d678 size 0x7c virtual false final false
  static inline void* ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId addr 0x257d6f4 size 0x58 virtual false final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetMatchSessionId(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native addr 0x257d74c size 0x7c virtual false final false
  static inline void* ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_GetBytes addr 0x257d7c8 size 0x7c virtual false final false
  static inline void* ovr_HttpTransferUpdate_GetBytes(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_GetID addr 0x257d844 size 0x7c virtual false final false
  static inline uint64_t ovr_HttpTransferUpdate_GetID(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_GetSize addr 0x257d8c0 size 0x7c virtual false final false
  static inline void* ovr_HttpTransferUpdate_GetSize(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_IsCompleted addr 0x257d93c size 0x84 virtual false final false
  static inline bool ovr_HttpTransferUpdate_IsCompleted(void* obj);

  /// @brief Method ovr_InstalledApplication_GetApplicationId addr 0x257d9c0 size 0x58 virtual false final false
  static inline ::StringW ovr_InstalledApplication_GetApplicationId(void* obj);

  /// @brief Method ovr_InstalledApplication_GetApplicationId_Native addr 0x257da18 size 0x7c virtual false final false
  static inline void* ovr_InstalledApplication_GetApplicationId_Native(void* obj);

  /// @brief Method ovr_InstalledApplication_GetPackageName addr 0x257da94 size 0x58 virtual false final false
  static inline ::StringW ovr_InstalledApplication_GetPackageName(void* obj);

  /// @brief Method ovr_InstalledApplication_GetPackageName_Native addr 0x257daec size 0x7c virtual false final false
  static inline void* ovr_InstalledApplication_GetPackageName_Native(void* obj);

  /// @brief Method ovr_InstalledApplication_GetStatus addr 0x257db68 size 0x58 virtual false final false
  static inline ::StringW ovr_InstalledApplication_GetStatus(void* obj);

  /// @brief Method ovr_InstalledApplication_GetStatus_Native addr 0x257dbc0 size 0x7c virtual false final false
  static inline void* ovr_InstalledApplication_GetStatus_Native(void* obj);

  /// @brief Method ovr_InstalledApplication_GetVersionCode addr 0x257dc3c size 0x7c virtual false final false
  static inline int32_t ovr_InstalledApplication_GetVersionCode(void* obj);

  /// @brief Method ovr_InstalledApplication_GetVersionName addr 0x257dcb8 size 0x58 virtual false final false
  static inline ::StringW ovr_InstalledApplication_GetVersionName(void* obj);

  /// @brief Method ovr_InstalledApplication_GetVersionName_Native addr 0x257dd10 size 0x7c virtual false final false
  static inline void* ovr_InstalledApplication_GetVersionName_Native(void* obj);

  /// @brief Method ovr_InstalledApplicationArray_GetElement addr 0x257dd8c size 0x84 virtual false final false
  static inline void* ovr_InstalledApplicationArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_InstalledApplicationArray_GetSize addr 0x257de10 size 0x7c virtual false final false
  static inline void* ovr_InstalledApplicationArray_GetSize(void* obj);

  /// @brief Method ovr_InvitePanelResultInfo_GetInvitesSent addr 0x257de8c size 0x84 virtual false final false
  static inline bool ovr_InvitePanelResultInfo_GetInvitesSent(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetEnglishName addr 0x257df10 size 0x58 virtual false final false
  static inline ::StringW ovr_LanguagePackInfo_GetEnglishName(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetEnglishName_Native addr 0x257df68 size 0x7c virtual false final false
  static inline void* ovr_LanguagePackInfo_GetEnglishName_Native(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetNativeName addr 0x257dfe4 size 0x58 virtual false final false
  static inline ::StringW ovr_LanguagePackInfo_GetNativeName(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetNativeName_Native addr 0x257e03c size 0x7c virtual false final false
  static inline void* ovr_LanguagePackInfo_GetNativeName_Native(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetTag addr 0x257e0b8 size 0x58 virtual false final false
  static inline ::StringW ovr_LanguagePackInfo_GetTag(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetTag_Native addr 0x257e110 size 0x7c virtual false final false
  static inline void* ovr_LanguagePackInfo_GetTag_Native(void* obj);

  /// @brief Method ovr_LaunchBlockFlowResult_GetDidBlock addr 0x257e18c size 0x84 virtual false final false
  static inline bool ovr_LaunchBlockFlowResult_GetDidBlock(void* obj);

  /// @brief Method ovr_LaunchBlockFlowResult_GetDidCancel addr 0x257e210 size 0x84 virtual false final false
  static inline bool ovr_LaunchBlockFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDeeplinkMessage addr 0x257e294 size 0x58 virtual false final false
  static inline ::StringW ovr_LaunchDetails_GetDeeplinkMessage(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDeeplinkMessage_Native addr 0x257e2ec size 0x7c virtual false final false
  static inline void* ovr_LaunchDetails_GetDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDestinationApiName addr 0x257e368 size 0x58 virtual false final false
  static inline ::StringW ovr_LaunchDetails_GetDestinationApiName(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDestinationApiName_Native addr 0x257e3c0 size 0x7c virtual false final false
  static inline void* ovr_LaunchDetails_GetDestinationApiName_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchSource addr 0x257e43c size 0x58 virtual false final false
  static inline ::StringW ovr_LaunchDetails_GetLaunchSource(void* obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchSource_Native addr 0x257e494 size 0x7c virtual false final false
  static inline void* ovr_LaunchDetails_GetLaunchSource_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchType addr 0x257e510 size 0x7c virtual false final false
  static inline ::Oculus::Platform::LaunchType ovr_LaunchDetails_GetLaunchType(void* obj);

  /// @brief Method ovr_LaunchDetails_GetRoomID addr 0x257e58c size 0x7c virtual false final false
  static inline uint64_t ovr_LaunchDetails_GetRoomID(void* obj);

  /// @brief Method ovr_LaunchDetails_GetTrackingID addr 0x257e608 size 0x58 virtual false final false
  static inline ::StringW ovr_LaunchDetails_GetTrackingID(void* obj);

  /// @brief Method ovr_LaunchDetails_GetTrackingID_Native addr 0x257e660 size 0x7c virtual false final false
  static inline void* ovr_LaunchDetails_GetTrackingID_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetUsers addr 0x257e6dc size 0x7c virtual false final false
  static inline void* ovr_LaunchDetails_GetUsers(void* obj);

  /// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidCancel addr 0x257e758 size 0x84 virtual false final false
  static inline bool ovr_LaunchFriendRequestFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidSendRequest addr 0x257e7dc size 0x84 virtual false final false
  static inline bool ovr_LaunchFriendRequestFlowResult_GetDidSendRequest(void* obj);

  /// @brief Method ovr_LaunchInvitePanelFlowResult_GetInvitedUsers addr 0x257e860 size 0x7c virtual false final false
  static inline void* ovr_LaunchInvitePanelFlowResult_GetInvitedUsers(void* obj);

  /// @brief Method ovr_LaunchReportFlowResult_GetDidCancel addr 0x257e8dc size 0x84 virtual false final false
  static inline bool ovr_LaunchReportFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchReportFlowResult_GetUserReportId addr 0x257e960 size 0x7c virtual false final false
  static inline uint64_t ovr_LaunchReportFlowResult_GetUserReportId(void* obj);

  /// @brief Method ovr_LaunchUnblockFlowResult_GetDidCancel addr 0x257e9dc size 0x84 virtual false final false
  static inline bool ovr_LaunchUnblockFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchUnblockFlowResult_GetDidUnblock addr 0x257ea60 size 0x84 virtual false final false
  static inline bool ovr_LaunchUnblockFlowResult_GetDidUnblock(void* obj);

  /// @brief Method ovr_Leaderboard_GetApiName addr 0x257eae4 size 0x58 virtual false final false
  static inline ::StringW ovr_Leaderboard_GetApiName(void* obj);

  /// @brief Method ovr_Leaderboard_GetApiName_Native addr 0x257eb3c size 0x7c virtual false final false
  static inline void* ovr_Leaderboard_GetApiName_Native(void* obj);

  /// @brief Method ovr_Leaderboard_GetDestination addr 0x257ebb8 size 0x7c virtual false final false
  static inline void* ovr_Leaderboard_GetDestination(void* obj);

  /// @brief Method ovr_Leaderboard_GetID addr 0x257ec34 size 0x7c virtual false final false
  static inline uint64_t ovr_Leaderboard_GetID(void* obj);

  /// @brief Method ovr_LeaderboardArray_GetElement addr 0x257ecb0 size 0x84 virtual false final false
  static inline void* ovr_LeaderboardArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_LeaderboardArray_GetNextUrl addr 0x257ed34 size 0x58 virtual false final false
  static inline ::StringW ovr_LeaderboardArray_GetNextUrl(void* obj);

  /// @brief Method ovr_LeaderboardArray_GetNextUrl_Native addr 0x257ed8c size 0x7c virtual false final false
  static inline void* ovr_LeaderboardArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_LeaderboardArray_GetSize addr 0x257ee08 size 0x7c virtual false final false
  static inline void* ovr_LeaderboardArray_GetSize(void* obj);

  /// @brief Method ovr_LeaderboardArray_HasNextPage addr 0x257ee84 size 0x84 virtual false final false
  static inline bool ovr_LeaderboardArray_HasNextPage(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetDisplayScore addr 0x257ef08 size 0x58 virtual false final false
  static inline ::StringW ovr_LeaderboardEntry_GetDisplayScore(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetDisplayScore_Native addr 0x257ef60 size 0x7c virtual false final false
  static inline void* ovr_LeaderboardEntry_GetDisplayScore_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraData addr 0x257efdc size 0x6c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ovr_LeaderboardEntry_GetExtraData(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraData_Native addr 0x257f048 size 0x7c virtual false final false
  static inline void* ovr_LeaderboardEntry_GetExtraData_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraDataLength addr 0x257b084 size 0x7c virtual false final false
  static inline uint32_t ovr_LeaderboardEntry_GetExtraDataLength(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetID addr 0x257f0c4 size 0x7c virtual false final false
  static inline uint64_t ovr_LeaderboardEntry_GetID(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetRank addr 0x257f140 size 0x7c virtual false final false
  static inline int32_t ovr_LeaderboardEntry_GetRank(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetScore addr 0x257f1bc size 0x7c virtual false final false
  static inline int64_t ovr_LeaderboardEntry_GetScore(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetSupplementaryMetric addr 0x257f238 size 0x7c virtual false final false
  static inline void* ovr_LeaderboardEntry_GetSupplementaryMetric(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetTimestamp addr 0x257f2b4 size 0x58 virtual false final false
  static inline ::System::DateTime ovr_LeaderboardEntry_GetTimestamp(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetTimestamp_Native addr 0x257f30c size 0x7c virtual false final false
  static inline uint64_t ovr_LeaderboardEntry_GetTimestamp_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetUser addr 0x257f388 size 0x7c virtual false final false
  static inline void* ovr_LeaderboardEntry_GetUser(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetElement addr 0x257f404 size 0x84 virtual false final false
  static inline void* ovr_LeaderboardEntryArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_LeaderboardEntryArray_GetNextUrl addr 0x257f488 size 0x58 virtual false final false
  static inline ::StringW ovr_LeaderboardEntryArray_GetNextUrl(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetNextUrl_Native addr 0x257f4e0 size 0x7c virtual false final false
  static inline void* ovr_LeaderboardEntryArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl addr 0x257f55c size 0x58 virtual false final false
  static inline ::StringW ovr_LeaderboardEntryArray_GetPreviousUrl(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl_Native addr 0x257f5b4 size 0x7c virtual false final false
  static inline void* ovr_LeaderboardEntryArray_GetPreviousUrl_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetSize addr 0x257f630 size 0x7c virtual false final false
  static inline void* ovr_LeaderboardEntryArray_GetSize(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetTotalCount addr 0x257f6ac size 0x7c virtual false final false
  static inline uint64_t ovr_LeaderboardEntryArray_GetTotalCount(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_HasNextPage addr 0x257f728 size 0x84 virtual false final false
  static inline bool ovr_LeaderboardEntryArray_HasNextPage(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_HasPreviousPage addr 0x257f7ac size 0x84 virtual false final false
  static inline bool ovr_LeaderboardEntryArray_HasPreviousPage(void* obj);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetDidUpdate addr 0x257f830 size 0x84 virtual false final false
  static inline bool ovr_LeaderboardUpdateStatus_GetDidUpdate(void* obj);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId addr 0x257f8b4 size 0x84 virtual false final false
  static inline uint64_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId(void* obj, uint32_t index);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize addr 0x257f938 size 0x7c virtual false final false
  static inline uint32_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize(void* obj);

  /// @brief Method ovr_LinkedAccount_GetAccessToken addr 0x257f9b4 size 0x58 virtual false final false
  static inline ::StringW ovr_LinkedAccount_GetAccessToken(void* obj);

  /// @brief Method ovr_LinkedAccount_GetAccessToken_Native addr 0x257fa0c size 0x7c virtual false final false
  static inline void* ovr_LinkedAccount_GetAccessToken_Native(void* obj);

  /// @brief Method ovr_LinkedAccount_GetServiceProvider addr 0x257fa88 size 0x7c virtual false final false
  static inline ::Oculus::Platform::ServiceProvider ovr_LinkedAccount_GetServiceProvider(void* obj);

  /// @brief Method ovr_LinkedAccount_GetUserId addr 0x257fb04 size 0x58 virtual false final false
  static inline ::StringW ovr_LinkedAccount_GetUserId(void* obj);

  /// @brief Method ovr_LinkedAccount_GetUserId_Native addr 0x257fb5c size 0x7c virtual false final false
  static inline void* ovr_LinkedAccount_GetUserId_Native(void* obj);

  /// @brief Method ovr_LinkedAccountArray_GetElement addr 0x257fbd8 size 0x84 virtual false final false
  static inline void* ovr_LinkedAccountArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_LinkedAccountArray_GetSize addr 0x257fc5c size 0x7c virtual false final false
  static inline void* ovr_LinkedAccountArray_GetSize(void* obj);

  /// @brief Method ovr_LivestreamingApplicationStatus_GetStreamingEnabled addr 0x257fcd8 size 0x84 virtual false final false
  static inline bool ovr_LivestreamingApplicationStatus_GetStreamingEnabled(void* obj);

  /// @brief Method ovr_LivestreamingStartResult_GetStreamingResult addr 0x257fd5c size 0x7c virtual false final false
  static inline ::Oculus::Platform::LivestreamingStartStatus ovr_LivestreamingStartResult_GetStreamingResult(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetCommentsVisible addr 0x257fdd8 size 0x84 virtual false final false
  static inline bool ovr_LivestreamingStatus_GetCommentsVisible(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetIsPaused addr 0x257fe5c size 0x84 virtual false final false
  static inline bool ovr_LivestreamingStatus_GetIsPaused(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetLivestreamingEnabled addr 0x257fee0 size 0x84 virtual false final false
  static inline bool ovr_LivestreamingStatus_GetLivestreamingEnabled(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetLivestreamingType addr 0x257ff64 size 0x7c virtual false final false
  static inline int32_t ovr_LivestreamingStatus_GetLivestreamingType(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetMicEnabled addr 0x257ffe0 size 0x84 virtual false final false
  static inline bool ovr_LivestreamingStatus_GetMicEnabled(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetCommentCount addr 0x2580064 size 0x7c virtual false final false
  static inline int32_t ovr_LivestreamingVideoStats_GetCommentCount(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetReactionCount addr 0x25800e0 size 0x7c virtual false final false
  static inline int32_t ovr_LivestreamingVideoStats_GetReactionCount(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetTotalViews addr 0x258015c size 0x58 virtual false final false
  static inline ::StringW ovr_LivestreamingVideoStats_GetTotalViews(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetTotalViews_Native addr 0x25801b4 size 0x7c virtual false final false
  static inline void* ovr_LivestreamingVideoStats_GetTotalViews_Native(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshot_GetCandidates addr 0x2580230 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingAdminSnapshot_GetCandidates(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshot_GetMyCurrentThreshold addr 0x25802ac size 0x7c virtual false final false
  static inline double_t ovr_MatchmakingAdminSnapshot_GetMyCurrentThreshold(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetCanMatch addr 0x2580328 size 0x84 virtual false final false
  static inline bool ovr_MatchmakingAdminSnapshotCandidate_GetCanMatch(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetMyTotalScore addr 0x25803ac size 0x7c virtual false final false
  static inline double_t ovr_MatchmakingAdminSnapshotCandidate_GetMyTotalScore(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold addr 0x2580428 size 0x7c virtual false final false
  static inline double_t ovr_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTheirTotalScore addr 0x25804a4 size 0x7c virtual false final false
  static inline double_t ovr_MatchmakingAdminSnapshotCandidate_GetTheirTotalScore(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTraceId addr 0x2580520 size 0x58 virtual false final false
  static inline ::StringW ovr_MatchmakingAdminSnapshotCandidate_GetTraceId(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTraceId_Native addr 0x2580578 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingAdminSnapshotCandidate_GetTraceId_Native(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidateArray_GetElement addr 0x25805f4 size 0x84 virtual false final false
  static inline void* ovr_MatchmakingAdminSnapshotCandidateArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidateArray_GetSize addr 0x2580678 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingAdminSnapshotCandidateArray_GetSize(void* obj);

  /// @brief Method ovr_MatchmakingBrowseResult_GetEnqueueResult addr 0x25806f4 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingBrowseResult_GetEnqueueResult(void* obj);

  /// @brief Method ovr_MatchmakingBrowseResult_GetRooms addr 0x2580770 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingBrowseResult_GetRooms(void* obj);

  /// @brief Method ovr_MatchmakingCandidate_GetEntryHash addr 0x25807ec size 0x58 virtual false final false
  static inline ::StringW ovr_MatchmakingCandidate_GetEntryHash(void* obj);

  /// @brief Method ovr_MatchmakingCandidate_GetEntryHash_Native addr 0x2580844 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingCandidate_GetEntryHash_Native(void* obj);

  /// @brief Method ovr_MatchmakingCandidate_GetUserId addr 0x25808c0 size 0x7c virtual false final false
  static inline uint64_t ovr_MatchmakingCandidate_GetUserId(void* obj);

  /// @brief Method ovr_MatchmakingCandidateArray_GetElement addr 0x258093c size 0x84 virtual false final false
  static inline void* ovr_MatchmakingCandidateArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_MatchmakingCandidateArray_GetNextUrl addr 0x25809c0 size 0x58 virtual false final false
  static inline ::StringW ovr_MatchmakingCandidateArray_GetNextUrl(void* obj);

  /// @brief Method ovr_MatchmakingCandidateArray_GetNextUrl_Native addr 0x2580a18 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingCandidateArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_MatchmakingCandidateArray_GetSize addr 0x2580a94 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingCandidateArray_GetSize(void* obj);

  /// @brief Method ovr_MatchmakingCandidateArray_HasNextPage addr 0x2580b10 size 0x84 virtual false final false
  static inline bool ovr_MatchmakingCandidateArray_HasNextPage(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetAdminSnapshot addr 0x2580b94 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingEnqueueResult_GetAdminSnapshot(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetAverageWait addr 0x2580c10 size 0x7c virtual false final false
  static inline uint32_t ovr_MatchmakingEnqueueResult_GetAverageWait(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetMatchesInLastHourCount addr 0x2580c8c size 0x7c virtual false final false
  static inline uint32_t ovr_MatchmakingEnqueueResult_GetMatchesInLastHourCount(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetMaxExpectedWait addr 0x2580d08 size 0x7c virtual false final false
  static inline uint32_t ovr_MatchmakingEnqueueResult_GetMaxExpectedWait(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetPool addr 0x2580d84 size 0x58 virtual false final false
  static inline ::StringW ovr_MatchmakingEnqueueResult_GetPool(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetPool_Native addr 0x2580ddc size 0x7c virtual false final false
  static inline void* ovr_MatchmakingEnqueueResult_GetPool_Native(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetRecentMatchPercentage addr 0x2580e58 size 0x7c virtual false final false
  static inline uint32_t ovr_MatchmakingEnqueueResult_GetRecentMatchPercentage(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetRequestHash addr 0x2580ed4 size 0x58 virtual false final false
  static inline ::StringW ovr_MatchmakingEnqueueResult_GetRequestHash(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetRequestHash_Native addr 0x2580f2c size 0x7c virtual false final false
  static inline void* ovr_MatchmakingEnqueueResult_GetRequestHash_Native(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult addr 0x2580fa8 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResultAndRoom_GetRoom addr 0x2581024 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingEnqueueResultAndRoom_GetRoom(void* obj);

  /// @brief Method ovr_MatchmakingEnqueuedUser_GetAdditionalUserID addr 0x25810a0 size 0x84 virtual false final false
  static inline uint64_t ovr_MatchmakingEnqueuedUser_GetAdditionalUserID(void* obj, uint32_t index);

  /// @brief Method ovr_MatchmakingEnqueuedUser_GetAdditionalUserIDsSize addr 0x2581124 size 0x7c virtual false final false
  static inline uint32_t ovr_MatchmakingEnqueuedUser_GetAdditionalUserIDsSize(void* obj);

  /// @brief Method ovr_MatchmakingEnqueuedUser_GetCustomData addr 0x25811a0 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingEnqueuedUser_GetCustomData(void* obj);

  /// @brief Method ovr_MatchmakingEnqueuedUser_GetUser addr 0x258121c size 0x7c virtual false final false
  static inline void* ovr_MatchmakingEnqueuedUser_GetUser(void* obj);

  /// @brief Method ovr_MatchmakingEnqueuedUserArray_GetElement addr 0x2581298 size 0x84 virtual false final false
  static inline void* ovr_MatchmakingEnqueuedUserArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_MatchmakingEnqueuedUserArray_GetSize addr 0x258131c size 0x7c virtual false final false
  static inline void* ovr_MatchmakingEnqueuedUserArray_GetSize(void* obj);

  /// @brief Method ovr_MatchmakingNotification_GetAddedByUserId addr 0x2581398 size 0x7c virtual false final false
  static inline uint64_t ovr_MatchmakingNotification_GetAddedByUserId(void* obj);

  /// @brief Method ovr_MatchmakingNotification_GetRoom addr 0x2581414 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingNotification_GetRoom(void* obj);

  /// @brief Method ovr_MatchmakingNotification_GetTraceId addr 0x2581490 size 0x58 virtual false final false
  static inline ::StringW ovr_MatchmakingNotification_GetTraceId(void* obj);

  /// @brief Method ovr_MatchmakingNotification_GetTraceId_Native addr 0x25814e8 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingNotification_GetTraceId_Native(void* obj);

  /// @brief Method ovr_MatchmakingRoom_GetPingTime addr 0x2581564 size 0x7c virtual false final false
  static inline uint32_t ovr_MatchmakingRoom_GetPingTime(void* obj);

  /// @brief Method ovr_MatchmakingRoom_GetRoom addr 0x25815e0 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingRoom_GetRoom(void* obj);

  /// @brief Method ovr_MatchmakingRoom_HasPingTime addr 0x258165c size 0x84 virtual false final false
  static inline bool ovr_MatchmakingRoom_HasPingTime(void* obj);

  /// @brief Method ovr_MatchmakingRoomArray_GetElement addr 0x25816e0 size 0x84 virtual false final false
  static inline void* ovr_MatchmakingRoomArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_MatchmakingRoomArray_GetSize addr 0x2581764 size 0x7c virtual false final false
  static inline void* ovr_MatchmakingRoomArray_GetSize(void* obj);

  /// @brief Method ovr_MatchmakingStats_GetDrawCount addr 0x25817e0 size 0x7c virtual false final false
  static inline uint32_t ovr_MatchmakingStats_GetDrawCount(void* obj);

  /// @brief Method ovr_MatchmakingStats_GetLossCount addr 0x258185c size 0x7c virtual false final false
  static inline uint32_t ovr_MatchmakingStats_GetLossCount(void* obj);

  /// @brief Method ovr_MatchmakingStats_GetSkillLevel addr 0x25818d8 size 0x7c virtual false final false
  static inline uint32_t ovr_MatchmakingStats_GetSkillLevel(void* obj);

  /// @brief Method ovr_MatchmakingStats_GetSkillMean addr 0x2581954 size 0x7c virtual false final false
  static inline double_t ovr_MatchmakingStats_GetSkillMean(void* obj);

  /// @brief Method ovr_MatchmakingStats_GetSkillStandardDeviation addr 0x25819d0 size 0x7c virtual false final false
  static inline double_t ovr_MatchmakingStats_GetSkillStandardDeviation(void* obj);

  /// @brief Method ovr_MatchmakingStats_GetWinCount addr 0x2581a4c size 0x7c virtual false final false
  static inline uint32_t ovr_MatchmakingStats_GetWinCount(void* obj);

  /// @brief Method ovr_Message_GetAbuseReportRecording addr 0x2581ac8 size 0x7c virtual false final false
  static inline void* ovr_Message_GetAbuseReportRecording(void* obj);

  /// @brief Method ovr_Message_GetAchievementDefinitionArray addr 0x2581b44 size 0x7c virtual false final false
  static inline void* ovr_Message_GetAchievementDefinitionArray(void* obj);

  /// @brief Method ovr_Message_GetAchievementProgressArray addr 0x2581bc0 size 0x7c virtual false final false
  static inline void* ovr_Message_GetAchievementProgressArray(void* obj);

  /// @brief Method ovr_Message_GetAchievementUpdate addr 0x2581c3c size 0x7c virtual false final false
  static inline void* ovr_Message_GetAchievementUpdate(void* obj);

  /// @brief Method ovr_Message_GetApplicationInviteArray addr 0x2581cb8 size 0x7c virtual false final false
  static inline void* ovr_Message_GetApplicationInviteArray(void* obj);

  /// @brief Method ovr_Message_GetApplicationVersion addr 0x2581d34 size 0x7c virtual false final false
  static inline void* ovr_Message_GetApplicationVersion(void* obj);

  /// @brief Method ovr_Message_GetAssetDetails addr 0x2581db0 size 0x7c virtual false final false
  static inline void* ovr_Message_GetAssetDetails(void* obj);

  /// @brief Method ovr_Message_GetAssetDetailsArray addr 0x2581e2c size 0x7c virtual false final false
  static inline void* ovr_Message_GetAssetDetailsArray(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDeleteResult addr 0x2581ea8 size 0x7c virtual false final false
  static inline void* ovr_Message_GetAssetFileDeleteResult(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadCancelResult addr 0x2581f24 size 0x7c virtual false final false
  static inline void* ovr_Message_GetAssetFileDownloadCancelResult(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadResult addr 0x2581fa0 size 0x7c virtual false final false
  static inline void* ovr_Message_GetAssetFileDownloadResult(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadUpdate addr 0x258201c size 0x7c virtual false final false
  static inline void* ovr_Message_GetAssetFileDownloadUpdate(void* obj);

  /// @brief Method ovr_Message_GetAvatarEditorResult addr 0x2582098 size 0x7c virtual false final false
  static inline void* ovr_Message_GetAvatarEditorResult(void* obj);

  /// @brief Method ovr_Message_GetBlockedUserArray addr 0x2582114 size 0x7c virtual false final false
  static inline void* ovr_Message_GetBlockedUserArray(void* obj);

  /// @brief Method ovr_Message_GetCalApplicationFinalized addr 0x2582190 size 0x7c virtual false final false
  static inline void* ovr_Message_GetCalApplicationFinalized(void* obj);

  /// @brief Method ovr_Message_GetCalApplicationProposed addr 0x258220c size 0x7c virtual false final false
  static inline void* ovr_Message_GetCalApplicationProposed(void* obj);

  /// @brief Method ovr_Message_GetCalApplicationSuggestionArray addr 0x2582288 size 0x7c virtual false final false
  static inline void* ovr_Message_GetCalApplicationSuggestionArray(void* obj);

  /// @brief Method ovr_Message_GetChallenge addr 0x2582304 size 0x7c virtual false final false
  static inline void* ovr_Message_GetChallenge(void* obj);

  /// @brief Method ovr_Message_GetChallengeArray addr 0x2582380 size 0x7c virtual false final false
  static inline void* ovr_Message_GetChallengeArray(void* obj);

  /// @brief Method ovr_Message_GetChallengeEntryArray addr 0x25823fc size 0x7c virtual false final false
  static inline void* ovr_Message_GetChallengeEntryArray(void* obj);

  /// @brief Method ovr_Message_GetCloudStorageConflictMetadata addr 0x2582478 size 0x7c virtual false final false
  static inline void* ovr_Message_GetCloudStorageConflictMetadata(void* obj);

  /// @brief Method ovr_Message_GetCloudStorageData addr 0x25824f4 size 0x7c virtual false final false
  static inline void* ovr_Message_GetCloudStorageData(void* obj);

  /// @brief Method ovr_Message_GetCloudStorageMetadata addr 0x2582570 size 0x7c virtual false final false
  static inline void* ovr_Message_GetCloudStorageMetadata(void* obj);

  /// @brief Method ovr_Message_GetCloudStorageMetadataArray addr 0x25825ec size 0x7c virtual false final false
  static inline void* ovr_Message_GetCloudStorageMetadataArray(void* obj);

  /// @brief Method ovr_Message_GetCloudStorageUpdateResponse addr 0x2582668 size 0x7c virtual false final false
  static inline void* ovr_Message_GetCloudStorageUpdateResponse(void* obj);

  /// @brief Method ovr_Message_GetDataStore addr 0x25826e4 size 0x7c virtual false final false
  static inline void* ovr_Message_GetDataStore(void* obj);

  /// @brief Method ovr_Message_GetDestinationArray addr 0x2582760 size 0x7c virtual false final false
  static inline void* ovr_Message_GetDestinationArray(void* obj);

  /// @brief Method ovr_Message_GetError addr 0x25827dc size 0x7c virtual false final false
  static inline void* ovr_Message_GetError(void* obj);

  /// @brief Method ovr_Message_GetGroupPresenceJoinIntent addr 0x2582858 size 0x7c virtual false final false
  static inline void* ovr_Message_GetGroupPresenceJoinIntent(void* obj);

  /// @brief Method ovr_Message_GetGroupPresenceLeaveIntent addr 0x25828d4 size 0x7c virtual false final false
  static inline void* ovr_Message_GetGroupPresenceLeaveIntent(void* obj);

  /// @brief Method ovr_Message_GetHttpTransferUpdate addr 0x2582950 size 0x7c virtual false final false
  static inline void* ovr_Message_GetHttpTransferUpdate(void* obj);

  /// @brief Method ovr_Message_GetInstalledApplicationArray addr 0x25829cc size 0x7c virtual false final false
  static inline void* ovr_Message_GetInstalledApplicationArray(void* obj);

  /// @brief Method ovr_Message_GetInvitePanelResultInfo addr 0x2582a48 size 0x7c virtual false final false
  static inline void* ovr_Message_GetInvitePanelResultInfo(void* obj);

  /// @brief Method ovr_Message_GetLaunchBlockFlowResult addr 0x2582ac4 size 0x7c virtual false final false
  static inline void* ovr_Message_GetLaunchBlockFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchFriendRequestFlowResult addr 0x2582b40 size 0x7c virtual false final false
  static inline void* ovr_Message_GetLaunchFriendRequestFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchInvitePanelFlowResult addr 0x2582bbc size 0x7c virtual false final false
  static inline void* ovr_Message_GetLaunchInvitePanelFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchReportFlowResult addr 0x2582c38 size 0x7c virtual false final false
  static inline void* ovr_Message_GetLaunchReportFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchUnblockFlowResult addr 0x2582cb4 size 0x7c virtual false final false
  static inline void* ovr_Message_GetLaunchUnblockFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLeaderboardArray addr 0x2582d30 size 0x7c virtual false final false
  static inline void* ovr_Message_GetLeaderboardArray(void* obj);

  /// @brief Method ovr_Message_GetLeaderboardEntryArray addr 0x2582dac size 0x7c virtual false final false
  static inline void* ovr_Message_GetLeaderboardEntryArray(void* obj);

  /// @brief Method ovr_Message_GetLeaderboardUpdateStatus addr 0x2582e28 size 0x7c virtual false final false
  static inline void* ovr_Message_GetLeaderboardUpdateStatus(void* obj);

  /// @brief Method ovr_Message_GetLinkedAccountArray addr 0x2582ea4 size 0x7c virtual false final false
  static inline void* ovr_Message_GetLinkedAccountArray(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingApplicationStatus addr 0x2582f20 size 0x7c virtual false final false
  static inline void* ovr_Message_GetLivestreamingApplicationStatus(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingStartResult addr 0x2582f9c size 0x7c virtual false final false
  static inline void* ovr_Message_GetLivestreamingStartResult(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingStatus addr 0x2583018 size 0x7c virtual false final false
  static inline void* ovr_Message_GetLivestreamingStatus(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingVideoStats addr 0x2583094 size 0x7c virtual false final false
  static inline void* ovr_Message_GetLivestreamingVideoStats(void* obj);

  /// @brief Method ovr_Message_GetMatchmakingAdminSnapshot addr 0x2583110 size 0x7c virtual false final false
  static inline void* ovr_Message_GetMatchmakingAdminSnapshot(void* obj);

  /// @brief Method ovr_Message_GetMatchmakingBrowseResult addr 0x258318c size 0x7c virtual false final false
  static inline void* ovr_Message_GetMatchmakingBrowseResult(void* obj);

  /// @brief Method ovr_Message_GetMatchmakingEnqueueResult addr 0x2583208 size 0x7c virtual false final false
  static inline void* ovr_Message_GetMatchmakingEnqueueResult(void* obj);

  /// @brief Method ovr_Message_GetMatchmakingEnqueueResultAndRoom addr 0x2583284 size 0x7c virtual false final false
  static inline void* ovr_Message_GetMatchmakingEnqueueResultAndRoom(void* obj);

  /// @brief Method ovr_Message_GetMatchmakingRoomArray addr 0x2583300 size 0x7c virtual false final false
  static inline void* ovr_Message_GetMatchmakingRoomArray(void* obj);

  /// @brief Method ovr_Message_GetMatchmakingStats addr 0x258337c size 0x7c virtual false final false
  static inline void* ovr_Message_GetMatchmakingStats(void* obj);

  /// @brief Method ovr_Message_GetMicrophoneAvailabilityState addr 0x25833f8 size 0x7c virtual false final false
  static inline void* ovr_Message_GetMicrophoneAvailabilityState(void* obj);

  /// @brief Method ovr_Message_GetNativeMessage addr 0x2583474 size 0x7c virtual false final false
  static inline void* ovr_Message_GetNativeMessage(void* obj);

  /// @brief Method ovr_Message_GetNetSyncConnection addr 0x25834f0 size 0x7c virtual false final false
  static inline void* ovr_Message_GetNetSyncConnection(void* obj);

  /// @brief Method ovr_Message_GetNetSyncSessionArray addr 0x258356c size 0x7c virtual false final false
  static inline void* ovr_Message_GetNetSyncSessionArray(void* obj);

  /// @brief Method ovr_Message_GetNetSyncSessionsChangedNotification addr 0x25835e8 size 0x7c virtual false final false
  static inline void* ovr_Message_GetNetSyncSessionsChangedNotification(void* obj);

  /// @brief Method ovr_Message_GetNetSyncSetSessionPropertyResult addr 0x2583664 size 0x7c virtual false final false
  static inline void* ovr_Message_GetNetSyncSetSessionPropertyResult(void* obj);

  /// @brief Method ovr_Message_GetNetSyncVoipAttenuationValueArray addr 0x25836e0 size 0x7c virtual false final false
  static inline void* ovr_Message_GetNetSyncVoipAttenuationValueArray(void* obj);

  /// @brief Method ovr_Message_GetNetworkingPeer addr 0x258375c size 0x7c virtual false final false
  static inline void* ovr_Message_GetNetworkingPeer(void* obj);

  /// @brief Method ovr_Message_GetOrgScopedID addr 0x25837d8 size 0x7c virtual false final false
  static inline void* ovr_Message_GetOrgScopedID(void* obj);

  /// @brief Method ovr_Message_GetParty addr 0x2583854 size 0x7c virtual false final false
  static inline void* ovr_Message_GetParty(void* obj);

  /// @brief Method ovr_Message_GetPartyID addr 0x25838d0 size 0x7c virtual false final false
  static inline void* ovr_Message_GetPartyID(void* obj);

  /// @brief Method ovr_Message_GetPartyUpdateNotification addr 0x258394c size 0x7c virtual false final false
  static inline void* ovr_Message_GetPartyUpdateNotification(void* obj);

  /// @brief Method ovr_Message_GetPidArray addr 0x25839c8 size 0x7c virtual false final false
  static inline void* ovr_Message_GetPidArray(void* obj);

  /// @brief Method ovr_Message_GetPingResult addr 0x2583a44 size 0x7c virtual false final false
  static inline void* ovr_Message_GetPingResult(void* obj);

  /// @brief Method ovr_Message_GetPlatformInitialize addr 0x2583ac0 size 0x7c virtual false final false
  static inline void* ovr_Message_GetPlatformInitialize(void* obj);

  /// @brief Method ovr_Message_GetProductArray addr 0x2583b3c size 0x7c virtual false final false
  static inline void* ovr_Message_GetProductArray(void* obj);

  /// @brief Method ovr_Message_GetPurchase addr 0x2583bb8 size 0x7c virtual false final false
  static inline void* ovr_Message_GetPurchase(void* obj);

  /// @brief Method ovr_Message_GetPurchaseArray addr 0x2583c34 size 0x7c virtual false final false
  static inline void* ovr_Message_GetPurchaseArray(void* obj);

  /// @brief Method ovr_Message_GetRejoinDialogResult addr 0x2583cb0 size 0x7c virtual false final false
  static inline void* ovr_Message_GetRejoinDialogResult(void* obj);

  /// @brief Method ovr_Message_GetRequestID addr 0x2583d2c size 0x7c virtual false final false
  static inline uint64_t ovr_Message_GetRequestID(void* obj);

  /// @brief Method ovr_Message_GetRoom addr 0x2583da8 size 0x7c virtual false final false
  static inline void* ovr_Message_GetRoom(void* obj);

  /// @brief Method ovr_Message_GetRoomArray addr 0x2583e24 size 0x7c virtual false final false
  static inline void* ovr_Message_GetRoomArray(void* obj);

  /// @brief Method ovr_Message_GetRoomInviteNotification addr 0x2583ea0 size 0x7c virtual false final false
  static inline void* ovr_Message_GetRoomInviteNotification(void* obj);

  /// @brief Method ovr_Message_GetRoomInviteNotificationArray addr 0x2583f1c size 0x7c virtual false final false
  static inline void* ovr_Message_GetRoomInviteNotificationArray(void* obj);

  /// @brief Method ovr_Message_GetSdkAccountArray addr 0x2583f98 size 0x7c virtual false final false
  static inline void* ovr_Message_GetSdkAccountArray(void* obj);

  /// @brief Method ovr_Message_GetSendInvitesResult addr 0x2584014 size 0x7c virtual false final false
  static inline void* ovr_Message_GetSendInvitesResult(void* obj);

  /// @brief Method ovr_Message_GetShareMediaResult addr 0x2584090 size 0x7c virtual false final false
  static inline void* ovr_Message_GetShareMediaResult(void* obj);

  /// @brief Method ovr_Message_GetString addr 0x258410c size 0x58 virtual false final false
  static inline ::StringW ovr_Message_GetString(void* obj);

  /// @brief Method ovr_Message_GetString_Native addr 0x2584164 size 0x7c virtual false final false
  static inline void* ovr_Message_GetString_Native(void* obj);

  /// @brief Method ovr_Message_GetSystemVoipState addr 0x25841e0 size 0x7c virtual false final false
  static inline void* ovr_Message_GetSystemVoipState(void* obj);

  /// @brief Method ovr_Message_GetType addr 0x258425c size 0x7c virtual false final false
  static inline ::Oculus::Platform::__Message__MessageType ovr_Message_GetType(void* obj);

  /// @brief Method ovr_Message_GetUser addr 0x25842d8 size 0x7c virtual false final false
  static inline void* ovr_Message_GetUser(void* obj);

  /// @brief Method ovr_Message_GetUserAndRoomArray addr 0x2584354 size 0x7c virtual false final false
  static inline void* ovr_Message_GetUserAndRoomArray(void* obj);

  /// @brief Method ovr_Message_GetUserArray addr 0x25843d0 size 0x7c virtual false final false
  static inline void* ovr_Message_GetUserArray(void* obj);

  /// @brief Method ovr_Message_GetUserCapabilityArray addr 0x258444c size 0x7c virtual false final false
  static inline void* ovr_Message_GetUserCapabilityArray(void* obj);

  /// @brief Method ovr_Message_GetUserDataStoreUpdateResponse addr 0x25844c8 size 0x7c virtual false final false
  static inline void* ovr_Message_GetUserDataStoreUpdateResponse(void* obj);

  /// @brief Method ovr_Message_GetUserProof addr 0x2584544 size 0x7c virtual false final false
  static inline void* ovr_Message_GetUserProof(void* obj);

  /// @brief Method ovr_Message_GetUserReportID addr 0x25845c0 size 0x7c virtual false final false
  static inline void* ovr_Message_GetUserReportID(void* obj);

  /// @brief Method ovr_Message_IsError addr 0x258463c size 0x84 virtual false final false
  static inline bool ovr_Message_IsError(void* obj);

  /// @brief Method ovr_Microphone_GetNumSamplesAvailable addr 0x25846c0 size 0x7c virtual false final false
  static inline void* ovr_Microphone_GetNumSamplesAvailable(void* obj);

  /// @brief Method ovr_Microphone_GetOutputBufferMaxSize addr 0x258473c size 0x7c virtual false final false
  static inline void* ovr_Microphone_GetOutputBufferMaxSize(void* obj);

  /// @brief Method ovr_Microphone_GetPCM addr 0x25847b8 size 0x9c virtual false final false
  static inline void* ovr_Microphone_GetPCM(void* obj, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Microphone_GetPCMFloat addr 0x2584854 size 0x9c virtual false final false
  static inline void* ovr_Microphone_GetPCMFloat(void* obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Microphone_ReadData addr 0x25848f0 size 0x9c virtual false final false
  static inline void* ovr_Microphone_ReadData(void* obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferSize);

  /// @brief Method ovr_Microphone_SetAcceptableRecordingDelayHint addr 0x258498c size 0x84 virtual false final false
  static inline void ovr_Microphone_SetAcceptableRecordingDelayHint(void* obj, void* delayMs);

  /// @brief Method ovr_Microphone_Start addr 0x2584a10 size 0x7c virtual false final false
  static inline void ovr_Microphone_Start(void* obj);

  /// @brief Method ovr_Microphone_Stop addr 0x2584a8c size 0x7c virtual false final false
  static inline void ovr_Microphone_Stop(void* obj);

  /// @brief Method ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable addr 0x2584b08 size 0x84 virtual false final false
  static inline bool ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetConnectionId addr 0x2584b8c size 0x7c virtual false final false
  static inline int64_t ovr_NetSyncConnection_GetConnectionId(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetDisconnectReason addr 0x2584c08 size 0x7c virtual false final false
  static inline ::Oculus::Platform::NetSyncDisconnectReason ovr_NetSyncConnection_GetDisconnectReason(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetSessionId addr 0x2584c84 size 0x7c virtual false final false
  static inline uint64_t ovr_NetSyncConnection_GetSessionId(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetStatus addr 0x2584d00 size 0x7c virtual false final false
  static inline ::Oculus::Platform::NetSyncConnectionStatus ovr_NetSyncConnection_GetStatus(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetZoneId addr 0x2584d7c size 0x58 virtual false final false
  static inline ::StringW ovr_NetSyncConnection_GetZoneId(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetZoneId_Native addr 0x2584dd4 size 0x7c virtual false final false
  static inline void* ovr_NetSyncConnection_GetZoneId_Native(void* obj);

  /// @brief Method ovr_NetSyncSession_GetConnectionId addr 0x2584e50 size 0x7c virtual false final false
  static inline int64_t ovr_NetSyncSession_GetConnectionId(void* obj);

  /// @brief Method ovr_NetSyncSession_GetMuted addr 0x2584ecc size 0x84 virtual false final false
  static inline bool ovr_NetSyncSession_GetMuted(void* obj);

  /// @brief Method ovr_NetSyncSession_GetSessionId addr 0x2584f50 size 0x7c virtual false final false
  static inline uint64_t ovr_NetSyncSession_GetSessionId(void* obj);

  /// @brief Method ovr_NetSyncSession_GetUserId addr 0x2584fcc size 0x7c virtual false final false
  static inline uint64_t ovr_NetSyncSession_GetUserId(void* obj);

  /// @brief Method ovr_NetSyncSession_GetVoipGroup addr 0x2585048 size 0x58 virtual false final false
  static inline ::StringW ovr_NetSyncSession_GetVoipGroup(void* obj);

  /// @brief Method ovr_NetSyncSession_GetVoipGroup_Native addr 0x25850a0 size 0x7c virtual false final false
  static inline void* ovr_NetSyncSession_GetVoipGroup_Native(void* obj);

  /// @brief Method ovr_NetSyncSessionArray_GetElement addr 0x258511c size 0x84 virtual false final false
  static inline void* ovr_NetSyncSessionArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_NetSyncSessionArray_GetSize addr 0x25851a0 size 0x7c virtual false final false
  static inline void* ovr_NetSyncSessionArray_GetSize(void* obj);

  /// @brief Method ovr_NetSyncSessionsChangedNotification_GetConnectionId addr 0x258521c size 0x7c virtual false final false
  static inline int64_t ovr_NetSyncSessionsChangedNotification_GetConnectionId(void* obj);

  /// @brief Method ovr_NetSyncSessionsChangedNotification_GetSessions addr 0x2585298 size 0x7c virtual false final false
  static inline void* ovr_NetSyncSessionsChangedNotification_GetSessions(void* obj);

  /// @brief Method ovr_NetSyncSetSessionPropertyResult_GetSession addr 0x2585314 size 0x7c virtual false final false
  static inline void* ovr_NetSyncSetSessionPropertyResult_GetSession(void* obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValue_GetDecibels addr 0x2585390 size 0x7c virtual false final false
  static inline float_t ovr_NetSyncVoipAttenuationValue_GetDecibels(void* obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValue_GetDistance addr 0x258540c size 0x7c virtual false final false
  static inline float_t ovr_NetSyncVoipAttenuationValue_GetDistance(void* obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetElement addr 0x2585488 size 0x84 virtual false final false
  static inline void* ovr_NetSyncVoipAttenuationValueArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetSize addr 0x258550c size 0x7c virtual false final false
  static inline void* ovr_NetSyncVoipAttenuationValueArray_GetSize(void* obj);

  /// @brief Method ovr_NetworkingPeer_GetID addr 0x2585588 size 0x7c virtual false final false
  static inline uint64_t ovr_NetworkingPeer_GetID(void* obj);

  /// @brief Method ovr_NetworkingPeer_GetState addr 0x2585604 size 0x7c virtual false final false
  static inline ::Oculus::Platform::PeerConnectionState ovr_NetworkingPeer_GetState(void* obj);

  /// @brief Method ovr_OrgScopedID_GetID addr 0x2585680 size 0x7c virtual false final false
  static inline uint64_t ovr_OrgScopedID_GetID(void* obj);

  /// @brief Method ovr_Packet_Free addr 0x25856fc size 0x7c virtual false final false
  static inline void ovr_Packet_Free(void* obj);

  /// @brief Method ovr_Packet_GetBytes addr 0x2585778 size 0x7c virtual false final false
  static inline void* ovr_Packet_GetBytes(void* obj);

  /// @brief Method ovr_Packet_GetSendPolicy addr 0x25857f4 size 0x7c virtual false final false
  static inline ::Oculus::Platform::SendPolicy ovr_Packet_GetSendPolicy(void* obj);

  /// @brief Method ovr_Packet_GetSenderID addr 0x2585870 size 0x7c virtual false final false
  static inline uint64_t ovr_Packet_GetSenderID(void* obj);

  /// @brief Method ovr_Packet_GetSize addr 0x25858ec size 0x7c virtual false final false
  static inline void* ovr_Packet_GetSize(void* obj);

  /// @brief Method ovr_Party_GetID addr 0x2585968 size 0x7c virtual false final false
  static inline uint64_t ovr_Party_GetID(void* obj);

  /// @brief Method ovr_Party_GetInvitedUsers addr 0x25859e4 size 0x7c virtual false final false
  static inline void* ovr_Party_GetInvitedUsers(void* obj);

  /// @brief Method ovr_Party_GetLeader addr 0x2585a60 size 0x7c virtual false final false
  static inline void* ovr_Party_GetLeader(void* obj);

  /// @brief Method ovr_Party_GetRoom addr 0x2585adc size 0x78 virtual false final false
  static inline void* ovr_Party_GetRoom(void* obj);

  /// @brief Method ovr_Party_GetUsers addr 0x2585b54 size 0x7c virtual false final false
  static inline void* ovr_Party_GetUsers(void* obj);

  /// @brief Method ovr_PartyID_GetID addr 0x2585bd0 size 0x78 virtual false final false
  static inline uint64_t ovr_PartyID_GetID(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetAction addr 0x2585c48 size 0x7c virtual false final false
  static inline ::Oculus::Platform::PartyUpdateAction ovr_PartyUpdateNotification_GetAction(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetPartyId addr 0x2585cc4 size 0x7c virtual false final false
  static inline uint64_t ovr_PartyUpdateNotification_GetPartyId(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetSenderId addr 0x2585d40 size 0x7c virtual false final false
  static inline uint64_t ovr_PartyUpdateNotification_GetSenderId(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp addr 0x2585dbc size 0x58 virtual false final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUpdateTimestamp(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp_Native addr 0x2585e14 size 0x7c virtual false final false
  static inline void* ovr_PartyUpdateNotification_GetUpdateTimestamp_Native(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserAlias addr 0x2585e90 size 0x58 virtual false final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUserAlias(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserAlias_Native addr 0x2585ee8 size 0x7c virtual false final false
  static inline void* ovr_PartyUpdateNotification_GetUserAlias_Native(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserId addr 0x2585f64 size 0x7c virtual false final false
  static inline uint64_t ovr_PartyUpdateNotification_GetUserId(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserName addr 0x2585fe0 size 0x58 virtual false final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUserName(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserName_Native addr 0x2586038 size 0x7c virtual false final false
  static inline void* ovr_PartyUpdateNotification_GetUserName_Native(void* obj);

  /// @brief Method ovr_Pid_GetId addr 0x25860b4 size 0x58 virtual false final false
  static inline ::StringW ovr_Pid_GetId(void* obj);

  /// @brief Method ovr_Pid_GetId_Native addr 0x258610c size 0x7c virtual false final false
  static inline void* ovr_Pid_GetId_Native(void* obj);

  /// @brief Method ovr_PidArray_GetElement addr 0x2586188 size 0x84 virtual false final false
  static inline void* ovr_PidArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_PidArray_GetSize addr 0x258620c size 0x7c virtual false final false
  static inline void* ovr_PidArray_GetSize(void* obj);

  /// @brief Method ovr_PingResult_GetID addr 0x2586288 size 0x7c virtual false final false
  static inline uint64_t ovr_PingResult_GetID(void* obj);

  /// @brief Method ovr_PingResult_GetPingTimeUsec addr 0x2586304 size 0x7c virtual false final false
  static inline uint64_t ovr_PingResult_GetPingTimeUsec(void* obj);

  /// @brief Method ovr_PingResult_IsTimeout addr 0x2586380 size 0x84 virtual false final false
  static inline bool ovr_PingResult_IsTimeout(void* obj);

  /// @brief Method ovr_PlatformInitialize_GetResult addr 0x2586404 size 0x7c virtual false final false
  static inline ::Oculus::Platform::PlatformInitializeResult ovr_PlatformInitialize_GetResult(void* obj);

  /// @brief Method ovr_Price_GetAmountInHundredths addr 0x2586480 size 0x7c virtual false final false
  static inline uint32_t ovr_Price_GetAmountInHundredths(void* obj);

  /// @brief Method ovr_Price_GetCurrency addr 0x25864fc size 0x58 virtual false final false
  static inline ::StringW ovr_Price_GetCurrency(void* obj);

  /// @brief Method ovr_Price_GetCurrency_Native addr 0x2586554 size 0x7c virtual false final false
  static inline void* ovr_Price_GetCurrency_Native(void* obj);

  /// @brief Method ovr_Price_GetFormatted addr 0x25865d0 size 0x58 virtual false final false
  static inline ::StringW ovr_Price_GetFormatted(void* obj);

  /// @brief Method ovr_Price_GetFormatted_Native addr 0x2586628 size 0x7c virtual false final false
  static inline void* ovr_Price_GetFormatted_Native(void* obj);

  /// @brief Method ovr_Product_GetDescription addr 0x25866a4 size 0x58 virtual false final false
  static inline ::StringW ovr_Product_GetDescription(void* obj);

  /// @brief Method ovr_Product_GetDescription_Native addr 0x25866fc size 0x7c virtual false final false
  static inline void* ovr_Product_GetDescription_Native(void* obj);

  /// @brief Method ovr_Product_GetFormattedPrice addr 0x2586778 size 0x58 virtual false final false
  static inline ::StringW ovr_Product_GetFormattedPrice(void* obj);

  /// @brief Method ovr_Product_GetFormattedPrice_Native addr 0x25867d0 size 0x7c virtual false final false
  static inline void* ovr_Product_GetFormattedPrice_Native(void* obj);

  /// @brief Method ovr_Product_GetName addr 0x258684c size 0x58 virtual false final false
  static inline ::StringW ovr_Product_GetName(void* obj);

  /// @brief Method ovr_Product_GetName_Native addr 0x25868a4 size 0x7c virtual false final false
  static inline void* ovr_Product_GetName_Native(void* obj);

  /// @brief Method ovr_Product_GetSKU addr 0x2586920 size 0x58 virtual false final false
  static inline ::StringW ovr_Product_GetSKU(void* obj);

  /// @brief Method ovr_Product_GetSKU_Native addr 0x2586978 size 0x7c virtual false final false
  static inline void* ovr_Product_GetSKU_Native(void* obj);

  /// @brief Method ovr_ProductArray_GetElement addr 0x25869f4 size 0x84 virtual false final false
  static inline void* ovr_ProductArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ProductArray_GetNextUrl addr 0x2586a78 size 0x58 virtual false final false
  static inline ::StringW ovr_ProductArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ProductArray_GetNextUrl_Native addr 0x2586ad0 size 0x7c virtual false final false
  static inline void* ovr_ProductArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ProductArray_GetSize addr 0x2586b4c size 0x7c virtual false final false
  static inline void* ovr_ProductArray_GetSize(void* obj);

  /// @brief Method ovr_ProductArray_HasNextPage addr 0x2586bc8 size 0x84 virtual false final false
  static inline bool ovr_ProductArray_HasNextPage(void* obj);

  /// @brief Method ovr_Purchase_GetDeveloperPayload addr 0x2586c4c size 0x58 virtual false final false
  static inline ::StringW ovr_Purchase_GetDeveloperPayload(void* obj);

  /// @brief Method ovr_Purchase_GetDeveloperPayload_Native addr 0x2586ca4 size 0x7c virtual false final false
  static inline void* ovr_Purchase_GetDeveloperPayload_Native(void* obj);

  /// @brief Method ovr_Purchase_GetExpirationTime addr 0x2586d20 size 0x58 virtual false final false
  static inline ::System::DateTime ovr_Purchase_GetExpirationTime(void* obj);

  /// @brief Method ovr_Purchase_GetExpirationTime_Native addr 0x2586d78 size 0x7c virtual false final false
  static inline uint64_t ovr_Purchase_GetExpirationTime_Native(void* obj);

  /// @brief Method ovr_Purchase_GetGrantTime addr 0x2586df4 size 0x58 virtual false final false
  static inline ::System::DateTime ovr_Purchase_GetGrantTime(void* obj);

  /// @brief Method ovr_Purchase_GetGrantTime_Native addr 0x2586e4c size 0x7c virtual false final false
  static inline uint64_t ovr_Purchase_GetGrantTime_Native(void* obj);

  /// @brief Method ovr_Purchase_GetPurchaseID addr 0x2586ec8 size 0x7c virtual false final false
  static inline uint64_t ovr_Purchase_GetPurchaseID(void* obj);

  /// @brief Method ovr_Purchase_GetPurchaseStrID addr 0x2586f44 size 0x58 virtual false final false
  static inline ::StringW ovr_Purchase_GetPurchaseStrID(void* obj);

  /// @brief Method ovr_Purchase_GetPurchaseStrID_Native addr 0x2586f9c size 0x7c virtual false final false
  static inline void* ovr_Purchase_GetPurchaseStrID_Native(void* obj);

  /// @brief Method ovr_Purchase_GetReportingId addr 0x2587018 size 0x58 virtual false final false
  static inline ::StringW ovr_Purchase_GetReportingId(void* obj);

  /// @brief Method ovr_Purchase_GetReportingId_Native addr 0x2587070 size 0x7c virtual false final false
  static inline void* ovr_Purchase_GetReportingId_Native(void* obj);

  /// @brief Method ovr_Purchase_GetSKU addr 0x25870ec size 0x58 virtual false final false
  static inline ::StringW ovr_Purchase_GetSKU(void* obj);

  /// @brief Method ovr_Purchase_GetSKU_Native addr 0x2587144 size 0x7c virtual false final false
  static inline void* ovr_Purchase_GetSKU_Native(void* obj);

  /// @brief Method ovr_PurchaseArray_GetElement addr 0x25871c0 size 0x84 virtual false final false
  static inline void* ovr_PurchaseArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_PurchaseArray_GetNextUrl addr 0x2587244 size 0x58 virtual false final false
  static inline ::StringW ovr_PurchaseArray_GetNextUrl(void* obj);

  /// @brief Method ovr_PurchaseArray_GetNextUrl_Native addr 0x258729c size 0x7c virtual false final false
  static inline void* ovr_PurchaseArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_PurchaseArray_GetSize addr 0x2587318 size 0x7c virtual false final false
  static inline void* ovr_PurchaseArray_GetSize(void* obj);

  /// @brief Method ovr_PurchaseArray_HasNextPage addr 0x2587394 size 0x84 virtual false final false
  static inline bool ovr_PurchaseArray_HasNextPage(void* obj);

  /// @brief Method ovr_RejoinDialogResult_GetRejoinSelected addr 0x2587418 size 0x84 virtual false final false
  static inline bool ovr_RejoinDialogResult_GetRejoinSelected(void* obj);

  /// @brief Method ovr_Room_GetApplicationID addr 0x258749c size 0x7c virtual false final false
  static inline uint64_t ovr_Room_GetApplicationID(void* obj);

  /// @brief Method ovr_Room_GetDataStore addr 0x2587518 size 0x7c virtual false final false
  static inline void* ovr_Room_GetDataStore(void* obj);

  /// @brief Method ovr_Room_GetDescription addr 0x2587594 size 0x58 virtual false final false
  static inline ::StringW ovr_Room_GetDescription(void* obj);

  /// @brief Method ovr_Room_GetDescription_Native addr 0x25875ec size 0x7c virtual false final false
  static inline void* ovr_Room_GetDescription_Native(void* obj);

  /// @brief Method ovr_Room_GetID addr 0x2587668 size 0x7c virtual false final false
  static inline uint64_t ovr_Room_GetID(void* obj);

  /// @brief Method ovr_Room_GetInvitedUsers addr 0x25876e4 size 0x7c virtual false final false
  static inline void* ovr_Room_GetInvitedUsers(void* obj);

  /// @brief Method ovr_Room_GetIsMembershipLocked addr 0x2587760 size 0x84 virtual false final false
  static inline bool ovr_Room_GetIsMembershipLocked(void* obj);

  /// @brief Method ovr_Room_GetJoinPolicy addr 0x25877e4 size 0x7c virtual false final false
  static inline ::Oculus::Platform::RoomJoinPolicy ovr_Room_GetJoinPolicy(void* obj);

  /// @brief Method ovr_Room_GetJoinability addr 0x2587860 size 0x7c virtual false final false
  static inline ::Oculus::Platform::RoomJoinability ovr_Room_GetJoinability(void* obj);

  /// @brief Method ovr_Room_GetMatchedUsers addr 0x25878dc size 0x7c virtual false final false
  static inline void* ovr_Room_GetMatchedUsers(void* obj);

  /// @brief Method ovr_Room_GetMaxUsers addr 0x2587958 size 0x7c virtual false final false
  static inline uint32_t ovr_Room_GetMaxUsers(void* obj);

  /// @brief Method ovr_Room_GetName addr 0x25879d4 size 0x58 virtual false final false
  static inline ::StringW ovr_Room_GetName(void* obj);

  /// @brief Method ovr_Room_GetName_Native addr 0x2587a2c size 0x7c virtual false final false
  static inline void* ovr_Room_GetName_Native(void* obj);

  /// @brief Method ovr_Room_GetOwner addr 0x2587aa8 size 0x78 virtual false final false
  static inline void* ovr_Room_GetOwner(void* obj);

  /// @brief Method ovr_Room_GetTeams addr 0x2587b20 size 0x78 virtual false final false
  static inline void* ovr_Room_GetTeams(void* obj);

  /// @brief Method ovr_Room_GetType addr 0x2587b98 size 0x7c virtual false final false
  static inline ::Oculus::Platform::RoomType ovr_Room_GetType(void* obj);

  /// @brief Method ovr_Room_GetUsers addr 0x2587c14 size 0x78 virtual false final false
  static inline void* ovr_Room_GetUsers(void* obj);

  /// @brief Method ovr_Room_GetVersion addr 0x2587c8c size 0x7c virtual false final false
  static inline uint32_t ovr_Room_GetVersion(void* obj);

  /// @brief Method ovr_RoomArray_GetElement addr 0x2587d08 size 0x84 virtual false final false
  static inline void* ovr_RoomArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_RoomArray_GetNextUrl addr 0x2587d8c size 0x58 virtual false final false
  static inline ::StringW ovr_RoomArray_GetNextUrl(void* obj);

  /// @brief Method ovr_RoomArray_GetNextUrl_Native addr 0x2587de4 size 0x7c virtual false final false
  static inline void* ovr_RoomArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_RoomArray_GetSize addr 0x2587e60 size 0x7c virtual false final false
  static inline void* ovr_RoomArray_GetSize(void* obj);

  /// @brief Method ovr_RoomArray_HasNextPage addr 0x2587edc size 0x84 virtual false final false
  static inline bool ovr_RoomArray_HasNextPage(void* obj);

  /// @brief Method ovr_RoomInviteNotification_GetID addr 0x2587f60 size 0x7c virtual false final false
  static inline uint64_t ovr_RoomInviteNotification_GetID(void* obj);

  /// @brief Method ovr_RoomInviteNotification_GetRoomID addr 0x2587fdc size 0x7c virtual false final false
  static inline uint64_t ovr_RoomInviteNotification_GetRoomID(void* obj);

  /// @brief Method ovr_RoomInviteNotification_GetSenderID addr 0x2588058 size 0x7c virtual false final false
  static inline uint64_t ovr_RoomInviteNotification_GetSenderID(void* obj);

  /// @brief Method ovr_RoomInviteNotification_GetSentTime addr 0x25880d4 size 0x58 virtual false final false
  static inline ::System::DateTime ovr_RoomInviteNotification_GetSentTime(void* obj);

  /// @brief Method ovr_RoomInviteNotification_GetSentTime_Native addr 0x258812c size 0x7c virtual false final false
  static inline uint64_t ovr_RoomInviteNotification_GetSentTime_Native(void* obj);

  /// @brief Method ovr_RoomInviteNotificationArray_GetElement addr 0x25881a8 size 0x84 virtual false final false
  static inline void* ovr_RoomInviteNotificationArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_RoomInviteNotificationArray_GetNextUrl addr 0x258822c size 0x58 virtual false final false
  static inline ::StringW ovr_RoomInviteNotificationArray_GetNextUrl(void* obj);

  /// @brief Method ovr_RoomInviteNotificationArray_GetNextUrl_Native addr 0x2588284 size 0x7c virtual false final false
  static inline void* ovr_RoomInviteNotificationArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_RoomInviteNotificationArray_GetSize addr 0x2588300 size 0x7c virtual false final false
  static inline void* ovr_RoomInviteNotificationArray_GetSize(void* obj);

  /// @brief Method ovr_RoomInviteNotificationArray_HasNextPage addr 0x258837c size 0x84 virtual false final false
  static inline bool ovr_RoomInviteNotificationArray_HasNextPage(void* obj);

  /// @brief Method ovr_SdkAccount_GetAccountType addr 0x2588400 size 0x7c virtual false final false
  static inline ::Oculus::Platform::SdkAccountType ovr_SdkAccount_GetAccountType(void* obj);

  /// @brief Method ovr_SdkAccount_GetUserId addr 0x258847c size 0x7c virtual false final false
  static inline uint64_t ovr_SdkAccount_GetUserId(void* obj);

  /// @brief Method ovr_SdkAccountArray_GetElement addr 0x25884f8 size 0x84 virtual false final false
  static inline void* ovr_SdkAccountArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_SdkAccountArray_GetSize addr 0x258857c size 0x7c virtual false final false
  static inline void* ovr_SdkAccountArray_GetSize(void* obj);

  /// @brief Method ovr_SendInvitesResult_GetInvites addr 0x25885f8 size 0x7c virtual false final false
  static inline void* ovr_SendInvitesResult_GetInvites(void* obj);

  /// @brief Method ovr_ShareMediaResult_GetStatus addr 0x2588674 size 0x7c virtual false final false
  static inline ::Oculus::Platform::ShareMediaStatus ovr_ShareMediaResult_GetStatus(void* obj);

  /// @brief Method ovr_SupplementaryMetric_GetID addr 0x25886f0 size 0x7c virtual false final false
  static inline uint64_t ovr_SupplementaryMetric_GetID(void* obj);

  /// @brief Method ovr_SupplementaryMetric_GetMetric addr 0x258876c size 0x7c virtual false final false
  static inline int64_t ovr_SupplementaryMetric_GetMetric(void* obj);

  /// @brief Method ovr_SystemVoipState_GetMicrophoneMuted addr 0x25887e8 size 0x7c virtual false final false
  static inline ::Oculus::Platform::VoipMuteState ovr_SystemVoipState_GetMicrophoneMuted(void* obj);

  /// @brief Method ovr_SystemVoipState_GetStatus addr 0x2588864 size 0x7c virtual false final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_SystemVoipState_GetStatus(void* obj);

  /// @brief Method ovr_Team_GetAssignedUsers addr 0x25888e0 size 0x7c virtual false final false
  static inline void* ovr_Team_GetAssignedUsers(void* obj);

  /// @brief Method ovr_Team_GetMaxUsers addr 0x258895c size 0x7c virtual false final false
  static inline int32_t ovr_Team_GetMaxUsers(void* obj);

  /// @brief Method ovr_Team_GetMinUsers addr 0x25889d8 size 0x7c virtual false final false
  static inline int32_t ovr_Team_GetMinUsers(void* obj);

  /// @brief Method ovr_Team_GetName addr 0x2588a54 size 0x58 virtual false final false
  static inline ::StringW ovr_Team_GetName(void* obj);

  /// @brief Method ovr_Team_GetName_Native addr 0x2588aac size 0x7c virtual false final false
  static inline void* ovr_Team_GetName_Native(void* obj);

  /// @brief Method ovr_TeamArray_GetElement addr 0x2588b28 size 0x84 virtual false final false
  static inline void* ovr_TeamArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_TeamArray_GetSize addr 0x2588bac size 0x7c virtual false final false
  static inline void* ovr_TeamArray_GetSize(void* obj);

  /// @brief Method ovr_TestUser_GetAccessToken addr 0x2588c28 size 0x58 virtual false final false
  static inline ::StringW ovr_TestUser_GetAccessToken(void* obj);

  /// @brief Method ovr_TestUser_GetAccessToken_Native addr 0x2588c80 size 0x7c virtual false final false
  static inline void* ovr_TestUser_GetAccessToken_Native(void* obj);

  /// @brief Method ovr_TestUser_GetAppAccessArray addr 0x2588cfc size 0x7c virtual false final false
  static inline void* ovr_TestUser_GetAppAccessArray(void* obj);

  /// @brief Method ovr_TestUser_GetFbAppAccessArray addr 0x2588d78 size 0x7c virtual false final false
  static inline void* ovr_TestUser_GetFbAppAccessArray(void* obj);

  /// @brief Method ovr_TestUser_GetFriendAccessToken addr 0x2588df4 size 0x58 virtual false final false
  static inline ::StringW ovr_TestUser_GetFriendAccessToken(void* obj);

  /// @brief Method ovr_TestUser_GetFriendAccessToken_Native addr 0x2588e4c size 0x7c virtual false final false
  static inline void* ovr_TestUser_GetFriendAccessToken_Native(void* obj);

  /// @brief Method ovr_TestUser_GetFriendAppAccessArray addr 0x2588ec8 size 0x7c virtual false final false
  static inline void* ovr_TestUser_GetFriendAppAccessArray(void* obj);

  /// @brief Method ovr_TestUser_GetUserAlias addr 0x2588f44 size 0x58 virtual false final false
  static inline ::StringW ovr_TestUser_GetUserAlias(void* obj);

  /// @brief Method ovr_TestUser_GetUserAlias_Native addr 0x2588f9c size 0x7c virtual false final false
  static inline void* ovr_TestUser_GetUserAlias_Native(void* obj);

  /// @brief Method ovr_TestUser_GetUserFbid addr 0x2589018 size 0x7c virtual false final false
  static inline uint64_t ovr_TestUser_GetUserFbid(void* obj);

  /// @brief Method ovr_TestUser_GetUserId addr 0x2589094 size 0x7c virtual false final false
  static inline uint64_t ovr_TestUser_GetUserId(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetAccessToken addr 0x2589110 size 0x58 virtual false final false
  static inline ::StringW ovr_TestUserAppAccess_GetAccessToken(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetAccessToken_Native addr 0x2589168 size 0x7c virtual false final false
  static inline void* ovr_TestUserAppAccess_GetAccessToken_Native(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetAppId addr 0x25891e4 size 0x7c virtual false final false
  static inline uint64_t ovr_TestUserAppAccess_GetAppId(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetUserId addr 0x2589260 size 0x7c virtual false final false
  static inline uint64_t ovr_TestUserAppAccess_GetUserId(void* obj);

  /// @brief Method ovr_TestUserAppAccessArray_GetElement addr 0x25892dc size 0x84 virtual false final false
  static inline void* ovr_TestUserAppAccessArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_TestUserAppAccessArray_GetSize addr 0x2589360 size 0x7c virtual false final false
  static inline void* ovr_TestUserAppAccessArray_GetSize(void* obj);

  /// @brief Method ovr_User_GetDisplayName addr 0x25893dc size 0x58 virtual false final false
  static inline ::StringW ovr_User_GetDisplayName(void* obj);

  /// @brief Method ovr_User_GetDisplayName_Native addr 0x2589434 size 0x7c virtual false final false
  static inline void* ovr_User_GetDisplayName_Native(void* obj);

  /// @brief Method ovr_User_GetID addr 0x25894b0 size 0x7c virtual false final false
  static inline uint64_t ovr_User_GetID(void* obj);

  /// @brief Method ovr_User_GetImageUrl addr 0x258952c size 0x58 virtual false final false
  static inline ::StringW ovr_User_GetImageUrl(void* obj);

  /// @brief Method ovr_User_GetImageUrl_Native addr 0x2589584 size 0x7c virtual false final false
  static inline void* ovr_User_GetImageUrl_Native(void* obj);

  /// @brief Method ovr_User_GetInviteToken addr 0x2589600 size 0x58 virtual false final false
  static inline ::StringW ovr_User_GetInviteToken(void* obj);

  /// @brief Method ovr_User_GetInviteToken_Native addr 0x2589658 size 0x7c virtual false final false
  static inline void* ovr_User_GetInviteToken_Native(void* obj);

  /// @brief Method ovr_User_GetOculusID addr 0x25896d4 size 0x58 virtual false final false
  static inline ::StringW ovr_User_GetOculusID(void* obj);

  /// @brief Method ovr_User_GetOculusID_Native addr 0x258972c size 0x7c virtual false final false
  static inline void* ovr_User_GetOculusID_Native(void* obj);

  /// @brief Method ovr_User_GetPresence addr 0x25897a8 size 0x58 virtual false final false
  static inline ::StringW ovr_User_GetPresence(void* obj);

  /// @brief Method ovr_User_GetPresence_Native addr 0x2589800 size 0x7c virtual false final false
  static inline void* ovr_User_GetPresence_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceDeeplinkMessage addr 0x258987c size 0x58 virtual false final false
  static inline ::StringW ovr_User_GetPresenceDeeplinkMessage(void* obj);

  /// @brief Method ovr_User_GetPresenceDeeplinkMessage_Native addr 0x25898d4 size 0x7c virtual false final false
  static inline void* ovr_User_GetPresenceDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceDestinationApiName addr 0x2589950 size 0x58 virtual false final false
  static inline ::StringW ovr_User_GetPresenceDestinationApiName(void* obj);

  /// @brief Method ovr_User_GetPresenceDestinationApiName_Native addr 0x25899a8 size 0x7c virtual false final false
  static inline void* ovr_User_GetPresenceDestinationApiName_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceLobbySessionId addr 0x2589a24 size 0x58 virtual false final false
  static inline ::StringW ovr_User_GetPresenceLobbySessionId(void* obj);

  /// @brief Method ovr_User_GetPresenceLobbySessionId_Native addr 0x2589a7c size 0x7c virtual false final false
  static inline void* ovr_User_GetPresenceLobbySessionId_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceMatchSessionId addr 0x2589af8 size 0x58 virtual false final false
  static inline ::StringW ovr_User_GetPresenceMatchSessionId(void* obj);

  /// @brief Method ovr_User_GetPresenceMatchSessionId_Native addr 0x2589b50 size 0x7c virtual false final false
  static inline void* ovr_User_GetPresenceMatchSessionId_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceStatus addr 0x2589bcc size 0x7c virtual false final false
  static inline ::Oculus::Platform::UserPresenceStatus ovr_User_GetPresenceStatus(void* obj);

  /// @brief Method ovr_User_GetSmallImageUrl addr 0x2589c48 size 0x58 virtual false final false
  static inline ::StringW ovr_User_GetSmallImageUrl(void* obj);

  /// @brief Method ovr_User_GetSmallImageUrl_Native addr 0x2589ca0 size 0x7c virtual false final false
  static inline void* ovr_User_GetSmallImageUrl_Native(void* obj);

  /// @brief Method ovr_UserAndRoom_GetRoom addr 0x2589d1c size 0x7c virtual false final false
  static inline void* ovr_UserAndRoom_GetRoom(void* obj);

  /// @brief Method ovr_UserAndRoom_GetUser addr 0x2589d98 size 0x7c virtual false final false
  static inline void* ovr_UserAndRoom_GetUser(void* obj);

  /// @brief Method ovr_UserAndRoomArray_GetElement addr 0x2589e14 size 0x84 virtual false final false
  static inline void* ovr_UserAndRoomArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_UserAndRoomArray_GetNextUrl addr 0x2589e98 size 0x58 virtual false final false
  static inline ::StringW ovr_UserAndRoomArray_GetNextUrl(void* obj);

  /// @brief Method ovr_UserAndRoomArray_GetNextUrl_Native addr 0x2589ef0 size 0x7c virtual false final false
  static inline void* ovr_UserAndRoomArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_UserAndRoomArray_GetSize addr 0x2589f6c size 0x7c virtual false final false
  static inline void* ovr_UserAndRoomArray_GetSize(void* obj);

  /// @brief Method ovr_UserAndRoomArray_HasNextPage addr 0x2589fe8 size 0x84 virtual false final false
  static inline bool ovr_UserAndRoomArray_HasNextPage(void* obj);

  /// @brief Method ovr_UserArray_GetElement addr 0x258a06c size 0x84 virtual false final false
  static inline void* ovr_UserArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_UserArray_GetNextUrl addr 0x258a0f0 size 0x58 virtual false final false
  static inline ::StringW ovr_UserArray_GetNextUrl(void* obj);

  /// @brief Method ovr_UserArray_GetNextUrl_Native addr 0x258a148 size 0x7c virtual false final false
  static inline void* ovr_UserArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_UserArray_GetSize addr 0x258a1c4 size 0x7c virtual false final false
  static inline void* ovr_UserArray_GetSize(void* obj);

  /// @brief Method ovr_UserArray_HasNextPage addr 0x258a240 size 0x84 virtual false final false
  static inline bool ovr_UserArray_HasNextPage(void* obj);

  /// @brief Method ovr_UserCapability_GetDescription addr 0x258a2c4 size 0x58 virtual false final false
  static inline ::StringW ovr_UserCapability_GetDescription(void* obj);

  /// @brief Method ovr_UserCapability_GetDescription_Native addr 0x258a31c size 0x7c virtual false final false
  static inline void* ovr_UserCapability_GetDescription_Native(void* obj);

  /// @brief Method ovr_UserCapability_GetIsEnabled addr 0x258a398 size 0x84 virtual false final false
  static inline bool ovr_UserCapability_GetIsEnabled(void* obj);

  /// @brief Method ovr_UserCapability_GetName addr 0x258a41c size 0x58 virtual false final false
  static inline ::StringW ovr_UserCapability_GetName(void* obj);

  /// @brief Method ovr_UserCapability_GetName_Native addr 0x258a474 size 0x7c virtual false final false
  static inline void* ovr_UserCapability_GetName_Native(void* obj);

  /// @brief Method ovr_UserCapability_GetReasonCode addr 0x258a4f0 size 0x58 virtual false final false
  static inline ::StringW ovr_UserCapability_GetReasonCode(void* obj);

  /// @brief Method ovr_UserCapability_GetReasonCode_Native addr 0x258a548 size 0x7c virtual false final false
  static inline void* ovr_UserCapability_GetReasonCode_Native(void* obj);

  /// @brief Method ovr_UserCapabilityArray_GetElement addr 0x258a5c4 size 0x84 virtual false final false
  static inline void* ovr_UserCapabilityArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_UserCapabilityArray_GetNextUrl addr 0x258a648 size 0x58 virtual false final false
  static inline ::StringW ovr_UserCapabilityArray_GetNextUrl(void* obj);

  /// @brief Method ovr_UserCapabilityArray_GetNextUrl_Native addr 0x258a6a0 size 0x7c virtual false final false
  static inline void* ovr_UserCapabilityArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_UserCapabilityArray_GetSize addr 0x258a71c size 0x7c virtual false final false
  static inline void* ovr_UserCapabilityArray_GetSize(void* obj);

  /// @brief Method ovr_UserCapabilityArray_HasNextPage addr 0x258a798 size 0x84 virtual false final false
  static inline bool ovr_UserCapabilityArray_HasNextPage(void* obj);

  /// @brief Method ovr_UserDataStoreUpdateResponse_GetSuccess addr 0x258a81c size 0x84 virtual false final false
  static inline bool ovr_UserDataStoreUpdateResponse_GetSuccess(void* obj);

  /// @brief Method ovr_UserProof_GetNonce addr 0x258a8a0 size 0x58 virtual false final false
  static inline ::StringW ovr_UserProof_GetNonce(void* obj);

  /// @brief Method ovr_UserProof_GetNonce_Native addr 0x258a8f8 size 0x7c virtual false final false
  static inline void* ovr_UserProof_GetNonce_Native(void* obj);

  /// @brief Method ovr_UserReportID_GetDidCancel addr 0x258a974 size 0x84 virtual false final false
  static inline bool ovr_UserReportID_GetDidCancel(void* obj);

  /// @brief Method ovr_UserReportID_GetID addr 0x258a9f8 size 0x7c virtual false final false
  static inline uint64_t ovr_UserReportID_GetID(void* obj);

  /// @brief Method ovr_VoipDecoder_Decode addr 0x258aa74 size 0x9c virtual false final false
  static inline void ovr_VoipDecoder_Decode(void* obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData, void* compressedSize);

  /// @brief Method ovr_VoipDecoder_GetDecodedPCM addr 0x258ab10 size 0x9c virtual false final false
  static inline void* ovr_VoipDecoder_GetDecodedPCM(void* obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferSize);

  /// @brief Method ovr_VoipEncoder_AddPCM addr 0x258abac size 0x9c virtual false final false
  static inline void ovr_VoipEncoder_AddPCM(void* obj, ::ArrayW<float_t, ::Array<float_t>*> inputData, uint32_t inputSize);

  /// @brief Method ovr_VoipEncoder_GetCompressedData addr 0x258ac48 size 0x9c virtual false final false
  static inline void* ovr_VoipEncoder_GetCompressedData(void* obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, void* intputSize);

  /// @brief Method ovr_VoipEncoder_GetCompressedDataSize addr 0x258ace4 size 0x7c virtual false final false
  static inline void* ovr_VoipEncoder_GetCompressedDataSize(void* obj);

  /// @brief Method ovr_AbuseReportOptions_Create addr 0x2566970 size 0x68 virtual false final false
  static inline void* ovr_AbuseReportOptions_Create();

  /// @brief Method ovr_AbuseReportOptions_Destroy addr 0x2566cdc size 0x7c virtual false final false
  static inline void ovr_AbuseReportOptions_Destroy(void* handle);

  /// @brief Method ovr_AbuseReportOptions_SetPreventPeopleChooser addr 0x2566a40 size 0x84 virtual false final false
  static inline void ovr_AbuseReportOptions_SetPreventPeopleChooser(void* handle, bool value);

  /// @brief Method ovr_AbuseReportOptions_SetReportType addr 0x2566b2c size 0x84 virtual false final false
  static inline void ovr_AbuseReportOptions_SetReportType(void* handle, ::Oculus::Platform::AbuseReportType value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_Create addr 0x2566dbc size 0x68 virtual false final false
  static inline void* ovr_AdvancedAbuseReportOptions_Create();

  /// @brief Method ovr_AdvancedAbuseReportOptions_Destroy addr 0x25675f4 size 0x7c virtual false final false
  static inline void ovr_AdvancedAbuseReportOptions_Destroy(void* handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString addr 0x2566e94 size 0xc0 virtual false final false
  static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString(void* handle, ::StringW key, ::StringW value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native addr 0x258ad60 size 0x94 virtual false final false
  static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native(void* handle, void* key, void* value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext addr 0x2566fac size 0x7c virtual false final false
  static inline void ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext(void* handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType addr 0x2567090 size 0xa0 virtual false final false
  static inline void ovr_AdvancedAbuseReportOptions_SetObjectType(void* handle, ::StringW value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType_Native addr 0x258adf4 size 0x84 virtual false final false
  static inline void ovr_AdvancedAbuseReportOptions_SetObjectType_Native(void* handle, void* value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetReportType addr 0x2567198 size 0x84 virtual false final false
  static inline void ovr_AdvancedAbuseReportOptions_SetReportType(void* handle, ::Oculus::Platform::AbuseReportType value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_AddSuggestedUser addr 0x2567284 size 0x84 virtual false final false
  static inline void ovr_AdvancedAbuseReportOptions_AddSuggestedUser(void* handle, uint64_t value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers addr 0x2567360 size 0x7c virtual false final false
  static inline void ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers(void* handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetVideoMode addr 0x2567444 size 0x84 virtual false final false
  static inline void ovr_AdvancedAbuseReportOptions_SetVideoMode(void* handle, ::Oculus::Platform::AbuseReportVideoMode value);

  /// @brief Method ovr_ApplicationOptions_Create addr 0x25679c0 size 0x68 virtual false final false
  static inline void* ovr_ApplicationOptions_Create();

  /// @brief Method ovr_ApplicationOptions_Destroy addr 0x2568060 size 0x7c virtual false final false
  static inline void ovr_ApplicationOptions_Destroy(void* handle);

  /// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage addr 0x2567a90 size 0xa0 virtual false final false
  static inline void ovr_ApplicationOptions_SetDeeplinkMessage(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage_Native addr 0x258ae78 size 0x84 virtual false final false
  static inline void ovr_ApplicationOptions_SetDeeplinkMessage_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetDestinationApiName addr 0x2567b98 size 0xa0 virtual false final false
  static inline void ovr_ApplicationOptions_SetDestinationApiName(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetDestinationApiName_Native addr 0x258aefc size 0x84 virtual false final false
  static inline void ovr_ApplicationOptions_SetDestinationApiName_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetLobbySessionId addr 0x2567ca0 size 0xa0 virtual false final false
  static inline void ovr_ApplicationOptions_SetLobbySessionId(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetLobbySessionId_Native addr 0x258af80 size 0x84 virtual false final false
  static inline void ovr_ApplicationOptions_SetLobbySessionId_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetMatchSessionId addr 0x2567da8 size 0xa0 virtual false final false
  static inline void ovr_ApplicationOptions_SetMatchSessionId(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetMatchSessionId_Native addr 0x258b004 size 0x84 virtual false final false
  static inline void ovr_ApplicationOptions_SetMatchSessionId_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetRoomId addr 0x2567eb0 size 0x84 virtual false final false
  static inline void ovr_ApplicationOptions_SetRoomId(void* handle, uint64_t value);

  /// @brief Method ovr_AvatarEditorOptions_Create addr 0x2568140 size 0x68 virtual false final false
  static inline void* ovr_AvatarEditorOptions_Create();

  /// @brief Method ovr_AvatarEditorOptions_Destroy addr 0x25683dc size 0x7c virtual false final false
  static inline void ovr_AvatarEditorOptions_Destroy(void* handle);

  /// @brief Method ovr_AvatarEditorOptions_SetSourceOverride addr 0x2568210 size 0xa0 virtual false final false
  static inline void ovr_AvatarEditorOptions_SetSourceOverride(void* handle, ::StringW value);

  /// @brief Method ovr_AvatarEditorOptions_SetSourceOverride_Native addr 0x258b088 size 0x84 virtual false final false
  static inline void ovr_AvatarEditorOptions_SetSourceOverride_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_Create addr 0x258b10c size 0x68 virtual false final false
  static inline void* ovr_ChallengeOptions_Create();

  /// @brief Method ovr_ChallengeOptions_Destroy addr 0x258b174 size 0x7c virtual false final false
  static inline void ovr_ChallengeOptions_Destroy(void* handle);

  /// @brief Method ovr_ChallengeOptions_SetDescription addr 0x258b1f0 size 0xa0 virtual false final false
  static inline void ovr_ChallengeOptions_SetDescription(void* handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetDescription_Native addr 0x258b290 size 0x84 virtual false final false
  static inline void ovr_ChallengeOptions_SetDescription_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_SetEndDate addr 0x258b314 size 0x6c virtual false final false
  static inline void ovr_ChallengeOptions_SetEndDate(void* handle, ::System::DateTime value);

  /// @brief Method ovr_ChallengeOptions_SetEndDate_Native addr 0x258b380 size 0x84 virtual false final false
  static inline void ovr_ChallengeOptions_SetEndDate_Native(void* handle, uint64_t value);

  /// @brief Method ovr_ChallengeOptions_SetIncludeActiveChallenges addr 0x258b404 size 0x84 virtual false final false
  static inline void ovr_ChallengeOptions_SetIncludeActiveChallenges(void* handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetIncludeFutureChallenges addr 0x258b488 size 0x84 virtual false final false
  static inline void ovr_ChallengeOptions_SetIncludeFutureChallenges(void* handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetIncludePastChallenges addr 0x258b50c size 0x84 virtual false final false
  static inline void ovr_ChallengeOptions_SetIncludePastChallenges(void* handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetLeaderboardName addr 0x258b590 size 0xa0 virtual false final false
  static inline void ovr_ChallengeOptions_SetLeaderboardName(void* handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetLeaderboardName_Native addr 0x258b630 size 0x84 virtual false final false
  static inline void ovr_ChallengeOptions_SetLeaderboardName_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_SetStartDate addr 0x258b6b4 size 0x6c virtual false final false
  static inline void ovr_ChallengeOptions_SetStartDate(void* handle, ::System::DateTime value);

  /// @brief Method ovr_ChallengeOptions_SetStartDate_Native addr 0x258b720 size 0x84 virtual false final false
  static inline void ovr_ChallengeOptions_SetStartDate_Native(void* handle, uint64_t value);

  /// @brief Method ovr_ChallengeOptions_SetTitle addr 0x258b7a4 size 0xa0 virtual false final false
  static inline void ovr_ChallengeOptions_SetTitle(void* handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetTitle_Native addr 0x258b844 size 0x84 virtual false final false
  static inline void ovr_ChallengeOptions_SetTitle_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_SetViewerFilter addr 0x258b8c8 size 0x84 virtual false final false
  static inline void ovr_ChallengeOptions_SetViewerFilter(void* handle, ::Oculus::Platform::ChallengeViewerFilter value);

  /// @brief Method ovr_ChallengeOptions_SetVisibility addr 0x258b94c size 0x84 virtual false final false
  static inline void ovr_ChallengeOptions_SetVisibility(void* handle, ::Oculus::Platform::ChallengeVisibility value);

  /// @brief Method ovr_GroupPresenceOptions_Create addr 0x258b9d0 size 0x68 virtual false final false
  static inline void* ovr_GroupPresenceOptions_Create();

  /// @brief Method ovr_GroupPresenceOptions_Destroy addr 0x258ba38 size 0x7c virtual false final false
  static inline void ovr_GroupPresenceOptions_Destroy(void* handle);

  /// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride addr 0x258bab4 size 0xa0 virtual false final false
  static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native addr 0x258bb54 size 0x84 virtual false final false
  static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName addr 0x258bbd8 size 0xa0 virtual false final false
  static inline void ovr_GroupPresenceOptions_SetDestinationApiName(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName_Native addr 0x258bc78 size 0x84 virtual false final false
  static inline void ovr_GroupPresenceOptions_SetDestinationApiName_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresenceOptions_SetIsJoinable addr 0x258bcfc size 0x84 virtual false final false
  static inline void ovr_GroupPresenceOptions_SetIsJoinable(void* handle, bool value);

  /// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId addr 0x258bd80 size 0xa0 virtual false final false
  static inline void ovr_GroupPresenceOptions_SetLobbySessionId(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId_Native addr 0x258be20 size 0x84 virtual false final false
  static inline void ovr_GroupPresenceOptions_SetLobbySessionId_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId addr 0x258bea4 size 0xa0 virtual false final false
  static inline void ovr_GroupPresenceOptions_SetMatchSessionId(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId_Native addr 0x258bf44 size 0x84 virtual false final false
  static inline void ovr_GroupPresenceOptions_SetMatchSessionId_Native(void* handle, void* value);

  /// @brief Method ovr_InviteOptions_Create addr 0x258bfc8 size 0x68 virtual false final false
  static inline void* ovr_InviteOptions_Create();

  /// @brief Method ovr_InviteOptions_Destroy addr 0x258c030 size 0x7c virtual false final false
  static inline void ovr_InviteOptions_Destroy(void* handle);

  /// @brief Method ovr_InviteOptions_AddSuggestedUser addr 0x258c0ac size 0x84 virtual false final false
  static inline void ovr_InviteOptions_AddSuggestedUser(void* handle, uint64_t value);

  /// @brief Method ovr_InviteOptions_ClearSuggestedUsers addr 0x258c130 size 0x7c virtual false final false
  static inline void ovr_InviteOptions_ClearSuggestedUsers(void* handle);

  /// @brief Method ovr_MatchmakingOptions_Create addr 0x258c1ac size 0x68 virtual false final false
  static inline void* ovr_MatchmakingOptions_Create();

  /// @brief Method ovr_MatchmakingOptions_Destroy addr 0x258c214 size 0x7c virtual false final false
  static inline void ovr_MatchmakingOptions_Destroy(void* handle);

  /// @brief Method ovr_MatchmakingOptions_SetCreateRoomDataStoreString addr 0x258c290 size 0xc0 virtual false final false
  static inline void ovr_MatchmakingOptions_SetCreateRoomDataStoreString(void* handle, ::StringW key, ::StringW value);

  /// @brief Method ovr_MatchmakingOptions_SetCreateRoomDataStoreString_Native addr 0x258c350 size 0x94 virtual false final false
  static inline void ovr_MatchmakingOptions_SetCreateRoomDataStoreString_Native(void* handle, void* key, void* value);

  /// @brief Method ovr_MatchmakingOptions_ClearCreateRoomDataStore addr 0x258c3e4 size 0x7c virtual false final false
  static inline void ovr_MatchmakingOptions_ClearCreateRoomDataStore(void* handle);

  /// @brief Method ovr_MatchmakingOptions_SetCreateRoomJoinPolicy addr 0x258c460 size 0x84 virtual false final false
  static inline void ovr_MatchmakingOptions_SetCreateRoomJoinPolicy(void* handle, ::Oculus::Platform::RoomJoinPolicy value);

  /// @brief Method ovr_MatchmakingOptions_SetCreateRoomMaxUsers addr 0x258c4e4 size 0x84 virtual false final false
  static inline void ovr_MatchmakingOptions_SetCreateRoomMaxUsers(void* handle, uint32_t value);

  /// @brief Method ovr_MatchmakingOptions_AddEnqueueAdditionalUser addr 0x258c568 size 0x84 virtual false final false
  static inline void ovr_MatchmakingOptions_AddEnqueueAdditionalUser(void* handle, uint64_t value);

  /// @brief Method ovr_MatchmakingOptions_ClearEnqueueAdditionalUsers addr 0x258c5ec size 0x7c virtual false final false
  static inline void ovr_MatchmakingOptions_ClearEnqueueAdditionalUsers(void* handle);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsInt addr 0x258c668 size 0xa8 virtual false final false
  static inline void ovr_MatchmakingOptions_SetEnqueueDataSettingsInt(void* handle, ::StringW key, int32_t value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsInt_Native addr 0x258c710 size 0x94 virtual false final false
  static inline void ovr_MatchmakingOptions_SetEnqueueDataSettingsInt_Native(void* handle, void* key, int32_t value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble addr 0x258c7a4 size 0xb0 virtual false final false
  static inline void ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble(void* handle, ::StringW key, double_t value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble_Native addr 0x258c854 size 0x94 virtual false final false
  static inline void ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble_Native(void* handle, void* key, double_t value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsString addr 0x258c8e8 size 0xc0 virtual false final false
  static inline void ovr_MatchmakingOptions_SetEnqueueDataSettingsString(void* handle, ::StringW key, ::StringW value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsString_Native addr 0x258c9a8 size 0x94 virtual false final false
  static inline void ovr_MatchmakingOptions_SetEnqueueDataSettingsString_Native(void* handle, void* key, void* value);

  /// @brief Method ovr_MatchmakingOptions_ClearEnqueueDataSettings addr 0x258ca3c size 0x7c virtual false final false
  static inline void ovr_MatchmakingOptions_ClearEnqueueDataSettings(void* handle);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueIsDebug addr 0x258cab8 size 0x84 virtual false final false
  static inline void ovr_MatchmakingOptions_SetEnqueueIsDebug(void* handle, bool value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueQueryKey addr 0x258cb3c size 0xa0 virtual false final false
  static inline void ovr_MatchmakingOptions_SetEnqueueQueryKey(void* handle, ::StringW value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueQueryKey_Native addr 0x258cbdc size 0x84 virtual false final false
  static inline void ovr_MatchmakingOptions_SetEnqueueQueryKey_Native(void* handle, void* value);

  /// @brief Method ovr_MultiplayerErrorOptions_Create addr 0x258cc60 size 0x68 virtual false final false
  static inline void* ovr_MultiplayerErrorOptions_Create();

  /// @brief Method ovr_MultiplayerErrorOptions_Destroy addr 0x258ccc8 size 0x7c virtual false final false
  static inline void ovr_MultiplayerErrorOptions_Destroy(void* handle);

  /// @brief Method ovr_MultiplayerErrorOptions_SetErrorKey addr 0x258cd44 size 0x84 virtual false final false
  static inline void ovr_MultiplayerErrorOptions_SetErrorKey(void* handle, ::Oculus::Platform::MultiplayerErrorErrorKey value);

  /// @brief Method ovr_NetSyncOptions_Create addr 0x258cdc8 size 0x68 virtual false final false
  static inline void* ovr_NetSyncOptions_Create();

  /// @brief Method ovr_NetSyncOptions_Destroy addr 0x258ce30 size 0x7c virtual false final false
  static inline void ovr_NetSyncOptions_Destroy(void* handle);

  /// @brief Method ovr_NetSyncOptions_SetVoipGroup addr 0x258ceac size 0xa0 virtual false final false
  static inline void ovr_NetSyncOptions_SetVoipGroup(void* handle, ::StringW value);

  /// @brief Method ovr_NetSyncOptions_SetVoipGroup_Native addr 0x258cf4c size 0x84 virtual false final false
  static inline void ovr_NetSyncOptions_SetVoipGroup_Native(void* handle, void* value);

  /// @brief Method ovr_NetSyncOptions_SetVoipStreamDefault addr 0x258cfd0 size 0x84 virtual false final false
  static inline void ovr_NetSyncOptions_SetVoipStreamDefault(void* handle, ::Oculus::Platform::NetSyncVoipStreamMode value);

  /// @brief Method ovr_NetSyncOptions_SetZoneId addr 0x258d054 size 0xa0 virtual false final false
  static inline void ovr_NetSyncOptions_SetZoneId(void* handle, ::StringW value);

  /// @brief Method ovr_NetSyncOptions_SetZoneId_Native addr 0x258d0f4 size 0x84 virtual false final false
  static inline void ovr_NetSyncOptions_SetZoneId_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_Create addr 0x258d178 size 0x68 virtual false final false
  static inline void* ovr_RichPresenceOptions_Create();

  /// @brief Method ovr_RichPresenceOptions_Destroy addr 0x258d1e0 size 0x7c virtual false final false
  static inline void ovr_RichPresenceOptions_Destroy(void* handle);

  /// @brief Method ovr_RichPresenceOptions_SetApiName addr 0x258d25c size 0xa0 virtual false final false
  static inline void ovr_RichPresenceOptions_SetApiName(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetApiName_Native addr 0x258d2fc size 0x84 virtual false final false
  static inline void ovr_RichPresenceOptions_SetApiName_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetArgsString addr 0x258d380 size 0xc0 virtual false final false
  static inline void ovr_RichPresenceOptions_SetArgsString(void* handle, ::StringW key, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetArgsString_Native addr 0x258d440 size 0x94 virtual false final false
  static inline void ovr_RichPresenceOptions_SetArgsString_Native(void* handle, void* key, void* value);

  /// @brief Method ovr_RichPresenceOptions_ClearArgs addr 0x258d4d4 size 0x7c virtual false final false
  static inline void ovr_RichPresenceOptions_ClearArgs(void* handle);

  /// @brief Method ovr_RichPresenceOptions_SetCurrentCapacity addr 0x258d550 size 0x84 virtual false final false
  static inline void ovr_RichPresenceOptions_SetCurrentCapacity(void* handle, uint32_t value);

  /// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride addr 0x258d5d4 size 0xa0 virtual false final false
  static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native addr 0x258d674 size 0x84 virtual false final false
  static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetEndTime addr 0x258d6f8 size 0x6c virtual false final false
  static inline void ovr_RichPresenceOptions_SetEndTime(void* handle, ::System::DateTime value);

  /// @brief Method ovr_RichPresenceOptions_SetEndTime_Native addr 0x258d764 size 0x84 virtual false final false
  static inline void ovr_RichPresenceOptions_SetEndTime_Native(void* handle, uint64_t value);

  /// @brief Method ovr_RichPresenceOptions_SetExtraContext addr 0x258d7e8 size 0x84 virtual false final false
  static inline void ovr_RichPresenceOptions_SetExtraContext(void* handle, ::Oculus::Platform::RichPresenceExtraContext value);

  /// @brief Method ovr_RichPresenceOptions_SetInstanceId addr 0x258d86c size 0xa0 virtual false final false
  static inline void ovr_RichPresenceOptions_SetInstanceId(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetInstanceId_Native addr 0x258d90c size 0x84 virtual false final false
  static inline void ovr_RichPresenceOptions_SetInstanceId_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetIsIdle addr 0x258d990 size 0x84 virtual false final false
  static inline void ovr_RichPresenceOptions_SetIsIdle(void* handle, bool value);

  /// @brief Method ovr_RichPresenceOptions_SetIsJoinable addr 0x258da14 size 0x84 virtual false final false
  static inline void ovr_RichPresenceOptions_SetIsJoinable(void* handle, bool value);

  /// @brief Method ovr_RichPresenceOptions_SetJoinableId addr 0x258da98 size 0xa0 virtual false final false
  static inline void ovr_RichPresenceOptions_SetJoinableId(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetJoinableId_Native addr 0x258db38 size 0x84 virtual false final false
  static inline void ovr_RichPresenceOptions_SetJoinableId_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetLobbySessionId addr 0x258dbbc size 0xa0 virtual false final false
  static inline void ovr_RichPresenceOptions_SetLobbySessionId(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetLobbySessionId_Native addr 0x258dc5c size 0x84 virtual false final false
  static inline void ovr_RichPresenceOptions_SetLobbySessionId_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetMatchSessionId addr 0x258dce0 size 0xa0 virtual false final false
  static inline void ovr_RichPresenceOptions_SetMatchSessionId(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetMatchSessionId_Native addr 0x258dd80 size 0x84 virtual false final false
  static inline void ovr_RichPresenceOptions_SetMatchSessionId_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetMaxCapacity addr 0x258de04 size 0x84 virtual false final false
  static inline void ovr_RichPresenceOptions_SetMaxCapacity(void* handle, uint32_t value);

  /// @brief Method ovr_RichPresenceOptions_SetStartTime addr 0x258de88 size 0x6c virtual false final false
  static inline void ovr_RichPresenceOptions_SetStartTime(void* handle, ::System::DateTime value);

  /// @brief Method ovr_RichPresenceOptions_SetStartTime_Native addr 0x258def4 size 0x84 virtual false final false
  static inline void ovr_RichPresenceOptions_SetStartTime_Native(void* handle, uint64_t value);

  /// @brief Method ovr_RoomOptions_Create addr 0x258df78 size 0x68 virtual false final false
  static inline void* ovr_RoomOptions_Create();

  /// @brief Method ovr_RoomOptions_Destroy addr 0x258dfe0 size 0x7c virtual false final false
  static inline void ovr_RoomOptions_Destroy(void* handle);

  /// @brief Method ovr_RoomOptions_SetDataStoreString addr 0x258e05c size 0xc0 virtual false final false
  static inline void ovr_RoomOptions_SetDataStoreString(void* handle, ::StringW key, ::StringW value);

  /// @brief Method ovr_RoomOptions_SetDataStoreString_Native addr 0x258e11c size 0x94 virtual false final false
  static inline void ovr_RoomOptions_SetDataStoreString_Native(void* handle, void* key, void* value);

  /// @brief Method ovr_RoomOptions_ClearDataStore addr 0x258e1b0 size 0x7c virtual false final false
  static inline void ovr_RoomOptions_ClearDataStore(void* handle);

  /// @brief Method ovr_RoomOptions_SetExcludeRecentlyMet addr 0x258e22c size 0x84 virtual false final false
  static inline void ovr_RoomOptions_SetExcludeRecentlyMet(void* handle, bool value);

  /// @brief Method ovr_RoomOptions_SetMaxUserResults addr 0x258e2b0 size 0x84 virtual false final false
  static inline void ovr_RoomOptions_SetMaxUserResults(void* handle, uint32_t value);

  /// @brief Method ovr_RoomOptions_SetOrdering addr 0x258e334 size 0x84 virtual false final false
  static inline void ovr_RoomOptions_SetOrdering(void* handle, ::Oculus::Platform::UserOrdering value);

  /// @brief Method ovr_RoomOptions_SetRecentlyMetTimeWindow addr 0x258e3b8 size 0x84 virtual false final false
  static inline void ovr_RoomOptions_SetRecentlyMetTimeWindow(void* handle, ::Oculus::Platform::TimeWindow value);

  /// @brief Method ovr_RoomOptions_SetRoomId addr 0x258e43c size 0x84 virtual false final false
  static inline void ovr_RoomOptions_SetRoomId(void* handle, uint64_t value);

  /// @brief Method ovr_RoomOptions_SetTurnOffUpdates addr 0x258e4c0 size 0x84 virtual false final false
  static inline void ovr_RoomOptions_SetTurnOffUpdates(void* handle, bool value);

  /// @brief Method ovr_RosterOptions_Create addr 0x258e544 size 0x68 virtual false final false
  static inline void* ovr_RosterOptions_Create();

  /// @brief Method ovr_RosterOptions_Destroy addr 0x258e5ac size 0x7c virtual false final false
  static inline void ovr_RosterOptions_Destroy(void* handle);

  /// @brief Method ovr_RosterOptions_AddSuggestedUser addr 0x258e628 size 0x84 virtual false final false
  static inline void ovr_RosterOptions_AddSuggestedUser(void* handle, uint64_t value);

  /// @brief Method ovr_RosterOptions_ClearSuggestedUsers addr 0x258e6ac size 0x7c virtual false final false
  static inline void ovr_RosterOptions_ClearSuggestedUsers(void* handle);

  /// @brief Method ovr_UserOptions_Create addr 0x258e728 size 0x68 virtual false final false
  static inline void* ovr_UserOptions_Create();

  /// @brief Method ovr_UserOptions_Destroy addr 0x258e790 size 0x7c virtual false final false
  static inline void ovr_UserOptions_Destroy(void* handle);

  /// @brief Method ovr_UserOptions_SetMaxUsers addr 0x258e80c size 0x84 virtual false final false
  static inline void ovr_UserOptions_SetMaxUsers(void* handle, uint32_t value);

  /// @brief Method ovr_UserOptions_AddServiceProvider addr 0x258e890 size 0x84 virtual false final false
  static inline void ovr_UserOptions_AddServiceProvider(void* handle, ::Oculus::Platform::ServiceProvider value);

  /// @brief Method ovr_UserOptions_ClearServiceProviders addr 0x258e914 size 0x7c virtual false final false
  static inline void ovr_UserOptions_ClearServiceProviders(void* handle);

  /// @brief Method ovr_UserOptions_SetTimeWindow addr 0x258e990 size 0x84 virtual false final false
  static inline void ovr_UserOptions_SetTimeWindow(void* handle, ::Oculus::Platform::TimeWindow value);

  /// @brief Method ovr_VoipOptions_Create addr 0x258ea14 size 0x68 virtual false final false
  static inline void* ovr_VoipOptions_Create();

  /// @brief Method ovr_VoipOptions_Destroy addr 0x258ea7c size 0x7c virtual false final false
  static inline void ovr_VoipOptions_Destroy(void* handle);

  /// @brief Method ovr_VoipOptions_SetBitrateForNewConnections addr 0x258eaf8 size 0x84 virtual false final false
  static inline void ovr_VoipOptions_SetBitrateForNewConnections(void* handle, ::Oculus::Platform::VoipBitrate value);

  /// @brief Method ovr_VoipOptions_SetCreateNewConnectionUseDtx addr 0x258eb7c size 0x84 virtual false final false
  static inline void ovr_VoipOptions_SetCreateNewConnectionUseDtx(void* handle, ::Oculus::Platform::VoipDtxState value);

  static inline ::Oculus::Platform::CAPI* New_ctor();

  /// @brief Method .ctor addr 0x258ec00 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CAPI(CAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CAPI(CAPI const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CAPI();

public:
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
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__ovrMatchmakingCriterion, "Oculus.Platform", "CAPI/ovrMatchmakingCriterion");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__ovrMatchmakingCustomQueryData, "Oculus.Platform", "CAPI/ovrMatchmakingCustomQueryData");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__ovrNetSyncVec3, "Oculus.Platform", "CAPI/ovrNetSyncVec3");

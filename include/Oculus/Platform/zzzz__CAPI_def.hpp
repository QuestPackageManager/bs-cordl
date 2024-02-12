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
struct AbuseReportType;
}
namespace Oculus::Platform {
struct AbuseReportVideoMode;
}
namespace Oculus::Platform {
struct AchievementType;
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
struct CloudStorageDataStatus;
}
namespace Oculus::Platform {
struct CloudStorageUpdateStatus;
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
struct MatchmakingCriterionImportance;
}
namespace Oculus::Platform {
struct MatchmakingStatApproach;
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
struct PeerConnectionState;
}
namespace Oculus::Platform {
struct PlatformInitializeResult;
}
namespace Oculus::Platform {
struct ReportRequestResponse;
}
namespace Oculus::Platform {
struct RichPresenceExtraContext;
}
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
namespace Oculus::Platform {
struct RoomJoinability;
}
namespace Oculus::Platform {
struct RoomMembershipLockStatus;
}
namespace Oculus::Platform {
struct RoomType;
}
namespace Oculus::Platform {
struct SdkAccountType;
}
namespace Oculus::Platform {
struct SendPolicy;
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
struct UserOrdering;
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
struct __CAPI__ovrMatchmakingCriterion;
}
namespace Oculus::Platform {
struct __CAPI__ovrMatchmakingCustomQueryData;
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13147))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13129))
// CS Name: ::CAPI::ovrKeyValuePair
struct CORDL_TYPE __CAPI__ovrKeyValuePair {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x26ef2e4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, ::StringW value);

  /// @brief Method .ctor, addr 0x26eedc4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, int32_t value);

  /// @brief Method .ctor, addr 0x26ef2fc, size 0x1c, virtual false, abstract: false, final false
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
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13130))
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(13157))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13131))
// CS Name: ::CAPI::ovrMatchmakingCriterion
struct CORDL_TYPE __CAPI__ovrMatchmakingCriterion {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x271450c, size 0x6c, virtual false, abstract: false, final false
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13132))
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
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13133))
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13134))
// CS Name: ::CAPI::FilterCallback*
class CORDL_TYPE __CAPI__FilterCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::Oculus::Platform::__CAPI__FilterCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2714578, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2714650, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<::ArrayW<int16_t, ::Array<int16_t>*>> pcmData, void* pcmDataLength, int32_t frequency, int32_t numChannels);

  /// @brief Method BeginInvoke, addr 0x2714664, size 0xd4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<int16_t, ::Array<int16_t>*>> pcmData, void* pcmDataLength, int32_t frequency, int32_t numChannels, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2714738, size 0xc, virtual true, abstract: false, final false
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13135))
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

  /// @brief Method ArrayOfStructsToIntPtr, addr 0x26ee9e0, size 0x198, virtual false, abstract: false, final false
  static inline void* ArrayOfStructsToIntPtr(::System::Array* ar);

  /// @brief Method DictionaryToOVRKeyValuePairs, addr 0x26eeb78, size 0x24c, virtual false, abstract: false, final false
  static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>
  DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>* dict);

  /// @brief Method DictionaryToOVRKeyValuePairs, addr 0x26eede0, size 0x504, virtual false, abstract: false, final false
  static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>
  DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* dict);

  /// @brief Method IntPtrToByteArray, addr 0x26ef318, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> IntPtrToByteArray(void* data, uint64_t size);

  /// @brief Method DataStoreFromNative, addr 0x26ef3d4, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* DataStoreFromNative(void* pointer);

  /// @brief Method StringFromNative, addr 0x26ef6c4, size 0x134, virtual false, abstract: false, final false
  static inline ::StringW StringFromNative(void* pointer);

  /// @brief Method GetNativeStringLengthNotIncludingNullTerminator, addr 0x26ef7f8, size 0x74, virtual false, abstract: false, final false
  static inline int32_t GetNativeStringLengthNotIncludingNullTerminator(void* pointer);

  /// @brief Method DateTimeFromNative, addr 0x26ef86c, size 0x64, virtual false, abstract: false, final false
  static inline ::System::DateTime DateTimeFromNative(uint64_t seconds_since_the_one_true_epoch);

  /// @brief Method DateTimeToNative, addr 0x26ef8d0, size 0xe8, virtual false, abstract: false, final false
  static inline uint64_t DateTimeToNative(::System::DateTime dt);

  /// @brief Method BlobFromNative, addr 0x26ef9b8, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BlobFromNative(uint32_t size, void* pointer);

  /// @brief Method FiledataFromNative, addr 0x26efa90, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FiledataFromNative(uint32_t size, void* pointer);

  /// @brief Method StringToNative, addr 0x26efb30, size 0x180, virtual false, abstract: false, final false
  static inline void* StringToNative(::StringW s);

  /// @brief Method ovr_UnityInitWrapper, addr 0x26ecfa8, size 0x98, virtual false, abstract: false, final false
  static inline bool ovr_UnityInitWrapper(::StringW appId);

  /// @brief Method ovr_UnityInitGlobals, addr 0x26efcb0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_UnityInitGlobals(void* loggingCB);

  /// @brief Method ovr_UnityInitWrapperAsynchronous, addr 0x26ed148, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_UnityInitWrapperAsynchronous(::StringW appId);

  /// @brief Method ovr_UnityInitWrapperStandalone, addr 0x26efd2c, size 0xa0, virtual false, abstract: false, final false
  static inline bool ovr_UnityInitWrapperStandalone(::StringW accessToken, void* loggingCB);

  /// @brief Method ovr_Platform_InitializeStandaloneOculus, addr 0x26efdcc, size 0xe4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Platform_InitializeStandaloneOculus(ByRef<::Oculus::Platform::__CAPI__OculusInitParams> init);

  /// @brief Method ovr_PlatformInitializeWithAccessToken, addr 0x26efeb0, size 0xa0, virtual false, abstract: false, final false
  static inline uint64_t ovr_PlatformInitializeWithAccessToken(uint64_t appId, ::StringW accessToken);

  /// @brief Method ovr_PlatformInitializeWithAccessTokenAndOptions, addr 0x26eff50, size 0x1a8, virtual false, abstract: false, final false
  static inline uint64_t ovr_PlatformInitializeWithAccessTokenAndOptions(uint64_t appId, ::StringW accessToken,
                                                                         ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> configOptions,
                                                                         void* numOptions);

  /// @brief Method ovr_UnityInitWrapperWindows, addr 0x26f00f8, size 0xa0, virtual false, abstract: false, final false
  static inline bool ovr_UnityInitWrapperWindows(::StringW appId, void* loggingCB);

  /// @brief Method ovr_UnityInitWrapperWindowsAsynchronous, addr 0x26f0198, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UnityInitWrapperWindowsAsynchronous(::StringW appId, void* loggingCB);

  /// @brief Method ovr_SetDeveloperAccessToken, addr 0x26f0234, size 0x98, virtual false, abstract: false, final false
  static inline bool ovr_SetDeveloperAccessToken(::StringW accessToken);

  /// @brief Method ovr_GetLoggedInUserLocale, addr 0x26f02cc, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW ovr_GetLoggedInUserLocale();

  /// @brief Method ovr_GetLoggedInUserLocale_Native, addr 0x26f031c, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_GetLoggedInUserLocale_Native();

  /// @brief Method ovr_PopMessage, addr 0x26f0384, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_PopMessage();

  /// @brief Method ovr_FreeMessage, addr 0x26f03ec, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_FreeMessage(void* message);

  /// @brief Method ovr_Voip_CreateEncoder, addr 0x26f0468, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_Voip_CreateEncoder();

  /// @brief Method ovr_Voip_DestroyEncoder, addr 0x26f04d0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_DestroyEncoder(void* encoder);

  /// @brief Method ovr_Voip_CreateDecoder, addr 0x26f054c, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_Voip_CreateDecoder();

  /// @brief Method ovr_Voip_DestroyDecoder, addr 0x26f05b4, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_DestroyDecoder(void* decoder);

  /// @brief Method ovr_VoipDecoder_Decode, addr 0x26f0630, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_VoipDecoder_Decode(void* obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData, uint64_t compressedSize);

  /// @brief Method ovr_Microphone_Create, addr 0x26f06cc, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_Create();

  /// @brief Method ovr_Microphone_Destroy, addr 0x26f0734, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Microphone_Destroy(void* obj);

  /// @brief Method ovr_Voip_SetSystemVoipPassthrough, addr 0x26f07b0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetSystemVoipPassthrough(bool passthrough);

  /// @brief Method ovr_Voip_SetSystemVoipMicrophoneMuted, addr 0x26f082c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetSystemVoipMicrophoneMuted(::Oculus::Platform::VoipMuteState muted);

  /// @brief Method ovr_UnityResetTestPlatform, addr 0x26f08a8, size 0x64, virtual false, abstract: false, final false
  static inline void ovr_UnityResetTestPlatform();

  /// @brief Method ovr_HTTP_GetWithMessageType, addr 0x26f090c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_GetWithMessageType(::StringW url, int32_t messageType);

  /// @brief Method ovr_CrashApplication, addr 0x26f09a8, size 0x64, virtual false, abstract: false, final false
  static inline void ovr_CrashApplication();

  /// @brief Method ovr_Voip_SetMicrophoneFilterCallback, addr 0x26f0a0c, size 0x80, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetMicrophoneFilterCallback(::Oculus::Platform::__CAPI__FilterCallback* cb);

  /// @brief Method ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer, addr 0x26f0a8c, size 0x88, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(::Oculus::Platform::__CAPI__FilterCallback* cb, void* bufferSizeElements);

  /// @brief Method LogNewUnifiedEvent, addr 0x26f0b14, size 0xa8, virtual false, abstract: false, final false
  static inline void LogNewUnifiedEvent(::Oculus::Platform::LogEventName eventName, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* values);

  /// @brief Method LogNewEvent, addr 0x26f0bbc, size 0x354, virtual false, abstract: false, final false
  static inline void LogNewEvent(::StringW eventName, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* values);

  /// @brief Method ovr_Log_NewEvent, addr 0x26f0f10, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_Log_NewEvent(void* eventName, ::ArrayW<void*, ::Array<void*>*> values, void* length);

  /// @brief Method ovr_ApplicationLifecycle_GetLaunchDetails, addr 0x26f0fac, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationLifecycle_GetLaunchDetails();

  /// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult, addr 0x26f1014, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_ApplicationLifecycle_LogDeeplinkResult(::StringW trackingID, ::Oculus::Platform::LaunchResult result);

  /// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult_Native, addr 0x26f10b0, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationLifecycle_LogDeeplinkResult_Native(void* trackingID, ::Oculus::Platform::LaunchResult result);

  /// @brief Method ovr_HTTP_StartTransfer, addr 0x26f1134, size 0xec, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_StartTransfer(::StringW url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> headers);

  /// @brief Method ovr_HTTP_StartTransfer_Native, addr 0x26f1220, size 0x1a4, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_StartTransfer_Native(void* url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> headers, void* numItems);

  /// @brief Method ovr_HTTP_Write, addr 0x26f13c4, size 0xa4, virtual false, abstract: false, final false
  static inline bool ovr_HTTP_Write(uint64_t transferId, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, void* length);

  /// @brief Method ovr_HTTP_WriteEOM, addr 0x26f1468, size 0x78, virtual false, abstract: false, final false
  static inline void ovr_HTTP_WriteEOM(uint64_t transferId);

  /// @brief Method ovr_Message_GetStringForJavascript, addr 0x26f14e0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Message_GetStringForJavascript(void* message);

  /// @brief Method ovr_Message_GetStringForJavascript_Native, addr 0x26f1538, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetStringForJavascript_Native(void* message);

  /// @brief Method ovr_NetSync_GetAmbisonicFloatPCM, addr 0x26f15b4, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetAmbisonicFloatPCM(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInt16PCM, addr 0x26f1650, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetAmbisonicInt16PCM(int64_t connection_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInterleavedFloatPCM, addr 0x26f16ec, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetAmbisonicInterleavedFloatPCM(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetAmbisonicInterleavedInt16PCM, addr 0x26f1788, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetAmbisonicInterleavedInt16PCM(int64_t connection_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetListenerPosition, addr 0x26f1824, size 0x9c, virtual false, abstract: false, final false
  static inline bool ovr_NetSync_GetListenerPosition(int64_t connection_id, uint64_t sessionId, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3> position);

  /// @brief Method ovr_NetSync_GetMonostreamFloatPCM, addr 0x26f18c0, size 0xa4, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetMonostreamFloatPCM(int64_t connection_id, uint64_t sessionId, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetMonostreamInt16PCM, addr 0x26f1964, size 0xa4, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetMonostreamInt16PCM(int64_t connection_id, uint64_t session_id, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_NetSync_GetPcmBufferMaxSamples, addr 0x26f1a08, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_NetSync_GetPcmBufferMaxSamples();

  /// @brief Method ovr_NetSync_GetVoipAmplitude, addr 0x26f1a70, size 0x9c, virtual false, abstract: false, final false
  static inline bool ovr_NetSync_GetVoipAmplitude(int64_t connection_id, uint64_t sessionId, ByRef<float_t> amplitude);

  /// @brief Method ovr_NetSync_SetListenerPosition, addr 0x26f1b0c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSync_SetListenerPosition(int64_t connection_id, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3> position);

  /// @brief Method ovr_Net_Accept, addr 0x26f1b90, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Net_Accept(uint64_t peerID);

  /// @brief Method ovr_Net_AcceptForCurrentRoom, addr 0x26f1c0c, size 0x70, virtual false, abstract: false, final false
  static inline bool ovr_Net_AcceptForCurrentRoom();

  /// @brief Method ovr_Net_Close, addr 0x26f1c7c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Net_Close(uint64_t peerID);

  /// @brief Method ovr_Net_CloseForCurrentRoom, addr 0x26f1cf8, size 0x64, virtual false, abstract: false, final false
  static inline void ovr_Net_CloseForCurrentRoom();

  /// @brief Method ovr_Net_Connect, addr 0x26f1d5c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Net_Connect(uint64_t peerID);

  /// @brief Method ovr_Net_IsConnected, addr 0x26f1dd8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_Net_IsConnected(uint64_t peerID);

  /// @brief Method ovr_Net_Ping, addr 0x26f1e5c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Net_Ping(uint64_t peerID);

  /// @brief Method ovr_Net_ReadPacket, addr 0x26f1ed8, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_Net_ReadPacket();

  /// @brief Method ovr_Net_SendPacket, addr 0x26f1f40, size 0xac, virtual false, abstract: false, final false
  static inline bool ovr_Net_SendPacket(uint64_t userID, void* length, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::Oculus::Platform::SendPolicy policy);

  /// @brief Method ovr_Net_SendPacketToCurrentRoom, addr 0x26f1fec, size 0xa4, virtual false, abstract: false, final false
  static inline bool ovr_Net_SendPacketToCurrentRoom(void* length, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::Oculus::Platform::SendPolicy policy);

  /// @brief Method ovr_Party_PluginGetSharedMemHandle, addr 0x26f2090, size 0x68, virtual false, abstract: false, final false
  static inline int32_t ovr_Party_PluginGetSharedMemHandle();

  /// @brief Method ovr_Party_PluginGetVoipMicrophoneMuted, addr 0x26f20f8, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState ovr_Party_PluginGetVoipMicrophoneMuted();

  /// @brief Method ovr_Party_PluginGetVoipPassthrough, addr 0x26f2160, size 0x70, virtual false, abstract: false, final false
  static inline bool ovr_Party_PluginGetVoipPassthrough();

  /// @brief Method ovr_Party_PluginGetVoipStatus, addr 0x26f21d0, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_Party_PluginGetVoipStatus();

  /// @brief Method ovr_Voip_Accept, addr 0x26f2238, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_Accept(uint64_t userID);

  /// @brief Method ovr_Voip_GetIsConnectionUsingDtx, addr 0x26f22b4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipDtxState ovr_Voip_GetIsConnectionUsingDtx(uint64_t peerID);

  /// @brief Method ovr_Voip_GetLocalBitrate, addr 0x26f2330, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetLocalBitrate(uint64_t peerID);

  /// @brief Method ovr_Voip_GetOutputBufferMaxSize, addr 0x26f23ac, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetOutputBufferMaxSize();

  /// @brief Method ovr_Voip_GetPCM, addr 0x26f2414, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCM(uint64_t senderID, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Voip_GetPCMFloat, addr 0x26f24b0, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCMFloat(uint64_t senderID, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Voip_GetPCMSize, addr 0x26f254c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCMSize(uint64_t senderID);

  /// @brief Method ovr_Voip_GetPCMWithTimestamp, addr 0x26f25c8, size 0xac, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCMWithTimestamp(uint64_t senderID, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements,
                                                   ::ArrayW<uint32_t, ::Array<uint32_t>*> timestamp);

  /// @brief Method ovr_Voip_GetPCMWithTimestampFloat, addr 0x26f2674, size 0xac, virtual false, abstract: false, final false
  static inline void* ovr_Voip_GetPCMWithTimestampFloat(uint64_t senderID, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements,
                                                        ::ArrayW<uint32_t, ::Array<uint32_t>*> timestamp);

  /// @brief Method ovr_Voip_GetRemoteBitrate, addr 0x26f2720, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetRemoteBitrate(uint64_t peerID);

  /// @brief Method ovr_Voip_GetSyncTimestamp, addr 0x26f279c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_Voip_GetSyncTimestamp(uint64_t userID);

  /// @brief Method ovr_Voip_GetSyncTimestampDifference, addr 0x26f2818, size 0x84, virtual false, abstract: false, final false
  static inline int64_t ovr_Voip_GetSyncTimestampDifference(uint32_t lhs, uint32_t rhs);

  /// @brief Method ovr_Voip_GetSystemVoipMicrophoneMuted, addr 0x26f289c, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState ovr_Voip_GetSystemVoipMicrophoneMuted();

  /// @brief Method ovr_Voip_GetSystemVoipStatus, addr 0x26f2904, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_Voip_GetSystemVoipStatus();

  /// @brief Method ovr_Voip_SetMicrophoneMuted, addr 0x26f296c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetMicrophoneMuted(::Oculus::Platform::VoipMuteState state);

  /// @brief Method ovr_Voip_SetNewConnectionOptions, addr 0x26f29e8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetNewConnectionOptions(void* voipOptions);

  /// @brief Method ovr_Voip_SetOutputSampleRate, addr 0x26f2a64, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_SetOutputSampleRate(::Oculus::Platform::VoipSampleRate rate);

  /// @brief Method ovr_Voip_Start, addr 0x26f2ae0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_Start(uint64_t userID);

  /// @brief Method ovr_Voip_Stop, addr 0x26f2b5c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Voip_Stop(uint64_t userID);

  /// @brief Method ovr_AbuseReport_LaunchAdvancedReportFlow, addr 0x26f2bd8, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_AbuseReport_LaunchAdvancedReportFlow(uint64_t content_id, void* abuse_report_options);

  /// @brief Method ovr_AbuseReport_ReportRequestHandled, addr 0x26f2c5c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AbuseReport_ReportRequestHandled(::Oculus::Platform::ReportRequestResponse response);

  /// @brief Method ovr_Achievements_AddCount, addr 0x26f2cd8, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddCount(::StringW name, uint64_t count);

  /// @brief Method ovr_Achievements_AddCount_Native, addr 0x26f2d84, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddCount_Native(void* name, uint64_t count);

  /// @brief Method ovr_Achievements_AddFields, addr 0x26f2e08, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddFields(::StringW name, ::StringW fields);

  /// @brief Method ovr_Achievements_AddFields_Native, addr 0x26f2ed0, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_AddFields_Native(void* name, void* fields);

  /// @brief Method ovr_Achievements_GetAllDefinitions, addr 0x26f2f54, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetAllDefinitions();

  /// @brief Method ovr_Achievements_GetAllProgress, addr 0x26f2fbc, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetAllProgress();

  /// @brief Method ovr_Achievements_GetDefinitionsByName, addr 0x26f3024, size 0x148, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetDefinitionsByName(::ArrayW<::StringW, ::Array<::StringW>*> names, int32_t count);

  /// @brief Method ovr_Achievements_GetProgressByName, addr 0x26f316c, size 0x148, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_GetProgressByName(::ArrayW<::StringW, ::Array<::StringW>*> names, int32_t count);

  /// @brief Method ovr_Achievements_Unlock, addr 0x26f32b4, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_Unlock(::StringW name);

  /// @brief Method ovr_Achievements_Unlock_Native, addr 0x26f3350, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Achievements_Unlock_Native(void* name);

  /// @brief Method ovr_Application_ExecuteCoordinatedLaunch, addr 0x26f33cc, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_ExecuteCoordinatedLaunch(uint64_t appID, uint64_t roomID);

  /// @brief Method ovr_Application_GetInstalledApplications, addr 0x26f3450, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_GetInstalledApplications();

  /// @brief Method ovr_Application_GetVersion, addr 0x26f34b8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_GetVersion();

  /// @brief Method ovr_Application_LaunchOtherApp, addr 0x26f3520, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_LaunchOtherApp(uint64_t appID, void* deeplink_options);

  /// @brief Method ovr_ApplicationLifecycle_GetRegisteredPIDs, addr 0x26f35a4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_GetRegisteredPIDs();

  /// @brief Method ovr_ApplicationLifecycle_GetSessionKey, addr 0x26f360c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_GetSessionKey();

  /// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey, addr 0x26f3674, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey(::StringW sessionKey);

  /// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey_Native, addr 0x26f3710, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey_Native(void* sessionKey);

  /// @brief Method ovr_AssetFile_Delete, addr 0x26f378c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_Delete(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DeleteById, addr 0x26f3808, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DeleteById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DeleteByName, addr 0x26f3884, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DeleteByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DeleteByName_Native, addr 0x26f3920, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DeleteByName_Native(void* assetFileName);

  /// @brief Method ovr_AssetFile_Download, addr 0x26f399c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_Download(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadById, addr 0x26f3a18, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadByName, addr 0x26f3a94, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DownloadByName_Native, addr 0x26f3b30, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadByName_Native(void* assetFileName);

  /// @brief Method ovr_AssetFile_DownloadCancel, addr 0x26f3bac, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancel(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadCancelById, addr 0x26f3c28, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancelById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_DownloadCancelByName, addr 0x26f3ca4, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancelByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_DownloadCancelByName_Native, addr 0x26f3d40, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_DownloadCancelByName_Native(void* assetFileName);

  /// @brief Method ovr_AssetFile_GetList, addr 0x26f3dbc, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_GetList();

  /// @brief Method ovr_AssetFile_Status, addr 0x26f3e24, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_Status(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_StatusById, addr 0x26f3ea0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_StatusById(uint64_t assetFileID);

  /// @brief Method ovr_AssetFile_StatusByName, addr 0x26f3f1c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_StatusByName(::StringW assetFileName);

  /// @brief Method ovr_AssetFile_StatusByName_Native, addr 0x26f3fb8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFile_StatusByName_Native(void* assetFileName);

  /// @brief Method ovr_Avatar_LaunchAvatarEditor, addr 0x26f4034, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Avatar_LaunchAvatarEditor(void* options);

  /// @brief Method ovr_Avatar_UpdateMetaData, addr 0x26f40b0, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_Avatar_UpdateMetaData(::StringW avatarMetaData, ::StringW imageFilePath);

  /// @brief Method ovr_Avatar_UpdateMetaData_Native, addr 0x26f4178, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Avatar_UpdateMetaData_Native(void* avatarMetaData, void* imageFilePath);

  /// @brief Method ovr_Cal_FinalizeApplication, addr 0x26f41fc, size 0xa4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Cal_FinalizeApplication(uint64_t groupingObject, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs, int32_t numUserIDs, uint64_t finalized_application_ID);

  /// @brief Method ovr_Cal_GetSuggestedApplications, addr 0x26f42a0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Cal_GetSuggestedApplications(uint64_t groupingObject, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs, int32_t numUserIDs);

  /// @brief Method ovr_Cal_ProposeApplication, addr 0x26f433c, size 0xa4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Cal_ProposeApplication(uint64_t groupingObject, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs, int32_t numUserIDs, uint64_t proposed_application_ID);

  /// @brief Method ovr_Challenges_Create, addr 0x26f43e0, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Create(::StringW leaderboardName, void* challengeOptions);

  /// @brief Method ovr_Challenges_Create_Native, addr 0x26f448c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Create_Native(void* leaderboardName, void* challengeOptions);

  /// @brief Method ovr_Challenges_DeclineInvite, addr 0x26f4510, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_DeclineInvite(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Delete, addr 0x26f458c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Delete(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Get, addr 0x26f4608, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Get(uint64_t challengeID);

  /// @brief Method ovr_Challenges_GetEntries, addr 0x26f4684, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetEntries(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Challenges_GetEntriesAfterRank, addr 0x26f4720, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetEntriesAfterRank(uint64_t challengeID, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Challenges_GetEntriesByIds, addr 0x26f47b4, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetEntriesByIds(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                        uint32_t userIDLength);

  /// @brief Method ovr_Challenges_GetList, addr 0x26f4868, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetList(void* challengeOptions, int32_t limit);

  /// @brief Method ovr_Challenges_GetNextChallenges, addr 0x26f48ec, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetNextChallenges(void* handle);

  /// @brief Method ovr_Challenges_GetNextEntries, addr 0x26f4968, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetNextEntries(void* handle);

  /// @brief Method ovr_Challenges_GetPreviousChallenges, addr 0x26f49e4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetPreviousChallenges(void* handle);

  /// @brief Method ovr_Challenges_GetPreviousEntries, addr 0x26f4a60, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_GetPreviousEntries(void* handle);

  /// @brief Method ovr_Challenges_Join, addr 0x26f4adc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Join(uint64_t challengeID);

  /// @brief Method ovr_Challenges_Leave, addr 0x26f4b58, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_Leave(uint64_t challengeID);

  /// @brief Method ovr_Challenges_UpdateInfo, addr 0x26f4bd4, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenges_UpdateInfo(uint64_t challengeID, void* challengeOptions);

  /// @brief Method ovr_CloudStorage_Delete, addr 0x26f4c58, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_Delete(::StringW bucket, ::StringW key);

  /// @brief Method ovr_CloudStorage_Delete_Native, addr 0x26f4d20, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_Delete_Native(void* bucket, void* key);

  /// @brief Method ovr_CloudStorage_Load, addr 0x26f4da4, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_Load(::StringW bucket, ::StringW key);

  /// @brief Method ovr_CloudStorage_Load_Native, addr 0x26f4e6c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_Load_Native(void* bucket, void* key);

  /// @brief Method ovr_CloudStorage_LoadBucketMetadata, addr 0x26f4ef0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_LoadBucketMetadata(::StringW bucket);

  /// @brief Method ovr_CloudStorage_LoadBucketMetadata_Native, addr 0x26f4f8c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_LoadBucketMetadata_Native(void* bucket);

  /// @brief Method ovr_CloudStorage_LoadConflictMetadata, addr 0x26f5008, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_LoadConflictMetadata(::StringW bucket, ::StringW key);

  /// @brief Method ovr_CloudStorage_LoadConflictMetadata_Native, addr 0x26f50d0, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_LoadConflictMetadata_Native(void* bucket, void* key);

  /// @brief Method ovr_CloudStorage_LoadHandle, addr 0x26f5154, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_LoadHandle(::StringW handle);

  /// @brief Method ovr_CloudStorage_LoadHandle_Native, addr 0x26f51f0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_LoadHandle_Native(void* handle);

  /// @brief Method ovr_CloudStorage_LoadMetadata, addr 0x26f526c, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_LoadMetadata(::StringW bucket, ::StringW key);

  /// @brief Method ovr_CloudStorage_LoadMetadata_Native, addr 0x26f5334, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_LoadMetadata_Native(void* bucket, void* key);

  /// @brief Method ovr_CloudStorage_ResolveKeepLocal, addr 0x26f53b8, size 0xe8, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_ResolveKeepLocal(::StringW bucket, ::StringW key, ::StringW remoteHandle);

  /// @brief Method ovr_CloudStorage_ResolveKeepLocal_Native, addr 0x26f54a0, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_ResolveKeepLocal_Native(void* bucket, void* key, void* remoteHandle);

  /// @brief Method ovr_CloudStorage_ResolveKeepRemote, addr 0x26f5534, size 0xe8, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_ResolveKeepRemote(::StringW bucket, ::StringW key, ::StringW remoteHandle);

  /// @brief Method ovr_CloudStorage_ResolveKeepRemote_Native, addr 0x26f561c, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_ResolveKeepRemote_Native(void* bucket, void* key, void* remoteHandle);

  /// @brief Method ovr_CloudStorage_Save, addr 0x26f56b0, size 0x110, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_Save(::StringW bucket, ::StringW key, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint32_t dataSize, int64_t counter, ::StringW extraData);

  /// @brief Method ovr_CloudStorage_Save_Native, addr 0x26f57c0, size 0xbc, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage_Save_Native(void* bucket, void* key, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint32_t dataSize, int64_t counter, void* extraData);

  /// @brief Method ovr_CloudStorage2_GetUserDirectoryPath, addr 0x26f587c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorage2_GetUserDirectoryPath();

  /// @brief Method ovr_Colocation_GetCurrentMapUuid, addr 0x26f58e4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_GetCurrentMapUuid();

  /// @brief Method ovr_Colocation_RequestMap, addr 0x26f594c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_RequestMap(::StringW uuid);

  /// @brief Method ovr_Colocation_RequestMap_Native, addr 0x26f59e8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_RequestMap_Native(void* uuid);

  /// @brief Method ovr_Colocation_ShareMap, addr 0x26f5a64, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_ShareMap(::StringW uuid);

  /// @brief Method ovr_Colocation_ShareMap_Native, addr 0x26f5b00, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Colocation_ShareMap_Native(void* uuid);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken, addr 0x26f5b7c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken(::StringW challenge_nonce);

  /// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken_Native, addr 0x26f5c18, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken_Native(void* challenge_nonce);

  /// @brief Method ovr_Entitlement_GetIsViewerEntitled, addr 0x26f5c94, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Entitlement_GetIsViewerEntitled();

  /// @brief Method ovr_GraphAPI_Get, addr 0x26f5cfc, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Get(::StringW url);

  /// @brief Method ovr_GraphAPI_Get_Native, addr 0x26f5d98, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Get_Native(void* url);

  /// @brief Method ovr_GraphAPI_Post, addr 0x26f5e14, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Post(::StringW url);

  /// @brief Method ovr_GraphAPI_Post_Native, addr 0x26f5eb0, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ovr_GraphAPI_Post_Native(void* url);

  /// @brief Method ovr_GroupPresence_Clear, addr 0x26f5f28, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_Clear();

  /// @brief Method ovr_GroupPresence_GetInvitableUsers, addr 0x26f5f90, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_GetInvitableUsers(void* options);

  /// @brief Method ovr_GroupPresence_GetSentInvites, addr 0x26f600c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_GetSentInvites();

  /// @brief Method ovr_GroupPresence_LaunchInvitePanel, addr 0x26f6074, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchInvitePanel(void* options);

  /// @brief Method ovr_GroupPresence_LaunchMultiplayerErrorDialog, addr 0x26f60f0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchMultiplayerErrorDialog(void* options);

  /// @brief Method ovr_GroupPresence_LaunchRejoinDialog, addr 0x26f616c, size 0xe8, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog(::StringW lobby_session_id, ::StringW match_session_id, ::StringW destination_api_name);

  /// @brief Method ovr_GroupPresence_LaunchRejoinDialog_Native, addr 0x26f6254, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog_Native(void* lobby_session_id, void* match_session_id, void* destination_api_name);

  /// @brief Method ovr_GroupPresence_LaunchRosterPanel, addr 0x26f62e8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_LaunchRosterPanel(void* options);

  /// @brief Method ovr_GroupPresence_SendInvites, addr 0x26f6364, size 0x8c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SendInvites(::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs, uint32_t userIDLength);

  /// @brief Method ovr_GroupPresence_Set, addr 0x26f63f0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_Set(void* groupPresenceOptions);

  /// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride, addr 0x26f646c, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride(::StringW deeplink_message);

  /// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride_Native, addr 0x26f6508, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride_Native(void* deeplink_message);

  /// @brief Method ovr_GroupPresence_SetDestination, addr 0x26f6584, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDestination(::StringW api_name);

  /// @brief Method ovr_GroupPresence_SetDestination_Native, addr 0x26f6620, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetDestination_Native(void* api_name);

  /// @brief Method ovr_GroupPresence_SetIsJoinable, addr 0x26f669c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetIsJoinable(bool is_joinable);

  /// @brief Method ovr_GroupPresence_SetLobbySession, addr 0x26f6718, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetLobbySession(::StringW id);

  /// @brief Method ovr_GroupPresence_SetLobbySession_Native, addr 0x26f67b4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetLobbySession_Native(void* id);

  /// @brief Method ovr_GroupPresence_SetMatchSession, addr 0x26f6830, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetMatchSession(::StringW id);

  /// @brief Method ovr_GroupPresence_SetMatchSession_Native, addr 0x26f68cc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_GroupPresence_SetMatchSession_Native(void* id);

  /// @brief Method ovr_HTTP_Get, addr 0x26f6948, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Get(::StringW url);

  /// @brief Method ovr_HTTP_Get_Native, addr 0x26f69e4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Get_Native(void* url);

  /// @brief Method ovr_HTTP_GetToFile, addr 0x26f6a60, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_GetToFile(::StringW url, ::StringW diskFile);

  /// @brief Method ovr_HTTP_GetToFile_Native, addr 0x26f6b28, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_GetToFile_Native(void* url, void* diskFile);

  /// @brief Method ovr_HTTP_MultiPartPost, addr 0x26f6bac, size 0x154, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_MultiPartPost(::StringW url, ::StringW filepath_param_name, ::StringW filepath, ::StringW access_token,
                                                ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> post_params);

  /// @brief Method ovr_HTTP_MultiPartPost_Native, addr 0x26f6d00, size 0x1d8, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_MultiPartPost_Native(void* url, void* filepath_param_name, void* filepath, void* access_token,
                                                       ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> post_params, void* numItems);

  /// @brief Method ovr_HTTP_Post, addr 0x26f6ed8, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Post(::StringW url);

  /// @brief Method ovr_HTTP_Post_Native, addr 0x26f6f74, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HTTP_Post_Native(void* url);

  /// @brief Method ovr_IAP_ConsumePurchase, addr 0x26f6ff0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_ConsumePurchase(::StringW sku);

  /// @brief Method ovr_IAP_ConsumePurchase_Native, addr 0x26f708c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_ConsumePurchase_Native(void* sku);

  /// @brief Method ovr_IAP_GetProductsBySKU, addr 0x26f7108, size 0x148, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_GetProductsBySKU(::ArrayW<::StringW, ::Array<::StringW>*> skus, int32_t count);

  /// @brief Method ovr_IAP_GetViewerPurchases, addr 0x26f7250, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_GetViewerPurchases();

  /// @brief Method ovr_IAP_GetViewerPurchasesDurableCache, addr 0x26f72b8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_GetViewerPurchasesDurableCache();

  /// @brief Method ovr_IAP_LaunchCheckoutFlow, addr 0x26f7320, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_LaunchCheckoutFlow(::StringW sku);

  /// @brief Method ovr_IAP_LaunchCheckoutFlow_Native, addr 0x26f73bc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_IAP_LaunchCheckoutFlow_Native(void* sku);

  /// @brief Method ovr_LanguagePack_GetCurrent, addr 0x26f7438, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_LanguagePack_GetCurrent();

  /// @brief Method ovr_LanguagePack_SetCurrent, addr 0x26f74a0, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LanguagePack_SetCurrent(::StringW tag);

  /// @brief Method ovr_LanguagePack_SetCurrent_Native, addr 0x26f753c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LanguagePack_SetCurrent_Native(void* tag);

  /// @brief Method ovr_Leaderboard_Get, addr 0x26f75b8, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_Get(::StringW leaderboardName);

  /// @brief Method ovr_Leaderboard_Get_Native, addr 0x26f7654, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_Get_Native(void* leaderboardName);

  /// @brief Method ovr_Leaderboard_GetEntries, addr 0x26f76d0, size 0xc4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntries(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Leaderboard_GetEntries_Native, addr 0x26f7794, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntries_Native(void* leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method ovr_Leaderboard_GetEntriesAfterRank, addr 0x26f7830, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank(::StringW leaderboardName, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Leaderboard_GetEntriesAfterRank_Native, addr 0x26f78e4, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank_Native(void* leaderboardName, int32_t limit, uint64_t afterRank);

  /// @brief Method ovr_Leaderboard_GetEntriesByIds, addr 0x26f7978, size 0xcc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesByIds(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                         uint32_t userIDLength);

  /// @brief Method ovr_Leaderboard_GetEntriesByIds_Native, addr 0x26f7a44, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetEntriesByIds_Native(void* leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs,
                                                                uint32_t userIDLength);

  /// @brief Method ovr_Leaderboard_GetNextEntries, addr 0x26f7af8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetNextEntries(void* handle);

  /// @brief Method ovr_Leaderboard_GetPreviousEntries, addr 0x26f7b74, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetPreviousEntries(void* handle);

  /// @brief Method ovr_Leaderboard_WriteEntry, addr 0x26f7bf0, size 0xcc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntry(::StringW leaderboardName, int64_t score, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData, uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntry_Native, addr 0x26f7cbc, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntry_Native(void* leaderboardName, int64_t score, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData, uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric, addr 0x26f7d70, size 0xdc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric(::StringW leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData,
                                                                           uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native, addr 0x26f7e4c, size 0xbc, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native(void* leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData,
                                                                                  uint32_t extraDataLength, bool forceUpdate);

  /// @brief Method ovr_Livestreaming_IsAllowedForApplication, addr 0x26f7f08, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_IsAllowedForApplication(::StringW packageName);

  /// @brief Method ovr_Livestreaming_IsAllowedForApplication_Native, addr 0x26f7fa4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_IsAllowedForApplication_Native(void* packageName);

  /// @brief Method ovr_Livestreaming_StartPartyStream, addr 0x26f8020, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StartPartyStream();

  /// @brief Method ovr_Livestreaming_StartStream, addr 0x26f8088, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StartStream(::Oculus::Platform::LivestreamingAudience audience, ::Oculus::Platform::LivestreamingMicrophoneStatus micStatus);

  /// @brief Method ovr_Livestreaming_StopPartyStream, addr 0x26f810c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StopPartyStream();

  /// @brief Method ovr_Livestreaming_StopStream, addr 0x26f8174, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_StopStream();

  /// @brief Method ovr_Livestreaming_UpdateMicStatus, addr 0x26f81dc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Livestreaming_UpdateMicStatus(::Oculus::Platform::LivestreamingMicrophoneStatus micStatus);

  /// @brief Method ovr_Matchmaking_Browse, addr 0x26f8258, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_Browse(::StringW pool, void* customQueryData);

  /// @brief Method ovr_Matchmaking_Browse_Native, addr 0x26f8304, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_Browse_Native(void* pool, void* customQueryData);

  /// @brief Method ovr_Matchmaking_Browse2, addr 0x26f8388, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_Browse2(::StringW pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_Browse2_Native, addr 0x26f8434, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_Browse2_Native(void* pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_Cancel, addr 0x26f84b8, size 0xc8, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_Cancel(::StringW pool, ::StringW requestHash);

  /// @brief Method ovr_Matchmaking_Cancel_Native, addr 0x26f8580, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_Cancel_Native(void* pool, void* requestHash);

  /// @brief Method ovr_Matchmaking_Cancel2, addr 0x26f8604, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_Cancel2();

  /// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom, addr 0x26f866c, size 0xc4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_CreateAndEnqueueRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates, void* customQueryData);

  /// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom_Native, addr 0x26f8730, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_CreateAndEnqueueRoom_Native(void* pool, uint32_t maxUsers, bool subscribeToUpdates, void* customQueryData);

  /// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom2, addr 0x26f87cc, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_CreateAndEnqueueRoom2(::StringW pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom2_Native, addr 0x26f8878, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_CreateAndEnqueueRoom2_Native(void* pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_CreateRoom, addr 0x26f88fc, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_CreateRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates);

  /// @brief Method ovr_Matchmaking_CreateRoom_Native, addr 0x26f89b0, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_CreateRoom_Native(void* pool, uint32_t maxUsers, bool subscribeToUpdates);

  /// @brief Method ovr_Matchmaking_CreateRoom2, addr 0x26f8a44, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_CreateRoom2(::StringW pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_CreateRoom2_Native, addr 0x26f8af0, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_CreateRoom2_Native(void* pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_Enqueue, addr 0x26f8b74, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_Enqueue(::StringW pool, void* customQueryData);

  /// @brief Method ovr_Matchmaking_Enqueue_Native, addr 0x26f8c20, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_Enqueue_Native(void* pool, void* customQueryData);

  /// @brief Method ovr_Matchmaking_Enqueue2, addr 0x26f8ca4, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_Enqueue2(::StringW pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_Enqueue2_Native, addr 0x26f8d50, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_Enqueue2_Native(void* pool, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_EnqueueRoom, addr 0x26f8dd4, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_EnqueueRoom(uint64_t roomID, void* customQueryData);

  /// @brief Method ovr_Matchmaking_EnqueueRoom2, addr 0x26f8e58, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_EnqueueRoom2(uint64_t roomID, void* matchmakingOptions);

  /// @brief Method ovr_Matchmaking_GetAdminSnapshot, addr 0x26f8edc, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_GetAdminSnapshot();

  /// @brief Method ovr_Matchmaking_GetStats, addr 0x26f8f44, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_GetStats(::StringW pool, uint32_t maxLevel, ::Oculus::Platform::MatchmakingStatApproach approach);

  /// @brief Method ovr_Matchmaking_GetStats_Native, addr 0x26f8ff8, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_GetStats_Native(void* pool, uint32_t maxLevel, ::Oculus::Platform::MatchmakingStatApproach approach);

  /// @brief Method ovr_Matchmaking_JoinRoom, addr 0x26f908c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_JoinRoom(uint64_t roomID, bool subscribeToUpdates);

  /// @brief Method ovr_Matchmaking_ReportResultInsecure, addr 0x26f9110, size 0xa0, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_ReportResultInsecure(uint64_t roomID, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> data);

  /// @brief Method ovr_Matchmaking_ReportResultInsecure_Native, addr 0x26f91b0, size 0x1a4, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_ReportResultInsecure_Native(uint64_t roomID, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> data,
                                                                     void* numItems);

  /// @brief Method ovr_Matchmaking_StartMatch, addr 0x26f9354, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Matchmaking_StartMatch(uint64_t roomID);

  /// @brief Method ovr_Media_ShareToFacebook, addr 0x26f93d0, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_Media_ShareToFacebook(::StringW postTextSuggestion, ::StringW filePath, ::Oculus::Platform::MediaContentType contentType);

  /// @brief Method ovr_Media_ShareToFacebook_Native, addr 0x26f94a0, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Media_ShareToFacebook_Native(void* postTextSuggestion, void* filePath, ::Oculus::Platform::MediaContentType contentType);

  /// @brief Method ovr_NetSync_Connect, addr 0x26f9534, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_Connect(void* connect_options);

  /// @brief Method ovr_NetSync_Disconnect, addr 0x26f95b0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_Disconnect(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetSessions, addr 0x26f962c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_GetSessions(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetVoipAttenuation, addr 0x26f96a8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_GetVoipAttenuation(int64_t connection_id);

  /// @brief Method ovr_NetSync_GetVoipAttenuationDefault, addr 0x26f9724, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_GetVoipAttenuationDefault();

  /// @brief Method ovr_NetSync_SetVoipAttenuation, addr 0x26f978c, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuation(int64_t connection_id, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels, void* count);

  /// @brief Method ovr_NetSync_SetVoipAttenuationModel, addr 0x26f9838, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuationModel(int64_t connection_id, ::StringW name, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels,
                                                             void* count);

  /// @brief Method ovr_NetSync_SetVoipAttenuationModel_Native, addr 0x26f9908, size 0xbc, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipAttenuationModel_Native(int64_t connection_id, void* name, ::ArrayW<float_t, ::Array<float_t>*> distances, ::ArrayW<float_t, ::Array<float_t>*> decibels,
                                                                    void* count);

  /// @brief Method ovr_NetSync_SetVoipChannelCfg, addr 0x26f99c4, size 0xe0, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipChannelCfg(int64_t connection_id, ::StringW channel_name, ::StringW attnmodel, bool disable_spatialization);

  /// @brief Method ovr_NetSync_SetVoipChannelCfg_Native, addr 0x26f9aa4, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipChannelCfg_Native(int64_t connection_id, void* channel_name, void* attnmodel, bool disable_spatialization);

  /// @brief Method ovr_NetSync_SetVoipGroup, addr 0x26f9b40, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipGroup(int64_t connection_id, ::StringW group_id);

  /// @brief Method ovr_NetSync_SetVoipGroup_Native, addr 0x26f9bf0, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipGroup_Native(int64_t connection_id, void* group_id);

  /// @brief Method ovr_NetSync_SetVoipListentoChannels, addr 0x26f9c74, size 0x160, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipListentoChannels(int64_t connection_id, ::ArrayW<::StringW, ::Array<::StringW>*> listento_channels, void* count);

  /// @brief Method ovr_NetSync_SetVoipMicSource, addr 0x26f9dd4, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipMicSource(int64_t connection_id, ::Oculus::Platform::NetSyncVoipMicSource mic_source);

  /// @brief Method ovr_NetSync_SetVoipSessionMuted, addr 0x26f9e58, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipSessionMuted(int64_t connection_id, uint64_t session_id, bool muted);

  /// @brief Method ovr_NetSync_SetVoipSpeaktoChannels, addr 0x26f9eec, size 0x160, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipSpeaktoChannels(int64_t connection_id, ::ArrayW<::StringW, ::Array<::StringW>*> speakto_channels, void* count);

  /// @brief Method ovr_NetSync_SetVoipStreamMode, addr 0x26fa04c, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSync_SetVoipStreamMode(int64_t connection_id, uint64_t sessionId, ::Oculus::Platform::NetSyncVoipStreamMode streamMode);

  /// @brief Method ovr_Notification_GetRoomInvites, addr 0x26fa0e0, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Notification_GetRoomInvites();

  /// @brief Method ovr_Notification_MarkAsRead, addr 0x26fa148, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Notification_MarkAsRead(uint64_t notificationID);

  /// @brief Method ovr_Party_Create, addr 0x26fa1c4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Create();

  /// @brief Method ovr_Party_GatherInApplication, addr 0x26fa22c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GatherInApplication(uint64_t partyID, uint64_t appID);

  /// @brief Method ovr_Party_Get, addr 0x26fa2b0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Get(uint64_t partyID);

  /// @brief Method ovr_Party_GetCurrent, addr 0x26fa32c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GetCurrent();

  /// @brief Method ovr_Party_GetCurrentForUser, addr 0x26fa394, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GetCurrentForUser(uint64_t userID);

  /// @brief Method ovr_Party_Invite, addr 0x26fa410, size 0x80, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Invite(uint64_t partyID, uint64_t userID);

  /// @brief Method ovr_Party_Join, addr 0x26fa490, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Join(uint64_t partyID);

  /// @brief Method ovr_Party_Leave, addr 0x26fa50c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_Leave(uint64_t partyID);

  /// @brief Method ovr_RichPresence_Clear, addr 0x26fa588, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_Clear();

  /// @brief Method ovr_RichPresence_GetDestinations, addr 0x26fa5f0, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_GetDestinations();

  /// @brief Method ovr_RichPresence_Set, addr 0x26fa658, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_Set(void* richPresenceOptions);

  /// @brief Method ovr_RichPresence_SetDestination, addr 0x26fa6d4, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetDestination(::StringW api_name);

  /// @brief Method ovr_RichPresence_SetDestination_Native, addr 0x26fa770, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetDestination_Native(void* api_name);

  /// @brief Method ovr_RichPresence_SetIsJoinable, addr 0x26fa7ec, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetIsJoinable(bool is_joinable);

  /// @brief Method ovr_RichPresence_SetLobbySession, addr 0x26fa868, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetLobbySession(::StringW id);

  /// @brief Method ovr_RichPresence_SetLobbySession_Native, addr 0x26fa904, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetLobbySession_Native(void* id);

  /// @brief Method ovr_RichPresence_SetMatchSession, addr 0x26fa980, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetMatchSession(::StringW id);

  /// @brief Method ovr_RichPresence_SetMatchSession_Native, addr 0x26faa1c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RichPresence_SetMatchSession_Native(void* id);

  /// @brief Method ovr_Room_CreateAndJoinPrivate, addr 0x26faa98, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_CreateAndJoinPrivate(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, bool subscribeToUpdates);

  /// @brief Method ovr_Room_CreateAndJoinPrivate2, addr 0x26fab2c, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_CreateAndJoinPrivate2(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, void* roomOptions);

  /// @brief Method ovr_Room_Get, addr 0x26fabc0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_Get(uint64_t roomID);

  /// @brief Method ovr_Room_GetCurrent, addr 0x26fac3c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_GetCurrent();

  /// @brief Method ovr_Room_GetCurrentForUser, addr 0x26faca4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_GetCurrentForUser(uint64_t userID);

  /// @brief Method ovr_Room_GetInvitableUsers, addr 0x26fad20, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_GetInvitableUsers();

  /// @brief Method ovr_Room_GetInvitableUsers2, addr 0x26fad88, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_GetInvitableUsers2(void* roomOptions);

  /// @brief Method ovr_Room_GetModeratedRooms, addr 0x26fae04, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_GetModeratedRooms();

  /// @brief Method ovr_Room_GetSocialRooms, addr 0x26fae6c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_GetSocialRooms(uint64_t appID);

  /// @brief Method ovr_Room_InviteUser, addr 0x26faee8, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_InviteUser(uint64_t roomID, ::StringW inviteToken);

  /// @brief Method ovr_Room_InviteUser_Native, addr 0x26faf98, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_InviteUser_Native(uint64_t roomID, void* inviteToken);

  /// @brief Method ovr_Room_Join, addr 0x26fb01c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_Join(uint64_t roomID, bool subscribeToUpdates);

  /// @brief Method ovr_Room_Join2, addr 0x26fb0a0, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_Join2(uint64_t roomID, void* roomOptions);

  /// @brief Method ovr_Room_KickUser, addr 0x26fb124, size 0x90, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_KickUser(uint64_t roomID, uint64_t userID, int32_t kickDurationSeconds);

  /// @brief Method ovr_Room_LaunchInvitableUserFlow, addr 0x26fb1b4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_LaunchInvitableUserFlow(uint64_t roomID);

  /// @brief Method ovr_Room_Leave, addr 0x26fb230, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_Leave(uint64_t roomID);

  /// @brief Method ovr_Room_SetDescription, addr 0x26fb2ac, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_SetDescription(uint64_t roomID, ::StringW description);

  /// @brief Method ovr_Room_SetDescription_Native, addr 0x26fb35c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_SetDescription_Native(uint64_t roomID, void* description);

  /// @brief Method ovr_Room_UpdateDataStore, addr 0x26fb3e0, size 0xa0, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_UpdateDataStore(uint64_t roomID, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> data);

  /// @brief Method ovr_Room_UpdateDataStore_Native, addr 0x26fb480, size 0x1a0, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_UpdateDataStore_Native(uint64_t roomID, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair, ::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> data,
                                                         void* numItems);

  /// @brief Method ovr_Room_UpdateMembershipLockStatus, addr 0x26fb620, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_UpdateMembershipLockStatus(uint64_t roomID, ::Oculus::Platform::RoomMembershipLockStatus membershipLockStatus);

  /// @brief Method ovr_Room_UpdateOwner, addr 0x26fb6a4, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_UpdateOwner(uint64_t roomID, uint64_t userID);

  /// @brief Method ovr_Room_UpdatePrivateRoomJoinPolicy, addr 0x26fb728, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_UpdatePrivateRoomJoinPolicy(uint64_t roomID, ::Oculus::Platform::RoomJoinPolicy newJoinPolicy);

  /// @brief Method ovr_User_CancelRecordingForReportFlow, addr 0x26fb7ac, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_CancelRecordingForReportFlow(::StringW recordingUUID);

  /// @brief Method ovr_User_CancelRecordingForReportFlow_Native, addr 0x26fb848, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_CancelRecordingForReportFlow_Native(void* recordingUUID);

  /// @brief Method ovr_User_Get, addr 0x26fb8c4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_Get(uint64_t userID);

  /// @brief Method ovr_User_GetAccessToken, addr 0x26fb940, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetAccessToken();

  /// @brief Method ovr_User_GetBlockedUsers, addr 0x26fb9a8, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetBlockedUsers();

  /// @brief Method ovr_User_GetLinkedAccounts, addr 0x26fba10, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLinkedAccounts(void* userOptions);

  /// @brief Method ovr_User_GetLoggedInUser, addr 0x26fba8c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLoggedInUser();

  /// @brief Method ovr_User_GetLoggedInUserFriends, addr 0x26fbaf4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLoggedInUserFriends();

  /// @brief Method ovr_User_GetLoggedInUserFriendsAndRooms, addr 0x26fbb5c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLoggedInUserFriendsAndRooms();

  /// @brief Method ovr_User_GetLoggedInUserRecentlyMetUsersAndRooms, addr 0x26fbbc4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetLoggedInUserRecentlyMetUsersAndRooms(void* userOptions);

  /// @brief Method ovr_User_GetOrgScopedID, addr 0x26fbc40, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetOrgScopedID(uint64_t userID);

  /// @brief Method ovr_User_GetSdkAccounts, addr 0x26fbcbc, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetSdkAccounts();

  /// @brief Method ovr_User_GetUserCapabilities, addr 0x26fbd24, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetUserCapabilities();

  /// @brief Method ovr_User_GetUserProof, addr 0x26fbd8c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetUserProof();

  /// @brief Method ovr_User_LaunchBlockFlow, addr 0x26fbdf4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchBlockFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchFriendRequestFlow, addr 0x26fbe70, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchFriendRequestFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchProfile, addr 0x26fbeec, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchProfile(uint64_t userID);

  /// @brief Method ovr_User_LaunchReportFlow, addr 0x26fbf68, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchReportFlow(uint64_t userID);

  /// @brief Method ovr_User_LaunchReportFlow2, addr 0x26fbfe4, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchReportFlow2(uint64_t optionalUserID, void* abuseReportOptions);

  /// @brief Method ovr_User_LaunchUnblockFlow, addr 0x26fc068, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_LaunchUnblockFlow(uint64_t userID);

  /// @brief Method ovr_User_NewEntitledTestUser, addr 0x26fc0e4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_NewEntitledTestUser();

  /// @brief Method ovr_User_NewTestUser, addr 0x26fc14c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_NewTestUser();

  /// @brief Method ovr_User_NewTestUserFriends, addr 0x26fc1b4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_NewTestUserFriends();

  /// @brief Method ovr_User_StartRecordingForReportFlow, addr 0x26fc21c, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StartRecordingForReportFlow();

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow, addr 0x26fc284, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow(uint64_t optionalUserID, ::StringW optionalRecordingUUID);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow_Native, addr 0x26fc334, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow_Native(uint64_t optionalUserID, void* optionalRecordingUUID);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2, addr 0x26fc3b8, size 0xb8, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2(uint64_t optionalUserID, ::StringW optionalRecordingUUID, void* abuseReportOptions);

  /// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2_Native, addr 0x26fc470, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2_Native(uint64_t optionalUserID, void* optionalRecordingUUID, void* abuseReportOptions);

  /// @brief Method ovr_User_TestUserCreateDeviceManifest, addr 0x26fc504, size 0xb4, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_TestUserCreateDeviceManifest(::StringW deviceID, ::ArrayW<uint64_t, ::Array<uint64_t>*> appIDs, int32_t numAppIDs);

  /// @brief Method ovr_User_TestUserCreateDeviceManifest_Native, addr 0x26fc5b8, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_TestUserCreateDeviceManifest_Native(void* deviceID, ::ArrayW<uint64_t, ::Array<uint64_t>*> appIDs, int32_t numAppIDs);

  /// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey, addr 0x26fc654, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey_Native, addr 0x26fc704, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PrivateGetEntries, addr 0x26fc788, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntries(uint64_t userID);

  /// @brief Method ovr_UserDataStore_PrivateGetEntryByKey, addr 0x26fc804, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PrivateGetEntryByKey_Native, addr 0x26fc8b4, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PrivateWriteEntry, addr 0x26fc938, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateWriteEntry(uint64_t userID, ::StringW key, ::StringW value);

  /// @brief Method ovr_UserDataStore_PrivateWriteEntry_Native, addr 0x26fca08, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PrivateWriteEntry_Native(uint64_t userID, void* key, void* value);

  /// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey, addr 0x26fca9c, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey_Native, addr 0x26fcb4c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PublicGetEntries, addr 0x26fcbd0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntries(uint64_t userID);

  /// @brief Method ovr_UserDataStore_PublicGetEntryByKey, addr 0x26fcc4c, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method ovr_UserDataStore_PublicGetEntryByKey_Native, addr 0x26fccfc, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey_Native(uint64_t userID, void* key);

  /// @brief Method ovr_UserDataStore_PublicWriteEntry, addr 0x26fcd80, size 0xd0, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicWriteEntry(uint64_t userID, ::StringW key, ::StringW value);

  /// @brief Method ovr_UserDataStore_PublicWriteEntry_Native, addr 0x26fce50, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserDataStore_PublicWriteEntry_Native(uint64_t userID, void* key, void* value);

  /// @brief Method ovr_Voip_GetMicrophoneAvailability, addr 0x26fcee4, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t ovr_Voip_GetMicrophoneAvailability();

  /// @brief Method ovr_Voip_ReportAppVoipSessions, addr 0x26fcf4c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_Voip_ReportAppVoipSessions(::ArrayW<uint64_t, ::Array<uint64_t>*> sessionIDs);

  /// @brief Method ovr_Voip_SetSystemVoipSuppressed, addr 0x26fcfd0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Voip_SetSystemVoipSuppressed(bool suppressed);

  /// @brief Method ovr_AbuseReportRecording_GetRecordingUuid, addr 0x26fd04c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AbuseReportRecording_GetRecordingUuid(void* obj);

  /// @brief Method ovr_AbuseReportRecording_GetRecordingUuid_Native, addr 0x26fd0a4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AbuseReportRecording_GetRecordingUuid_Native(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetBitfieldLength, addr 0x26fd120, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_AchievementDefinition_GetBitfieldLength(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetName, addr 0x26fd19c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementDefinition_GetName(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetName_Native, addr 0x26fd1f4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementDefinition_GetName_Native(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetTarget, addr 0x26fd270, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AchievementDefinition_GetTarget(void* obj);

  /// @brief Method ovr_AchievementDefinition_GetType, addr 0x26fd2ec, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::AchievementType ovr_AchievementDefinition_GetType(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_GetElement, addr 0x26fd368, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_AchievementDefinitionArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_AchievementDefinitionArray_GetNextUrl, addr 0x26fd3ec, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementDefinitionArray_GetNextUrl(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_GetNextUrl_Native, addr 0x26fd444, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementDefinitionArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_GetSize, addr 0x26fd4c0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementDefinitionArray_GetSize(void* obj);

  /// @brief Method ovr_AchievementDefinitionArray_HasNextPage, addr 0x26fd53c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementDefinitionArray_HasNextPage(void* obj);

  /// @brief Method ovr_AchievementProgress_GetBitfield, addr 0x26fd5c0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementProgress_GetBitfield(void* obj);

  /// @brief Method ovr_AchievementProgress_GetBitfield_Native, addr 0x26fd618, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgress_GetBitfield_Native(void* obj);

  /// @brief Method ovr_AchievementProgress_GetCount, addr 0x26fd694, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AchievementProgress_GetCount(void* obj);

  /// @brief Method ovr_AchievementProgress_GetIsUnlocked, addr 0x26fd710, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementProgress_GetIsUnlocked(void* obj);

  /// @brief Method ovr_AchievementProgress_GetName, addr 0x26fd794, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementProgress_GetName(void* obj);

  /// @brief Method ovr_AchievementProgress_GetName_Native, addr 0x26fd7ec, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgress_GetName_Native(void* obj);

  /// @brief Method ovr_AchievementProgress_GetUnlockTime, addr 0x26fd868, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_AchievementProgress_GetUnlockTime(void* obj);

  /// @brief Method ovr_AchievementProgress_GetUnlockTime_Native, addr 0x26fd8c0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AchievementProgress_GetUnlockTime_Native(void* obj);

  /// @brief Method ovr_AchievementProgressArray_GetElement, addr 0x26fd93c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgressArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_AchievementProgressArray_GetNextUrl, addr 0x26fd9c0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementProgressArray_GetNextUrl(void* obj);

  /// @brief Method ovr_AchievementProgressArray_GetNextUrl_Native, addr 0x26fda18, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgressArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_AchievementProgressArray_GetSize, addr 0x26fda94, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementProgressArray_GetSize(void* obj);

  /// @brief Method ovr_AchievementProgressArray_HasNextPage, addr 0x26fdb10, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementProgressArray_HasNextPage(void* obj);

  /// @brief Method ovr_AchievementUpdate_GetJustUnlocked, addr 0x26fdb94, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AchievementUpdate_GetJustUnlocked(void* obj);

  /// @brief Method ovr_AchievementUpdate_GetName, addr 0x26fdc18, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AchievementUpdate_GetName(void* obj);

  /// @brief Method ovr_AchievementUpdate_GetName_Native, addr 0x26fdc70, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AchievementUpdate_GetName_Native(void* obj);

  /// @brief Method ovr_Application_GetID, addr 0x26fdcec, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Application_GetID(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetDestination, addr 0x26fdd68, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInvite_GetDestination(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetID, addr 0x26fdde4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ApplicationInvite_GetID(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetIsActive, addr 0x26fde60, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ApplicationInvite_GetIsActive(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetLobbySessionId, addr 0x26fdee4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationInvite_GetLobbySessionId(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetLobbySessionId_Native, addr 0x26fdf3c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInvite_GetLobbySessionId_Native(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetMatchSessionId, addr 0x26fdfb8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationInvite_GetMatchSessionId(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetMatchSessionId_Native, addr 0x26fe010, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInvite_GetMatchSessionId_Native(void* obj);

  /// @brief Method ovr_ApplicationInvite_GetRecipient, addr 0x26fe08c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInvite_GetRecipient(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_GetElement, addr 0x26fe108, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInviteArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ApplicationInviteArray_GetNextUrl, addr 0x26fe18c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationInviteArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_GetNextUrl_Native, addr 0x26fe1e4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInviteArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_GetSize, addr 0x26fe260, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationInviteArray_GetSize(void* obj);

  /// @brief Method ovr_ApplicationInviteArray_HasNextPage, addr 0x26fe2dc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ApplicationInviteArray_HasNextPage(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetCurrentCode, addr 0x26fe360, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_ApplicationVersion_GetCurrentCode(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetCurrentName, addr 0x26fe3dc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationVersion_GetCurrentName(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetCurrentName_Native, addr 0x26fe434, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationVersion_GetCurrentName_Native(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestCode, addr 0x26fe4b0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_ApplicationVersion_GetLatestCode(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestName, addr 0x26fe52c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ApplicationVersion_GetLatestName(void* obj);

  /// @brief Method ovr_ApplicationVersion_GetLatestName_Native, addr 0x26fe584, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationVersion_GetLatestName_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetAssetId, addr 0x26fe600, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetDetails_GetAssetId(void* obj);

  /// @brief Method ovr_AssetDetails_GetAssetType, addr 0x26fe67c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetAssetType(void* obj);

  /// @brief Method ovr_AssetDetails_GetAssetType_Native, addr 0x26fe6d4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetAssetType_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetDownloadStatus, addr 0x26fe750, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetDownloadStatus(void* obj);

  /// @brief Method ovr_AssetDetails_GetDownloadStatus_Native, addr 0x26fe7a8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetDownloadStatus_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetFilepath, addr 0x26fe824, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetFilepath(void* obj);

  /// @brief Method ovr_AssetDetails_GetFilepath_Native, addr 0x26fe87c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetIapStatus, addr 0x26fe8f8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetIapStatus(void* obj);

  /// @brief Method ovr_AssetDetails_GetIapStatus_Native, addr 0x26fe950, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetIapStatus_Native(void* obj);

  /// @brief Method ovr_AssetDetails_GetLanguage, addr 0x26fe9cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetLanguage(void* obj);

  /// @brief Method ovr_AssetDetails_GetMetadata, addr 0x26fea48, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetDetails_GetMetadata(void* obj);

  /// @brief Method ovr_AssetDetails_GetMetadata_Native, addr 0x26feaa0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetails_GetMetadata_Native(void* obj);

  /// @brief Method ovr_AssetDetailsArray_GetElement, addr 0x26feb1c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetailsArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_AssetDetailsArray_GetSize, addr 0x26feba0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetDetailsArray_GetSize(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetAssetFileId, addr 0x26fec1c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDeleteResult_GetAssetFileId(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetAssetId, addr 0x26fec98, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDeleteResult_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetFilepath, addr 0x26fed14, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetFileDeleteResult_GetFilepath(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetFilepath_Native, addr 0x26fed6c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetFileDeleteResult_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetFileDeleteResult_GetSuccess, addr 0x26fede8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AssetFileDeleteResult_GetSuccess(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetFileId, addr 0x26fee6c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetFileId(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetId, addr 0x26feee8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath, addr 0x26fef64, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetFileDownloadCancelResult_GetFilepath(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath_Native, addr 0x26fefbc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetFileDownloadCancelResult_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetFileDownloadCancelResult_GetSuccess, addr 0x26ff038, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AssetFileDownloadCancelResult_GetSuccess(void* obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetAssetId, addr 0x26ff0bc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadResult_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetFilepath, addr 0x26ff138, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_AssetFileDownloadResult_GetFilepath(void* obj);

  /// @brief Method ovr_AssetFileDownloadResult_GetFilepath_Native, addr 0x26ff190, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_AssetFileDownloadResult_GetFilepath_Native(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetAssetFileId, addr 0x26ff20c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetFileId(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetAssetId, addr 0x26ff288, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetId(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotal, addr 0x26ff304, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_AssetFileDownloadUpdate_GetBytesTotal(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotalLong, addr 0x26ff380, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_AssetFileDownloadUpdate_GetBytesTotalLong(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferred, addr 0x26ff3fc, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_AssetFileDownloadUpdate_GetBytesTransferred(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferredLong, addr 0x26ff478, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_AssetFileDownloadUpdate_GetBytesTransferredLong(void* obj);

  /// @brief Method ovr_AssetFileDownloadUpdate_GetCompleted, addr 0x26ff4f4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AssetFileDownloadUpdate_GetCompleted(void* obj);

  /// @brief Method ovr_AvatarEditorResult_GetRequestSent, addr 0x26ff578, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_AvatarEditorResult_GetRequestSent(void* obj);

  /// @brief Method ovr_BlockedUser_GetId, addr 0x26ff5fc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_BlockedUser_GetId(void* obj);

  /// @brief Method ovr_BlockedUserArray_GetElement, addr 0x26ff678, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_BlockedUserArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_BlockedUserArray_GetNextUrl, addr 0x26ff6fc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_BlockedUserArray_GetNextUrl(void* obj);

  /// @brief Method ovr_BlockedUserArray_GetNextUrl_Native, addr 0x26ff754, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_BlockedUserArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_BlockedUserArray_GetSize, addr 0x26ff7d0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_BlockedUserArray_GetSize(void* obj);

  /// @brief Method ovr_BlockedUserArray_HasNextPage, addr 0x26ff84c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_BlockedUserArray_HasNextPage(void* obj);

  /// @brief Method ovr_CalApplicationFinalized_GetCountdownMS, addr 0x26ff8d0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_CalApplicationFinalized_GetCountdownMS(void* obj);

  /// @brief Method ovr_CalApplicationFinalized_GetID, addr 0x26ff94c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_CalApplicationFinalized_GetID(void* obj);

  /// @brief Method ovr_CalApplicationFinalized_GetLaunchDetails, addr 0x26ff9c8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_CalApplicationFinalized_GetLaunchDetails(void* obj);

  /// @brief Method ovr_CalApplicationFinalized_GetLaunchDetails_Native, addr 0x26ffa20, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CalApplicationFinalized_GetLaunchDetails_Native(void* obj);

  /// @brief Method ovr_CalApplicationProposed_GetID, addr 0x26ffa9c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_CalApplicationProposed_GetID(void* obj);

  /// @brief Method ovr_CalApplicationSuggestion_GetID, addr 0x26ffb18, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_CalApplicationSuggestion_GetID(void* obj);

  /// @brief Method ovr_CalApplicationSuggestion_GetSocialContext, addr 0x26ffb94, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_CalApplicationSuggestion_GetSocialContext(void* obj);

  /// @brief Method ovr_CalApplicationSuggestion_GetSocialContext_Native, addr 0x26ffbec, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CalApplicationSuggestion_GetSocialContext_Native(void* obj);

  /// @brief Method ovr_CalApplicationSuggestionArray_GetElement, addr 0x26ffc68, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_CalApplicationSuggestionArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_CalApplicationSuggestionArray_GetSize, addr 0x26ffcec, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CalApplicationSuggestionArray_GetSize(void* obj);

  /// @brief Method ovr_Challenge_GetCreationType, addr 0x26ffd68, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ChallengeCreationType ovr_Challenge_GetCreationType(void* obj);

  /// @brief Method ovr_Challenge_GetDescription, addr 0x26ffde4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Challenge_GetDescription(void* obj);

  /// @brief Method ovr_Challenge_GetDescription_Native, addr 0x26ffe3c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetDescription_Native(void* obj);

  /// @brief Method ovr_Challenge_GetEndDate, addr 0x26ffeb8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Challenge_GetEndDate(void* obj);

  /// @brief Method ovr_Challenge_GetEndDate_Native, addr 0x26fff10, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenge_GetEndDate_Native(void* obj);

  /// @brief Method ovr_Challenge_GetID, addr 0x26fff8c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenge_GetID(void* obj);

  /// @brief Method ovr_Challenge_GetInvitedUsers, addr 0x2700008, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetInvitedUsers(void* obj);

  /// @brief Method ovr_Challenge_GetLeaderboard, addr 0x2700084, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetLeaderboard(void* obj);

  /// @brief Method ovr_Challenge_GetParticipants, addr 0x2700100, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetParticipants(void* obj);

  /// @brief Method ovr_Challenge_GetStartDate, addr 0x270017c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Challenge_GetStartDate(void* obj);

  /// @brief Method ovr_Challenge_GetStartDate_Native, addr 0x27001d4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Challenge_GetStartDate_Native(void* obj);

  /// @brief Method ovr_Challenge_GetTitle, addr 0x2700250, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Challenge_GetTitle(void* obj);

  /// @brief Method ovr_Challenge_GetTitle_Native, addr 0x27002a8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Challenge_GetTitle_Native(void* obj);

  /// @brief Method ovr_Challenge_GetVisibility, addr 0x2700324, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ChallengeVisibility ovr_Challenge_GetVisibility(void* obj);

  /// @brief Method ovr_ChallengeArray_GetElement, addr 0x27003a0, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ChallengeArray_GetNextUrl, addr 0x2700424, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ChallengeArray_GetNextUrl_Native, addr 0x270047c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeArray_GetPreviousUrl, addr 0x27004f8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeArray_GetPreviousUrl(void* obj);

  /// @brief Method ovr_ChallengeArray_GetPreviousUrl_Native, addr 0x2700550, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeArray_GetPreviousUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeArray_GetSize, addr 0x27005cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeArray_GetSize(void* obj);

  /// @brief Method ovr_ChallengeArray_GetTotalCount, addr 0x2700648, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeArray_GetTotalCount(void* obj);

  /// @brief Method ovr_ChallengeArray_HasNextPage, addr 0x27006c4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeArray_HasNextPage(void* obj);

  /// @brief Method ovr_ChallengeArray_HasPreviousPage, addr 0x2700748, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeArray_HasPreviousPage(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetDisplayScore, addr 0x27007cc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeEntry_GetDisplayScore(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetDisplayScore_Native, addr 0x2700824, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntry_GetDisplayScore_Native(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraData, addr 0x27008a0, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ovr_ChallengeEntry_GetExtraData(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraData_Native, addr 0x2700988, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntry_GetExtraData_Native(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetExtraDataLength, addr 0x2700a04, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_ChallengeEntry_GetExtraDataLength(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetID, addr 0x2700a80, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeEntry_GetID(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetRank, addr 0x2700afc, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_ChallengeEntry_GetRank(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetScore, addr 0x2700b78, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_ChallengeEntry_GetScore(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetTimestamp, addr 0x2700bf4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_ChallengeEntry_GetTimestamp(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetTimestamp_Native, addr 0x2700c4c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeEntry_GetTimestamp_Native(void* obj);

  /// @brief Method ovr_ChallengeEntry_GetUser, addr 0x2700cc8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntry_GetUser(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetElement, addr 0x2700d44, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntryArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ChallengeEntryArray_GetNextUrl, addr 0x2700dc8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeEntryArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetNextUrl_Native, addr 0x2700e20, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntryArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl, addr 0x2700e9c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ChallengeEntryArray_GetPreviousUrl(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl_Native, addr 0x2700ef4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntryArray_GetPreviousUrl_Native(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetSize, addr 0x2700f70, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeEntryArray_GetSize(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_GetTotalCount, addr 0x2700fec, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_ChallengeEntryArray_GetTotalCount(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_HasNextPage, addr 0x2701068, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeEntryArray_HasNextPage(void* obj);

  /// @brief Method ovr_ChallengeEntryArray_HasPreviousPage, addr 0x27010ec, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ChallengeEntryArray_HasPreviousPage(void* obj);

  /// @brief Method ovr_CloudStorage2UserDirectoryPathResponse_GetPath, addr 0x2701170, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_CloudStorage2UserDirectoryPathResponse_GetPath(void* obj);

  /// @brief Method ovr_CloudStorage2UserDirectoryPathResponse_GetPath_Native, addr 0x27011c8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorage2UserDirectoryPathResponse_GetPath_Native(void* obj);

  /// @brief Method ovr_CloudStorageConflictMetadata_GetLocal, addr 0x2701244, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageConflictMetadata_GetLocal(void* obj);

  /// @brief Method ovr_CloudStorageConflictMetadata_GetRemote, addr 0x27012c0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageConflictMetadata_GetRemote(void* obj);

  /// @brief Method ovr_CloudStorageData_GetBucket, addr 0x270133c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_CloudStorageData_GetBucket(void* obj);

  /// @brief Method ovr_CloudStorageData_GetBucket_Native, addr 0x2701394, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageData_GetBucket_Native(void* obj);

  /// @brief Method ovr_CloudStorageData_GetData, addr 0x2701410, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ovr_CloudStorageData_GetData(void* obj);

  /// @brief Method ovr_CloudStorageData_GetData_Native, addr 0x27014f8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageData_GetData_Native(void* obj);

  /// @brief Method ovr_CloudStorageData_GetDataSize, addr 0x270147c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_CloudStorageData_GetDataSize(void* obj);

  /// @brief Method ovr_CloudStorageData_GetKey, addr 0x2701574, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_CloudStorageData_GetKey(void* obj);

  /// @brief Method ovr_CloudStorageData_GetKey_Native, addr 0x27015cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageData_GetKey_Native(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetBucket, addr 0x2701648, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_CloudStorageMetadata_GetBucket(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetBucket_Native, addr 0x27016a0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageMetadata_GetBucket_Native(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetCounter, addr 0x270171c, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_CloudStorageMetadata_GetCounter(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetDataSize, addr 0x2701798, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_CloudStorageMetadata_GetDataSize(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetExtraData, addr 0x2701814, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_CloudStorageMetadata_GetExtraData(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetExtraData_Native, addr 0x270186c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageMetadata_GetExtraData_Native(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetKey, addr 0x27018e8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_CloudStorageMetadata_GetKey(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetKey_Native, addr 0x2701940, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageMetadata_GetKey_Native(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetSaveTime, addr 0x27019bc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_CloudStorageMetadata_GetSaveTime(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetStatus, addr 0x2701a38, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::CloudStorageDataStatus ovr_CloudStorageMetadata_GetStatus(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetVersionHandle, addr 0x2701ab4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_CloudStorageMetadata_GetVersionHandle(void* obj);

  /// @brief Method ovr_CloudStorageMetadata_GetVersionHandle_Native, addr 0x2701b0c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageMetadata_GetVersionHandle_Native(void* obj);

  /// @brief Method ovr_CloudStorageMetadataArray_GetElement, addr 0x2701b88, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageMetadataArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_CloudStorageMetadataArray_GetNextUrl, addr 0x2701c0c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_CloudStorageMetadataArray_GetNextUrl(void* obj);

  /// @brief Method ovr_CloudStorageMetadataArray_GetNextUrl_Native, addr 0x2701c64, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageMetadataArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_CloudStorageMetadataArray_GetSize, addr 0x2701ce0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageMetadataArray_GetSize(void* obj);

  /// @brief Method ovr_CloudStorageMetadataArray_HasNextPage, addr 0x2701d5c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_CloudStorageMetadataArray_HasNextPage(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetBucket, addr 0x2701de0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_CloudStorageUpdateResponse_GetBucket(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetBucket_Native, addr 0x2701e38, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageUpdateResponse_GetBucket_Native(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetKey, addr 0x2701eb4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_CloudStorageUpdateResponse_GetKey(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetKey_Native, addr 0x2701f0c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageUpdateResponse_GetKey_Native(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetStatus, addr 0x2701f88, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::CloudStorageUpdateStatus ovr_CloudStorageUpdateResponse_GetStatus(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetVersionHandle, addr 0x2702004, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_CloudStorageUpdateResponse_GetVersionHandle(void* obj);

  /// @brief Method ovr_CloudStorageUpdateResponse_GetVersionHandle_Native, addr 0x270205c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_CloudStorageUpdateResponse_GetVersionHandle_Native(void* obj);

  /// @brief Method ovr_DataStore_Contains, addr 0x27020d8, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t ovr_DataStore_Contains(void* obj, ::StringW key);

  /// @brief Method ovr_DataStore_Contains_Native, addr 0x2702188, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t ovr_DataStore_Contains_Native(void* obj, void* key);

  /// @brief Method ovr_DataStore_GetKey, addr 0x26ef5a8, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ovr_DataStore_GetKey(void* obj, int32_t index);

  /// @brief Method ovr_DataStore_GetKey_Native, addr 0x270220c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_DataStore_GetKey_Native(void* obj, int32_t index);

  /// @brief Method ovr_DataStore_GetNumKeys, addr 0x26ef52c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_DataStore_GetNumKeys(void* obj);

  /// @brief Method ovr_DataStore_GetValue, addr 0x26ef610, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW ovr_DataStore_GetValue(void* obj, ::StringW key);

  /// @brief Method ovr_DataStore_GetValue_Native, addr 0x2702290, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_DataStore_GetValue_Native(void* obj, void* key);

  /// @brief Method ovr_Destination_GetApiName, addr 0x2702314, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Destination_GetApiName(void* obj);

  /// @brief Method ovr_Destination_GetApiName_Native, addr 0x270236c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Destination_GetApiName_Native(void* obj);

  /// @brief Method ovr_Destination_GetDeeplinkMessage, addr 0x27023e8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Destination_GetDeeplinkMessage(void* obj);

  /// @brief Method ovr_Destination_GetDeeplinkMessage_Native, addr 0x2702440, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Destination_GetDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_Destination_GetDisplayName, addr 0x27024bc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Destination_GetDisplayName(void* obj);

  /// @brief Method ovr_Destination_GetDisplayName_Native, addr 0x2702514, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Destination_GetDisplayName_Native(void* obj);

  /// @brief Method ovr_DestinationArray_GetElement, addr 0x2702590, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_DestinationArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_DestinationArray_GetNextUrl, addr 0x2702614, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_DestinationArray_GetNextUrl(void* obj);

  /// @brief Method ovr_DestinationArray_GetNextUrl_Native, addr 0x270266c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_DestinationArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_DestinationArray_GetSize, addr 0x27026e8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_DestinationArray_GetSize(void* obj);

  /// @brief Method ovr_DestinationArray_HasNextPage, addr 0x2702764, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_DestinationArray_HasNextPage(void* obj);

  /// @brief Method ovr_Error_GetCode, addr 0x27027e8, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ovr_Error_GetCode(void* obj);

  /// @brief Method ovr_Error_GetDisplayableMessage, addr 0x2702860, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Error_GetDisplayableMessage(void* obj);

  /// @brief Method ovr_Error_GetDisplayableMessage_Native, addr 0x27028b8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Error_GetDisplayableMessage_Native(void* obj);

  /// @brief Method ovr_Error_GetHttpCode, addr 0x2702934, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_Error_GetHttpCode(void* obj);

  /// @brief Method ovr_Error_GetMessage, addr 0x27029b0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Error_GetMessage(void* obj);

  /// @brief Method ovr_Error_GetMessage_Native, addr 0x2702a08, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Error_GetMessage_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage, addr 0x2702a84, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetDeeplinkMessage(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native, addr 0x2702adc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName, addr 0x2702b58, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetDestinationApiName(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native, addr 0x2702bb0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId, addr 0x2702c2c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetLobbySessionId(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native, addr 0x2702c84, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId, addr 0x2702d00, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceJoinIntent_GetMatchSessionId(void* obj);

  /// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native, addr 0x2702d58, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName, addr 0x2702dd4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetDestinationApiName(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native, addr 0x2702e2c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId, addr 0x2702ea8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetLobbySessionId(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native, addr 0x2702f00, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId, addr 0x2702f7c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_GroupPresenceLeaveIntent_GetMatchSessionId(void* obj);

  /// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native, addr 0x2702fd4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_GetBytes, addr 0x2703050, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_HttpTransferUpdate_GetBytes(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_GetID, addr 0x27030cc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_HttpTransferUpdate_GetID(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_GetSize, addr 0x2703148, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_HttpTransferUpdate_GetSize(void* obj);

  /// @brief Method ovr_HttpTransferUpdate_IsCompleted, addr 0x27031c4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_HttpTransferUpdate_IsCompleted(void* obj);

  /// @brief Method ovr_InstalledApplication_GetApplicationId, addr 0x2703248, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetApplicationId(void* obj);

  /// @brief Method ovr_InstalledApplication_GetApplicationId_Native, addr 0x27032a0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplication_GetApplicationId_Native(void* obj);

  /// @brief Method ovr_InstalledApplication_GetPackageName, addr 0x270331c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetPackageName(void* obj);

  /// @brief Method ovr_InstalledApplication_GetPackageName_Native, addr 0x2703374, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplication_GetPackageName_Native(void* obj);

  /// @brief Method ovr_InstalledApplication_GetStatus, addr 0x27033f0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetStatus(void* obj);

  /// @brief Method ovr_InstalledApplication_GetStatus_Native, addr 0x2703448, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplication_GetStatus_Native(void* obj);

  /// @brief Method ovr_InstalledApplication_GetVersionCode, addr 0x27034c4, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_InstalledApplication_GetVersionCode(void* obj);

  /// @brief Method ovr_InstalledApplication_GetVersionName, addr 0x2703540, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_InstalledApplication_GetVersionName(void* obj);

  /// @brief Method ovr_InstalledApplication_GetVersionName_Native, addr 0x2703598, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplication_GetVersionName_Native(void* obj);

  /// @brief Method ovr_InstalledApplicationArray_GetElement, addr 0x2703614, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplicationArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_InstalledApplicationArray_GetSize, addr 0x2703698, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_InstalledApplicationArray_GetSize(void* obj);

  /// @brief Method ovr_InvitePanelResultInfo_GetInvitesSent, addr 0x2703714, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_InvitePanelResultInfo_GetInvitesSent(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetEnglishName, addr 0x2703798, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LanguagePackInfo_GetEnglishName(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetEnglishName_Native, addr 0x27037f0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LanguagePackInfo_GetEnglishName_Native(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetNativeName, addr 0x270386c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LanguagePackInfo_GetNativeName(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetNativeName_Native, addr 0x27038c4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LanguagePackInfo_GetNativeName_Native(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetTag, addr 0x2703940, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LanguagePackInfo_GetTag(void* obj);

  /// @brief Method ovr_LanguagePackInfo_GetTag_Native, addr 0x2703998, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LanguagePackInfo_GetTag_Native(void* obj);

  /// @brief Method ovr_LaunchBlockFlowResult_GetDidBlock, addr 0x2703a14, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchBlockFlowResult_GetDidBlock(void* obj);

  /// @brief Method ovr_LaunchBlockFlowResult_GetDidCancel, addr 0x2703a98, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchBlockFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDeeplinkMessage, addr 0x2703b1c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetDeeplinkMessage(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDeeplinkMessage_Native, addr 0x2703b74, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDestinationApiName, addr 0x2703bf0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetDestinationApiName(void* obj);

  /// @brief Method ovr_LaunchDetails_GetDestinationApiName_Native, addr 0x2703c48, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetDestinationApiName_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchSource, addr 0x2703cc4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetLaunchSource(void* obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchSource_Native, addr 0x2703d1c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetLaunchSource_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetLaunchType, addr 0x2703d98, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::LaunchType ovr_LaunchDetails_GetLaunchType(void* obj);

  /// @brief Method ovr_LaunchDetails_GetRoomID, addr 0x2703e14, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LaunchDetails_GetRoomID(void* obj);

  /// @brief Method ovr_LaunchDetails_GetTrackingID, addr 0x2703e90, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LaunchDetails_GetTrackingID(void* obj);

  /// @brief Method ovr_LaunchDetails_GetTrackingID_Native, addr 0x2703ee8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetTrackingID_Native(void* obj);

  /// @brief Method ovr_LaunchDetails_GetUsers, addr 0x2703f64, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchDetails_GetUsers(void* obj);

  /// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidCancel, addr 0x2703fe0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchFriendRequestFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidSendRequest, addr 0x2704064, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchFriendRequestFlowResult_GetDidSendRequest(void* obj);

  /// @brief Method ovr_LaunchInvitePanelFlowResult_GetInvitedUsers, addr 0x27040e8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LaunchInvitePanelFlowResult_GetInvitedUsers(void* obj);

  /// @brief Method ovr_LaunchReportFlowResult_GetDidCancel, addr 0x2704164, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchReportFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchReportFlowResult_GetUserReportId, addr 0x27041e8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LaunchReportFlowResult_GetUserReportId(void* obj);

  /// @brief Method ovr_LaunchUnblockFlowResult_GetDidCancel, addr 0x2704264, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchUnblockFlowResult_GetDidCancel(void* obj);

  /// @brief Method ovr_LaunchUnblockFlowResult_GetDidUnblock, addr 0x27042e8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LaunchUnblockFlowResult_GetDidUnblock(void* obj);

  /// @brief Method ovr_Leaderboard_GetApiName, addr 0x270436c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Leaderboard_GetApiName(void* obj);

  /// @brief Method ovr_Leaderboard_GetApiName_Native, addr 0x27043c4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Leaderboard_GetApiName_Native(void* obj);

  /// @brief Method ovr_Leaderboard_GetDestination, addr 0x2704440, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Leaderboard_GetDestination(void* obj);

  /// @brief Method ovr_Leaderboard_GetID, addr 0x27044bc, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Leaderboard_GetID(void* obj);

  /// @brief Method ovr_LeaderboardArray_GetElement, addr 0x2704538, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_LeaderboardArray_GetNextUrl, addr 0x27045bc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardArray_GetNextUrl(void* obj);

  /// @brief Method ovr_LeaderboardArray_GetNextUrl_Native, addr 0x2704614, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_LeaderboardArray_GetSize, addr 0x2704690, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardArray_GetSize(void* obj);

  /// @brief Method ovr_LeaderboardArray_HasNextPage, addr 0x270470c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardArray_HasNextPage(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetDisplayScore, addr 0x2704790, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardEntry_GetDisplayScore(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetDisplayScore_Native, addr 0x27047e8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntry_GetDisplayScore_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraData, addr 0x2704864, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ovr_LeaderboardEntry_GetExtraData(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraData_Native, addr 0x27048d0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntry_GetExtraData_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetExtraDataLength, addr 0x270090c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_LeaderboardEntry_GetExtraDataLength(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetID, addr 0x270494c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardEntry_GetID(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetRank, addr 0x27049c8, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LeaderboardEntry_GetRank(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetScore, addr 0x2704a44, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_LeaderboardEntry_GetScore(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetSupplementaryMetric, addr 0x2704ac0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntry_GetSupplementaryMetric(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetTimestamp, addr 0x2704b3c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_LeaderboardEntry_GetTimestamp(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetTimestamp_Native, addr 0x2704b94, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardEntry_GetTimestamp_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntry_GetUser, addr 0x2704c10, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntry_GetUser(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetElement, addr 0x2704c8c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntryArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_LeaderboardEntryArray_GetNextUrl, addr 0x2704d10, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardEntryArray_GetNextUrl(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetNextUrl_Native, addr 0x2704d68, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntryArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl, addr 0x2704de4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LeaderboardEntryArray_GetPreviousUrl(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl_Native, addr 0x2704e3c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntryArray_GetPreviousUrl_Native(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetSize, addr 0x2704eb8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LeaderboardEntryArray_GetSize(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_GetTotalCount, addr 0x2704f34, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardEntryArray_GetTotalCount(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_HasNextPage, addr 0x2704fb0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardEntryArray_HasNextPage(void* obj);

  /// @brief Method ovr_LeaderboardEntryArray_HasPreviousPage, addr 0x2705034, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardEntryArray_HasPreviousPage(void* obj);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetDidUpdate, addr 0x27050b8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LeaderboardUpdateStatus_GetDidUpdate(void* obj);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId, addr 0x270513c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId(void* obj, uint32_t index);

  /// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize, addr 0x27051c0, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize(void* obj);

  /// @brief Method ovr_LinkedAccount_GetAccessToken, addr 0x270523c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LinkedAccount_GetAccessToken(void* obj);

  /// @brief Method ovr_LinkedAccount_GetAccessToken_Native, addr 0x2705294, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LinkedAccount_GetAccessToken_Native(void* obj);

  /// @brief Method ovr_LinkedAccount_GetServiceProvider, addr 0x2705310, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ServiceProvider ovr_LinkedAccount_GetServiceProvider(void* obj);

  /// @brief Method ovr_LinkedAccount_GetUserId, addr 0x270538c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LinkedAccount_GetUserId(void* obj);

  /// @brief Method ovr_LinkedAccount_GetUserId_Native, addr 0x27053e4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LinkedAccount_GetUserId_Native(void* obj);

  /// @brief Method ovr_LinkedAccountArray_GetElement, addr 0x2705460, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_LinkedAccountArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_LinkedAccountArray_GetSize, addr 0x27054e4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LinkedAccountArray_GetSize(void* obj);

  /// @brief Method ovr_LivestreamingApplicationStatus_GetStreamingEnabled, addr 0x2705560, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingApplicationStatus_GetStreamingEnabled(void* obj);

  /// @brief Method ovr_LivestreamingStartResult_GetStreamingResult, addr 0x27055e4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::LivestreamingStartStatus ovr_LivestreamingStartResult_GetStreamingResult(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetCommentsVisible, addr 0x2705660, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetCommentsVisible(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetIsPaused, addr 0x27056e4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetIsPaused(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetLivestreamingEnabled, addr 0x2705768, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetLivestreamingEnabled(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetLivestreamingType, addr 0x27057ec, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LivestreamingStatus_GetLivestreamingType(void* obj);

  /// @brief Method ovr_LivestreamingStatus_GetMicEnabled, addr 0x2705868, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_LivestreamingStatus_GetMicEnabled(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetCommentCount, addr 0x27058ec, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LivestreamingVideoStats_GetCommentCount(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetReactionCount, addr 0x2705968, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_LivestreamingVideoStats_GetReactionCount(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetTotalViews, addr 0x27059e4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_LivestreamingVideoStats_GetTotalViews(void* obj);

  /// @brief Method ovr_LivestreamingVideoStats_GetTotalViews_Native, addr 0x2705a3c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_LivestreamingVideoStats_GetTotalViews_Native(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshot_GetCandidates, addr 0x2705ab8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingAdminSnapshot_GetCandidates(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshot_GetMyCurrentThreshold, addr 0x2705b34, size 0x7c, virtual false, abstract: false, final false
  static inline double_t ovr_MatchmakingAdminSnapshot_GetMyCurrentThreshold(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetCanMatch, addr 0x2705bb0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_MatchmakingAdminSnapshotCandidate_GetCanMatch(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetMyTotalScore, addr 0x2705c34, size 0x7c, virtual false, abstract: false, final false
  static inline double_t ovr_MatchmakingAdminSnapshotCandidate_GetMyTotalScore(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold, addr 0x2705cb0, size 0x7c, virtual false, abstract: false, final false
  static inline double_t ovr_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTheirTotalScore, addr 0x2705d2c, size 0x7c, virtual false, abstract: false, final false
  static inline double_t ovr_MatchmakingAdminSnapshotCandidate_GetTheirTotalScore(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTraceId, addr 0x2705da8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_MatchmakingAdminSnapshotCandidate_GetTraceId(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTraceId_Native, addr 0x2705e00, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingAdminSnapshotCandidate_GetTraceId_Native(void* obj);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidateArray_GetElement, addr 0x2705e7c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingAdminSnapshotCandidateArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_MatchmakingAdminSnapshotCandidateArray_GetSize, addr 0x2705f00, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingAdminSnapshotCandidateArray_GetSize(void* obj);

  /// @brief Method ovr_MatchmakingBrowseResult_GetEnqueueResult, addr 0x2705f7c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingBrowseResult_GetEnqueueResult(void* obj);

  /// @brief Method ovr_MatchmakingBrowseResult_GetRooms, addr 0x2705ff8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingBrowseResult_GetRooms(void* obj);

  /// @brief Method ovr_MatchmakingCandidate_GetEntryHash, addr 0x2706074, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_MatchmakingCandidate_GetEntryHash(void* obj);

  /// @brief Method ovr_MatchmakingCandidate_GetEntryHash_Native, addr 0x27060cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingCandidate_GetEntryHash_Native(void* obj);

  /// @brief Method ovr_MatchmakingCandidate_GetUserId, addr 0x2706148, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_MatchmakingCandidate_GetUserId(void* obj);

  /// @brief Method ovr_MatchmakingCandidateArray_GetElement, addr 0x27061c4, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingCandidateArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_MatchmakingCandidateArray_GetNextUrl, addr 0x2706248, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_MatchmakingCandidateArray_GetNextUrl(void* obj);

  /// @brief Method ovr_MatchmakingCandidateArray_GetNextUrl_Native, addr 0x27062a0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingCandidateArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_MatchmakingCandidateArray_GetSize, addr 0x270631c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingCandidateArray_GetSize(void* obj);

  /// @brief Method ovr_MatchmakingCandidateArray_HasNextPage, addr 0x2706398, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_MatchmakingCandidateArray_HasNextPage(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetAdminSnapshot, addr 0x270641c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingEnqueueResult_GetAdminSnapshot(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetAverageWait, addr 0x2706498, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_MatchmakingEnqueueResult_GetAverageWait(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetMatchesInLastHourCount, addr 0x2706514, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_MatchmakingEnqueueResult_GetMatchesInLastHourCount(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetMaxExpectedWait, addr 0x2706590, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_MatchmakingEnqueueResult_GetMaxExpectedWait(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetPool, addr 0x270660c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_MatchmakingEnqueueResult_GetPool(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetPool_Native, addr 0x2706664, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingEnqueueResult_GetPool_Native(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetRecentMatchPercentage, addr 0x27066e0, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_MatchmakingEnqueueResult_GetRecentMatchPercentage(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetRequestHash, addr 0x270675c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_MatchmakingEnqueueResult_GetRequestHash(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResult_GetRequestHash_Native, addr 0x27067b4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingEnqueueResult_GetRequestHash_Native(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult, addr 0x2706830, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult(void* obj);

  /// @brief Method ovr_MatchmakingEnqueueResultAndRoom_GetRoom, addr 0x27068ac, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingEnqueueResultAndRoom_GetRoom(void* obj);

  /// @brief Method ovr_MatchmakingEnqueuedUser_GetAdditionalUserID, addr 0x2706928, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ovr_MatchmakingEnqueuedUser_GetAdditionalUserID(void* obj, uint32_t index);

  /// @brief Method ovr_MatchmakingEnqueuedUser_GetAdditionalUserIDsSize, addr 0x27069ac, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_MatchmakingEnqueuedUser_GetAdditionalUserIDsSize(void* obj);

  /// @brief Method ovr_MatchmakingEnqueuedUser_GetCustomData, addr 0x2706a28, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingEnqueuedUser_GetCustomData(void* obj);

  /// @brief Method ovr_MatchmakingEnqueuedUser_GetUser, addr 0x2706aa4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingEnqueuedUser_GetUser(void* obj);

  /// @brief Method ovr_MatchmakingEnqueuedUserArray_GetElement, addr 0x2706b20, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingEnqueuedUserArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_MatchmakingEnqueuedUserArray_GetSize, addr 0x2706ba4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingEnqueuedUserArray_GetSize(void* obj);

  /// @brief Method ovr_MatchmakingNotification_GetAddedByUserId, addr 0x2706c20, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_MatchmakingNotification_GetAddedByUserId(void* obj);

  /// @brief Method ovr_MatchmakingNotification_GetRoom, addr 0x2706c9c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingNotification_GetRoom(void* obj);

  /// @brief Method ovr_MatchmakingNotification_GetTraceId, addr 0x2706d18, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_MatchmakingNotification_GetTraceId(void* obj);

  /// @brief Method ovr_MatchmakingNotification_GetTraceId_Native, addr 0x2706d70, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingNotification_GetTraceId_Native(void* obj);

  /// @brief Method ovr_MatchmakingRoom_GetPingTime, addr 0x2706dec, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_MatchmakingRoom_GetPingTime(void* obj);

  /// @brief Method ovr_MatchmakingRoom_GetRoom, addr 0x2706e68, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingRoom_GetRoom(void* obj);

  /// @brief Method ovr_MatchmakingRoom_HasPingTime, addr 0x2706ee4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_MatchmakingRoom_HasPingTime(void* obj);

  /// @brief Method ovr_MatchmakingRoomArray_GetElement, addr 0x2706f68, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingRoomArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_MatchmakingRoomArray_GetSize, addr 0x2706fec, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingRoomArray_GetSize(void* obj);

  /// @brief Method ovr_MatchmakingStats_GetDrawCount, addr 0x2707068, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_MatchmakingStats_GetDrawCount(void* obj);

  /// @brief Method ovr_MatchmakingStats_GetLossCount, addr 0x27070e4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_MatchmakingStats_GetLossCount(void* obj);

  /// @brief Method ovr_MatchmakingStats_GetSkillLevel, addr 0x2707160, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_MatchmakingStats_GetSkillLevel(void* obj);

  /// @brief Method ovr_MatchmakingStats_GetSkillMean, addr 0x27071dc, size 0x7c, virtual false, abstract: false, final false
  static inline double_t ovr_MatchmakingStats_GetSkillMean(void* obj);

  /// @brief Method ovr_MatchmakingStats_GetSkillStandardDeviation, addr 0x2707258, size 0x7c, virtual false, abstract: false, final false
  static inline double_t ovr_MatchmakingStats_GetSkillStandardDeviation(void* obj);

  /// @brief Method ovr_MatchmakingStats_GetWinCount, addr 0x27072d4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_MatchmakingStats_GetWinCount(void* obj);

  /// @brief Method ovr_Message_GetAbuseReportRecording, addr 0x2707350, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAbuseReportRecording(void* obj);

  /// @brief Method ovr_Message_GetAchievementDefinitionArray, addr 0x27073cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAchievementDefinitionArray(void* obj);

  /// @brief Method ovr_Message_GetAchievementProgressArray, addr 0x2707448, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAchievementProgressArray(void* obj);

  /// @brief Method ovr_Message_GetAchievementUpdate, addr 0x27074c4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAchievementUpdate(void* obj);

  /// @brief Method ovr_Message_GetApplicationInviteArray, addr 0x2707540, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetApplicationInviteArray(void* obj);

  /// @brief Method ovr_Message_GetApplicationVersion, addr 0x27075bc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetApplicationVersion(void* obj);

  /// @brief Method ovr_Message_GetAssetDetails, addr 0x2707638, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetDetails(void* obj);

  /// @brief Method ovr_Message_GetAssetDetailsArray, addr 0x27076b4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetDetailsArray(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDeleteResult, addr 0x2707730, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetFileDeleteResult(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadCancelResult, addr 0x27077ac, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetFileDownloadCancelResult(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadResult, addr 0x2707828, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetFileDownloadResult(void* obj);

  /// @brief Method ovr_Message_GetAssetFileDownloadUpdate, addr 0x27078a4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAssetFileDownloadUpdate(void* obj);

  /// @brief Method ovr_Message_GetAvatarEditorResult, addr 0x2707920, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetAvatarEditorResult(void* obj);

  /// @brief Method ovr_Message_GetBlockedUserArray, addr 0x270799c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetBlockedUserArray(void* obj);

  /// @brief Method ovr_Message_GetCalApplicationFinalized, addr 0x2707a18, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetCalApplicationFinalized(void* obj);

  /// @brief Method ovr_Message_GetCalApplicationProposed, addr 0x2707a94, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetCalApplicationProposed(void* obj);

  /// @brief Method ovr_Message_GetCalApplicationSuggestionArray, addr 0x2707b10, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetCalApplicationSuggestionArray(void* obj);

  /// @brief Method ovr_Message_GetChallenge, addr 0x2707b8c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetChallenge(void* obj);

  /// @brief Method ovr_Message_GetChallengeArray, addr 0x2707c08, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetChallengeArray(void* obj);

  /// @brief Method ovr_Message_GetChallengeEntryArray, addr 0x2707c84, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetChallengeEntryArray(void* obj);

  /// @brief Method ovr_Message_GetCloudStorageConflictMetadata, addr 0x2707d00, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetCloudStorageConflictMetadata(void* obj);

  /// @brief Method ovr_Message_GetCloudStorageData, addr 0x2707d7c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetCloudStorageData(void* obj);

  /// @brief Method ovr_Message_GetCloudStorageMetadata, addr 0x2707df8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetCloudStorageMetadata(void* obj);

  /// @brief Method ovr_Message_GetCloudStorageMetadataArray, addr 0x2707e74, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetCloudStorageMetadataArray(void* obj);

  /// @brief Method ovr_Message_GetCloudStorageUpdateResponse, addr 0x2707ef0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetCloudStorageUpdateResponse(void* obj);

  /// @brief Method ovr_Message_GetDataStore, addr 0x2707f6c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetDataStore(void* obj);

  /// @brief Method ovr_Message_GetDestinationArray, addr 0x2707fe8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetDestinationArray(void* obj);

  /// @brief Method ovr_Message_GetError, addr 0x2708064, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetError(void* obj);

  /// @brief Method ovr_Message_GetGroupPresenceJoinIntent, addr 0x27080e0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetGroupPresenceJoinIntent(void* obj);

  /// @brief Method ovr_Message_GetGroupPresenceLeaveIntent, addr 0x270815c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetGroupPresenceLeaveIntent(void* obj);

  /// @brief Method ovr_Message_GetHttpTransferUpdate, addr 0x27081d8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetHttpTransferUpdate(void* obj);

  /// @brief Method ovr_Message_GetInstalledApplicationArray, addr 0x2708254, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetInstalledApplicationArray(void* obj);

  /// @brief Method ovr_Message_GetInvitePanelResultInfo, addr 0x27082d0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetInvitePanelResultInfo(void* obj);

  /// @brief Method ovr_Message_GetLaunchBlockFlowResult, addr 0x270834c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchBlockFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchFriendRequestFlowResult, addr 0x27083c8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchFriendRequestFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchInvitePanelFlowResult, addr 0x2708444, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchInvitePanelFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchReportFlowResult, addr 0x27084c0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchReportFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLaunchUnblockFlowResult, addr 0x270853c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLaunchUnblockFlowResult(void* obj);

  /// @brief Method ovr_Message_GetLeaderboardArray, addr 0x27085b8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLeaderboardArray(void* obj);

  /// @brief Method ovr_Message_GetLeaderboardEntryArray, addr 0x2708634, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLeaderboardEntryArray(void* obj);

  /// @brief Method ovr_Message_GetLeaderboardUpdateStatus, addr 0x27086b0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLeaderboardUpdateStatus(void* obj);

  /// @brief Method ovr_Message_GetLinkedAccountArray, addr 0x270872c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLinkedAccountArray(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingApplicationStatus, addr 0x27087a8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLivestreamingApplicationStatus(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingStartResult, addr 0x2708824, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLivestreamingStartResult(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingStatus, addr 0x27088a0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLivestreamingStatus(void* obj);

  /// @brief Method ovr_Message_GetLivestreamingVideoStats, addr 0x270891c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetLivestreamingVideoStats(void* obj);

  /// @brief Method ovr_Message_GetMatchmakingAdminSnapshot, addr 0x2708998, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetMatchmakingAdminSnapshot(void* obj);

  /// @brief Method ovr_Message_GetMatchmakingBrowseResult, addr 0x2708a14, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetMatchmakingBrowseResult(void* obj);

  /// @brief Method ovr_Message_GetMatchmakingEnqueueResult, addr 0x2708a90, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetMatchmakingEnqueueResult(void* obj);

  /// @brief Method ovr_Message_GetMatchmakingEnqueueResultAndRoom, addr 0x2708b0c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetMatchmakingEnqueueResultAndRoom(void* obj);

  /// @brief Method ovr_Message_GetMatchmakingRoomArray, addr 0x2708b88, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetMatchmakingRoomArray(void* obj);

  /// @brief Method ovr_Message_GetMatchmakingStats, addr 0x2708c04, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetMatchmakingStats(void* obj);

  /// @brief Method ovr_Message_GetMicrophoneAvailabilityState, addr 0x2708c80, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetMicrophoneAvailabilityState(void* obj);

  /// @brief Method ovr_Message_GetNativeMessage, addr 0x2708cfc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNativeMessage(void* obj);

  /// @brief Method ovr_Message_GetNetSyncConnection, addr 0x2708d78, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncConnection(void* obj);

  /// @brief Method ovr_Message_GetNetSyncSessionArray, addr 0x2708df4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncSessionArray(void* obj);

  /// @brief Method ovr_Message_GetNetSyncSessionsChangedNotification, addr 0x2708e70, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncSessionsChangedNotification(void* obj);

  /// @brief Method ovr_Message_GetNetSyncSetSessionPropertyResult, addr 0x2708eec, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncSetSessionPropertyResult(void* obj);

  /// @brief Method ovr_Message_GetNetSyncVoipAttenuationValueArray, addr 0x2708f68, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetSyncVoipAttenuationValueArray(void* obj);

  /// @brief Method ovr_Message_GetNetworkingPeer, addr 0x2708fe4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetNetworkingPeer(void* obj);

  /// @brief Method ovr_Message_GetOrgScopedID, addr 0x2709060, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetOrgScopedID(void* obj);

  /// @brief Method ovr_Message_GetParty, addr 0x27090dc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetParty(void* obj);

  /// @brief Method ovr_Message_GetPartyID, addr 0x2709158, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPartyID(void* obj);

  /// @brief Method ovr_Message_GetPartyUpdateNotification, addr 0x27091d4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPartyUpdateNotification(void* obj);

  /// @brief Method ovr_Message_GetPidArray, addr 0x2709250, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPidArray(void* obj);

  /// @brief Method ovr_Message_GetPingResult, addr 0x27092cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPingResult(void* obj);

  /// @brief Method ovr_Message_GetPlatformInitialize, addr 0x2709348, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPlatformInitialize(void* obj);

  /// @brief Method ovr_Message_GetProductArray, addr 0x27093c4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetProductArray(void* obj);

  /// @brief Method ovr_Message_GetPurchase, addr 0x2709440, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPurchase(void* obj);

  /// @brief Method ovr_Message_GetPurchaseArray, addr 0x27094bc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetPurchaseArray(void* obj);

  /// @brief Method ovr_Message_GetRejoinDialogResult, addr 0x2709538, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetRejoinDialogResult(void* obj);

  /// @brief Method ovr_Message_GetRequestID, addr 0x27095b4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Message_GetRequestID(void* obj);

  /// @brief Method ovr_Message_GetRoom, addr 0x2709630, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetRoom(void* obj);

  /// @brief Method ovr_Message_GetRoomArray, addr 0x27096ac, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetRoomArray(void* obj);

  /// @brief Method ovr_Message_GetRoomInviteNotification, addr 0x2709728, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetRoomInviteNotification(void* obj);

  /// @brief Method ovr_Message_GetRoomInviteNotificationArray, addr 0x27097a4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetRoomInviteNotificationArray(void* obj);

  /// @brief Method ovr_Message_GetSdkAccountArray, addr 0x2709820, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetSdkAccountArray(void* obj);

  /// @brief Method ovr_Message_GetSendInvitesResult, addr 0x270989c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetSendInvitesResult(void* obj);

  /// @brief Method ovr_Message_GetShareMediaResult, addr 0x2709918, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetShareMediaResult(void* obj);

  /// @brief Method ovr_Message_GetString, addr 0x2709994, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Message_GetString(void* obj);

  /// @brief Method ovr_Message_GetString_Native, addr 0x27099ec, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetString_Native(void* obj);

  /// @brief Method ovr_Message_GetSystemVoipState, addr 0x2709a68, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetSystemVoipState(void* obj);

  /// @brief Method ovr_Message_GetType, addr 0x2709ae4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::__Message__MessageType ovr_Message_GetType(void* obj);

  /// @brief Method ovr_Message_GetUser, addr 0x2709b60, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUser(void* obj);

  /// @brief Method ovr_Message_GetUserAndRoomArray, addr 0x2709bdc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserAndRoomArray(void* obj);

  /// @brief Method ovr_Message_GetUserArray, addr 0x2709c58, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserArray(void* obj);

  /// @brief Method ovr_Message_GetUserCapabilityArray, addr 0x2709cd4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserCapabilityArray(void* obj);

  /// @brief Method ovr_Message_GetUserDataStoreUpdateResponse, addr 0x2709d50, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserDataStoreUpdateResponse(void* obj);

  /// @brief Method ovr_Message_GetUserProof, addr 0x2709dcc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserProof(void* obj);

  /// @brief Method ovr_Message_GetUserReportID, addr 0x2709e48, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Message_GetUserReportID(void* obj);

  /// @brief Method ovr_Message_IsError, addr 0x2709ec4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_Message_IsError(void* obj);

  /// @brief Method ovr_Microphone_GetNumSamplesAvailable, addr 0x2709f48, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_GetNumSamplesAvailable(void* obj);

  /// @brief Method ovr_Microphone_GetOutputBufferMaxSize, addr 0x2709fc4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_GetOutputBufferMaxSize(void* obj);

  /// @brief Method ovr_Microphone_GetPCM, addr 0x270a040, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_GetPCM(void* obj, ::ArrayW<int16_t, ::Array<int16_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Microphone_GetPCMFloat, addr 0x270a0dc, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_GetPCMFloat(void* obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferNumElements);

  /// @brief Method ovr_Microphone_ReadData, addr 0x270a178, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_Microphone_ReadData(void* obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferSize);

  /// @brief Method ovr_Microphone_SetAcceptableRecordingDelayHint, addr 0x270a214, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_Microphone_SetAcceptableRecordingDelayHint(void* obj, void* delayMs);

  /// @brief Method ovr_Microphone_Start, addr 0x270a298, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Microphone_Start(void* obj);

  /// @brief Method ovr_Microphone_Stop, addr 0x270a314, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Microphone_Stop(void* obj);

  /// @brief Method ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable, addr 0x270a390, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetConnectionId, addr 0x270a414, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_NetSyncConnection_GetConnectionId(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetDisconnectReason, addr 0x270a490, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::NetSyncDisconnectReason ovr_NetSyncConnection_GetDisconnectReason(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetSessionId, addr 0x270a50c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSyncConnection_GetSessionId(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetStatus, addr 0x270a588, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::NetSyncConnectionStatus ovr_NetSyncConnection_GetStatus(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetZoneId, addr 0x270a604, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_NetSyncConnection_GetZoneId(void* obj);

  /// @brief Method ovr_NetSyncConnection_GetZoneId_Native, addr 0x270a65c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncConnection_GetZoneId_Native(void* obj);

  /// @brief Method ovr_NetSyncSession_GetConnectionId, addr 0x270a6d8, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_NetSyncSession_GetConnectionId(void* obj);

  /// @brief Method ovr_NetSyncSession_GetMuted, addr 0x270a754, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_NetSyncSession_GetMuted(void* obj);

  /// @brief Method ovr_NetSyncSession_GetSessionId, addr 0x270a7d8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSyncSession_GetSessionId(void* obj);

  /// @brief Method ovr_NetSyncSession_GetUserId, addr 0x270a854, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetSyncSession_GetUserId(void* obj);

  /// @brief Method ovr_NetSyncSession_GetVoipGroup, addr 0x270a8d0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_NetSyncSession_GetVoipGroup(void* obj);

  /// @brief Method ovr_NetSyncSession_GetVoipGroup_Native, addr 0x270a928, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSession_GetVoipGroup_Native(void* obj);

  /// @brief Method ovr_NetSyncSessionArray_GetElement, addr 0x270a9a4, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSessionArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_NetSyncSessionArray_GetSize, addr 0x270aa28, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSessionArray_GetSize(void* obj);

  /// @brief Method ovr_NetSyncSessionsChangedNotification_GetConnectionId, addr 0x270aaa4, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_NetSyncSessionsChangedNotification_GetConnectionId(void* obj);

  /// @brief Method ovr_NetSyncSessionsChangedNotification_GetSessions, addr 0x270ab20, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSessionsChangedNotification_GetSessions(void* obj);

  /// @brief Method ovr_NetSyncSetSessionPropertyResult_GetSession, addr 0x270ab9c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncSetSessionPropertyResult_GetSession(void* obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValue_GetDecibels, addr 0x270ac18, size 0x7c, virtual false, abstract: false, final false
  static inline float_t ovr_NetSyncVoipAttenuationValue_GetDecibels(void* obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValue_GetDistance, addr 0x270ac94, size 0x7c, virtual false, abstract: false, final false
  static inline float_t ovr_NetSyncVoipAttenuationValue_GetDistance(void* obj);

  /// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetElement, addr 0x270ad10, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncVoipAttenuationValueArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetSize, addr 0x270ad94, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncVoipAttenuationValueArray_GetSize(void* obj);

  /// @brief Method ovr_NetworkingPeer_GetID, addr 0x270ae10, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_NetworkingPeer_GetID(void* obj);

  /// @brief Method ovr_NetworkingPeer_GetState, addr 0x270ae8c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::PeerConnectionState ovr_NetworkingPeer_GetState(void* obj);

  /// @brief Method ovr_OrgScopedID_GetID, addr 0x270af08, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_OrgScopedID_GetID(void* obj);

  /// @brief Method ovr_Packet_Free, addr 0x270af84, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_Packet_Free(void* obj);

  /// @brief Method ovr_Packet_GetBytes, addr 0x270b000, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Packet_GetBytes(void* obj);

  /// @brief Method ovr_Packet_GetSendPolicy, addr 0x270b07c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SendPolicy ovr_Packet_GetSendPolicy(void* obj);

  /// @brief Method ovr_Packet_GetSenderID, addr 0x270b0f8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Packet_GetSenderID(void* obj);

  /// @brief Method ovr_Packet_GetSize, addr 0x270b174, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Packet_GetSize(void* obj);

  /// @brief Method ovr_Party_GetID, addr 0x270b1f0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Party_GetID(void* obj);

  /// @brief Method ovr_Party_GetInvitedUsers, addr 0x270b26c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Party_GetInvitedUsers(void* obj);

  /// @brief Method ovr_Party_GetLeader, addr 0x270b2e8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Party_GetLeader(void* obj);

  /// @brief Method ovr_Party_GetRoom, addr 0x270b364, size 0x78, virtual false, abstract: false, final false
  static inline void* ovr_Party_GetRoom(void* obj);

  /// @brief Method ovr_Party_GetUsers, addr 0x270b3dc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Party_GetUsers(void* obj);

  /// @brief Method ovr_PartyID_GetID, addr 0x270b458, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyID_GetID(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetAction, addr 0x270b4d0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::PartyUpdateAction ovr_PartyUpdateNotification_GetAction(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetPartyId, addr 0x270b54c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyUpdateNotification_GetPartyId(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetSenderId, addr 0x270b5c8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyUpdateNotification_GetSenderId(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp, addr 0x270b644, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUpdateTimestamp(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp_Native, addr 0x270b69c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PartyUpdateNotification_GetUpdateTimestamp_Native(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserAlias, addr 0x270b718, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUserAlias(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserAlias_Native, addr 0x270b770, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PartyUpdateNotification_GetUserAlias_Native(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserId, addr 0x270b7ec, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PartyUpdateNotification_GetUserId(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserName, addr 0x270b868, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PartyUpdateNotification_GetUserName(void* obj);

  /// @brief Method ovr_PartyUpdateNotification_GetUserName_Native, addr 0x270b8c0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PartyUpdateNotification_GetUserName_Native(void* obj);

  /// @brief Method ovr_Pid_GetId, addr 0x270b93c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Pid_GetId(void* obj);

  /// @brief Method ovr_Pid_GetId_Native, addr 0x270b994, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Pid_GetId_Native(void* obj);

  /// @brief Method ovr_PidArray_GetElement, addr 0x270ba10, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_PidArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_PidArray_GetSize, addr 0x270ba94, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PidArray_GetSize(void* obj);

  /// @brief Method ovr_PingResult_GetID, addr 0x270bb10, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PingResult_GetID(void* obj);

  /// @brief Method ovr_PingResult_GetPingTimeUsec, addr 0x270bb8c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_PingResult_GetPingTimeUsec(void* obj);

  /// @brief Method ovr_PingResult_IsTimeout, addr 0x270bc08, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_PingResult_IsTimeout(void* obj);

  /// @brief Method ovr_PlatformInitialize_GetResult, addr 0x270bc8c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::PlatformInitializeResult ovr_PlatformInitialize_GetResult(void* obj);

  /// @brief Method ovr_Price_GetAmountInHundredths, addr 0x270bd08, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_Price_GetAmountInHundredths(void* obj);

  /// @brief Method ovr_Price_GetCurrency, addr 0x270bd84, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Price_GetCurrency(void* obj);

  /// @brief Method ovr_Price_GetCurrency_Native, addr 0x270bddc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Price_GetCurrency_Native(void* obj);

  /// @brief Method ovr_Price_GetFormatted, addr 0x270be58, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Price_GetFormatted(void* obj);

  /// @brief Method ovr_Price_GetFormatted_Native, addr 0x270beb0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Price_GetFormatted_Native(void* obj);

  /// @brief Method ovr_Product_GetDescription, addr 0x270bf2c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetDescription(void* obj);

  /// @brief Method ovr_Product_GetDescription_Native, addr 0x270bf84, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Product_GetDescription_Native(void* obj);

  /// @brief Method ovr_Product_GetFormattedPrice, addr 0x270c000, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetFormattedPrice(void* obj);

  /// @brief Method ovr_Product_GetFormattedPrice_Native, addr 0x270c058, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Product_GetFormattedPrice_Native(void* obj);

  /// @brief Method ovr_Product_GetName, addr 0x270c0d4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetName(void* obj);

  /// @brief Method ovr_Product_GetName_Native, addr 0x270c12c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Product_GetName_Native(void* obj);

  /// @brief Method ovr_Product_GetSKU, addr 0x270c1a8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Product_GetSKU(void* obj);

  /// @brief Method ovr_Product_GetSKU_Native, addr 0x270c200, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Product_GetSKU_Native(void* obj);

  /// @brief Method ovr_ProductArray_GetElement, addr 0x270c27c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_ProductArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_ProductArray_GetNextUrl, addr 0x270c300, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_ProductArray_GetNextUrl(void* obj);

  /// @brief Method ovr_ProductArray_GetNextUrl_Native, addr 0x270c358, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ProductArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_ProductArray_GetSize, addr 0x270c3d4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_ProductArray_GetSize(void* obj);

  /// @brief Method ovr_ProductArray_HasNextPage, addr 0x270c450, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_ProductArray_HasNextPage(void* obj);

  /// @brief Method ovr_Purchase_GetDeveloperPayload, addr 0x270c4d4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetDeveloperPayload(void* obj);

  /// @brief Method ovr_Purchase_GetDeveloperPayload_Native, addr 0x270c52c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Purchase_GetDeveloperPayload_Native(void* obj);

  /// @brief Method ovr_Purchase_GetExpirationTime, addr 0x270c5a8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Purchase_GetExpirationTime(void* obj);

  /// @brief Method ovr_Purchase_GetExpirationTime_Native, addr 0x270c600, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Purchase_GetExpirationTime_Native(void* obj);

  /// @brief Method ovr_Purchase_GetGrantTime, addr 0x270c67c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_Purchase_GetGrantTime(void* obj);

  /// @brief Method ovr_Purchase_GetGrantTime_Native, addr 0x270c6d4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Purchase_GetGrantTime_Native(void* obj);

  /// @brief Method ovr_Purchase_GetPurchaseID, addr 0x270c750, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Purchase_GetPurchaseID(void* obj);

  /// @brief Method ovr_Purchase_GetPurchaseStrID, addr 0x270c7cc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetPurchaseStrID(void* obj);

  /// @brief Method ovr_Purchase_GetPurchaseStrID_Native, addr 0x270c824, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Purchase_GetPurchaseStrID_Native(void* obj);

  /// @brief Method ovr_Purchase_GetReportingId, addr 0x270c8a0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetReportingId(void* obj);

  /// @brief Method ovr_Purchase_GetReportingId_Native, addr 0x270c8f8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Purchase_GetReportingId_Native(void* obj);

  /// @brief Method ovr_Purchase_GetSKU, addr 0x270c974, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Purchase_GetSKU(void* obj);

  /// @brief Method ovr_Purchase_GetSKU_Native, addr 0x270c9cc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Purchase_GetSKU_Native(void* obj);

  /// @brief Method ovr_PurchaseArray_GetElement, addr 0x270ca48, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_PurchaseArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_PurchaseArray_GetNextUrl, addr 0x270cacc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_PurchaseArray_GetNextUrl(void* obj);

  /// @brief Method ovr_PurchaseArray_GetNextUrl_Native, addr 0x270cb24, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PurchaseArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_PurchaseArray_GetSize, addr 0x270cba0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_PurchaseArray_GetSize(void* obj);

  /// @brief Method ovr_PurchaseArray_HasNextPage, addr 0x270cc1c, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_PurchaseArray_HasNextPage(void* obj);

  /// @brief Method ovr_RejoinDialogResult_GetRejoinSelected, addr 0x270cca0, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_RejoinDialogResult_GetRejoinSelected(void* obj);

  /// @brief Method ovr_Room_GetApplicationID, addr 0x270cd24, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_GetApplicationID(void* obj);

  /// @brief Method ovr_Room_GetDataStore, addr 0x270cda0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Room_GetDataStore(void* obj);

  /// @brief Method ovr_Room_GetDescription, addr 0x270ce1c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Room_GetDescription(void* obj);

  /// @brief Method ovr_Room_GetDescription_Native, addr 0x270ce74, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Room_GetDescription_Native(void* obj);

  /// @brief Method ovr_Room_GetID, addr 0x270cef0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_Room_GetID(void* obj);

  /// @brief Method ovr_Room_GetInvitedUsers, addr 0x270cf6c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Room_GetInvitedUsers(void* obj);

  /// @brief Method ovr_Room_GetIsMembershipLocked, addr 0x270cfe8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_Room_GetIsMembershipLocked(void* obj);

  /// @brief Method ovr_Room_GetJoinPolicy, addr 0x270d06c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::RoomJoinPolicy ovr_Room_GetJoinPolicy(void* obj);

  /// @brief Method ovr_Room_GetJoinability, addr 0x270d0e8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::RoomJoinability ovr_Room_GetJoinability(void* obj);

  /// @brief Method ovr_Room_GetMatchedUsers, addr 0x270d164, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Room_GetMatchedUsers(void* obj);

  /// @brief Method ovr_Room_GetMaxUsers, addr 0x270d1e0, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_Room_GetMaxUsers(void* obj);

  /// @brief Method ovr_Room_GetName, addr 0x270d25c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Room_GetName(void* obj);

  /// @brief Method ovr_Room_GetName_Native, addr 0x270d2b4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Room_GetName_Native(void* obj);

  /// @brief Method ovr_Room_GetOwner, addr 0x270d330, size 0x78, virtual false, abstract: false, final false
  static inline void* ovr_Room_GetOwner(void* obj);

  /// @brief Method ovr_Room_GetTeams, addr 0x270d3a8, size 0x78, virtual false, abstract: false, final false
  static inline void* ovr_Room_GetTeams(void* obj);

  /// @brief Method ovr_Room_GetType, addr 0x270d420, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::RoomType ovr_Room_GetType(void* obj);

  /// @brief Method ovr_Room_GetUsers, addr 0x270d49c, size 0x78, virtual false, abstract: false, final false
  static inline void* ovr_Room_GetUsers(void* obj);

  /// @brief Method ovr_Room_GetVersion, addr 0x270d514, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ovr_Room_GetVersion(void* obj);

  /// @brief Method ovr_RoomArray_GetElement, addr 0x270d590, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_RoomArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_RoomArray_GetNextUrl, addr 0x270d614, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_RoomArray_GetNextUrl(void* obj);

  /// @brief Method ovr_RoomArray_GetNextUrl_Native, addr 0x270d66c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_RoomArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_RoomArray_GetSize, addr 0x270d6e8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_RoomArray_GetSize(void* obj);

  /// @brief Method ovr_RoomArray_HasNextPage, addr 0x270d764, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_RoomArray_HasNextPage(void* obj);

  /// @brief Method ovr_RoomInviteNotification_GetID, addr 0x270d7e8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RoomInviteNotification_GetID(void* obj);

  /// @brief Method ovr_RoomInviteNotification_GetRoomID, addr 0x270d864, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RoomInviteNotification_GetRoomID(void* obj);

  /// @brief Method ovr_RoomInviteNotification_GetSenderID, addr 0x270d8e0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RoomInviteNotification_GetSenderID(void* obj);

  /// @brief Method ovr_RoomInviteNotification_GetSentTime, addr 0x270d95c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::DateTime ovr_RoomInviteNotification_GetSentTime(void* obj);

  /// @brief Method ovr_RoomInviteNotification_GetSentTime_Native, addr 0x270d9b4, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_RoomInviteNotification_GetSentTime_Native(void* obj);

  /// @brief Method ovr_RoomInviteNotificationArray_GetElement, addr 0x270da30, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_RoomInviteNotificationArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_RoomInviteNotificationArray_GetNextUrl, addr 0x270dab4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_RoomInviteNotificationArray_GetNextUrl(void* obj);

  /// @brief Method ovr_RoomInviteNotificationArray_GetNextUrl_Native, addr 0x270db0c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_RoomInviteNotificationArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_RoomInviteNotificationArray_GetSize, addr 0x270db88, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_RoomInviteNotificationArray_GetSize(void* obj);

  /// @brief Method ovr_RoomInviteNotificationArray_HasNextPage, addr 0x270dc04, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_RoomInviteNotificationArray_HasNextPage(void* obj);

  /// @brief Method ovr_SdkAccount_GetAccountType, addr 0x270dc88, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SdkAccountType ovr_SdkAccount_GetAccountType(void* obj);

  /// @brief Method ovr_SdkAccount_GetUserId, addr 0x270dd04, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_SdkAccount_GetUserId(void* obj);

  /// @brief Method ovr_SdkAccountArray_GetElement, addr 0x270dd80, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_SdkAccountArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_SdkAccountArray_GetSize, addr 0x270de04, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_SdkAccountArray_GetSize(void* obj);

  /// @brief Method ovr_SendInvitesResult_GetInvites, addr 0x270de80, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_SendInvitesResult_GetInvites(void* obj);

  /// @brief Method ovr_ShareMediaResult_GetStatus, addr 0x270defc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::ShareMediaStatus ovr_ShareMediaResult_GetStatus(void* obj);

  /// @brief Method ovr_SupplementaryMetric_GetID, addr 0x270df78, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_SupplementaryMetric_GetID(void* obj);

  /// @brief Method ovr_SupplementaryMetric_GetMetric, addr 0x270dff4, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t ovr_SupplementaryMetric_GetMetric(void* obj);

  /// @brief Method ovr_SystemVoipState_GetMicrophoneMuted, addr 0x270e070, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState ovr_SystemVoipState_GetMicrophoneMuted(void* obj);

  /// @brief Method ovr_SystemVoipState_GetStatus, addr 0x270e0ec, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus ovr_SystemVoipState_GetStatus(void* obj);

  /// @brief Method ovr_Team_GetAssignedUsers, addr 0x270e168, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Team_GetAssignedUsers(void* obj);

  /// @brief Method ovr_Team_GetMaxUsers, addr 0x270e1e4, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_Team_GetMaxUsers(void* obj);

  /// @brief Method ovr_Team_GetMinUsers, addr 0x270e260, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ovr_Team_GetMinUsers(void* obj);

  /// @brief Method ovr_Team_GetName, addr 0x270e2dc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_Team_GetName(void* obj);

  /// @brief Method ovr_Team_GetName_Native, addr 0x270e334, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_Team_GetName_Native(void* obj);

  /// @brief Method ovr_TeamArray_GetElement, addr 0x270e3b0, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_TeamArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_TeamArray_GetSize, addr 0x270e434, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TeamArray_GetSize(void* obj);

  /// @brief Method ovr_TestUser_GetAccessToken, addr 0x270e4b0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUser_GetAccessToken(void* obj);

  /// @brief Method ovr_TestUser_GetAccessToken_Native, addr 0x270e508, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetAccessToken_Native(void* obj);

  /// @brief Method ovr_TestUser_GetAppAccessArray, addr 0x270e584, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetAppAccessArray(void* obj);

  /// @brief Method ovr_TestUser_GetFbAppAccessArray, addr 0x270e600, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetFbAppAccessArray(void* obj);

  /// @brief Method ovr_TestUser_GetFriendAccessToken, addr 0x270e67c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUser_GetFriendAccessToken(void* obj);

  /// @brief Method ovr_TestUser_GetFriendAccessToken_Native, addr 0x270e6d4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetFriendAccessToken_Native(void* obj);

  /// @brief Method ovr_TestUser_GetFriendAppAccessArray, addr 0x270e750, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetFriendAppAccessArray(void* obj);

  /// @brief Method ovr_TestUser_GetUserAlias, addr 0x270e7cc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUser_GetUserAlias(void* obj);

  /// @brief Method ovr_TestUser_GetUserAlias_Native, addr 0x270e824, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUser_GetUserAlias_Native(void* obj);

  /// @brief Method ovr_TestUser_GetUserFbid, addr 0x270e8a0, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUser_GetUserFbid(void* obj);

  /// @brief Method ovr_TestUser_GetUserId, addr 0x270e91c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUser_GetUserId(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetAccessToken, addr 0x270e998, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_TestUserAppAccess_GetAccessToken(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetAccessToken_Native, addr 0x270e9f0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUserAppAccess_GetAccessToken_Native(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetAppId, addr 0x270ea6c, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUserAppAccess_GetAppId(void* obj);

  /// @brief Method ovr_TestUserAppAccess_GetUserId, addr 0x270eae8, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_TestUserAppAccess_GetUserId(void* obj);

  /// @brief Method ovr_TestUserAppAccessArray_GetElement, addr 0x270eb64, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_TestUserAppAccessArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_TestUserAppAccessArray_GetSize, addr 0x270ebe8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_TestUserAppAccessArray_GetSize(void* obj);

  /// @brief Method ovr_User_GetDisplayName, addr 0x270ec64, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetDisplayName(void* obj);

  /// @brief Method ovr_User_GetDisplayName_Native, addr 0x270ecbc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetDisplayName_Native(void* obj);

  /// @brief Method ovr_User_GetID, addr 0x270ed38, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_User_GetID(void* obj);

  /// @brief Method ovr_User_GetImageUrl, addr 0x270edb4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetImageUrl(void* obj);

  /// @brief Method ovr_User_GetImageUrl_Native, addr 0x270ee0c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetImageUrl_Native(void* obj);

  /// @brief Method ovr_User_GetInviteToken, addr 0x270ee88, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetInviteToken(void* obj);

  /// @brief Method ovr_User_GetInviteToken_Native, addr 0x270eee0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetInviteToken_Native(void* obj);

  /// @brief Method ovr_User_GetOculusID, addr 0x270ef5c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetOculusID(void* obj);

  /// @brief Method ovr_User_GetOculusID_Native, addr 0x270efb4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetOculusID_Native(void* obj);

  /// @brief Method ovr_User_GetPresence, addr 0x270f030, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresence(void* obj);

  /// @brief Method ovr_User_GetPresence_Native, addr 0x270f088, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresence_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceDeeplinkMessage, addr 0x270f104, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceDeeplinkMessage(void* obj);

  /// @brief Method ovr_User_GetPresenceDeeplinkMessage_Native, addr 0x270f15c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresenceDeeplinkMessage_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceDestinationApiName, addr 0x270f1d8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceDestinationApiName(void* obj);

  /// @brief Method ovr_User_GetPresenceDestinationApiName_Native, addr 0x270f230, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresenceDestinationApiName_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceLobbySessionId, addr 0x270f2ac, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceLobbySessionId(void* obj);

  /// @brief Method ovr_User_GetPresenceLobbySessionId_Native, addr 0x270f304, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresenceLobbySessionId_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceMatchSessionId, addr 0x270f380, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetPresenceMatchSessionId(void* obj);

  /// @brief Method ovr_User_GetPresenceMatchSessionId_Native, addr 0x270f3d8, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetPresenceMatchSessionId_Native(void* obj);

  /// @brief Method ovr_User_GetPresenceStatus, addr 0x270f454, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::UserPresenceStatus ovr_User_GetPresenceStatus(void* obj);

  /// @brief Method ovr_User_GetSmallImageUrl, addr 0x270f4d0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_User_GetSmallImageUrl(void* obj);

  /// @brief Method ovr_User_GetSmallImageUrl_Native, addr 0x270f528, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_User_GetSmallImageUrl_Native(void* obj);

  /// @brief Method ovr_UserAndRoom_GetRoom, addr 0x270f5a4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserAndRoom_GetRoom(void* obj);

  /// @brief Method ovr_UserAndRoom_GetUser, addr 0x270f620, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserAndRoom_GetUser(void* obj);

  /// @brief Method ovr_UserAndRoomArray_GetElement, addr 0x270f69c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_UserAndRoomArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_UserAndRoomArray_GetNextUrl, addr 0x270f720, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserAndRoomArray_GetNextUrl(void* obj);

  /// @brief Method ovr_UserAndRoomArray_GetNextUrl_Native, addr 0x270f778, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserAndRoomArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_UserAndRoomArray_GetSize, addr 0x270f7f4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserAndRoomArray_GetSize(void* obj);

  /// @brief Method ovr_UserAndRoomArray_HasNextPage, addr 0x270f870, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserAndRoomArray_HasNextPage(void* obj);

  /// @brief Method ovr_UserArray_GetElement, addr 0x270f8f4, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_UserArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_UserArray_GetNextUrl, addr 0x270f978, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserArray_GetNextUrl(void* obj);

  /// @brief Method ovr_UserArray_GetNextUrl_Native, addr 0x270f9d0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_UserArray_GetSize, addr 0x270fa4c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserArray_GetSize(void* obj);

  /// @brief Method ovr_UserArray_HasNextPage, addr 0x270fac8, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserArray_HasNextPage(void* obj);

  /// @brief Method ovr_UserCapability_GetDescription, addr 0x270fb4c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapability_GetDescription(void* obj);

  /// @brief Method ovr_UserCapability_GetDescription_Native, addr 0x270fba4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapability_GetDescription_Native(void* obj);

  /// @brief Method ovr_UserCapability_GetIsEnabled, addr 0x270fc20, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserCapability_GetIsEnabled(void* obj);

  /// @brief Method ovr_UserCapability_GetName, addr 0x270fca4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapability_GetName(void* obj);

  /// @brief Method ovr_UserCapability_GetName_Native, addr 0x270fcfc, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapability_GetName_Native(void* obj);

  /// @brief Method ovr_UserCapability_GetReasonCode, addr 0x270fd78, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapability_GetReasonCode(void* obj);

  /// @brief Method ovr_UserCapability_GetReasonCode_Native, addr 0x270fdd0, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapability_GetReasonCode_Native(void* obj);

  /// @brief Method ovr_UserCapabilityArray_GetElement, addr 0x270fe4c, size 0x84, virtual false, abstract: false, final false
  static inline void* ovr_UserCapabilityArray_GetElement(void* obj, void* index);

  /// @brief Method ovr_UserCapabilityArray_GetNextUrl, addr 0x270fed0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserCapabilityArray_GetNextUrl(void* obj);

  /// @brief Method ovr_UserCapabilityArray_GetNextUrl_Native, addr 0x270ff28, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapabilityArray_GetNextUrl_Native(void* obj);

  /// @brief Method ovr_UserCapabilityArray_GetSize, addr 0x270ffa4, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserCapabilityArray_GetSize(void* obj);

  /// @brief Method ovr_UserCapabilityArray_HasNextPage, addr 0x2710020, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserCapabilityArray_HasNextPage(void* obj);

  /// @brief Method ovr_UserDataStoreUpdateResponse_GetSuccess, addr 0x27100a4, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserDataStoreUpdateResponse_GetSuccess(void* obj);

  /// @brief Method ovr_UserProof_GetNonce, addr 0x2710128, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ovr_UserProof_GetNonce(void* obj);

  /// @brief Method ovr_UserProof_GetNonce_Native, addr 0x2710180, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_UserProof_GetNonce_Native(void* obj);

  /// @brief Method ovr_UserReportID_GetDidCancel, addr 0x27101fc, size 0x84, virtual false, abstract: false, final false
  static inline bool ovr_UserReportID_GetDidCancel(void* obj);

  /// @brief Method ovr_UserReportID_GetID, addr 0x2710280, size 0x7c, virtual false, abstract: false, final false
  static inline uint64_t ovr_UserReportID_GetID(void* obj);

  /// @brief Method ovr_VoipDecoder_Decode, addr 0x27102fc, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_VoipDecoder_Decode(void* obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData, void* compressedSize);

  /// @brief Method ovr_VoipDecoder_GetDecodedPCM, addr 0x2710398, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_VoipDecoder_GetDecodedPCM(void* obj, ::ArrayW<float_t, ::Array<float_t>*> outputBuffer, void* outputBufferSize);

  /// @brief Method ovr_VoipEncoder_AddPCM, addr 0x2710434, size 0x9c, virtual false, abstract: false, final false
  static inline void ovr_VoipEncoder_AddPCM(void* obj, ::ArrayW<float_t, ::Array<float_t>*> inputData, uint32_t inputSize);

  /// @brief Method ovr_VoipEncoder_GetCompressedData, addr 0x27104d0, size 0x9c, virtual false, abstract: false, final false
  static inline void* ovr_VoipEncoder_GetCompressedData(void* obj, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, void* intputSize);

  /// @brief Method ovr_VoipEncoder_GetCompressedDataSize, addr 0x271056c, size 0x7c, virtual false, abstract: false, final false
  static inline void* ovr_VoipEncoder_GetCompressedDataSize(void* obj);

  /// @brief Method ovr_AbuseReportOptions_Create, addr 0x26ec1f8, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_AbuseReportOptions_Create();

  /// @brief Method ovr_AbuseReportOptions_Destroy, addr 0x26ec564, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AbuseReportOptions_Destroy(void* handle);

  /// @brief Method ovr_AbuseReportOptions_SetPreventPeopleChooser, addr 0x26ec2c8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AbuseReportOptions_SetPreventPeopleChooser(void* handle, bool value);

  /// @brief Method ovr_AbuseReportOptions_SetReportType, addr 0x26ec3b4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AbuseReportOptions_SetReportType(void* handle, ::Oculus::Platform::AbuseReportType value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_Create, addr 0x26ec644, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_AdvancedAbuseReportOptions_Create();

  /// @brief Method ovr_AdvancedAbuseReportOptions_Destroy, addr 0x26ece7c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_Destroy(void* handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString, addr 0x26ec71c, size 0xc0, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString(void* handle, ::StringW key, ::StringW value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native, addr 0x27105e8, size 0x94, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native(void* handle, void* key, void* value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext, addr 0x26ec834, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext(void* handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType, addr 0x26ec918, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetObjectType(void* handle, ::StringW value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType_Native, addr 0x271067c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetObjectType_Native(void* handle, void* value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetReportType, addr 0x26eca20, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetReportType(void* handle, ::Oculus::Platform::AbuseReportType value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_AddSuggestedUser, addr 0x26ecb0c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_AddSuggestedUser(void* handle, uint64_t value);

  /// @brief Method ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers, addr 0x26ecbe8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers(void* handle);

  /// @brief Method ovr_AdvancedAbuseReportOptions_SetVideoMode, addr 0x26ecccc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AdvancedAbuseReportOptions_SetVideoMode(void* handle, ::Oculus::Platform::AbuseReportVideoMode value);

  /// @brief Method ovr_ApplicationOptions_Create, addr 0x26ed248, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_ApplicationOptions_Create();

  /// @brief Method ovr_ApplicationOptions_Destroy, addr 0x26ed8e8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_Destroy(void* handle);

  /// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage, addr 0x26ed318, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDeeplinkMessage(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage_Native, addr 0x2710700, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDeeplinkMessage_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetDestinationApiName, addr 0x26ed420, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDestinationApiName(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetDestinationApiName_Native, addr 0x2710784, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetDestinationApiName_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetLobbySessionId, addr 0x26ed528, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetLobbySessionId(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetLobbySessionId_Native, addr 0x2710808, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetLobbySessionId_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetMatchSessionId, addr 0x26ed630, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetMatchSessionId(void* handle, ::StringW value);

  /// @brief Method ovr_ApplicationOptions_SetMatchSessionId_Native, addr 0x271088c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetMatchSessionId_Native(void* handle, void* value);

  /// @brief Method ovr_ApplicationOptions_SetRoomId, addr 0x26ed738, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ApplicationOptions_SetRoomId(void* handle, uint64_t value);

  /// @brief Method ovr_AvatarEditorOptions_Create, addr 0x26ed9c8, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_AvatarEditorOptions_Create();

  /// @brief Method ovr_AvatarEditorOptions_Destroy, addr 0x26edc64, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_AvatarEditorOptions_Destroy(void* handle);

  /// @brief Method ovr_AvatarEditorOptions_SetSourceOverride, addr 0x26eda98, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_AvatarEditorOptions_SetSourceOverride(void* handle, ::StringW value);

  /// @brief Method ovr_AvatarEditorOptions_SetSourceOverride_Native, addr 0x2710910, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_AvatarEditorOptions_SetSourceOverride_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_Create, addr 0x2710994, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_ChallengeOptions_Create();

  /// @brief Method ovr_ChallengeOptions_Destroy, addr 0x27109fc, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_Destroy(void* handle);

  /// @brief Method ovr_ChallengeOptions_SetDescription, addr 0x2710a78, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetDescription(void* handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetDescription_Native, addr 0x2710b18, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetDescription_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_SetEndDate, addr 0x2710b9c, size 0x6c, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetEndDate(void* handle, ::System::DateTime value);

  /// @brief Method ovr_ChallengeOptions_SetEndDate_Native, addr 0x2710c08, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetEndDate_Native(void* handle, uint64_t value);

  /// @brief Method ovr_ChallengeOptions_SetIncludeActiveChallenges, addr 0x2710c8c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetIncludeActiveChallenges(void* handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetIncludeFutureChallenges, addr 0x2710d10, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetIncludeFutureChallenges(void* handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetIncludePastChallenges, addr 0x2710d94, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetIncludePastChallenges(void* handle, bool value);

  /// @brief Method ovr_ChallengeOptions_SetLeaderboardName, addr 0x2710e18, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetLeaderboardName(void* handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetLeaderboardName_Native, addr 0x2710eb8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetLeaderboardName_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_SetStartDate, addr 0x2710f3c, size 0x6c, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetStartDate(void* handle, ::System::DateTime value);

  /// @brief Method ovr_ChallengeOptions_SetStartDate_Native, addr 0x2710fa8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetStartDate_Native(void* handle, uint64_t value);

  /// @brief Method ovr_ChallengeOptions_SetTitle, addr 0x271102c, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetTitle(void* handle, ::StringW value);

  /// @brief Method ovr_ChallengeOptions_SetTitle_Native, addr 0x27110cc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetTitle_Native(void* handle, void* value);

  /// @brief Method ovr_ChallengeOptions_SetViewerFilter, addr 0x2711150, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetViewerFilter(void* handle, ::Oculus::Platform::ChallengeViewerFilter value);

  /// @brief Method ovr_ChallengeOptions_SetVisibility, addr 0x27111d4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_ChallengeOptions_SetVisibility(void* handle, ::Oculus::Platform::ChallengeVisibility value);

  /// @brief Method ovr_GroupPresenceOptions_Create, addr 0x2711258, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_GroupPresenceOptions_Create();

  /// @brief Method ovr_GroupPresenceOptions_Destroy, addr 0x27112c0, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_Destroy(void* handle);

  /// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride, addr 0x271133c, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x27113dc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName, addr 0x2711460, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDestinationApiName(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName_Native, addr 0x2711500, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetDestinationApiName_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresenceOptions_SetIsJoinable, addr 0x2711584, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetIsJoinable(void* handle, bool value);

  /// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId, addr 0x2711608, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetLobbySessionId(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId_Native, addr 0x27116a8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetLobbySessionId_Native(void* handle, void* value);

  /// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId, addr 0x271172c, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetMatchSessionId(void* handle, ::StringW value);

  /// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId_Native, addr 0x27117cc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_GroupPresenceOptions_SetMatchSessionId_Native(void* handle, void* value);

  /// @brief Method ovr_InviteOptions_Create, addr 0x2711850, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_InviteOptions_Create();

  /// @brief Method ovr_InviteOptions_Destroy, addr 0x27118b8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_InviteOptions_Destroy(void* handle);

  /// @brief Method ovr_InviteOptions_AddSuggestedUser, addr 0x2711934, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_InviteOptions_AddSuggestedUser(void* handle, uint64_t value);

  /// @brief Method ovr_InviteOptions_ClearSuggestedUsers, addr 0x27119b8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_InviteOptions_ClearSuggestedUsers(void* handle);

  /// @brief Method ovr_MatchmakingOptions_Create, addr 0x2711a34, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_MatchmakingOptions_Create();

  /// @brief Method ovr_MatchmakingOptions_Destroy, addr 0x2711a9c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_Destroy(void* handle);

  /// @brief Method ovr_MatchmakingOptions_SetCreateRoomDataStoreString, addr 0x2711b18, size 0xc0, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_SetCreateRoomDataStoreString(void* handle, ::StringW key, ::StringW value);

  /// @brief Method ovr_MatchmakingOptions_SetCreateRoomDataStoreString_Native, addr 0x2711bd8, size 0x94, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_SetCreateRoomDataStoreString_Native(void* handle, void* key, void* value);

  /// @brief Method ovr_MatchmakingOptions_ClearCreateRoomDataStore, addr 0x2711c6c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_ClearCreateRoomDataStore(void* handle);

  /// @brief Method ovr_MatchmakingOptions_SetCreateRoomJoinPolicy, addr 0x2711ce8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_SetCreateRoomJoinPolicy(void* handle, ::Oculus::Platform::RoomJoinPolicy value);

  /// @brief Method ovr_MatchmakingOptions_SetCreateRoomMaxUsers, addr 0x2711d6c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_SetCreateRoomMaxUsers(void* handle, uint32_t value);

  /// @brief Method ovr_MatchmakingOptions_AddEnqueueAdditionalUser, addr 0x2711df0, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_AddEnqueueAdditionalUser(void* handle, uint64_t value);

  /// @brief Method ovr_MatchmakingOptions_ClearEnqueueAdditionalUsers, addr 0x2711e74, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_ClearEnqueueAdditionalUsers(void* handle);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsInt, addr 0x2711ef0, size 0xa8, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_SetEnqueueDataSettingsInt(void* handle, ::StringW key, int32_t value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsInt_Native, addr 0x2711f98, size 0x94, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_SetEnqueueDataSettingsInt_Native(void* handle, void* key, int32_t value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble, addr 0x271202c, size 0xb0, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble(void* handle, ::StringW key, double_t value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble_Native, addr 0x27120dc, size 0x94, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble_Native(void* handle, void* key, double_t value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsString, addr 0x2712170, size 0xc0, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_SetEnqueueDataSettingsString(void* handle, ::StringW key, ::StringW value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsString_Native, addr 0x2712230, size 0x94, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_SetEnqueueDataSettingsString_Native(void* handle, void* key, void* value);

  /// @brief Method ovr_MatchmakingOptions_ClearEnqueueDataSettings, addr 0x27122c4, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_ClearEnqueueDataSettings(void* handle);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueIsDebug, addr 0x2712340, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_SetEnqueueIsDebug(void* handle, bool value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueQueryKey, addr 0x27123c4, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_SetEnqueueQueryKey(void* handle, ::StringW value);

  /// @brief Method ovr_MatchmakingOptions_SetEnqueueQueryKey_Native, addr 0x2712464, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_MatchmakingOptions_SetEnqueueQueryKey_Native(void* handle, void* value);

  /// @brief Method ovr_MultiplayerErrorOptions_Create, addr 0x27124e8, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_MultiplayerErrorOptions_Create();

  /// @brief Method ovr_MultiplayerErrorOptions_Destroy, addr 0x2712550, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_MultiplayerErrorOptions_Destroy(void* handle);

  /// @brief Method ovr_MultiplayerErrorOptions_SetErrorKey, addr 0x27125cc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_MultiplayerErrorOptions_SetErrorKey(void* handle, ::Oculus::Platform::MultiplayerErrorErrorKey value);

  /// @brief Method ovr_NetSyncOptions_Create, addr 0x2712650, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_NetSyncOptions_Create();

  /// @brief Method ovr_NetSyncOptions_Destroy, addr 0x27126b8, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_Destroy(void* handle);

  /// @brief Method ovr_NetSyncOptions_SetVoipGroup, addr 0x2712734, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetVoipGroup(void* handle, ::StringW value);

  /// @brief Method ovr_NetSyncOptions_SetVoipGroup_Native, addr 0x27127d4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetVoipGroup_Native(void* handle, void* value);

  /// @brief Method ovr_NetSyncOptions_SetVoipStreamDefault, addr 0x2712858, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetVoipStreamDefault(void* handle, ::Oculus::Platform::NetSyncVoipStreamMode value);

  /// @brief Method ovr_NetSyncOptions_SetZoneId, addr 0x27128dc, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetZoneId(void* handle, ::StringW value);

  /// @brief Method ovr_NetSyncOptions_SetZoneId_Native, addr 0x271297c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_NetSyncOptions_SetZoneId_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_Create, addr 0x2712a00, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_RichPresenceOptions_Create();

  /// @brief Method ovr_RichPresenceOptions_Destroy, addr 0x2712a68, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_Destroy(void* handle);

  /// @brief Method ovr_RichPresenceOptions_SetApiName, addr 0x2712ae4, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetApiName(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetApiName_Native, addr 0x2712b84, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetApiName_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetArgsString, addr 0x2712c08, size 0xc0, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetArgsString(void* handle, ::StringW key, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetArgsString_Native, addr 0x2712cc8, size 0x94, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetArgsString_Native(void* handle, void* key, void* value);

  /// @brief Method ovr_RichPresenceOptions_ClearArgs, addr 0x2712d5c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_ClearArgs(void* handle);

  /// @brief Method ovr_RichPresenceOptions_SetCurrentCapacity, addr 0x2712dd8, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetCurrentCapacity(void* handle, uint32_t value);

  /// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride, addr 0x2712e5c, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native, addr 0x2712efc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetEndTime, addr 0x2712f80, size 0x6c, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetEndTime(void* handle, ::System::DateTime value);

  /// @brief Method ovr_RichPresenceOptions_SetEndTime_Native, addr 0x2712fec, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetEndTime_Native(void* handle, uint64_t value);

  /// @brief Method ovr_RichPresenceOptions_SetExtraContext, addr 0x2713070, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetExtraContext(void* handle, ::Oculus::Platform::RichPresenceExtraContext value);

  /// @brief Method ovr_RichPresenceOptions_SetInstanceId, addr 0x27130f4, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetInstanceId(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetInstanceId_Native, addr 0x2713194, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetInstanceId_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetIsIdle, addr 0x2713218, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetIsIdle(void* handle, bool value);

  /// @brief Method ovr_RichPresenceOptions_SetIsJoinable, addr 0x271329c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetIsJoinable(void* handle, bool value);

  /// @brief Method ovr_RichPresenceOptions_SetJoinableId, addr 0x2713320, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetJoinableId(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetJoinableId_Native, addr 0x27133c0, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetJoinableId_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetLobbySessionId, addr 0x2713444, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetLobbySessionId(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetLobbySessionId_Native, addr 0x27134e4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetLobbySessionId_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetMatchSessionId, addr 0x2713568, size 0xa0, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetMatchSessionId(void* handle, ::StringW value);

  /// @brief Method ovr_RichPresenceOptions_SetMatchSessionId_Native, addr 0x2713608, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetMatchSessionId_Native(void* handle, void* value);

  /// @brief Method ovr_RichPresenceOptions_SetMaxCapacity, addr 0x271368c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetMaxCapacity(void* handle, uint32_t value);

  /// @brief Method ovr_RichPresenceOptions_SetStartTime, addr 0x2713710, size 0x6c, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetStartTime(void* handle, ::System::DateTime value);

  /// @brief Method ovr_RichPresenceOptions_SetStartTime_Native, addr 0x271377c, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RichPresenceOptions_SetStartTime_Native(void* handle, uint64_t value);

  /// @brief Method ovr_RoomOptions_Create, addr 0x2713800, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_RoomOptions_Create();

  /// @brief Method ovr_RoomOptions_Destroy, addr 0x2713868, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RoomOptions_Destroy(void* handle);

  /// @brief Method ovr_RoomOptions_SetDataStoreString, addr 0x27138e4, size 0xc0, virtual false, abstract: false, final false
  static inline void ovr_RoomOptions_SetDataStoreString(void* handle, ::StringW key, ::StringW value);

  /// @brief Method ovr_RoomOptions_SetDataStoreString_Native, addr 0x27139a4, size 0x94, virtual false, abstract: false, final false
  static inline void ovr_RoomOptions_SetDataStoreString_Native(void* handle, void* key, void* value);

  /// @brief Method ovr_RoomOptions_ClearDataStore, addr 0x2713a38, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RoomOptions_ClearDataStore(void* handle);

  /// @brief Method ovr_RoomOptions_SetExcludeRecentlyMet, addr 0x2713ab4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RoomOptions_SetExcludeRecentlyMet(void* handle, bool value);

  /// @brief Method ovr_RoomOptions_SetMaxUserResults, addr 0x2713b38, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RoomOptions_SetMaxUserResults(void* handle, uint32_t value);

  /// @brief Method ovr_RoomOptions_SetOrdering, addr 0x2713bbc, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RoomOptions_SetOrdering(void* handle, ::Oculus::Platform::UserOrdering value);

  /// @brief Method ovr_RoomOptions_SetRecentlyMetTimeWindow, addr 0x2713c40, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RoomOptions_SetRecentlyMetTimeWindow(void* handle, ::Oculus::Platform::TimeWindow value);

  /// @brief Method ovr_RoomOptions_SetRoomId, addr 0x2713cc4, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RoomOptions_SetRoomId(void* handle, uint64_t value);

  /// @brief Method ovr_RoomOptions_SetTurnOffUpdates, addr 0x2713d48, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RoomOptions_SetTurnOffUpdates(void* handle, bool value);

  /// @brief Method ovr_RosterOptions_Create, addr 0x2713dcc, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_RosterOptions_Create();

  /// @brief Method ovr_RosterOptions_Destroy, addr 0x2713e34, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RosterOptions_Destroy(void* handle);

  /// @brief Method ovr_RosterOptions_AddSuggestedUser, addr 0x2713eb0, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_RosterOptions_AddSuggestedUser(void* handle, uint64_t value);

  /// @brief Method ovr_RosterOptions_ClearSuggestedUsers, addr 0x2713f34, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_RosterOptions_ClearSuggestedUsers(void* handle);

  /// @brief Method ovr_UserOptions_Create, addr 0x2713fb0, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_UserOptions_Create();

  /// @brief Method ovr_UserOptions_Destroy, addr 0x2714018, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_Destroy(void* handle);

  /// @brief Method ovr_UserOptions_SetMaxUsers, addr 0x2714094, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_SetMaxUsers(void* handle, uint32_t value);

  /// @brief Method ovr_UserOptions_AddServiceProvider, addr 0x2714118, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_AddServiceProvider(void* handle, ::Oculus::Platform::ServiceProvider value);

  /// @brief Method ovr_UserOptions_ClearServiceProviders, addr 0x271419c, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_ClearServiceProviders(void* handle);

  /// @brief Method ovr_UserOptions_SetTimeWindow, addr 0x2714218, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_UserOptions_SetTimeWindow(void* handle, ::Oculus::Platform::TimeWindow value);

  /// @brief Method ovr_VoipOptions_Create, addr 0x271429c, size 0x68, virtual false, abstract: false, final false
  static inline void* ovr_VoipOptions_Create();

  /// @brief Method ovr_VoipOptions_Destroy, addr 0x2714304, size 0x7c, virtual false, abstract: false, final false
  static inline void ovr_VoipOptions_Destroy(void* handle);

  /// @brief Method ovr_VoipOptions_SetBitrateForNewConnections, addr 0x2714380, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_VoipOptions_SetBitrateForNewConnections(void* handle, ::Oculus::Platform::VoipBitrate value);

  /// @brief Method ovr_VoipOptions_SetCreateNewConnectionUseDtx, addr 0x2714404, size 0x84, virtual false, abstract: false, final false
  static inline void ovr_VoipOptions_SetCreateNewConnectionUseDtx(void* handle, ::Oculus::Platform::VoipDtxState value);

  static inline ::Oculus::Platform::CAPI* New_ctor();

  /// @brief Method .ctor, addr 0x2714488, size 0x8, virtual false, abstract: false, final false
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

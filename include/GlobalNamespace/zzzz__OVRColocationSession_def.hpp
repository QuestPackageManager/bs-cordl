#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRColocationSession.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRColocationSession)
namespace GlobalNamespace {
struct OVRColocationSession_Data;
}
namespace GlobalNamespace {
struct OVRColocationSession_Result;
}
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace GlobalNamespace {
template <typename TStatus> struct OVRResult_1;
}
namespace GlobalNamespace {
template <typename TValue, typename TStatus> struct OVRResult_2;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRColocationSession_Result;
}
namespace GlobalNamespace {
class OVRColocationSession;
}
namespace GlobalNamespace {
struct OVRColocationSession_Data;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRColocationSession_Result);
MARK_REF_PTR_T(::GlobalNamespace::OVRColocationSession);
MARK_VAL_T(::GlobalNamespace::OVRColocationSession_Data);
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRColocationSession/Data
struct CORDL_TYPE OVRColocationSession_Data {
public:
  // Declarations
  __declspec(property(get = get_AdvertisementUuid, put = set_AdvertisementUuid)) ::System::Guid AdvertisementUuid;

  __declspec(property(get = get_Metadata, put = set_Metadata)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Metadata;

  /// @brief Method get_AdvertisementUuid, addr 0x5c6e738, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_AdvertisementUuid();

  /// @brief Method get_Metadata, addr 0x5c6e74c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Metadata();

  /// @brief Method set_AdvertisementUuid, addr 0x5c6e744, size 0x8, virtual false, abstract: false, final false
  inline void set_AdvertisementUuid(::System::Guid value);

  /// @brief Method set_Metadata, addr 0x5c6e754, size 0x8, virtual false, abstract: false, final false
  inline void set_Metadata(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRColocationSession_Data();

  // Ctor Parameters [CppParam { name: "_AdvertisementUuid_k__BackingField", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "_Metadata_k__BackingField", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr OVRColocationSession_Data(::System::Guid _AdvertisementUuid_k__BackingField, ::ArrayW<uint8_t, ::Array<uint8_t>*> _Metadata_k__BackingField) noexcept;

  /// @brief Field MaxMetadataSize offset 0xffffffff size 0x4
  static constexpr int32_t MaxMetadataSize{ static_cast<int32_t>(0x400) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7109 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <AdvertisementUuid>k__BackingField, offset: 0x0, size: 0x10, def value: None
  ::System::Guid _AdvertisementUuid_k__BackingField;

  /// @brief Field <Metadata>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _Metadata_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRColocationSession_Data, _AdvertisementUuid_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRColocationSession_Data, _Metadata_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRColocationSession_Data, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRColocationSession/Result
struct CORDL_TYPE OVRColocationSession_Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRColocationSession_Result_Unwrapped
  enum struct __OVRColocationSession_Result_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_AlreadyAdvertising = static_cast<int32_t>(0xbb9),
    __E_AlreadyDiscovering = static_cast<int32_t>(0xbba),
    __E_Failure = static_cast<int32_t>(0xfffffc18),
    __E_Unsupported = static_cast<int32_t>(0xfffffc14),
    __E_OperationFailed = static_cast<int32_t>(0xfffffc12),
    __E_InvalidData = static_cast<int32_t>(0xfffffc10),
    __E_NetworkFailed = static_cast<int32_t>(0xfffff446),
    __E_NoDiscoveryMethodAvailable = static_cast<int32_t>(0xfffff445),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRColocationSession_Result_Unwrapped() const noexcept {
    return static_cast<__OVRColocationSession_Result_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRColocationSession_Result();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRColocationSession_Result(int32_t value__) noexcept;

  /// @brief Field AlreadyAdvertising value: I32(3001)
  static ::GlobalNamespace::OVRColocationSession_Result const AlreadyAdvertising;

  /// @brief Field AlreadyDiscovering value: I32(3002)
  static ::GlobalNamespace::OVRColocationSession_Result const AlreadyDiscovering;

  /// @brief Field Failure value: I32(-1000)
  static ::GlobalNamespace::OVRColocationSession_Result const Failure;

  /// @brief Field InvalidData value: I32(-1008)
  static ::GlobalNamespace::OVRColocationSession_Result const InvalidData;

  /// @brief Field NetworkFailed value: I32(-3002)
  static ::GlobalNamespace::OVRColocationSession_Result const NetworkFailed;

  /// @brief Field NoDiscoveryMethodAvailable value: I32(-3003)
  static ::GlobalNamespace::OVRColocationSession_Result const NoDiscoveryMethodAvailable;

  /// @brief Field OperationFailed value: I32(-1006)
  static ::GlobalNamespace::OVRColocationSession_Result const OperationFailed;

  /// @brief Field Success value: I32(0)
  static ::GlobalNamespace::OVRColocationSession_Result const Success;

  /// @brief Field Unsupported value: I32(-1004)
  static ::GlobalNamespace::OVRColocationSession_Result const Unsupported;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7110 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRColocationSession_Result, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRColocationSession_Result, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRColocationSession
class CORDL_TYPE OVRColocationSession : public ::System::Object {
public:
  // Declarations
  using Data = ::GlobalNamespace::OVRColocationSession_Data;

  using Result = ::GlobalNamespace::OVRColocationSession_Result;

  /// @brief Field ColocationSessionDiscovered, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ColocationSessionDiscovered,
                      put = setStaticF_ColocationSessionDiscovered)) ::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* ColocationSessionDiscovered;

  static inline ::GlobalNamespace::OVRColocationSession* New_ctor();

  /// @brief Method OnColocationSessionAdvertisementComplete, addr 0x5c6e564, size 0xe8, virtual false, abstract: false, final false
  static inline void OnColocationSessionAdvertisementComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result);

  /// @brief Method OnColocationSessionDiscoveryComplete, addr 0x5c6e64c, size 0xe8, virtual false, abstract: false, final false
  static inline void OnColocationSessionDiscoveryComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result);

  /// @brief Method OnColocationSessionDiscoveryResult, addr 0x5c6e464, size 0x100, virtual false, abstract: false, final false
  static inline void OnColocationSessionDiscoveryResult(uint64_t requestId, ::System::Guid uuid, uint32_t metaDataCount, uint8_t* metaDataPtr);

  /// @brief Method OnColocationSessionStartAdvertisementComplete, addr 0x5c6e224, size 0xa8, virtual false, abstract: false, final false
  static inline void OnColocationSessionStartAdvertisementComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result, ::System::Guid uuid);

  /// @brief Method OnColocationSessionStartDiscoveryComplete, addr 0x5c6e354, size 0x88, virtual false, abstract: false, final false
  static inline void OnColocationSessionStartDiscoveryComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result);

  /// @brief Method OnColocationSessionStopAdvertisementComplete, addr 0x5c6e2cc, size 0x88, virtual false, abstract: false, final false
  static inline void OnColocationSessionStopAdvertisementComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result);

  /// @brief Method OnColocationSessionStopDiscoveryComplete, addr 0x5c6e3dc, size 0x88, virtual false, abstract: false, final false
  static inline void OnColocationSessionStopDiscoveryComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result);

  /// @brief Method StartAdvertisementAsync, addr 0x5c6ddc8, size 0x1b0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Guid, ::GlobalNamespace::OVRColocationSession_Result>>
  StartAdvertisementAsync(::System::ReadOnlySpan_1<uint8_t> colocationSessionData);

  /// @brief Method StartDiscoveryAsync, addr 0x5c6e05c, size 0xe4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> StartDiscoveryAsync();

  /// @brief Method StopAdvertisementAsync, addr 0x5c6df78, size 0xe4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> StopAdvertisementAsync();

  /// @brief Method StopDiscoveryAsync, addr 0x5c6e140, size 0xe4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> StopDiscoveryAsync();

  /// @brief Method .ctor, addr 0x5c6e734, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_ColocationSessionDiscovered, addr 0x5c6dc08, size 0xe0, virtual false, abstract: false, final false
  static inline void add_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* value);

  static inline ::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* getStaticF_ColocationSessionDiscovered();

  /// @brief Method remove_ColocationSessionDiscovered, addr 0x5c6dce8, size 0xe0, virtual false, abstract: false, final false
  static inline void remove_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* value);

  static inline void setStaticF_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRColocationSession();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRColocationSession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRColocationSession(OVRColocationSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRColocationSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRColocationSession(OVRColocationSession const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7111 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRColocationSession, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRColocationSession_Result, "", "OVRColocationSession/Result");
NEED_NO_BOX(::GlobalNamespace::OVRColocationSession);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRColocationSession*, "", "OVRColocationSession");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRColocationSession_Data, "", "OVRColocationSession/Data");

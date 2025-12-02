#pragma once
// IWYU pragma private; include "System/Net/Sockets/IOControlCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IOControlCode)
// Forward declare root types
namespace System::Net::Sockets {
struct IOControlCode;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::IOControlCode);
// Dependencies
namespace System::Net::Sockets {
// Is value type: true
// CS Name: System.Net.Sockets.IOControlCode
struct CORDL_TYPE IOControlCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int64_t;

  /// @brief Nested struct __IOControlCode_Unwrapped
  enum struct __IOControlCode_Unwrapped : int64_t {
    __E_AsyncIO = static_cast<int64_t>(0x8004667d),
    __E_NonBlockingIO = static_cast<int64_t>(0x8004667e),
    __E_DataToRead = static_cast<int64_t>(0x4004667f),
    __E_OobDataRead = static_cast<int64_t>(0x40047307),
    __E_AssociateHandle = static_cast<int64_t>(0x88000001),
    __E_EnableCircularQueuing = static_cast<int64_t>(0x28000002),
    __E_Flush = static_cast<int64_t>(0x28000004),
    __E_GetBroadcastAddress = static_cast<int64_t>(0x48000005),
    __E_GetExtensionFunctionPointer = static_cast<int64_t>(0xc8000006),
    __E_GetQos = static_cast<int64_t>(0xc8000007),
    __E_GetGroupQos = static_cast<int64_t>(0xc8000008),
    __E_MultipointLoopback = static_cast<int64_t>(0x88000009),
    __E_MulticastScope = static_cast<int64_t>(0x8800000a),
    __E_SetQos = static_cast<int64_t>(0x8800000b),
    __E_SetGroupQos = static_cast<int64_t>(0x8800000c),
    __E_TranslateHandle = static_cast<int64_t>(0xc800000d),
    __E_RoutingInterfaceQuery = static_cast<int64_t>(0xc8000014),
    __E_RoutingInterfaceChange = static_cast<int64_t>(0x88000015),
    __E_AddressListQuery = static_cast<int64_t>(0x48000016),
    __E_AddressListChange = static_cast<int64_t>(0x28000017),
    __E_QueryTargetPnpHandle = static_cast<int64_t>(0x48000018),
    __E_NamespaceChange = static_cast<int64_t>(0x88000019),
    __E_AddressListSort = static_cast<int64_t>(0xc8000019),
    __E_ReceiveAll = static_cast<int64_t>(0x98000001),
    __E_ReceiveAllMulticast = static_cast<int64_t>(0x98000002),
    __E_ReceiveAllIgmpMulticast = static_cast<int64_t>(0x98000003),
    __E_KeepAliveValues = static_cast<int64_t>(0x98000004),
    __E_AbsorbRouterAlert = static_cast<int64_t>(0x98000005),
    __E_UnicastInterface = static_cast<int64_t>(0x98000006),
    __E_LimitBroadcasts = static_cast<int64_t>(0x98000007),
    __E_BindToInterface = static_cast<int64_t>(0x98000008),
    __E_MulticastInterface = static_cast<int64_t>(0x98000009),
    __E_AddMulticastGroupOnInterface = static_cast<int64_t>(0x9800000a),
    __E_DeleteMulticastGroupFromInterface = static_cast<int64_t>(0x9800000b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IOControlCode_Unwrapped() const noexcept {
    return static_cast<__IOControlCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int64_t() const noexcept {
    return static_cast<int64_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IOControlCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr IOControlCode(int64_t value__) noexcept;

  /// @brief Field AbsorbRouterAlert value: I64(2550136837)
  static ::System::Net::Sockets::IOControlCode const AbsorbRouterAlert;

  /// @brief Field AddMulticastGroupOnInterface value: I64(2550136842)
  static ::System::Net::Sockets::IOControlCode const AddMulticastGroupOnInterface;

  /// @brief Field AddressListChange value: I64(671088663)
  static ::System::Net::Sockets::IOControlCode const AddressListChange;

  /// @brief Field AddressListQuery value: I64(1207959574)
  static ::System::Net::Sockets::IOControlCode const AddressListQuery;

  /// @brief Field AddressListSort value: I64(3355443225)
  static ::System::Net::Sockets::IOControlCode const AddressListSort;

  /// @brief Field AssociateHandle value: I64(2281701377)
  static ::System::Net::Sockets::IOControlCode const AssociateHandle;

  /// @brief Field AsyncIO value: I64(2147772029)
  static ::System::Net::Sockets::IOControlCode const AsyncIO;

  /// @brief Field BindToInterface value: I64(2550136840)
  static ::System::Net::Sockets::IOControlCode const BindToInterface;

  /// @brief Field DataToRead value: I64(1074030207)
  static ::System::Net::Sockets::IOControlCode const DataToRead;

  /// @brief Field DeleteMulticastGroupFromInterface value: I64(2550136843)
  static ::System::Net::Sockets::IOControlCode const DeleteMulticastGroupFromInterface;

  /// @brief Field EnableCircularQueuing value: I64(671088642)
  static ::System::Net::Sockets::IOControlCode const EnableCircularQueuing;

  /// @brief Field Flush value: I64(671088644)
  static ::System::Net::Sockets::IOControlCode const Flush;

  /// @brief Field GetBroadcastAddress value: I64(1207959557)
  static ::System::Net::Sockets::IOControlCode const GetBroadcastAddress;

  /// @brief Field GetExtensionFunctionPointer value: I64(3355443206)
  static ::System::Net::Sockets::IOControlCode const GetExtensionFunctionPointer;

  /// @brief Field GetGroupQos value: I64(3355443208)
  static ::System::Net::Sockets::IOControlCode const GetGroupQos;

  /// @brief Field GetQos value: I64(3355443207)
  static ::System::Net::Sockets::IOControlCode const GetQos;

  /// @brief Field KeepAliveValues value: I64(2550136836)
  static ::System::Net::Sockets::IOControlCode const KeepAliveValues;

  /// @brief Field LimitBroadcasts value: I64(2550136839)
  static ::System::Net::Sockets::IOControlCode const LimitBroadcasts;

  /// @brief Field MulticastInterface value: I64(2550136841)
  static ::System::Net::Sockets::IOControlCode const MulticastInterface;

  /// @brief Field MulticastScope value: I64(2281701386)
  static ::System::Net::Sockets::IOControlCode const MulticastScope;

  /// @brief Field MultipointLoopback value: I64(2281701385)
  static ::System::Net::Sockets::IOControlCode const MultipointLoopback;

  /// @brief Field NamespaceChange value: I64(2281701401)
  static ::System::Net::Sockets::IOControlCode const NamespaceChange;

  /// @brief Field NonBlockingIO value: I64(2147772030)
  static ::System::Net::Sockets::IOControlCode const NonBlockingIO;

  /// @brief Field OobDataRead value: I64(1074033415)
  static ::System::Net::Sockets::IOControlCode const OobDataRead;

  /// @brief Field QueryTargetPnpHandle value: I64(1207959576)
  static ::System::Net::Sockets::IOControlCode const QueryTargetPnpHandle;

  /// @brief Field ReceiveAll value: I64(2550136833)
  static ::System::Net::Sockets::IOControlCode const ReceiveAll;

  /// @brief Field ReceiveAllIgmpMulticast value: I64(2550136835)
  static ::System::Net::Sockets::IOControlCode const ReceiveAllIgmpMulticast;

  /// @brief Field ReceiveAllMulticast value: I64(2550136834)
  static ::System::Net::Sockets::IOControlCode const ReceiveAllMulticast;

  /// @brief Field RoutingInterfaceChange value: I64(2281701397)
  static ::System::Net::Sockets::IOControlCode const RoutingInterfaceChange;

  /// @brief Field RoutingInterfaceQuery value: I64(3355443220)
  static ::System::Net::Sockets::IOControlCode const RoutingInterfaceQuery;

  /// @brief Field SetGroupQos value: I64(2281701388)
  static ::System::Net::Sockets::IOControlCode const SetGroupQos;

  /// @brief Field SetQos value: I64(2281701387)
  static ::System::Net::Sockets::IOControlCode const SetQos;

  /// @brief Field TranslateHandle value: I64(3355443213)
  static ::System::Net::Sockets::IOControlCode const TranslateHandle;

  /// @brief Field UnicastInterface value: I64(2550136838)
  static ::System::Net::Sockets::IOControlCode const UnicastInterface;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11734 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  int64_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::IOControlCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::IOControlCode, 0x8>, "Size mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::IOControlCode, "System.Net.Sockets", "IOControlCode");

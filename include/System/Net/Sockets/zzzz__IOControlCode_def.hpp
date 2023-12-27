#pragma once
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
// Type: System.Net.Sockets::IOControlCode
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9338))
// CS Name: ::System.Net.Sockets::IOControlCode
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr IOControlCode(int64_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IOControlCode();

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  int64_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field AsyncIO value: static_cast<int64_t>(0x8004667d)
  static ::System::Net::Sockets::IOControlCode const AsyncIO;

  /// @brief Field NonBlockingIO value: static_cast<int64_t>(0x8004667e)
  static ::System::Net::Sockets::IOControlCode const NonBlockingIO;

  /// @brief Field DataToRead value: static_cast<int64_t>(0x4004667f)
  static ::System::Net::Sockets::IOControlCode const DataToRead;

  /// @brief Field OobDataRead value: static_cast<int64_t>(0x40047307)
  static ::System::Net::Sockets::IOControlCode const OobDataRead;

  /// @brief Field AssociateHandle value: static_cast<int64_t>(0x88000001)
  static ::System::Net::Sockets::IOControlCode const AssociateHandle;

  /// @brief Field EnableCircularQueuing value: static_cast<int64_t>(0x28000002)
  static ::System::Net::Sockets::IOControlCode const EnableCircularQueuing;

  /// @brief Field Flush value: static_cast<int64_t>(0x28000004)
  static ::System::Net::Sockets::IOControlCode const Flush;

  /// @brief Field GetBroadcastAddress value: static_cast<int64_t>(0x48000005)
  static ::System::Net::Sockets::IOControlCode const GetBroadcastAddress;

  /// @brief Field GetExtensionFunctionPointer value: static_cast<int64_t>(0xc8000006)
  static ::System::Net::Sockets::IOControlCode const GetExtensionFunctionPointer;

  /// @brief Field GetQos value: static_cast<int64_t>(0xc8000007)
  static ::System::Net::Sockets::IOControlCode const GetQos;

  /// @brief Field GetGroupQos value: static_cast<int64_t>(0xc8000008)
  static ::System::Net::Sockets::IOControlCode const GetGroupQos;

  /// @brief Field MultipointLoopback value: static_cast<int64_t>(0x88000009)
  static ::System::Net::Sockets::IOControlCode const MultipointLoopback;

  /// @brief Field MulticastScope value: static_cast<int64_t>(0x8800000a)
  static ::System::Net::Sockets::IOControlCode const MulticastScope;

  /// @brief Field SetQos value: static_cast<int64_t>(0x8800000b)
  static ::System::Net::Sockets::IOControlCode const SetQos;

  /// @brief Field SetGroupQos value: static_cast<int64_t>(0x8800000c)
  static ::System::Net::Sockets::IOControlCode const SetGroupQos;

  /// @brief Field TranslateHandle value: static_cast<int64_t>(0xc800000d)
  static ::System::Net::Sockets::IOControlCode const TranslateHandle;

  /// @brief Field RoutingInterfaceQuery value: static_cast<int64_t>(0xc8000014)
  static ::System::Net::Sockets::IOControlCode const RoutingInterfaceQuery;

  /// @brief Field RoutingInterfaceChange value: static_cast<int64_t>(0x88000015)
  static ::System::Net::Sockets::IOControlCode const RoutingInterfaceChange;

  /// @brief Field AddressListQuery value: static_cast<int64_t>(0x48000016)
  static ::System::Net::Sockets::IOControlCode const AddressListQuery;

  /// @brief Field AddressListChange value: static_cast<int64_t>(0x28000017)
  static ::System::Net::Sockets::IOControlCode const AddressListChange;

  /// @brief Field QueryTargetPnpHandle value: static_cast<int64_t>(0x48000018)
  static ::System::Net::Sockets::IOControlCode const QueryTargetPnpHandle;

  /// @brief Field NamespaceChange value: static_cast<int64_t>(0x88000019)
  static ::System::Net::Sockets::IOControlCode const NamespaceChange;

  /// @brief Field AddressListSort value: static_cast<int64_t>(0xc8000019)
  static ::System::Net::Sockets::IOControlCode const AddressListSort;

  /// @brief Field ReceiveAll value: static_cast<int64_t>(0x98000001)
  static ::System::Net::Sockets::IOControlCode const ReceiveAll;

  /// @brief Field ReceiveAllMulticast value: static_cast<int64_t>(0x98000002)
  static ::System::Net::Sockets::IOControlCode const ReceiveAllMulticast;

  /// @brief Field ReceiveAllIgmpMulticast value: static_cast<int64_t>(0x98000003)
  static ::System::Net::Sockets::IOControlCode const ReceiveAllIgmpMulticast;

  /// @brief Field KeepAliveValues value: static_cast<int64_t>(0x98000004)
  static ::System::Net::Sockets::IOControlCode const KeepAliveValues;

  /// @brief Field AbsorbRouterAlert value: static_cast<int64_t>(0x98000005)
  static ::System::Net::Sockets::IOControlCode const AbsorbRouterAlert;

  /// @brief Field UnicastInterface value: static_cast<int64_t>(0x98000006)
  static ::System::Net::Sockets::IOControlCode const UnicastInterface;

  /// @brief Field LimitBroadcasts value: static_cast<int64_t>(0x98000007)
  static ::System::Net::Sockets::IOControlCode const LimitBroadcasts;

  /// @brief Field BindToInterface value: static_cast<int64_t>(0x98000008)
  static ::System::Net::Sockets::IOControlCode const BindToInterface;

  /// @brief Field MulticastInterface value: static_cast<int64_t>(0x98000009)
  static ::System::Net::Sockets::IOControlCode const MulticastInterface;

  /// @brief Field AddMulticastGroupOnInterface value: static_cast<int64_t>(0x9800000a)
  static ::System::Net::Sockets::IOControlCode const AddMulticastGroupOnInterface;

  /// @brief Field DeleteMulticastGroupFromInterface value: static_cast<int64_t>(0x9800000b)
  static ::System::Net::Sockets::IOControlCode const DeleteMulticastGroupFromInterface;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::IOControlCode, 0x8>, "Size mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::IOControlCode, "System.Net.Sockets", "IOControlCode");

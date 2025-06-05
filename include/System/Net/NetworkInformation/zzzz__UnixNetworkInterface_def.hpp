#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnixNetworkInterface.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceType_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnixNetworkInterface)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
namespace System::Net::NetworkInformation {
struct NetworkInterfaceType;
}
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixNetworkInterface;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnixNetworkInterface);
// Dependencies System.Net.NetworkInformation.NetworkInterface, System.Net.NetworkInformation.NetworkInterfaceType
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.UnixNetworkInterface
class CORDL_TYPE UnixNetworkInterface : public ::System::Net::NetworkInformation::NetworkInterface {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NetworkInterfaceType)) ::System::Net::NetworkInformation::NetworkInterfaceType NetworkInterfaceType;

  /// @brief Field addresses, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_addresses, put = __cordl_internal_set_addresses)) ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses;

  /// @brief Field ipproperties, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ipproperties, put = __cordl_internal_set_ipproperties)) ::System::Net::NetworkInformation::IPInterfaceProperties* ipproperties;

  /// @brief Field macAddress, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_macAddress, put = __cordl_internal_set_macAddress)) ::ArrayW<uint8_t, ::Array<uint8_t>*> macAddress;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field type, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Net::NetworkInformation::NetworkInterfaceType type;

  /// @brief Method AddAddress, addr 0x43eba9c, size 0xa4, virtual false, abstract: false, final false
  inline void AddAddress(::System::Net::IPAddress* address);

  static inline ::System::Net::NetworkInformation::UnixNetworkInterface* New_ctor(::StringW name);

  /// @brief Method SetLinkLayerInfo, addr 0x43ebb40, size 0xc, virtual false, abstract: false, final false
  inline void SetLinkLayerInfo(int32_t index, ::ArrayW<uint8_t, ::Array<uint8_t>*> macAddress, ::System::Net::NetworkInformation::NetworkInterfaceType type);

  constexpr ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* const& __cordl_internal_get_addresses() const;

  constexpr ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*& __cordl_internal_get_addresses();

  constexpr ::System::Net::NetworkInformation::IPInterfaceProperties* const& __cordl_internal_get_ipproperties() const;

  constexpr ::System::Net::NetworkInformation::IPInterfaceProperties*& __cordl_internal_get_ipproperties();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_macAddress() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_macAddress();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Net::NetworkInformation::NetworkInterfaceType const& __cordl_internal_get_type() const;

  constexpr ::System::Net::NetworkInformation::NetworkInterfaceType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_addresses(::System::Collections::Generic::List_1<::System::Net::IPAddress*>* value);

  constexpr void __cordl_internal_set_ipproperties(::System::Net::NetworkInformation::IPInterfaceProperties* value);

  constexpr void __cordl_internal_set_macAddress(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_type(::System::Net::NetworkInformation::NetworkInterfaceType value);

  /// @brief Method .ctor, addr 0x43ebb5c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_Name, addr 0x43eee54, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NetworkInterfaceType, addr 0x43eee5c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnixNetworkInterface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnixNetworkInterface(UnixNetworkInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnixNetworkInterface(UnixNetworkInterface const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9813 };

  /// @brief Field ipproperties, offset: 0x10, size: 0x8, def value: None
  ::System::Net::NetworkInformation::IPInterfaceProperties* ___ipproperties;

  /// @brief Field name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field addresses, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* ___addresses;

  /// @brief Field macAddress, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___macAddress;

  /// @brief Field type, offset: 0x30, size: 0x4, def value: None
  ::System::Net::NetworkInformation::NetworkInterfaceType ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::UnixNetworkInterface, ___ipproperties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::UnixNetworkInterface, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::UnixNetworkInterface, ___addresses) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::UnixNetworkInterface, ___macAddress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::UnixNetworkInterface, ___type) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixNetworkInterface, 0x38>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixNetworkInterface*, "System.Net.NetworkInformation", "UnixNetworkInterface");

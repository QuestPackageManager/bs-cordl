#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/LinuxNetworkInterface.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LinuxNetworkInterface)
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
namespace System::Net::NetworkInformation {
struct OperationalStatus;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class LinuxNetworkInterface;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::LinuxNetworkInterface);
// Type: System.Net.NetworkInformation::LinuxNetworkInterface
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::LinuxNetworkInterface*
class CORDL_TYPE LinuxNetworkInterface : public ::System::Net::NetworkInformation::UnixNetworkInterface {
public:
  // Declarations
  __declspec(property(get = get_IfacePath)) ::StringW IfacePath;

  __declspec(property(get = get_OperationalStatus)) ::System::Net::NetworkInformation::OperationalStatus OperationalStatus;

  /// @brief Field iface_flags_path, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_iface_flags_path, put = __cordl_internal_set_iface_flags_path)) ::StringW iface_flags_path;

  /// @brief Field iface_operstate_path, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_iface_operstate_path, put = __cordl_internal_set_iface_operstate_path)) ::StringW iface_operstate_path;

  /// @brief Field iface_path, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_iface_path, put = __cordl_internal_set_iface_path)) ::StringW iface_path;

  /// @brief Method GetIPProperties, addr 0x4375b98, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties();

  static inline ::System::Net::NetworkInformation::LinuxNetworkInterface* New_ctor(::StringW name);

  /// @brief Method ReadLine, addr 0x4375f34, size 0x2f4, virtual false, abstract: false, final false
  static inline ::StringW ReadLine(::StringW path);

  constexpr ::StringW const& __cordl_internal_get_iface_flags_path() const;

  constexpr ::StringW& __cordl_internal_get_iface_flags_path();

  constexpr ::StringW const& __cordl_internal_get_iface_operstate_path() const;

  constexpr ::StringW& __cordl_internal_get_iface_operstate_path();

  constexpr ::StringW const& __cordl_internal_get_iface_path() const;

  constexpr ::StringW& __cordl_internal_get_iface_path();

  constexpr void __cordl_internal_set_iface_flags_path(::StringW value);

  constexpr void __cordl_internal_set_iface_operstate_path(::StringW value);

  constexpr void __cordl_internal_set_iface_path(::StringW value);

  /// @brief Method .ctor, addr 0x4375aac, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_IfacePath, addr 0x4375b90, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IfacePath();

  /// @brief Method get_OperationalStatus, addr 0x4375c04, size 0x330, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus();

  /// @brief Method unitydroid_get_network_interface_up_state, addr 0x4375b8c, size 0x4, virtual false, abstract: false, final false
  static inline bool unitydroid_get_network_interface_up_state(::StringW ifname, ByRef<bool> is_up);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinuxNetworkInterface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinuxNetworkInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinuxNetworkInterface(LinuxNetworkInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinuxNetworkInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinuxNetworkInterface(LinuxNetworkInterface const&) = delete;

  /// @brief Field iface_path, offset: 0x38, size: 0x8, def value: None
  ::StringW ___iface_path;

  /// @brief Field iface_operstate_path, offset: 0x40, size: 0x8, def value: None
  ::StringW ___iface_operstate_path;

  /// @brief Field iface_flags_path, offset: 0x48, size: 0x8, def value: None
  ::StringW ___iface_flags_path;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9755 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::LinuxNetworkInterface, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::LinuxNetworkInterface, ___iface_path) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::LinuxNetworkInterface, ___iface_operstate_path) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::LinuxNetworkInterface, ___iface_flags_path) == 0x48, "Offset mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::LinuxNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::LinuxNetworkInterface*, "System.Net.NetworkInformation", "LinuxNetworkInterface");

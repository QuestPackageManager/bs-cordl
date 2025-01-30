#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/ifaddrs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__ifa_ifu_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifaddrs)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct ifaddrs;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::ifaddrs);
// Dependencies System.IntPtr, System.Net.NetworkInformation.ifa_ifu
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.ifaddrs
struct CORDL_TYPE ifaddrs {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ifaddrs();

  // Ctor Parameters [CppParam { name: "ifa_next", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "ifa_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "ifa_flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ifa_addr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "ifa_netmask", ty:
  // "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "ifa_ifu", ty: "::System::Net::NetworkInformation::ifa_ifu", modifiers: "", def_value: None }, CppParam { name: "ifa_data",
  // ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr ifaddrs(::System::IntPtr ifa_next, ::StringW ifa_name, uint32_t ifa_flags, ::System::IntPtr ifa_addr, ::System::IntPtr ifa_netmask, ::System::Net::NetworkInformation::ifa_ifu ifa_ifu,
                    ::System::IntPtr ifa_data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9790 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field ifa_next, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr ifa_next;

  /// @brief Field ifa_name, offset: 0x8, size: 0x8, def value: None
  ::StringW ifa_name;

  /// @brief Field ifa_flags, offset: 0x10, size: 0x4, def value: None
  uint32_t ifa_flags;

  /// @brief Field ifa_addr, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ifa_addr;

  /// @brief Field ifa_netmask, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr ifa_netmask;

  /// @brief Field ifa_ifu, offset: 0x28, size: 0x8, def value: None
  ::System::Net::NetworkInformation::ifa_ifu ifa_ifu;

  /// @brief Field ifa_data, offset: 0x30, size: 0x8, def value: None
  ::System::IntPtr ifa_data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::ifaddrs, ifa_next) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::ifaddrs, ifa_name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::ifaddrs, ifa_flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::ifaddrs, ifa_addr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::ifaddrs, ifa_netmask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::ifaddrs, ifa_ifu) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::ifaddrs, ifa_data) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::ifaddrs, 0x38>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::ifaddrs, "System.Net.NetworkInformation", "ifaddrs");

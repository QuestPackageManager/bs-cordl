#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__ifa_ifu_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifaddrs)
namespace System::Net::NetworkInformation {
struct ifa_ifu;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
struct ifaddrs;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::ifaddrs);
// Type: System.Net.NetworkInformation::ifaddrs
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9270)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9271))
// CS Name: ::System.Net.NetworkInformation::ifaddrs
struct CORDL_TYPE ifaddrs {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "ifa_next", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "ifa_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "ifa_flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ifa_addr", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "ifa_netmask", ty: "void*", modifiers:
  // "", def_value: None }, CppParam { name: "ifa_ifu", ty: "::System::Net::NetworkInformation::ifa_ifu", modifiers: "", def_value: None }, CppParam { name: "ifa_data", ty: "void*", modifiers: "",
  // def_value: None }]
  constexpr ifaddrs(void* ifa_next, ::StringW ifa_name, uint32_t ifa_flags, void* ifa_addr, void* ifa_netmask, ::System::Net::NetworkInformation::ifa_ifu ifa_ifu, void* ifa_data) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ifaddrs();

  /// @brief Field ifa_next, offset: 0x0, size: 0x8, def value: None
  void* ifa_next;

  /// @brief Field ifa_name, offset: 0x8, size: 0x8, def value: None
  ::StringW ifa_name;

  /// @brief Field ifa_flags, offset: 0x10, size: 0x4, def value: None
  uint32_t ifa_flags;

  /// @brief Field ifa_addr, offset: 0x18, size: 0x8, def value: None
  void* ifa_addr;

  /// @brief Field ifa_netmask, offset: 0x20, size: 0x8, def value: None
  void* ifa_netmask;

  /// @brief Field ifa_ifu, offset: 0x28, size: 0x8, def value: None
  ::System::Net::NetworkInformation::ifa_ifu ifa_ifu;

  /// @brief Field ifa_data, offset: 0x30, size: 0x8, def value: None
  void* ifa_data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::ifaddrs, 0x38>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::ifaddrs, "System.Net.NetworkInformation", "ifaddrs");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalProperties_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MibIPGlobalProperties)
// Forward declare root types
namespace System::Net::NetworkInformation {
class MibIPGlobalProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::MibIPGlobalProperties);
// Type: System.Net.NetworkInformation::MibIPGlobalProperties
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::MibIPGlobalProperties*
class CORDL_TYPE MibIPGlobalProperties : public ::System::Net::NetworkInformation::UnixIPGlobalProperties {
public:
  // Declarations
  /// @brief Field StatisticsFile, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_StatisticsFile, put = __cordl_internal_set_StatisticsFile))::StringW StatisticsFile;

  /// @brief Field StatisticsFileIPv6, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_StatisticsFileIPv6, put = __cordl_internal_set_StatisticsFileIPv6))::StringW StatisticsFileIPv6;

  /// @brief Field Tcp6File, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Tcp6File, put = __cordl_internal_set_Tcp6File))::StringW Tcp6File;

  /// @brief Field TcpFile, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_TcpFile, put = __cordl_internal_set_TcpFile))::StringW TcpFile;

  /// @brief Field Udp6File, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Udp6File, put = __cordl_internal_set_Udp6File))::StringW Udp6File;

  /// @brief Field UdpFile, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_UdpFile, put = __cordl_internal_set_UdpFile))::StringW UdpFile;

  /// @brief Field wsChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_wsChars, put = setStaticF_wsChars))::ArrayW<char16_t, ::Array<char16_t>*> wsChars;

  static inline ::System::Net::NetworkInformation::MibIPGlobalProperties* New_ctor(::StringW procDir);

  constexpr ::StringW const& __cordl_internal_get_StatisticsFile() const;

  constexpr ::StringW& __cordl_internal_get_StatisticsFile();

  constexpr ::StringW const& __cordl_internal_get_StatisticsFileIPv6() const;

  constexpr ::StringW& __cordl_internal_get_StatisticsFileIPv6();

  constexpr ::StringW const& __cordl_internal_get_Tcp6File() const;

  constexpr ::StringW& __cordl_internal_get_Tcp6File();

  constexpr ::StringW const& __cordl_internal_get_TcpFile() const;

  constexpr ::StringW& __cordl_internal_get_TcpFile();

  constexpr ::StringW const& __cordl_internal_get_Udp6File() const;

  constexpr ::StringW& __cordl_internal_get_Udp6File();

  constexpr ::StringW const& __cordl_internal_get_UdpFile() const;

  constexpr ::StringW& __cordl_internal_get_UdpFile();

  constexpr void __cordl_internal_set_StatisticsFile(::StringW value);

  constexpr void __cordl_internal_set_StatisticsFileIPv6(::StringW value);

  constexpr void __cordl_internal_set_Tcp6File(::StringW value);

  constexpr void __cordl_internal_set_TcpFile(::StringW value);

  constexpr void __cordl_internal_set_Udp6File(::StringW value);

  constexpr void __cordl_internal_set_UdpFile(::StringW value);

  /// @brief Method .ctor, addr 0x2f25ea4, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::StringW procDir);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_wsChars();

  static inline void setStaticF_wsChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MibIPGlobalProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MibIPGlobalProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MibIPGlobalProperties(MibIPGlobalProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MibIPGlobalProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MibIPGlobalProperties(MibIPGlobalProperties const&) = delete;

  /// @brief Field StatisticsFile, offset: 0x10, size: 0x8, def value: None
  ::StringW ___StatisticsFile;

  /// @brief Field StatisticsFileIPv6, offset: 0x18, size: 0x8, def value: None
  ::StringW ___StatisticsFileIPv6;

  /// @brief Field TcpFile, offset: 0x20, size: 0x8, def value: None
  ::StringW ___TcpFile;

  /// @brief Field Tcp6File, offset: 0x28, size: 0x8, def value: None
  ::StringW ___Tcp6File;

  /// @brief Field UdpFile, offset: 0x30, size: 0x8, def value: None
  ::StringW ___UdpFile;

  /// @brief Field Udp6File, offset: 0x38, size: 0x8, def value: None
  ::StringW ___Udp6File;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::MibIPGlobalProperties, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::MibIPGlobalProperties, ___StatisticsFile) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::MibIPGlobalProperties, ___StatisticsFileIPv6) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::MibIPGlobalProperties, ___TcpFile) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::MibIPGlobalProperties, ___Tcp6File) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::MibIPGlobalProperties, ___UdpFile) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::MibIPGlobalProperties, ___Udp6File) == 0x38, "Offset mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::MibIPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MibIPGlobalProperties*, "System.Net.NetworkInformation", "MibIPGlobalProperties");

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9286))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9288))
// CS Name: ::System.Net.NetworkInformation::MibIPGlobalProperties*
class CORDL_TYPE MibIPGlobalProperties : public ::System::Net::NetworkInformation::UnixIPGlobalProperties {
public:
  // Declarations
  /// @brief Field StatisticsFile, offset 0x10, size 0x8
  __declspec(property(get = __get_StatisticsFile, put = __set_StatisticsFile))::StringW StatisticsFile;

  /// @brief Field StatisticsFileIPv6, offset 0x18, size 0x8
  __declspec(property(get = __get_StatisticsFileIPv6, put = __set_StatisticsFileIPv6))::StringW StatisticsFileIPv6;

  /// @brief Field TcpFile, offset 0x20, size 0x8
  __declspec(property(get = __get_TcpFile, put = __set_TcpFile))::StringW TcpFile;

  /// @brief Field Tcp6File, offset 0x28, size 0x8
  __declspec(property(get = __get_Tcp6File, put = __set_Tcp6File))::StringW Tcp6File;

  /// @brief Field UdpFile, offset 0x30, size 0x8
  __declspec(property(get = __get_UdpFile, put = __set_UdpFile))::StringW UdpFile;

  /// @brief Field Udp6File, offset 0x38, size 0x8
  __declspec(property(get = __get_Udp6File, put = __set_Udp6File))::StringW Udp6File;

  /// @brief Field wsChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_wsChars, put = setStaticF_wsChars))::ArrayW<char16_t, ::Array<char16_t>*> wsChars;

  constexpr ::StringW& __get_StatisticsFile();

  constexpr ::StringW const& __get_StatisticsFile() const;

  constexpr void __set_StatisticsFile(::StringW value);

  constexpr ::StringW& __get_StatisticsFileIPv6();

  constexpr ::StringW const& __get_StatisticsFileIPv6() const;

  constexpr void __set_StatisticsFileIPv6(::StringW value);

  constexpr ::StringW& __get_TcpFile();

  constexpr ::StringW const& __get_TcpFile() const;

  constexpr void __set_TcpFile(::StringW value);

  constexpr ::StringW& __get_Tcp6File();

  constexpr ::StringW const& __get_Tcp6File() const;

  constexpr void __set_Tcp6File(::StringW value);

  constexpr ::StringW& __get_UdpFile();

  constexpr ::StringW const& __get_UdpFile() const;

  constexpr void __set_UdpFile(::StringW value);

  constexpr ::StringW& __get_Udp6File();

  constexpr ::StringW const& __get_Udp6File() const;

  constexpr void __set_Udp6File(::StringW value);

  static inline void setStaticF_wsChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_wsChars();

  static inline ::System::Net::NetworkInformation::MibIPGlobalProperties* New_ctor(::StringW procDir);

  /// @brief Method .ctor, addr 0x29f0648, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::StringW procDir);

  // Ctor Parameters [CppParam { name: "", ty: "MibIPGlobalProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MibIPGlobalProperties(MibIPGlobalProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MibIPGlobalProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MibIPGlobalProperties(MibIPGlobalProperties const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MibIPGlobalProperties();

public:
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

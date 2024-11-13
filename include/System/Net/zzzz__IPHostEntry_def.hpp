#pragma once
// IWYU pragma private; include "System/Net/IPHostEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IPHostEntry)
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net {
class IPHostEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::IPHostEntry);
// Type: System.Net::IPHostEntry
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::IPHostEntry*
class CORDL_TYPE IPHostEntry : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AddressList, put = set_AddressList)) ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> AddressList;

  __declspec(property(put = set_Aliases)) ::ArrayW<::StringW, ::Array<::StringW>*> Aliases;

  __declspec(property(get = get_HostName, put = set_HostName)) ::StringW HostName;

  /// @brief Field addressList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_addressList, put = __cordl_internal_set_addressList)) ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> addressList;

  /// @brief Field aliases, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_aliases, put = __cordl_internal_set_aliases)) ::ArrayW<::StringW, ::Array<::StringW>*> aliases;

  /// @brief Field hostName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hostName, put = __cordl_internal_set_hostName)) ::StringW hostName;

  /// @brief Field isTrustedHost, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isTrustedHost, put = __cordl_internal_set_isTrustedHost)) bool isTrustedHost;

  static inline ::System::Net::IPHostEntry* New_ctor();

  constexpr ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> const& __cordl_internal_get_addressList() const;

  constexpr ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>& __cordl_internal_get_addressList();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_aliases() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_aliases();

  constexpr ::StringW const& __cordl_internal_get_hostName() const;

  constexpr ::StringW& __cordl_internal_get_hostName();

  constexpr bool const& __cordl_internal_get_isTrustedHost() const;

  constexpr bool& __cordl_internal_get_isTrustedHost();

  constexpr void __cordl_internal_set_addressList(::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> value);

  constexpr void __cordl_internal_set_aliases(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_hostName(::StringW value);

  constexpr void __cordl_internal_set_isTrustedHost(bool value);

  /// @brief Method .ctor, addr 0x443e188, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AddressList, addr 0x443e178, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> get_AddressList();

  /// @brief Method get_HostName, addr 0x443e160, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_HostName();

  /// @brief Method set_AddressList, addr 0x443e180, size 0x8, virtual false, abstract: false, final false
  inline void set_AddressList(::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> value);

  /// @brief Method set_Aliases, addr 0x443e170, size 0x8, virtual false, abstract: false, final false
  inline void set_Aliases(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_HostName, addr 0x443e168, size 0x8, virtual false, abstract: false, final false
  inline void set_HostName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPHostEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IPHostEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPHostEntry(IPHostEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPHostEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPHostEntry(IPHostEntry const&) = delete;

  /// @brief Field hostName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___hostName;

  /// @brief Field aliases, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___aliases;

  /// @brief Field addressList, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> ___addressList;

  /// @brief Field isTrustedHost, offset: 0x28, size: 0x1, def value: None
  bool ___isTrustedHost;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9562 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::IPHostEntry, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Net::IPHostEntry, ___hostName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::IPHostEntry, ___aliases) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::IPHostEntry, ___addressList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::IPHostEntry, ___isTrustedHost) == 0x28, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::IPHostEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IPHostEntry*, "System.Net", "IPHostEntry");

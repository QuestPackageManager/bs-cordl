#pragma once
// IWYU pragma private; include "System/Net/Dns.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dns)
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPHostEntry;
}
namespace System::Net {
class __Dns__GetHostAddressesCallback;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class Dns;
}
namespace System::Net {
class __Dns__GetHostAddressesCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Dns);
MARK_REF_PTR_T(::System::Net::__Dns__GetHostAddressesCallback);
// Type: ::GetHostAddressesCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::Dns::GetHostAddressesCallback*
class CORDL_TYPE __Dns__GetHostAddressesCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x301240c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW hostName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3012538, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3012fec, size 0x14, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> Invoke(::StringW hostName);

  static inline ::System::Net::__Dns__GetHostAddressesCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3012338, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dns__GetHostAddressesCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Dns__GetHostAddressesCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dns__GetHostAddressesCallback(__Dns__GetHostAddressesCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dns__GetHostAddressesCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dns__GetHostAddressesCallback(__Dns__GetHostAddressesCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__Dns__GetHostAddressesCallback, 0x80>, "Size mismatch!");

} // namespace System::Net
// Type: System.Net::Dns
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::Dns*
class CORDL_TYPE Dns : public ::System::Object {
public:
  // Declarations
  using GetHostAddressesCallback = ::System::Net::__Dns__GetHostAddressesCallback;

  /// @brief Method BeginGetHostAddresses, addr 0x30121a8, size 0x190, virtual false, abstract: false, final false
  static inline ::System::IAsyncResult* BeginGetHostAddresses(::StringW hostNameOrAddress, ::System::AsyncCallback* requestCallback, ::System::Object* state);

  /// @brief Method EndGetHostAddresses, addr 0x301242c, size 0x10c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> EndGetHostAddresses(::System::IAsyncResult* asyncResult);

  /// @brief Method Error_11001, addr 0x3012550, size 0x6c, virtual false, abstract: false, final false
  static inline void Error_11001(::StringW hostName);

  /// @brief Method GetHostAddresses, addr 0x3012cc8, size 0x1dc, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> GetHostAddresses(::StringW hostNameOrAddress);

  /// @brief Method GetHostAddressesAsync, addr 0x3012ed0, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>* GetHostAddressesAsync(::StringW hostNameOrAddress);

  /// @brief Method GetHostByAddr_icall, addr 0x3012548, size 0x4, virtual false, abstract: false, final false
  static inline bool GetHostByAddr_icall(::StringW addr, ByRef<::StringW> h_name, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_aliases,
                                         ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_addr_list, int32_t hint);

  /// @brief Method GetHostByAddressFromString, addr 0x30128d0, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* GetHostByAddressFromString(::StringW address, bool parse);

  /// @brief Method GetHostByName, addr 0x3012bdc, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* GetHostByName(::StringW hostName);

  /// @brief Method GetHostByName_icall, addr 0x3012544, size 0x4, virtual false, abstract: false, final false
  static inline bool GetHostByName_icall(::StringW host, ByRef<::StringW> h_name, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_aliases,
                                         ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_addr_list, int32_t hint);

  /// @brief Method GetHostEntry, addr 0x3012b70, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* GetHostEntry(::System::Net::IPAddress* address);

  /// @brief Method GetHostEntry, addr 0x30129fc, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* GetHostEntry(::StringW hostNameOrAddress);

  /// @brief Method GetHostName, addr 0x3012ea4, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW GetHostName();

  /// @brief Method GetHostName_icall, addr 0x301254c, size 0x4, virtual false, abstract: false, final false
  static inline bool GetHostName_icall(ByRef<::StringW> h_name);

  /// @brief Method hostent_to_IPHostEntry, addr 0x30125bc, size 0x314, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* hostent_to_IPHostEntry(::StringW originalHostName, ::StringW h_name, ::ArrayW<::StringW, ::Array<::StringW>*> h_aliases,
                                                                   ::ArrayW<::StringW, ::Array<::StringW>*> h_addrlist);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dns();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dns", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dns(Dns&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dns", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dns(Dns const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Dns, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::Dns);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Dns*, "System.Net", "Dns");
NEED_NO_BOX(::System::Net::__Dns__GetHostAddressesCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__Dns__GetHostAddressesCallback*, "System.Net", "Dns/GetHostAddressesCallback");

#pragma once
// IWYU pragma private; include "System/Net/Dns.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dns)
namespace System::Net {
class Dns_GetHostAddressesCallback;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPHostEntry;
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
class Dns_GetHostAddressesCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Dns);
MARK_REF_PTR_T(::System::Net::Dns_GetHostAddressesCallback);
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Dns/GetHostAddressesCallback
class CORDL_TYPE Dns_GetHostAddressesCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x44c4154, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW hostName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x44c427c, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x44c4d20, size 0x14, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> Invoke(::StringW hostName);

  static inline ::System::Net::Dns_GetHostAddressesCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x44c40b8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dns_GetHostAddressesCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dns_GetHostAddressesCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dns_GetHostAddressesCallback(Dns_GetHostAddressesCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dns_GetHostAddressesCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dns_GetHostAddressesCallback(Dns_GetHostAddressesCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9682 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Dns_GetHostAddressesCallback, 0x80>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Dns
class CORDL_TYPE Dns : public ::System::Object {
public:
  // Declarations
  using GetHostAddressesCallback = ::System::Net::Dns_GetHostAddressesCallback;

  /// @brief Method BeginGetHostAddresses, addr 0x44c3f30, size 0x188, virtual false, abstract: false, final false
  static inline ::System::IAsyncResult* BeginGetHostAddresses(::StringW hostNameOrAddress, ::System::AsyncCallback* requestCallback, ::System::Object* state);

  /// @brief Method EndGetHostAddresses, addr 0x44c4174, size 0x108, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> EndGetHostAddresses(::System::IAsyncResult* asyncResult);

  /// @brief Method Error_11001, addr 0x44c4294, size 0x64, virtual false, abstract: false, final false
  static inline void Error_11001(::StringW hostName);

  /// @brief Method GetHostAddresses, addr 0x44c4a04, size 0x1d4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> GetHostAddresses(::StringW hostNameOrAddress);

  /// @brief Method GetHostAddressesAsync, addr 0x44c4c04, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>* GetHostAddressesAsync(::StringW hostNameOrAddress);

  /// @brief Method GetHostByAddr_icall, addr 0x44c428c, size 0x4, virtual false, abstract: false, final false
  static inline bool GetHostByAddr_icall(::StringW addr, ::ByRef<::StringW> h_name, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_aliases,
                                         ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_addr_list, int32_t hint);

  /// @brief Method GetHostByAddressFromString, addr 0x44c461c, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* GetHostByAddressFromString(::StringW address, bool parse);

  /// @brief Method GetHostByName, addr 0x44c491c, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* GetHostByName(::StringW hostName);

  /// @brief Method GetHostByName_icall, addr 0x44c4288, size 0x4, virtual false, abstract: false, final false
  static inline bool GetHostByName_icall(::StringW host, ::ByRef<::StringW> h_name, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_aliases,
                                         ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_addr_list, int32_t hint);

  /// @brief Method GetHostEntry, addr 0x44c48b4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* GetHostEntry(::System::Net::IPAddress* address);

  /// @brief Method GetHostEntry, addr 0x44c4748, size 0x16c, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* GetHostEntry(::StringW hostNameOrAddress);

  /// @brief Method GetHostName, addr 0x44c4bd8, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW GetHostName();

  /// @brief Method GetHostName_icall, addr 0x44c4290, size 0x4, virtual false, abstract: false, final false
  static inline bool GetHostName_icall(::ByRef<::StringW> h_name);

  /// @brief Method hostent_to_IPHostEntry, addr 0x44c42f8, size 0x324, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9683 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Dns, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::Dns);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Dns*, "System.Net", "Dns");
NEED_NO_BOX(::System::Net::Dns_GetHostAddressesCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Dns_GetHostAddressesCallback*, "System.Net", "Dns/GetHostAddressesCallback");

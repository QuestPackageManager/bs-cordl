#pragma once
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
namespace System {
class AsyncCallback;
}
namespace System::Net {
class IPAddress;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System::Net {
class IPHostEntry;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Net {
class __Dns__GetHostAddressesCallback;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9162))
// CS Name: ::Dns::GetHostAddressesCallback*
class CORDL_TYPE __Dns__GetHostAddressesCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Net::__Dns__GetHostAddressesCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29bfaec, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x29c07a0, size 0x14, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> Invoke(::StringW hostName);

  /// @brief Method BeginInvoke, addr 0x29bfbc0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW hostName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29bfcec, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__Dns__GetHostAddressesCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dns__GetHostAddressesCallback(__Dns__GetHostAddressesCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dns__GetHostAddressesCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dns__GetHostAddressesCallback(__Dns__GetHostAddressesCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dns__GetHostAddressesCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__Dns__GetHostAddressesCallback, 0x80>, "Size mismatch!");

} // namespace System::Net
// Type: System.Net::Dns
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9163))
// CS Name: ::System.Net::Dns*
class CORDL_TYPE Dns : public ::System::Object {
public:
  // Declarations
  using GetHostAddressesCallback = ::System::Net::__Dns__GetHostAddressesCallback;

  /// @brief Method BeginGetHostAddresses, addr 0x29bf95c, size 0x190, virtual false, abstract: false, final false
  static inline ::System::IAsyncResult* BeginGetHostAddresses(::StringW hostNameOrAddress, ::System::AsyncCallback* requestCallback, ::System::Object* state);

  /// @brief Method EndGetHostAddresses, addr 0x29bfbe0, size 0x10c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> EndGetHostAddresses(::System::IAsyncResult* asyncResult);

  /// @brief Method GetHostByName_icall, addr 0x29bfcf8, size 0x4, virtual false, abstract: false, final false
  static inline bool GetHostByName_icall(::StringW host, ByRef<::StringW> h_name, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_aliases,
                                         ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_addr_list, int32_t hint);

  /// @brief Method GetHostByAddr_icall, addr 0x29bfcfc, size 0x4, virtual false, abstract: false, final false
  static inline bool GetHostByAddr_icall(::StringW addr, ByRef<::StringW> h_name, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_aliases,
                                         ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> h_addr_list, int32_t hint);

  /// @brief Method GetHostName_icall, addr 0x29bfd00, size 0x4, virtual false, abstract: false, final false
  static inline bool GetHostName_icall(ByRef<::StringW> h_name);

  /// @brief Method Error_11001, addr 0x29bfd04, size 0x6c, virtual false, abstract: false, final false
  static inline void Error_11001(::StringW hostName);

  /// @brief Method hostent_to_IPHostEntry, addr 0x29bfd70, size 0x314, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* hostent_to_IPHostEntry(::StringW originalHostName, ::StringW h_name, ::ArrayW<::StringW, ::Array<::StringW>*> h_aliases,
                                                                   ::ArrayW<::StringW, ::Array<::StringW>*> h_addrlist);

  /// @brief Method GetHostByAddressFromString, addr 0x29c0084, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* GetHostByAddressFromString(::StringW address, bool parse);

  /// @brief Method GetHostEntry, addr 0x29c01b0, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* GetHostEntry(::StringW hostNameOrAddress);

  /// @brief Method GetHostEntry, addr 0x29c0324, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* GetHostEntry(::System::Net::IPAddress* address);

  /// @brief Method GetHostAddresses, addr 0x29c047c, size 0x1dc, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> GetHostAddresses(::StringW hostNameOrAddress);

  /// @brief Method GetHostByName, addr 0x29c0390, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* GetHostByName(::StringW hostName);

  /// @brief Method GetHostName, addr 0x29c0658, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW GetHostName();

  /// @brief Method GetHostAddressesAsync, addr 0x29c0684, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>* GetHostAddressesAsync(::StringW hostNameOrAddress);

  // Ctor Parameters [CppParam { name: "", ty: "Dns", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dns(Dns&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dns", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dns(Dns const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dns();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Dns, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::Dns);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Dns*, "System.Net", "Dns");
NEED_NO_BOX(::System::Net::__Dns__GetHostAddressesCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__Dns__GetHostAddressesCallback*, "System.Net", "Dns/GetHostAddressesCallback");

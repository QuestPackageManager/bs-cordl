#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetUtils)
namespace LiteNetLib {
struct LocalAddrType;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib {
class NetUtils;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetUtils);
// Type: LiteNetLib::NetUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::LiteNetLib::NetUtils*
class CORDL_TYPE NetUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field IpList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IpList, put = setStaticF_IpList))::System::Collections::Generic::List_1<::StringW>* IpList;

  /// @brief Method GetLocalIp, addr 0x25e0334, size 0x21c, virtual false, abstract: false, final false
  static inline ::StringW GetLocalIp(::LiteNetLib::LocalAddrType addrType);

  /// @brief Method GetLocalIpList, addr 0x25eaf6c, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetLocalIpList(::LiteNetLib::LocalAddrType addrType);

  /// @brief Method GetLocalIpList, addr 0x25eb010, size 0x84c, virtual false, abstract: false, final false
  static inline void GetLocalIpList(::System::Collections::Generic::IList_1<::StringW>* targetList, ::LiteNetLib::LocalAddrType addrType);

  /// @brief Method MakeEndPoint, addr 0x25e0170, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Net::IPEndPoint* MakeEndPoint(::StringW hostStr, int32_t port);

  /// @brief Method PrintInterfaceInfos, addr 0x25eb85c, size 0x41c, virtual false, abstract: false, final false
  static inline void PrintInterfaceInfos();

  /// @brief Method RelativeSequenceNumber, addr 0x25e9a8c, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t RelativeSequenceNumber(int32_t number, int32_t expected);

  /// @brief Method ResolveAddress, addr 0x25e61d4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Net::IPAddress* ResolveAddress(::StringW hostStr);

  /// @brief Method ResolveAddress, addr 0x25eae80, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Net::IPAddress* ResolveAddress(::StringW hostStr, ::System::Net::Sockets::AddressFamily addressFamily);

  /// @brief Method ResolveAddresses, addr 0x25eaf4c, size 0x20, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> ResolveAddresses(::StringW hostStr);

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_IpList();

  static inline void setStaticF_IpList(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetUtils(NetUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetUtils(NetUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetUtils, 0x10>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetUtils);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetUtils*, "LiteNetLib", "NetUtils");

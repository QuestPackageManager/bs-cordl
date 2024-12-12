#pragma once
// IWYU pragma private; include "System/Net/IPEndPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPEndPoint)
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net {
class EndPoint;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class SocketAddress;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class IPEndPoint;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::IPEndPoint);
// Dependencies System.Net.EndPoint
namespace System::Net {
// Is value type: false
// CS Name: System.Net.IPEndPoint
class CORDL_TYPE IPEndPoint : public ::System::Net::EndPoint {
public:
  // Declarations
  __declspec(property(get = get_Address)) ::System::Net::IPAddress* Address;

  __declspec(property(get = get_AddressFamily)) ::System::Net::Sockets::AddressFamily AddressFamily;

  /// @brief Field Any, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Any, put = setStaticF_Any)) ::System::Net::IPEndPoint* Any;

  /// @brief Field IPv6Any, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IPv6Any, put = setStaticF_IPv6Any)) ::System::Net::IPEndPoint* IPv6Any;

  __declspec(property(get = get_Port)) int32_t Port;

  /// @brief Field _address, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__address, put = __cordl_internal_set__address)) ::System::Net::IPAddress* _address;

  /// @brief Field _port, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__port, put = __cordl_internal_set__port)) int32_t _port;

  /// @brief Method Create, addr 0x448d704, size 0x1f0, virtual true, abstract: false, final false
  inline ::System::Net::EndPoint* Create(::System::Net::SocketAddress* socketAddress);

  /// @brief Method Equals, addr 0x448d8f4, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* comparand);

  /// @brief Method GetHashCode, addr 0x448d9a8, size 0x30, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::IPEndPoint* New_ctor(::System::Net::IPAddress* address, int32_t port);

  /// @brief Method Serialize, addr 0x448d69c, size 0x68, virtual true, abstract: false, final false
  inline ::System::Net::SocketAddress* Serialize();

  /// @brief Method ToString, addr 0x448d5e0, size 0xbc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Net::IPAddress* const& __cordl_internal_get__address() const;

  constexpr ::System::Net::IPAddress*& __cordl_internal_get__address();

  constexpr int32_t const& __cordl_internal_get__port() const;

  constexpr int32_t& __cordl_internal_get__port();

  constexpr void __cordl_internal_set__address(::System::Net::IPAddress* value);

  constexpr void __cordl_internal_set__port(int32_t value);

  /// @brief Method .ctor, addr 0x448d518, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::IPAddress* address, int32_t port);

  static inline ::System::Net::IPEndPoint* getStaticF_Any();

  static inline ::System::Net::IPEndPoint* getStaticF_IPv6Any();

  /// @brief Method get_Address, addr 0x448d5d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::IPAddress* get_Address();

  /// @brief Method get_AddressFamily, addr 0x448d4ec, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Net::Sockets::AddressFamily get_AddressFamily();

  /// @brief Method get_Port, addr 0x448d5d8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Port();

  static inline void setStaticF_Any(::System::Net::IPEndPoint* value);

  static inline void setStaticF_IPv6Any(::System::Net::IPEndPoint* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPEndPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IPEndPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPEndPoint(IPEndPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPEndPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPEndPoint(IPEndPoint const&) = delete;

  /// @brief Field AnyPort offset 0xffffffff size 0x4
  static constexpr int32_t AnyPort{ static_cast<int32_t>(0x0) };

  /// @brief Field MaxPort offset 0xffffffff size 0x4
  static constexpr int32_t MaxPort{ static_cast<int32_t>(0xffff) };

  /// @brief Field MinPort offset 0xffffffff size 0x4
  static constexpr int32_t MinPort{ static_cast<int32_t>(0x0) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9548 };

  /// @brief Field _address, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IPAddress* ____address;

  /// @brief Field _port, offset: 0x18, size: 0x4, def value: None
  int32_t ____port;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::IPEndPoint, ____address) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::IPEndPoint, ____port) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::IPEndPoint, 0x20>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::IPEndPoint);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IPEndPoint*, "System.Net", "IPEndPoint");

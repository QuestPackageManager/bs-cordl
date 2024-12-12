#pragma once
// IWYU pragma private; include "System/Net/EndPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EndPoint)
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net {
class SocketAddress;
}
// Forward declare root types
namespace System::Net {
class EndPoint;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::EndPoint);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.EndPoint
class CORDL_TYPE EndPoint : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AddressFamily)) ::System::Net::Sockets::AddressFamily AddressFamily;

  /// @brief Method Create, addr 0x449d5d0, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::EndPoint* Create(::System::Net::SocketAddress* socketAddress);

  static inline ::System::Net::EndPoint* New_ctor();

  /// @brief Method Serialize, addr 0x449d52c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::SocketAddress* Serialize();

  /// @brief Method .ctor, addr 0x449d5f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AddressFamily, addr 0x449d488, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::Sockets::AddressFamily get_AddressFamily();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndPoint(EndPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndPoint(EndPoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9577 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::EndPoint, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::EndPoint);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::EndPoint*, "System.Net", "EndPoint");

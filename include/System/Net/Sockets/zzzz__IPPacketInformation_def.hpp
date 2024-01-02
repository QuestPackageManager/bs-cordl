#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IPPacketInformation)
namespace System {
class Object;
}
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::Sockets {
struct IPPacketInformation;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::IPPacketInformation);
// Type: System.Net.Sockets::IPPacketInformation
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9339))
// CS Name: ::System.Net.Sockets::IPPacketInformation
struct CORDL_TYPE IPPacketInformation {
public:
  // Declarations
  /// @brief Method Equals, addr 0x28fc550, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* comparand);

  /// @brief Method GetHashCode, addr 0x28fc5ec, size 0x44, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "address", ty: "::System::Net::IPAddress*", modifiers: "", def_value: None }, CppParam { name: "networkInterface", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr IPPacketInformation(::System::Net::IPAddress* address, int32_t networkInterface) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IPPacketInformation();

  /// @brief Field address, offset: 0x0, size: 0x8, def value: None
  ::System::Net::IPAddress* address;

  /// @brief Field networkInterface, offset: 0x8, size: 0x4, def value: None
  int32_t networkInterface;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::IPPacketInformation, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::IPPacketInformation, address) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::IPPacketInformation, networkInterface) == 0x8, "Offset mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::IPPacketInformation, "System.Net.Sockets", "IPPacketInformation");

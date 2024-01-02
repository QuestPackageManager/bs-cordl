#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__DisconnectReason_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DisconnectInfo)
namespace System::Net::Sockets {
struct SocketError;
}
namespace LiteNetLib {
class NetPacketReader;
}
namespace LiteNetLib {
struct DisconnectReason;
}
// Forward declare root types
namespace LiteNetLib {
struct DisconnectInfo;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::DisconnectInfo);
// Type: LiteNetLib::DisconnectInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14131)), TypeDefinitionIndex(TypeDefinitionIndex(9347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14132))
// CS Name: ::LiteNetLib::DisconnectInfo
struct CORDL_TYPE DisconnectInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Reason", ty: "::LiteNetLib::DisconnectReason", modifiers: "", def_value: None }, CppParam { name: "SocketErrorCode", ty: "::System::Net::Sockets::SocketError",
  // modifiers: "", def_value: None }, CppParam { name: "AdditionalData", ty: "::LiteNetLib::NetPacketReader*", modifiers: "", def_value: None }]
  constexpr DisconnectInfo(::LiteNetLib::DisconnectReason Reason, ::System::Net::Sockets::SocketError SocketErrorCode, ::LiteNetLib::NetPacketReader* AdditionalData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DisconnectInfo();

  /// @brief Field Reason, offset: 0x0, size: 0x4, def value: None
  ::LiteNetLib::DisconnectReason Reason;

  /// @brief Field SocketErrorCode, offset: 0x4, size: 0x4, def value: None
  ::System::Net::Sockets::SocketError SocketErrorCode;

  /// @brief Field AdditionalData, offset: 0x8, size: 0x8, def value: None
  ::LiteNetLib::NetPacketReader* AdditionalData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::DisconnectInfo, 0x10>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::DisconnectInfo, Reason) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::DisconnectInfo, SocketErrorCode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::DisconnectInfo, AdditionalData) == 0x8, "Offset mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::DisconnectInfo, "LiteNetLib", "DisconnectInfo");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(INetSocketListener)
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib {
class INetSocketListener;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::INetSocketListener);
// Type: LiteNetLib::INetSocketListener
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14179))
// CS Name: ::LiteNetLib::INetSocketListener*
class CORDL_TYPE INetSocketListener {
public:
  // Declarations
  /// @brief Method OnMessageReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnMessageReceived(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length, ::System::Net::Sockets::SocketError errorCode, ::System::Net::IPEndPoint* remoteEndPoint);

  // Ctor Parameters [CppParam { name: "", ty: "INetSocketListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INetSocketListener(INetSocketListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INetSocketListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetSocketListener(INetSocketListener const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::INetSocketListener);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::INetSocketListener*, "LiteNetLib", "INetSocketListener");

#pragma once
// IWYU pragma private; include "LiteNetLib/INetSocketListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
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
MARK_REF_T(::LiteNetLib::INetSocketListener*);
DEFINE_IL2CPP_CLASS(::LiteNetLib::INetSocketListener*, "LiteNetLib", "INetSocketListener");
// Dependencies
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.INetSocketListener
class CORDL_TYPE INetSocketListener {
public:
  // Declarations
  /// @brief Method OnMessageReceived, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnMessageReceived(::ArrayW<uint8_t> data, int32_t length, ::System::Net::Sockets::SocketError errorCode, ::System::Net::IPEndPoint* remoteEndPoint);

  // Ctor Parameters [CppParam { name: "", ty: "INetSocketListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetSocketListener(INetSocketListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20044 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib

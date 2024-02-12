#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PacketFreeCallback)
namespace ENet {
struct Packet;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ENet {
class PacketFreeCallback;
}
// Write type traits
MARK_REF_PTR_T(::ENet::PacketFreeCallback);
// Type: ENet::PacketFreeCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ENet {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15337))
// CS Name: ::ENet::PacketFreeCallback*
class CORDL_TYPE PacketFreeCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::ENet::PacketFreeCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2284988, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2284a4c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ENet::Packet packet);

  /// @brief Method BeginInvoke, addr 0x2284a60, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ENet::Packet packet, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2284ae4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "PacketFreeCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PacketFreeCallback(PacketFreeCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PacketFreeCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PacketFreeCallback(PacketFreeCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketFreeCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::PacketFreeCallback, 0x80>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::PacketFreeCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::PacketFreeCallback*, "ENet", "PacketFreeCallback");

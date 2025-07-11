#pragma once
// IWYU pragma private; include "ENet/PacketFreeCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
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
struct IntPtr;
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
// Dependencies System.MulticastDelegate
namespace ENet {
// Is value type: false
// CS Name: ENet.PacketFreeCallback
class CORDL_TYPE PacketFreeCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aa2754, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ENet::Packet packet, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aa27d8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aa2740, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ENet::Packet packet);

  static inline ::ENet::PacketFreeCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aa26b4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketFreeCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PacketFreeCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PacketFreeCallback(PacketFreeCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PacketFreeCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PacketFreeCallback(PacketFreeCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17748 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::PacketFreeCallback, 0x80>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::PacketFreeCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::PacketFreeCallback*, "ENet", "PacketFreeCallback");

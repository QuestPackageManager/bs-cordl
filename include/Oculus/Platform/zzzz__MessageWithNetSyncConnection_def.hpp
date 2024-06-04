#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithNetSyncConnection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithNetSyncConnection)
namespace Oculus::Platform::Models {
class NetSyncConnection;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncConnection;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithNetSyncConnection);
// Type: Oculus.Platform::MessageWithNetSyncConnection
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithNetSyncConnection*
class CORDL_TYPE MessageWithNetSyncConnection : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncConnection*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x2ae92a4, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncConnection* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetNetSyncConnection, addr 0x2ae9268, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncConnection* GetNetSyncConnection();

  static inline ::Oculus::Platform::MessageWithNetSyncConnection* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x2ae5c90, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithNetSyncConnection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithNetSyncConnection(MessageWithNetSyncConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithNetSyncConnection(MessageWithNetSyncConnection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithNetSyncConnection, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncConnection);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncConnection*, "Oculus.Platform", "MessageWithNetSyncConnection");

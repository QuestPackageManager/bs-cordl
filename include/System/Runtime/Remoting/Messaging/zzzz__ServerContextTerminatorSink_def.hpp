#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ServerContextTerminatorSink)
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ServerContextTerminatorSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ServerContextTerminatorSink);
// Type: System.Runtime.Remoting.Messaging::ServerContextTerminatorSink
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3187))
// CS Name: ::System.Runtime.Remoting.Messaging::ServerContextTerminatorSink*
class CORDL_TYPE ServerContextTerminatorSink : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept;

  /// @brief Method SyncProcessMessage, addr 0x24b3368, size 0x134, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method AsyncProcessMessage, addr 0x24b349c, size 0xe8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  static inline ::System::Runtime::Remoting::Messaging::ServerContextTerminatorSink* New_ctor();

  /// @brief Method .ctor, addr 0x24b3584, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ServerContextTerminatorSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerContextTerminatorSink(ServerContextTerminatorSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerContextTerminatorSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerContextTerminatorSink(ServerContextTerminatorSink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerContextTerminatorSink();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ServerContextTerminatorSink, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ServerContextTerminatorSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ServerContextTerminatorSink*, "System.Runtime.Remoting.Messaging", "ServerContextTerminatorSink");

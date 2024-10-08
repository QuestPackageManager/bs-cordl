#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMessageSink)
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::IMessageSink);
// Type: System.Runtime.Remoting.Messaging::IMessageSink
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::IMessageSink*
class CORDL_TYPE IMessageSink {
public:
  // Declarations
  /// @brief Method AsyncProcessMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  /// @brief Method SyncProcessMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  // Ctor Parameters [CppParam { name: "", ty: "IMessageSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMessageSink(IMessageSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMessageSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMessageSink(IMessageSink const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3169 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IMessageSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IMessageSink*, "System.Runtime.Remoting.Messaging", "IMessageSink");

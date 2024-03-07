#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncRequest)
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class AsyncRequest;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::AsyncRequest);
// Type: System.Runtime.Remoting.Channels::AsyncRequest
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Channels::AsyncRequest*
class CORDL_TYPE AsyncRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field MsgRequest, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_MsgRequest, put = __cordl_internal_set_MsgRequest))::System::Runtime::Remoting::Messaging::IMessage* MsgRequest;

  /// @brief Field ReplySink, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ReplySink, put = __cordl_internal_set_ReplySink))::System::Runtime::Remoting::Messaging::IMessageSink* ReplySink;

  static inline ::System::Runtime::Remoting::Channels::AsyncRequest* New_ctor(::System::Runtime::Remoting::Messaging::IMessage* msgRequest,
                                                                              ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  constexpr ::System::Runtime::Remoting::Messaging::IMessage*& __cordl_internal_get_MsgRequest();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessage*> const& __cordl_internal_get_MsgRequest() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __cordl_internal_get_ReplySink();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& __cordl_internal_get_ReplySink() const;

  constexpr void __cordl_internal_set_MsgRequest(::System::Runtime::Remoting::Messaging::IMessage* value);

  constexpr void __cordl_internal_set_ReplySink(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  /// @brief Method .ctor, addr 0x25fa268, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMessage* msgRequest, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncRequest(AsyncRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncRequest(AsyncRequest const&) = delete;

  /// @brief Field ReplySink, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ___ReplySink;

  /// @brief Field MsgRequest, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessage* ___MsgRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::AsyncRequest, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Channels::AsyncRequest, ___ReplySink) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Channels::AsyncRequest, ___MsgRequest) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::AsyncRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::AsyncRequest*, "System.Runtime.Remoting.Channels", "AsyncRequest");

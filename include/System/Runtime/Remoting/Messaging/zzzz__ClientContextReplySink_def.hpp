#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/ClientContextReplySink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ClientContextReplySink)
namespace System::Runtime::Remoting::Contexts {
class Context;
}
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
class ClientContextReplySink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ClientContextReplySink);
// Dependencies System.Object, System.Runtime.Remoting.Messaging.IMessageSink
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.ClientContextReplySink
class CORDL_TYPE ClientContextReplySink : public ::System::Object {
public:
  // Declarations
  /// @brief Field _context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context)) ::System::Runtime::Remoting::Contexts::Context* _context;

  /// @brief Field _replySink, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__replySink, put = __cordl_internal_set__replySink)) ::System::Runtime::Remoting::Messaging::IMessageSink* _replySink;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  /// @brief Method AsyncProcessMessage, addr 0x3cea9c8, size 0x38, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  static inline ::System::Runtime::Remoting::Messaging::ClientContextReplySink* New_ctor(::System::Runtime::Remoting::Contexts::Context* ctx,
                                                                                         ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  /// @brief Method SyncProcessMessage, addr 0x3cea8c4, size 0x104, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  constexpr ::System::Runtime::Remoting::Contexts::Context* const& __cordl_internal_get__context() const;

  constexpr ::System::Runtime::Remoting::Contexts::Context*& __cordl_internal_get__context();

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& __cordl_internal_get__replySink() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __cordl_internal_get__replySink();

  constexpr void __cordl_internal_set__context(::System::Runtime::Remoting::Contexts::Context* value);

  constexpr void __cordl_internal_set__replySink(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  /// @brief Method .ctor, addr 0x3cea898, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Contexts::Context* ctx, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientContextReplySink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClientContextReplySink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientContextReplySink(ClientContextReplySink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientContextReplySink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientContextReplySink(ClientContextReplySink const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3158 };

  /// @brief Field _replySink, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ____replySink;

  /// @brief Field _context, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::Context* ____context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Messaging::ClientContextReplySink, ____replySink) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ClientContextReplySink, ____context) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ClientContextReplySink, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ClientContextReplySink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ClientContextReplySink*, "System.Runtime.Remoting.Messaging", "ClientContextReplySink");

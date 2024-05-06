#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ClientContextTerminatorSink)
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
class ClientContextTerminatorSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink);
// Type: System.Runtime.Remoting.Messaging::ClientContextTerminatorSink
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::ClientContextTerminatorSink*
class CORDL_TYPE ClientContextTerminatorSink : public ::System::Object {
public:
  // Declarations
  /// @brief Field _context, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context))::System::Runtime::Remoting::Contexts::Context* _context;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  /// @brief Method AsyncProcessMessage, addr 0x282ae48, size 0x224, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  static inline ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink* New_ctor(::System::Runtime::Remoting::Contexts::Context* ctx);

  /// @brief Method SyncProcessMessage, addr 0x282ac74, size 0x1d4, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  constexpr ::System::Runtime::Remoting::Contexts::Context*& __cordl_internal_get__context();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::Context*> const& __cordl_internal_get__context() const;

  constexpr void __cordl_internal_set__context(::System::Runtime::Remoting::Contexts::Context* value);

  /// @brief Method .ctor, addr 0x281f09c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Contexts::Context* ctx);

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientContextTerminatorSink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClientContextTerminatorSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientContextTerminatorSink(ClientContextTerminatorSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientContextTerminatorSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientContextTerminatorSink(ClientContextTerminatorSink const&) = delete;

  /// @brief Field _context, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::Context* ____context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink, ____context) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink*, "System.Runtime.Remoting.Messaging", "ClientContextTerminatorSink");

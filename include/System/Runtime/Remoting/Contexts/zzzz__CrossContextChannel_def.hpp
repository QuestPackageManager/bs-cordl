#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CrossContextChannel)
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Contexts {
class __CrossContextChannel__ContextRestoreSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class CrossContextChannel;
}
namespace System::Runtime::Remoting::Contexts {
class __CrossContextChannel__ContextRestoreSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::CrossContextChannel);
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::__CrossContextChannel__ContextRestoreSink);
// Type: ::ContextRestoreSink
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3102))
// CS Name: ::CrossContextChannel::ContextRestoreSink*
class CORDL_TYPE __CrossContextChannel__ContextRestoreSink : public ::System::Object {
public:
  // Declarations
  /// @brief Field _next, offset 0x10, size 0x8
  __declspec(property(get = __get__next, put = __set__next))::System::Runtime::Remoting::Messaging::IMessageSink* _next;

  /// @brief Field _context, offset 0x18, size 0x8
  __declspec(property(get = __get__context, put = __set__context))::System::Runtime::Remoting::Contexts::Context* _context;

  /// @brief Field _call, offset 0x20, size 0x8
  __declspec(property(get = __get__call, put = __set__call))::System::Runtime::Remoting::Messaging::IMessage* _call;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __get__next();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& __get__next() const;

  constexpr void __set__next(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  constexpr ::System::Runtime::Remoting::Contexts::Context*& __get__context();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::Context*> const& __get__context() const;

  constexpr void __set__context(::System::Runtime::Remoting::Contexts::Context* value);

  constexpr ::System::Runtime::Remoting::Messaging::IMessage*& __get__call();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessage*> const& __get__call() const;

  constexpr void __set__call(::System::Runtime::Remoting::Messaging::IMessage* value);

  static inline ::System::Runtime::Remoting::Contexts::__CrossContextChannel__ContextRestoreSink*
  New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* next, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Runtime::Remoting::Messaging::IMessage* call);

  /// @brief Method .ctor addr 0x249f73c size 0x3c virtual false final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* next, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Runtime::Remoting::Messaging::IMessage* call);

  /// @brief Method SyncProcessMessage addr 0x249f780 size 0x2c0 virtual true final true
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method AsyncProcessMessage addr 0x249fa40 size 0x40 virtual true final true
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  // Ctor Parameters [CppParam { name: "", ty: "__CrossContextChannel__ContextRestoreSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CrossContextChannel__ContextRestoreSink(__CrossContextChannel__ContextRestoreSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CrossContextChannel__ContextRestoreSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CrossContextChannel__ContextRestoreSink(__CrossContextChannel__ContextRestoreSink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CrossContextChannel__ContextRestoreSink();

public:
  /// @brief Field _next, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ____next;

  /// @brief Field _context, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::Context* ____context;

  /// @brief Field _call, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessage* ____call;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Contexts::__CrossContextChannel__ContextRestoreSink, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Contexts
// Type: System.Runtime.Remoting.Contexts::CrossContextChannel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3103))
// CS Name: ::System.Runtime.Remoting.Contexts::CrossContextChannel*
class CORDL_TYPE CrossContextChannel : public ::System::Object {
public:
  // Declarations
  using ContextRestoreSink = ::System::Runtime::Remoting::Contexts::__CrossContextChannel__ContextRestoreSink;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  /// @brief Method SyncProcessMessage addr 0x249ef04 size 0x3ec virtual true final true
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method AsyncProcessMessage addr 0x249f2f0 size 0x44c virtual true final true
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  static inline ::System::Runtime::Remoting::Contexts::CrossContextChannel* New_ctor();

  /// @brief Method .ctor addr 0x249f778 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CrossContextChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrossContextChannel(CrossContextChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrossContextChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrossContextChannel(CrossContextChannel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrossContextChannel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Contexts::CrossContextChannel, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::CrossContextChannel);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::CrossContextChannel*, "System.Runtime.Remoting.Contexts", "CrossContextChannel");
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::__CrossContextChannel__ContextRestoreSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::__CrossContextChannel__ContextRestoreSink*, "System.Runtime.Remoting.Contexts", "CrossContextChannel/ContextRestoreSink");

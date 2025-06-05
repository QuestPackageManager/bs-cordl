#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/CrossContextChannel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CrossContextChannel)
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Contexts {
class CrossContextChannel_ContextRestoreSink;
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
namespace System::Runtime::Remoting::Contexts {
class CrossContextChannel;
}
namespace System::Runtime::Remoting::Contexts {
class CrossContextChannel_ContextRestoreSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::CrossContextChannel);
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::CrossContextChannel_ContextRestoreSink);
// Dependencies System.Object, System.Runtime.Remoting.Messaging.IMessageSink
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: System.Runtime.Remoting.Contexts.CrossContextChannel/ContextRestoreSink
class CORDL_TYPE CrossContextChannel_ContextRestoreSink : public ::System::Object {
public:
  // Declarations
  /// @brief Field _call, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__call, put = __cordl_internal_set__call)) ::System::Runtime::Remoting::Messaging::IMessage* _call;

  /// @brief Field _context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context)) ::System::Runtime::Remoting::Contexts::Context* _context;

  /// @brief Field _next, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next)) ::System::Runtime::Remoting::Messaging::IMessageSink* _next;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  /// @brief Method AsyncProcessMessage, addr 0x3ce089c, size 0x38, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  static inline ::System::Runtime::Remoting::Contexts::CrossContextChannel_ContextRestoreSink*
  New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* next, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Runtime::Remoting::Messaging::IMessage* call);

  /// @brief Method SyncProcessMessage, addr 0x3ce05e8, size 0x2b4, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  constexpr ::System::Runtime::Remoting::Messaging::IMessage* const& __cordl_internal_get__call() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMessage*& __cordl_internal_get__call();

  constexpr ::System::Runtime::Remoting::Contexts::Context* const& __cordl_internal_get__context() const;

  constexpr ::System::Runtime::Remoting::Contexts::Context*& __cordl_internal_get__context();

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& __cordl_internal_get__next() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __cordl_internal_get__next();

  constexpr void __cordl_internal_set__call(::System::Runtime::Remoting::Messaging::IMessage* value);

  constexpr void __cordl_internal_set__context(::System::Runtime::Remoting::Contexts::Context* value);

  constexpr void __cordl_internal_set__next(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  /// @brief Method .ctor, addr 0x3ce05a4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* next, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Runtime::Remoting::Messaging::IMessage* call);

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrossContextChannel_ContextRestoreSink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrossContextChannel_ContextRestoreSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrossContextChannel_ContextRestoreSink(CrossContextChannel_ContextRestoreSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrossContextChannel_ContextRestoreSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrossContextChannel_ContextRestoreSink(CrossContextChannel_ContextRestoreSink const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3101 };

  /// @brief Field _next, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ____next;

  /// @brief Field _context, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::Context* ____context;

  /// @brief Field _call, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessage* ____call;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Contexts::CrossContextChannel_ContextRestoreSink, ____next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Contexts::CrossContextChannel_ContextRestoreSink, ____context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Contexts::CrossContextChannel_ContextRestoreSink, ____call) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Contexts::CrossContextChannel_ContextRestoreSink, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Contexts
// Dependencies System.Object, System.Runtime.Remoting.Messaging.IMessageSink
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: System.Runtime.Remoting.Contexts.CrossContextChannel
class CORDL_TYPE CrossContextChannel : public ::System::Object {
public:
  // Declarations
  using ContextRestoreSink = ::System::Runtime::Remoting::Contexts::CrossContextChannel_ContextRestoreSink;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  /// @brief Method AsyncProcessMessage, addr 0x3ce0170, size 0x434, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  static inline ::System::Runtime::Remoting::Contexts::CrossContextChannel* New_ctor();

  /// @brief Method SyncProcessMessage, addr 0x3cdfda8, size 0x3c8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method .ctor, addr 0x3ce05e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrossContextChannel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrossContextChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrossContextChannel(CrossContextChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrossContextChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrossContextChannel(CrossContextChannel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3102 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Contexts::CrossContextChannel, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::CrossContextChannel);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::CrossContextChannel*, "System.Runtime.Remoting.Contexts", "CrossContextChannel");
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::CrossContextChannel_ContextRestoreSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::CrossContextChannel_ContextRestoreSink*, "System.Runtime.Remoting.Contexts", "CrossContextChannel/ContextRestoreSink");

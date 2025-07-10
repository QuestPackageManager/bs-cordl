#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/StackBuilderSink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StackBuilderSink)
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Proxies {
class RealProxy;
}
namespace System {
class MarshalByRefObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class StackBuilderSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::StackBuilderSink);
// Dependencies System.Object, System.Runtime.Remoting.Messaging.IMessageSink
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.StackBuilderSink
class CORDL_TYPE StackBuilderSink : public ::System::Object {
public:
  // Declarations
  /// @brief Field _rp, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rp, put = __cordl_internal_set__rp)) ::System::Runtime::Remoting::Proxies::RealProxy* _rp;

  /// @brief Field _target, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__target, put = __cordl_internal_set__target)) ::System::MarshalByRefObject* _target;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  /// @brief Method AsyncProcessMessage, addr 0x3cf30c0, size 0x11c, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  /// @brief Method CheckParameters, addr 0x3cf2cfc, size 0x3c4, virtual false, abstract: false, final false
  inline void CheckParameters(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method ExecuteAsyncMessage, addr 0x3cf31dc, size 0x1e0, virtual false, abstract: false, final false
  inline void ExecuteAsyncMessage(::System::Object* ob);

  static inline ::System::Runtime::Remoting::Messaging::StackBuilderSink* New_ctor(::System::MarshalByRefObject* obj, bool forceInternalExecute);

  /// @brief Method SyncProcessMessage, addr 0x3cf2c30, size 0xcc, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method <AsyncProcessMessage>b__4_0, addr 0x3cf33bc, size 0x80, virtual false, abstract: false, final false
  inline void _AsyncProcessMessage_b__4_0(::System::Object* data);

  constexpr ::System::Runtime::Remoting::Proxies::RealProxy* const& __cordl_internal_get__rp() const;

  constexpr ::System::Runtime::Remoting::Proxies::RealProxy*& __cordl_internal_get__rp();

  constexpr ::System::MarshalByRefObject* const& __cordl_internal_get__target() const;

  constexpr ::System::MarshalByRefObject*& __cordl_internal_get__target();

  constexpr void __cordl_internal_set__rp(::System::Runtime::Remoting::Proxies::RealProxy* value);

  constexpr void __cordl_internal_set__target(::System::MarshalByRefObject* value);

  /// @brief Method .ctor, addr 0x3cf2b8c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::MarshalByRefObject* obj, bool forceInternalExecute);

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackBuilderSink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StackBuilderSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackBuilderSink(StackBuilderSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackBuilderSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackBuilderSink(StackBuilderSink const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3189 };

  /// @brief Field _target, offset: 0x10, size: 0x8, def value: None
  ::System::MarshalByRefObject* ____target;

  /// @brief Field _rp, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Remoting::Proxies::RealProxy* ____rp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Messaging::StackBuilderSink, ____target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::StackBuilderSink, ____rp) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::StackBuilderSink, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::StackBuilderSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::StackBuilderSink*, "System.Runtime.Remoting.Messaging", "StackBuilderSink");

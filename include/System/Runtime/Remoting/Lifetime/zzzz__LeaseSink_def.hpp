#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Lifetime/LeaseSink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LeaseSink)
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
namespace System::Runtime::Remoting::Lifetime {
class LeaseSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Lifetime::LeaseSink);
// Dependencies System.Object, System.Runtime.Remoting.Messaging.IMessageSink
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// CS Name: System.Runtime.Remoting.Lifetime.LeaseSink
class CORDL_TYPE LeaseSink : public ::System::Object {
public:
  // Declarations
  /// @brief Field _nextSink, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__nextSink, put = __cordl_internal_set__nextSink)) ::System::Runtime::Remoting::Messaging::IMessageSink* _nextSink;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  /// @brief Method AsyncProcessMessage, addr 0x3cdcc3c, size 0xc4, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  static inline ::System::Runtime::Remoting::Lifetime::LeaseSink* New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink);

  /// @brief Method RenewLease, addr 0x3cdc9b0, size 0x28c, virtual false, abstract: false, final false
  inline void RenewLease(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method SyncProcessMessage, addr 0x3cdc900, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& __cordl_internal_get__nextSink() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __cordl_internal_get__nextSink();

  constexpr void __cordl_internal_set__nextSink(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  /// @brief Method .ctor, addr 0x3cdc8d8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink);

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaseSink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaseSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaseSink(LeaseSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaseSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaseSink(LeaseSink const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3094 };

  /// @brief Field _nextSink, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ____nextSink;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Lifetime::LeaseSink, ____nextSink) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Lifetime::LeaseSink, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Lifetime
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::LeaseSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::LeaseSink*, "System.Runtime.Remoting.Lifetime", "LeaseSink");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDynamicMessageSink)
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IDynamicMessageSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::IDynamicMessageSink);
// Type: System.Runtime.Remoting.Contexts::IDynamicMessageSink
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Contexts::IDynamicMessageSink*
class CORDL_TYPE IDynamicMessageSink {
public:
  // Declarations
  /// @brief Method ProcessMessageFinish, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessMessageFinish(::System::Runtime::Remoting::Messaging::IMessage* replyMsg, bool bCliSide, bool bAsync);

  /// @brief Method ProcessMessageStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessMessageStart(::System::Runtime::Remoting::Messaging::IMessage* reqMsg, bool bCliSide, bool bAsync);

  // Ctor Parameters [CppParam { name: "", ty: "IDynamicMessageSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDynamicMessageSink(IDynamicMessageSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDynamicMessageSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDynamicMessageSink(IDynamicMessageSink const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IDynamicMessageSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IDynamicMessageSink*, "System.Runtime.Remoting.Contexts", "IDynamicMessageSink");
